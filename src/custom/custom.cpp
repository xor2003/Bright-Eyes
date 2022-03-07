#include "dosbox.h"

#ifdef DOSBOX_CUSTOM
#include "circular_buffer.h"

#include "setup.h"
#include "regs.h"
#include "custom.h"
#include "custom_hooks.h"

#include "asm.h"

#include <stdio.h>
#include <unistd.h>


namespace m2c
{
  extern size_t debug;
}

bool compare_instructions = m2c::debug == 1;
bool
  trace_instructions = m2c::debug > 1;

static const size_t
  COMPARE_SIZE = 0xf0000;

extern Bitu
Normal_Loop (void);

static int
  custom_runs = 0;

Bitu
  old_cycles;                   // to stop interpretation but remmember the cycles remain
std::stack < Bit32u > return_point;

volatile bool defered_custom_call = false;
volatile bool from_callf = false;

static int init_runs = 0;
static int init = 0;

void init_entrypoint (Bit16u relocate);

bool __dispatch_call (m2c::_offsets __i, struct m2c::_STATE * _state);

namespace m2c
{
  extern void Initializer ();
}

#if __WIN32__
void *
memmem (const void *haystack, size_t haystack_len, const void *const needle, const size_t needle_len)
{
  if (haystack == NULL)
    return NULL;                // or assert(haystack != NULL);
  if (haystack_len == 0)
    return NULL;
  if (needle == NULL)
    return NULL;                // or assert(needle != NULL);
  if (needle_len == 0)
    return NULL;

  for (const char *h = (const char *)haystack; haystack_len >= needle_len; ++h, --haystack_len)
    {
      if (!memcmp (h, needle, needle_len))
        {
          return (void *) h;
        }
    }
  return NULL;
}
#endif

void
masm2c_exit (unsigned char exit)
{
  init++;
  log_debug ("masm2c_exit Exiting\n");
  //m2c::stackDump();
}

int
init_callf (unsigned selector, unsigned offs)
{
//      if (selector == ss)
//              return 0;
  if (selector >= 0xa000)
    return 0;

  return __dispatch_call ((selector << 16) + offs, 0);
}


extern bool __dispatch_call (m2c::_offsets __disp, struct m2c::_STATE * _state);
// Is the game running?
/**
	init_get_fname - copies the filename from src to dst
	@src:	pathname to a file
	@dst:	string where the filename shoukld be stored
*/
void
init_get_fname (char *dst, char *src)
{
  char *p = NULL;
  char *c = src;

  while (*c != '\0')
    {
      if (*c == '\\')
        p = c + 1;
      c++;
    }

  /* No backslash in src */
  if (p == NULL)
    p = src;

  while ((*dst++ = tolower (*p++)));
  *dst = '\0';
}

namespace m2c{
static void print_traces ();
}

void
custom_init_prog (char *name, Bit16u relocate, Bit16u init_cs, Bit16u init_ip)
{
  /* run all detectors */
  if (masm2c_init (name, relocate, init_cs, init_ip))
    {
      custom_runs++;
      init_runs++;
      atexit (m2c::stackDump);
    }
}


void
custom_exit_prog (Bit8u exitcode)
{
  if (!custom_runs)
    return;

  custom_runs--;
  if (init_runs)
    {
      masm2c_exit (exitcode);
      exit (0);

      init_runs--;
    }
}

int
custom_callf (Bitu CS, Bitu IP)
{
  if (!custom_runs)
    return 0;

  if (init_runs)
    return init_callf (CS, IP);

  return 0;
}

static void
custom_exit (Section * sec)
{
  custom_exit_prog (0);
}

