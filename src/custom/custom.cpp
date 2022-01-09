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

static Bit8u custom_runs;
volatile bool defered_custom_call = false;

static Bit8u init_runs;
Bit16u custom_oldCS, custom_oldIP;

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

  R (MOV (ax, 0x3000));
  R (_INT (0x21));
  fprintf (stderr, "DOS ver:%d\n", al);

  R (MOV (ah, 0x2c));
  R (_INT (0x21));
  fprintf (stderr, "%d:%d:%d\n", ch, cl, dh);
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
  bool fix_segs()
  {
    for (size_t i = 0; i < 7; i++)
      {
        Segs.phys[i] = Segs.val[i] << 4;
      }
    return true;
  }

  void execute_irqs()
  {
    X86_REGREF
//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);
 static volatile bool already_in_hw_int = false;
        if (!already_in_hw_int && GET_IF())  // Do not call from IRQs
          {
            already_in_hw_int = true;

            {
#if DEBUG
//              log_debug ("Start hw int\n");
#endif
              fix_segs();
              bool oldCPU_CycleAutoAdjust = CPU_CycleAutoAdjust;
              CPU_CycleAutoAdjust = true; // So the CPU_Cycles won't be set to 0
              CALLBACK_Idle();
              CPU_CycleAutoAdjust = oldCPU_CycleAutoAdjust;
#if DEBUG
//              log_debug ("Stop hw int\n");
#endif
            }
            already_in_hw_int = false;

          }
        else if (!GET_IF() && fix_segs() && !PIC_RunQueue())  // Can only call PIC_RunQueue() separatelly if IF=0
          {                                     // So no IRQ interrupts will be started
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

  void run_hw_interrupts()
  {
    X86_REGREF
//    log_debug ("CPU_Cycles %d\n", CPU_Cycles);
    if (CPU_Cycles > 0)
      {
        CPU_Cycles--;
      }

    if (CPU_Cycles == 0)
      {
//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);
        execute_irqs();
      }

  }

void single_step()
{
				m2c::fix_segs();
				Bitu old_cycles=CPU_Cycles;
				CPU_Cycles=1;
				Bits nc_retcode=CPU_Core_Normal_Run();
				if (!nc_retcode) {
					CPU_Cycles=old_cycles-1;
				}
				CPU_CycleLeft+=old_cycles;
}

}
#endif /* DOSBOX_CUSTOM */
