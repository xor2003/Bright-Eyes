/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group21(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group21:
    _begin:
sub_35bae:
	// 84899 
cs=0x275c;eip=0x00000e; 	T(MOV(ax, 0x1000));	// 84901 mov     ax, 1000h ;~ 275C:000E
cs=0x275c;eip=0x000011; 	X(PUSH(ax));	// 84902 push    ax ;~ 275C:0011
cs=0x275c;eip=0x000012; 	R(CALL(sub_35bc3,0));	// 84903 call    sub_35BC3 ;~ 275C:0012
cs=0x275c;eip=0x000015; 	X(MOV(*(dw*)((&unk_570bc)), ax));	// 84904 mov     word ptr unk_570BC, ax ;~ 275C:0015
cs=0x275c;eip=0x000018; 	T(MOV(ax, 0x100));	// 84905 mov     ax, 100h ;~ 275C:0018
cs=0x275c;eip=0x00001b; 	X(PUSH(ax));	// 84906 push    ax ;~ 275C:001B
cs=0x275c;eip=0x00001c; 	R(CALL(sub_35bc3,0));	// 84907 call    sub_35BC3 ;~ 275C:001C
cs=0x275c;eip=0x00001f; 	X(MOV(*(dw*)((&unk_570be)), ax));	// 84908 mov     word ptr unk_570BE, ax ;~ 275C:001F
cs=0x275c;eip=0x000022; 	R(RETF(0));	// 84909 retf ;~ 275C:0022
sub_35bc3:
	// 84917 
#undef arg_0
#define arg_0 4
	// 84920 arg_0           = word ptr  4 ;~ 275C:0023
cs=0x275c;eip=0x000023; 	X(PUSH(bp));	// 84922 push    bp ;~ 275C:0023
cs=0x275c;eip=0x000024; 	T(MOV(bp, sp));	// 84923 mov     bp, sp ;~ 275C:0024
cs=0x275c;eip=0x000026; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 84924 mov     ax, [bp+arg_0] ;~ 275C:0026
cs=0x275c;eip=0x000029; 	X(MOV(*(dw*)((&unk_570c4)), ax));	// 84925 mov     word ptr unk_570C4, ax ;~ 275C:0029
cs=0x275c;eip=0x00002c; 	T(MOV(ax, 0x1388));	// 84926 mov     ax, 1388h ;~ 275C:002C
cs=0x275c;eip=0x00002f; 	X(PUSH(ax));	// 84927 push    ax ;~ 275C:002F
cs=0x275c;eip=0x000030; 	R(CALLF(sub_23961,0));	// 84928 call    sub_23961 ;~ 275C:0030
cs=0x275c;eip=0x000035; 	X(MOV(*(dw*)((&unk_570c0)), ax));	// 84929 mov     word ptr unk_570C0, ax ;~ 275C:0035
cs=0x275c;eip=0x000038; 	T(OR(ax, ax));	// 84930 or      ax, ax ;~ 275C:0038
cs=0x275c;eip=0x00003a; 	R(JNZ(loc_35be1));	// 84931 jnz     short loc_35BE1 ;~ 275C:003A
cs=0x275c;eip=0x00003c; 	R(CALLF(sub_315c9,0));	// 84932 call    sub_315C9 ;~ 275C:003C
loc_35be1:
	// 9812 
cs=0x275c;eip=0x000041; 	X(MOV(*(dw*)((&unk_570c2)), 0));	// 84936 mov     word ptr unk_570C2, 0 ;~ 275C:0041
cs=0x275c;eip=0x000047; 	T(SUB(ax, ax));	// 84937 sub     ax, ax ;~ 275C:0047
cs=0x275c;eip=0x000049; 	X(PUSH(ax));	// 84938 push    ax ;~ 275C:0049
cs=0x275c;eip=0x00004a; 	X(PUSH(ax));	// 84939 push    ax ;~ 275C:004A
cs=0x275c;eip=0x00004b; 	T(MOV(ah, unk_47a94));	// 84940 mov     ah, byte ptr unk_47A94 ;~ 275C:004B
cs=0x275c;eip=0x00004f; 	T(SUB(al, al));	// 84941 sub     al, al ;~ 275C:004F
cs=0x275c;eip=0x000051; 	X(PUSH(ax));	// 84942 push    ax ;~ 275C:0051
cs=0x275c;eip=0x000052; 	T(MOV(ah, unk_47a96));	// 84943 mov     ah, byte ptr unk_47A96 ;~ 275C:0052
cs=0x275c;eip=0x000056; 	X(PUSH(ax));	// 84944 push    ax ;~ 275C:0056
cs=0x275c;eip=0x000057; 	R(CALL(sub_368b7,0));	// 84945 call    sub_368B7 ;~ 275C:0057
cs=0x275c;eip=0x00005a; 	X(PUSH(*(dw*)((&unk_570c0))));	// 84946 push    word ptr unk_570C0 ;~ 275C:005A
cs=0x275c;eip=0x00005e; 	X(PUSH(*(dw*)((&unk_570c2))));	// 84947 push    word ptr unk_570C2 ;~ 275C:005E
cs=0x275c;eip=0x000062; 	R(CALLF(sub_23998,0));	// 84948 call    sub_23998 ;~ 275C:0062
cs=0x275c;eip=0x000067; 	T(OR(al, al));	// 84949 or      al, al ;~ 275C:0067
cs=0x275c;eip=0x000069; 	R(JNZ(loc_35c10));	// 84950 jnz     short loc_35C10 ;~ 275C:0069
cs=0x275c;eip=0x00006b; 	R(CALLF(sub_315c9,0));	// 84951 call    sub_315C9 ;~ 275C:006B
loc_35c10:
	// 9813 
cs=0x275c;eip=0x000070; 	T(MOV(ax, *(dw*)((&unk_570c0))));	// 84955 mov     ax, word ptr unk_570C0 ;~ 275C:0070
cs=0x275c;eip=0x000073; 	X(POP(bp));	// 84956 pop     bp ;~ 275C:0073
cs=0x275c;eip=0x000074; 	R(RETN(2));	// 84957 retn    2 ;~ 275C:0074
sub_35c17:
	// 84964 
cs=0x275c;eip=0x000077; 	T(CMP(*(dw*)((&unk_570bc)), 0));	// 84965 cmp     word ptr unk_570BC, 0 ;~ 275C:0077
cs=0x275c;eip=0x00007c; 	R(JZ(loc_35c2d));	// 84966 jz      short loc_35C2D ;~ 275C:007C
cs=0x275c;eip=0x00007e; 	X(PUSH(*(dw*)((&unk_570bc))));	// 84967 push    word ptr unk_570BC ;~ 275C:007E
cs=0x275c;eip=0x000082; 	R(CALLF(sub_2397c,0));	// 84968 call    sub_2397C ;~ 275C:0082
cs=0x275c;eip=0x000087; 	X(MOV(*(dw*)((&unk_570bc)), 0));	// 84969 mov     word ptr unk_570BC, 0 ;~ 275C:0087
loc_35c2d:
	// 9814 
cs=0x275c;eip=0x00008d; 	T(CMP(*(dw*)((&unk_570be)), 0));	// 84972 cmp     word ptr unk_570BE, 0 ;~ 275C:008D
cs=0x275c;eip=0x000092; 	R(JZ(locret_35c43));	// 84973 jz      short locret_35C43 ;~ 275C:0092
cs=0x275c;eip=0x000094; 	X(PUSH(*(dw*)((&unk_570be))));	// 84974 push    word ptr unk_570BE ;~ 275C:0094
cs=0x275c;eip=0x000098; 	R(CALLF(sub_2397c,0));	// 84975 call    sub_2397C ;~ 275C:0098
cs=0x275c;eip=0x00009d; 	X(MOV(*(dw*)((&unk_570be)), 0));	// 84976 mov     word ptr unk_570BE, 0 ;~ 275C:009D
locret_35c43:
	// 9815 
cs=0x275c;eip=0x0000a3; 	R(RETF(0));	// 84979 retf ;~ 275C:00A3
sub_35c44:
	// 84986 
cs=0x275c;eip=0x0000a4; 	X(PUSH(bp));	// 84987 push    bp ;~ 275C:00A4
cs=0x275c;eip=0x0000a5; 	T(MOV(bp, *(dw*)((&unk_4a09e))));	// 84988 mov     bp, word ptr unk_4A09E ;~ 275C:00A5
cs=0x275c;eip=0x0000a9; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 84989 mov     cx, [bp+8] ;~ 275C:00A9
cs=0x275c;eip=0x0000ac; 	T(MOV(bp, *(dw*)(raddr(ss,bp+0x0A))));	// 84990 mov     bp, [bp+0Ah] ;~ 275C:00AC
cs=0x275c;eip=0x0000af; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 84991 mov     ax, es:[bx+6] ;~ 275C:00AF
cs=0x275c;eip=0x0000b3; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 84992 mov     dx, es:[bx+8] ;~ 275C:00B3
cs=0x275c;eip=0x0000b7; 	T(SUB(ax, cx));	// 84993 sub     ax, cx ;~ 275C:00B7
cs=0x275c;eip=0x0000b9; 	T(SBB(dx, bp));	// 84994 sbb     dx, bp ;~ 275C:00B9
cs=0x275c;eip=0x0000bb; 	T(CMP(*(dw*)((&unk_570ce)), dx));	// 84995 cmp     word ptr unk_570CE, dx ;~ 275C:00BB
cs=0x275c;eip=0x0000bf; 	R(JGE(loc_35c6a));	// 84996 jge     short loc_35C6A ;~ 275C:00BF
cs=0x275c;eip=0x0000c1; 	T(CMP(*(dw*)((&unk_570da)), dx));	// 84997 cmp     word ptr unk_570DA, dx ;~ 275C:00C1
cs=0x275c;eip=0x0000c5; 	R(JGE(loc_35c6a));	// 84998 jge     short loc_35C6A ;~ 275C:00C5
cs=0x275c;eip=0x0000c7; 	T(CLC);	// 84999 clc ;~ 275C:00C7
cs=0x275c;eip=0x0000c8; 	X(POP(bp));	// 85000 pop     bp ;~ 275C:00C8
cs=0x275c;eip=0x0000c9; 	R(RETN(0));	// 85001 retn ;~ 275C:00C9
loc_35c6a:
	// 9816 
cs=0x275c;eip=0x0000ca; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 85006 mov     ax, es:[bx+6] ;~ 275C:00CA
cs=0x275c;eip=0x0000ce; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 85007 mov     dx, es:[bx+8] ;~ 275C:00CE
cs=0x275c;eip=0x0000d2; 	T(ADD(ax, cx));	// 85008 add     ax, cx ;~ 275C:00D2
cs=0x275c;eip=0x0000d4; 	T(ADC(dx, bp));	// 85009 adc     dx, bp ;~ 275C:00D4
cs=0x275c;eip=0x0000d6; 	T(CMP(*(dw*)((&unk_570cc)), dx));	// 85010 cmp     word ptr unk_570CC, dx ;~ 275C:00D6
cs=0x275c;eip=0x0000da; 	R(JLE(loc_35c85));	// 85011 jle     short loc_35C85 ;~ 275C:00DA
cs=0x275c;eip=0x0000dc; 	T(CMP(*(dw*)((&unk_570d8)), dx));	// 85012 cmp     word ptr unk_570D8, dx ;~ 275C:00DC
cs=0x275c;eip=0x0000e0; 	R(JLE(loc_35c85));	// 85013 jle     short loc_35C85 ;~ 275C:00E0
cs=0x275c;eip=0x0000e2; 	T(CLC);	// 85014 clc ;~ 275C:00E2
cs=0x275c;eip=0x0000e3; 	X(POP(bp));	// 85015 pop     bp ;~ 275C:00E3
cs=0x275c;eip=0x0000e4; 	R(RETN(0));	// 85016 retn ;~ 275C:00E4
loc_35c85:
	// 9817 
cs=0x275c;eip=0x0000e5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 85021 mov     ax, es:[bx+0Ah] ;~ 275C:00E5
cs=0x275c;eip=0x0000e9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 85022 mov     dx, es:[bx+0Ch] ;~ 275C:00E9
cs=0x275c;eip=0x0000ed; 	T(SUB(ax, cx));	// 85023 sub     ax, cx ;~ 275C:00ED
cs=0x275c;eip=0x0000ef; 	T(SBB(dx, bp));	// 85024 sbb     dx, bp ;~ 275C:00EF
cs=0x275c;eip=0x0000f1; 	T(CMP(*(dw*)((&unk_570d2)), dx));	// 85025 cmp     word ptr unk_570D2, dx ;~ 275C:00F1
cs=0x275c;eip=0x0000f5; 	R(JGE(loc_35ca0));	// 85026 jge     short loc_35CA0 ;~ 275C:00F5
cs=0x275c;eip=0x0000f7; 	T(CMP(*(dw*)((&unk_570de)), dx));	// 85027 cmp     word ptr unk_570DE, dx ;~ 275C:00F7
cs=0x275c;eip=0x0000fb; 	R(JGE(loc_35ca0));	// 85028 jge     short loc_35CA0 ;~ 275C:00FB
cs=0x275c;eip=0x0000fd; 	T(CLC);	// 85029 clc ;~ 275C:00FD
cs=0x275c;eip=0x0000fe; 	X(POP(bp));	// 85030 pop     bp ;~ 275C:00FE
cs=0x275c;eip=0x0000ff; 	R(RETN(0));	// 85031 retn ;~ 275C:00FF
loc_35ca0:
	// 9818 
cs=0x275c;eip=0x000100; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 85036 mov     ax, es:[bx+0Ah] ;~ 275C:0100
cs=0x275c;eip=0x000104; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 85037 mov     dx, es:[bx+0Ch] ;~ 275C:0104
cs=0x275c;eip=0x000108; 	T(ADD(ax, cx));	// 85038 add     ax, cx ;~ 275C:0108
cs=0x275c;eip=0x00010a; 	T(ADC(dx, bp));	// 85039 adc     dx, bp ;~ 275C:010A
cs=0x275c;eip=0x00010c; 	T(CMP(*(dw*)((&unk_570d0)), dx));	// 85040 cmp     word ptr unk_570D0, dx ;~ 275C:010C
cs=0x275c;eip=0x000110; 	R(JLE(loc_35cbb));	// 85041 jle     short loc_35CBB ;~ 275C:0110
cs=0x275c;eip=0x000112; 	T(CMP(*(dw*)((&unk_570dc)), dx));	// 85042 cmp     word ptr unk_570DC, dx ;~ 275C:0112
cs=0x275c;eip=0x000116; 	R(JLE(loc_35cbb));	// 85043 jle     short loc_35CBB ;~ 275C:0116
cs=0x275c;eip=0x000118; 	T(CLC);	// 85044 clc ;~ 275C:0118
cs=0x275c;eip=0x000119; 	X(POP(bp));	// 85045 pop     bp ;~ 275C:0119
cs=0x275c;eip=0x00011a; 	R(RETN(0));	// 85046 retn ;~ 275C:011A
loc_35cbb:
	// 9819 
cs=0x275c;eip=0x00011b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 85051 mov     ax, es:[bx+0Eh] ;~ 275C:011B
cs=0x275c;eip=0x00011f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 85052 mov     dx, es:[bx+10h] ;~ 275C:011F
cs=0x275c;eip=0x000123; 	T(SUB(ax, cx));	// 85053 sub     ax, cx ;~ 275C:0123
cs=0x275c;eip=0x000125; 	T(SBB(dx, bp));	// 85054 sbb     dx, bp ;~ 275C:0125
cs=0x275c;eip=0x000127; 	T(CMP(*(dw*)((&unk_570ce)), dx));	// 85055 cmp     word ptr unk_570CE, dx ;~ 275C:0127
cs=0x275c;eip=0x00012b; 	R(JGE(loc_35cd6));	// 85056 jge     short loc_35CD6 ;~ 275C:012B
cs=0x275c;eip=0x00012d; 	T(CMP(*(dw*)((&unk_570e2)), dx));	// 85057 cmp     word ptr unk_570E2, dx ;~ 275C:012D
cs=0x275c;eip=0x000131; 	R(JGE(loc_35cd6));	// 85058 jge     short loc_35CD6 ;~ 275C:0131
cs=0x275c;eip=0x000133; 	T(CLC);	// 85059 clc ;~ 275C:0133
cs=0x275c;eip=0x000134; 	X(POP(bp));	// 85060 pop     bp ;~ 275C:0134
cs=0x275c;eip=0x000135; 	R(RETN(0));	// 85061 retn ;~ 275C:0135
loc_35cd6:
	// 9820 
cs=0x275c;eip=0x000136; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 85066 mov     ax, es:[bx+0Eh] ;~ 275C:0136
cs=0x275c;eip=0x00013a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 85067 mov     dx, es:[bx+10h] ;~ 275C:013A
cs=0x275c;eip=0x00013e; 	T(ADD(ax, cx));	// 85068 add     ax, cx ;~ 275C:013E
cs=0x275c;eip=0x000140; 	T(ADC(dx, bp));	// 85069 adc     dx, bp ;~ 275C:0140
cs=0x275c;eip=0x000142; 	T(CMP(*(dw*)((&unk_570d4)), dx));	// 85070 cmp     word ptr unk_570D4, dx ;~ 275C:0142
cs=0x275c;eip=0x000146; 	R(JLE(loc_35cf1));	// 85071 jle     short loc_35CF1 ;~ 275C:0146
cs=0x275c;eip=0x000148; 	T(CMP(*(dw*)((&unk_570e0)), dx));	// 85072 cmp     word ptr unk_570E0, dx ;~ 275C:0148
cs=0x275c;eip=0x00014c; 	R(JLE(loc_35cf1));	// 85073 jle     short loc_35CF1 ;~ 275C:014C
cs=0x275c;eip=0x00014e; 	T(CLC);	// 85074 clc ;~ 275C:014E
cs=0x275c;eip=0x00014f; 	X(POP(bp));	// 85075 pop     bp ;~ 275C:014F
cs=0x275c;eip=0x000150; 	R(RETN(0));	// 85076 retn ;~ 275C:0150
loc_35cf1:
	// 9821 
cs=0x275c;eip=0x000151; 	T(STC);	// 85081 stc ;~ 275C:0151
cs=0x275c;eip=0x000152; 	X(POP(bp));	// 85082 pop     bp ;~ 275C:0152
cs=0x275c;eip=0x000153; 	R(RETN(0));	// 85083 retn ;~ 275C:0153
sub_35cf4:
	// 85091 
#undef arg_0
#define arg_0 6
	// 85094 arg_0           = byte ptr  6 ;~ 275C:0154
#undef arg_2
#define arg_2 8
	// 85095 arg_2           = byte ptr  8 ;~ 275C:0154
#undef arg_4
#define arg_4 0x0A
	// 85096 arg_4           = byte ptr  0Ah ;~ 275C:0154
#undef arg_6
#define arg_6 0x0C
	// 85097 arg_6           = byte ptr  0Ch ;~ 275C:0154
#undef arg_8
#define arg_8 0x0E
	// 85098 arg_8           = word ptr  0Eh ;~ 275C:0154
#undef arg_a
#define arg_a 0x10
	// 85099 arg_A           = word ptr  10h ;~ 275C:0154
#undef arg_c
#define arg_c 0x12
	// 85100 arg_C           = word ptr  12h ;~ 275C:0154
#undef arg_e
#define arg_e 0x14
	// 85101 arg_E           = word ptr  14h ;~ 275C:0154
#undef arg_10
#define arg_10 0x16
	// 85102 arg_10          = dword ptr  16h ;~ 275C:0154
#undef arg_14
#define arg_14 0x1A
	// 85103 arg_14          = dword ptr  1Ah ;~ 275C:0154
#undef arg_18
#define arg_18 0x1E
	// 85104 arg_18          = word ptr  1Eh ;~ 275C:0154
cs=0x275c;eip=0x000154; 	X(PUSH(bp));	// 85106 push    bp ;~ 275C:0154
cs=0x275c;eip=0x000155; 	T(MOV(bp, sp));	// 85107 mov     bp, sp ;~ 275C:0155
cs=0x275c;eip=0x000157; 	X(PUSH(si));	// 85108 push    si ;~ 275C:0157
cs=0x275c;eip=0x000158; 	X(PUSH(di));	// 85109 push    di ;~ 275C:0158
cs=0x275c;eip=0x000159; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_18))));	// 85110 mov     ax, [bp+arg_18] ;~ 275C:0159
cs=0x275c;eip=0x00015c; 	X(MOV(*(dw*)((&unk_570ca)), ax));	// 85111 mov     word ptr unk_570CA, ax ;~ 275C:015C
cs=0x275c;eip=0x00015f; 	T(MOV(ax, ds));	// 85112 mov     ax, ds ;~ 275C:015F
cs=0x275c;eip=0x000161; 	T(MOV(es, ax));	// 85113 mov     es, ax ;~ 275C:0161
cs=0x275c;eip=0x000163; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_14))));	// 85115 lds     si, [bp+arg_14] ;~ 275C:0163
cs=0x275c;eip=0x000166; 	T(MOV(di, 0x268E));	// 85116 mov     di, 268Eh ;~ 275C:0166
cs=0x275c;eip=0x000169; 	T(MOV(cx, 6));	// 85117 mov     cx, 6 ;~ 275C:0169
	// 85118 rep movsw ;~ 275C:016C
cs=0x275c;eip=0x00016c; 	X(	REP MOVSW);	// 85118 rep movsw ;~ 275C:016C
cs=0x275c;eip=0x00016e; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_10))));	// 85119 lds     si, [bp+arg_10] ;~ 275C:016E
cs=0x275c;eip=0x000171; 	T(MOV(di, 0x269A));	// 85120 mov     di, 269Ah ;~ 275C:0171
cs=0x275c;eip=0x000174; 	T(MOV(cx, 6));	// 85121 mov     cx, 6 ;~ 275C:0174
	// 85122 rep movsw ;~ 275C:0177