void
custom_init (Section * sec)
{
  sec->AddDestroyFunction (&custom_exit);
  fprintf (stderr, "Masm2c/DOSBOX lib, build date %s\n", __DATE__);

  X86_REGREF m2c::_STATE * _state = 0;
/*
    fedisableexcept(FE_INVALID   | 
                   FE_DIVBYZERO | 
                   FE_OVERFLOW  | 
                   FE_UNDERFLOW);

  struct sigaction my_action;

  my_action.sa_handler = SIG_IGN;
  my_action.sa_flags = SA_RESTART;
  sigaction(SIGFPE, &my_action, NULL);
*/
  R (MOV (ax, 0x3000));
  R (_INT (0x21));
  fprintf (stderr, "DOS ver:%d\n", al);
}

void
custom_init_entrypoint (char *name, Bit16u relocate)
{
  if (!custom_runs)
    return;

  if (init_runs)
    {
      init_entrypoint (relocate);
    }

}

namespace m2c
{
  extern void Initializer ();

#ifdef DEBUG
  size_t debug = DEBUG;
#else
  size_t debug = 0;
#endif

  size_t counter = 0;
  ShadowStack shadow_stack;;

  db om[COMPARE_SIZE];          // for instruction trace compare
  db rm[COMPARE_SIZE];
  dd oldip;
  Segments oldSegs;
  CPU_Regs oldcpu_regs;
  Bitu realflags;
  Segments realSegs;
  CPU_Regs realcpu_regs;
  bool already_checked[COMPARE_SIZE] = { 0 };

  db lm[COMPARE_SIZE];          // memory after load to trace self-modified code


  db _indent = 0;
  const char *_str = "";

  const char *log_spaces (int n)
  {
    static const char s[] =
"                                                                                          ";
    return n <= 84 ? s + (84 - n) : "";
  }


  bool fix_segs ()
  {
    for (size_t i = 0; i < 7; i++)
      {
        Segs.phys[i] = Segs.val[i] << 4;
      }
    return true;
  }

  void execute_irqs ()
  {
    X86_REGREF
//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);
    static volatile bool already_in_hw_int = false;
    if (!already_in_hw_int && GET_IF ())        // Do not call from IRQs
      {
        already_in_hw_int = true;

        {
#if DEBUG
//              log_debug ("Start hw int\n");
#endif
          fix_segs ();
          bool oldCPU_CycleAutoAdjust = CPU_CycleAutoAdjust;
          CPU_CycleAutoAdjust = true;   // So the CPU_Cycles won't be set to 0
          CALLBACK_Idle ();
          CPU_CycleAutoAdjust = oldCPU_CycleAutoAdjust;
#if DEBUG
//              log_debug ("Stop hw int\n");
#endif
        }
        already_in_hw_int = false;

      }
    else if (!GET_IF () && fix_segs () && !PIC_RunQueue ())     // Can only call PIC_RunQueue() separatelly if IF=0
      {                         // So no IRQ interrupts will be started
        GFX_Events ();
        if (ticksRemain > 0)
          {
            TIMER_AddTick ();
            ticksRemain--;
          }
        else
          {
            increaseticks ();
          }
      }

  }

  void run_hw_interrupts ()
  {
//    X86_REGREF
//    log_debug ("CPU_Cycles %d\n", CPU_Cycles);
    if (CPU_Cycles > 0)
      {
        CPU_Cycles--;
      }

    if (CPU_Cycles == 0)
      {
//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);
        execute_irqs ();
      }

  }

  void single_step ()
  {
    m2c::fix_segs ();
    old_cycles = CPU_Cycles;
    dd oldeip = (Segs.val[1] << 16) + cpu_regs.ip.word[0];
    dd neweip (oldeip);
    Bits nc_retcode;
//log_debug("s1 %x:%x\n",Segs.val[1],cpu_regs.ip.word[0]);
    do
      {
        CPU_Cycles = 1;
        nc_retcode = CPU_Core_Normal_Run ();
        neweip = (Segs.val[1] << 16) + cpu_regs.ip.word[0];
      }
    while (neweip == oldeip);   // to handle REP*
//log_debug("s2 %x:%x\n",Segs.val[1],cpu_regs.ip.word[0]);
    CPU_Cycles = old_cycles;
    // // log_debug ("CPU_Cycles=%d CPU_CycleLeft=%d\n", CPU_Cycles, CPU_CycleLeft);
  }

