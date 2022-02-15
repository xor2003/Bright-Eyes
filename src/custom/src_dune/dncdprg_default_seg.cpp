/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "dncdprg.h"

                

 bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
#undef arg_386
#define arg_386 1
	// 15 ARG_386          = 1
#undef arg_mon
#define arg_mon 2
	// 16 ARG_MON          = 2
#undef arg_fra
#define arg_fra 4
	// 17 ARG_FRA          = 4
#undef arg_ger
#define arg_ger 8
	// 18 ARG_GER          = 8
	R(CALL(start,0));	R(RETN(0));
    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kmainproc: 	goto mainproc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

