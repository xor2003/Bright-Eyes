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
bool defered_custom_call = false;

static Bit8u init_runs;
Bit16u custom_oldCS, custom_oldIP;
//static class custom_prog running_progs[2];
namespace m2c{
int idle_counter=0;
}
//static class custom_prog *current;

void custom_init_prog(char *name, Bit16u relocate, Bit16u init_cs, Bit16u init_ip)
{
	/* run all detectors */
	if (masm2c_init(name, relocate, init_cs, init_ip)) {
		custom_runs++;
		init_runs++;
	}
}

void custom_exit_prog(Bit8u exitcode)
{
	if (!custom_runs)
		return;

	custom_runs--;
	if (init_runs) {
		masm2c_exit(exitcode);
                sleep(30);
           	exit(0);

		init_runs--;
	}
}

int custom_calln(Bit16u IP)
{
	return 0;
}

int custom_callf(Bitu CS, Bitu IP)
{
	if (!custom_runs)
		return 0;

	if (init_runs)
           return init_callf(CS, IP);

	return 0;
}

static void custom_exit(Section *sec)
{
	custom_exit_prog(0);
}

void custom_init(Section *sec)
{
	sec->AddDestroyFunction(&custom_exit);
	fprintf(stderr, "Masm2c/DOSBOX lib, build date %s\n", __DATE__);

X86_REGREF
m2c::_STATE* _state=0;

        R(MOV(ax,0x3000));
        R(_INT(0x21));
	fprintf(stderr, "DOS ver:%d\n", al);

        R(MOV(ah,0x2c));
        R(_INT(0x21));
	fprintf(stderr, "%d:%d:%d\n", ch,cl,dh);
}

void custom_init_entrypoint(char *name, Bit16u relocate)
{
	if (!custom_runs)
		return;

	if (init_runs) {
                init_entrypoint(relocate);
	}

}
#endif /* DOSBOX_CUSTOM */