cs=0x275c;eip=0x000177; 	X(	REP MOVSW);	// 85122 rep movsw ;~ 275C:0177
cs=0x275c;eip=0x000179; 	T(MOV(ds, ax));	// 85123 mov     ds, ax ;~ 275C:0179
cs=0x275c;eip=0x00017b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 85124 mov     ax, [bp+arg_C] ;~ 275C:017B
cs=0x275c;eip=0x00017e; 	X(MOV(*(dw*)((&unk_570c6)), ax));	// 85125 mov     word ptr unk_570C6, ax ;~ 275C:017E
cs=0x275c;eip=0x000181; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_e))));	// 85126 mov     ax, [bp+arg_E] ;~ 275C:0181
cs=0x275c;eip=0x000184; 	X(MOV(*(dw*)((&unk_570c8)), ax));	// 85127 mov     word ptr unk_570C8, ax ;~ 275C:0184
cs=0x275c;eip=0x000187; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_a))));	// 85128 mov     ax, [bp+arg_A] ;~ 275C:0187
cs=0x275c;eip=0x00018a; 	X(MOV(*(dw*)((&unk_570e4)), ax));	// 85129 mov     word ptr unk_570E4, ax ;~ 275C:018A
cs=0x275c;eip=0x00018d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 85130 mov     ax, [bp+arg_8] ;~ 275C:018D
cs=0x275c;eip=0x000190; 	T(OR(ax, 1));	// 85131 or      ax, 1 ;~ 275C:0190
cs=0x275c;eip=0x000193; 	X(MOV(*(dw*)((&unk_570c4)), ax));	// 85132 mov     word ptr unk_570C4, ax ;~ 275C:0193
cs=0x275c;eip=0x000196; 	T(MOV(al, *(raddr(ss,bp+arg_6))));	// 85133 mov     al, [bp+arg_6] ;~ 275C:0196
cs=0x275c;eip=0x000199; 	X(MOV(unk_570fe, al));	// 85134 mov     byte ptr unk_570FE, al ;~ 275C:0199
cs=0x275c;eip=0x00019c; 	T(MOV(dx, *(dw*)((&unk_4a03e))));	// 85135 mov     dx, word ptr unk_4A03E ;~ 275C:019C
cs=0x275c;eip=0x0001a0; 	T(MOV(ax, *(dw*)((&unk_4a040))));	// 85136 mov     ax, word ptr unk_4A040 ;~ 275C:01A0
cs=0x275c;eip=0x0001a3; 	T(MOV(dl, dh));	// 85137 mov     dl, dh ;~ 275C:01A3
cs=0x275c;eip=0x0001a5; 	T(MOV(dh, al));	// 85138 mov     dh, al ;~ 275C:01A5
cs=0x275c;eip=0x0001a7; 	T(MOV(al, ah));	// 85139 mov     al, ah ;~ 275C:01A7
cs=0x275c;eip=0x0001a9; 	T(CBW);	// 85140 cbw ;~ 275C:01A9
cs=0x275c;eip=0x0001aa; 	X(MOV(*(dw*)((&unk_570e6)), dx));	// 85141 mov     word ptr unk_570E6, dx ;~ 275C:01AA
cs=0x275c;eip=0x0001ae; 	X(MOV(*(dw*)((&unk_570e8)), ax));	// 85142 mov     word ptr unk_570E8, ax ;~ 275C:01AE
cs=0x275c;eip=0x0001b1; 	T(MOV(dx, *(dw*)((&unk_4a042))));	// 85143 mov     dx, word ptr unk_4A042 ;~ 275C:01B1
cs=0x275c;eip=0x0001b5; 	T(MOV(ax, *(dw*)((&unk_4a044))));	// 85144 mov     ax, word ptr unk_4A044 ;~ 275C:01B5
cs=0x275c;eip=0x0001b8; 	T(MOV(dl, dh));	// 85145 mov     dl, dh ;~ 275C:01B8
cs=0x275c;eip=0x0001ba; 	T(MOV(dh, al));	// 85146 mov     dh, al ;~ 275C:01BA
cs=0x275c;eip=0x0001bc; 	T(MOV(al, ah));	// 85147 mov     al, ah ;~ 275C:01BC
cs=0x275c;eip=0x0001be; 	T(CBW);	// 85148 cbw ;~ 275C:01BE
cs=0x275c;eip=0x0001bf; 	X(MOV(*(dw*)((&unk_570ea)), dx));	// 85149 mov     word ptr unk_570EA, dx ;~ 275C:01BF
cs=0x275c;eip=0x0001c3; 	X(MOV(*(dw*)((&unk_570ec)), ax));	// 85150 mov     word ptr unk_570EC, ax ;~ 275C:01C3
cs=0x275c;eip=0x0001c6; 	T(MOV(dx, *(dw*)((&unk_4a046))));	// 85151 mov     dx, word ptr unk_4A046 ;~ 275C:01C6
cs=0x275c;eip=0x0001ca; 	T(MOV(ax, *(dw*)((&unk_4a048))));	// 85152 mov     ax, word ptr unk_4A048 ;~ 275C:01CA
cs=0x275c;eip=0x0001cd; 	T(MOV(dl, dh));	// 85153 mov     dl, dh ;~ 275C:01CD
cs=0x275c;eip=0x0001cf; 	T(MOV(dh, al));	// 85154 mov     dh, al ;~ 275C:01CF
cs=0x275c;eip=0x0001d1; 	T(MOV(al, ah));	// 85155 mov     al, ah ;~ 275C:01D1
cs=0x275c;eip=0x0001d3; 	T(CBW);	// 85156 cbw ;~ 275C:01D3
cs=0x275c;eip=0x0001d4; 	X(MOV(*(dw*)((&unk_570ee)), dx));	// 85157 mov     word ptr unk_570EE, dx ;~ 275C:01D4
cs=0x275c;eip=0x0001d8; 	X(MOV(*(dw*)((&unk_570f0)), ax));	// 85158 mov     word ptr unk_570F0, ax ;~ 275C:01D8
cs=0x275c;eip=0x0001db; 	T(MOV(dx, *(dw*)((&unk_4a04a))));	// 85159 mov     dx, word ptr unk_4A04A ;~ 275C:01DB
cs=0x275c;eip=0x0001df; 	T(MOV(ax, *(dw*)((&unk_4a04c))));	// 85160 mov     ax, word ptr unk_4A04C ;~ 275C:01DF
cs=0x275c;eip=0x0001e2; 	T(MOV(dl, dh));	// 85161 mov     dl, dh ;~ 275C:01E2
cs=0x275c;eip=0x0001e4; 	T(MOV(dh, al));	// 85162 mov     dh, al ;~ 275C:01E4
cs=0x275c;eip=0x0001e6; 	T(MOV(al, ah));	// 85163 mov     al, ah ;~ 275C:01E6
cs=0x275c;eip=0x0001e8; 	T(CBW);	// 85164 cbw ;~ 275C:01E8
cs=0x275c;eip=0x0001e9; 	X(MOV(*(dw*)((&unk_570f2)), dx));	// 85165 mov     word ptr unk_570F2, dx ;~ 275C:01E9
cs=0x275c;eip=0x0001ed; 	X(MOV(*(dw*)((&unk_570f4)), ax));	// 85166 mov     word ptr unk_570F4, ax ;~ 275C:01ED
cs=0x275c;eip=0x0001f0; 	T(MOV(dx, *(dw*)((&unk_4a04e))));	// 85167 mov     dx, word ptr unk_4A04E ;~ 275C:01F0
cs=0x275c;eip=0x0001f4; 	T(MOV(ax, *(dw*)((&unk_4a050))));	// 85168 mov     ax, word ptr unk_4A050 ;~ 275C:01F4
cs=0x275c;eip=0x0001f7; 	T(MOV(dl, dh));	// 85169 mov     dl, dh ;~ 275C:01F7
cs=0x275c;eip=0x0001f9; 	T(MOV(dh, al));	// 85170 mov     dh, al ;~ 275C:01F9
cs=0x275c;eip=0x0001fb; 	T(MOV(al, ah));	// 85171 mov     al, ah ;~ 275C:01FB
cs=0x275c;eip=0x0001fd; 	T(CBW);	// 85172 cbw ;~ 275C:01FD
cs=0x275c;eip=0x0001fe; 	X(MOV(*(dw*)((&unk_570f6)), dx));	// 85173 mov     word ptr unk_570F6, dx ;~ 275C:01FE
cs=0x275c;eip=0x000202; 	X(MOV(*(dw*)((&unk_570f8)), ax));	// 85174 mov     word ptr unk_570F8, ax ;~ 275C:0202
cs=0x275c;eip=0x000205; 	T(MOV(dx, *(dw*)((&unk_4a052))));	// 85175 mov     dx, word ptr unk_4A052 ;~ 275C:0205
cs=0x275c;eip=0x000209; 	T(MOV(ax, *(dw*)((&unk_4a054))));	// 85176 mov     ax, word ptr unk_4A054 ;~ 275C:0209
cs=0x275c;eip=0x00020c; 	T(MOV(dl, dh));	// 85177 mov     dl, dh ;~ 275C:020C
cs=0x275c;eip=0x00020e; 	T(MOV(dh, al));	// 85178 mov     dh, al ;~ 275C:020E
cs=0x275c;eip=0x000210; 	T(MOV(al, ah));	// 85179 mov     al, ah ;~ 275C:0210
cs=0x275c;eip=0x000212; 	T(CBW);	// 85180 cbw ;~ 275C:0212
cs=0x275c;eip=0x000213; 	X(MOV(*(dw*)((&unk_570fa)), dx));	// 85181 mov     word ptr unk_570FA, dx ;~ 275C:0213
cs=0x275c;eip=0x000217; 	X(MOV(*(dw*)((&unk_570fc)), ax));	// 85182 mov     word ptr unk_570FC, ax ;~ 275C:0217
cs=0x275c;eip=0x00021a; 	T(MOV(bx, *(dw*)((&unk_570c6))));	// 85183 mov     bx, word ptr unk_570C6 ;~ 275C:021A
cs=0x275c;eip=0x00021e; 	T(MOV(cx, *(dw*)((&unk_570c8))));	// 85184 mov     cx, word ptr unk_570C8 ;~ 275C:021E
cs=0x275c;eip=0x000222; 	T(MOV(ax, *(dw*)((&unk_4a03e))));	// 85185 mov     ax, word ptr unk_4A03E ;~ 275C:0222
cs=0x275c;eip=0x000225; 	T(MOV(dx, *(dw*)((&unk_4a040))));	// 85186 mov     dx, word ptr unk_4A040 ;~ 275C:0225
cs=0x275c;eip=0x000229; 	T(SUB(ax, bx));	// 85187 sub     ax, bx ;~ 275C:0229
cs=0x275c;eip=0x00022b; 	T(SBB(dx, cx));	// 85188 sbb     dx, cx ;~ 275C:022B
cs=0x275c;eip=0x00022d; 	X(MOV(*(dw*)((&unk_570cc)), dx));	// 85189 mov     word ptr unk_570CC, dx ;~ 275C:022D
cs=0x275c;eip=0x000231; 	T(MOV(ax, *(dw*)((&unk_4a03e))));	// 85190 mov     ax, word ptr unk_4A03E ;~ 275C:0231
cs=0x275c;eip=0x000234; 	T(MOV(dx, *(dw*)((&unk_4a040))));	// 85191 mov     dx, word ptr unk_4A040 ;~ 275C:0234
cs=0x275c;eip=0x000238; 	T(ADD(ax, bx));	// 85192 add     ax, bx ;~ 275C:0238
cs=0x275c;eip=0x00023a; 	T(ADC(dx, cx));	// 85193 adc     dx, cx ;~ 275C:023A
cs=0x275c;eip=0x00023c; 	X(MOV(*(dw*)((&unk_570ce)), dx));	// 85194 mov     word ptr unk_570CE, dx ;~ 275C:023C
cs=0x275c;eip=0x000240; 	T(MOV(ax, *(dw*)((&unk_4a042))));	// 85195 mov     ax, word ptr unk_4A042 ;~ 275C:0240
cs=0x275c;eip=0x000243; 	T(MOV(dx, *(dw*)((&unk_4a044))));	// 85196 mov     dx, word ptr unk_4A044 ;~ 275C:0243
cs=0x275c;eip=0x000247; 	T(SUB(ax, bx));	// 85197 sub     ax, bx ;~ 275C:0247
cs=0x275c;eip=0x000249; 	T(SBB(dx, cx));	// 85198 sbb     dx, cx ;~ 275C:0249
cs=0x275c;eip=0x00024b; 	X(MOV(*(dw*)((&unk_570d0)), dx));	// 85199 mov     word ptr unk_570D0, dx ;~ 275C:024B
cs=0x275c;eip=0x00024f; 	T(MOV(ax, *(dw*)((&unk_4a042))));	// 85200 mov     ax, word ptr unk_4A042 ;~ 275C:024F
cs=0x275c;eip=0x000252; 	T(MOV(dx, *(dw*)((&unk_4a044))));	// 85201 mov     dx, word ptr unk_4A044 ;~ 275C:0252
cs=0x275c;eip=0x000256; 	T(ADD(ax, bx));	// 85202 add     ax, bx ;~ 275C:0256
cs=0x275c;eip=0x000258; 	T(ADC(dx, cx));	// 85203 adc     dx, cx ;~ 275C:0258
cs=0x275c;eip=0x00025a; 	X(MOV(*(dw*)((&unk_570d2)), dx));	// 85204 mov     word ptr unk_570D2, dx ;~ 275C:025A
cs=0x275c;eip=0x00025e; 	T(MOV(ax, *(dw*)((&unk_4a046))));	// 85205 mov     ax, word ptr unk_4A046 ;~ 275C:025E
cs=0x275c;eip=0x000261; 	T(MOV(dx, *(dw*)((&unk_4a048))));	// 85206 mov     dx, word ptr unk_4A048 ;~ 275C:0261
cs=0x275c;eip=0x000265; 	T(SUB(ax, bx));	// 85207 sub     ax, bx ;~ 275C:0265
cs=0x275c;eip=0x000267; 	T(SBB(dx, cx));	// 85208 sbb     dx, cx ;~ 275C:0267
cs=0x275c;eip=0x000269; 	X(MOV(*(dw*)((&unk_570d4)), dx));	// 85209 mov     word ptr unk_570D4, dx ;~ 275C:0269
cs=0x275c;eip=0x00026d; 	T(MOV(ax, *(dw*)((&unk_4a046))));	// 85210 mov     ax, word ptr unk_4A046 ;~ 275C:026D
cs=0x275c;eip=0x000270; 	T(MOV(dx, *(dw*)((&unk_4a048))));	// 85211 mov     dx, word ptr unk_4A048 ;~ 275C:0270
cs=0x275c;eip=0x000274; 	T(ADD(ax, bx));	// 85212 add     ax, bx ;~ 275C:0274
cs=0x275c;eip=0x000276; 	T(ADC(dx, cx));	// 85213 adc     dx, cx ;~ 275C:0276
cs=0x275c;eip=0x000278; 	X(MOV(*(dw*)((&unk_570d6)), dx));	// 85214 mov     word ptr unk_570D6, dx ;~ 275C:0278
cs=0x275c;eip=0x00027c; 	T(MOV(ax, *(dw*)((&unk_4a04a))));	// 85215 mov     ax, word ptr unk_4A04A ;~ 275C:027C
cs=0x275c;eip=0x00027f; 	T(MOV(dx, *(dw*)((&unk_4a04c))));	// 85216 mov     dx, word ptr unk_4A04C ;~ 275C:027F
cs=0x275c;eip=0x000283; 	T(SUB(ax, bx));	// 85217 sub     ax, bx ;~ 275C:0283
cs=0x275c;eip=0x000285; 	T(SBB(dx, cx));	// 85218 sbb     dx, cx ;~ 275C:0285
cs=0x275c;eip=0x000287; 	X(MOV(*(dw*)((&unk_570d8)), dx));	// 85219 mov     word ptr unk_570D8, dx ;~ 275C:0287
cs=0x275c;eip=0x00028b; 	T(MOV(ax, *(dw*)((&unk_4a04a))));	// 85220 mov     ax, word ptr unk_4A04A ;~ 275C:028B
cs=0x275c;eip=0x00028e; 	T(MOV(dx, *(dw*)((&unk_4a04c))));	// 85221 mov     dx, word ptr unk_4A04C ;~ 275C:028E
cs=0x275c;eip=0x000292; 	T(ADD(ax, bx));	// 85222 add     ax, bx ;~ 275C:0292
cs=0x275c;eip=0x000294; 	T(ADC(dx, cx));	// 85223 adc     dx, cx ;~ 275C:0294
cs=0x275c;eip=0x000296; 	X(MOV(*(dw*)((&unk_570da)), dx));	// 85224 mov     word ptr unk_570DA, dx ;~ 275C:0296
cs=0x275c;eip=0x00029a; 	T(MOV(ax, *(dw*)((&unk_4a04e))));	// 85225 mov     ax, word ptr unk_4A04E ;~ 275C:029A
cs=0x275c;eip=0x00029d; 	T(MOV(dx, *(dw*)((&unk_4a050))));	// 85226 mov     dx, word ptr unk_4A050 ;~ 275C:029D
cs=0x275c;eip=0x0002a1; 	T(SUB(ax, bx));	// 85227 sub     ax, bx ;~ 275C:02A1
cs=0x275c;eip=0x0002a3; 	T(SBB(dx, cx));	// 85228 sbb     dx, cx ;~ 275C:02A3
cs=0x275c;eip=0x0002a5; 	X(MOV(*(dw*)((&unk_570dc)), dx));	// 85229 mov     word ptr unk_570DC, dx ;~ 275C:02A5
cs=0x275c;eip=0x0002a9; 	T(MOV(ax, *(dw*)((&unk_4a04e))));	// 85230 mov     ax, word ptr unk_4A04E ;~ 275C:02A9
cs=0x275c;eip=0x0002ac; 	T(MOV(dx, *(dw*)((&unk_4a050))));	// 85231 mov     dx, word ptr unk_4A050 ;~ 275C:02AC
cs=0x275c;eip=0x0002b0; 	T(ADD(ax, bx));	// 85232 add     ax, bx ;~ 275C:02B0
cs=0x275c;eip=0x0002b2; 	T(ADC(dx, cx));	// 85233 adc     dx, cx ;~ 275C:02B2
cs=0x275c;eip=0x0002b4; 	X(MOV(*(dw*)((&unk_570de)), dx));	// 85234 mov     word ptr unk_570DE, dx ;~ 275C:02B4
cs=0x275c;eip=0x0002b8; 	T(MOV(ax, *(dw*)((&unk_4a052))));	// 85235 mov     ax, word ptr unk_4A052 ;~ 275C:02B8
cs=0x275c;eip=0x0002bb; 	T(MOV(dx, *(dw*)((&unk_4a054))));	// 85236 mov     dx, word ptr unk_4A054 ;~ 275C:02BB
cs=0x275c;eip=0x0002bf; 	T(SUB(ax, bx));	// 85237 sub     ax, bx ;~ 275C:02BF
cs=0x275c;eip=0x0002c1; 	T(SBB(dx, cx));	// 85238 sbb     dx, cx ;~ 275C:02C1
cs=0x275c;eip=0x0002c3; 	X(MOV(*(dw*)((&unk_570e0)), dx));	// 85239 mov     word ptr unk_570E0, dx ;~ 275C:02C3
cs=0x275c;eip=0x0002c7; 	T(MOV(ax, *(dw*)((&unk_4a052))));	// 85240 mov     ax, word ptr unk_4A052 ;~ 275C:02C7
cs=0x275c;eip=0x0002ca; 	T(MOV(dx, *(dw*)((&unk_4a054))));	// 85241 mov     dx, word ptr unk_4A054 ;~ 275C:02CA
cs=0x275c;eip=0x0002ce; 	T(ADD(ax, bx));	// 85242 add     ax, bx ;~ 275C:02CE
cs=0x275c;eip=0x0002d0; 	T(ADC(dx, cx));	// 85243 adc     dx, cx ;~ 275C:02D0
cs=0x275c;eip=0x0002d2; 	X(MOV(*(dw*)((&unk_570e2)), dx));	// 85244 mov     word ptr unk_570E2, dx ;~ 275C:02D2
cs=0x275c;eip=0x0002d6; 	T(CMP(*(dw*)((&unk_570c4)), 0x1001));	// 85245 cmp     word ptr unk_570C4, 1001h ;~ 275C:02D6
cs=0x275c;eip=0x0002dc; 	R(JNZ(loc_35eac));	// 85246 jnz     short loc_35EAC ;~ 275C:02DC
cs=0x275c;eip=0x0002de; 	T(XOR(bx, bx));	// 85247 xor     bx, bx ;~ 275C:02DE
cs=0x275c;eip=0x0002e0; 	T(MOV(cx, *(dw*)((&unk_4a040))));	// 85248 mov     cx, word ptr unk_4A040 ;~ 275C:02E0
cs=0x275c;eip=0x0002e4; 	T(MOV(dx, *(dw*)((&unk_4a048))));	// 85249 mov     dx, word ptr unk_4A048 ;~ 275C:02E4
cs=0x275c;eip=0x0002e8; 	T(MOV(ds, *(dw*)((&unk_570bc))));	// 85250 mov     ds, word ptr unk_570BC ;~ 275C:02E8
cs=0x275c;eip=0x0002ec; 	R(CALL(sub_36891,0));	// 85251 call    sub_36891 ;~ 275C:02EC
cs=0x275c;eip=0x0002ef; 	T(MOV(si, ax));	// 85252 mov     si, ax ;~ 275C:02EF
cs=0x275c;eip=0x0002f1; 	T(XOR(bx, bx));	// 85253 xor     bx, bx ;~ 275C:02F1
cs=0x275c;eip=0x0002f3; 	T(MOV(cx, *(dw*)((&unk_4a04c))));	// 85254 mov     cx, word ptr unk_4A04C ;~ 275C:02F3
cs=0x275c;eip=0x0002f7; 	T(MOV(dx, *(dw*)((&unk_4a054))));	// 85255 mov     dx, word ptr unk_4A054 ;~ 275C:02F7
cs=0x275c;eip=0x0002fb; 	T(MOV(ds, *(dw*)((&unk_570bc))));	// 85256 mov     ds, word ptr unk_570BC ;~ 275C:02FB
cs=0x275c;eip=0x0002ff; 	R(CALL(sub_36891,0));	// 85257 call    sub_36891 ;~ 275C:02FF
cs=0x275c;eip=0x000302; 	T(MOV(di, ax));	// 85258 mov     di, ax ;~ 275C:0302
cs=0x275c;eip=0x000304; 	T(MOV(ax, *(dw*)((&unk_570bc))));	// 85259 mov     ax, word ptr unk_570BC ;~ 275C:0304
cs=0x275c;eip=0x000307; 	X(MOV(*(dw*)((&unk_4a056)), ax));	// 85260 mov     word ptr unk_4A056, ax ;~ 275C:0307
cs=0x275c;eip=0x00030a; 	R(JMP(loc_35eeb));	// 85261 jmp     short loc_35EEB ;~ 275C:030A
loc_35eac:
	// 9822 
cs=0x275c;eip=0x00030c; 	T(CMP(*(dw*)((&unk_570c4)), 0x101));	// 85265 cmp     word ptr unk_570C4, 101h ;~ 275C:030C
cs=0x275c;eip=0x000312; 	R(JNZ(loc_35ee2));	// 85266 jnz     short loc_35EE2 ;~ 275C:0312
cs=0x275c;eip=0x000314; 	T(XOR(bx, bx));	// 85267 xor     bx, bx ;~ 275C:0314
cs=0x275c;eip=0x000316; 	T(MOV(cx, *(dw*)((&unk_4a040))));	// 85268 mov     cx, word ptr unk_4A040 ;~ 275C:0316
cs=0x275c;eip=0x00031a; 	T(MOV(dx, *(dw*)((&unk_4a048))));	// 85269 mov     dx, word ptr unk_4A048 ;~ 275C:031A
cs=0x275c;eip=0x00031e; 	T(MOV(ds, *(dw*)((&unk_570be))));	// 85270 mov     ds, word ptr unk_570BE ;~ 275C:031E
cs=0x275c;eip=0x000322; 	R(CALL(sub_36891,0));	// 85271 call    sub_36891 ;~ 275C:0322
cs=0x275c;eip=0x000325; 	T(MOV(si, ax));	// 85272 mov     si, ax ;~ 275C:0325
cs=0x275c;eip=0x000327; 	T(XOR(bx, bx));	// 85273 xor     bx, bx ;~ 275C:0327
cs=0x275c;eip=0x000329; 	T(MOV(cx, *(dw*)((&unk_4a04c))));	// 85274 mov     cx, word ptr unk_4A04C ;~ 275C:0329
cs=0x275c;eip=0x00032d; 	T(MOV(dx, *(dw*)((&unk_4a054))));	// 85275 mov     dx, word ptr unk_4A054 ;~ 275C:032D
cs=0x275c;eip=0x000331; 	T(MOV(ds, *(dw*)((&unk_570be))));	// 85276 mov     ds, word ptr unk_570BE ;~ 275C:0331
cs=0x275c;eip=0x000335; 	R(CALL(sub_36891,0));	// 85277 call    sub_36891 ;~ 275C:0335
cs=0x275c;eip=0x000338; 	T(MOV(di, ax));	// 85278 mov     di, ax ;~ 275C:0338
cs=0x275c;eip=0x00033a; 	T(MOV(ax, *(dw*)((&unk_570be))));	// 85279 mov     ax, word ptr unk_570BE ;~ 275C:033A
cs=0x275c;eip=0x00033d; 	X(MOV(*(dw*)((&unk_4a056)), ax));	// 85280 mov     word ptr unk_4A056, ax ;~ 275C:033D
cs=0x275c;eip=0x000340; 	R(JMP(loc_35eeb));	// 85281 jmp     short loc_35EEB ;~ 275C:0340
loc_35ee2:
	// 9823 
cs=0x275c;eip=0x000342; 	T(MOV(ax, 0x31));	// 85285 mov     ax, 31h ; '1' ;~ 275C:0342
cs=0x275c;eip=0x000345; 	X(PUSH(ax));	// 85286 push    ax ;~ 275C:0345
cs=0x275c;eip=0x000346; 	R(CALLF(sub_2f838,0));	// 85287 call    sub_2F838 ;~ 275C:0346
loc_35eeb:
	// 9824 
cs=0x275c;eip=0x00034b; 	X(PUSH(*(dw*)((&unk_4a056))));	// 85292 push    word ptr unk_4A056 ;~ 275C:034B
cs=0x275c;eip=0x00034f; 	X(PUSH(si));	// 85293 push    si ;~ 275C:034F
cs=0x275c;eip=0x000350; 	R(CALL(sub_36723,0));	// 85294 call    sub_36723 ;~ 275C:0350
cs=0x275c;eip=0x000353; 	T(OR(ax, ax));	// 85295 or      ax, ax ;~ 275C:0353
cs=0x275c;eip=0x000355; 	R(JNZ(loc_35f60));	// 85296 jnz     short loc_35F60 ;~ 275C:0355
cs=0x275c;eip=0x000357; 	T(CMP(si, di));	// 85297 cmp     si, di ;~ 275C:0357
cs=0x275c;eip=0x000359; 	R(JZ(loc_35f07));	// 85298 jz      short loc_35F07 ;~ 275C:0359
cs=0x275c;eip=0x00035b; 	X(PUSH(*(dw*)((&unk_4a056))));	// 85299 push    word ptr unk_4A056 ;~ 275C:035B
cs=0x275c;eip=0x00035f; 	X(PUSH(di));	// 85300 push    di ;~ 275C:035F
cs=0x275c;eip=0x000360; 	R(CALL(sub_36723,0));	// 85301 call    sub_36723 ;~ 275C:0360
cs=0x275c;eip=0x000363; 	T(OR(ax, ax));	// 85302 or      ax, ax ;~ 275C:0363
cs=0x275c;eip=0x000365; 	R(JNZ(loc_35f60));	// 85303 jnz     short loc_35F60 ;~ 275C:0365
loc_35f07:
	// 9825 
cs=0x275c;eip=0x000367; 	T(CMP(*(raddr(ss,bp+arg_2)), 0));	// 85306 cmp     [bp+arg_2], 0 ;~ 275C:0367
cs=0x275c;eip=0x00036b; 	R(JZ(loc_35f18));	// 85307 jz      short loc_35F18 ;~ 275C:036B
cs=0x275c;eip=0x00036d; 	X(PUSH(*(dw*)((&unk_47a9c))));	// 85308 push    word ptr unk_47A9C ;~ 275C:036D
cs=0x275c;eip=0x000371; 	R(CALL(sub_367e0,0));	// 85309 call    sub_367E0 ;~ 275C:0371
cs=0x275c;eip=0x000374; 	T(OR(ax, ax));	// 85310 or      ax, ax ;~ 275C:0374
cs=0x275c;eip=0x000376; 	R(JNZ(loc_35f60));	// 85311 jnz     short loc_35F60 ;~ 275C:0376
loc_35f18:
	// 9826 
cs=0x275c;eip=0x000378; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 85314 cmp     [bp+arg_0], 0 ;~ 275C:0378
cs=0x275c;eip=0x00037c; 	R(JZ(loc_35f4e));	// 85315 jz      short loc_35F4E ;~ 275C:037C
cs=0x275c;eip=0x00037e; 	T(MOV(si, *(dw*)((&unk_56dcc))));	// 85316 mov     si, word ptr unk_56DCC ;~ 275C:037E
cs=0x275c;eip=0x000382; 	T(OR(si, si));	// 85317 or      si, si ;~ 275C:0382
cs=0x275c;eip=0x000384; 	R(JZ(loc_35f4e));	// 85318 jz      short loc_35F4E ;~ 275C:0384
cs=0x275c;eip=0x000386; 	T(SHL(si, 1));	// 85319 shl     si, 1 ;~ 275C:0386
cs=0x275c;eip=0x000388; 	T(ADD(si, 0x0F410));	// 85320 add     si, 0F410h ;~ 275C:0388
loc_35f2c:
	// 9827 
cs=0x275c;eip=0x00038c; 	T(MOV(di, *(dw*)(raddr(ds,si))));	// 85323 mov     di, [si] ;~ 275C:038C
cs=0x275c;eip=0x00038e; 	T(OR(di, di));	// 85324 or      di, di ;~ 275C:038E
cs=0x275c;eip=0x000390; 	R(JZ(loc_35f45));	// 85325 jz      short loc_35F45 ;~ 275C:0390
cs=0x275c;eip=0x000392; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 85326 mov     es, word ptr unk_47A9A ;~ 275C:0392
cs=0x275c;eip=0x000396; 	T(MOV(di, *(dw*)(raddr(es,di+2))));	// 85328 mov     di, es:[di+2] ;~ 275C:0396
cs=0x275c;eip=0x00039a; 	T(MOV(bx, di));	// 85329 mov     bx, di ;~ 275C:039A
cs=0x275c;eip=0x00039c; 	R(CALL(sub_360ed,0));	// 85330 call    sub_360ED ;~ 275C:039C
cs=0x275c;eip=0x00039f; 	R(JNC(loc_35f45));	// 85331 jnb     short loc_35F45 ;~ 275C:039F
cs=0x275c;eip=0x0003a1; 	T(MOV(ax, di));	// 85332 mov     ax, di ;~ 275C:03A1
cs=0x275c;eip=0x0003a3; 	R(JMP(loc_35f60));	// 85333 jmp     short loc_35F60 ;~ 275C:03A3
loc_35f45:
	// 9828 
cs=0x275c;eip=0x0003a5; 	T(SUB(si, 2));	// 85338 sub     si, 2 ;~ 275C:03A5
cs=0x275c;eip=0x0003a8; 	T(CMP(si, 0x0F412));	// 85339 cmp     si, 0F412h ;~ 275C:03A8
cs=0x275c;eip=0x0003ac; 	R(JNC(loc_35f2c));	// 85340 jnb     short loc_35F2C ;~ 275C:03AC
loc_35f4e:
	// 9829 
cs=0x275c;eip=0x0003ae; 	T(CMP(*(raddr(ss,bp+arg_4)), 0));	// 85344 cmp     [bp+arg_4], 0 ;~ 275C:03AE
cs=0x275c;eip=0x0003b2; 	R(JZ(loc_35f5e));	// 85345 jz      short loc_35F5E ;~ 275C:03B2
cs=0x275c;eip=0x0003b4; 	R(CALL(sub_36619,0));	// 85346 call    sub_36619 ;~ 275C:03B4
cs=0x275c;eip=0x0003b7; 	R(JNC(loc_35f5e));	// 85347 jnb     short loc_35F5E ;~ 275C:03B7
cs=0x275c;eip=0x0003b9; 	T(MOV(ax, 0x0FFFF));	// 85348 mov     ax, 0FFFFh ;~ 275C:03B9
cs=0x275c;eip=0x0003bc; 	R(JMP(loc_35f60));	// 85349 jmp     short loc_35F60 ;~ 275C:03BC
loc_35f5e:
	// 9830 
cs=0x275c;eip=0x0003be; 	T(XOR(ax, ax));	// 85354 xor     ax, ax ;~ 275C:03BE
loc_35f60:
	// 9831 
cs=0x275c;eip=0x0003c0; 	X(POP(di));	// 85358 pop     di ;~ 275C:03C0
cs=0x275c;eip=0x0003c1; 	X(POP(si));	// 85359 pop     si ;~ 275C:03C1
cs=0x275c;eip=0x0003c2; 	X(POP(bp));	// 85360 pop     bp ;~ 275C:03C2
cs=0x275c;eip=0x0003c3; 	R(RETF(0x1A));	// 85361 retf    1Ah ;~ 275C:03C3
sub_35f66:
	// 85368 
cs=0x275c;eip=0x0003c6; 	T(XOR(bl, bl));	// 85370 xor     bl, bl ;~ 275C:03C6
cs=0x275c;eip=0x0003c8; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 85371 mov     ax, word ptr unk_4A064 ;~ 275C:03C8
cs=0x275c;eip=0x0003cb; 	T(CMP(ax, *(dw*)((&unk_4a070))));	// 85372 cmp     ax, word ptr unk_4A070 ;~ 275C:03CB
cs=0x275c;eip=0x0003cf; 	R(JGE(loc_35f74));	// 85373 jge     short loc_35F74 ;~ 275C:03CF
cs=0x275c;eip=0x0003d1; 	T(OR(bl, 4));	// 85374 or      bl, 4 ;~ 275C:03D1
loc_35f74:
	// 9832 
cs=0x275c;eip=0x0003d4; 	T(CMP(ax, *(dw*)((&unk_4a072))));	// 85377 cmp     ax, word ptr unk_4A072 ;~ 275C:03D4
cs=0x275c;eip=0x0003d8; 	R(JLE(loc_35f7d));	// 85378 jle     short loc_35F7D ;~ 275C:03D8
cs=0x275c;eip=0x0003da; 	T(OR(bl, 8));	// 85379 or      bl, 8 ;~ 275C:03DA
loc_35f7d:
	// 9833 
cs=0x275c;eip=0x0003dd; 	T(MOV(ax, *(dw*)((&unk_4a066))));	// 85382 mov     ax, word ptr unk_4A066 ;~ 275C:03DD
cs=0x275c;eip=0x0003e0; 	T(CMP(ax, *(dw*)((&unk_4a074))));	// 85383 cmp     ax, word ptr unk_4A074 ;~ 275C:03E0
cs=0x275c;eip=0x0003e4; 	R(JGE(loc_35f89));	// 85384 jge     short loc_35F89 ;~ 275C:03E4
cs=0x275c;eip=0x0003e6; 	T(OR(bl, 2));	// 85385 or      bl, 2 ;~ 275C:03E6
loc_35f89:
	// 9834 
cs=0x275c;eip=0x0003e9; 	T(CMP(ax, *(dw*)((&unk_4a076))));	// 85388 cmp     ax, word ptr unk_4A076 ;~ 275C:03E9
cs=0x275c;eip=0x0003ed; 	R(JLE(loc_35f92));	// 85389 jle     short loc_35F92 ;~ 275C:03ED
cs=0x275c;eip=0x0003ef; 	T(OR(bl, 1));	// 85390 or      bl, 1 ;~ 275C:03EF
loc_35f92:
	// 9835 
cs=0x275c;eip=0x0003f2; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 85393 mov     ax, word ptr unk_4A068 ;~ 275C:03F2
cs=0x275c;eip=0x0003f5; 	T(CMP(ax, *(dw*)((&unk_4a078))));	// 85394 cmp     ax, word ptr unk_4A078 ;~ 275C:03F5
cs=0x275c;eip=0x0003f9; 	R(JGE(loc_35f9e));	// 85395 jge     short loc_35F9E ;~ 275C:03F9
cs=0x275c;eip=0x0003fb; 	T(OR(bl, 0x10));	// 85396 or      bl, 10h ;~ 275C:03FB
loc_35f9e:
	// 9836 
