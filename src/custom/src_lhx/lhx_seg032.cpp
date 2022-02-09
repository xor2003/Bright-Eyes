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
	// 104850 
cs=0x3122;eip=0x00000e; 	T(MOV(dx, 0x388));	// 104852 mov     dx, 388h ;~ 3122:000E
cs=0x3122;eip=0x000011; 	T(MOV(al, 4));	// 104853 mov     al, 4 ;~ 3122:0011
cs=0x3122;eip=0x000013; 	R(OUT(dx, al));	// 104854 out     dx, al ;~ 3122:0013
cs=0x3122;eip=0x000014; 	R(CALL(sub_3f8b2,0));	// 104855 call    sub_3F8B2 ;~ 3122:0014
cs=0x3122;eip=0x000017; 	T(MOV(dx, 0x389));	// 104856 mov     dx, 389h ;~ 3122:0017
cs=0x3122;eip=0x00001a; 	T(MOV(al, 0x60));	// 104857 mov     al, 60h ; '`' ;~ 3122:001A
cs=0x3122;eip=0x00001c; 	R(OUT(dx, al));	// 104858 out     dx, al ;~ 3122:001C
cs=0x3122;eip=0x00001d; 	R(CALL(sub_3f8b2,0));	// 104859 call    sub_3F8B2 ;~ 3122:001D
cs=0x3122;eip=0x000020; 	T(MOV(dx, 0x388));	// 104860 mov     dx, 388h ;~ 3122:0020
cs=0x3122;eip=0x000023; 	T(MOV(al, 4));	// 104861 mov     al, 4 ;~ 3122:0023
cs=0x3122;eip=0x000025; 	R(OUT(dx, al));	// 104862 out     dx, al ;~ 3122:0025
cs=0x3122;eip=0x000026; 	R(CALL(sub_3f8b2,0));	// 104863 call    sub_3F8B2 ;~ 3122:0026
cs=0x3122;eip=0x000029; 	T(MOV(dx, 0x389));	// 104864 mov     dx, 389h ;~ 3122:0029
cs=0x3122;eip=0x00002c; 	T(MOV(al, 0x80));	// 104865 mov     al, 80h ; '€' ;~ 3122:002C
cs=0x3122;eip=0x00002e; 	R(OUT(dx, al));	// 104866 out     dx, al ;~ 3122:002E
cs=0x3122;eip=0x00002f; 	R(CALL(sub_3f8b2,0));	// 104867 call    sub_3F8B2 ;~ 3122:002F
cs=0x3122;eip=0x000032; 	T(MOV(dx, 0x388));	// 104868 mov     dx, 388h ;~ 3122:0032
cs=0x3122;eip=0x000035; 	R(IN(al, dx));	// 104869 in      al, dx ;~ 3122:0035
cs=0x3122;eip=0x000036; 	X(MOV(unk_4b0e2, al));	// 104870 mov     byte ptr unk_4B0E2, al ;~ 3122:0036
cs=0x3122;eip=0x000039; 	R(CALL(sub_3f8b2,0));	// 104871 call    sub_3F8B2 ;~ 3122:0039
cs=0x3122;eip=0x00003c; 	T(MOV(dx, 0x388));	// 104872 mov     dx, 388h ;~ 3122:003C
cs=0x3122;eip=0x00003f; 	T(MOV(al, 2));	// 104873 mov     al, 2 ;~ 3122:003F
cs=0x3122;eip=0x000041; 	R(OUT(dx, al));	// 104874 out     dx, al ;~ 3122:0041
cs=0x3122;eip=0x000042; 	R(CALL(sub_3f8b2,0));	// 104875 call    sub_3F8B2 ;~ 3122:0042
cs=0x3122;eip=0x000045; 	T(MOV(dx, 0x389));	// 104876 mov     dx, 389h ;~ 3122:0045
cs=0x3122;eip=0x000048; 	T(MOV(al, 0x0FF));	// 104877 mov     al, 0FFh ;~ 3122:0048
cs=0x3122;eip=0x00004a; 	R(OUT(dx, al));	// 104878 out     dx, al ;~ 3122:004A
cs=0x3122;eip=0x00004b; 	R(CALL(sub_3f8b2,0));	// 104879 call    sub_3F8B2 ;~ 3122:004B
cs=0x3122;eip=0x00004e; 	T(MOV(dx, 0x388));	// 104880 mov     dx, 388h ;~ 3122:004E
cs=0x3122;eip=0x000051; 	T(MOV(al, 4));	// 104881 mov     al, 4 ;~ 3122:0051
cs=0x3122;eip=0x000053; 	R(OUT(dx, al));	// 104882 out     dx, al ;~ 3122:0053
cs=0x3122;eip=0x000054; 	R(CALL(sub_3f8b2,0));	// 104883 call    sub_3F8B2 ;~ 3122:0054
cs=0x3122;eip=0x000057; 	T(MOV(dx, 0x389));	// 104884 mov     dx, 389h ;~ 3122:0057
cs=0x3122;eip=0x00005a; 	T(MOV(al, 0x21));	// 104885 mov     al, 21h ; '!' ;~ 3122:005A
cs=0x3122;eip=0x00005c; 	R(OUT(dx, al));	// 104886 out     dx, al ;~ 3122:005C
cs=0x3122;eip=0x00005d; 	R(CALL(sub_3f8b2,0));	// 104887 call    sub_3F8B2 ;~ 3122:005D
cs=0x3122;eip=0x000060; 	R(CALL(sub_3f8b2,0));	// 104888 call    sub_3F8B2 ;~ 3122:0060
cs=0x3122;eip=0x000063; 	R(CALL(sub_3f8b2,0));	// 104889 call    sub_3F8B2 ;~ 3122:0063
cs=0x3122;eip=0x000066; 	T(MOV(dx, 0x388));	// 104890 mov     dx, 388h ;~ 3122:0066
cs=0x3122;eip=0x000069; 	R(IN(al, dx));	// 104891 in      al, dx ;~ 3122:0069
cs=0x3122;eip=0x00006a; 	X(MOV(unk_4b0e3, al));	// 104892 mov     byte ptr unk_4B0E3, al ;~ 3122:006A
cs=0x3122;eip=0x00006d; 	R(CALL(sub_3f8b2,0));	// 104893 call    sub_3F8B2 ;~ 3122:006D
cs=0x3122;eip=0x000070; 	T(MOV(dx, 0x388));	// 104894 mov     dx, 388h ;~ 3122:0070
cs=0x3122;eip=0x000073; 	T(MOV(al, 4));	// 104895 mov     al, 4 ;~ 3122:0073
cs=0x3122;eip=0x000075; 	R(OUT(dx, al));	// 104896 out     dx, al ;~ 3122:0075
cs=0x3122;eip=0x000076; 	R(CALL(sub_3f8b2,0));	// 104897 call    sub_3F8B2 ;~ 3122:0076
cs=0x3122;eip=0x000079; 	T(MOV(dx, 0x389));	// 104898 mov     dx, 389h ;~ 3122:0079
cs=0x3122;eip=0x00007c; 	T(MOV(al, 0x60));	// 104899 mov     al, 60h ; '`' ;~ 3122:007C
cs=0x3122;eip=0x00007e; 	R(OUT(dx, al));	// 104900 out     dx, al ;~ 3122:007E
cs=0x3122;eip=0x00007f; 	R(CALL(sub_3f8b2,0));	// 104901 call    sub_3F8B2 ;~ 3122:007F
cs=0x3122;eip=0x000082; 	T(MOV(dx, 0x388));	// 104902 mov     dx, 388h ;~ 3122:0082
cs=0x3122;eip=0x000085; 	T(MOV(al, 4));	// 104903 mov     al, 4 ;~ 3122:0085
cs=0x3122;eip=0x000087; 	R(OUT(dx, al));	// 104904 out     dx, al ;~ 3122:0087
cs=0x3122;eip=0x000088; 	R(CALL(sub_3f8b2,0));	// 104905 call    sub_3F8B2 ;~ 3122:0088
cs=0x3122;eip=0x00008b; 	T(MOV(dx, 0x389));	// 104906 mov     dx, 389h ;~ 3122:008B
cs=0x3122;eip=0x00008e; 	T(MOV(al, 0x80));	// 104907 mov     al, 80h ; '€' ;~ 3122:008E
cs=0x3122;eip=0x000090; 	R(OUT(dx, al));	// 104908 out     dx, al ;~ 3122:0090
cs=0x3122;eip=0x000091; 	R(CALL(sub_3f8b2,0));	// 104909 call    sub_3F8B2 ;~ 3122:0091
cs=0x3122;eip=0x000094; 	X(AND(unk_4b0e2, 0x0E0));	// 104910 and     byte ptr unk_4B0E2, 0E0h ;~ 3122:0094
cs=0x3122;eip=0x000099; 	X(AND(unk_4b0e3, 0x0E0));	// 104911 and     byte ptr unk_4B0E3, 0E0h ;~ 3122:0099
cs=0x3122;eip=0x00009e; 	T(CMP(unk_4b0e2, 0));	// 104912 cmp     byte ptr unk_4B0E2, 0 ;~ 3122:009E
cs=0x3122;eip=0x0000a3; 	R(JNZ(loc_3f8af));	// 104913 jnz     short loc_3F8AF ;~ 3122:00A3
cs=0x3122;eip=0x0000a5; 	T(CMP(unk_4b0e3, 0x0C0));	// 104914 cmp     byte ptr unk_4B0E3, 0C0h ; 'À' ;~ 3122:00A5
cs=0x3122;eip=0x0000aa; 	R(JNZ(loc_3f8af));	// 104915 jnz     short loc_3F8AF ;~ 3122:00AA
cs=0x3122;eip=0x0000ac; 	T(MOV(al, 1));	// 104916 mov     al, 1 ;~ 3122:00AC
cs=0x3122;eip=0x0000ae; 	R(RETF(0));	// 104917 retf ;~ 3122:00AE
loc_3f8af:
	// 11040 
cs=0x3122;eip=0x0000af; 	T(MOV(al, 0));	// 104922 mov     al, 0 ;~ 3122:00AF
cs=0x3122;eip=0x0000b1; 	R(RETF(0));	// 104923 retf ;~ 3122:00B1
sub_3f8b2:
	// 104930 
cs=0x3122;eip=0x0000b2; 	T(MOV(ax, 0x20));	// 104932 mov     ax, 20h ; ' ' ;~ 3122:00B2
loc_3f8b5:
	// 11041 
cs=0x3122;eip=0x0000b5; 	T(DEC(al));	// 104935 dec     al ;~ 3122:00B5
	// 104936 nop ;~ 3122:00B7
cs=0x3122;eip=0x0000b8; 	R(JNZ(loc_3f8b5));	// 104937 jnz     short loc_3F8B5 ;~ 3122:00B8
cs=0x3122;eip=0x0000ba; 	R(RETN(0));	// 104938 retn ;~ 3122:00BA

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
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