  void mycopy (db * d, db * s, size_t size, const char *name)
  {
#if DEBUG
    int res = memcmp (d, s, size);
    if (res)
      {
        log_debug ("non-equal %s addr=%x size=%d", name, d - ((db *) & m2c::m), size);
        void *p = memmem (((db *) & m2c::m) + 0x1920, COMPARE_SIZE, s, size);
        if (size > 3 && p)
          {
            log_debug (" found at %x", ((db *) p) - d);
          }
        log_debug ("\nm2c ");
        hexDump (s, size);
        log_debug ("memory ");
        hexDump (d, size);
      }
#else
    //      log_debug("Init %zx %zd\n", d - ((db*)&m), size);
    memcpy (d, s, size);
    memset (((db *) & types) + (d - ((db *) & m)), 0xff, size);
#endif
  }

// thanks to paxdiablo http://stackoverflow.com/users/14860/paxdiablo for the hexDump function
  void hexDump (void *addr, int len)
  {
    int i;
    unsigned char buff[17];
    unsigned char *pc = (unsigned char *) addr;
    (void) buff;
    log_debug ("hexDump %p:\n", addr);

    if (len == 0)
      {
        log_debug ("  ZERO LENGTH\n");
        return;
      }
    if (len < 0)
      {
        log_debug ("  NEGATIVE LENGTH: %i\n", len);
        return;
      }

    // Process every byte in the data.
    for (i = 0; i < len; i++)
      {
        // Multiple of 16 means new line (with line offset).

        if ((i % 16) == 0)
          {
            // Just don't print ASCII for the zeroth line.
            if (i != 0)
              log_debug ("  %s\n", buff);

            // Output the offset.
            log_debug ("  %04x ", i);
          }

        // Now the hex code for the specific character.
        log_debug (" %02x", pc[i]);

        // And store a printable ASCII character for later.
        if ((pc[i] < 0x20) || (pc[i] > 0x7e))
          buff[i % 16] = '.';
        else
          buff[i % 16] = pc[i];
        buff[(i % 16) + 1] = '\0';
      }

    // Pad out last line if not exactly 16 characters.
    while ((i % 16) != 0)
      {
        log_debug ("   ");
        i++;
      }

    // And print the final ASCII bit.
    log_debug ("  %s\n", buff);
  }

  void cmpHexDump (void *addr1, void *addr2, int len)
  {
    int i, j;
    unsigned char buff1[17];
    unsigned char buff2[17];
    unsigned char *pc1 = (unsigned char *) addr1;
    unsigned char *pc2 = (unsigned char *) addr2;
    log_debug ("cmpHexDump %p %p:\n", pc1, pc2);

    if (len == 0)
      {
        log_debug ("  ZERO LENGTH\n");
        return;
      }
    if (len < 0)
      {
        log_debug ("  NEGATIVE LENGTH: %i\n", len);
        return;
      }

    // Process every byte in the data.
    for (i = 0; i < len; i++)
      {
        // Multiple of 16 means new line (with line offset).
        size_t size = i + 16 <= len ? 16 : len - i;
        if (memcmp (&pc1[i], &pc2[i], size) != 0)
          {
            // Output the offset.
            log_debug ("  %04x ", i);

            for (j = 0; j < size; j++)
              {
                // Now the hex code for the specific character.
                log_debug (" %02x", pc1[i + j]);

                // And store a printable ASCII character for later.
                if ((pc1[i + j] < 0x20) || (pc1[i + j] > 0x7e))
                  buff1[j] = '.';
                else
                  buff1[j] = pc1[i + j];
              }
            buff1[j] = '\0';

            log_debug ("  %s\n", buff1);
            log_debug ("       ");
            for (j = 0; j < size; j++)
              {
                // Now the hex code for the specific character.
                log_debug (" %02x", pc2[i + j]);

                // And store a printable ASCII character for later.
                if ((pc2[i + j] < 0x20) || (pc2[i + j] > 0x7e))
                  buff2[j] = '.';
                else
                  buff2[j] = pc2[i + j];
              }
            buff2[j + 1] = '\0';

            // And print the final ASCII bit.
            log_debug ("  %s\n", buff2);
          }
        i += size;
      }
  }