cs=0x275c;eip=0x0003fe; 	T(CMP(ax, *(dw*)((&unk_4a07a))));	// 85399 cmp     ax, word ptr unk_4A07A ;~ 275C:03FE
cs=0x275c;eip=0x000402; 	R(JLE(loc_35fa7));	// 85400 jle     short loc_35FA7 ;~ 275C:0402
cs=0x275c;eip=0x000404; 	T(OR(bl, 0x20));	// 85401 or      bl, 20h ;~ 275C:0404
loc_35fa7:
	// 9837 
cs=0x275c;eip=0x000407; 	X(MOV(unk_4a07c, bl));	// 85404 mov     byte ptr unk_4A07C, bl ;~ 275C:0407
cs=0x275c;eip=0x00040b; 	R(RETN(0));	// 85405 retn ;~ 275C:040B
sub_35fac:
	// 85412 
cs=0x275c;eip=0x00040c; 	T(XOR(bl, bl));	// 85414 xor     bl, bl ;~ 275C:040C
cs=0x275c;eip=0x00040e; 	T(MOV(ax, *(dw*)((&unk_4a06a))));	// 85415 mov     ax, word ptr unk_4A06A ;~ 275C:040E
cs=0x275c;eip=0x000411; 	T(CMP(ax, *(dw*)((&unk_4a070))));	// 85416 cmp     ax, word ptr unk_4A070 ;~ 275C:0411
cs=0x275c;eip=0x000415; 	R(JGE(loc_35fba));	// 85417 jge     short loc_35FBA ;~ 275C:0415
cs=0x275c;eip=0x000417; 	T(OR(bl, 4));	// 85418 or      bl, 4 ;~ 275C:0417
loc_35fba:
	// 9838 
cs=0x275c;eip=0x00041a; 	T(CMP(ax, *(dw*)((&unk_4a072))));	// 85421 cmp     ax, word ptr unk_4A072 ;~ 275C:041A
cs=0x275c;eip=0x00041e; 	R(JLE(loc_35fc3));	// 85422 jle     short loc_35FC3 ;~ 275C:041E
cs=0x275c;eip=0x000420; 	T(OR(bl, 8));	// 85423 or      bl, 8 ;~ 275C:0420
loc_35fc3:
	// 9839 
cs=0x275c;eip=0x000423; 	T(MOV(ax, *(dw*)((&unk_4a06c))));	// 85426 mov     ax, word ptr unk_4A06C ;~ 275C:0423
cs=0x275c;eip=0x000426; 	T(CMP(ax, *(dw*)((&unk_4a074))));	// 85427 cmp     ax, word ptr unk_4A074 ;~ 275C:0426
cs=0x275c;eip=0x00042a; 	R(JGE(loc_35fcf));	// 85428 jge     short loc_35FCF ;~ 275C:042A
cs=0x275c;eip=0x00042c; 	T(OR(bl, 2));	// 85429 or      bl, 2 ;~ 275C:042C
loc_35fcf:
	// 9840 
cs=0x275c;eip=0x00042f; 	T(CMP(ax, *(dw*)((&unk_4a076))));	// 85432 cmp     ax, word ptr unk_4A076 ;~ 275C:042F
cs=0x275c;eip=0x000433; 	R(JLE(loc_35fd8));	// 85433 jle     short loc_35FD8 ;~ 275C:0433
cs=0x275c;eip=0x000435; 	T(OR(bl, 1));	// 85434 or      bl, 1 ;~ 275C:0435
loc_35fd8:
	// 9841 
cs=0x275c;eip=0x000438; 	T(MOV(ax, *(dw*)((&unk_4a06e))));	// 85437 mov     ax, word ptr unk_4A06E ;~ 275C:0438
cs=0x275c;eip=0x00043b; 	T(CMP(ax, *(dw*)((&unk_4a078))));	// 85438 cmp     ax, word ptr unk_4A078 ;~ 275C:043B
cs=0x275c;eip=0x00043f; 	R(JGE(loc_35fe4));	// 85439 jge     short loc_35FE4 ;~ 275C:043F
cs=0x275c;eip=0x000441; 	T(OR(bl, 0x10));	// 85440 or      bl, 10h ;~ 275C:0441
loc_35fe4:
	// 9842 
cs=0x275c;eip=0x000444; 	T(CMP(ax, *(dw*)((&unk_4a07a))));	// 85443 cmp     ax, word ptr unk_4A07A ;~ 275C:0444
cs=0x275c;eip=0x000448; 	R(JLE(loc_35fed));	// 85444 jle     short loc_35FED ;~ 275C:0448
cs=0x275c;eip=0x00044a; 	T(OR(bl, 0x20));	// 85445 or      bl, 20h ;~ 275C:044A
loc_35fed:
	// 9843 
cs=0x275c;eip=0x00044d; 	X(MOV(unk_4a07d, bl));	// 85448 mov     byte ptr unk_4A07D, bl ;~ 275C:044D
cs=0x275c;eip=0x000451; 	R(RETN(0));	// 85449 retn ;~ 275C:0451
sub_35ff2:
	// 85457 
#undef arg_0
#define arg_0 4
	// 85460 arg_0           = word ptr  4 ;~ 275C:0452
#undef arg_2
#define arg_2 6
	// 85461 arg_2           = word ptr  6 ;~ 275C:0452
#undef arg_4
#define arg_4 8
	// 85462 arg_4           = word ptr  8 ;~ 275C:0452
cs=0x275c;eip=0x000452; 	X(PUSH(bp));	// 85464 push    bp ;~ 275C:0452
cs=0x275c;eip=0x000453; 	T(MOV(bp, sp));	// 85465 mov     bp, sp ;~ 275C:0453
cs=0x275c;eip=0x000455; 	X(PUSH(si));	// 85466 push    si ;~ 275C:0455
cs=0x275c;eip=0x000456; 	X(PUSH(di));	// 85467 push    di ;~ 275C:0456
cs=0x275c;eip=0x000457; 	T(MOV(bx, *(dw*)((&unk_4a09e))));	// 85468 mov     bx, word ptr unk_4A09E ;~ 275C:0457
cs=0x275c;eip=0x00045b; 	T(MOV(bx, *(dw*)(raddr(ds,bx+0x44))));	// 85469 mov     bx, [bx+44h] ;~ 275C:045B
cs=0x275c;eip=0x00045e; 	T(MOV(cl, *(raddr(ds,bx+0x0C))));	// 85470 mov     cl, [bx+0Ch] ;~ 275C:045E
cs=0x275c;eip=0x000461; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 85471 mov     si, [bp+arg_4] ;~ 275C:0461
cs=0x275c;eip=0x000464; 	T(SAR(si, cl));	// 85472 sar     si, cl ;~ 275C:0464
cs=0x275c;eip=0x000466; 	T(ADD(si, *(dw*)(raddr(ds,bx+8))));	// 85473 add     si, [bx+8] ;~ 275C:0466
cs=0x275c;eip=0x000469; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 85474 mov     di, [bp+arg_0] ;~ 275C:0469
cs=0x275c;eip=0x00046c; 	T(SAR(di, cl));	// 85475 sar     di, cl ;~ 275C:046C
cs=0x275c;eip=0x00046e; 	T(ADD(di, *(dw*)(raddr(ds,bx+8))));	// 85476 add     di, [bx+8] ;~ 275C:046E
cs=0x275c;eip=0x000471; 	T(OR(si, si));	// 85477 or      si, si ;~ 275C:0471
cs=0x275c;eip=0x000473; 	R(JS(loc_36053));	// 85478 js      short loc_36053 ;~ 275C:0473
cs=0x275c;eip=0x000475; 	T(CMP(si, *(dw*)(raddr(ds,bx+4))));	// 85479 cmp     si, [bx+4] ;~ 275C:0475
cs=0x275c;eip=0x000478; 	R(JGE(loc_36053));	// 85480 jge     short loc_36053 ;~ 275C:0478
cs=0x275c;eip=0x00047a; 	T(OR(di, di));	// 85481 or      di, di ;~ 275C:047A
cs=0x275c;eip=0x00047c; 	R(JS(loc_36053));	// 85482 js      short loc_36053 ;~ 275C:047C
cs=0x275c;eip=0x00047e; 	T(CMP(di, *(dw*)(raddr(ds,bx+6))));	// 85483 cmp     di, [bx+6] ;~ 275C:047E
cs=0x275c;eip=0x000481; 	R(JGE(loc_36053));	// 85484 jge     short loc_36053 ;~ 275C:0481
cs=0x275c;eip=0x000483; 	T(MOV(ax, di));	// 85485 mov     ax, di ;~ 275C:0483
cs=0x275c;eip=0x000485; 	X(IMUL1_2(*(dw*)(raddr(ds,bx+4))));	// 85486 imul    word ptr [bx+4] ;~ 275C:0485
cs=0x275c;eip=0x000488; 	T(ADD(ax, si));	// 85487 add     ax, si ;~ 275C:0488
cs=0x275c;eip=0x00048a; 	T(MOV(cl, *(raddr(ds,bx+0x0E))));	// 85488 mov     cl, [bx+0Eh] ;~ 275C:048A
cs=0x275c;eip=0x00048d; 	T(LES(bx, *(dw*)(raddr(ds,bx))));	// 85489 les     bx, [bx] ;~ 275C:048D
cs=0x275c;eip=0x00048f; 	T(ADD(bx, ax));	// 85491 add     bx, ax ;~ 275C:048F
cs=0x275c;eip=0x000491; 	T(MOV(al, *(raddr(es,bx))));	// 85492 mov     al, es:[bx] ;~ 275C:0491
cs=0x275c;eip=0x000494; 	T(XOR(ah, ah));	// 85493 xor     ah, ah ;~ 275C:0494
cs=0x275c;eip=0x000496; 	T(SHL(ax, cl));	// 85494 shl     ax, cl ;~ 275C:0496
cs=0x275c;eip=0x000498; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), ax));	// 85495 cmp     [bp+arg_2], ax ;~ 275C:0498
cs=0x275c;eip=0x00049b; 	R(JG(loc_36053));	// 85496 jg      short loc_36053 ;~ 275C:049B
cs=0x275c;eip=0x00049d; 	X(MOV(*(dw*)((&unk_4a066)), ax));	// 85497 mov     word ptr unk_4A066, ax ;~ 275C:049D
cs=0x275c;eip=0x0004a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 85498 mov     ax, [bp+arg_4] ;~ 275C:04A0
cs=0x275c;eip=0x0004a3; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 85499 mov     word ptr unk_4A064, ax ;~ 275C:04A3
cs=0x275c;eip=0x0004a6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 85500 mov     ax, [bp+arg_0] ;~ 275C:04A6
cs=0x275c;eip=0x0004a9; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 85501 mov     word ptr unk_4A068, ax ;~ 275C:04A9
cs=0x275c;eip=0x0004ac; 	T(STC);	// 85502 stc ;~ 275C:04AC
cs=0x275c;eip=0x0004ad; 	X(POP(di));	// 85503 pop     di ;~ 275C:04AD
cs=0x275c;eip=0x0004ae; 	X(POP(si));	// 85504 pop     si ;~ 275C:04AE
cs=0x275c;eip=0x0004af; 	X(POP(bp));	// 85505 pop     bp ;~ 275C:04AF
cs=0x275c;eip=0x0004b0; 	R(RETN(6));	// 85506 retn    6 ;~ 275C:04B0
loc_36053:
	// 9844 
cs=0x275c;eip=0x0004b3; 	T(CLC);	// 85511 clc ;~ 275C:04B3
cs=0x275c;eip=0x0004b4; 	X(POP(di));	// 85512 pop     di ;~ 275C:04B4
cs=0x275c;eip=0x0004b5; 	X(POP(si));	// 85513 pop     si ;~ 275C:04B5
cs=0x275c;eip=0x0004b6; 	X(POP(bp));	// 85514 pop     bp ;~ 275C:04B6
cs=0x275c;eip=0x0004b7; 	R(RETN(6));	// 85515 retn    6 ;~ 275C:04B7
sub_3605a:
	// 85522 
cs=0x275c;eip=0x0004ba; 	X(PUSH(*(dw*)((&unk_4a064))));	// 85523 push    word ptr unk_4A064 ;~ 275C:04BA
cs=0x275c;eip=0x0004be; 	X(PUSH(*(dw*)((&unk_4a066))));	// 85524 push    word ptr unk_4A066 ;~ 275C:04BE
cs=0x275c;eip=0x0004c2; 	X(PUSH(*(dw*)((&unk_4a068))));	// 85525 push    word ptr unk_4A068 ;~ 275C:04C2
cs=0x275c;eip=0x0004c6; 	R(CALL(sub_35ff2,0));	// 85526 call    sub_35FF2 ;~ 275C:04C6
cs=0x275c;eip=0x0004c9; 	R(JC(locret_3609d));	// 85527 jb      short locret_3609D ;~ 275C:04C9
cs=0x275c;eip=0x0004cb; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 85528 mov     ax, word ptr unk_4A064 ;~ 275C:04CB
cs=0x275c;eip=0x0004ce; 	T(ADD(ax, *(dw*)((&unk_4a06a))));	// 85529 add     ax, word ptr unk_4A06A ;~ 275C:04CE
cs=0x275c;eip=0x0004d2; 	T(SAR(ax, 1));	// 85530 sar     ax, 1 ;~ 275C:04D2
cs=0x275c;eip=0x0004d4; 	X(PUSH(ax));	// 85531 push    ax ;~ 275C:04D4
cs=0x275c;eip=0x0004d5; 	T(MOV(ax, *(dw*)((&unk_4a066))));	// 85532 mov     ax, word ptr unk_4A066 ;~ 275C:04D5
cs=0x275c;eip=0x0004d8; 	T(ADD(ax, *(dw*)((&unk_4a06c))));	// 85533 add     ax, word ptr unk_4A06C ;~ 275C:04D8
cs=0x275c;eip=0x0004dc; 	T(SAR(ax, 1));	// 85534 sar     ax, 1 ;~ 275C:04DC
cs=0x275c;eip=0x0004de; 	X(PUSH(ax));	// 85535 push    ax ;~ 275C:04DE
cs=0x275c;eip=0x0004df; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 85536 mov     ax, word ptr unk_4A068 ;~ 275C:04DF
cs=0x275c;eip=0x0004e2; 	T(ADD(ax, *(dw*)((&unk_4a06e))));	// 85537 add     ax, word ptr unk_4A06E ;~ 275C:04E2
cs=0x275c;eip=0x0004e6; 	T(SAR(ax, 1));	// 85538 sar     ax, 1 ;~ 275C:04E6
cs=0x275c;eip=0x0004e8; 	X(PUSH(ax));	// 85539 push    ax ;~ 275C:04E8
cs=0x275c;eip=0x0004e9; 	R(CALL(sub_35ff2,0));	// 85540 call    sub_35FF2 ;~ 275C:04E9
cs=0x275c;eip=0x0004ec; 	R(JC(locret_3609d));	// 85541 jb      short locret_3609D ;~ 275C:04EC
cs=0x275c;eip=0x0004ee; 	X(PUSH(*(dw*)((&unk_4a06a))));	// 85542 push    word ptr unk_4A06A ;~ 275C:04EE
cs=0x275c;eip=0x0004f2; 	X(PUSH(*(dw*)((&unk_4a06c))));	// 85543 push    word ptr unk_4A06C ;~ 275C:04F2
cs=0x275c;eip=0x0004f6; 	X(PUSH(*(dw*)((&unk_4a06e))));	// 85544 push    word ptr unk_4A06E ;~ 275C:04F6
cs=0x275c;eip=0x0004fa; 	R(CALL(sub_35ff2,0));	// 85545 call    sub_35FF2 ;~ 275C:04FA
locret_3609d:
	// 9845 
cs=0x275c;eip=0x0004fd; 	R(RETN(0));	// 85549 retn ;~ 275C:04FD
sub_3609e:
	// 85556 
cs=0x275c;eip=0x0004fe; 	T(MOV(bp, ax));	// 85557 mov     bp, ax ;~ 275C:04FE
cs=0x275c;eip=0x000500; 	T(NEG(bp));	// 85558 neg     bp ;~ 275C:0500
cs=0x275c;eip=0x000502; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 85559 mov     ax, word ptr unk_4A064 ;~ 275C:0502
cs=0x275c;eip=0x000505; 	X(MOV(*(dw*)((&unk_4a081)), ax));	// 85560 mov     word ptr unk_4A081, ax ;~ 275C:0505
cs=0x275c;eip=0x000508; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 85561 mov     ax, word ptr unk_4A068 ;~ 275C:0508
cs=0x275c;eip=0x00050b; 	X(MOV(*(dw*)((&unk_4a083)), ax));	// 85562 mov     word ptr unk_4A083, ax ;~ 275C:050B
cs=0x275c;eip=0x00050e; 	T(MOV(si, 0x26D1));	// 85563 mov     si, 26D1h ;~ 275C:050E
cs=0x275c;eip=0x000511; 	X(PUSH(si));	// 85564 push    si ;~ 275C:0511
cs=0x275c;eip=0x000512; 	T(MOV(di, 0x106));	// 85565 mov     di, 106h ;~ 275C:0512
cs=0x275c;eip=0x000515; 	X(PUSH(di));	// 85566 push    di ;~ 275C:0515
cs=0x275c;eip=0x000516; 	X(PUSH(bp));	// 85567 push    bp ;~ 275C:0516
cs=0x275c;eip=0x000517; 	R(CALLF(sub_27d5d,0));	// 85568 call    sub_27D5D ;~ 275C:0517
cs=0x275c;eip=0x00051c; 	T(MOV(ax, *(dw*)((&unk_4a081))));	// 85569 mov     ax, word ptr unk_4A081 ;~ 275C:051C
cs=0x275c;eip=0x00051f; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 85570 mov     word ptr unk_4A064, ax ;~ 275C:051F
cs=0x275c;eip=0x000522; 	T(MOV(ax, *(dw*)((&unk_4a083))));	// 85571 mov     ax, word ptr unk_4A083 ;~ 275C:0522
cs=0x275c;eip=0x000525; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 85572 mov     word ptr unk_4A068, ax ;~ 275C:0525
cs=0x275c;eip=0x000528; 	T(MOV(ax, *(dw*)((&unk_4a06a))));	// 85573 mov     ax, word ptr unk_4A06A ;~ 275C:0528
cs=0x275c;eip=0x00052b; 	X(MOV(*(dw*)((&unk_4a081)), ax));	// 85574 mov     word ptr unk_4A081, ax ;~ 275C:052B
cs=0x275c;eip=0x00052e; 	T(MOV(ax, *(dw*)((&unk_4a06e))));	// 85575 mov     ax, word ptr unk_4A06E ;~ 275C:052E
cs=0x275c;eip=0x000531; 	X(MOV(*(dw*)((&unk_4a083)), ax));	// 85576 mov     word ptr unk_4A083, ax ;~ 275C:0531
cs=0x275c;eip=0x000534; 	X(PUSH(si));	// 85577 push    si ;~ 275C:0534
cs=0x275c;eip=0x000535; 	X(PUSH(di));	// 85578 push    di ;~ 275C:0535
cs=0x275c;eip=0x000536; 	X(PUSH(bp));	// 85579 push    bp ;~ 275C:0536
cs=0x275c;eip=0x000537; 	R(CALLF(sub_27d5d,0));	// 85580 call    sub_27D5D ;~ 275C:0537
cs=0x275c;eip=0x00053c; 	T(MOV(ax, *(dw*)((&unk_4a081))));	// 85581 mov     ax, word ptr unk_4A081 ;~ 275C:053C
cs=0x275c;eip=0x00053f; 	X(MOV(*(dw*)((&unk_4a06a)), ax));	// 85582 mov     word ptr unk_4A06A, ax ;~ 275C:053F
cs=0x275c;eip=0x000542; 	T(MOV(ax, *(dw*)((&unk_4a083))));	// 85583 mov     ax, word ptr unk_4A083 ;~ 275C:0542
cs=0x275c;eip=0x000545; 	X(MOV(*(dw*)((&unk_4a06e)), ax));	// 85584 mov     word ptr unk_4A06E, ax ;~ 275C:0545
cs=0x275c;eip=0x000548; 	T(NEG(bp));	// 85585 neg     bp ;~ 275C:0548
cs=0x275c;eip=0x00054a; 	T(MOV(ax, bp));	// 85586 mov     ax, bp ;~ 275C:054A
cs=0x275c;eip=0x00054c; 	R(RETN(0));	// 85587 retn ;~ 275C:054C
sub_360ed:
	// 85594 
cs=0x275c;eip=0x00054d; 	X(PUSH(bp));	// 85596 push    bp ;~ 275C:054D
cs=0x275c;eip=0x00054e; 	X(PUSH(si));	// 85597 push    si ;~ 275C:054E
cs=0x275c;eip=0x00054f; 	X(PUSH(di));	// 85598 push    di ;~ 275C:054F
cs=0x275c;eip=0x000550; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 85599 mov     es, word ptr unk_47A9A ;~ 275C:0550
cs=0x275c;eip=0x000554; 	X(MOV(*(dw*)((&unk_4a09a)), bx));	// 85601 mov     word ptr unk_4A09A, bx ;~ 275C:0554
cs=0x275c;eip=0x000558; 	X(MOV(*(dw*)((&unk_4a09c)), es));	// 85602 mov     word ptr unk_4A09C, es ;~ 275C:0558
cs=0x275c;eip=0x00055c; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 85603 mov     ax, es:[bx] ;~ 275C:055C
cs=0x275c;eip=0x00055f; 	X(MOV(*(dw*)((&unk_4a09e)), ax));	// 85604 mov     word ptr unk_4A09E, ax ;~ 275C:055F
cs=0x275c;eip=0x000562; 	R(CALL(sub_35c44,0));	// 85605 call    sub_35C44 ;~ 275C:0562
cs=0x275c;eip=0x000565; 	R(JC(loc_3610b));	// 85606 jb      short loc_3610B ;~ 275C:0565
cs=0x275c;eip=0x000567; 	T(CLC);	// 85607 clc ;~ 275C:0567
cs=0x275c;eip=0x000568; 	R(JMP(loc_36610));	// 85608 jmp     loc_36610 ;~ 275C:0568
loc_3610b:
	// 9846 
cs=0x275c;eip=0x00056b; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 85612 mov     dx, es:[bx+6] ;~ 275C:056B
cs=0x275c;eip=0x00056f; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 85613 mov     ax, es:[bx+8] ;~ 275C:056F
cs=0x275c;eip=0x000573; 	T(MOV(dl, dh));	// 85614 mov     dl, dh ;~ 275C:0573
cs=0x275c;eip=0x000575; 	T(MOV(dh, al));	// 85615 mov     dh, al ;~ 275C:0575
cs=0x275c;eip=0x000577; 	T(MOV(al, ah));	// 85616 mov     al, ah ;~ 275C:0577
cs=0x275c;eip=0x000579; 	T(CBW);	// 85617 cbw ;~ 275C:0579
cs=0x275c;eip=0x00057a; 	X(MOV(*(dw*)((&unk_4a058)), dx));	// 85618 mov     word ptr unk_4A058, dx ;~ 275C:057A
cs=0x275c;eip=0x00057e; 	X(MOV(*(dw*)((&unk_4a05a)), ax));	// 85619 mov     word ptr unk_4A05A, ax ;~ 275C:057E
cs=0x275c;eip=0x000581; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 85620 mov     dx, es:[bx+0Ah] ;~ 275C:0581
cs=0x275c;eip=0x000585; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 85621 mov     ax, es:[bx+0Ch] ;~ 275C:0585
cs=0x275c;eip=0x000589; 	T(MOV(dl, dh));	// 85622 mov     dl, dh ;~ 275C:0589
cs=0x275c;eip=0x00058b; 	T(MOV(dh, al));	// 85623 mov     dh, al ;~ 275C:058B
cs=0x275c;eip=0x00058d; 	T(MOV(al, ah));	// 85624 mov     al, ah ;~ 275C:058D
cs=0x275c;eip=0x00058f; 	T(CBW);	// 85625 cbw ;~ 275C:058F
cs=0x275c;eip=0x000590; 	X(MOV(*(dw*)((&unk_4a05c)), dx));	// 85626 mov     word ptr unk_4A05C, dx ;~ 275C:0590
cs=0x275c;eip=0x000594; 	X(MOV(*(dw*)((&unk_4a05e)), ax));	// 85627 mov     word ptr unk_4A05E, ax ;~ 275C:0594
cs=0x275c;eip=0x000597; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 85628 mov     dx, es:[bx+0Eh] ;~ 275C:0597
cs=0x275c;eip=0x00059b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 85629 mov     ax, es:[bx+10h] ;~ 275C:059B
cs=0x275c;eip=0x00059f; 	T(MOV(dl, dh));	// 85630 mov     dl, dh ;~ 275C:059F
cs=0x275c;eip=0x0005a1; 	T(MOV(dh, al));	// 85631 mov     dh, al ;~ 275C:05A1
cs=0x275c;eip=0x0005a3; 	T(MOV(al, ah));	// 85632 mov     al, ah ;~ 275C:05A3
cs=0x275c;eip=0x0005a5; 	T(CBW);	// 85633 cbw ;~ 275C:05A5
cs=0x275c;eip=0x0005a6; 	X(MOV(*(dw*)((&unk_4a060)), dx));	// 85634 mov     word ptr unk_4A060, dx ;~ 275C:05A6
cs=0x275c;eip=0x0005aa; 	X(MOV(*(dw*)((&unk_4a062)), ax));	// 85635 mov     word ptr unk_4A062, ax ;~ 275C:05AA
cs=0x275c;eip=0x0005ad; 	T(MOV(ax, *(dw*)((&unk_570e6))));	// 85636 mov     ax, word ptr unk_570E6 ;~ 275C:05AD
cs=0x275c;eip=0x0005b0; 	T(MOV(cx, *(dw*)((&unk_570e8))));	// 85637 mov     cx, word ptr unk_570E8 ;~ 275C:05B0
cs=0x275c;eip=0x0005b4; 	T(SUB(ax, *(dw*)((&unk_4a058))));	// 85638 sub     ax, word ptr unk_4A058 ;~ 275C:05B4
cs=0x275c;eip=0x0005b8; 	T(SBB(cx, *(dw*)((&unk_4a05a))));	// 85639 sbb     cx, word ptr unk_4A05A ;~ 275C:05B8
cs=0x275c;eip=0x0005bc; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 85640 mov     word ptr unk_4A064, ax ;~ 275C:05BC
cs=0x275c;eip=0x0005bf; 	T(CWD);	// 85641 cwd ;~ 275C:05BF
cs=0x275c;eip=0x0005c0; 	T(CMP(cx, dx));	// 85642 cmp     cx, dx ;~ 275C:05C0
cs=0x275c;eip=0x0005c2; 	R(JNZ(loc_361d7));	// 85643 jnz     short loc_361D7 ;~ 275C:05C2
cs=0x275c;eip=0x0005c4; 	T(MOV(ax, *(dw*)((&unk_570ea))));	// 85644 mov     ax, word ptr unk_570EA ;~ 275C:05C4
cs=0x275c;eip=0x0005c7; 	T(MOV(cx, *(dw*)((&unk_570ec))));	// 85645 mov     cx, word ptr unk_570EC ;~ 275C:05C7
cs=0x275c;eip=0x0005cb; 	T(SUB(ax, *(dw*)((&unk_4a05c))));	// 85646 sub     ax, word ptr unk_4A05C ;~ 275C:05CB
cs=0x275c;eip=0x0005cf; 	T(SBB(cx, *(dw*)((&unk_4a05e))));	// 85647 sbb     cx, word ptr unk_4A05E ;~ 275C:05CF
cs=0x275c;eip=0x0005d3; 	X(MOV(*(dw*)((&unk_4a066)), ax));	// 85648 mov     word ptr unk_4A066, ax ;~ 275C:05D3
cs=0x275c;eip=0x0005d6; 	T(CWD);	// 85649 cwd ;~ 275C:05D6
cs=0x275c;eip=0x0005d7; 	T(CMP(cx, dx));	// 85650 cmp     cx, dx ;~ 275C:05D7
cs=0x275c;eip=0x0005d9; 	R(JNZ(loc_361d7));	// 85651 jnz     short loc_361D7 ;~ 275C:05D9
cs=0x275c;eip=0x0005db; 	T(MOV(ax, *(dw*)((&unk_570ee))));	// 85652 mov     ax, word ptr unk_570EE ;~ 275C:05DB
cs=0x275c;eip=0x0005de; 	T(MOV(cx, *(dw*)((&unk_570f0))));	// 85653 mov     cx, word ptr unk_570F0 ;~ 275C:05DE
cs=0x275c;eip=0x0005e2; 	T(SUB(ax, *(dw*)((&unk_4a060))));	// 85654 sub     ax, word ptr unk_4A060 ;~ 275C:05E2
cs=0x275c;eip=0x0005e6; 	T(SBB(cx, *(dw*)((&unk_4a062))));	// 85655 sbb     cx, word ptr unk_4A062 ;~ 275C:05E6
cs=0x275c;eip=0x0005ea; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 85656 mov     word ptr unk_4A068, ax ;~ 275C:05EA
cs=0x275c;eip=0x0005ed; 	T(CWD);	// 85657 cwd ;~ 275C:05ED
cs=0x275c;eip=0x0005ee; 	T(CMP(cx, dx));	// 85658 cmp     cx, dx ;~ 275C:05EE
cs=0x275c;eip=0x0005f0; 	R(JNZ(loc_361d7));	// 85659 jnz     short loc_361D7 ;~ 275C:05F0
cs=0x275c;eip=0x0005f2; 	T(MOV(ax, *(dw*)((&unk_570f2))));	// 85660 mov     ax, word ptr unk_570F2 ;~ 275C:05F2
cs=0x275c;eip=0x0005f5; 	T(MOV(cx, *(dw*)((&unk_570f4))));	// 85661 mov     cx, word ptr unk_570F4 ;~ 275C:05F5
cs=0x275c;eip=0x0005f9; 	T(SUB(ax, *(dw*)((&unk_4a058))));	// 85662 sub     ax, word ptr unk_4A058 ;~ 275C:05F9
cs=0x275c;eip=0x0005fd; 	T(SBB(cx, *(dw*)((&unk_4a05a))));	// 85663 sbb     cx, word ptr unk_4A05A ;~ 275C:05FD
cs=0x275c;eip=0x000601; 	X(MOV(*(dw*)((&unk_4a06a)), ax));	// 85664 mov     word ptr unk_4A06A, ax ;~ 275C:0601
cs=0x275c;eip=0x000604; 	T(CWD);	// 85665 cwd ;~ 275C:0604
cs=0x275c;eip=0x000605; 	T(CMP(cx, dx));	// 85666 cmp     cx, dx ;~ 275C:0605
cs=0x275c;eip=0x000607; 	R(JNZ(loc_361d7));	// 85667 jnz     short loc_361D7 ;~ 275C:0607
cs=0x275c;eip=0x000609; 	T(MOV(ax, *(dw*)((&unk_570f6))));	// 85668 mov     ax, word ptr unk_570F6 ;~ 275C:0609
cs=0x275c;eip=0x00060c; 	T(MOV(cx, *(dw*)((&unk_570f8))));	// 85669 mov     cx, word ptr unk_570F8 ;~ 275C:060C
cs=0x275c;eip=0x000610; 	T(SUB(ax, *(dw*)((&unk_4a05c))));	// 85670 sub     ax, word ptr unk_4A05C ;~ 275C:0610
cs=0x275c;eip=0x000614; 	T(SBB(cx, *(dw*)((&unk_4a05e))));	// 85671 sbb     cx, word ptr unk_4A05E ;~ 275C:0614
cs=0x275c;eip=0x000618; 	X(MOV(*(dw*)((&unk_4a06c)), ax));	// 85672 mov     word ptr unk_4A06C, ax ;~ 275C:0618
cs=0x275c;eip=0x00061b; 	T(CWD);	// 85673 cwd ;~ 275C:061B
cs=0x275c;eip=0x00061c; 	T(CMP(cx, dx));	// 85674 cmp     cx, dx ;~ 275C:061C
cs=0x275c;eip=0x00061e; 	R(JNZ(loc_361d7));	// 85675 jnz     short loc_361D7 ;~ 275C:061E
cs=0x275c;eip=0x000620; 	T(MOV(ax, *(dw*)((&unk_570fa))));	// 85676 mov     ax, word ptr unk_570FA ;~ 275C:0620
cs=0x275c;eip=0x000623; 	T(MOV(cx, *(dw*)((&unk_570fc))));	// 85677 mov     cx, word ptr unk_570FC ;~ 275C:0623
cs=0x275c;eip=0x000627; 	T(SUB(ax, *(dw*)((&unk_4a060))));	// 85678 sub     ax, word ptr unk_4A060 ;~ 275C:0627
cs=0x275c;eip=0x00062b; 	T(SBB(cx, *(dw*)((&unk_4a062))));	// 85679 sbb     cx, word ptr unk_4A062 ;~ 275C:062B
cs=0x275c;eip=0x00062f; 	X(MOV(*(dw*)((&unk_4a06e)), ax));	// 85680 mov     word ptr unk_4A06E, ax ;~ 275C:062F
cs=0x275c;eip=0x000632; 	T(CWD);	// 85681 cwd ;~ 275C:0632
cs=0x275c;eip=0x000633; 	T(CMP(cx, dx));	// 85682 cmp     cx, dx ;~ 275C:0633
cs=0x275c;eip=0x000635; 	R(JZ(loc_361db));	// 85683 jz      short loc_361DB ;~ 275C:0635
loc_361d7:
	// 9847 
