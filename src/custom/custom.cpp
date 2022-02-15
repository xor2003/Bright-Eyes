#include "dosbox.h"

#ifdef DOSBOX_CUSTOM

#include <stdio.h>

#include "setup.h"
#include "regs.h"
#include "custom.h"
#include "custom_hooks.h"

#include "asm.h"
#include "init.h"
#include <unistd.h>
#include <vector>

//#define _GNU_SOURCE
//#include <fenv.h>
//#include <signal.h>

static Bit8u custom_runs;
volatile bool defered_custom_call = false;

static Bit8u init_runs;
Bit16u custom_oldCS, custom_oldIP;
static int init=0;
 bool __dispatch_call(m2c::_offsets __i, struct m2c::_STATE* _state);
namespace m2c
{
extern void   Initializer();
}

void masm2c_exit(unsigned char exit)
{
		init++;
		m2c::log_info("masm2c_exit Exiting\n");
}

int init_callf(unsigned selector, unsigned offs)
{
//	if (selector == ss)
//		return 0;
	if (selector >= 0xa000)
		return 0;

	{
                return __dispatch_call((selector<<16) + offs, 0);
	}

	return 0;
}

//#include <cstdio>
void init_entrypoint(Bit16u relocate)
{
    X86_REGREF
   m2c::log_debug("Starting program\n");
   m2c::log_debug("\n\nCS:IP 0x%x:0x%x\tMemBase: %p\n", cs, eip, MemBase);
//   memset(((db*)&m2c::m)+0x1920+0x100,0,0xfef0);
   m2c::Initializer();
/*
FILE* file_to_write = 0;
if((file_to_write = fopen("goody.com", "wb")) != 0){

    fwrite(((db*)&m2c::m)+0x1920+0x100, 0xff00, 1, file_to_write);
    fclose(file_to_write);
}
*/
  (*m2c::_ENTRY_POINT_)(0,0);
}