  void stackDump()//struct _STATE *_state)
  {
    m2c::print_traces();
    shadow_stack.print (0);
  }

  bool Tstart (const char *file, int line, const char *instr)
  {
    run_hw_interrupts ();
    m2c::log_regs_dbx (file, line, instr, cpu_regs, Segs);
    if (!compare_instructions)
      return true;

    oldip = cpu_regs.ip.word[0];

    dd ip1 = cpu_regs.ip.word[0];
    dw seg = Segs.val[1];

    bool compare (compare_instructions && !already_checked[(seg << 4) + ip1]);
    if (compare)
      {
        oldSegs = Segs;
        oldcpu_regs = cpu_regs;
      }
    single_step ();
    if (!compare)
      {
        if (CPU_Cycles > 0)
          --CPU_Cycles;
        return false;
      }
    already_checked[(seg << 4) + ip1] = true;

    dd ip2 = cpu_regs.ip.word[0];
    size_t instr_size = ip2 - ip1;
    if (memcmp (m2c::lm + (seg << 4) + ip1, (db *) & m2c::m + (seg << 4) + ip1, instr_size) != 0)
      {
        log_info ("~self-modified instruction %x:%x\n", seg, ip1);
        //hexDump (m2c::lm+(seg<<4)+ip1, 5);
        //hexDump ((db*)&m2c::m+(seg<<4)+ip1, 5);
        print_instruction (seg, ip1);
        cmpHexDump (m2c::lm + (seg << 4) + ip1, (db *) & m2c::m + (seg << 4) + ip1, instr_size);
        return false;
      }
    else
      {
        realflags = cpu_regs.flags;
        cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
        realSegs = Segs;
        realcpu_regs = cpu_regs;
        Segs = oldSegs;
        cpu_regs = oldcpu_regs;
        return true;
      }
  }

  void Tend (const char *file, int line, const char *instr)
  {
    if (!compare_instructions)
      return;

    fix_segs ();
    cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
    cpu_regs.ip = realcpu_regs.ip;

    if (memcmp (&cpu_regs, &realcpu_regs, sizeof (CPU_Regs)) != 0 || memcmp (&Segs, &realSegs, sizeof (Segments)) != 0)
      {
        trace_instructions = true;
        bool regs_ch = memcmp (&cpu_regs, &realcpu_regs, sizeof (CPU_Regs));
        bool segs_ch = memcmp (&Segs, &realSegs, sizeof (Segments));
        log_debug ("before ");
        log_regs_dbx ("", line, instr, oldcpu_regs, oldSegs);
        log_error ("/-----------------------------Error-----------------------------------------\\\n");
//        cpu_regs.ip.word[0] = oldip;
        log_error ("cs:ip: ");
        print_instruction (Segs.val[1] >> 4, oldip);
        hexDump (raddr (Segs.val[1], oldip), 8);

        log_error ("~m2c ");
        log_regs_dbx ("", line, instr, cpu_regs, Segs);

        if (regs_ch)
          {
            log_error ("reg ");
            hexDump (&cpu_regs, sizeof (CPU_Regs));
          }
        if (segs_ch)
          {
            log_error ("seg ");
            hexDump (&Segs, sizeof (Segments));
          }

        Segs = realSegs;
        cpu_regs = realcpu_regs;

        log_error ("~dbx ");
        log_regs_dbx ("", line, instr, realcpu_regs, realSegs);
        if (regs_ch)
          {
            log_error ("reg ");
            hexDump (&cpu_regs, sizeof (CPU_Regs));
          }
        if (segs_ch)
          {
            log_error ("seg ");
            hexDump (&Segs, sizeof (Segments));
          }
        exit (1);
        log_error ("\\-----------------------------Error-----------------------------------------/\n");
      }
    cpu_regs.flags = realflags;
  }