cs=0x275c;eip=0x000637; 	T(CLC);	// 85687 clc ;~ 275C:0637
cs=0x275c;eip=0x000638; 	R(JMP(loc_36610));	// 85688 jmp     loc_36610 ;~ 275C:0638
loc_361db:
	// 9848 
cs=0x275c;eip=0x00063b; 	T(XOR(ax, ax));	// 85692 xor     ax, ax ;~ 275C:063B
cs=0x275c;eip=0x00063d; 	T(TEST(*(dw*)(raddr(es,bx+2)), 2));	// 85693 test    word ptr es:[bx+2], 2 ;~ 275C:063D
cs=0x275c;eip=0x000643; 	R(JZ(loc_361e8));	// 85694 jz      short loc_361E8 ;~ 275C:0643
cs=0x275c;eip=0x000645; 	R(JMP(loc_36280));	// 85695 jmp     loc_36280 ;~ 275C:0645
loc_361e8:
	// 9849 
cs=0x275c;eip=0x000648; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 85699 mov     ax, es:[bx+12h] ;~ 275C:0648
cs=0x275c;eip=0x00064c; 	T(OR(ax, ax));	// 85700 or      ax, ax ;~ 275C:064C
cs=0x275c;eip=0x00064e; 	R(JNZ(loc_361f3));	// 85701 jnz     short loc_361F3 ;~ 275C:064E
cs=0x275c;eip=0x000650; 	R(JMP(loc_36280));	// 85702 jmp     loc_36280 ;~ 275C:0650
loc_361f3:
	// 9850 
cs=0x275c;eip=0x000653; 	T(CMP(ax, 0x2D0));	// 85706 cmp     ax, 2D0h ;~ 275C:0653
cs=0x275c;eip=0x000656; 	R(JNZ(loc_3621d));	// 85707 jnz     short loc_3621D ;~ 275C:0656
cs=0x275c;eip=0x000658; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 85708 mov     ax, word ptr unk_4A064 ;~ 275C:0658
cs=0x275c;eip=0x00065b; 	T(MOV(dx, *(dw*)((&unk_4a068))));	// 85709 mov     dx, word ptr unk_4A068 ;~ 275C:065B
cs=0x275c;eip=0x00065f; 	X(MOV(*(dw*)((&unk_4a064)), dx));	// 85710 mov     word ptr unk_4A064, dx ;~ 275C:065F
cs=0x275c;eip=0x000663; 	T(NEG(ax));	// 85711 neg     ax ;~ 275C:0663
cs=0x275c;eip=0x000665; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 85712 mov     word ptr unk_4A068, ax ;~ 275C:0665
cs=0x275c;eip=0x000668; 	T(MOV(ax, *(dw*)((&unk_4a06a))));	// 85713 mov     ax, word ptr unk_4A06A ;~ 275C:0668
cs=0x275c;eip=0x00066b; 	T(MOV(dx, *(dw*)((&unk_4a06e))));	// 85714 mov     dx, word ptr unk_4A06E ;~ 275C:066B
cs=0x275c;eip=0x00066f; 	X(MOV(*(dw*)((&unk_4a06a)), dx));	// 85715 mov     word ptr unk_4A06A, dx ;~ 275C:066F
cs=0x275c;eip=0x000673; 	T(NEG(ax));	// 85716 neg     ax ;~ 275C:0673
cs=0x275c;eip=0x000675; 	X(MOV(*(dw*)((&unk_4a06e)), ax));	// 85717 mov     word ptr unk_4A06E, ax ;~ 275C:0675
cs=0x275c;eip=0x000678; 	T(MOV(ax, 0x2D0));	// 85718 mov     ax, 2D0h ;~ 275C:0678
cs=0x275c;eip=0x00067b; 	R(JMP(loc_36280));	// 85719 jmp     short loc_36280 ;~ 275C:067B
loc_3621d:
	// 9851 
cs=0x275c;eip=0x00067d; 	T(CMP(ax, 0x5A0));	// 85723 cmp     ax, 5A0h ;~ 275C:067D
cs=0x275c;eip=0x000680; 	R(JNZ(loc_36237));	// 85724 jnz     short loc_36237 ;~ 275C:0680
cs=0x275c;eip=0x000682; 	X(NEG(*(dw*)((&unk_4a064))));	// 85725 neg     word ptr unk_4A064 ;~ 275C:0682
cs=0x275c;eip=0x000686; 	X(NEG(*(dw*)((&unk_4a068))));	// 85726 neg     word ptr unk_4A068 ;~ 275C:0686
cs=0x275c;eip=0x00068a; 	X(NEG(*(dw*)((&unk_4a06a))));	// 85727 neg     word ptr unk_4A06A ;~ 275C:068A
cs=0x275c;eip=0x00068e; 	X(NEG(*(dw*)((&unk_4a06e))));	// 85728 neg     word ptr unk_4A06E ;~ 275C:068E
cs=0x275c;eip=0x000692; 	T(MOV(ax, 0x5A0));	// 85729 mov     ax, 5A0h ;~ 275C:0692
cs=0x275c;eip=0x000695; 	R(JMP(loc_36280));	// 85730 jmp     short loc_36280 ;~ 275C:0695
loc_36237:
	// 9852 
cs=0x275c;eip=0x000697; 	T(CMP(ax, 0x870));	// 85734 cmp     ax, 870h ;~ 275C:0697
cs=0x275c;eip=0x00069a; 	R(JNZ(loc_3625f));	// 85735 jnz     short loc_3625F ;~ 275C:069A
cs=0x275c;eip=0x00069c; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 85736 mov     ax, word ptr unk_4A064 ;~ 275C:069C
cs=0x275c;eip=0x00069f; 	T(MOV(dx, *(dw*)((&unk_4a068))));	// 85737 mov     dx, word ptr unk_4A068 ;~ 275C:069F
cs=0x275c;eip=0x0006a3; 	T(NEG(dx));	// 85738 neg     dx ;~ 275C:06A3
cs=0x275c;eip=0x0006a5; 	X(MOV(*(dw*)((&unk_4a064)), dx));	// 85739 mov     word ptr unk_4A064, dx ;~ 275C:06A5
cs=0x275c;eip=0x0006a9; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 85740 mov     word ptr unk_4A068, ax ;~ 275C:06A9
cs=0x275c;eip=0x0006ac; 	T(MOV(ax, *(dw*)((&unk_4a06a))));	// 85741 mov     ax, word ptr unk_4A06A ;~ 275C:06AC
cs=0x275c;eip=0x0006af; 	T(MOV(dx, *(dw*)((&unk_4a06e))));	// 85742 mov     dx, word ptr unk_4A06E ;~ 275C:06AF
cs=0x275c;eip=0x0006b3; 	T(NEG(dx));	// 85743 neg     dx ;~ 275C:06B3
cs=0x275c;eip=0x0006b5; 	X(MOV(*(dw*)((&unk_4a06a)), dx));	// 85744 mov     word ptr unk_4A06A, dx ;~ 275C:06B5
cs=0x275c;eip=0x0006b9; 	X(MOV(*(dw*)((&unk_4a06e)), ax));	// 85745 mov     word ptr unk_4A06E, ax ;~ 275C:06B9
cs=0x275c;eip=0x0006bc; 	T(MOV(ax, 0x870));	// 85746 mov     ax, 870h ;~ 275C:06BC
loc_3625f:
	// 9853 
cs=0x275c;eip=0x0006bf; 	X(MOV(unk_4a085, 0));	// 85749 mov     byte ptr unk_4A085, 0 ;~ 275C:06BF
cs=0x275c;eip=0x0006c4; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x800));	// 85750 test    word ptr es:[bx+2], 800h ;~ 275C:06C4
cs=0x275c;eip=0x0006ca; 	R(JZ(loc_36280));	// 85751 jz      short loc_36280 ;~ 275C:06CA
cs=0x275c;eip=0x0006cc; 	T(ADD(bx, 0x18));	// 85752 add     bx, 18h ;~ 275C:06CC
cs=0x275c;eip=0x0006cf; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 85753 mov     bx, es:[bx] ;~ 275C:06CF
cs=0x275c;eip=0x0006d2; 	T(TEST(*(raddr(ds,bx+0x16)), 0x20));	// 85754 test    byte ptr [bx+16h], 20h ;~ 275C:06D2
cs=0x275c;eip=0x0006d6; 	R(JZ(loc_36280));	// 85755 jz      short loc_36280 ;~ 275C:06D6
cs=0x275c;eip=0x0006d8; 	X(MOV(unk_4a085, 1));	// 85756 mov     byte ptr unk_4A085, 1 ;~ 275C:06D8
cs=0x275c;eip=0x0006dd; 	R(CALL(sub_3609e,0));	// 85757 call    sub_3609E ;~ 275C:06DD
loc_36280:
	// 9854 
cs=0x275c;eip=0x0006e0; 	X(MOV(*(dw*)((&unk_4a07f)), ax));	// 85761 mov     word ptr unk_4A07F, ax ;~ 275C:06E0
cs=0x275c;eip=0x0006e3; 	T(MOV(bp, *(dw*)((&unk_4a09e))));	// 85762 mov     bp, word ptr unk_4A09E ;~ 275C:06E3
cs=0x275c;eip=0x0006e7; 	T(MOV(bx, *(dw*)((&unk_570c6))));	// 85763 mov     bx, word ptr unk_570C6 ;~ 275C:06E7
cs=0x275c;eip=0x0006eb; 	T(MOV(cx, *(dw*)((&unk_570c8))));	// 85764 mov     cx, word ptr unk_570C8 ;~ 275C:06EB
cs=0x275c;eip=0x0006ef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x2C))));	// 85765 mov     ax, [bp+2Ch] ;~ 275C:06EF
cs=0x275c;eip=0x0006f2; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x2E))));	// 85766 mov     dx, [bp+2Eh] ;~ 275C:06F2
cs=0x275c;eip=0x0006f5; 	T(SUB(ax, bx));	// 85767 sub     ax, bx ;~ 275C:06F5
cs=0x275c;eip=0x0006f7; 	T(SBB(dx, cx));	// 85768 sbb     dx, cx ;~ 275C:06F7
cs=0x275c;eip=0x0006f9; 	T(MOV(al, ah));	// 85769 mov     al, ah ;~ 275C:06F9
cs=0x275c;eip=0x0006fb; 	T(MOV(ah, dl));	// 85770 mov     ah, dl ;~ 275C:06FB
cs=0x275c;eip=0x0006fd; 	X(MOV(*(dw*)((&unk_4a070)), ax));	// 85771 mov     word ptr unk_4A070, ax ;~ 275C:06FD
cs=0x275c;eip=0x000700; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x30))));	// 85772 mov     ax, [bp+30h] ;~ 275C:0700
cs=0x275c;eip=0x000703; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x32))));	// 85773 mov     dx, [bp+32h] ;~ 275C:0703
cs=0x275c;eip=0x000706; 	T(ADD(ax, bx));	// 85774 add     ax, bx ;~ 275C:0706
cs=0x275c;eip=0x000708; 	T(ADC(dx, cx));	// 85775 adc     dx, cx ;~ 275C:0708
cs=0x275c;eip=0x00070a; 	T(MOV(al, ah));	// 85776 mov     al, ah ;~ 275C:070A
cs=0x275c;eip=0x00070c; 	T(MOV(ah, dl));	// 85777 mov     ah, dl ;~ 275C:070C
cs=0x275c;eip=0x00070e; 	X(MOV(*(dw*)((&unk_4a072)), ax));	// 85778 mov     word ptr unk_4A072, ax ;~ 275C:070E
cs=0x275c;eip=0x000711; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x34))));	// 85779 mov     ax, [bp+34h] ;~ 275C:0711
cs=0x275c;eip=0x000714; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x36))));	// 85780 mov     dx, [bp+36h] ;~ 275C:0714
cs=0x275c;eip=0x000717; 	T(SUB(ax, bx));	// 85781 sub     ax, bx ;~ 275C:0717
cs=0x275c;eip=0x000719; 	T(SBB(dx, cx));	// 85782 sbb     dx, cx ;~ 275C:0719
cs=0x275c;eip=0x00071b; 	T(MOV(al, ah));	// 85783 mov     al, ah ;~ 275C:071B
cs=0x275c;eip=0x00071d; 	T(MOV(ah, dl));	// 85784 mov     ah, dl ;~ 275C:071D
cs=0x275c;eip=0x00071f; 	X(MOV(*(dw*)((&unk_4a074)), ax));	// 85785 mov     word ptr unk_4A074, ax ;~ 275C:071F
cs=0x275c;eip=0x000722; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x38))));	// 85786 mov     ax, [bp+38h] ;~ 275C:0722
cs=0x275c;eip=0x000725; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x3A))));	// 85787 mov     dx, [bp+3Ah] ;~ 275C:0725
cs=0x275c;eip=0x000728; 	T(ADD(ax, bx));	// 85788 add     ax, bx ;~ 275C:0728
cs=0x275c;eip=0x00072a; 	T(ADC(dx, cx));	// 85789 adc     dx, cx ;~ 275C:072A
cs=0x275c;eip=0x00072c; 	T(MOV(al, ah));	// 85790 mov     al, ah ;~ 275C:072C
cs=0x275c;eip=0x00072e; 	T(MOV(ah, dl));	// 85791 mov     ah, dl ;~ 275C:072E
cs=0x275c;eip=0x000730; 	X(MOV(*(dw*)((&unk_4a076)), ax));	// 85792 mov     word ptr unk_4A076, ax ;~ 275C:0730
cs=0x275c;eip=0x000733; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x3C))));	// 85793 mov     ax, [bp+3Ch] ;~ 275C:0733
cs=0x275c;eip=0x000736; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x3E))));	// 85794 mov     dx, [bp+3Eh] ;~ 275C:0736
cs=0x275c;eip=0x000739; 	T(SUB(ax, bx));	// 85795 sub     ax, bx ;~ 275C:0739
cs=0x275c;eip=0x00073b; 	T(SBB(dx, cx));	// 85796 sbb     dx, cx ;~ 275C:073B
cs=0x275c;eip=0x00073d; 	T(MOV(al, ah));	// 85797 mov     al, ah ;~ 275C:073D
cs=0x275c;eip=0x00073f; 	T(MOV(ah, dl));	// 85798 mov     ah, dl ;~ 275C:073F
cs=0x275c;eip=0x000741; 	X(MOV(*(dw*)((&unk_4a078)), ax));	// 85799 mov     word ptr unk_4A078, ax ;~ 275C:0741
cs=0x275c;eip=0x000744; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x40))));	// 85800 mov     ax, [bp+40h] ;~ 275C:0744
cs=0x275c;eip=0x000747; 	T(MOV(dx, *(dw*)(raddr(ss,bp+0x42))));	// 85801 mov     dx, [bp+42h] ;~ 275C:0747
cs=0x275c;eip=0x00074a; 	T(ADD(ax, bx));	// 85802 add     ax, bx ;~ 275C:074A
cs=0x275c;eip=0x00074c; 	T(ADC(dx, cx));	// 85803 adc     dx, cx ;~ 275C:074C
cs=0x275c;eip=0x00074e; 	T(MOV(al, ah));	// 85804 mov     al, ah ;~ 275C:074E
cs=0x275c;eip=0x000750; 	T(MOV(ah, dl));	// 85805 mov     ah, dl ;~ 275C:0750
cs=0x275c;eip=0x000752; 	X(MOV(*(dw*)((&unk_4a07a)), ax));	// 85806 mov     word ptr unk_4A07A, ax ;~ 275C:0752
cs=0x275c;eip=0x000755; 	R(CALL(sub_35f66,0));	// 85807 call    sub_35F66 ;~ 275C:0755
cs=0x275c;eip=0x000758; 	R(CALL(sub_35fac,0));	// 85808 call    sub_35FAC ;~ 275C:0758
cs=0x275c;eip=0x00075b; 	X(MOV(unk_4a07e, 0x0F));	// 85809 mov     byte ptr unk_4A07E, 0Fh ;~ 275C:075B
loc_36300:
	// 9855 
cs=0x275c;eip=0x000760; 	T(MOV(al, unk_4a07c));	// 85813 mov     al, byte ptr unk_4A07C ;~ 275C:0760
cs=0x275c;eip=0x000763; 	T(OR(al, unk_4a07d));	// 85814 or      al, byte ptr unk_4A07D ;~ 275C:0763
cs=0x275c;eip=0x000767; 	R(JNZ(loc_3630c));	// 85815 jnz     short loc_3630C ;~ 275C:0767
cs=0x275c;eip=0x000769; 	R(JMP(loc_36536));	// 85816 jmp     loc_36536 ;~ 275C:0769
loc_3630c:
	// 9856 
cs=0x275c;eip=0x00076c; 	X(DEC(unk_4a07e));	// 85820 dec     byte ptr unk_4A07E ;~ 275C:076C
cs=0x275c;eip=0x000770; 	R(JNZ(loc_36315));	// 85821 jnz     short loc_36315 ;~ 275C:0770
cs=0x275c;eip=0x000772; 	R(JMP(loc_36536));	// 85822 jmp     loc_36536 ;~ 275C:0772
loc_36315:
	// 9857 
cs=0x275c;eip=0x000775; 	T(MOV(al, unk_4a07c));	// 85826 mov     al, byte ptr unk_4A07C ;~ 275C:0775
cs=0x275c;eip=0x000778; 	T(AND(al, unk_4a07d));	// 85827 and     al, byte ptr unk_4A07D ;~ 275C:0778
cs=0x275c;eip=0x00077c; 	R(JZ(loc_36322));	// 85828 jz      short loc_36322 ;~ 275C:077C
cs=0x275c;eip=0x00077e; 	T(CLC);	// 85829 clc ;~ 275C:077E
cs=0x275c;eip=0x00077f; 	R(JMP(loc_36610));	// 85830 jmp     loc_36610 ;~ 275C:077F
loc_36322:
	// 9858 
cs=0x275c;eip=0x000782; 	T(MOV(si, *(dw*)((&unk_4a06a))));	// 85834 mov     si, word ptr unk_4A06A ;~ 275C:0782
cs=0x275c;eip=0x000786; 	T(SUB(si, *(dw*)((&unk_4a064))));	// 85835 sub     si, word ptr unk_4A064 ;~ 275C:0786
cs=0x275c;eip=0x00078a; 	T(MOV(di, *(dw*)((&unk_4a06c))));	// 85836 mov     di, word ptr unk_4A06C ;~ 275C:078A
cs=0x275c;eip=0x00078e; 	T(SUB(di, *(dw*)((&unk_4a066))));	// 85837 sub     di, word ptr unk_4A066 ;~ 275C:078E
cs=0x275c;eip=0x000792; 	T(MOV(bp, *(dw*)((&unk_4a06e))));	// 85838 mov     bp, word ptr unk_4A06E ;~ 275C:0792
cs=0x275c;eip=0x000796; 	T(SUB(bp, *(dw*)((&unk_4a068))));	// 85839 sub     bp, word ptr unk_4A068 ;~ 275C:0796
cs=0x275c;eip=0x00079a; 	T(CMP(unk_4a07c, 0));	// 85840 cmp     byte ptr unk_4A07C, 0 ;~ 275C:079A
cs=0x275c;eip=0x00079f; 	R(JNZ(loc_36344));	// 85841 jnz     short loc_36344 ;~ 275C:079F
cs=0x275c;eip=0x0007a1; 	R(JMP(loc_3643d));	// 85842 jmp     loc_3643D ;~ 275C:07A1
loc_36344:
	// 9859 
cs=0x275c;eip=0x0007a4; 	T(MOV(al, unk_4a07c));	// 85846 mov     al, byte ptr unk_4A07C ;~ 275C:07A4
cs=0x275c;eip=0x0007a7; 	T(TEST(al, 4));	// 85847 test    al, 4 ;~ 275C:07A7
cs=0x275c;eip=0x0007a9; 	R(JZ(loc_3636f));	// 85848 jz      short loc_3636F ;~ 275C:07A9
cs=0x275c;eip=0x0007ab; 	T(MOV(ax, *(dw*)((&unk_4a070))));	// 85849 mov     ax, word ptr unk_4A070 ;~ 275C:07AB
cs=0x275c;eip=0x0007ae; 	T(MOV(cx, ax));	// 85850 mov     cx, ax ;~ 275C:07AE
cs=0x275c;eip=0x0007b0; 	T(SUB(ax, *(dw*)((&unk_4a064))));	// 85851 sub     ax, word ptr unk_4A064 ;~ 275C:07B0
cs=0x275c;eip=0x0007b4; 	T(MOV(bx, ax));	// 85852 mov     bx, ax ;~ 275C:07B4
cs=0x275c;eip=0x0007b6; 	T(IMUL1_2(di));	// 85853 imul    di ;~ 275C:07B6
cs=0x275c;eip=0x0007b8; 	T(IDIV2(si));	// 85854 idiv    si ;~ 275C:07B8
cs=0x275c;eip=0x0007ba; 	X(ADD(*(dw*)((&unk_4a066)), ax));	// 85855 add     word ptr unk_4A066, ax ;~ 275C:07BA
cs=0x275c;eip=0x0007be; 	T(MOV(ax, bx));	// 85856 mov     ax, bx ;~ 275C:07BE
cs=0x275c;eip=0x0007c0; 	T(IMUL1_2(bp));	// 85857 imul    bp ;~ 275C:07C0
cs=0x275c;eip=0x0007c2; 	T(IDIV2(si));	// 85858 idiv    si ;~ 275C:07C2
cs=0x275c;eip=0x0007c4; 	X(ADD(*(dw*)((&unk_4a068)), ax));	// 85859 add     word ptr unk_4A068, ax ;~ 275C:07C4
cs=0x275c;eip=0x0007c8; 	X(MOV(*(dw*)((&unk_4a064)), cx));	// 85860 mov     word ptr unk_4A064, cx ;~ 275C:07C8
cs=0x275c;eip=0x0007cc; 	R(JMP(loc_36437));	// 85861 jmp     loc_36437 ;~ 275C:07CC
loc_3636f:
	// 9860 
cs=0x275c;eip=0x0007cf; 	T(TEST(al, 8));	// 85865 test    al, 8 ;~ 275C:07CF
cs=0x275c;eip=0x0007d1; 	R(JZ(loc_36397));	// 85866 jz      short loc_36397 ;~ 275C:07D1
cs=0x275c;eip=0x0007d3; 	T(MOV(ax, *(dw*)((&unk_4a072))));	// 85867 mov     ax, word ptr unk_4A072 ;~ 275C:07D3
cs=0x275c;eip=0x0007d6; 	T(MOV(cx, ax));	// 85868 mov     cx, ax ;~ 275C:07D6
cs=0x275c;eip=0x0007d8; 	T(SUB(ax, *(dw*)((&unk_4a064))));	// 85869 sub     ax, word ptr unk_4A064 ;~ 275C:07D8
cs=0x275c;eip=0x0007dc; 	T(MOV(bx, ax));	// 85870 mov     bx, ax ;~ 275C:07DC
cs=0x275c;eip=0x0007de; 	T(IMUL1_2(di));	// 85871 imul    di ;~ 275C:07DE
cs=0x275c;eip=0x0007e0; 	T(IDIV2(si));	// 85872 idiv    si ;~ 275C:07E0
cs=0x275c;eip=0x0007e2; 	X(ADD(*(dw*)((&unk_4a066)), ax));	// 85873 add     word ptr unk_4A066, ax ;~ 275C:07E2
cs=0x275c;eip=0x0007e6; 	T(MOV(ax, bx));	// 85874 mov     ax, bx ;~ 275C:07E6
cs=0x275c;eip=0x0007e8; 	T(IMUL1_2(bp));	// 85875 imul    bp ;~ 275C:07E8
cs=0x275c;eip=0x0007ea; 	T(IDIV2(si));	// 85876 idiv    si ;~ 275C:07EA
cs=0x275c;eip=0x0007ec; 	X(ADD(*(dw*)((&unk_4a068)), ax));	// 85877 add     word ptr unk_4A068, ax ;~ 275C:07EC
cs=0x275c;eip=0x0007f0; 	X(MOV(*(dw*)((&unk_4a064)), cx));	// 85878 mov     word ptr unk_4A064, cx ;~ 275C:07F0
cs=0x275c;eip=0x0007f4; 	R(JMP(loc_36437));	// 85879 jmp     loc_36437 ;~ 275C:07F4
loc_36397:
	// 9861 
