/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group30(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group30:
    _begin:
sub_3f80e:
	// 104762 
cs=0x3122;eip=0x00000e; 	T(MOV(dx, 0x388));	// 104764 mov     dx, 388h ;~ 3122:000E
cs=0x3122;eip=0x000011; 	T(MOV(al, 4));	// 104765 mov     al, 4 ;~ 3122:0011
cs=0x3122;eip=0x000013; 	R(OUT(dx, al));	// 104766 out     dx, al ;~ 3122:0013
cs=0x3122;eip=0x000014; 	R(CALL(sub_3f8b2,0));	// 104767 call    sub_3F8B2 ;~ 3122:0014
cs=0x3122;eip=0x000017; 	T(MOV(dx, 0x389));	// 104768 mov     dx, 389h ;~ 3122:0017
cs=0x3122;eip=0x00001a; 	T(MOV(al, 0x60));	// 104769 mov     al, 60h ; '`' ;~ 3122:001A
cs=0x3122;eip=0x00001c; 	R(OUT(dx, al));	// 104770 out     dx, al ;~ 3122:001C
cs=0x3122;eip=0x00001d; 	R(CALL(sub_3f8b2,0));	// 104771 call    sub_3F8B2 ;~ 3122:001D
cs=0x3122;eip=0x000020; 	T(MOV(dx, 0x388));	// 104772 mov     dx, 388h ;~ 3122:0020
cs=0x3122;eip=0x000023; 	T(MOV(al, 4));	// 104773 mov     al, 4 ;~ 3122:0023
cs=0x3122;eip=0x000025; 	R(OUT(dx, al));	// 104774 out     dx, al ;~ 3122:0025
cs=0x3122;eip=0x000026; 	R(CALL(sub_3f8b2,0));	// 104775 call    sub_3F8B2 ;~ 3122:0026
cs=0x3122;eip=0x000029; 	T(MOV(dx, 0x389));	// 104776 mov     dx, 389h ;~ 3122:0029
cs=0x3122;eip=0x00002c; 	T(MOV(al, 0x80));	// 104777 mov     al, 80h ; '€' ;~ 3122:002C
cs=0x3122;eip=0x00002e; 	R(OUT(dx, al));	// 104778 out     dx, al ;~ 3122:002E
cs=0x3122;eip=0x00002f; 	R(CALL(sub_3f8b2,0));	// 104779 call    sub_3F8B2 ;~ 3122:002F
cs=0x3122;eip=0x000032; 	T(MOV(dx, 0x388));	// 104780 mov     dx, 388h ;~ 3122:0032
cs=0x3122;eip=0x000035; 	R(IN(al, dx));	// 104781 in      al, dx ;~ 3122:0035
cs=0x3122;eip=0x000036; 	X(MOV(unk_4b0e2, al));	// 104782 mov     byte ptr unk_4B0E2, al ;~ 3122:0036
cs=0x3122;eip=0x000039; 	R(CALL(sub_3f8b2,0));	// 104783 call    sub_3F8B2 ;~ 3122:0039
cs=0x3122;eip=0x00003c; 	T(MOV(dx, 0x388));	// 104784 mov     dx, 388h ;~ 3122:003C
cs=0x3122;eip=0x00003f; 	T(MOV(al, 2));	// 104785 mov     al, 2 ;~ 3122:003F
cs=0x3122;eip=0x000041; 	R(OUT(dx, al));	// 104786 out     dx, al ;~ 3122:0041
cs=0x3122;eip=0x000042; 	R(CALL(sub_3f8b2,0));	// 104787 call    sub_3F8B2 ;~ 3122:0042
cs=0x3122;eip=0x000045; 	T(MOV(dx, 0x389));	// 104788 mov     dx, 389h ;~ 3122:0045
cs=0x3122;eip=0x000048; 	T(MOV(al, 0x0FF));	// 104789 mov     al, 0FFh ;~ 3122:0048
cs=0x3122;eip=0x00004a; 	R(OUT(dx, al));	// 104790 out     dx, al ;~ 3122:004A
cs=0x3122;eip=0x00004b; 	R(CALL(sub_3f8b2,0));	// 104791 call    sub_3F8B2 ;~ 3122:004B
cs=0x3122;eip=0x00004e; 	T(MOV(dx, 0x388));	// 104792 mov     dx, 388h ;~ 3122:004E
cs=0x3122;eip=0x000051; 	T(MOV(al, 4));	// 104793 mov     al, 4 ;~ 3122:0051
cs=0x3122;eip=0x000053; 	R(OUT(dx, al));	// 104794 out     dx, al ;~ 3122:0053
cs=0x3122;eip=0x000054; 	R(CALL(sub_3f8b2,0));	// 104795 call    sub_3F8B2 ;~ 3122:0054
cs=0x3122;eip=0x000057; 	T(MOV(dx, 0x389));	// 104796 mov     dx, 389h ;~ 3122:0057
cs=0x3122;eip=0x00005a; 	T(MOV(al, 0x21));	// 104797 mov     al, 21h ; '!' ;~ 3122:005A
cs=0x3122;eip=0x00005c; 	R(OUT(dx, al));	// 104798 out     dx, al ;~ 3122:005C
cs=0x3122;eip=0x00005d; 	R(CALL(sub_3f8b2,0));	// 104799 call    sub_3F8B2 ;~ 3122:005D
cs=0x3122;eip=0x000060; 	R(CALL(sub_3f8b2,0));	// 104800 call    sub_3F8B2 ;~ 3122:0060
cs=0x3122;eip=0x000063; 	R(CALL(sub_3f8b2,0));	// 104801 call    sub_3F8B2 ;~ 3122:0063
cs=0x3122;eip=0x000066; 	T(MOV(dx, 0x388));	// 104802 mov     dx, 388h ;~ 3122:0066
cs=0x3122;eip=0x000069; 	R(IN(al, dx));	// 104803 in      al, dx ;~ 3122:0069
cs=0x3122;eip=0x00006a; 	X(MOV(unk_4b0e3, al));	// 104804 mov     byte ptr unk_4B0E3, al ;~ 3122:006A
cs=0x3122;eip=0x00006d; 	R(CALL(sub_3f8b2,0));	// 104805 call    sub_3F8B2 ;~ 3122:006D
cs=0x3122;eip=0x000070; 	T(MOV(dx, 0x388));	// 104806 mov     dx, 388h ;~ 3122:0070
cs=0x3122;eip=0x000073; 	T(MOV(al, 4));	// 104807 mov     al, 4 ;~ 3122:0073
cs=0x3122;eip=0x000075; 	R(OUT(dx, al));	// 104808 out     dx, al ;~ 3122:0075
cs=0x3122;eip=0x000076; 	R(CALL(sub_3f8b2,0));	// 104809 call    sub_3F8B2 ;~ 3122:0076
cs=0x3122;eip=0x000079; 	T(MOV(dx, 0x389));	// 104810 mov     dx, 389h ;~ 3122:0079
cs=0x3122;eip=0x00007c; 	T(MOV(al, 0x60));	// 104811 mov     al, 60h ; '`' ;~ 3122:007C
cs=0x3122;eip=0x00007e; 	R(OUT(dx, al));	// 104812 out     dx, al ;~ 3122:007E
cs=0x3122;eip=0x00007f; 	R(CALL(sub_3f8b2,0));	// 104813 call    sub_3F8B2 ;~ 3122:007F
cs=0x3122;eip=0x000082; 	T(MOV(dx, 0x388));	// 104814 mov     dx, 388h ;~ 3122:0082
cs=0x3122;eip=0x000085; 	T(MOV(al, 4));	// 104815 mov     al, 4 ;~ 3122:0085
cs=0x3122;eip=0x000087; 	R(OUT(dx, al));	// 104816 out     dx, al ;~ 3122:0087
cs=0x3122;eip=0x000088; 	R(CALL(sub_3f8b2,0));	// 104817 call    sub_3F8B2 ;~ 3122:0088
cs=0x3122;eip=0x00008b; 	T(MOV(dx, 0x389));	// 104818 mov     dx, 389h ;~ 3122:008B
cs=0x3122;eip=0x00008e; 	T(MOV(al, 0x80));	// 104819 mov     al, 80h ; '€' ;~ 3122:008E
cs=0x3122;eip=0x000090; 	R(OUT(dx, al));	// 104820 out     dx, al ;~ 3122:0090
cs=0x3122;eip=0x000091; 	R(CALL(sub_3f8b2,0));	// 104821 call    sub_3F8B2 ;~ 3122:0091
cs=0x3122;eip=0x000094; 	X(AND(unk_4b0e2, 0x0E0));	// 104822 and     byte ptr unk_4B0E2, 0E0h ;~ 3122:0094
cs=0x3122;eip=0x000099; 	X(AND(unk_4b0e3, 0x0E0));	// 104823 and     byte ptr unk_4B0E3, 0E0h ;~ 3122:0099
cs=0x3122;eip=0x00009e; 	T(CMP(unk_4b0e2, 0));	// 104824 cmp     byte ptr unk_4B0E2, 0 ;~ 3122:009E
cs=0x3122;eip=0x0000a3; 	R(JNZ(loc_3f8af));	// 104825 jnz     short loc_3F8AF ;~ 3122:00A3
cs=0x3122;eip=0x0000a5; 	T(CMP(unk_4b0e3, 0x0C0));	// 104826 cmp     byte ptr unk_4B0E3, 0C0h ; 'À' ;~ 3122:00A5
cs=0x3122;eip=0x0000aa; 	R(JNZ(loc_3f8af));	// 104827 jnz     short loc_3F8AF ;~ 3122:00AA
cs=0x3122;eip=0x0000ac; 	T(MOV(al, 1));	// 104828 mov     al, 1 ;~ 3122:00AC
cs=0x3122;eip=0x0000ae; 	R(RETF(0));	// 104829 retf ;~ 3122:00AE
loc_3f8af:
	// 11033 
cs=0x3122;eip=0x0000af; 	T(MOV(al, 0));	// 104834 mov     al, 0 ;~ 3122:00AF
cs=0x3122;eip=0x0000b1; 	R(RETF(0));	// 104835 retf ;~ 3122:00B1
sub_3f8b2:
	// 104842 
cs=0x3122;eip=0x0000b2; 	T(MOV(ax, 0x20));	// 104844 mov     ax, 20h ; ' ' ;~ 3122:00B2
loc_3f8b5:
	// 11034 
cs=0x3122;eip=0x0000b5; 	T(DEC(al));	// 104847 dec     al ;~ 3122:00B5
	// 104848 nop ;~ 3122:00B7
cs=0x3122;eip=0x0000b8; 	R(JNZ(loc_3f8b5));	// 104849 jnz     short loc_3F8B5 ;~ 3122:00B8
cs=0x3122;eip=0x0000ba; 	R(RETN(0));	// 104850 retn ;~ 3122:00BA

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3f8af: 	goto loc_3f8af;
        case m2c::kloc_3f8b5: 	goto loc_3f8b5;
        case m2c::ksub_3f80e: 	goto sub_3f80e;
        case m2c::ksub_3f8b2: 	goto sub_3f8b2;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