  bool Xstart (const char *file, int line, const char *instr)
  {
    run_hw_interrupts ();
    m2c::log_regs_dbx (file, line, instr, cpu_regs, Segs);
    if (!compare_instructions)
      return true;

    oldip = cpu_regs.ip.word[0];

    dd ip1 = cpu_regs.ip.word[0];
    dw seg = Segs.val[1];
    bool compare (compare_instructions && !already_checked[(seg << 4) + ip1]);
    if (compare)
      {
        oldSegs = Segs;
        oldcpu_regs = cpu_regs;
        memcpy (om, &m, COMPARE_SIZE);
      }
    single_step ();
    if (!compare)
      {
        if (CPU_Cycles > 0)
          --CPU_Cycles;
        return false;
      }
    already_checked[(seg << 4) + ip1] = true;

    dd ip2 = cpu_regs.ip.word[0];
    size_t instr_size = ip2 - ip1;
    if (memcmp (m2c::lm + (seg << 4) + ip1, (db *) & m2c::m + (seg << 4) + ip1, instr_size) != 0)
      {
        log_info ("~self-modified instruction %x:%x\n", seg, ip1);
        //hexDump (m2c::lm+(seg<<4)+ip1, 5);
        //hexDump ((db*)&m2c::m+(seg<<4)+ip1, 5);
        print_instruction (seg, ip1);
        cmpHexDump (m2c::lm + (seg << 4) + ip1, (db *) & m2c::m + (seg << 4) + ip1, instr_size);
        return false;
      }
    else
      {
        realflags = cpu_regs.flags;
        cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
        realSegs = Segs;
        realcpu_regs = cpu_regs;
        memcpy (rm, &m, COMPARE_SIZE);

        Segs = oldSegs;
        cpu_regs = oldcpu_regs;
        memcpy (&m, om, COMPARE_SIZE);
        return true;
      }
  }

  void Xend (const char *file, int line, const char *instr)
  {
    if (!compare_instructions)
      return;

    fix_segs ();
    cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
    cpu_regs.ip = realcpu_regs.ip;

    if (memcmp (&cpu_regs, &realcpu_regs, sizeof (CPU_Regs)) != 0 ||
        memcmp (&Segs, &realSegs, sizeof (Segments)) != 0 || memcmp (&m, rm, COMPARE_SIZE) != 0)
      {
        trace_instructions = true;
        bool regs_ch = memcmp (&cpu_regs, &realcpu_regs, sizeof (CPU_Regs));
        bool segs_ch = memcmp (&Segs, &realSegs, sizeof (Segments));
        bool mem_ch = memcmp (&m, rm, COMPARE_SIZE);
        log_debug ("before ");
        log_regs_dbx ("", line, instr, oldcpu_regs, oldSegs);
        log_error ("/-----------------------------Error-----------------------------------------\\\n");
//        cpu_regs.ip.word[0] = oldip;
        log_error ("cs:ip: ");
        print_instruction (Segs.val[1] >> 4, oldip);
        hexDump (raddr (Segs.val[1], oldip), 8);
        log_error ("~m2c ");
        log_regs_dbx ("", line, instr, cpu_regs, Segs);
        if (regs_ch)
          {
            log_error ("reg ");
            hexDump (&cpu_regs, sizeof (CPU_Regs));
          }
        if (segs_ch)
          {
            log_error ("seg ");
            hexDump (&Segs, sizeof (Segments));
          }

        Segs = realSegs;
        cpu_regs = realcpu_regs;
        log_error ("~dbx ");
        log_regs_dbx ("", line, instr, realcpu_regs, realSegs);
        if (regs_ch)
          {
            log_error ("reg ");
            hexDump (&cpu_regs, sizeof (CPU_Regs));
          }
        if (segs_ch)
          {
            log_error ("seg ");
            hexDump (&Segs, sizeof (Segments));
          }
        if (mem_ch)
          {
            log_error ("~mem m2c / dbx\n");
            cmpHexDump (&m, rm, COMPARE_SIZE);
          }
        exit (1);
        log_error ("\\-----------------------------Error-----------------------------------------/\n");
      }
    cpu_regs.flags = realflags;
  }