cs=0x275c;eip=0x0007f7; 	T(TEST(al, 1));	// 85883 test    al, 1 ;~ 275C:07F7
cs=0x275c;eip=0x0007f9; 	R(JZ(loc_363bf));	// 85884 jz      short loc_363BF ;~ 275C:07F9
cs=0x275c;eip=0x0007fb; 	T(MOV(ax, *(dw*)((&unk_4a076))));	// 85885 mov     ax, word ptr unk_4A076 ;~ 275C:07FB
cs=0x275c;eip=0x0007fe; 	T(MOV(cx, ax));	// 85886 mov     cx, ax ;~ 275C:07FE
cs=0x275c;eip=0x000800; 	T(SUB(ax, *(dw*)((&unk_4a066))));	// 85887 sub     ax, word ptr unk_4A066 ;~ 275C:0800
cs=0x275c;eip=0x000804; 	T(MOV(bx, ax));	// 85888 mov     bx, ax ;~ 275C:0804
cs=0x275c;eip=0x000806; 	T(IMUL1_2(si));	// 85889 imul    si ;~ 275C:0806
cs=0x275c;eip=0x000808; 	T(IDIV2(di));	// 85890 idiv    di ;~ 275C:0808
cs=0x275c;eip=0x00080a; 	X(ADD(*(dw*)((&unk_4a064)), ax));	// 85891 add     word ptr unk_4A064, ax ;~ 275C:080A
cs=0x275c;eip=0x00080e; 	T(MOV(ax, bx));	// 85892 mov     ax, bx ;~ 275C:080E
cs=0x275c;eip=0x000810; 	T(IMUL1_2(bp));	// 85893 imul    bp ;~ 275C:0810
cs=0x275c;eip=0x000812; 	T(IDIV2(di));	// 85894 idiv    di ;~ 275C:0812
cs=0x275c;eip=0x000814; 	X(ADD(*(dw*)((&unk_4a068)), ax));	// 85895 add     word ptr unk_4A068, ax ;~ 275C:0814
cs=0x275c;eip=0x000818; 	X(MOV(*(dw*)((&unk_4a066)), cx));	// 85896 mov     word ptr unk_4A066, cx ;~ 275C:0818
cs=0x275c;eip=0x00081c; 	R(JMP(loc_36437));	// 85897 jmp     short loc_36437 ;~ 275C:081C
loc_363bf:
	// 9862 
cs=0x275c;eip=0x00081f; 	T(TEST(al, 2));	// 85903 test    al, 2 ;~ 275C:081F
cs=0x275c;eip=0x000821; 	R(JZ(loc_363e7));	// 85904 jz      short loc_363E7 ;~ 275C:0821
cs=0x275c;eip=0x000823; 	T(MOV(ax, *(dw*)((&unk_4a074))));	// 85905 mov     ax, word ptr unk_4A074 ;~ 275C:0823
cs=0x275c;eip=0x000826; 	T(MOV(cx, ax));	// 85906 mov     cx, ax ;~ 275C:0826
cs=0x275c;eip=0x000828; 	T(SUB(ax, *(dw*)((&unk_4a066))));	// 85907 sub     ax, word ptr unk_4A066 ;~ 275C:0828
cs=0x275c;eip=0x00082c; 	T(MOV(bx, ax));	// 85908 mov     bx, ax ;~ 275C:082C
cs=0x275c;eip=0x00082e; 	T(IMUL1_2(si));	// 85909 imul    si ;~ 275C:082E
cs=0x275c;eip=0x000830; 	T(IDIV2(di));	// 85910 idiv    di ;~ 275C:0830
cs=0x275c;eip=0x000832; 	X(ADD(*(dw*)((&unk_4a064)), ax));	// 85911 add     word ptr unk_4A064, ax ;~ 275C:0832
cs=0x275c;eip=0x000836; 	T(MOV(ax, bx));	// 85912 mov     ax, bx ;~ 275C:0836
cs=0x275c;eip=0x000838; 	T(IMUL1_2(bp));	// 85913 imul    bp ;~ 275C:0838
cs=0x275c;eip=0x00083a; 	T(IDIV2(di));	// 85914 idiv    di ;~ 275C:083A
cs=0x275c;eip=0x00083c; 	X(ADD(*(dw*)((&unk_4a068)), ax));	// 85915 add     word ptr unk_4A068, ax ;~ 275C:083C
cs=0x275c;eip=0x000840; 	X(MOV(*(dw*)((&unk_4a066)), cx));	// 85916 mov     word ptr unk_4A066, cx ;~ 275C:0840
cs=0x275c;eip=0x000844; 	R(JMP(loc_36437));	// 85917 jmp     short loc_36437 ;~ 275C:0844
loc_363e7:
	// 9863 
cs=0x275c;eip=0x000847; 	T(TEST(al, 0x10));	// 85923 test    al, 10h ;~ 275C:0847
cs=0x275c;eip=0x000849; 	R(JZ(loc_3640f));	// 85924 jz      short loc_3640F ;~ 275C:0849
cs=0x275c;eip=0x00084b; 	T(MOV(ax, *(dw*)((&unk_4a078))));	// 85925 mov     ax, word ptr unk_4A078 ;~ 275C:084B
cs=0x275c;eip=0x00084e; 	T(MOV(cx, ax));	// 85926 mov     cx, ax ;~ 275C:084E
cs=0x275c;eip=0x000850; 	T(SUB(ax, *(dw*)((&unk_4a068))));	// 85927 sub     ax, word ptr unk_4A068 ;~ 275C:0850
cs=0x275c;eip=0x000854; 	T(MOV(bx, ax));	// 85928 mov     bx, ax ;~ 275C:0854
cs=0x275c;eip=0x000856; 	T(IMUL1_2(si));	// 85929 imul    si ;~ 275C:0856
cs=0x275c;eip=0x000858; 	T(IDIV2(bp));	// 85930 idiv    bp ;~ 275C:0858
cs=0x275c;eip=0x00085a; 	X(ADD(*(dw*)((&unk_4a064)), ax));	// 85931 add     word ptr unk_4A064, ax ;~ 275C:085A
cs=0x275c;eip=0x00085e; 	T(MOV(ax, bx));	// 85932 mov     ax, bx ;~ 275C:085E
cs=0x275c;eip=0x000860; 	T(IMUL1_2(di));	// 85933 imul    di ;~ 275C:0860
cs=0x275c;eip=0x000862; 	T(IDIV2(bp));	// 85934 idiv    bp ;~ 275C:0862
cs=0x275c;eip=0x000864; 	X(ADD(*(dw*)((&unk_4a066)), ax));	// 85935 add     word ptr unk_4A066, ax ;~ 275C:0864
cs=0x275c;eip=0x000868; 	X(MOV(*(dw*)((&unk_4a068)), cx));	// 85936 mov     word ptr unk_4A068, cx ;~ 275C:0868
cs=0x275c;eip=0x00086c; 	R(JMP(loc_36437));	// 85937 jmp     short loc_36437 ;~ 275C:086C
loc_3640f:
	// 9864 
cs=0x275c;eip=0x00086f; 	T(TEST(al, 0x20));	// 85943 test    al, 20h ;~ 275C:086F
cs=0x275c;eip=0x000871; 	R(JZ(loc_36437));	// 85944 jz      short loc_36437 ;~ 275C:0871
cs=0x275c;eip=0x000873; 	T(MOV(ax, *(dw*)((&unk_4a07a))));	// 85945 mov     ax, word ptr unk_4A07A ;~ 275C:0873
cs=0x275c;eip=0x000876; 	T(MOV(cx, ax));	// 85946 mov     cx, ax ;~ 275C:0876
cs=0x275c;eip=0x000878; 	T(SUB(ax, *(dw*)((&unk_4a068))));	// 85947 sub     ax, word ptr unk_4A068 ;~ 275C:0878
cs=0x275c;eip=0x00087c; 	T(MOV(bx, ax));	// 85948 mov     bx, ax ;~ 275C:087C
cs=0x275c;eip=0x00087e; 	T(IMUL1_2(si));	// 85949 imul    si ;~ 275C:087E
cs=0x275c;eip=0x000880; 	T(IDIV2(bp));	// 85950 idiv    bp ;~ 275C:0880
cs=0x275c;eip=0x000882; 	X(ADD(*(dw*)((&unk_4a064)), ax));	// 85951 add     word ptr unk_4A064, ax ;~ 275C:0882
cs=0x275c;eip=0x000886; 	T(MOV(ax, bx));	// 85952 mov     ax, bx ;~ 275C:0886
cs=0x275c;eip=0x000888; 	T(IMUL1_2(di));	// 85953 imul    di ;~ 275C:0888
cs=0x275c;eip=0x00088a; 	T(IDIV2(bp));	// 85954 idiv    bp ;~ 275C:088A
cs=0x275c;eip=0x00088c; 	X(ADD(*(dw*)((&unk_4a066)), ax));	// 85955 add     word ptr unk_4A066, ax ;~ 275C:088C
cs=0x275c;eip=0x000890; 	X(MOV(*(dw*)((&unk_4a068)), cx));	// 85956 mov     word ptr unk_4A068, cx ;~ 275C:0890
cs=0x275c;eip=0x000894; 	R(JMP(loc_36437));	// 85957 jmp     short loc_36437 ;~ 275C:0894
loc_36437:
	// 9865 
cs=0x275c;eip=0x000897; 	R(CALL(sub_35f66,0));	// 85964 call    sub_35F66 ;~ 275C:0897
cs=0x275c;eip=0x00089a; 	R(JMP(loc_36300));	// 85965 jmp     loc_36300 ;~ 275C:089A
loc_3643d:
	// 9866 
cs=0x275c;eip=0x00089d; 	T(MOV(al, unk_4a07c));	// 85969 mov     al, byte ptr unk_4A07C ;~ 275C:089D
cs=0x275c;eip=0x0008a0; 	T(TEST(al, 4));	// 85970 test    al, 4 ;~ 275C:08A0
cs=0x275c;eip=0x0008a2; 	R(JZ(loc_36468));	// 85971 jz      short loc_36468 ;~ 275C:08A2
cs=0x275c;eip=0x0008a4; 	T(MOV(ax, *(dw*)((&unk_4a070))));	// 85972 mov     ax, word ptr unk_4A070 ;~ 275C:08A4
cs=0x275c;eip=0x0008a7; 	T(MOV(cx, ax));	// 85973 mov     cx, ax ;~ 275C:08A7
cs=0x275c;eip=0x0008a9; 	T(SUB(ax, *(dw*)((&unk_4a06a))));	// 85974 sub     ax, word ptr unk_4A06A ;~ 275C:08A9
cs=0x275c;eip=0x0008ad; 	T(MOV(bx, ax));	// 85975 mov     bx, ax ;~ 275C:08AD
cs=0x275c;eip=0x0008af; 	T(IMUL1_2(di));	// 85976 imul    di ;~ 275C:08AF
cs=0x275c;eip=0x0008b1; 	T(IDIV2(si));	// 85977 idiv    si ;~ 275C:08B1
cs=0x275c;eip=0x0008b3; 	X(ADD(*(dw*)((&unk_4a06c)), ax));	// 85978 add     word ptr unk_4A06C, ax ;~ 275C:08B3
cs=0x275c;eip=0x0008b7; 	T(MOV(ax, bx));	// 85979 mov     ax, bx ;~ 275C:08B7
cs=0x275c;eip=0x0008b9; 	T(IMUL1_2(bp));	// 85980 imul    bp ;~ 275C:08B9
cs=0x275c;eip=0x0008bb; 	T(IDIV2(si));	// 85981 idiv    si ;~ 275C:08BB
cs=0x275c;eip=0x0008bd; 	X(ADD(*(dw*)((&unk_4a06e)), ax));	// 85982 add     word ptr unk_4A06E, ax ;~ 275C:08BD
cs=0x275c;eip=0x0008c1; 	X(MOV(*(dw*)((&unk_4a06a)), cx));	// 85983 mov     word ptr unk_4A06A, cx ;~ 275C:08C1
cs=0x275c;eip=0x0008c5; 	R(JMP(loc_36530));	// 85984 jmp     loc_36530 ;~ 275C:08C5
loc_36468:
	// 9867 
cs=0x275c;eip=0x0008c8; 	T(TEST(al, 8));	// 85988 test    al, 8 ;~ 275C:08C8
cs=0x275c;eip=0x0008ca; 	R(JZ(loc_36490));	// 85989 jz      short loc_36490 ;~ 275C:08CA
cs=0x275c;eip=0x0008cc; 	T(MOV(ax, *(dw*)((&unk_4a072))));	// 85990 mov     ax, word ptr unk_4A072 ;~ 275C:08CC
cs=0x275c;eip=0x0008cf; 	T(MOV(cx, ax));	// 85991 mov     cx, ax ;~ 275C:08CF
cs=0x275c;eip=0x0008d1; 	T(SUB(ax, *(dw*)((&unk_4a06a))));	// 85992 sub     ax, word ptr unk_4A06A ;~ 275C:08D1
cs=0x275c;eip=0x0008d5; 	T(MOV(bx, ax));	// 85993 mov     bx, ax ;~ 275C:08D5
cs=0x275c;eip=0x0008d7; 	T(IMUL1_2(di));	// 85994 imul    di ;~ 275C:08D7
cs=0x275c;eip=0x0008d9; 	T(IDIV2(si));	// 85995 idiv    si ;~ 275C:08D9
cs=0x275c;eip=0x0008db; 	X(ADD(*(dw*)((&unk_4a06c)), ax));	// 85996 add     word ptr unk_4A06C, ax ;~ 275C:08DB
cs=0x275c;eip=0x0008df; 	T(MOV(ax, bx));	// 85997 mov     ax, bx ;~ 275C:08DF
cs=0x275c;eip=0x0008e1; 	T(IMUL1_2(bp));	// 85998 imul    bp ;~ 275C:08E1
cs=0x275c;eip=0x0008e3; 	T(IDIV2(si));	// 85999 idiv    si ;~ 275C:08E3
cs=0x275c;eip=0x0008e5; 	X(ADD(*(dw*)((&unk_4a06e)), ax));	// 86000 add     word ptr unk_4A06E, ax ;~ 275C:08E5
cs=0x275c;eip=0x0008e9; 	X(MOV(*(dw*)((&unk_4a06a)), cx));	// 86001 mov     word ptr unk_4A06A, cx ;~ 275C:08E9
cs=0x275c;eip=0x0008ed; 	R(JMP(loc_36530));	// 86002 jmp     loc_36530 ;~ 275C:08ED
loc_36490:
	// 9868 
cs=0x275c;eip=0x0008f0; 	T(TEST(al, 1));	// 86006 test    al, 1 ;~ 275C:08F0
cs=0x275c;eip=0x0008f2; 	R(JZ(loc_364b8));	// 86007 jz      short loc_364B8 ;~ 275C:08F2
cs=0x275c;eip=0x0008f4; 	T(MOV(ax, *(dw*)((&unk_4a076))));	// 86008 mov     ax, word ptr unk_4A076 ;~ 275C:08F4
cs=0x275c;eip=0x0008f7; 	T(MOV(cx, ax));	// 86009 mov     cx, ax ;~ 275C:08F7
cs=0x275c;eip=0x0008f9; 	T(SUB(ax, *(dw*)((&unk_4a06c))));	// 86010 sub     ax, word ptr unk_4A06C ;~ 275C:08F9
cs=0x275c;eip=0x0008fd; 	T(MOV(bx, ax));	// 86011 mov     bx, ax ;~ 275C:08FD
cs=0x275c;eip=0x0008ff; 	T(IMUL1_2(si));	// 86012 imul    si ;~ 275C:08FF
cs=0x275c;eip=0x000901; 	T(IDIV2(di));	// 86013 idiv    di ;~ 275C:0901
cs=0x275c;eip=0x000903; 	X(ADD(*(dw*)((&unk_4a06a)), ax));	// 86014 add     word ptr unk_4A06A, ax ;~ 275C:0903
cs=0x275c;eip=0x000907; 	T(MOV(ax, bx));	// 86015 mov     ax, bx ;~ 275C:0907
cs=0x275c;eip=0x000909; 	T(IMUL1_2(bp));	// 86016 imul    bp ;~ 275C:0909
cs=0x275c;eip=0x00090b; 	T(IDIV2(di));	// 86017 idiv    di ;~ 275C:090B
cs=0x275c;eip=0x00090d; 	X(ADD(*(dw*)((&unk_4a06e)), ax));	// 86018 add     word ptr unk_4A06E, ax ;~ 275C:090D
cs=0x275c;eip=0x000911; 	X(MOV(*(dw*)((&unk_4a06c)), cx));	// 86019 mov     word ptr unk_4A06C, cx ;~ 275C:0911
cs=0x275c;eip=0x000915; 	R(JMP(loc_36530));	// 86020 jmp     short loc_36530 ;~ 275C:0915
loc_364b8:
	// 9869 
cs=0x275c;eip=0x000918; 	T(TEST(al, 2));	// 86025 test    al, 2 ;~ 275C:0918
cs=0x275c;eip=0x00091a; 	R(JZ(loc_364e0));	// 86026 jz      short loc_364E0 ;~ 275C:091A
cs=0x275c;eip=0x00091c; 	T(MOV(ax, *(dw*)((&unk_4a074))));	// 86027 mov     ax, word ptr unk_4A074 ;~ 275C:091C
cs=0x275c;eip=0x00091f; 	T(MOV(cx, ax));	// 86028 mov     cx, ax ;~ 275C:091F
cs=0x275c;eip=0x000921; 	T(SUB(ax, *(dw*)((&unk_4a06c))));	// 86029 sub     ax, word ptr unk_4A06C ;~ 275C:0921
cs=0x275c;eip=0x000925; 	T(MOV(bx, ax));	// 86030 mov     bx, ax ;~ 275C:0925
cs=0x275c;eip=0x000927; 	T(IMUL1_2(si));	// 86031 imul    si ;~ 275C:0927
cs=0x275c;eip=0x000929; 	T(IDIV2(di));	// 86032 idiv    di ;~ 275C:0929
cs=0x275c;eip=0x00092b; 	X(ADD(*(dw*)((&unk_4a06a)), ax));	// 86033 add     word ptr unk_4A06A, ax ;~ 275C:092B
cs=0x275c;eip=0x00092f; 	T(MOV(ax, bx));	// 86034 mov     ax, bx ;~ 275C:092F
cs=0x275c;eip=0x000931; 	T(IMUL1_2(bp));	// 86035 imul    bp ;~ 275C:0931
cs=0x275c;eip=0x000933; 	T(IDIV2(di));	// 86036 idiv    di ;~ 275C:0933
cs=0x275c;eip=0x000935; 	X(ADD(*(dw*)((&unk_4a06e)), ax));	// 86037 add     word ptr unk_4A06E, ax ;~ 275C:0935
cs=0x275c;eip=0x000939; 	X(MOV(*(dw*)((&unk_4a06c)), cx));	// 86038 mov     word ptr unk_4A06C, cx ;~ 275C:0939
cs=0x275c;eip=0x00093d; 	R(JMP(loc_36530));	// 86039 jmp     short loc_36530 ;~ 275C:093D
loc_364e0:
	// 9870 
cs=0x275c;eip=0x000940; 	T(TEST(al, 0x10));	// 86044 test    al, 10h ;~ 275C:0940
cs=0x275c;eip=0x000942; 	R(JZ(loc_36508));	// 86045 jz      short loc_36508 ;~ 275C:0942
cs=0x275c;eip=0x000944; 	T(MOV(ax, *(dw*)((&unk_4a078))));	// 86046 mov     ax, word ptr unk_4A078 ;~ 275C:0944
cs=0x275c;eip=0x000947; 	T(MOV(cx, ax));	// 86047 mov     cx, ax ;~ 275C:0947
cs=0x275c;eip=0x000949; 	T(SUB(ax, *(dw*)((&unk_4a06e))));	// 86048 sub     ax, word ptr unk_4A06E ;~ 275C:0949
cs=0x275c;eip=0x00094d; 	T(MOV(bx, ax));	// 86049 mov     bx, ax ;~ 275C:094D
cs=0x275c;eip=0x00094f; 	T(IMUL1_2(si));	// 86050 imul    si ;~ 275C:094F
cs=0x275c;eip=0x000951; 	T(IDIV2(bp));	// 86051 idiv    bp ;~ 275C:0951
cs=0x275c;eip=0x000953; 	X(ADD(*(dw*)((&unk_4a06a)), ax));	// 86052 add     word ptr unk_4A06A, ax ;~ 275C:0953
cs=0x275c;eip=0x000957; 	T(MOV(ax, bx));	// 86053 mov     ax, bx ;~ 275C:0957
cs=0x275c;eip=0x000959; 	T(IMUL1_2(di));	// 86054 imul    di ;~ 275C:0959
cs=0x275c;eip=0x00095b; 	T(IDIV2(bp));	// 86055 idiv    bp ;~ 275C:095B
cs=0x275c;eip=0x00095d; 	X(ADD(*(dw*)((&unk_4a06c)), ax));	// 86056 add     word ptr unk_4A06C, ax ;~ 275C:095D
cs=0x275c;eip=0x000961; 	X(MOV(*(dw*)((&unk_4a06e)), cx));	// 86057 mov     word ptr unk_4A06E, cx ;~ 275C:0961
cs=0x275c;eip=0x000965; 	R(JMP(loc_36530));	// 86058 jmp     short loc_36530 ;~ 275C:0965
loc_36508:
	// 9871 
cs=0x275c;eip=0x000968; 	T(TEST(al, 0x20));	// 86063 test    al, 20h ;~ 275C:0968
cs=0x275c;eip=0x00096a; 	R(JZ(loc_36530));	// 86064 jz      short loc_36530 ;~ 275C:096A
cs=0x275c;eip=0x00096c; 	T(MOV(ax, *(dw*)((&unk_4a07a))));	// 86065 mov     ax, word ptr unk_4A07A ;~ 275C:096C
cs=0x275c;eip=0x00096f; 	T(MOV(cx, ax));	// 86066 mov     cx, ax ;~ 275C:096F
cs=0x275c;eip=0x000971; 	T(SUB(ax, *(dw*)((&unk_4a06e))));	// 86067 sub     ax, word ptr unk_4A06E ;~ 275C:0971
cs=0x275c;eip=0x000975; 	T(MOV(bx, ax));	// 86068 mov     bx, ax ;~ 275C:0975
cs=0x275c;eip=0x000977; 	T(IMUL1_2(si));	// 86069 imul    si ;~ 275C:0977
cs=0x275c;eip=0x000979; 	T(IDIV2(bp));	// 86070 idiv    bp ;~ 275C:0979
cs=0x275c;eip=0x00097b; 	X(ADD(*(dw*)((&unk_4a06a)), ax));	// 86071 add     word ptr unk_4A06A, ax ;~ 275C:097B
cs=0x275c;eip=0x00097f; 	T(MOV(ax, bx));	// 86072 mov     ax, bx ;~ 275C:097F
cs=0x275c;eip=0x000981; 	T(IMUL1_2(di));	// 86073 imul    di ;~ 275C:0981
cs=0x275c;eip=0x000983; 	T(IDIV2(bp));	// 86074 idiv    bp ;~ 275C:0983
cs=0x275c;eip=0x000985; 	X(ADD(*(dw*)((&unk_4a06c)), ax));	// 86075 add     word ptr unk_4A06C, ax ;~ 275C:0985
cs=0x275c;eip=0x000989; 	X(MOV(*(dw*)((&unk_4a06e)), cx));	// 86076 mov     word ptr unk_4A06E, cx ;~ 275C:0989
cs=0x275c;eip=0x00098d; 	R(JMP(loc_36530));	// 86077 jmp     short loc_36530 ;~ 275C:098D
loc_36530:
	// 9872 
cs=0x275c;eip=0x000990; 	R(CALL(sub_35fac,0));	// 86083 call    sub_35FAC ;~ 275C:0990
cs=0x275c;eip=0x000993; 	R(JMP(loc_36300));	// 86084 jmp     loc_36300 ;~ 275C:0993
loc_36536:
	// 9873 
cs=0x275c;eip=0x000996; 	T(MOV(bx, *(dw*)((&unk_4a09e))));	// 86089 mov     bx, word ptr unk_4A09E ;~ 275C:0996
cs=0x275c;eip=0x00099a; 	T(CMP(*(dw*)(raddr(ds,bx+0x44)), 0));	// 86090 cmp     word ptr [bx+44h], 0 ;~ 275C:099A
cs=0x275c;eip=0x00099e; 	R(JZ(loc_36549));	// 86091 jz      short loc_36549 ;~ 275C:099E
cs=0x275c;eip=0x0009a0; 	R(CALL(sub_3605a,0));	// 86092 call    sub_3605A ;~ 275C:09A0
cs=0x275c;eip=0x0009a3; 	R(JC(loc_36549));	// 86093 jb      short loc_36549 ;~ 275C:09A3
cs=0x275c;eip=0x0009a5; 	T(CLC);	// 86094 clc ;~ 275C:09A5
cs=0x275c;eip=0x0009a6; 	R(JMP(loc_36610));	// 86095 jmp     loc_36610 ;~ 275C:09A6
loc_36549:
	// 9874 
cs=0x275c;eip=0x0009a9; 	T(MOV(ax, *(dw*)((&unk_4a07f))));	// 86100 mov     ax, word ptr unk_4A07F ;~ 275C:09A9
cs=0x275c;eip=0x0009ac; 	T(OR(ax, ax));	// 86101 or      ax, ax ;~ 275C:09AC
cs=0x275c;eip=0x0009ae; 	R(JZ(loc_365ba));	// 86102 jz      short loc_365BA ;~ 275C:09AE
cs=0x275c;eip=0x0009b0; 	T(CMP(ax, 0x2D0));	// 86103 cmp     ax, 2D0h ;~ 275C:09B0
cs=0x275c;eip=0x0009b3; 	R(JNZ(loc_36567));	// 86104 jnz     short loc_36567 ;~ 275C:09B3
cs=0x275c;eip=0x0009b5; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86105 mov     ax, word ptr unk_4A064 ;~ 275C:09B5
cs=0x275c;eip=0x0009b8; 	T(MOV(dx, *(dw*)((&unk_4a068))));	// 86106 mov     dx, word ptr unk_4A068 ;~ 275C:09B8
cs=0x275c;eip=0x0009bc; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 86107 mov     word ptr unk_4A068, ax ;~ 275C:09BC
cs=0x275c;eip=0x0009bf; 	T(NEG(dx));	// 86108 neg     dx ;~ 275C:09BF
cs=0x275c;eip=0x0009c1; 	X(MOV(*(dw*)((&unk_4a064)), dx));	// 86109 mov     word ptr unk_4A064, dx ;~ 275C:09C1
cs=0x275c;eip=0x0009c5; 	R(JMP(loc_365ba));	// 86110 jmp     short loc_365BA ;~ 275C:09C5
loc_36567:
	// 9875 
cs=0x275c;eip=0x0009c7; 	T(CMP(ax, 0x5A0));	// 86114 cmp     ax, 5A0h ;~ 275C:09C7
cs=0x275c;eip=0x0009ca; 	R(JNZ(loc_36576));	// 86115 jnz     short loc_36576 ;~ 275C:09CA
cs=0x275c;eip=0x0009cc; 	X(NEG(*(dw*)((&unk_4a064))));	// 86116 neg     word ptr unk_4A064 ;~ 275C:09CC
cs=0x275c;eip=0x0009d0; 	X(NEG(*(dw*)((&unk_4a068))));	// 86117 neg     word ptr unk_4A068 ;~ 275C:09D0
cs=0x275c;eip=0x0009d4; 	R(JMP(loc_365ba));	// 86118 jmp     short loc_365BA ;~ 275C:09D4
loc_36576:
	// 9876 
cs=0x275c;eip=0x0009d6; 	T(CMP(ax, 0x870));	// 86122 cmp     ax, 870h ;~ 275C:09D6
cs=0x275c;eip=0x0009d9; 	R(JNZ(loc_3658b));	// 86123 jnz     short loc_3658B ;~ 275C:09D9
cs=0x275c;eip=0x0009db; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 86124 mov     ax, word ptr unk_4A068 ;~ 275C:09DB
cs=0x275c;eip=0x0009de; 	T(MOV(dx, *(dw*)((&unk_4a064))));	// 86125 mov     dx, word ptr unk_4A064 ;~ 275C:09DE
cs=0x275c;eip=0x0009e2; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 86126 mov     word ptr unk_4A064, ax ;~ 275C:09E2
cs=0x275c;eip=0x0009e5; 	T(NEG(dx));	// 86127 neg     dx ;~ 275C:09E5
cs=0x275c;eip=0x0009e7; 	X(MOV(*(dw*)((&unk_4a068)), dx));	// 86128 mov     word ptr unk_4A068, dx ;~ 275C:09E7
loc_3658b:
	// 9877 
