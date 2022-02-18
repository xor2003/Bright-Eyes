/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "game_drv_.h"

                

 bool mainproc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    mainproc:
    _begin:
#undef tarmac
#define tarmac 1
	// 1 tarmac           = 1                    ; XREF: update_player_state+FF8/s
#undef dirt
#define dirt 2
	// 2 dirt             = 2
#undef ice
#define ice 3
	// 3 ice              = 3
#undef grass
#define grass 4
	// 4 grass            = 4                    ; XREF: build_track_object+25/s
#undef water
#define water 5
	// 5 water            = 5                    ; XREF: build_track_object:loc_1E2FB/s
#undef ok
#define ok 0
	// 10 ok               = 0
#undef no_sf
#define no_sf 1
	// 11 no_sf            = 1                    ; XREF: track_setup+299/s
#undef int_err
#define int_err 2
	// 12 int_err          = 2                    ; XREF: track_setup+566/s
#undef many_sf
#define many_sf 3
	// 13 many_sf          = 3                    ; XREF: track_setup+165/s
#undef elem_mism
#define elem_mism 4
	// 14 elem_mism        = 4                    ; XREF: track_setup:loc_20E79/s
#undef wrong_way
#define wrong_way 5
	// 15 wrong_way        = 5                    ; XREF: track_setup+66C/s
#undef many_elem
#define many_elem 6
	// 16 many_elem        = 6                    ; XREF: track_setup+C9F/s
#undef no_path
#define no_path 7
	// 17 no_path          = 7                    ; XREF: track_setup+853/s
#undef many_path
#define many_path 8
	// 18 many_path        = 8                    ; XREF: track_setup+69D/s
#undef no_runway
#define no_runway 9
	// 19 no_runway        = 9                    ; XREF: track_setup+7D0/s
#undef long_jump
#define long_jump 0x0A
	// 20 long_jump        = 0Ah                  ; XREF: track_setup:loc_20ABA/s
#undef terr_mism
#define terr_mism 0x0B
	// 21 terr_mism        = 0Bh                  ; XREF: track_setup:loc_20788/s
#undef elem_wat
#define elem_wat 0x0C
	// 22 elem_wat         = 0Ch
#undef elem_stsl
#define elem_stsl 0x0D
	// 23 elem_stsl        = 0Dh
#undef elem_ansl
#define elem_ansl 0x0E
	// 24 elem_ansl        = 0Eh
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