extern bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);
// Is the game running?
/**
	init_get_fname - copies the filename from src to dst
	@src:	pathname to a file
	@dst:	string where the filename shoukld be stored
*/
void init_get_fname(char *dst, char *src) {
	char *p = NULL;
	char *c = src;

	while (*c != '\0') {
		if (*c == '\\')
			p = c + 1;
		c++;
	}

	/* No backslash in src*/
	if (p == NULL)
		p = src;

	while ((*dst++ = tolower(*p++)));
	*dst = '\0';
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "init.h"


int init_callf(unsigned selector, unsigned offs);

void init_entrypoint(Bit16u relocate);
*/


void
custom_init_prog (char *name, Bit16u relocate, Bit16u init_cs, Bit16u init_ip)
{
  /* run all detectors */
  if (masm2c_init (name, relocate, init_cs, init_ip))
    {
      custom_runs++;
      init_runs++;
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
      sleep (30);
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
extern void   Initializer();

  db om[1024 * 1024];           // for instruction trace compare
  db rm[1024 * 1024];
  dd oldip;
  Segments oldSegs;
  CPU_Regs oldcpu_regs;
  Bitu realflags;
  Segments realSegs;
  CPU_Regs realcpu_regs;



  db _indent = 0;
  const char *_str = "";
  const char *log_spaces (int n)
  {
    static const char s[] = "                                                                                          ";
      return s + (88 - n);
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
    Bitu old_cycles = CPU_Cycles;
    dd oldeip = cpu_regs.ip.dword[0];
    Bits nc_retcode;
    do
      {
        CPU_Cycles = 1;
        nc_retcode = CPU_Core_Normal_Run ();
      }
    while (oldeip == cpu_regs.ip.dword[0]);
    //if (!nc_retcode)
      {
        CPU_Cycles = old_cycles;
      }
    //CPU_CycleLeft += old_cycles;
    //log_debug ("CPU_Cycles=%d CPU_CycleLeft=%d\n", CPU_Cycles, CPU_CycleLeft);
  }

  void mycopy (db * d, db * s, size_t size, const char *name)
  {
#if DEBUG
    int res = memcmp (d, s, size);
    if (res)
      {
        log_debug ("non-equal %s addr=%x size=%d", name, d - ((db *) & m2c::m), size);
        void *p = memmem (((db *) & m2c::m) + 0x1920, 1024 * 1024, s, size);
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
   memcpy(d,s,size);
   log_debug("Init %zx %zd\n",d-((db*)&m)-0x1920,size);
   memset(((db*)&types)+(d-((db*)&m)),0xff,size);
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
//      (void) buff;
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

  void stackDump (struct _STATE *_state)
  {
    X86_REGREF log_debug ("is_little_endian()=%d\n", __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__);
    log_debug ("sizeof(dd)=%zu\n", sizeof (dd));
    log_debug ("sizeof(dd *)=%zu\n", sizeof (dd *));
    log_debug ("sizeof(dw)=%zu\n", sizeof (dw));
    log_debug ("sizeof(db)=%zu\n", sizeof (db));
//      log_debug("sizeof(jmp_buf)=%zu\n",sizeof(jmp_buf));
//      log_debug("sizeof(mem)=%zu\n",sizeof(m));
    log_debug ("eax: %x\n", eax);
//      hexDump(&eax,sizeof(dd));
    log_debug ("ebx: %x\n", ebx);
    log_debug ("ecx: %x\n", ecx);
    log_debug ("edx: %x\n", edx);
    log_debug ("ebp: %x\n", ebp);
    log_debug ("cs: %d -> %p\n", cs, (void *) realAddress (0, cs));
    log_debug ("ds: %d -> %p\n", ds, (void *) realAddress (0, ds));
    log_debug ("esi: %x\n", esi);
    log_debug ("ds:esi %p\n", (void *) realAddress (esi, ds));
    log_debug ("es: %d -> %p\n", es, (void *) realAddress (0, es));
    hexDump (&es, sizeof (dd));
    log_debug ("edi: %x\n", edi);
    log_debug ("es:edi %p\n", (void *) realAddress (edi, es));
    hexDump ((void *) realAddress (edi, es), 50);
    log_debug ("fs: %d -> %p\n", fs, (void *) realAddress (0, fs));
    log_debug ("gs: %d -> %p\n", gs, (void *) realAddress (0, gs));
//      log_debug("adress heap: %p\n",(void *) &m.heap);
#ifndef NOSDL
#if SDL_MAJOR_VERSION == 2
    log_debug ("adress vgaRam: %p\n", (void *) &vgaRam);
    log_debug ("first pixels vgaRam: %x\n", *vgaRam);
#endif
#endif
    log_debug ("flags: ZF = %d\n", GET_ZF ());
    log_debug ("top stack=%d\n", stackPointer);
//      checkIfVgaRamEmpty();
  }

  void Tstart (int line, const char *instr)
  {
    oldip = cpu_regs.ip.dword[0];
    run_hw_interrupts ();
    log_debug ("b ");
    log_regs (line, instr, 0);
    oldSegs = Segs; oldcpu_regs = cpu_regs;

    single_step ();

    realflags = cpu_regs.flags;
    cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF;// | FLAG_OF;
    realSegs = Segs; realcpu_regs = cpu_regs;
    Segs = oldSegs; cpu_regs = oldcpu_regs;
  }

  void Tend (int line, const char *instr)
  {
    fix_segs ();
    cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF;// | FLAG_OF;
    cpu_regs.ip = realcpu_regs.ip;
    if (memcmp (&cpu_regs, &realcpu_regs, sizeof (CPU_Regs)) != 0 || memcmp (&Segs, &realSegs, sizeof (Segments)) != 0)
      {
        log_debug ("cs:ip: ");
        hexDump (raddr (Segs.val[1], oldip), 8);

        log_debug ("~m2c ");
        log_regs (line, instr, 0);
        log_debug ("reg ");
        hexDump (&cpu_regs, sizeof (CPU_Regs));
        log_debug ("seg ");
        hexDump (&Segs, sizeof (Segments));

        Segs = realSegs; cpu_regs = realcpu_regs;

        log_debug ("~dbx ");
        log_regs (line, instr, 0);
        log_debug ("reg ");
        hexDump (&cpu_regs, sizeof (CPU_Regs));
        log_debug ("seg ");
        hexDump (&Segs, sizeof (Segments));
        exit (1);
      }
    cpu_regs.flags = realflags;
  }

  void Xstart (int line, const char *instr)
  {
    oldip = cpu_regs.ip.dword[0];
    run_hw_interrupts ();
    log_debug ("b ");
    log_regs (line, instr, 0);

    oldSegs = Segs; oldcpu_regs = cpu_regs;
    memcpy (om, &m, 1024 * 1024);

    single_step ();

    realflags = cpu_regs.flags;
    cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF;// | FLAG_OF;
    realSegs = Segs; realcpu_regs = cpu_regs;
    memcpy (rm, &m, 1024 * 1024);

    Segs = oldSegs; cpu_regs = oldcpu_regs;
    memcpy (&m, om, 1024 * 1024);
  }

  void Xend (int line, const char *instr)
  {
    fix_segs ();
    cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF;// | FLAG_OF;
    cpu_regs.ip = realcpu_regs.ip;
    if (memcmp (&cpu_regs, &realcpu_regs, sizeof (CPU_Regs)) != 0 || memcmp (&Segs, &realSegs, sizeof (Segments)) != 0 ||
        memcmp (&m, rm, 1024 * 1024) != 0)
      {
        log_debug ("cs:ip: ");
        hexDump (raddr (Segs.val[1], oldip), 8);
        log_debug ("~m2c ");
        log_regs (line, instr, 0);
        log_debug ("reg ");
        hexDump (&cpu_regs, sizeof (CPU_Regs));
        log_debug ("seg ");
        hexDump (&Segs, sizeof (Segments));

        Segs = realSegs; cpu_regs = realcpu_regs;
        log_debug ("~dbx ");
        log_regs (line, instr, 0);
        log_debug ("reg ");
        hexDump (&cpu_regs, sizeof (CPU_Regs));
        log_debug ("seg ");
        hexDump (&Segs, sizeof (Segments));
        log_debug ("~mem m2c / dbx\n");
        cmpHexDump (&m, rm, 1024 * 1024);
        exit (1);
      }
    cpu_regs.flags = realflags;
  }


}

#endif /* DOSBOX_CUSTOM */