cs=0x275c;eip=0x0009eb; 	T(CMP(unk_4a085, 0));	// 86131 cmp     byte ptr unk_4A085, 0 ;~ 275C:09EB
cs=0x275c;eip=0x0009f0; 	R(JZ(loc_365ba));	// 86132 jz      short loc_365BA ;~ 275C:09F0
cs=0x275c;eip=0x0009f2; 	T(MOV(bx, ax));	// 86133 mov     bx, ax ;~ 275C:09F2
cs=0x275c;eip=0x0009f4; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86134 mov     ax, word ptr unk_4A064 ;~ 275C:09F4
cs=0x275c;eip=0x0009f7; 	X(MOV(*(dw*)((&unk_4a081)), ax));	// 86135 mov     word ptr unk_4A081, ax ;~ 275C:09F7
cs=0x275c;eip=0x0009fa; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 86136 mov     ax, word ptr unk_4A068 ;~ 275C:09FA
cs=0x275c;eip=0x0009fd; 	X(MOV(*(dw*)((&unk_4a083)), ax));	// 86137 mov     word ptr unk_4A083, ax ;~ 275C:09FD
cs=0x275c;eip=0x000a00; 	T(MOV(ax, 0x26D1));	// 86138 mov     ax, 26D1h ;~ 275C:0A00
cs=0x275c;eip=0x000a03; 	X(PUSH(ax));	// 86139 push    ax ;~ 275C:0A03
cs=0x275c;eip=0x000a04; 	T(MOV(ax, 0x106));	// 86140 mov     ax, 106h ;~ 275C:0A04
cs=0x275c;eip=0x000a07; 	X(PUSH(ax));	// 86141 push    ax ;~ 275C:0A07
cs=0x275c;eip=0x000a08; 	X(PUSH(bx));	// 86142 push    bx ;~ 275C:0A08
cs=0x275c;eip=0x000a09; 	R(CALLF(sub_27d5d,0));	// 86143 call    sub_27D5D ;~ 275C:0A09
cs=0x275c;eip=0x000a0e; 	T(MOV(ax, *(dw*)((&unk_4a081))));	// 86144 mov     ax, word ptr unk_4A081 ;~ 275C:0A0E
cs=0x275c;eip=0x000a11; 	X(MOV(*(dw*)((&unk_4a064)), ax));	// 86145 mov     word ptr unk_4A064, ax ;~ 275C:0A11
cs=0x275c;eip=0x000a14; 	T(MOV(ax, *(dw*)((&unk_4a083))));	// 86146 mov     ax, word ptr unk_4A083 ;~ 275C:0A14
cs=0x275c;eip=0x000a17; 	X(MOV(*(dw*)((&unk_4a068)), ax));	// 86147 mov     word ptr unk_4A068, ax ;~ 275C:0A17
loc_365ba:
	// 9878 
cs=0x275c;eip=0x000a1a; 	T(MOV(bx, *(dw*)((&unk_570e4))));	// 86151 mov     bx, word ptr unk_570E4 ;~ 275C:0A1A
cs=0x275c;eip=0x000a1e; 	T(OR(bx, bx));	// 86152 or      bx, bx ;~ 275C:0A1E
cs=0x275c;eip=0x000a20; 	R(JZ(loc_3660f));	// 86153 jz      short loc_3660F ;~ 275C:0A20
cs=0x275c;eip=0x000a22; 	T(MOV(ax, *(dw*)((&unk_4a064))));	// 86154 mov     ax, word ptr unk_4A064 ;~ 275C:0A22
cs=0x275c;eip=0x000a25; 	T(CWD);	// 86155 cwd ;~ 275C:0A25
cs=0x275c;eip=0x000a26; 	T(ADD(ax, *(dw*)((&unk_4a058))));	// 86156 add     ax, word ptr unk_4A058 ;~ 275C:0A26
cs=0x275c;eip=0x000a2a; 	T(ADC(dx, *(dw*)((&unk_4a05a))));	// 86157 adc     dx, word ptr unk_4A05A ;~ 275C:0A2A
cs=0x275c;eip=0x000a2e; 	T(MOV(dh, dl));	// 86158 mov     dh, dl ;~ 275C:0A2E
cs=0x275c;eip=0x000a30; 	T(MOV(dl, ah));	// 86159 mov     dl, ah ;~ 275C:0A30
cs=0x275c;eip=0x000a32; 	T(MOV(ah, al));	// 86160 mov     ah, al ;~ 275C:0A32
cs=0x275c;eip=0x000a34; 	T(XOR(al, al));	// 86161 xor     al, al ;~ 275C:0A34
cs=0x275c;eip=0x000a36; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 86162 mov     [bx], ax ;~ 275C:0A36
cs=0x275c;eip=0x000a38; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 86163 mov     [bx+2], dx ;~ 275C:0A38
cs=0x275c;eip=0x000a3b; 	T(MOV(ax, *(dw*)((&unk_4a066))));	// 86164 mov     ax, word ptr unk_4A066 ;~ 275C:0A3B
cs=0x275c;eip=0x000a3e; 	T(CWD);	// 86165 cwd ;~ 275C:0A3E
cs=0x275c;eip=0x000a3f; 	T(ADD(ax, *(dw*)((&unk_4a05c))));	// 86166 add     ax, word ptr unk_4A05C ;~ 275C:0A3F
cs=0x275c;eip=0x000a43; 	T(ADC(dx, *(dw*)((&unk_4a05e))));	// 86167 adc     dx, word ptr unk_4A05E ;~ 275C:0A43
cs=0x275c;eip=0x000a47; 	T(MOV(dh, dl));	// 86168 mov     dh, dl ;~ 275C:0A47
cs=0x275c;eip=0x000a49; 	T(MOV(dl, ah));	// 86169 mov     dl, ah ;~ 275C:0A49
cs=0x275c;eip=0x000a4b; 	T(MOV(ah, al));	// 86170 mov     ah, al ;~ 275C:0A4B
cs=0x275c;eip=0x000a4d; 	T(XOR(al, al));	// 86171 xor     al, al ;~ 275C:0A4D
cs=0x275c;eip=0x000a4f; 	X(MOV(*(dw*)(raddr(ds,bx+4)), ax));	// 86172 mov     [bx+4], ax ;~ 275C:0A4F
cs=0x275c;eip=0x000a52; 	X(MOV(*(dw*)(raddr(ds,bx+6)), dx));	// 86173 mov     [bx+6], dx ;~ 275C:0A52
cs=0x275c;eip=0x000a55; 	T(MOV(ax, *(dw*)((&unk_4a068))));	// 86174 mov     ax, word ptr unk_4A068 ;~ 275C:0A55
cs=0x275c;eip=0x000a58; 	T(CWD);	// 86175 cwd ;~ 275C:0A58
cs=0x275c;eip=0x000a59; 	T(ADD(ax, *(dw*)((&unk_4a060))));	// 86176 add     ax, word ptr unk_4A060 ;~ 275C:0A59
cs=0x275c;eip=0x000a5d; 	T(ADC(dx, *(dw*)((&unk_4a062))));	// 86177 adc     dx, word ptr unk_4A062 ;~ 275C:0A5D
cs=0x275c;eip=0x000a61; 	T(MOV(dh, dl));	// 86178 mov     dh, dl ;~ 275C:0A61
cs=0x275c;eip=0x000a63; 	T(MOV(dl, ah));	// 86179 mov     dl, ah ;~ 275C:0A63
cs=0x275c;eip=0x000a65; 	T(MOV(ah, al));	// 86180 mov     ah, al ;~ 275C:0A65
cs=0x275c;eip=0x000a67; 	T(XOR(al, al));	// 86181 xor     al, al ;~ 275C:0A67
cs=0x275c;eip=0x000a69; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 86182 mov     [bx+8], ax ;~ 275C:0A69
cs=0x275c;eip=0x000a6c; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 86183 mov     [bx+0Ah], dx ;~ 275C:0A6C
loc_3660f:
	// 9879 
cs=0x275c;eip=0x000a6f; 	T(STC);	// 86186 stc ;~ 275C:0A6F
loc_36610:
	// 9880 
cs=0x275c;eip=0x000a70; 	X(POP(di));	// 86190 pop     di ;~ 275C:0A70
cs=0x275c;eip=0x000a71; 	X(POP(si));	// 86191 pop     si ;~ 275C:0A71
cs=0x275c;eip=0x000a72; 	X(POP(bp));	// 86192 pop     bp ;~ 275C:0A72
cs=0x275c;eip=0x000a73; 	R(RETN(0));	// 86193 retn ;~ 275C:0A73
seg023_proc:
	// 86199 
loc_36614:
	// 9881 
cs=0x275c;eip=0x000a74; 	T(CLC);	// 86200 clc ;~ 275C:0A74
cs=0x275c;eip=0x000a75; 	X(POP(di));	// 86201 pop     di ;~ 275C:0A75
cs=0x275c;eip=0x000a76; 	X(POP(si));	// 86202 pop     si ;~ 275C:0A76
cs=0x275c;eip=0x000a77; 	X(POP(bp));	// 86203 pop     bp ;~ 275C:0A77
cs=0x275c;eip=0x000a78; 	R(RETN(0));	// 86204 retn ;~ 275C:0A78
sub_36619:
	// 86211 
cs=0x275c;eip=0x000a79; 	X(PUSH(bp));	// 86215 push    bp ;~ 275C:0A79
cs=0x275c;eip=0x000a7a; 	T(MOV(bp, sp));	// 86216 mov     bp, sp ;~ 275C:0A7A
cs=0x275c;eip=0x000a7c; 	X(PUSH(si));	// 86217 push    si ;~ 275C:0A7C
cs=0x275c;eip=0x000a7d; 	X(PUSH(di));	// 86218 push    di ;~ 275C:0A7D
cs=0x275c;eip=0x000a7e; 	T(CMP(unk_570f9, 0));	// 86219 cmp     byte ptr unk_570F9, 0 ;~ 275C:0A7E
cs=0x275c;eip=0x000a83; 	R(JL(loc_36643));	// 86220 jl      short loc_36643 ;~ 275C:0A83
cs=0x275c;eip=0x000a85; 	T(CMP(unk_570ed, 0));	// 86221 cmp     byte ptr unk_570ED, 0 ;~ 275C:0A85
cs=0x275c;eip=0x000a8a; 	R(JGE(loc_36614));	// 86222 jge     short loc_36614 ;~ 275C:0A8A
cs=0x275c;eip=0x000a8c; 	T(MOV(di, *(dw*)((&unk_570e4))));	// 86223 mov     di, word ptr unk_570E4 ;~ 275C:0A8C
cs=0x275c;eip=0x000a90; 	T(OR(di, di));	// 86224 or      di, di ;~ 275C:0A90
cs=0x275c;eip=0x000a92; 	R(JZ(loc_36640));	// 86225 jz      short loc_36640 ;~ 275C:0A92
cs=0x275c;eip=0x000a94; 	T(MOV(ax, ds));	// 86226 mov     ax, ds ;~ 275C:0A94
cs=0x275c;eip=0x000a96; 	T(MOV(es, ax));	// 86227 mov     es, ax ;~ 275C:0A96
cs=0x275c;eip=0x000a98; 	T(MOV(cx, 6));	// 86229 mov     cx, 6 ;~ 275C:0A98
cs=0x275c;eip=0x000a9b; 	T(MOV(si, 0x268E));	// 86230 mov     si, 268Eh ;~ 275C:0A9B
	// 86231 rep movsw ;~ 275C:0A9E
cs=0x275c;eip=0x000a9e; 	X(	REP MOVSW);	// 86231 rep movsw ;~ 275C:0A9E
loc_36640:
	// 9882 
cs=0x275c;eip=0x000aa0; 	R(JMP(loc_3671e));	// 86234 jmp     loc_3671E ;~ 275C:0AA0
loc_36643:
	// 9883 
cs=0x275c;eip=0x000aa3; 	T(MOV(si, *(dw*)((&unk_570e6))));	// 86238 mov     si, word ptr unk_570E6 ;~ 275C:0AA3
cs=0x275c;eip=0x000aa7; 	T(MOV(ax, *(dw*)((&unk_570e8))));	// 86239 mov     ax, word ptr unk_570E8 ;~ 275C:0AA7
cs=0x275c;eip=0x000aaa; 	T(CMP(ax, *(dw*)((&unk_570f4))));	// 86240 cmp     ax, word ptr unk_570F4 ;~ 275C:0AAA
cs=0x275c;eip=0x000aae; 	R(JL(loc_3665f));	// 86241 jl      short loc_3665F ;~ 275C:0AAE
cs=0x275c;eip=0x000ab0; 	R(JG(loc_36658));	// 86242 jg      short loc_36658 ;~ 275C:0AB0
cs=0x275c;eip=0x000ab2; 	T(CMP(si, *(dw*)((&unk_570f2))));	// 86243 cmp     si, word ptr unk_570F2 ;~ 275C:0AB2
cs=0x275c;eip=0x000ab6; 	R(JBE(loc_3665f));	// 86244 jbe     short loc_3665F ;~ 275C:0AB6
loc_36658:
	// 9884 
cs=0x275c;eip=0x000ab8; 	T(MOV(si, *(dw*)((&unk_570f2))));	// 86247 mov     si, word ptr unk_570F2 ;~ 275C:0AB8
cs=0x275c;eip=0x000abc; 	T(MOV(ax, *(dw*)((&unk_570f4))));	// 86248 mov     ax, word ptr unk_570F4 ;~ 275C:0ABC
loc_3665f:
	// 9885 
cs=0x275c;eip=0x000abf; 	X(MOV(*(dw*)((&unk_4a086)), si));	// 86252 mov     word ptr unk_4A086, si ;~ 275C:0ABF
cs=0x275c;eip=0x000ac3; 	X(MOV(*(dw*)((&unk_4a088)), ax));	// 86253 mov     word ptr unk_4A088, ax ;~ 275C:0AC3
cs=0x275c;eip=0x000ac6; 	T(MOV(di, *(dw*)((&unk_570ee))));	// 86254 mov     di, word ptr unk_570EE ;~ 275C:0AC6
cs=0x275c;eip=0x000aca; 	T(MOV(ax, *(dw*)((&unk_570f0))));	// 86255 mov     ax, word ptr unk_570F0 ;~ 275C:0ACA
cs=0x275c;eip=0x000acd; 	T(CMP(ax, *(dw*)((&unk_570fc))));	// 86256 cmp     ax, word ptr unk_570FC ;~ 275C:0ACD
cs=0x275c;eip=0x000ad1; 	R(JL(loc_36682));	// 86257 jl      short loc_36682 ;~ 275C:0AD1
cs=0x275c;eip=0x000ad3; 	R(JG(loc_3667b));	// 86258 jg      short loc_3667B ;~ 275C:0AD3
cs=0x275c;eip=0x000ad5; 	T(CMP(di, *(dw*)((&unk_570fa))));	// 86259 cmp     di, word ptr unk_570FA ;~ 275C:0AD5
cs=0x275c;eip=0x000ad9; 	R(JBE(loc_36682));	// 86260 jbe     short loc_36682 ;~ 275C:0AD9
loc_3667b:
	// 9886 
cs=0x275c;eip=0x000adb; 	T(MOV(di, *(dw*)((&unk_570fa))));	// 86263 mov     di, word ptr unk_570FA ;~ 275C:0ADB
cs=0x275c;eip=0x000adf; 	T(MOV(ax, *(dw*)((&unk_570fc))));	// 86264 mov     ax, word ptr unk_570FC ;~ 275C:0ADF
loc_36682:
	// 9887 
