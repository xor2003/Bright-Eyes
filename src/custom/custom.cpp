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

static Bit8u init_runs;
Bit16u custom_oldCS, custom_oldIP;
//static class custom_prog running_progs[2];

//static class custom_prog *current;

void custom_init_prog(char *name, Bit16u relocate, Bit16u init_cs, Bit16u init_ip)
{
/*
	int check;

	if (custom_runs)
		current->suspend();
*/

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
		init_runs--;
	}
}

int custom_calln(Bit16u IP)
{
	return 0;
/*
        custom_oldCS = SegValue(cs);
	custom_oldIP = reg_ip;
	if (!custom_runs)
		return 0;

	if (init_runs)
		return init_calln16(IP);

	return 0;
*/
}

int custom_callf(Bitu CS, Bitu IP)
{
        custom_oldCS = cs; //SegValue(cs);
	custom_oldIP = reg_ip;
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
//	custom_prog *p_current = new custom_prog;
	sec->AddDestroyFunction(&custom_exit);
	fprintf(stderr, "Masm2c/DOSBOX lib, build date %s\n", __DATE__);

//struct _STATE* _state;
X86_REGREF
/*
	fprintf(stderr, "CF=%d\n", GET_CF());
        R(MOV(eax,3));
        R(SUB(eax,4));
	fprintf(stderr, "CF=%d\n", GET_CF());
*/
        R(MOV(ah,0x2c));
        R(_INT(0x21));
	fprintf(stderr, "%d:%d:%d\n", ch,cl,dh);
        R(MOV(ax,0x3000));
        R(_INT(0x21));
	fprintf(stderr, "DOS ver:%d\n", al);
        R(MOV(ah,2));
        R(MOV(dl,'R'));
        R(_INT(0x21));
}

void custom_init_entrypoint(char *name, Bit16u relocate)
{
	if (!custom_runs)
		return;

	if (init_runs) {
                init_entrypoint(relocate);
		printf("Succesful exit\n");
                sleep(120);
                exit(0);
	}

}
#endif /* DOSBOX_CUSTOM */