  static void log_regs_dbx_real (size_t counter_, const char *file, int line, db indent, const char *instr, const CPU_Regs & r,
                                 const Segments & s)
  {
/*
enum SegNames { es=0,cs=1,ss=2,ds=3,fs=4,gs=5};
struct Segments {
	Bit16u val[8];
};
union GenReg32 {
	Bit32u dword[1];
};
struct CPU_Regs {
	GenReg32 regs[8],ip;
	Bitu flags;
	REGI_AX=0, REGI_CX=1, REGI_DX=2, REGI_BX=3,
	REGI_SP=4, REGI_BP=5, REGI_SI=6, REGI_DI=7
};
#define reg_32(reg) (cpu_regs.regs[(reg)].dword[DW_INDEX])
};*/
    log_debug
      ("%8x %s:%06d %04X:%04X %s%s%s AX:%04X BX:%04X CX:%04X DX:%04X SI:%04X DI:%04X BP:%04X SP:%04X DS:%04X ES:%04X FS:%04X GS:%04X SS:%04X CF:%x ZF:%x SF:%x OF:%x AF:%x PF:%x IF:%x\n",
       counter_, file, line, s.val[1], r.ip, log_spaces(indent), instr, log_spaces(84-indent-strlen(instr)), r.regs[0].dword[0], r.regs[3].dword[0], r.regs[1].dword[0],
       r.regs[2].dword[0], r.regs[6].dword[0], r.regs[7].dword[0], r.regs[5].dword[0], r.regs[4].dword[0], s.val[3],
       s.val[0], s.val[4], s.val[5], s.val[2], (r.flags & FLAG_CF)!=0, (r.flags & FLAG_ZF)!=0, (r.flags & FLAG_SF)!=0,
       (r.flags & FLAG_OF)!=0, (r.flags & FLAG_AF)!=0, (r.flags & FLAG_PF)!=0, (r.flags & FLAG_IF)!=0);
  }

  struct CPU_State
  {
    size_t counter;
    const char *file;
    int line;
    db indent;
    const char *instr;
    CPU_Regs regs;
    Segments segs;
  };

  CircularBuffer < CPU_State > trace_store (100000);

  static void print_traces ()
  {
    while (!trace_store.empty ())
      {
        CPU_State& cs = trace_store.front ();
        log_regs_dbx_real (cs.counter, cs.file, cs.line, cs.indent, cs.instr, cs.regs, cs.segs);
        trace_store.pop_front ();
      }
  }

  void log_regs_dbx (const char *file, int line, const char *instr, const CPU_Regs & r, const Segments & s)
  {
    ++counter;
    if (trace_instructions)
      {
        if (debug == 2)
          {
        CPU_State cs={counter, file, line, _indent, instr, r, s};
        trace_store.push_back (cs);
          }
        else
          {
        log_regs_dbx_real(counter, file, line, _indent, instr, r, s);
          }
      }
  }