cs=0x275c;eip=0x000ae2; 	X(MOV(*(dw*)((&unk_4a08a)), di));	// 86268 mov     word ptr unk_4A08A, di ;~ 275C:0AE2
cs=0x275c;eip=0x000ae6; 	X(MOV(*(dw*)((&unk_4a08c)), ax));	// 86269 mov     word ptr unk_4A08C, ax ;~ 275C:0AE6
cs=0x275c;eip=0x000ae9; 	T(MOV(ax, *(dw*)((&unk_570e6))));	// 86270 mov     ax, word ptr unk_570E6 ;~ 275C:0AE9
cs=0x275c;eip=0x000aec; 	T(SUB(ax, si));	// 86271 sub     ax, si ;~ 275C:0AEC
cs=0x275c;eip=0x000aee; 	X(MOV(*(dw*)((&unk_4a08e)), ax));	// 86272 mov     word ptr unk_4A08E, ax ;~ 275C:0AEE
cs=0x275c;eip=0x000af1; 	T(MOV(ax, *(dw*)((&unk_570f2))));	// 86273 mov     ax, word ptr unk_570F2 ;~ 275C:0AF1
cs=0x275c;eip=0x000af4; 	T(SUB(ax, si));	// 86274 sub     ax, si ;~ 275C:0AF4
cs=0x275c;eip=0x000af6; 	X(MOV(*(dw*)((&unk_4a092)), ax));	// 86275 mov     word ptr unk_4A092, ax ;~ 275C:0AF6
cs=0x275c;eip=0x000af9; 	T(MOV(ax, *(dw*)((&unk_570ee))));	// 86276 mov     ax, word ptr unk_570EE ;~ 275C:0AF9
cs=0x275c;eip=0x000afc; 	T(SUB(ax, di));	// 86277 sub     ax, di ;~ 275C:0AFC
cs=0x275c;eip=0x000afe; 	X(MOV(*(dw*)((&unk_4a090)), ax));	// 86278 mov     word ptr unk_4A090, ax ;~ 275C:0AFE
cs=0x275c;eip=0x000b01; 	T(MOV(ax, *(dw*)((&unk_570fa))));	// 86279 mov     ax, word ptr unk_570FA ;~ 275C:0B01
cs=0x275c;eip=0x000b04; 	T(SUB(ax, di));	// 86280 sub     ax, di ;~ 275C:0B04
cs=0x275c;eip=0x000b06; 	X(MOV(*(dw*)((&unk_4a094)), ax));	// 86281 mov     word ptr unk_4A094, ax ;~ 275C:0B06
cs=0x275c;eip=0x000b09; 	T(MOV(si, *(dw*)((&unk_4a092))));	// 86282 mov     si, word ptr unk_4A092 ;~ 275C:0B09
cs=0x275c;eip=0x000b0d; 	T(SUB(si, *(dw*)((&unk_4a08e))));	// 86283 sub     si, word ptr unk_4A08E ;~ 275C:0B0D
cs=0x275c;eip=0x000b11; 	T(MOV(di, *(dw*)((&unk_570f6))));	// 86284 mov     di, word ptr unk_570F6 ;~ 275C:0B11
cs=0x275c;eip=0x000b15; 	T(SUB(di, *(dw*)((&unk_570ea))));	// 86285 sub     di, word ptr unk_570EA ;~ 275C:0B15
cs=0x275c;eip=0x000b19; 	T(MOV(bp, *(dw*)((&unk_4a094))));	// 86286 mov     bp, word ptr unk_4A094 ;~ 275C:0B19
cs=0x275c;eip=0x000b1d; 	T(SUB(bp, *(dw*)((&unk_4a090))));	// 86287 sub     bp, word ptr unk_4A090 ;~ 275C:0B1D
cs=0x275c;eip=0x000b21; 	T(MOV(ax, si));	// 86288 mov     ax, si ;~ 275C:0B21
cs=0x275c;eip=0x000b23; 	X(IMUL1_2(*(dw*)((&unk_570ea))));	// 86289 imul    word ptr unk_570EA ;~ 275C:0B23
cs=0x275c;eip=0x000b27; 	T(IDIV2(di));	// 86290 idiv    di ;~ 275C:0B27
cs=0x275c;eip=0x000b29; 	X(SUB(*(dw*)((&unk_4a08e)), ax));	// 86291 sub     word ptr unk_4A08E, ax ;~ 275C:0B29
cs=0x275c;eip=0x000b2d; 	T(MOV(ax, bp));	// 86292 mov     ax, bp ;~ 275C:0B2D
cs=0x275c;eip=0x000b2f; 	X(IMUL1_2(*(dw*)((&unk_570ea))));	// 86293 imul    word ptr unk_570EA ;~ 275C:0B2F
cs=0x275c;eip=0x000b33; 	T(IDIV2(di));	// 86294 idiv    di ;~ 275C:0B33
cs=0x275c;eip=0x000b35; 	X(SUB(*(dw*)((&unk_4a090)), ax));	// 86295 sub     word ptr unk_4A090, ax ;~ 275C:0B35
cs=0x275c;eip=0x000b39; 	T(MOV(bx, *(dw*)((&unk_570e4))));	// 86296 mov     bx, word ptr unk_570E4 ;~ 275C:0B39
cs=0x275c;eip=0x000b3d; 	T(OR(bx, bx));	// 86297 or      bx, bx ;~ 275C:0B3D
cs=0x275c;eip=0x000b3f; 	R(JZ(loc_3671e));	// 86298 jz      short loc_3671E ;~ 275C:0B3F
cs=0x275c;eip=0x000b41; 	T(MOV(ax, *(dw*)((&unk_4a08e))));	// 86299 mov     ax, word ptr unk_4A08E ;~ 275C:0B41
cs=0x275c;eip=0x000b44; 	T(CWD);	// 86300 cwd ;~ 275C:0B44
cs=0x275c;eip=0x000b45; 	T(ADD(ax, *(dw*)((&unk_4a086))));	// 86301 add     ax, word ptr unk_4A086 ;~ 275C:0B45
cs=0x275c;eip=0x000b49; 	T(ADC(dx, *(dw*)((&unk_4a088))));	// 86302 adc     dx, word ptr unk_4A088 ;~ 275C:0B49
cs=0x275c;eip=0x000b4d; 	T(MOV(dh, dl));	// 86303 mov     dh, dl ;~ 275C:0B4D
cs=0x275c;eip=0x000b4f; 	T(MOV(dl, ah));	// 86304 mov     dl, ah ;~ 275C:0B4F
cs=0x275c;eip=0x000b51; 	T(MOV(ah, al));	// 86305 mov     ah, al ;~ 275C:0B51
cs=0x275c;eip=0x000b53; 	T(XOR(al, al));	// 86306 xor     al, al ;~ 275C:0B53
cs=0x275c;eip=0x000b55; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 86307 mov     [bx], ax ;~ 275C:0B55
cs=0x275c;eip=0x000b57; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 86308 mov     [bx+2], dx ;~ 275C:0B57
cs=0x275c;eip=0x000b5a; 	X(MOV(*(dw*)(raddr(ds,bx+4)), 0));	// 86309 mov     word ptr [bx+4], 0 ;~ 275C:0B5A
cs=0x275c;eip=0x000b5f; 	X(MOV(*(dw*)(raddr(ds,bx+6)), 0));	// 86310 mov     word ptr [bx+6], 0 ;~ 275C:0B5F
cs=0x275c;eip=0x000b64; 	T(MOV(ax, *(dw*)((&unk_4a090))));	// 86311 mov     ax, word ptr unk_4A090 ;~ 275C:0B64
cs=0x275c;eip=0x000b67; 	T(CWD);	// 86312 cwd ;~ 275C:0B67
cs=0x275c;eip=0x000b68; 	T(ADD(ax, *(dw*)((&unk_4a08a))));	// 86313 add     ax, word ptr unk_4A08A ;~ 275C:0B68
cs=0x275c;eip=0x000b6c; 	T(ADC(dx, *(dw*)((&unk_4a08c))));	// 86314 adc     dx, word ptr unk_4A08C ;~ 275C:0B6C
cs=0x275c;eip=0x000b70; 	T(MOV(dh, dl));	// 86315 mov     dh, dl ;~ 275C:0B70
cs=0x275c;eip=0x000b72; 	T(MOV(dl, ah));	// 86316 mov     dl, ah ;~ 275C:0B72
cs=0x275c;eip=0x000b74; 	T(MOV(ah, al));	// 86317 mov     ah, al ;~ 275C:0B74
cs=0x275c;eip=0x000b76; 	T(XOR(al, al));	// 86318 xor     al, al ;~ 275C:0B76
cs=0x275c;eip=0x000b78; 	X(MOV(*(dw*)(raddr(ds,bx+8)), ax));	// 86319 mov     [bx+8], ax ;~ 275C:0B78
cs=0x275c;eip=0x000b7b; 	X(MOV(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 86320 mov     [bx+0Ah], dx ;~ 275C:0B7B
loc_3671e:
	// 9888 
cs=0x275c;eip=0x000b7e; 	T(STC);	// 86324 stc ;~ 275C:0B7E
cs=0x275c;eip=0x000b7f; 	X(POP(di));	// 86325 pop     di ;~ 275C:0B7F
cs=0x275c;eip=0x000b80; 	X(POP(si));	// 86326 pop     si ;~ 275C:0B80
cs=0x275c;eip=0x000b81; 	X(POP(bp));	// 86327 pop     bp ;~ 275C:0B81
cs=0x275c;eip=0x000b82; 	R(RETN(0));	// 86328 retn ;~ 275C:0B82
sub_36723:
	// 86336 
#undef arg_0
#define arg_0 4
	// 86339 arg_0           = dword ptr  4 ;~ 275C:0B83
cs=0x275c;eip=0x000b83; 	X(PUSH(bp));	// 86341 push    bp ;~ 275C:0B83
cs=0x275c;eip=0x000b84; 	T(MOV(bp, sp));	// 86342 mov     bp, sp ;~ 275C:0B84
cs=0x275c;eip=0x000b86; 	X(PUSH(si));	// 86343 push    si ;~ 275C:0B86
cs=0x275c;eip=0x000b87; 	X(PUSH(di));	// 86344 push    di ;~ 275C:0B87
cs=0x275c;eip=0x000b88; 	T(LES(bp, *(dd*)(raddr(ss,bp+arg_0))));	// 86345 les     bp, [bp+arg_0] ;~ 275C:0B88
cs=0x275c;eip=0x000b8b; 	T(ADD(bp, 1));	// 86347 add     bp, 1 ;~ 275C:0B8B
cs=0x275c;eip=0x000b8e; 	X(MOV(*(dw*)((&unk_4a096)), bp));	// 86348 mov     word ptr unk_4A096, bp ;~ 275C:0B8E
cs=0x275c;eip=0x000b92; 	X(MOV(*(dw*)((&unk_4a098)), es));	// 86349 mov     word ptr unk_4A098, es ;~ 275C:0B92
loc_36736:
	// 9889 
cs=0x275c;eip=0x000b96; 	T(MOV(es, *(dw*)((&unk_4a098))));	// 86353 mov     es, word ptr unk_4A098 ;~ 275C:0B96
cs=0x275c;eip=0x000b9a; 	T(MOV(si, *(dw*)(raddr(es,bp+0))));	// 86354 mov     si, es:[bp+0] ;~ 275C:0B9A
cs=0x275c;eip=0x000b9e; 	T(ADD(bp, 2));	// 86355 add     bp, 2 ;~ 275C:0B9E
cs=0x275c;eip=0x000ba1; 	T(OR(si, si));	// 86356 or      si, si ;~ 275C:0BA1
cs=0x275c;eip=0x000ba3; 	R(JNZ(loc_36748));	// 86357 jnz     short loc_36748 ;~ 275C:0BA3
cs=0x275c;eip=0x000ba5; 	R(JMP(loc_367d8));	// 86358 jmp     loc_367D8 ;~ 275C:0BA5
loc_36748:
	// 9890 
cs=0x275c;eip=0x000ba8; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86362 mov     es, word ptr unk_47A9A ;~ 275C:0BA8
cs=0x275c;eip=0x000bac; 	T(MOV(ax, *(dw*)(raddr(es,si+2))));	// 86364 mov     ax, es:[si+2] ;~ 275C:0BAC
cs=0x275c;eip=0x000bb0; 	T(MOV(di, ax));	// 86365 mov     di, ax ;~ 275C:0BB0
cs=0x275c;eip=0x000bb2; 	T(AND(ax, *(dw*)((&unk_570c4))));	// 86366 and     ax, word ptr unk_570C4 ;~ 275C:0BB2
cs=0x275c;eip=0x000bb6; 	T(CMP(ax, *(dw*)((&unk_570c4))));	// 86367 cmp     ax, word ptr unk_570C4 ;~ 275C:0BB6
cs=0x275c;eip=0x000bba; 	R(JNZ(loc_36736));	// 86368 jnz     short loc_36736 ;~ 275C:0BBA
cs=0x275c;eip=0x000bbc; 	T(CMP(si, *(dw*)((&unk_570ca))));	// 86369 cmp     si, word ptr unk_570CA ;~ 275C:0BBC
cs=0x275c;eip=0x000bc0; 	R(JZ(loc_36736));	// 86370 jz      short loc_36736 ;~ 275C:0BC0
cs=0x275c;eip=0x000bc2; 	T(CMP(unk_570fe, 0));	// 86371 cmp     byte ptr unk_570FE, 0 ;~ 275C:0BC2
cs=0x275c;eip=0x000bc7; 	R(JNZ(loc_3678a));	// 86372 jnz     short loc_3678A ;~ 275C:0BC7
cs=0x275c;eip=0x000bc9; 	T(MOV(ax, di));	// 86373 mov     ax, di ;~ 275C:0BC9
cs=0x275c;eip=0x000bcb; 	T(AND(ax, 0x820));	// 86374 and     ax, 820h ;~ 275C:0BCB
cs=0x275c;eip=0x000bce; 	T(CMP(ax, 0x800));	// 86375 cmp     ax, 800h ;~ 275C:0BCE
cs=0x275c;eip=0x000bd1; 	R(JNZ(loc_3678a));	// 86376 jnz     short loc_3678A ;~ 275C:0BD1
cs=0x275c;eip=0x000bd3; 	T(MOV(bx, si));	// 86377 mov     bx, si ;~ 275C:0BD3
cs=0x275c;eip=0x000bd5; 	T(ADD(bx, 0x12));	// 86378 add     bx, 12h ;~ 275C:0BD5
cs=0x275c;eip=0x000bd8; 	T(TEST(di, 2));	// 86379 test    di, 2 ;~ 275C:0BD8
cs=0x275c;eip=0x000bdc; 	R(JNZ(loc_36781));	// 86380 jnz     short loc_36781 ;~ 275C:0BDC
cs=0x275c;eip=0x000bde; 	T(ADD(bx, 6));	// 86381 add     bx, 6 ;~ 275C:0BDE
loc_36781:
	// 9891 
cs=0x275c;eip=0x000be1; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 86384 mov     bx, es:[bx] ;~ 275C:0BE1
cs=0x275c;eip=0x000be4; 	T(TEST(*(raddr(ds,bx+0x16)), 4));	// 86385 test    byte ptr [bx+16h], 4 ;~ 275C:0BE4
cs=0x275c;eip=0x000be8; 	R(JNZ(loc_36736));	// 86386 jnz     short loc_36736 ;~ 275C:0BE8
loc_3678a:
	// 9892 
cs=0x275c;eip=0x000bea; 	T(MOV(bx, si));	// 86390 mov     bx, si ;~ 275C:0BEA
cs=0x275c;eip=0x000bec; 	R(CALL(sub_360ed,0));	// 86391 call    sub_360ED ;~ 275C:0BEC
cs=0x275c;eip=0x000bef; 	R(JNC(loc_36736));	// 86392 jnb     short loc_36736 ;~ 275C:0BEF
cs=0x275c;eip=0x000bf1; 	T(TEST(di, 0x20));	// 86393 test    di, 20h ;~ 275C:0BF1
cs=0x275c;eip=0x000bf5; 	R(JZ(loc_367a8));	// 86394 jz      short loc_367A8 ;~ 275C:0BF5
cs=0x275c;eip=0x000bf7; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86395 mov     es, word ptr unk_47A9A ;~ 275C:0BF7
cs=0x275c;eip=0x000bfb; 	X(PUSH(*(dw*)(raddr(es,si+0x18))));	// 86396 push    word ptr es:[si+18h] ;~ 275C:0BFB
cs=0x275c;eip=0x000bff; 	R(CALL(sub_367e0,0));	// 86397 call    sub_367E0 ;~ 275C:0BFF
cs=0x275c;eip=0x000c02; 	T(OR(ax, ax));	// 86398 or      ax, ax ;~ 275C:0C02
cs=0x275c;eip=0x000c04; 	R(JNZ(loc_367da));	// 86399 jnz     short loc_367DA ;~ 275C:0C04
cs=0x275c;eip=0x000c06; 	R(JMP(loc_36736));	// 86400 jmp     short loc_36736 ;~ 275C:0C06
loc_367a8:
	// 9893 
cs=0x275c;eip=0x000c08; 	T(CMP(unk_570fe, 0));	// 86404 cmp     byte ptr unk_570FE, 0 ;~ 275C:0C08
cs=0x275c;eip=0x000c0d; 	R(JNZ(loc_367d3));	// 86405 jnz     short loc_367D3 ;~ 275C:0C0D
cs=0x275c;eip=0x000c0f; 	T(TEST(di, 0x800));	// 86406 test    di, 800h ;~ 275C:0C0F
cs=0x275c;eip=0x000c13; 	R(JZ(loc_367d3));	// 86407 jz      short loc_367D3 ;~ 275C:0C13
cs=0x275c;eip=0x000c15; 	T(MOV(bx, si));	// 86408 mov     bx, si ;~ 275C:0C15
cs=0x275c;eip=0x000c17; 	T(ADD(bx, 0x12));	// 86409 add     bx, 12h ;~ 275C:0C17
cs=0x275c;eip=0x000c1a; 	T(TEST(di, 2));	// 86410 test    di, 2 ;~ 275C:0C1A
cs=0x275c;eip=0x000c1e; 	R(JNZ(loc_367c3));	// 86411 jnz     short loc_367C3 ;~ 275C:0C1E
cs=0x275c;eip=0x000c20; 	T(ADD(bx, 6));	// 86412 add     bx, 6 ;~ 275C:0C20
loc_367c3:
	// 9894 
cs=0x275c;eip=0x000c23; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86415 mov     es, word ptr unk_47A9A ;~ 275C:0C23
cs=0x275c;eip=0x000c27; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 86416 mov     bx, es:[bx] ;~ 275C:0C27
cs=0x275c;eip=0x000c2a; 	T(TEST(*(raddr(ds,bx+0x16)), 4));	// 86417 test    byte ptr [bx+16h], 4 ;~ 275C:0C2A
cs=0x275c;eip=0x000c2e; 	R(JZ(loc_367d3));	// 86418 jz      short loc_367D3 ;~ 275C:0C2E
cs=0x275c;eip=0x000c30; 	R(JMP(loc_36736));	// 86419 jmp     loc_36736 ;~ 275C:0C30
loc_367d3:
	// 9895 
cs=0x275c;eip=0x000c33; 	T(MOV(ax, si));	// 86424 mov     ax, si ;~ 275C:0C33
cs=0x275c;eip=0x000c35; 	R(JMP(loc_367da));	// 86425 jmp     short loc_367DA ;~ 275C:0C35
loc_367d8:
	// 9896 
cs=0x275c;eip=0x000c38; 	T(XOR(ax, ax));	// 86430 xor     ax, ax ;~ 275C:0C38
loc_367da:
	// 9897 
cs=0x275c;eip=0x000c3a; 	X(POP(di));	// 86434 pop     di ;~ 275C:0C3A
cs=0x275c;eip=0x000c3b; 	X(POP(si));	// 86435 pop     si ;~ 275C:0C3B
cs=0x275c;eip=0x000c3c; 	X(POP(bp));	// 86436 pop     bp ;~ 275C:0C3C
cs=0x275c;eip=0x000c3d; 	R(RETN(4));	// 86437 retn    4 ;~ 275C:0C3D
sub_367e0:
	// 86445 
#undef arg_0
#define arg_0 4
	// 86448 arg_0           = word ptr  4 ;~ 275C:0C40
cs=0x275c;eip=0x000c40; 	X(PUSH(bp));	// 86450 push    bp ;~ 275C:0C40
cs=0x275c;eip=0x000c41; 	T(MOV(bp, sp));	// 86451 mov     bp, sp ;~ 275C:0C41
cs=0x275c;eip=0x000c43; 	X(PUSH(si));	// 86452 push    si ;~ 275C:0C43
cs=0x275c;eip=0x000c44; 	X(PUSH(di));	// 86453 push    di ;~ 275C:0C44
cs=0x275c;eip=0x000c45; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 86454 mov     si, [bp+arg_0] ;~ 275C:0C45
cs=0x275c;eip=0x000c48; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86455 mov     es, word ptr unk_47A9A ;~ 275C:0C48
cs=0x275c;eip=0x000c4c; 	R(JMP(loc_367f6));	// 86456 jmp     short loc_367F6 ;~ 275C:0C4C
loc_367ee:
	// 9898 
cs=0x275c;eip=0x000c4e; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86461 mov     es, word ptr unk_47A9A ;~ 275C:0C4E
cs=0x275c;eip=0x000c52; 	T(MOV(si, *(dw*)(raddr(es,si+4))));	// 86462 mov     si, es:[si+4] ;~ 275C:0C52
loc_367f6:
	// 9899 
cs=0x275c;eip=0x000c56; 	T(OR(si, si));	// 86465 or      si, si ;~ 275C:0C56
cs=0x275c;eip=0x000c58; 	R(JNZ(loc_367fd));	// 86466 jnz     short loc_367FD ;~ 275C:0C58
cs=0x275c;eip=0x000c5a; 	R(JMP(loc_36889));	// 86467 jmp     loc_36889 ;~ 275C:0C5A
loc_367fd:
	// 9900 
cs=0x275c;eip=0x000c5d; 	T(MOV(ax, *(dw*)(raddr(es,si+2))));	// 86471 mov     ax, es:[si+2] ;~ 275C:0C5D
cs=0x275c;eip=0x000c61; 	T(MOV(di, ax));	// 86472 mov     di, ax ;~ 275C:0C61
cs=0x275c;eip=0x000c63; 	T(AND(ax, *(dw*)((&unk_570c4))));	// 86473 and     ax, word ptr unk_570C4 ;~ 275C:0C63
cs=0x275c;eip=0x000c67; 	T(CMP(ax, *(dw*)((&unk_570c4))));	// 86474 cmp     ax, word ptr unk_570C4 ;~ 275C:0C67
cs=0x275c;eip=0x000c6b; 	R(JNZ(loc_367ee));	// 86475 jnz     short loc_367EE ;~ 275C:0C6B
cs=0x275c;eip=0x000c6d; 	T(CMP(si, *(dw*)((&unk_570ca))));	// 86476 cmp     si, word ptr unk_570CA ;~ 275C:0C6D
cs=0x275c;eip=0x000c71; 	R(JZ(loc_367ee));	// 86477 jz      short loc_367EE ;~ 275C:0C71
cs=0x275c;eip=0x000c73; 	T(CMP(unk_570fe, 0));	// 86478 cmp     byte ptr unk_570FE, 0 ;~ 275C:0C73
cs=0x275c;eip=0x000c78; 	R(JNZ(loc_3683b));	// 86479 jnz     short loc_3683B ;~ 275C:0C78
cs=0x275c;eip=0x000c7a; 	T(MOV(ax, di));	// 86480 mov     ax, di ;~ 275C:0C7A
cs=0x275c;eip=0x000c7c; 	T(AND(ax, 0x820));	// 86481 and     ax, 820h ;~ 275C:0C7C
cs=0x275c;eip=0x000c7f; 	T(CMP(ax, 0x800));	// 86482 cmp     ax, 800h ;~ 275C:0C7F
cs=0x275c;eip=0x000c82; 	R(JNZ(loc_3683b));	// 86483 jnz     short loc_3683B ;~ 275C:0C82
cs=0x275c;eip=0x000c84; 	T(MOV(bx, si));	// 86484 mov     bx, si ;~ 275C:0C84
cs=0x275c;eip=0x000c86; 	T(ADD(bx, 0x12));	// 86485 add     bx, 12h ;~ 275C:0C86
cs=0x275c;eip=0x000c89; 	T(TEST(di, 2));	// 86486 test    di, 2 ;~ 275C:0C89
cs=0x275c;eip=0x000c8d; 	R(JNZ(loc_36832));	// 86487 jnz     short loc_36832 ;~ 275C:0C8D
cs=0x275c;eip=0x000c8f; 	T(ADD(bx, 6));	// 86488 add     bx, 6 ;~ 275C:0C8F
loc_36832:
	// 9901 
cs=0x275c;eip=0x000c92; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 86491 mov     bx, es:[bx] ;~ 275C:0C92
cs=0x275c;eip=0x000c95; 	T(TEST(*(raddr(ds,bx+0x16)), 4));	// 86492 test    byte ptr [bx+16h], 4 ;~ 275C:0C95
cs=0x275c;eip=0x000c99; 	R(JNZ(loc_367ee));	// 86493 jnz     short loc_367EE ;~ 275C:0C99
loc_3683b:
	// 9902 
cs=0x275c;eip=0x000c9b; 	T(MOV(bx, si));	// 86497 mov     bx, si ;~ 275C:0C9B
cs=0x275c;eip=0x000c9d; 	R(CALL(sub_360ed,0));	// 86498 call    sub_360ED ;~ 275C:0C9D
cs=0x275c;eip=0x000ca0; 	R(JNC(loc_367ee));	// 86499 jnb     short loc_367EE ;~ 275C:0CA0
cs=0x275c;eip=0x000ca2; 	T(TEST(di, 0x20));	// 86500 test    di, 20h ;~ 275C:0CA2
cs=0x275c;eip=0x000ca6; 	R(JZ(loc_36859));	// 86501 jz      short loc_36859 ;~ 275C:0CA6
cs=0x275c;eip=0x000ca8; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86502 mov     es, word ptr unk_47A9A ;~ 275C:0CA8
cs=0x275c;eip=0x000cac; 	X(PUSH(*(dw*)(raddr(es,si+0x18))));	// 86503 push    word ptr es:[si+18h] ;~ 275C:0CAC
cs=0x275c;eip=0x000cb0; 	R(CALL(sub_367e0,0));	// 86504 call    sub_367E0 ;~ 275C:0CB0
cs=0x275c;eip=0x000cb3; 	T(OR(ax, ax));	// 86505 or      ax, ax ;~ 275C:0CB3
cs=0x275c;eip=0x000cb5; 	R(JNZ(loc_3688b));	// 86506 jnz     short loc_3688B ;~ 275C:0CB5
cs=0x275c;eip=0x000cb7; 	R(JMP(loc_367ee));	// 86507 jmp     short loc_367EE ;~ 275C:0CB7
loc_36859:
	// 9903 
cs=0x275c;eip=0x000cb9; 	T(CMP(unk_570fe, 0));	// 86511 cmp     byte ptr unk_570FE, 0 ;~ 275C:0CB9
cs=0x275c;eip=0x000cbe; 	R(JNZ(loc_36884));	// 86512 jnz     short loc_36884 ;~ 275C:0CBE
cs=0x275c;eip=0x000cc0; 	T(TEST(di, 0x800));	// 86513 test    di, 800h ;~ 275C:0CC0
cs=0x275c;eip=0x000cc4; 	R(JZ(loc_36884));	// 86514 jz      short loc_36884 ;~ 275C:0CC4
cs=0x275c;eip=0x000cc6; 	T(MOV(bx, si));	// 86515 mov     bx, si ;~ 275C:0CC6
cs=0x275c;eip=0x000cc8; 	T(ADD(bx, 0x12));	// 86516 add     bx, 12h ;~ 275C:0CC8
cs=0x275c;eip=0x000ccb; 	T(TEST(di, 2));	// 86517 test    di, 2 ;~ 275C:0CCB
cs=0x275c;eip=0x000ccf; 	R(JNZ(loc_36874));	// 86518 jnz     short loc_36874 ;~ 275C:0CCF
cs=0x275c;eip=0x000cd1; 	T(ADD(bx, 6));	// 86519 add     bx, 6 ;~ 275C:0CD1
loc_36874:
	// 9904 
cs=0x275c;eip=0x000cd4; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86522 mov     es, word ptr unk_47A9A ;~ 275C:0CD4
cs=0x275c;eip=0x000cd8; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 86523 mov     bx, es:[bx] ;~ 275C:0CD8
cs=0x275c;eip=0x000cdb; 	T(TEST(*(raddr(ds,bx+0x16)), 4));	// 86524 test    byte ptr [bx+16h], 4 ;~ 275C:0CDB
cs=0x275c;eip=0x000cdf; 	R(JZ(loc_36884));	// 86525 jz      short loc_36884 ;~ 275C:0CDF
cs=0x275c;eip=0x000ce1; 	R(JMP(loc_367ee));	// 86526 jmp     loc_367EE ;~ 275C:0CE1
loc_36884:
	// 9905 
cs=0x275c;eip=0x000ce4; 	T(MOV(ax, si));	// 86531 mov     ax, si ;~ 275C:0CE4
cs=0x275c;eip=0x000ce6; 	R(JMP(loc_3688b));	// 86532 jmp     short loc_3688B ;~ 275C:0CE6
loc_36889:
	// 9906 
cs=0x275c;eip=0x000ce9; 	T(XOR(ax, ax));	// 86538 xor     ax, ax ;~ 275C:0CE9
loc_3688b:
	// 9907 
cs=0x275c;eip=0x000ceb; 	X(POP(di));	// 86542 pop     di ;~ 275C:0CEB
cs=0x275c;eip=0x000cec; 	X(POP(si));	// 86543 pop     si ;~ 275C:0CEC
cs=0x275c;eip=0x000ced; 	X(POP(bp));	// 86544 pop     bp ;~ 275C:0CED
cs=0x275c;eip=0x000cee; 	R(RETN(2));	// 86545 retn    2 ;~ 275C:0CEE
sub_36891:
	// 86552 
cs=0x275c;eip=0x000cf1; 	T(CMP(*(raddr(ds,bx)), 0));	// 86554 cmp     byte ptr [bx], 0 ;~ 275C:0CF1
cs=0x275c;eip=0x000cf4; 	R(JNZ(loc_368b0));	// 86555 jnz     short loc_368B0 ;~ 275C:0CF4
loc_36896:
	// 9908 
cs=0x275c;eip=0x000cf6; 	T(XOR(ax, ax));	// 86558 xor     ax, ax ;~ 275C:0CF6
cs=0x275c;eip=0x000cf8; 	T(CMP(dx, *(dw*)(raddr(ds,bx+3))));	// 86559 cmp     dx, [bx+3] ;~ 275C:0CF8
cs=0x275c;eip=0x000cfb; 	T(CMC);	// 86560 cmc ;~ 275C:0CFB
cs=0x275c;eip=0x000cfc; 	T(RCL(ax, 1));	// 86561 rcl     ax, 1 ;~ 275C:0CFC
cs=0x275c;eip=0x000cfe; 	T(CMP(cx, *(dw*)(raddr(ds,bx+1))));	// 86562 cmp     cx, [bx+1] ;~ 275C:0CFE
cs=0x275c;eip=0x000d01; 	T(CMC);	// 86563 cmc ;~ 275C:0D01
cs=0x275c;eip=0x000d02; 	T(RCL(ax, 1));	// 86564 rcl     ax, 1 ;~ 275C:0D02
cs=0x275c;eip=0x000d04; 	T(SHL(ax, 1));	// 86565 shl     ax, 1 ;~ 275C:0D04
cs=0x275c;eip=0x000d06; 	T(ADD(bx, ax));	// 86566 add     bx, ax ;~ 275C:0D06
cs=0x275c;eip=0x000d08; 	T(MOV(bx, *(dw*)(raddr(ds,bx+5))));	// 86567 mov     bx, [bx+5] ;~ 275C:0D08
cs=0x275c;eip=0x000d0b; 	T(CMP(*(raddr(ds,bx)), 0));	// 86568 cmp     byte ptr [bx], 0 ;~ 275C:0D0B
cs=0x275c;eip=0x000d0e; 	R(JZ(loc_36896));	// 86569 jz      short loc_36896 ;~ 275C:0D0E
loc_368b0:
	// 9909 
cs=0x275c;eip=0x000d10; 	T(MOV(ax, ss));	// 86572 mov     ax, ss ;~ 275C:0D10
cs=0x275c;eip=0x000d12; 	T(MOV(ds, ax));	// 86573 mov     ds, ax ;~ 275C:0D12
cs=0x275c;eip=0x000d14; 	T(MOV(ax, bx));	// 86574 mov     ax, bx ;~ 275C:0D14
cs=0x275c;eip=0x000d16; 	R(RETN(0));	// 86575 retn ;~ 275C:0D16
sub_368b7:
	// 86583 
#undef var_8
#define var_8 -8
	// 86586 var_8           = word ptr -8 ;~ 275C:0D17
#undef var_6
#define var_6 -6
	// 86587 var_6           = word ptr -6 ;~ 275C:0D17
#undef arg_0
#define arg_0 4
	// 86588 arg_0           = word ptr  4 ;~ 275C:0D17
#undef arg_2
#define arg_2 6
	// 86589 arg_2           = word ptr  6 ;~ 275C:0D17
#undef arg_4
#define arg_4 8
	// 86590 arg_4           = word ptr  8 ;~ 275C:0D17
#undef arg_6
#define arg_6 0x0A
	// 86591 arg_6           = word ptr  0Ah ;~ 275C:0D17
cs=0x275c;eip=0x000d17; 	X(PUSH(bp));	// 86593 push    bp ;~ 275C:0D17
cs=0x275c;eip=0x000d18; 	T(MOV(bp, sp));	// 86594 mov     bp, sp ;~ 275C:0D18
cs=0x275c;eip=0x000d1a; 	X(PUSH(si));	// 86595 push    si ;~ 275C:0D1A
cs=0x275c;eip=0x000d1b; 	X(PUSH(di));	// 86596 push    di ;~ 275C:0D1B
cs=0x275c;eip=0x000d1c; 	T(SUB(sp, 4));	// 86597 sub     sp, 4 ;~ 275C:0D1C
cs=0x275c;eip=0x000d1f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 86598 mov     ax, [bp+arg_2] ;~ 275C:0D1F
cs=0x275c;eip=0x000d22; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 86599 sub     ax, [bp+arg_6] ;~ 275C:0D22
cs=0x275c;eip=0x000d25; 	T(INC(ax));	// 86600 inc     ax ;~ 275C:0D25
cs=0x275c;eip=0x000d26; 	X(MOV(*(dw*)((&unk_4a0b4)), ax));	// 86601 mov     word ptr unk_4A0B4, ax ;~ 275C:0D26
cs=0x275c;eip=0x000d29; 	T(SHR(ax, 1));	// 86602 shr     ax, 1 ;~ 275C:0D29
cs=0x275c;eip=0x000d2b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 86603 add     ax, [bp+arg_6] ;~ 275C:0D2B
cs=0x275c;eip=0x000d2e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 86604 mov     [bp+var_6], ax ;~ 275C:0D2E
cs=0x275c;eip=0x000d31; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 86605 mov     ax, [bp+arg_0] ;~ 275C:0D31
cs=0x275c;eip=0x000d34; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 86606 sub     ax, [bp+arg_4] ;~ 275C:0D34
cs=0x275c;eip=0x000d37; 	T(INC(ax));	// 86607 inc     ax ;~ 275C:0D37
cs=0x275c;eip=0x000d38; 	X(MOV(*(dw*)((&unk_4a0b6)), ax));	// 86608 mov     word ptr unk_4A0B6, ax ;~ 275C:0D38
cs=0x275c;eip=0x000d3b; 	T(SHR(ax, 1));	// 86609 shr     ax, 1 ;~ 275C:0D3B
cs=0x275c;eip=0x000d3d; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 86610 add     ax, [bp+arg_4] ;~ 275C:0D3D
cs=0x275c;eip=0x000d40; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 86611 mov     [bp+var_8], ax ;~ 275C:0D40
cs=0x275c;eip=0x000d43; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 86612 mov     ax, [bp+arg_6] ;~ 275C:0D43
cs=0x275c;eip=0x000d46; 	X(MOV(*(dw*)((&unk_4a0a0)), ax));	// 86613 mov     word ptr unk_4A0A0, ax ;~ 275C:0D46
cs=0x275c;eip=0x000d49; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 86614 mov     ax, [bp+arg_2] ;~ 275C:0D49
cs=0x275c;eip=0x000d4c; 	X(MOV(*(dw*)((&unk_4a0a2)), ax));	// 86615 mov     word ptr unk_4A0A2, ax ;~ 275C:0D4C
cs=0x275c;eip=0x000d4f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 86616 mov     ax, [bp+arg_4] ;~ 275C:0D4F
cs=0x275c;eip=0x000d52; 	X(MOV(*(dw*)((&unk_4a0a4)), ax));	// 86617 mov     word ptr unk_4A0A4, ax ;~ 275C:0D52
cs=0x275c;eip=0x000d55; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 86618 mov     ax, [bp+arg_0] ;~ 275C:0D55
cs=0x275c;eip=0x000d58; 	X(MOV(*(dw*)((&unk_4a0a6)), ax));	// 86619 mov     word ptr unk_4A0A6, ax ;~ 275C:0D58
cs=0x275c;eip=0x000d5b; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_6+1))));	// 86620 mov     al, byte ptr [bp+arg_6+1] ;~ 275C:0D5B
cs=0x275c;eip=0x000d5e; 	T(CBW);	// 86621 cbw ;~ 275C:0D5E
cs=0x275c;eip=0x000d5f; 	T(DEC(ax));	// 86622 dec     ax ;~ 275C:0D5F
cs=0x275c;eip=0x000d60; 	R(JNS(loc_36904));	// 86623 jns     short loc_36904 ;~ 275C:0D60
cs=0x275c;eip=0x000d62; 	T(XOR(ax, ax));	// 86624 xor     ax, ax ;~ 275C:0D62
loc_36904:
	// 9910 
cs=0x275c;eip=0x000d64; 	X(MOV(*(dw*)((&unk_4a0ac)), ax));	// 86627 mov     word ptr unk_4A0AC, ax ;~ 275C:0D64
cs=0x275c;eip=0x000d67; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_2+1))));	// 86628 mov     al, byte ptr [bp+arg_2+1] ;~ 275C:0D67
cs=0x275c;eip=0x000d6a; 	T(CBW);	// 86629 cbw ;~ 275C:0D6A
cs=0x275c;eip=0x000d6b; 	T(INC(ax));	// 86630 inc     ax ;~ 275C:0D6B
cs=0x275c;eip=0x000d6c; 	T(CMP(ax, *(dw*)((&unk_47a94))));	// 86631 cmp     ax, word ptr unk_47A94 ;~ 275C:0D6C
cs=0x275c;eip=0x000d70; 	R(JL(loc_36916));	// 86632 jl      short loc_36916 ;~ 275C:0D70
cs=0x275c;eip=0x000d72; 	T(MOV(ax, *(dw*)((&unk_47a94))));	// 86633 mov     ax, word ptr unk_47A94 ;~ 275C:0D72
cs=0x275c;eip=0x000d75; 	T(DEC(ax));	// 86634 dec     ax ;~ 275C:0D75
loc_36916:
	// 9911 
cs=0x275c;eip=0x000d76; 	X(MOV(*(dw*)((&unk_4a0ae)), ax));	// 86637 mov     word ptr unk_4A0AE, ax ;~ 275C:0D76
cs=0x275c;eip=0x000d79; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_4+1))));	// 86638 mov     al, byte ptr [bp+arg_4+1] ;~ 275C:0D79
cs=0x275c;eip=0x000d7c; 	T(CBW);	// 86639 cbw ;~ 275C:0D7C
cs=0x275c;eip=0x000d7d; 	T(DEC(ax));	// 86640 dec     ax ;~ 275C:0D7D
cs=0x275c;eip=0x000d7e; 	R(JNS(loc_36922));	// 86641 jns     short loc_36922 ;~ 275C:0D7E
cs=0x275c;eip=0x000d80; 	T(XOR(ax, ax));	// 86642 xor     ax, ax ;~ 275C:0D80
loc_36922:
	// 9912 
cs=0x275c;eip=0x000d82; 	X(MOV(*(dw*)((&unk_4a0b0)), ax));	// 86645 mov     word ptr unk_4A0B0, ax ;~ 275C:0D82
cs=0x275c;eip=0x000d85; 	T(MOV(al, *(db*)(raddr(ss,bp+arg_0+1))));	// 86646 mov     al, byte ptr [bp+arg_0+1] ;~ 275C:0D85
cs=0x275c;eip=0x000d88; 	T(CBW);	// 86647 cbw ;~ 275C:0D88
cs=0x275c;eip=0x000d89; 	T(INC(ax));	// 86648 inc     ax ;~ 275C:0D89
cs=0x275c;eip=0x000d8a; 	T(CMP(ax, *(dw*)((&unk_47a96))));	// 86649 cmp     ax, word ptr unk_47A96 ;~ 275C:0D8A
cs=0x275c;eip=0x000d8e; 	R(JL(loc_36934));	// 86650 jl      short loc_36934 ;~ 275C:0D8E
cs=0x275c;eip=0x000d90; 	T(MOV(ax, *(dw*)((&unk_47a96))));	// 86651 mov     ax, word ptr unk_47A96 ;~ 275C:0D90
cs=0x275c;eip=0x000d93; 	T(DEC(ax));	// 86652 dec     ax ;~ 275C:0D93
loc_36934:
	// 9913 
cs=0x275c;eip=0x000d94; 	X(MOV(*(dw*)((&unk_4a0b2)), ax));	// 86655 mov     word ptr unk_4A0B2, ax ;~ 275C:0D94
cs=0x275c;eip=0x000d97; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 86656 mov     ax, word ptr unk_570C2 ;~ 275C:0D97
cs=0x275c;eip=0x000d9a; 	X(MOV(*(dw*)((&unk_4a0ba)), ax));	// 86657 mov     word ptr unk_4A0BA, ax ;~ 275C:0D9A
cs=0x275c;eip=0x000d9d; 	T(CMP(ax, 0x137B));	// 86658 cmp     ax, 137Bh ;~ 275C:0D9D
cs=0x275c;eip=0x000da0; 	R(JL(loc_36947));	// 86659 jl      short loc_36947 ;~ 275C:0DA0
cs=0x275c;eip=0x000da2; 	R(CALLF(sub_2f82e,0));	// 86660 call    sub_2F82E ;~ 275C:0DA2
loc_36947:
	// 9914 
cs=0x275c;eip=0x000da7; 	T(MOV(cx, 0x0A));	// 86664 mov     cx, 0Ah ;~ 275C:0DA7
cs=0x275c;eip=0x000daa; 	T(CMP(*(dw*)((&unk_4a0b4)), 8));	// 86665 cmp     word ptr unk_4A0B4, 8 ;~ 275C:0DAA
cs=0x275c;eip=0x000daf; 	R(JLE(loc_36958));	// 86666 jle     short loc_36958 ;~ 275C:0DAF
cs=0x275c;eip=0x000db1; 	T(CMP(*(dw*)((&unk_4a0b6)), 8));	// 86667 cmp     word ptr unk_4A0B6, 8 ;~ 275C:0DB1
cs=0x275c;eip=0x000db6; 	R(JG(loc_3695b));	// 86668 jg      short loc_3695B ;~ 275C:0DB6
loc_36958:
	// 9915 
cs=0x275c;eip=0x000db8; 	T(MOV(cx, 0x0FFFF));	// 86671 mov     cx, 0FFFFh ;~ 275C:0DB8
loc_3695b:
	// 9916 
