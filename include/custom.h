#ifndef DOSBOX_CUSTOM_H
#define DOSBOX_CUSTOM_H

#include "dosbox.h"

class custom_prog {
	public:
		virtual bool probe(char *name, Bit16u relocate,
				Bit16u init_cs, Bit16u init_ip) = 0;
		virtual void remove(Bit8u exitcode) = 0;
		virtual void suspend() = 0;
		virtual void resume() = 0;

		virtual int fcall_handler(Bitu seg, Bitu off) = 0;
		virtual int ncall_handler(Bit16u off) = 0;
	private:
};

extern volatile bool defered_custom_call; // int was call by interpreter and which m2c have to execute later
extern volatile bool from_callf; // check if m2c's interrupt called from interp or callf from m2c to interp bios
extern Bitu old_cycles; // backup remaining cycles
extern Bit32u return_point;

#if DOSBOX_CUSTOM
// old values of CS:IP (directly before the call), usable for diagnosis
extern Bit16u custom_oldCS, custom_oldIP;


void custom_init(Section *sec);

/* prototypes for Execution operations */
void custom_init_prog(char *, Bit16u, Bit16u, Bit16u);
void custom_exit_prog(Bit8u);
void custom_init_entrypoint(char *, Bit16u);

/* prototypes for CPU operations */
int custom_callf(Bitu, Bitu);

#else /* DOSBOX_CUSTOM */

static inline void custom_init(Section *sec) { }

/* prototypes for Execution operations */
static inline void
custom_init_prog(char *name, Bit16u relocate, Bit16u init_cs, Bit16u init_ip) { }
static inline void custom_init_entrypoint(char *, Bit16u) { }

static inline void custom_exit_prog(Bit8u exitcode) { }

/* prototypes for CPU operations */
static inline int custom_callf(Bitu seg, Bitu off) { return 0; }

#endif /* DOSBOX_CUSTOM */

#endif /* DOSBOX_CUSTOM_H */