  void interpret_unknown_callf (dw newcs, dd newip)
  {
    X86_REGREF if (cs == newcs && newip == eip)
      return;                   // Most probably a call of interpreter int from interpreter
    cs = newcs;
    eip = newip;
    dw oldsp = sp;
    fix_segs ();
    return_point.push (*(dd *) raddr (ss, sp));
#if DEBUG > 0
    log_debug ("Enter interp current cs=%x ip=%x sp=%x ret_point:%x retp.size()=%d\n", cs, ip, sp,
               return_point.top (), return_point.size ());
#endif
    do
      {
//  log_debug("start\n");
        Normal_Loop ();
//  log_debug("stop\n");
      }
    while (return_point.top () != (cs << 16) + ip);
    if (return_point.top () != (cs << 16) + ip)
      {
        log_error ("Error cs:ip != return_point %x\n", return_point.top ());
      }
#if DEBUG > 0
    log_debug ("Exit interp cs=%x ip=%x sp=%x\n", cs, ip, sp);
#endif
    if (oldsp + 4 != sp && cs != 0xf000)
      {
        log_error ("Error it should consume 4 bytes from stack\n");
        //stackDump ();
        exit (1);
      }
    return_point.pop ();
  }

  void ShadowStack::push (_STATE * _state, dd value)
  {
    if (m2c::debug)
      {
        X86_REGREF Frame f;
        f.cs = cs;
        f.ip = eip;
        f.sp = sp;
        f.value = value;
        f.addcounter = m2c::counter;
        f.remcounter = 0;
        f.pointer_ = (dw *) m2c::raddr_ (ss, sp);
        if (m_current == m_ss.size ())
          m_ss.resize (m_current + 1);
        m_ss[m_current++] = f;
//     m2c::log_info("ssize=%d\n",m_ss.size());
      }
  }

  void ShadowStack::pop (_STATE * _state)
  {
    if (m2c::debug)
      {
        X86_REGREF
//    m2c::log_info("ssize=%d\n",m_ss.size() );
          if (!m_ss.empty () && m_current)
          {
            dd tsp;
            size_t tcount = 0;
            do
              {
                tsp = m_ss[m_current - 1].sp;
                if ((tcount++) > 0)
                  log_error ("uncontrolled pop was before %x\n", tsp);
                if (tsp <= sp)
                  m_ss[--m_current].remcounter = m2c::counter;
              }
            while (tsp < sp);
          }
      }
  }

  void ShadowStack::print (_STATE * _state)
  {
    if (m2c::debug)
      {
        X86_REGREF if (!m_ss.empty ())
          log_debug (" Stack dump:\n");
        log_debug ("%8s %8s %4s:%4s %4s %4s %4s\n", "Alloc", "Dealloc", "cs", "ip", "sp", "Value", "Current value");
        for (int i = m_ss.size () - 1; i >= 0; i--)
          {
            Frame f = m_ss[i];
            if (i == m_current - 1)
              log_debug ("  ");
            log_debug ("%8x %8x %04x:%04x %4x %4x", f.addcounter, f.remcounter, f.cs, f.ip, f.sp, f.value);
            if (*f.pointer_ != f.value)
              log_debug (" %4x\n", *f.pointer_);
            else
              log_debug ("\n");
          }
      }
  }

}


//#include <cstdio>
void
init_entrypoint (Bit16u relocate)
{
  X86_REGREF log_debug ("Starting program\n");
  log_debug ("\n\nCS:IP 0x%x:0x%x\tMemBase: %p\n", cs, eip, MemBase);

//   memset(((db*)&m2c::m)+0x1920+0x100,0,0xfef0);
  m2c::Initializer ();

  memcpy (m2c::lm, &m2c::m, COMPARE_SIZE);      // backup memory after program loaded
/*
FILE* file_to_write = 0;
if((file_to_write = fopen("goody.com", "wb")) != 0){

    fwrite(((db*)&m2c::m)+0x1920+0x100, 0xff00, 1, file_to_write);
    fclose(file_to_write);
}
*/
  (*m2c::_ENTRY_POINT_) (0, 0);
}


#endif /* DOSBOX_CUSTOM */