cs=0x275c;eip=0x000dbb; 	X(MOV(*(dw*)((&unk_4a0b8)), ax));	// 86674 mov     word ptr unk_4A0B8, ax ;~ 275C:0DBB
cs=0x275c;eip=0x000dbe; 	T(MOV(di, *(dw*)((&unk_4a0ba))));	// 86675 mov     di, word ptr unk_4A0BA ;~ 275C:0DBE
cs=0x275c;eip=0x000dc2; 	T(ADD(di, 1));	// 86676 add     di, 1 ;~ 275C:0DC2
cs=0x275c;eip=0x000dc5; 	T(MOV(ax, *(dw*)((&unk_4a0ac))));	// 86677 mov     ax, word ptr unk_4A0AC ;~ 275C:0DC5
cs=0x275c;eip=0x000dc8; 	X(MOV(*(dw*)((&unk_4a0a8)), ax));	// 86678 mov     word ptr unk_4A0A8, ax ;~ 275C:0DC8
loc_3696b:
	// 9917 
cs=0x275c;eip=0x000dcb; 	T(MOV(ax, *(dw*)((&unk_4a0b0))));	// 86681 mov     ax, word ptr unk_4A0B0 ;~ 275C:0DCB
cs=0x275c;eip=0x000dce; 	X(MOV(*(dw*)((&unk_4a0aa)), ax));	// 86682 mov     word ptr unk_4A0AA, ax ;~ 275C:0DCE
loc_36971:
	// 9918 
cs=0x275c;eip=0x000dd1; 	T(MOV(bx, *(dw*)((&unk_47a98))));	// 86685 mov     bx, word ptr unk_47A98 ;~ 275C:0DD1
cs=0x275c;eip=0x000dd5; 	T(MOV(ax, *(dw*)((&unk_4a0aa))));	// 86686 mov     ax, word ptr unk_4A0AA ;~ 275C:0DD5
cs=0x275c;eip=0x000dd8; 	X(IMUL1_2(*(dw*)((&unk_47a94))));	// 86687 imul    word ptr unk_47A94 ;~ 275C:0DD8
cs=0x275c;eip=0x000ddc; 	T(ADD(ax, *(dw*)((&unk_4a0a8))));	// 86688 add     ax, word ptr unk_4A0A8 ;~ 275C:0DDC
cs=0x275c;eip=0x000de0; 	T(SHL(ax, 1));	// 86689 shl     ax, 1 ;~ 275C:0DE0
cs=0x275c;eip=0x000de2; 	T(SHL(ax, 1));	// 86690 shl     ax, 1 ;~ 275C:0DE2
cs=0x275c;eip=0x000de4; 	T(ADD(bx, ax));	// 86691 add     bx, ax ;~ 275C:0DE4
cs=0x275c;eip=0x000de6; 	T(MOV(es, *(dw*)((&unk_47a9e))));	// 86692 mov     es, word ptr unk_47A9E ;~ 275C:0DE6
cs=0x275c;eip=0x000dea; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 86693 mov     bx, es:[bx] ;~ 275C:0DEA
cs=0x275c;eip=0x000ded; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86694 mov     es, word ptr unk_47A9A ;~ 275C:0DED
cs=0x275c;eip=0x000df1; 	T(OR(bx, bx));	// 86695 or      bx, bx ;~ 275C:0DF1
cs=0x275c;eip=0x000df3; 	R(JNZ(loc_369a3));	// 86696 jnz     short loc_369A3 ;~ 275C:0DF3
cs=0x275c;eip=0x000df5; 	R(JMP(loc_36a33));	// 86697 jmp     loc_36A33 ;~ 275C:0DF5
loc_36998:
	// 9919 
cs=0x275c;eip=0x000df8; 	T(MOV(bx, *(dw*)(raddr(es,bx+4))));	// 86702 mov     bx, es:[bx+4] ;~ 275C:0DF8
cs=0x275c;eip=0x000dfc; 	T(OR(bx, bx));	// 86703 or      bx, bx ;~ 275C:0DFC
cs=0x275c;eip=0x000dfe; 	R(JNZ(loc_369a3));	// 86704 jnz     short loc_369A3 ;~ 275C:0DFE
cs=0x275c;eip=0x000e00; 	R(JMP(loc_36a33));	// 86705 jmp     loc_36A33 ;~ 275C:0E00
loc_369a3:
	// 9920 
cs=0x275c;eip=0x000e03; 	T(MOV(ax, *(dw*)((&unk_570c4))));	// 86710 mov     ax, word ptr unk_570C4 ;~ 275C:0E03
cs=0x275c;eip=0x000e06; 	T(TEST(*(dw*)(raddr(es,bx+2)), ax));	// 86711 test    es:[bx+2], ax ;~ 275C:0E06
cs=0x275c;eip=0x000e0a; 	R(JZ(loc_36998));	// 86712 jz      short loc_36998 ;~ 275C:0E0A
cs=0x275c;eip=0x000e0c; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 86713 mov     si, es:[bx] ;~ 275C:0E0C
cs=0x275c;eip=0x000e0f; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 86714 mov     ax, es:[bx+6] ;~ 275C:0E0F
cs=0x275c;eip=0x000e13; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 86715 mov     dx, es:[bx+8] ;~ 275C:0E13
cs=0x275c;eip=0x000e17; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x30))));	// 86716 add     ax, [si+30h] ;~ 275C:0E17
cs=0x275c;eip=0x000e1a; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x32))));	// 86717 adc     dx, [si+32h] ;~ 275C:0E1A
cs=0x275c;eip=0x000e1d; 	T(ADD(ax, 0x0C8));	// 86718 add     ax, 0C8h ; 'È' ;~ 275C:0E1D
cs=0x275c;eip=0x000e20; 	T(ADC(dx, 0));	// 86719 adc     dx, 0 ;~ 275C:0E20
cs=0x275c;eip=0x000e23; 	T(CMP(dx, *(dw*)((&unk_4a0a0))));	// 86720 cmp     dx, word ptr unk_4A0A0 ;~ 275C:0E23
cs=0x275c;eip=0x000e27; 	R(JL(loc_36998));	// 86721 jl      short loc_36998 ;~ 275C:0E27
cs=0x275c;eip=0x000e29; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 86722 mov     ax, es:[bx+6] ;~ 275C:0E29
cs=0x275c;eip=0x000e2d; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 86723 mov     dx, es:[bx+8] ;~ 275C:0E2D
cs=0x275c;eip=0x000e31; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x2C))));	// 86724 add     ax, [si+2Ch] ;~ 275C:0E31
cs=0x275c;eip=0x000e34; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x2E))));	// 86725 adc     dx, [si+2Eh] ;~ 275C:0E34
cs=0x275c;eip=0x000e37; 	T(SUB(ax, 0x0C8));	// 86726 sub     ax, 0C8h ; 'È' ;~ 275C:0E37
cs=0x275c;eip=0x000e3a; 	T(SBB(dx, 0));	// 86727 sbb     dx, 0 ;~ 275C:0E3A
cs=0x275c;eip=0x000e3d; 	T(CMP(dx, *(dw*)((&unk_4a0a2))));	// 86728 cmp     dx, word ptr unk_4A0A2 ;~ 275C:0E3D
cs=0x275c;eip=0x000e41; 	R(JGE(loc_36998));	// 86729 jge     short loc_36998 ;~ 275C:0E41
cs=0x275c;eip=0x000e43; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 86730 mov     ax, es:[bx+0Eh] ;~ 275C:0E43
cs=0x275c;eip=0x000e47; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 86731 mov     dx, es:[bx+10h] ;~ 275C:0E47
cs=0x275c;eip=0x000e4b; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x40))));	// 86732 add     ax, [si+40h] ;~ 275C:0E4B
cs=0x275c;eip=0x000e4e; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x42))));	// 86733 adc     dx, [si+42h] ;~ 275C:0E4E
cs=0x275c;eip=0x000e51; 	T(ADD(ax, 0x0C8));	// 86734 add     ax, 0C8h ; 'È' ;~ 275C:0E51
cs=0x275c;eip=0x000e54; 	T(ADC(dx, 0));	// 86735 adc     dx, 0 ;~ 275C:0E54
cs=0x275c;eip=0x000e57; 	T(CMP(dx, *(dw*)((&unk_4a0a4))));	// 86736 cmp     dx, word ptr unk_4A0A4 ;~ 275C:0E57
cs=0x275c;eip=0x000e5b; 	R(JL(loc_36998));	// 86737 jl      short loc_36998 ;~ 275C:0E5B
cs=0x275c;eip=0x000e5d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 86738 mov     ax, es:[bx+0Eh] ;~ 275C:0E5D
cs=0x275c;eip=0x000e61; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 86739 mov     dx, es:[bx+10h] ;~ 275C:0E61
cs=0x275c;eip=0x000e65; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x3C))));	// 86740 add     ax, [si+3Ch] ;~ 275C:0E65
cs=0x275c;eip=0x000e68; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x3E))));	// 86741 adc     dx, [si+3Eh] ;~ 275C:0E68
cs=0x275c;eip=0x000e6b; 	T(SUB(ax, 0x0C8));	// 86742 sub     ax, 0C8h ; 'È' ;~ 275C:0E6B
cs=0x275c;eip=0x000e6e; 	T(SBB(dx, 0));	// 86743 sbb     dx, 0 ;~ 275C:0E6E
cs=0x275c;eip=0x000e71; 	T(CMP(dx, *(dw*)((&unk_4a0a6))));	// 86744 cmp     dx, word ptr unk_4A0A6 ;~ 275C:0E71
cs=0x275c;eip=0x000e75; 	R(JGE(loc_36998));	// 86745 jge     short loc_36998 ;~ 275C:0E75
cs=0x275c;eip=0x000e77; 	T(CMP(di, 0x1388));	// 86746 cmp     di, 1388h ;~ 275C:0E77
cs=0x275c;eip=0x000e7b; 	R(JC(loc_36a22));	// 86747 jb      short loc_36A22 ;~ 275C:0E7B
cs=0x275c;eip=0x000e7d; 	R(CALLF(sub_2f82e,0));	// 86748 call    sub_2F82E ;~ 275C:0E7D
loc_36a22:
	// 9921 
cs=0x275c;eip=0x000e82; 	T(MOV(es, *(dw*)((&unk_570c0))));	// 86752 mov     es, word ptr unk_570C0 ;~ 275C:0E82
cs=0x275c;eip=0x000e86; 	T(MOV(ax, bx));	// 86754 mov     ax, bx ;~ 275C:0E86
cs=0x275c;eip=0x000e88; 	X(STOSW);	// 86755 stosw ;~ 275C:0E88
cs=0x275c;eip=0x000e89; 	T(MOV(es, *(dw*)((&unk_47a9a))));	// 86756 mov     es, word ptr unk_47A9A ;~ 275C:0E89
cs=0x275c;eip=0x000e8d; 	T(DEC(cx));	// 86758 dec     cx ;~ 275C:0E8D
cs=0x275c;eip=0x000e8e; 	R(JZ(loc_36a73));	// 86759 jz      short loc_36A73 ;~ 275C:0E8E
cs=0x275c;eip=0x000e90; 	R(JMP(loc_36998));	// 86760 jmp     loc_36998 ;~ 275C:0E90
loc_36a33:
	// 9922 
cs=0x275c;eip=0x000e93; 	X(INC(*(dw*)((&unk_4a0aa))));	// 86765 inc     word ptr unk_4A0AA ;~ 275C:0E93
cs=0x275c;eip=0x000e97; 	T(MOV(ax, *(dw*)((&unk_4a0aa))));	// 86766 mov     ax, word ptr unk_4A0AA ;~ 275C:0E97
cs=0x275c;eip=0x000e9a; 	T(CMP(ax, *(dw*)((&unk_4a0b2))));	// 86767 cmp     ax, word ptr unk_4A0B2 ;~ 275C:0E9A
cs=0x275c;eip=0x000e9e; 	R(JG(loc_36a43));	// 86768 jg      short loc_36A43 ;~ 275C:0E9E
cs=0x275c;eip=0x000ea0; 	R(JMP(loc_36971));	// 86769 jmp     loc_36971 ;~ 275C:0EA0
loc_36a43:
	// 9923 
cs=0x275c;eip=0x000ea3; 	X(INC(*(dw*)((&unk_4a0a8))));	// 86773 inc     word ptr unk_4A0A8 ;~ 275C:0EA3
cs=0x275c;eip=0x000ea7; 	T(MOV(ax, *(dw*)((&unk_4a0a8))));	// 86774 mov     ax, word ptr unk_4A0A8 ;~ 275C:0EA7
cs=0x275c;eip=0x000eaa; 	T(CMP(ax, *(dw*)((&unk_4a0ae))));	// 86775 cmp     ax, word ptr unk_4A0AE ;~ 275C:0EAA
cs=0x275c;eip=0x000eae; 	R(JG(loc_36a53));	// 86776 jg      short loc_36A53 ;~ 275C:0EAE
cs=0x275c;eip=0x000eb0; 	R(JMP(loc_3696b));	// 86777 jmp     loc_3696B ;~ 275C:0EB0
loc_36a53:
	// 9924 
cs=0x275c;eip=0x000eb3; 	T(MOV(es, *(dw*)((&unk_570c0))));	// 86781 mov     es, word ptr unk_570C0 ;~ 275C:0EB3
cs=0x275c;eip=0x000eb7; 	T(CMP(di, 0x1386));	// 86783 cmp     di, 1386h ;~ 275C:0EB7
cs=0x275c;eip=0x000ebb; 	R(JBE(loc_36a62));	// 86784 jbe     short loc_36A62 ;~ 275C:0EBB
cs=0x275c;eip=0x000ebd; 	R(CALLF(sub_2f82e,0));	// 86785 call    sub_2F82E ;~ 275C:0EBD
loc_36a62:
	// 9925 
cs=0x275c;eip=0x000ec2; 	T(XOR(ax, ax));	// 86789 xor     ax, ax ;~ 275C:0EC2
cs=0x275c;eip=0x000ec4; 	X(STOSW);	// 86790 stosw ;~ 275C:0EC4
cs=0x275c;eip=0x000ec5; 	X(MOV(*(dw*)((&unk_570c2)), di));	// 86791 mov     word ptr unk_570C2, di ;~ 275C:0EC5
cs=0x275c;eip=0x000ec9; 	T(MOV(di, *(dw*)((&unk_4a0ba))));	// 86792 mov     di, word ptr unk_4A0BA ;~ 275C:0EC9
cs=0x275c;eip=0x000ecd; 	X(MOV(*(raddr(es,di)), 1));	// 86793 mov     byte ptr es:[di], 1 ;~ 275C:0ECD
cs=0x275c;eip=0x000ed1; 	R(JMP(loc_36aeb));	// 86794 jmp     short loc_36AEB ;~ 275C:0ED1
loc_36a73:
	// 9926 
cs=0x275c;eip=0x000ed3; 	T(MOV(di, *(dw*)((&unk_4a0ba))));	// 86798 mov     di, word ptr unk_4A0BA ;~ 275C:0ED3
cs=0x275c;eip=0x000ed7; 	T(ax = di+0x0D);	// 86799 lea     ax, [di+0Dh] ;~ 275C:0ED7
cs=0x275c;eip=0x000eda; 	X(MOV(*(dw*)((&unk_570c2)), ax));	// 86800 mov     word ptr unk_570C2, ax ;~ 275C:0EDA
cs=0x275c;eip=0x000edd; 	T(CMP(di, 0x137B));	// 86801 cmp     di, 137Bh ;~ 275C:0EDD
cs=0x275c;eip=0x000ee1; 	R(JC(loc_36a88));	// 86802 jb      short loc_36A88 ;~ 275C:0EE1
cs=0x275c;eip=0x000ee3; 	R(CALLF(sub_2f82e,0));	// 86803 call    sub_2F82E ;~ 275C:0EE3
loc_36a88:
	// 9927 
cs=0x275c;eip=0x000ee8; 	T(MOV(es, *(dw*)((&unk_570c0))));	// 86807 mov     es, word ptr unk_570C0 ;~ 275C:0EE8
cs=0x275c;eip=0x000eec; 	T(XOR(al, al));	// 86808 xor     al, al ;~ 275C:0EEC
cs=0x275c;eip=0x000eee; 	X(STOSB);	// 86809 stosb ;~ 275C:0EEE
cs=0x275c;eip=0x000eef; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 86810 mov     ax, [bp+var_6] ;~ 275C:0EEF
cs=0x275c;eip=0x000ef2; 	X(STOSW);	// 86811 stosw ;~ 275C:0EF2
cs=0x275c;eip=0x000ef3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 86812 mov     ax, [bp+var_8] ;~ 275C:0EF3
cs=0x275c;eip=0x000ef6; 	X(STOSW);	// 86813 stosw ;~ 275C:0EF6
cs=0x275c;eip=0x000ef7; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 86814 mov     ax, word ptr unk_570C2 ;~ 275C:0EF7
cs=0x275c;eip=0x000efa; 	X(STOSW);	// 86815 stosw ;~ 275C:0EFA
cs=0x275c;eip=0x000efb; 	T(MOV(si, es));	// 86816 mov     si, es ;~ 275C:0EFB
cs=0x275c;eip=0x000efd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 86817 push    [bp+arg_6] ;~ 275C:0EFD
cs=0x275c;eip=0x000f00; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 86818 push    [bp+arg_4] ;~ 275C:0F00
cs=0x275c;eip=0x000f03; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 86819 push    [bp+var_6] ;~ 275C:0F03
cs=0x275c;eip=0x000f06; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 86820 push    [bp+var_8] ;~ 275C:0F06
cs=0x275c;eip=0x000f09; 	R(CALL(sub_368b7,0));	// 86821 call    sub_368B7 ;~ 275C:0F09
cs=0x275c;eip=0x000f0c; 	T(MOV(es, si));	// 86822 mov     es, si ;~ 275C:0F0C
cs=0x275c;eip=0x000f0e; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 86823 mov     ax, word ptr unk_570C2 ;~ 275C:0F0E
cs=0x275c;eip=0x000f11; 	X(STOSW);	// 86824 stosw ;~ 275C:0F11
cs=0x275c;eip=0x000f12; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 86825 push    [bp+var_6] ;~ 275C:0F12
cs=0x275c;eip=0x000f15; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 86826 push    [bp+arg_4] ;~ 275C:0F15
cs=0x275c;eip=0x000f18; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 86827 push    [bp+arg_2] ;~ 275C:0F18
cs=0x275c;eip=0x000f1b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 86828 push    [bp+var_8] ;~ 275C:0F1B
cs=0x275c;eip=0x000f1e; 	R(CALL(sub_368b7,0));	// 86829 call    sub_368B7 ;~ 275C:0F1E
cs=0x275c;eip=0x000f21; 	T(MOV(es, si));	// 86830 mov     es, si ;~ 275C:0F21
cs=0x275c;eip=0x000f23; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 86831 mov     ax, word ptr unk_570C2 ;~ 275C:0F23
cs=0x275c;eip=0x000f26; 	X(STOSW);	// 86832 stosw ;~ 275C:0F26
cs=0x275c;eip=0x000f27; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 86833 push    [bp+arg_6] ;~ 275C:0F27
cs=0x275c;eip=0x000f2a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 86834 push    [bp+var_8] ;~ 275C:0F2A
cs=0x275c;eip=0x000f2d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 86835 push    [bp+var_6] ;~ 275C:0F2D
cs=0x275c;eip=0x000f30; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 86836 push    [bp+arg_0] ;~ 275C:0F30
cs=0x275c;eip=0x000f33; 	R(CALL(sub_368b7,0));	// 86837 call    sub_368B7 ;~ 275C:0F33
cs=0x275c;eip=0x000f36; 	T(MOV(es, si));	// 86838 mov     es, si ;~ 275C:0F36
cs=0x275c;eip=0x000f38; 	T(MOV(ax, *(dw*)((&unk_570c2))));	// 86839 mov     ax, word ptr unk_570C2 ;~ 275C:0F38
cs=0x275c;eip=0x000f3b; 	X(STOSW);	// 86840 stosw ;~ 275C:0F3B
cs=0x275c;eip=0x000f3c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 86841 push    [bp+var_6] ;~ 275C:0F3C
cs=0x275c;eip=0x000f3f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 86842 push    [bp+var_8] ;~ 275C:0F3F
cs=0x275c;eip=0x000f42; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 86843 push    [bp+arg_2] ;~ 275C:0F42
cs=0x275c;eip=0x000f45; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 86844 push    [bp+arg_0] ;~ 275C:0F45
cs=0x275c;eip=0x000f48; 	R(CALL(sub_368b7,0));	// 86845 call    sub_368B7 ;~ 275C:0F48
loc_36aeb:
	// 9928 
cs=0x275c;eip=0x000f4b; 	T(ADD(sp, 4));	// 86848 add     sp, 4 ;~ 275C:0F4B
cs=0x275c;eip=0x000f4e; 	X(POP(di));	// 86849 pop     di ;~ 275C:0F4E
cs=0x275c;eip=0x000f4f; 	X(POP(si));	// 86850 pop     si ;~ 275C:0F4F
cs=0x275c;eip=0x000f50; 	X(POP(bp));	// 86851 pop     bp ;~ 275C:0F50
cs=0x275c;eip=0x000f51; 	R(RETN(8));	// 86852 retn    8 ;~ 275C:0F51

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_35be1: 	goto loc_35be1;
        case m2c::kloc_35c10: 	goto loc_35c10;
        case m2c::kloc_35c2d: 	goto loc_35c2d;
        case m2c::kloc_35c6a: 	goto loc_35c6a;
        case m2c::kloc_35c85: 	goto loc_35c85;
        case m2c::kloc_35ca0: 	goto loc_35ca0;
        case m2c::kloc_35cbb: 	goto loc_35cbb;
        case m2c::kloc_35cd6: 	goto loc_35cd6;
        case m2c::kloc_35cf1: 	goto loc_35cf1;
        case m2c::kloc_35eac: 	goto loc_35eac;
        case m2c::kloc_35ee2: 	goto loc_35ee2;
        case m2c::kloc_35eeb: 	goto loc_35eeb;
        case m2c::kloc_35f07: 	goto loc_35f07;
        case m2c::kloc_35f18: 	goto loc_35f18;
        case m2c::kloc_35f2c: 	goto loc_35f2c;
        case m2c::kloc_35f45: 	goto loc_35f45;
        case m2c::kloc_35f4e: 	goto loc_35f4e;
        case m2c::kloc_35f5e: 	goto loc_35f5e;
        case m2c::kloc_35f60: 	goto loc_35f60;
        case m2c::kloc_35f74: 	goto loc_35f74;
        case m2c::kloc_35f7d: 	goto loc_35f7d;
        case m2c::kloc_35f89: 	goto loc_35f89;
        case m2c::kloc_35f92: 	goto loc_35f92;
        case m2c::kloc_35f9e: 	goto loc_35f9e;
        case m2c::kloc_35fa7: 	goto loc_35fa7;
        case m2c::kloc_35fba: 	goto loc_35fba;
        case m2c::kloc_35fc3: 	goto loc_35fc3;
        case m2c::kloc_35fcf: 	goto loc_35fcf;
        case m2c::kloc_35fd8: 	goto loc_35fd8;
        case m2c::kloc_35fe4: 	goto loc_35fe4;
        case m2c::kloc_35fed: 	goto loc_35fed;
        case m2c::kloc_36053: 	goto loc_36053;
        case m2c::kloc_3610b: 	goto loc_3610b;
        case m2c::kloc_361d7: 	goto loc_361d7;
        case m2c::kloc_361db: 	goto loc_361db;
        case m2c::kloc_361e8: 	goto loc_361e8;
        case m2c::kloc_361f3: 	goto loc_361f3;
        case m2c::kloc_3621d: 	goto loc_3621d;
        case m2c::kloc_36237: 	goto loc_36237;
        case m2c::kloc_3625f: 	goto loc_3625f;
        case m2c::kloc_36280: 	goto loc_36280;
        case m2c::kloc_36300: 	goto loc_36300;
        case m2c::kloc_3630c: 	goto loc_3630c;
        case m2c::kloc_36315: 	goto loc_36315;
        case m2c::kloc_36322: 	goto loc_36322;
        case m2c::kloc_36344: 	goto loc_36344;
        case m2c::kloc_3636f: 	goto loc_3636f;
        case m2c::kloc_36397: 	goto loc_36397;
        case m2c::kloc_363bf: 	goto loc_363bf;
        case m2c::kloc_363e7: 	goto loc_363e7;
        case m2c::kloc_3640f: 	goto loc_3640f;
        case m2c::kloc_36437: 	goto loc_36437;
        case m2c::kloc_3643d: 	goto loc_3643d;
        case m2c::kloc_36468: 	goto loc_36468;
        case m2c::kloc_36490: 	goto loc_36490;
        case m2c::kloc_364b8: 	goto loc_364b8;
        case m2c::kloc_364e0: 	goto loc_364e0;
        case m2c::kloc_36508: 	goto loc_36508;
        case m2c::kloc_36530: 	goto loc_36530;
        case m2c::kloc_36536: 	goto loc_36536;
        case m2c::kloc_36549: 	goto loc_36549;
        case m2c::kloc_36567: 	goto loc_36567;
        case m2c::kloc_36576: 	goto loc_36576;
        case m2c::kloc_3658b: 	goto loc_3658b;
        case m2c::kloc_365ba: 	goto loc_365ba;
        case m2c::kloc_3660f: 	goto loc_3660f;
        case m2c::kloc_36610: 	goto loc_36610;
        case m2c::kloc_36640: 	goto loc_36640;
        case m2c::kloc_36643: 	goto loc_36643;
        case m2c::kloc_36658: 	goto loc_36658;
        case m2c::kloc_3665f: 	goto loc_3665f;
        case m2c::kloc_3667b: 	goto loc_3667b;
        case m2c::kloc_36682: 	goto loc_36682;
        case m2c::kloc_3671e: 	goto loc_3671e;
        case m2c::kloc_36736: 	goto loc_36736;
        case m2c::kloc_36748: 	goto loc_36748;
        case m2c::kloc_36781: 	goto loc_36781;
        case m2c::kloc_3678a: 	goto loc_3678a;
        case m2c::kloc_367a8: 	goto loc_367a8;
        case m2c::kloc_367c3: 	goto loc_367c3;
        case m2c::kloc_367d3: 	goto loc_367d3;
        case m2c::kloc_367d8: 	goto loc_367d8;
        case m2c::kloc_367da: 	goto loc_367da;
        case m2c::kloc_367ee: 	goto loc_367ee;
        case m2c::kloc_367f6: 	goto loc_367f6;
        case m2c::kloc_367fd: 	goto loc_367fd;
        case m2c::kloc_36832: 	goto loc_36832;
        case m2c::kloc_3683b: 	goto loc_3683b;
        case m2c::kloc_36859: 	goto loc_36859;
        case m2c::kloc_36874: 	goto loc_36874;
        case m2c::kloc_36884: 	goto loc_36884;
        case m2c::kloc_36889: 	goto loc_36889;
        case m2c::kloc_3688b: 	goto loc_3688b;
        case m2c::kloc_36896: 	goto loc_36896;
        case m2c::kloc_368b0: 	goto loc_368b0;
        case m2c::kloc_36904: 	goto loc_36904;
        case m2c::kloc_36916: 	goto loc_36916;
        case m2c::kloc_36922: 	goto loc_36922;
        case m2c::kloc_36934: 	goto loc_36934;
        case m2c::kloc_36947: 	goto loc_36947;
        case m2c::kloc_36958: 	goto loc_36958;
        case m2c::kloc_3695b: 	goto loc_3695b;
        case m2c::kloc_3696b: 	goto loc_3696b;
        case m2c::kloc_36971: 	goto loc_36971;
        case m2c::kloc_36998: 	goto loc_36998;
        case m2c::kloc_369a3: 	goto loc_369a3;
        case m2c::kloc_36a22: 	goto loc_36a22;
        case m2c::kloc_36a33: 	goto loc_36a33;
        case m2c::kloc_36a43: 	goto loc_36a43;
        case m2c::kloc_36a53: 	goto loc_36a53;
        case m2c::kloc_36a62: 	goto loc_36a62;
        case m2c::kloc_36a73: 	goto loc_36a73;
        case m2c::kloc_36a88: 	goto loc_36a88;
        case m2c::kloc_36aeb: 	goto loc_36aeb;
        case m2c::klocret_35c43: 	goto locret_35c43;
        case m2c::klocret_3609d: 	goto locret_3609d;
        case m2c::kseg023_proc: 	goto seg023_proc;
        case m2c::ksub_35bae: 	goto sub_35bae;
        case m2c::ksub_35bc3: 	goto sub_35bc3;
        case m2c::ksub_35c17: 	goto sub_35c17;
        case m2c::ksub_35c44: 	goto sub_35c44;
        case m2c::ksub_35cf4: 	goto sub_35cf4;
        case m2c::ksub_35f66: 	goto sub_35f66;
        case m2c::ksub_35fac: 	goto sub_35fac;
        case m2c::ksub_35ff2: 	goto sub_35ff2;
        case m2c::ksub_3605a: 	goto sub_3605a;
        case m2c::ksub_3609e: 	goto sub_3609e;
        case m2c::ksub_360ed: 	goto sub_360ed;
        case m2c::ksub_36619: 	goto sub_36619;
        case m2c::ksub_36723: 	goto sub_36723;
        case m2c::ksub_367e0: 	goto sub_367e0;
        case m2c::ksub_36891: 	goto sub_36891;
        case m2c::ksub_368b7: 	goto sub_368b7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

