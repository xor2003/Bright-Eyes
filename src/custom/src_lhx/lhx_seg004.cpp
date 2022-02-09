/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group4(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group4:
    _begin:
sub_2d9cc:
	// 65886 
#undef var_240
#define var_240 -0x240
	// 65888 var_240         = word ptr -240h ;~ 1F3E:000C
#undef var_23e
#define var_23e -0x23E
	// 65889 var_23E         = word ptr -23Eh ;~ 1F3E:000C
#undef var_23c
#define var_23c -0x23C
	// 65890 var_23C         = word ptr -23Ch ;~ 1F3E:000C
#undef var_23a
#define var_23a -0x23A
	// 65891 var_23A         = word ptr -23Ah ;~ 1F3E:000C
#undef var_238
#define var_238 -0x238
	// 65892 var_238         = word ptr -238h ;~ 1F3E:000C
#undef var_234
#define var_234 -0x234
	// 65893 var_234         = byte ptr -234h ;~ 1F3E:000C
#undef var_230
#define var_230 -0x230
	// 65894 var_230         = word ptr -230h ;~ 1F3E:000C
#undef var_22e
#define var_22e -0x22E
	// 65895 var_22E         = byte ptr -22Eh ;~ 1F3E:000C
#undef var_21a
#define var_21a -0x21A
	// 65896 var_21A         = word ptr -21Ah ;~ 1F3E:000C
#undef var_218
#define var_218 -0x218
	// 65897 var_218         = word ptr -218h ;~ 1F3E:000C
#undef var_214
#define var_214 -0x214
	// 65898 var_214         = word ptr -214h ;~ 1F3E:000C
#undef var_10
#define var_10 -0x10
	// 65899 var_10          = dword ptr -10h ;~ 1F3E:000C
#undef var_c
#define var_c -0x0C
	// 65900 var_C           = byte ptr -0Ch ;~ 1F3E:000C
#undef var_a
#define var_a -0x0A
	// 65901 var_A           = word ptr -0Ah ;~ 1F3E:000C
#undef var_8
#define var_8 -8
	// 65902 var_8           = dword ptr -8 ;~ 1F3E:000C
#undef var_4
#define var_4 -4
	// 65903 var_4           = dword ptr -4 ;~ 1F3E:000C
cs=0x1f3e;eip=0x00000c; 	X(PUSH(bp));	// 65905 push    bp ;~ 1F3E:000C
cs=0x1f3e;eip=0x00000d; 	T(MOV(bp, sp));	// 65906 mov     bp, sp ;~ 1F3E:000D
cs=0x1f3e;eip=0x00000f; 	T(SUB(sp, 0x240));	// 65907 sub     sp, 240h ;~ 1F3E:000F
cs=0x1f3e;eip=0x000013; 	X(PUSH(di));	// 65908 push    di ;~ 1F3E:0013
cs=0x1f3e;eip=0x000014; 	X(PUSH(si));	// 65909 push    si ;~ 1F3E:0014
cs=0x1f3e;eip=0x000015; 	X(PUSH(cs));	// 65910 push    cs ;~ 1F3E:0015
cs=0x1f3e;eip=0x000016; 	R(CALL(sub_2db40,0));	// 65911 call    near ptr sub_2DB40 ;~ 1F3E:0016
cs=0x1f3e;eip=0x000019; 	T(MOV(ax, 0x224));	// 65912 mov     ax, 224h ;~ 1F3E:0019
cs=0x1f3e;eip=0x00001c; 	X(PUSH(ax));	// 65913 push    ax ;~ 1F3E:001C
cs=0x1f3e;eip=0x00001d; 	T(ax = bp+var_a);	// 65914 lea     ax, [bp+var_A] ;~ 1F3E:001D
cs=0x1f3e;eip=0x000020; 	X(PUSH(ax));	// 65915 push    ax ;~ 1F3E:0020
cs=0x1f3e;eip=0x000021; 	R(CALLF(sub_31643,0));	// 65916 call    sub_31643 ;~ 1F3E:0021
cs=0x1f3e;eip=0x000026; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 65917 mov     word ptr [bp+var_10], ax ;~ 1F3E:0026
cs=0x1f3e;eip=0x000029; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 65918 mov     word ptr [bp+var_10+2], dx ;~ 1F3E:0029
cs=0x1f3e;eip=0x00002c; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_10))), 0x0D));	// 65919 add     word ptr [bp+var_10], 0Dh ;~ 1F3E:002C
cs=0x1f3e;eip=0x000030; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 65920 les     bx, [bp+var_10] ;~ 1F3E:0030
cs=0x1f3e;eip=0x000033; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 65921 inc     word ptr [bp+var_10] ;~ 1F3E:0033
cs=0x1f3e;eip=0x000036; 	T(CMP(*(raddr(es,bx)), 2));	// 65922 cmp     byte ptr es:[bx], 2 ;~ 1F3E:0036
cs=0x1f3e;eip=0x00003a; 	R(JZ(loc_2da12));	// 65923 jz      short loc_2DA12 ;~ 1F3E:003A
loc_2d9fc:
	// 8651 
cs=0x1f3e;eip=0x00003c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 65927 push    word ptr [bp+var_10+2] ;~ 1F3E:003C
cs=0x1f3e;eip=0x00003f; 	R(CALLF(sub_2397c,0));	// 65928 call    sub_2397C ;~ 1F3E:003F
cs=0x1f3e;eip=0x000044; 	X(PUSH(*(dw*)(raddr(ss,bp+var_214))));	// 65929 push    [bp+var_214] ;~ 1F3E:0044
cs=0x1f3e;eip=0x000048; 	R(CALLF(sub_2397c,0));	// 65930 call    sub_2397C ;~ 1F3E:0048
cs=0x1f3e;eip=0x00004d; 	T(SUB(ax, ax));	// 65931 sub     ax, ax ;~ 1F3E:004D
cs=0x1f3e;eip=0x00004f; 	R(JMP(loc_2db3a));	// 65932 jmp     loc_2DB3A ;~ 1F3E:004F
loc_2da12:
	// 8652 
cs=0x1f3e;eip=0x000052; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 65936 push    word ptr [bp+var_10+2] ;~ 1F3E:0052
cs=0x1f3e;eip=0x000055; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 65937 push    word ptr [bp+var_10] ;~ 1F3E:0055
cs=0x1f3e;eip=0x000058; 	T(ax = bp+var_22e);	// 65938 lea     ax, [bp+var_22E] ;~ 1F3E:0058
cs=0x1f3e;eip=0x00005c; 	X(PUSH(ss));	// 65939 push    ss ;~ 1F3E:005C
cs=0x1f3e;eip=0x00005d; 	X(PUSH(ax));	// 65940 push    ax ;~ 1F3E:005D
cs=0x1f3e;eip=0x00005e; 	T(MOV(ax, 0x21E));	// 65941 mov     ax, 21Eh ;~ 1F3E:005E
cs=0x1f3e;eip=0x000061; 	X(PUSH(ax));	// 65942 push    ax ;~ 1F3E:0061
cs=0x1f3e;eip=0x000062; 	R(CALLF(sub_210f1,0));	// 65943 call    sub_210F1 ;~ 1F3E:0062
cs=0x1f3e;eip=0x000067; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_10))), 0x21E));	// 65944 add     word ptr [bp+var_10], 21Eh ;~ 1F3E:0067
cs=0x1f3e;eip=0x00006c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_21a))));	// 65945 mov     ax, [bp+var_21A] ;~ 1F3E:006C
cs=0x1f3e;eip=0x000070; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_218))));	// 65946 imul    [bp+var_218] ;~ 1F3E:0070
cs=0x1f3e;eip=0x000074; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 65947 mov     [bp+var_A], ax ;~ 1F3E:0074
cs=0x1f3e;eip=0x000077; 	X(PUSH(ax));	// 65948 push    ax ;~ 1F3E:0077
cs=0x1f3e;eip=0x000078; 	R(CALLF(sub_23961,0));	// 65949 call    sub_23961 ;~ 1F3E:0078
cs=0x1f3e;eip=0x00007d; 	X(MOV(*(dw*)(raddr(ss,bp+var_214)), ax));	// 65950 mov     [bp+var_214], ax ;~ 1F3E:007D
cs=0x1f3e;eip=0x000081; 	T(OR(ax, ax));	// 65951 or      ax, ax ;~ 1F3E:0081
cs=0x1f3e;eip=0x000083; 	R(JZ(loc_2d9fc));	// 65952 jz      short loc_2D9FC ;~ 1F3E:0083
cs=0x1f3e;eip=0x000085; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 65953 push    word ptr [bp+var_10+2] ;~ 1F3E:0085
cs=0x1f3e;eip=0x000088; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10)))));	// 65954 push    word ptr [bp+var_10] ;~ 1F3E:0088
cs=0x1f3e;eip=0x00008b; 	T(MOV(dx, ax));	// 65955 mov     dx, ax ;~ 1F3E:008B
cs=0x1f3e;eip=0x00008d; 	T(SUB(ax, ax));	// 65956 sub     ax, ax ;~ 1F3E:008D
cs=0x1f3e;eip=0x00008f; 	X(PUSH(dx));	// 65957 push    dx ;~ 1F3E:008F
cs=0x1f3e;eip=0x000090; 	X(PUSH(ax));	// 65958 push    ax ;~ 1F3E:0090
cs=0x1f3e;eip=0x000091; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 65959 push    [bp+var_A] ;~ 1F3E:0091
cs=0x1f3e;eip=0x000094; 	R(CALLF(sub_210f1,0));	// 65960 call    sub_210F1 ;~ 1F3E:0094
cs=0x1f3e;eip=0x000099; 	T(MOV(ax, 0x27C));	// 65961 mov     ax, 27Ch ;~ 1F3E:0099
cs=0x1f3e;eip=0x00009c; 	X(PUSH(ax));	// 65962 push    ax ;~ 1F3E:009C
cs=0x1f3e;eip=0x00009d; 	R(CALLF(sub_23961,0));	// 65963 call    sub_23961 ;~ 1F3E:009D
cs=0x1f3e;eip=0x0000a2; 	X(MOV(*(dw*)((&unk_47bdc)), ax));	// 65964 mov     word ptr unk_47BDC, ax ;~ 1F3E:00A2
cs=0x1f3e;eip=0x0000a5; 	T(OR(ax, ax));	// 65965 or      ax, ax ;~ 1F3E:00A5
cs=0x1f3e;eip=0x0000a7; 	R(JZ(loc_2d9fc));	// 65966 jz      short loc_2D9FC ;~ 1F3E:00A7
cs=0x1f3e;eip=0x0000a9; 	X(MOV(*(raddr(ss,bp+var_c)), 0x16));	// 65967 mov     [bp+var_C], 16h ;~ 1F3E:00A9
cs=0x1f3e;eip=0x0000ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_230)), 6));	// 65968 mov     [bp+var_230], 6 ;~ 1F3E:00AD
cs=0x1f3e;eip=0x0000b3; 	T(MOV(dx, ax));	// 65969 mov     dx, ax ;~ 1F3E:00B3
cs=0x1f3e;eip=0x0000b5; 	T(SUB(ax, ax));	// 65970 sub     ax, ax ;~ 1F3E:00B5
cs=0x1f3e;eip=0x0000b7; 	X(MOV(*(dw*)(raddr(ss,bp+var_23a)), ax));	// 65971 mov     [bp+var_23A], ax ;~ 1F3E:00B7
cs=0x1f3e;eip=0x0000bb; 	X(MOV(*(dw*)(raddr(ss,bp+var_238)), dx));	// 65972 mov     [bp+var_238], dx ;~ 1F3E:00BB
cs=0x1f3e;eip=0x0000bf; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_214))));	// 65973 mov     dx, [bp+var_214] ;~ 1F3E:00BF
cs=0x1f3e;eip=0x0000c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_23e)), ax));	// 65974 mov     [bp+var_23E], ax ;~ 1F3E:00C3
cs=0x1f3e;eip=0x0000c7; 	X(MOV(*(dw*)(raddr(ss,bp+var_23c)), dx));	// 65975 mov     [bp+var_23C], dx ;~ 1F3E:00C7
cs=0x1f3e;eip=0x0000cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_240)), ax));	// 65976 mov     [bp+var_240], ax ;~ 1F3E:00CB
loc_2da8f:
	// 8653 
cs=0x1f3e;eip=0x0000cf; 	T(MOV(al, *(raddr(ss,bp+var_c))));	// 65979 mov     al, [bp+var_C] ;~ 1F3E:00CF
cs=0x1f3e;eip=0x0000d2; 	T(SUB(ah, ah));	// 65980 sub     ah, ah ;~ 1F3E:00D2
cs=0x1f3e;eip=0x0000d4; 	T(SHR(ax, 1));	// 65981 shr     ax, 1 ;~ 1F3E:00D4
cs=0x1f3e;eip=0x0000d6; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_23e))));	// 65982 or      ax, [bp+var_23E] ;~ 1F3E:00D6
cs=0x1f3e;eip=0x0000da; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_23c))));	// 65983 mov     dx, [bp+var_23C] ;~ 1F3E:00DA
cs=0x1f3e;eip=0x0000de; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 65984 mov     word ptr [bp+var_8], ax ;~ 1F3E:00DE
cs=0x1f3e;eip=0x0000e1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 65985 mov     word ptr [bp+var_8+2], dx ;~ 1F3E:00E1
cs=0x1f3e;eip=0x0000e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_240))));	// 65986 mov     ax, [bp+var_240] ;~ 1F3E:00E4
cs=0x1f3e;eip=0x0000e8; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_23a))));	// 65987 or      ax, [bp+var_23A] ;~ 1F3E:00E8
cs=0x1f3e;eip=0x0000ec; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_238))));	// 65988 mov     dx, [bp+var_238] ;~ 1F3E:00EC
cs=0x1f3e;eip=0x0000f0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 65989 mov     word ptr [bp+var_4], ax ;~ 1F3E:00F0
cs=0x1f3e;eip=0x0000f3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 65990 mov     word ptr [bp+var_4+2], dx ;~ 1F3E:00F3
cs=0x1f3e;eip=0x0000f6; 	T(MOV(si, 6));	// 65991 mov     si, 6 ;~ 1F3E:00F6
cs=0x1f3e;eip=0x0000f9; 	T(MOV(di, *(dw*)((&byte_47b2e))));	// 65992 mov     di, word ptr byte_47B2E ;~ 1F3E:00F9
loc_2dabd:
	// 8654 
cs=0x1f3e;eip=0x0000fd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 65995 les     bx, [bp+var_8] ;~ 1F3E:00FD
cs=0x1f3e;eip=0x000100; 	T(MOV(al, *(raddr(es,bx))));	// 65996 mov     al, es:[bx] ;~ 1F3E:0100
cs=0x1f3e;eip=0x000103; 	X(MOV(*(raddr(ss,bp+var_234)), al));	// 65997 mov     [bp+var_234], al ;~ 1F3E:0103
cs=0x1f3e;eip=0x000107; 	T(OR(di, di));	// 65998 or      di, di ;~ 1F3E:0107
cs=0x1f3e;eip=0x000109; 	R(JNZ(loc_2daed));	// 65999 jnz     short loc_2DAED ;~ 1F3E:0109
cs=0x1f3e;eip=0x00010b; 	T(TEST(*(raddr(ss,bp+var_c)), 1));	// 66000 test    [bp+var_C], 1 ;~ 1F3E:010B
cs=0x1f3e;eip=0x00010f; 	R(JZ(loc_2dad8));	// 66001 jz      short loc_2DAD8 ;~ 1F3E:010F
cs=0x1f3e;eip=0x000111; 	X(AND(*(raddr(ss,bp+var_234)), 0x0F));	// 66002 and     [bp+var_234], 0Fh ;~ 1F3E:0111
cs=0x1f3e;eip=0x000116; 	R(JMP(loc_2dade));	// 66003 jmp     short loc_2DADE ;~ 1F3E:0116
loc_2dad8:
	// 8655 
cs=0x1f3e;eip=0x000118; 	T(MOV(cl, 4));	// 66007 mov     cl, 4 ;~ 1F3E:0118
cs=0x1f3e;eip=0x00011a; 	X(SHR(*(raddr(ss,bp+var_234)), cl));	// 66008 shr     [bp+var_234], cl ;~ 1F3E:011A
loc_2dade:
	// 8656 
cs=0x1f3e;eip=0x00011e; 	T(MOV(bl, *(raddr(ss,bp+var_234))));	// 66011 mov     bl, [bp+var_234] ;~ 1F3E:011E
cs=0x1f3e;eip=0x000122; 	T(SUB(bh, bh));	// 66012 sub     bh, bh ;~ 1F3E:0122
cs=0x1f3e;eip=0x000124; 	T(MOV(al, *(raddr(ds,bx+0x18C))));	// 66013 mov     al, [bx+18Ch] ;~ 1F3E:0124
cs=0x1f3e;eip=0x000128; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 66014 les     bx, [bp+var_4] ;~ 1F3E:0128
cs=0x1f3e;eip=0x00012b; 	R(JMP(loc_2db05));	// 66015 jmp     short loc_2DB05 ;~ 1F3E:012B
loc_2daed:
	// 8657 
cs=0x1f3e;eip=0x00012d; 	T(TEST(*(raddr(ss,bp+var_c)), 1));	// 66019 test    [bp+var_C], 1 ;~ 1F3E:012D
cs=0x1f3e;eip=0x000131; 	R(JNZ(loc_2daf9));	// 66020 jnz     short loc_2DAF9 ;~ 1F3E:0131
cs=0x1f3e;eip=0x000133; 	T(MOV(cl, 4));	// 66021 mov     cl, 4 ;~ 1F3E:0133
cs=0x1f3e;eip=0x000135; 	X(SHR(*(raddr(ss,bp+var_234)), cl));	// 66022 shr     [bp+var_234], cl ;~ 1F3E:0135
loc_2daf9:
	// 8658 
cs=0x1f3e;eip=0x000139; 	X(AND(*(raddr(ss,bp+var_234)), 0x0F));	// 66025 and     [bp+var_234], 0Fh ;~ 1F3E:0139
cs=0x1f3e;eip=0x00013e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 66026 les     bx, [bp+var_4] ;~ 1F3E:013E
cs=0x1f3e;eip=0x000141; 	T(MOV(al, *(raddr(ss,bp+var_234))));	// 66027 mov     al, [bp+var_234] ;~ 1F3E:0141
loc_2db05:
	// 8659 
cs=0x1f3e;eip=0x000145; 	X(MOV(*(raddr(es,bx)), al));	// 66030 mov     es:[bx], al ;~ 1F3E:0145
cs=0x1f3e;eip=0x000148; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 66031 inc     word ptr [bp+var_4] ;~ 1F3E:0148
cs=0x1f3e;eip=0x00014b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_21a))));	// 66032 mov     ax, [bp+var_21A] ;~ 1F3E:014B
cs=0x1f3e;eip=0x00014f; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 66033 add     word ptr [bp+var_8], ax ;~ 1F3E:014F
cs=0x1f3e;eip=0x000152; 	T(DEC(si));	// 66034 dec     si ;~ 1F3E:0152
cs=0x1f3e;eip=0x000153; 	R(JNZ(loc_2dabd));	// 66035 jnz     short loc_2DABD ;~ 1F3E:0153
cs=0x1f3e;eip=0x000155; 	X(ADD(*(dw*)(raddr(ss,bp+var_240)), 6));	// 66036 add     [bp+var_240], 6 ;~ 1F3E:0155
cs=0x1f3e;eip=0x00015a; 	X(INC(*(raddr(ss,bp+var_c))));	// 66037 inc     [bp+var_C] ;~ 1F3E:015A
cs=0x1f3e;eip=0x00015d; 	T(CMP(*(raddr(ss,bp+var_c)), 0x7F));	// 66038 cmp     [bp+var_C], 7Fh ;~ 1F3E:015D
cs=0x1f3e;eip=0x000161; 	R(JA(loc_2db26));	// 66039 ja      short loc_2DB26 ;~ 1F3E:0161
cs=0x1f3e;eip=0x000163; 	R(JMP(loc_2da8f));	// 66040 jmp     loc_2DA8F ;~ 1F3E:0163
loc_2db26:
	// 8660 
cs=0x1f3e;eip=0x000166; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_10+2)))));	// 66044 push    word ptr [bp+var_10+2] ;~ 1F3E:0166
cs=0x1f3e;eip=0x000169; 	R(CALLF(sub_2397c,0));	// 66045 call    sub_2397C ;~ 1F3E:0169
cs=0x1f3e;eip=0x00016e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_214))));	// 66046 push    [bp+var_214] ;~ 1F3E:016E
cs=0x1f3e;eip=0x000172; 	R(CALLF(sub_2397c,0));	// 66047 call    sub_2397C ;~ 1F3E:0172
cs=0x1f3e;eip=0x000177; 	T(MOV(ax, 1));	// 66048 mov     ax, 1 ;~ 1F3E:0177
loc_2db3a:
	// 8661 
cs=0x1f3e;eip=0x00017a; 	X(POP(si));	// 66051 pop     si ;~ 1F3E:017A
cs=0x1f3e;eip=0x00017b; 	X(POP(di));	// 66052 pop     di ;~ 1F3E:017B
cs=0x1f3e;eip=0x00017c; 	T(MOV(sp, bp));	// 66053 mov     sp, bp ;~ 1F3E:017C
cs=0x1f3e;eip=0x00017e; 	X(POP(bp));	// 66054 pop     bp ;~ 1F3E:017E
cs=0x1f3e;eip=0x00017f; 	R(RETF(0));	// 66055 retf ;~ 1F3E:017F
sub_2db40:
	// 66062 
cs=0x1f3e;eip=0x000180; 	X(PUSH(*(dw*)((&unk_47bdc))));	// 66064 push    word ptr unk_47BDC ;~ 1F3E:0180
cs=0x1f3e;eip=0x000184; 	R(CALLF(sub_2397c,0));	// 66065 call    sub_2397C ;~ 1F3E:0184
cs=0x1f3e;eip=0x000189; 	X(MOV(*(dw*)((&unk_47bdc)), 0));	// 66066 mov     word ptr unk_47BDC, 0 ;~ 1F3E:0189
cs=0x1f3e;eip=0x00018f; 	R(RETF(0));	// 66067 retf ;~ 1F3E:018F
sub_2db50:
	// 66075 
#undef arg_0
#define arg_0 6
	// 66078 arg_0           = word ptr  6 ;~ 1F3E:0190
#undef arg_2
#define arg_2 8
	// 66079 arg_2           = word ptr  8 ;~ 1F3E:0190
cs=0x1f3e;eip=0x000190; 	X(PUSH(bp));	// 66081 push    bp ;~ 1F3E:0190
cs=0x1f3e;eip=0x000191; 	T(MOV(bp, sp));	// 66082 mov     bp, sp ;~ 1F3E:0191
cs=0x1f3e;eip=0x000193; 	X(PUSH(di));	// 66083 push    di ;~ 1F3E:0193
cs=0x1f3e;eip=0x000194; 	X(PUSH(si));	// 66084 push    si ;~ 1F3E:0194
cs=0x1f3e;eip=0x000195; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 66085 mov     si, [bp+arg_2] ;~ 1F3E:0195
cs=0x1f3e;eip=0x000198; 	X(PUSH(si));	// 66086 push    si ;~ 1F3E:0198
cs=0x1f3e;eip=0x000199; 	T(MOV(ax, *(dw*)((&unk_56502))));	// 66087 mov     ax, word ptr unk_56502 ;~ 1F3E:0199
cs=0x1f3e;eip=0x00019c; 	T(MOV(dx, ax));	// 66088 mov     dx, ax ;~ 1F3E:019C
cs=0x1f3e;eip=0x00019e; 	T(MOV(di, si));	// 66089 mov     di, si ;~ 1F3E:019E
cs=0x1f3e;eip=0x0001a0; 	T(MOV(ax, ds));	// 66090 mov     ax, ds ;~ 1F3E:01A0
cs=0x1f3e;eip=0x0001a2; 	T(MOV(es, ax));	// 66091 mov     es, ax ;~ 1F3E:01A2
cs=0x1f3e;eip=0x0001a4; 	T(MOV(cx, 0x0FFFF));	// 66093 mov     cx, 0FFFFh ;~ 1F3E:01A4
cs=0x1f3e;eip=0x0001a7; 	T(XOR(ax, ax));	// 66094 xor     ax, ax ;~ 1F3E:01A7
	// 66095 repne scasb ;~ 1F3E:01A9
cs=0x1f3e;eip=0x0001a9; 	T(	REPNE SCASB);	// 66095 repne scasb ;~ 1F3E:01A9
cs=0x1f3e;eip=0x0001ab; 	T(NOT(cx));	// 66096 not     cx ;~ 1F3E:01AB
cs=0x1f3e;eip=0x0001ad; 	T(DEC(cx));	// 66097 dec     cx ;~ 1F3E:01AD
cs=0x1f3e;eip=0x0001ae; 	T(SHL(cx, 1));	// 66098 shl     cx, 1 ;~ 1F3E:01AE
cs=0x1f3e;eip=0x0001b0; 	T(SUB(dx, cx));	// 66099 sub     dx, cx ;~ 1F3E:01B0
cs=0x1f3e;eip=0x0001b2; 	T(INC(dx));	// 66100 inc     dx ;~ 1F3E:01B2
cs=0x1f3e;eip=0x0001b3; 	T(AND(dl, 0x0FC));	// 66101 and     dl, 0FCh ;~ 1F3E:01B3
cs=0x1f3e;eip=0x0001b6; 	X(PUSH(dx));	// 66102 push    dx ;~ 1F3E:01B6
cs=0x1f3e;eip=0x0001b7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 66103 push    [bp+arg_0] ;~ 1F3E:01B7
cs=0x1f3e;eip=0x0001ba; 	R(CALLF(sub_2de1a,0));	// 66104 call    sub_2DE1A ;~ 1F3E:01BA
cs=0x1f3e;eip=0x0001bf; 	X(POP(si));	// 66105 pop     si ;~ 1F3E:01BF
cs=0x1f3e;eip=0x0001c0; 	X(POP(di));	// 66106 pop     di ;~ 1F3E:01C0
cs=0x1f3e;eip=0x0001c1; 	X(POP(bp));	// 66107 pop     bp ;~ 1F3E:01C1
cs=0x1f3e;eip=0x0001c2; 	R(RETF(4));	// 66108 retf    4 ;~ 1F3E:01C2
nullsub_10:
	// 66115 
cs=0x1f3e;eip=0x0001c5; 	R(RETF(0));	// 66116 retf ;~ 1F3E:01C5
nullsub_11:
	// 66123 
cs=0x1f3e;eip=0x0001c6; 	R(RETF(0));	// 66124 retf ;~ 1F3E:01C6
sub_2db87:
	// 66132 
#undef arg_0
#define arg_0 6
	// 66135 arg_0           = word ptr  6 ;~ 1F3E:01C7
#undef arg_2
#define arg_2 8
	// 66136 arg_2           = word ptr  8 ;~ 1F3E:01C7
cs=0x1f3e;eip=0x0001c7; 	X(PUSH(bp));	// 66138 push    bp ;~ 1F3E:01C7
cs=0x1f3e;eip=0x0001c8; 	T(MOV(bp, sp));	// 66139 mov     bp, sp ;~ 1F3E:01C8
cs=0x1f3e;eip=0x0001ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 66140 mov     ax, [bp+arg_0] ;~ 1F3E:01CA
cs=0x1f3e;eip=0x0001cd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 66141 mov     dx, [bp+arg_2] ;~ 1F3E:01CD
cs=0x1f3e;eip=0x0001d0; 	X(MOV(*(dw*)((&unk_5688e)), ax));	// 66142 mov     word ptr unk_5688E, ax ;~ 1F3E:01D0
cs=0x1f3e;eip=0x0001d3; 	X(MOV(*(dw*)((&unk_56890)), dx));	// 66143 mov     word ptr unk_56890, dx ;~ 1F3E:01D3
cs=0x1f3e;eip=0x0001d7; 	X(POP(bp));	// 66144 pop     bp ;~ 1F3E:01D7
cs=0x1f3e;eip=0x0001d8; 	R(RETF(4));	// 66145 retf    4 ;~ 1F3E:01D8
seg004_proc:
	// 66149 
cs=0x1f3e;eip=0x0001db; 	T(MOV(ax, *(dw*)((&unk_5688e))));	// 66149 mov     ax, word ptr unk_5688E ;~ 1F3E:01DB
cs=0x1f3e;eip=0x0001de; 	T(MOV(dx, *(dw*)((&unk_56890))));	// 66150 mov     dx, word ptr unk_56890 ;~ 1F3E:01DE
cs=0x1f3e;eip=0x0001e2; 	R(RETF(0));	// 66151 retf ;~ 1F3E:01E2
cs=0x1f3e;eip=0x000362; 	X(PUSH(bp));	// 66394 push    bp ;~ 1F3E:0362
cs=0x1f3e;eip=0x000363; 	T(MOV(bp, sp));	// 66395 mov     bp, sp ;~ 1F3E:0363
cs=0x1f3e;eip=0x000365; 	T(SUB(sp, 4));	// 66396 sub     sp, 4 ;~ 1F3E:0365
cs=0x1f3e;eip=0x000368; 	X(PUSH(di));	// 66397 push    di ;~ 1F3E:0368
cs=0x1f3e;eip=0x000369; 	X(PUSH(si));	// 66398 push    si ;~ 1F3E:0369
cs=0x1f3e;eip=0x00036a; 	T(MOV(di, *(dw*)(raddr(ss,bp+8))));	// 66399 mov     di, [bp+8] ;~ 1F3E:036A
cs=0x1f3e;eip=0x00036d; 	T(MOV(si, *(dw*)(raddr(ss,bp-4))));	// 66400 mov     si, [bp-4] ;~ 1F3E:036D
cs=0x1f3e;eip=0x000370; 	R(JMP(loc_2dd4d));	// 66401 jmp     short loc_2DD4D ;~ 1F3E:0370
loc_2dd32:
	// 8670 
cs=0x1f3e;eip=0x000372; 	T(MOV(al, *(raddr(ss,bp-2))));	// 66405 mov     al, [bp-2] ;~ 1F3E:0372
cs=0x1f3e;eip=0x000375; 	T(SUB(ah, ah));	// 66406 sub     ah, ah ;~ 1F3E:0375
cs=0x1f3e;eip=0x000377; 	T(MOV(si, ax));	// 66407 mov     si, ax ;~ 1F3E:0377
cs=0x1f3e;eip=0x000379; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 66408 push    word ptr [bp+6] ;~ 1F3E:0379
cs=0x1f3e;eip=0x00037c; 	X(PUSH(di));	// 66409 push    di ;~ 1F3E:037C
cs=0x1f3e;eip=0x00037d; 	X(PUSH(si));	// 66410 push    si ;~ 1F3E:037D
cs=0x1f3e;eip=0x00037e; 	R(CALLF(sub_2e4b0,0));	// 66411 call    sub_2E4B0 ;~ 1F3E:037E
cs=0x1f3e;eip=0x000383; 	T(ADD(sp, 6));	// 66412 add     sp, 6 ;~ 1F3E:0383
cs=0x1f3e;eip=0x000386; 	X(PUSH(si));	// 66413 push    si ;~ 1F3E:0386
cs=0x1f3e;eip=0x000387; 	X(PUSH(cs));	// 66414 push    cs ;~ 1F3E:0387
cs=0x1f3e;eip=0x000388; 	R(CALL(sub_2dc86,0));	// 66415 call    near ptr sub_2DC86 ;~ 1F3E:0388
cs=0x1f3e;eip=0x00038b; 	T(ADD(di, ax));	// 66416 add     di, ax ;~ 1F3E:038B
loc_2dd4d:
	// 8671 
cs=0x1f3e;eip=0x00038d; 	T(LES(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 66419 les     bx, [bp+0Ah] ;~ 1F3E:038D
cs=0x1f3e;eip=0x000390; 	X(INC(*(dw*)(raddr(ss,bp+0x0A))));	// 66420 inc     word ptr [bp+0Ah] ;~ 1F3E:0390
cs=0x1f3e;eip=0x000393; 	T(MOV(al, *(raddr(es,bx))));	// 66421 mov     al, es:[bx] ;~ 1F3E:0393
cs=0x1f3e;eip=0x000396; 	X(MOV(*(raddr(ss,bp-2)), al));	// 66422 mov     [bp-2], al ;~ 1F3E:0396
cs=0x1f3e;eip=0x000399; 	T(OR(al, al));	// 66423 or      al, al ;~ 1F3E:0399
cs=0x1f3e;eip=0x00039b; 	R(JNZ(loc_2dd32));	// 66424 jnz     short loc_2DD32 ;~ 1F3E:039B
cs=0x1f3e;eip=0x00039d; 	X(MOV(*(dw*)(raddr(ss,bp+8)), di));	// 66425 mov     [bp+8], di ;~ 1F3E:039D
cs=0x1f3e;eip=0x0003a0; 	X(POP(si));	// 66426 pop     si ;~ 1F3E:03A0
cs=0x1f3e;eip=0x0003a1; 	X(POP(di));	// 66427 pop     di ;~ 1F3E:03A1
cs=0x1f3e;eip=0x0003a2; 	T(MOV(sp, bp));	// 66428 mov     sp, bp ;~ 1F3E:03A2
cs=0x1f3e;eip=0x0003a4; 	X(POP(bp));	// 66429 pop     bp ;~ 1F3E:03A4
cs=0x1f3e;eip=0x0003a5; 	R(RETF(8));	// 66430 retf    8 ;~ 1F3E:03A5
sub_2dba3:
	// 66157 
#undef var_a
#define var_a -0x0A
	// 66160 var_A           = dword ptr -0Ah ;~ 1F3E:01E3
#undef var_6
#define var_6 -6
	// 66161 var_6           = dword ptr -6 ;~ 1F3E:01E3
#undef var_2
#define var_2 -2
	// 66162 var_2           = word ptr -2 ;~ 1F3E:01E3
#undef arg_0
#define arg_0 4
	// 66163 arg_0           = word ptr  4 ;~ 1F3E:01E3
cs=0x1f3e;eip=0x0001e3; 	X(PUSH(bp));	// 66165 push    bp ;~ 1F3E:01E3
cs=0x1f3e;eip=0x0001e4; 	T(MOV(bp, sp));	// 66166 mov     bp, sp ;~ 1F3E:01E4
cs=0x1f3e;eip=0x0001e6; 	T(SUB(sp, 0x0A));	// 66167 sub     sp, 0Ah ;~ 1F3E:01E6
cs=0x1f3e;eip=0x0001e9; 	T(SUB(ax, ax));	// 66168 sub     ax, ax ;~ 1F3E:01E9
cs=0x1f3e;eip=0x0001eb; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), ax));	// 66169 mov     word ptr [bp+var_A+2], ax ;~ 1F3E:01EB
cs=0x1f3e;eip=0x0001ee; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 66170 mov     word ptr [bp+var_A], ax ;~ 1F3E:01EE
cs=0x1f3e;eip=0x0001f1; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), ax));	// 66171 mov     word ptr [bp+var_6+2], ax ;~ 1F3E:01F1
cs=0x1f3e;eip=0x0001f4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 66172 mov     word ptr [bp+var_6], ax ;~ 1F3E:01F4
cs=0x1f3e;eip=0x0001f7; 	T(MOV(ax, 0x21E));	// 66173 mov     ax, 21Eh ;~ 1F3E:01F7
cs=0x1f3e;eip=0x0001fa; 	X(PUSH(ax));	// 66174 push    ax ;~ 1F3E:01FA
cs=0x1f3e;eip=0x0001fb; 	R(CALLF(sub_23961,0));	// 66175 call    sub_23961 ;~ 1F3E:01FB
cs=0x1f3e;eip=0x000200; 	T(MOV(dx, ax));	// 66176 mov     dx, ax ;~ 1F3E:0200
cs=0x1f3e;eip=0x000202; 	T(SUB(ax, ax));	// 66177 sub     ax, ax ;~ 1F3E:0202
cs=0x1f3e;eip=0x000204; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 66178 mov     word ptr [bp+var_A], ax ;~ 1F3E:0204
cs=0x1f3e;eip=0x000207; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 66179 mov     word ptr [bp+var_A+2], dx ;~ 1F3E:0207
cs=0x1f3e;eip=0x00020a; 	T(CMP(dx, ax));	// 66180 cmp     dx, ax ;~ 1F3E:020A
cs=0x1f3e;eip=0x00020c; 	R(JNZ(loc_2dbe4));	// 66181 jnz     short loc_2DBE4 ;~ 1F3E:020C
loc_2dbce:
	// 8662 
cs=0x1f3e;eip=0x00020e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 66185 push    word ptr [bp+var_6+2] ;~ 1F3E:020E
cs=0x1f3e;eip=0x000211; 	R(CALLF(sub_2397c,0));	// 66186 call    sub_2397C ;~ 1F3E:0211
cs=0x1f3e;eip=0x000216; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 66187 push    word ptr [bp+var_A+2] ;~ 1F3E:0216
cs=0x1f3e;eip=0x000219; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 66188 push    word ptr [bp+var_A] ;~ 1F3E:0219
cs=0x1f3e;eip=0x00021c; 	R(CALL(sub_2dc65,0));	// 66189 call    sub_2DC65 ;~ 1F3E:021C
cs=0x1f3e;eip=0x00021f; 	T(SUB(ax, ax));	// 66190 sub     ax, ax ;~ 1F3E:021F
cs=0x1f3e;eip=0x000221; 	T(CWD);	// 66191 cwd ;~ 1F3E:0221
cs=0x1f3e;eip=0x000222; 	R(JMP(loc_2dc5f));	// 66192 jmp     short loc_2DC5F ;~ 1F3E:0222
loc_2dbe4:
	// 8663 
cs=0x1f3e;eip=0x000224; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 66196 push    [bp+arg_0] ;~ 1F3E:0224
cs=0x1f3e;eip=0x000227; 	T(ax = bp+var_2);	// 66197 lea     ax, [bp+var_2] ;~ 1F3E:0227
cs=0x1f3e;eip=0x00022a; 	X(PUSH(ax));	// 66198 push    ax ;~ 1F3E:022A
cs=0x1f3e;eip=0x00022b; 	R(CALLF(sub_31643,0));	// 66199 call    sub_31643 ;~ 1F3E:022B
cs=0x1f3e;eip=0x000230; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 66200 mov     word ptr [bp+var_6], ax ;~ 1F3E:0230
cs=0x1f3e;eip=0x000233; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 66201 mov     word ptr [bp+var_6+2], dx ;~ 1F3E:0233
cs=0x1f3e;eip=0x000236; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_6))), 0x0D));	// 66202 add     word ptr [bp+var_6], 0Dh ;~ 1F3E:0236
cs=0x1f3e;eip=0x00023a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 66203 les     bx, [bp+var_6] ;~ 1F3E:023A
cs=0x1f3e;eip=0x00023d; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 66205 inc     word ptr [bp+var_6] ;~ 1F3E:023D
cs=0x1f3e;eip=0x000240; 	T(CMP(*(raddr(es,bx)), 2));	// 66206 cmp     byte ptr es:[bx], 2 ;~ 1F3E:0240
cs=0x1f3e;eip=0x000244; 	R(JNZ(loc_2dbce));	// 66207 jnz     short loc_2DBCE ;~ 1F3E:0244
cs=0x1f3e;eip=0x000246; 	X(PUSH(dx));	// 66208 push    dx ;~ 1F3E:0246
cs=0x1f3e;eip=0x000247; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 66209 push    word ptr [bp+var_6] ;~ 1F3E:0247
cs=0x1f3e;eip=0x00024a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 66210 push    word ptr [bp+var_A+2] ;~ 1F3E:024A
cs=0x1f3e;eip=0x00024d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 66211 push    word ptr [bp+var_A] ;~ 1F3E:024D
cs=0x1f3e;eip=0x000250; 	T(MOV(ax, 0x21E));	// 66212 mov     ax, 21Eh ;~ 1F3E:0250
cs=0x1f3e;eip=0x000253; 	X(PUSH(ax));	// 66213 push    ax ;~ 1F3E:0253
cs=0x1f3e;eip=0x000254; 	R(CALLF(sub_210f1,0));	// 66214 call    sub_210F1 ;~ 1F3E:0254
cs=0x1f3e;eip=0x000259; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_6))), 0x21E));	// 66215 add     word ptr [bp+var_6], 21Eh ;~ 1F3E:0259
cs=0x1f3e;eip=0x00025e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 66216 les     bx, [bp+var_A] ;~ 1F3E:025E
cs=0x1f3e;eip=0x000261; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 66217 mov     ax, es:[bx+14h] ;~ 1F3E:0261
cs=0x1f3e;eip=0x000265; 	X(IMUL1_2(*(dw*)(raddr(es,bx+0x16))));	// 66218 imul    word ptr es:[bx+16h] ;~ 1F3E:0265
cs=0x1f3e;eip=0x000269; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 66219 mov     [bp+var_2], ax ;~ 1F3E:0269
cs=0x1f3e;eip=0x00026c; 	X(PUSH(ax));	// 66220 push    ax ;~ 1F3E:026C
cs=0x1f3e;eip=0x00026d; 	R(CALLF(sub_23961,0));	// 66221 call    sub_23961 ;~ 1F3E:026D
cs=0x1f3e;eip=0x000272; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 66222 les     bx, [bp+var_A] ;~ 1F3E:0272
cs=0x1f3e;eip=0x000275; 	X(MOV(*(dw*)(raddr(es,bx+0x1A)), ax));	// 66223 mov     es:[bx+1Ah], ax ;~ 1F3E:0275
cs=0x1f3e;eip=0x000279; 	T(OR(ax, ax));	// 66224 or      ax, ax ;~ 1F3E:0279
cs=0x1f3e;eip=0x00027b; 	R(JZ(loc_2dbce));	// 66225 jz      short loc_2DBCE ;~ 1F3E:027B
cs=0x1f3e;eip=0x00027d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 66226 push    word ptr [bp+var_6+2] ;~ 1F3E:027D
cs=0x1f3e;eip=0x000280; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 66227 push    word ptr [bp+var_6] ;~ 1F3E:0280
cs=0x1f3e;eip=0x000283; 	T(MOV(dx, ax));	// 66228 mov     dx, ax ;~ 1F3E:0283
cs=0x1f3e;eip=0x000285; 	T(SUB(ax, ax));	// 66229 sub     ax, ax ;~ 1F3E:0285
cs=0x1f3e;eip=0x000287; 	X(PUSH(dx));	// 66230 push    dx ;~ 1F3E:0287
cs=0x1f3e;eip=0x000288; 	X(PUSH(ax));	// 66231 push    ax ;~ 1F3E:0288
cs=0x1f3e;eip=0x000289; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 66232 push    [bp+var_2] ;~ 1F3E:0289
cs=0x1f3e;eip=0x00028c; 	R(CALLF(sub_210f1,0));	// 66233 call    sub_210F1 ;~ 1F3E:028C
cs=0x1f3e;eip=0x000291; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 66234 push    word ptr [bp+var_6+2] ;~ 1F3E:0291
cs=0x1f3e;eip=0x000294; 	R(CALLF(sub_2397c,0));	// 66235 call    sub_2397C ;~ 1F3E:0294
cs=0x1f3e;eip=0x000299; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 66236 mov     ax, word ptr [bp+var_A] ;~ 1F3E:0299
cs=0x1f3e;eip=0x00029c; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 66237 mov     dx, word ptr [bp+var_A+2] ;~ 1F3E:029C
loc_2dc5f:
	// 8664 
cs=0x1f3e;eip=0x00029f; 	T(MOV(sp, bp));	// 66240 mov     sp, bp ;~ 1F3E:029F
cs=0x1f3e;eip=0x0002a1; 	X(POP(bp));	// 66241 pop     bp ;~ 1F3E:02A1
cs=0x1f3e;eip=0x0002a2; 	R(RETN(2));	// 66242 retn    2 ;~ 1F3E:02A2
sub_2dc65:
	// 66250 
#undef arg_2
#define arg_2 6
	// 66253 arg_2           = word ptr  6 ;~ 1F3E:02A5
cs=0x1f3e;eip=0x0002a5; 	X(PUSH(bp));	// 66255 push    bp ;~ 1F3E:02A5
cs=0x1f3e;eip=0x0002a6; 	T(MOV(bp, sp));	// 66256 mov     bp, sp ;~ 1F3E:02A6
cs=0x1f3e;eip=0x0002a8; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 66257 cmp     [bp+arg_2], 0 ;~ 1F3E:02A8
cs=0x1f3e;eip=0x0002ac; 	R(JZ(loc_2dc82));	// 66258 jz      short loc_2DC82 ;~ 1F3E:02AC
cs=0x1f3e;eip=0x0002ae; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 66259 les     bx, [bp+4] ;~ 1F3E:02AE
cs=0x1f3e;eip=0x0002b1; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 66260 push    word ptr es:[bx+1Ah] ;~ 1F3E:02B1
cs=0x1f3e;eip=0x0002b5; 	R(CALLF(sub_2397c,0));	// 66261 call    sub_2397C ;~ 1F3E:02B5
cs=0x1f3e;eip=0x0002ba; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 66262 push    [bp+arg_2] ;~ 1F3E:02BA
cs=0x1f3e;eip=0x0002bd; 	R(CALLF(sub_2397c,0));	// 66263 call    sub_2397C ;~ 1F3E:02BD
loc_2dc82:
	// 8665 
cs=0x1f3e;eip=0x0002c2; 	X(POP(bp));	// 66266 pop     bp ;~ 1F3E:02C2
cs=0x1f3e;eip=0x0002c3; 	R(RETN(4));	// 66267 retn    4 ;~ 1F3E:02C3
sub_2dc86:
	// 66275 
#undef var_4
#define var_4 -4
	// 66278 var_4           = dword ptr -4 ;~ 1F3E:02C6
#undef arg_0
#define arg_0 6
	// 66279 arg_0           = byte ptr  6 ;~ 1F3E:02C6
cs=0x1f3e;eip=0x0002c6; 	X(PUSH(bp));	// 66281 push    bp ;~ 1F3E:02C6
cs=0x1f3e;eip=0x0002c7; 	T(MOV(bp, sp));	// 66282 mov     bp, sp ;~ 1F3E:02C7
cs=0x1f3e;eip=0x0002c9; 	T(SUB(sp, 4));	// 66283 sub     sp, 4 ;~ 1F3E:02C9
cs=0x1f3e;eip=0x0002cc; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 66284 mov     al, [bp+arg_0] ;~ 1F3E:02CC
cs=0x1f3e;eip=0x0002cf; 	T(SUB(ah, ah));	// 66285 sub     ah, ah ;~ 1F3E:02CF
cs=0x1f3e;eip=0x0002d1; 	T(SHL(ax, 1));	// 66286 shl     ax, 1 ;~ 1F3E:02D1
cs=0x1f3e;eip=0x0002d3; 	T(ADD(ax, *(dw*)((&unk_5688e))));	// 66287 add     ax, word ptr unk_5688E ;~ 1F3E:02D3
cs=0x1f3e;eip=0x0002d7; 	T(MOV(dx, *(dw*)((&unk_56890))));	// 66288 mov     dx, word ptr unk_56890 ;~ 1F3E:02D7
cs=0x1f3e;eip=0x0002db; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 66289 mov     word ptr [bp+var_4], ax ;~ 1F3E:02DB
cs=0x1f3e;eip=0x0002de; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 66290 mov     word ptr [bp+var_4+2], dx ;~ 1F3E:02DE
cs=0x1f3e;eip=0x0002e1; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 66291 les     bx, [bp+var_4] ;~ 1F3E:02E1
cs=0x1f3e;eip=0x0002e4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E))));	// 66292 mov     ax, es:[bx+1Eh] ;~ 1F3E:02E4
cs=0x1f3e;eip=0x0002e8; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x1C))));	// 66293 sub     ax, es:[bx+1Ch] ;~ 1F3E:02E8
cs=0x1f3e;eip=0x0002ec; 	T(MOV(sp, bp));	// 66294 mov     sp, bp ;~ 1F3E:02EC
cs=0x1f3e;eip=0x0002ee; 	X(POP(bp));	// 66295 pop     bp ;~ 1F3E:02EE
cs=0x1f3e;eip=0x0002ef; 	R(RETF(2));	// 66296 retf    2 ;~ 1F3E:02EF
sub_2dcb2:
	// 66304 
#undef var_2
#define var_2 -2
	// 66307 var_2           = byte ptr -2 ;~ 1F3E:02F2
#undef arg_0
#define arg_0 6
	// 66308 arg_0           = word ptr  6 ;~ 1F3E:02F2
cs=0x1f3e;eip=0x0002f2; 	X(PUSH(bp));	// 66310 push    bp ;~ 1F3E:02F2
cs=0x1f3e;eip=0x0002f3; 	T(MOV(bp, sp));	// 66311 mov     bp, sp ;~ 1F3E:02F3
cs=0x1f3e;eip=0x0002f5; 	T(SUB(sp, 4));	// 66312 sub     sp, 4 ;~ 1F3E:02F5
cs=0x1f3e;eip=0x0002f8; 	X(PUSH(di));	// 66313 push    di ;~ 1F3E:02F8
cs=0x1f3e;eip=0x0002f9; 	X(PUSH(si));	// 66314 push    si ;~ 1F3E:02F9
cs=0x1f3e;eip=0x0002fa; 	T(SUB(si, si));	// 66315 sub     si, si ;~ 1F3E:02FA
cs=0x1f3e;eip=0x0002fc; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 66316 mov     di, [bp+arg_0] ;~ 1F3E:02FC
cs=0x1f3e;eip=0x0002ff; 	R(JMP(loc_2dccd));	// 66317 jmp     short loc_2DCCD ;~ 1F3E:02FF
loc_2dcc1:
	// 8666 
cs=0x1f3e;eip=0x000301; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 66321 mov     al, [bp+var_2] ;~ 1F3E:0301
cs=0x1f3e;eip=0x000304; 	T(SUB(ah, ah));	// 66322 sub     ah, ah ;~ 1F3E:0304
cs=0x1f3e;eip=0x000306; 	X(PUSH(ax));	// 66323 push    ax ;~ 1F3E:0306
cs=0x1f3e;eip=0x000307; 	X(PUSH(cs));	// 66324 push    cs ;~ 1F3E:0307
cs=0x1f3e;eip=0x000308; 	R(CALL(sub_2dc86,0));	// 66325 call    near ptr sub_2DC86 ;~ 1F3E:0308
cs=0x1f3e;eip=0x00030b; 	T(ADD(si, ax));	// 66326 add     si, ax ;~ 1F3E:030B
loc_2dccd:
	// 8667 
cs=0x1f3e;eip=0x00030d; 	T(MOV(al, *(raddr(ds,di))));	// 66329 mov     al, [di] ;~ 1F3E:030D
cs=0x1f3e;eip=0x00030f; 	T(INC(di));	// 66330 inc     di ;~ 1F3E:030F
cs=0x1f3e;eip=0x000310; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 66331 mov     [bp+var_2], al ;~ 1F3E:0310
cs=0x1f3e;eip=0x000313; 	T(OR(al, al));	// 66332 or      al, al ;~ 1F3E:0313
cs=0x1f3e;eip=0x000315; 	R(JNZ(loc_2dcc1));	// 66333 jnz     short loc_2DCC1 ;~ 1F3E:0315
cs=0x1f3e;eip=0x000317; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), di));	// 66334 mov     [bp+arg_0], di ;~ 1F3E:0317
cs=0x1f3e;eip=0x00031a; 	T(MOV(ax, si));	// 66335 mov     ax, si ;~ 1F3E:031A
cs=0x1f3e;eip=0x00031c; 	X(POP(si));	// 66336 pop     si ;~ 1F3E:031C
cs=0x1f3e;eip=0x00031d; 	X(POP(di));	// 66337 pop     di ;~ 1F3E:031D
cs=0x1f3e;eip=0x00031e; 	T(MOV(sp, bp));	// 66338 mov     sp, bp ;~ 1F3E:031E
cs=0x1f3e;eip=0x000320; 	X(POP(bp));	// 66339 pop     bp ;~ 1F3E:0320
cs=0x1f3e;eip=0x000321; 	R(RETF(2));	// 66340 retf    2 ;~ 1F3E:0321
sub_2dce4:
	// 66348 
#undef var_4
#define var_4 -4
	// 66351 var_4           = word ptr -4 ;~ 1F3E:0324
#undef var_2
#define var_2 -2
	// 66352 var_2           = byte ptr -2 ;~ 1F3E:0324
#undef arg_0
#define arg_0 6
	// 66353 arg_0           = word ptr  6 ;~ 1F3E:0324
#undef arg_2
#define arg_2 8
	// 66354 arg_2           = word ptr  8 ;~ 1F3E:0324
#undef arg_4
#define arg_4 0x0A
	// 66355 arg_4           = word ptr  0Ah ;~ 1F3E:0324
cs=0x1f3e;eip=0x000324; 	X(PUSH(bp));	// 66357 push    bp ;~ 1F3E:0324
cs=0x1f3e;eip=0x000325; 	T(MOV(bp, sp));	// 66358 mov     bp, sp ;~ 1F3E:0325
cs=0x1f3e;eip=0x000327; 	T(SUB(sp, 4));	// 66359 sub     sp, 4 ;~ 1F3E:0327
cs=0x1f3e;eip=0x00032a; 	X(PUSH(di));	// 66360 push    di ;~ 1F3E:032A
cs=0x1f3e;eip=0x00032b; 	X(PUSH(si));	// 66361 push    si ;~ 1F3E:032B
cs=0x1f3e;eip=0x00032c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 66362 mov     si, [bp+arg_4] ;~ 1F3E:032C
cs=0x1f3e;eip=0x00032f; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_4))));	// 66363 mov     di, [bp+var_4] ;~ 1F3E:032F
cs=0x1f3e;eip=0x000332; 	R(JMP(loc_2dd12));	// 66364 jmp     short loc_2DD12 ;~ 1F3E:0332
loc_2dcf4:
	// 8668 
cs=0x1f3e;eip=0x000334; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 66368 mov     al, [bp+var_2] ;~ 1F3E:0334
cs=0x1f3e;eip=0x000337; 	T(SUB(ah, ah));	// 66369 sub     ah, ah ;~ 1F3E:0337
cs=0x1f3e;eip=0x000339; 	T(MOV(di, ax));	// 66370 mov     di, ax ;~ 1F3E:0339
cs=0x1f3e;eip=0x00033b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 66371 push    [bp+arg_0] ;~ 1F3E:033B
cs=0x1f3e;eip=0x00033e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 66372 push    [bp+arg_2] ;~ 1F3E:033E
cs=0x1f3e;eip=0x000341; 	X(PUSH(di));	// 66373 push    di ;~ 1F3E:0341
cs=0x1f3e;eip=0x000342; 	R(CALLF(sub_2e4b0,0));	// 66374 call    sub_2E4B0 ;~ 1F3E:0342
cs=0x1f3e;eip=0x000347; 	T(ADD(sp, 6));	// 66375 add     sp, 6 ;~ 1F3E:0347
cs=0x1f3e;eip=0x00034a; 	X(PUSH(di));	// 66376 push    di ;~ 1F3E:034A
cs=0x1f3e;eip=0x00034b; 	X(PUSH(cs));	// 66377 push    cs ;~ 1F3E:034B
cs=0x1f3e;eip=0x00034c; 	R(CALL(sub_2dc86,0));	// 66378 call    near ptr sub_2DC86 ;~ 1F3E:034C
cs=0x1f3e;eip=0x00034f; 	X(ADD(*(dw*)(raddr(ss,bp+arg_2)), ax));	// 66379 add     [bp+arg_2], ax ;~ 1F3E:034F
loc_2dd12:
	// 8669 
cs=0x1f3e;eip=0x000352; 	T(LODSB);	// 66382 lodsb ;~ 1F3E:0352
cs=0x1f3e;eip=0x000353; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 66383 mov     [bp+var_2], al ;~ 1F3E:0353
cs=0x1f3e;eip=0x000356; 	T(OR(al, al));	// 66384 or      al, al ;~ 1F3E:0356
cs=0x1f3e;eip=0x000358; 	R(JNZ(loc_2dcf4));	// 66385 jnz     short loc_2DCF4 ;~ 1F3E:0358
cs=0x1f3e;eip=0x00035a; 	X(POP(si));	// 66386 pop     si ;~ 1F3E:035A
cs=0x1f3e;eip=0x00035b; 	X(POP(di));	// 66387 pop     di ;~ 1F3E:035B
cs=0x1f3e;eip=0x00035c; 	T(MOV(sp, bp));	// 66388 mov     sp, bp ;~ 1F3E:035C
cs=0x1f3e;eip=0x00035e; 	X(POP(bp));	// 66389 pop     bp ;~ 1F3E:035E
cs=0x1f3e;eip=0x00035f; 	R(RETF(6));	// 66390 retf    6 ;~ 1F3E:035F
sub_2dd68:
	// 66436 
#undef var_2
#define var_2 -2
	// 66439 var_2           = byte ptr -2 ;~ 1F3E:03A8
#undef arg_0
#define arg_0 6
	// 66440 arg_0           = word ptr  6 ;~ 1F3E:03A8
#undef arg_2
#define arg_2 8
	// 66441 arg_2           = word ptr  8 ;~ 1F3E:03A8
#undef arg_4
#define arg_4 0x0A
	// 66442 arg_4           = word ptr  0Ah ;~ 1F3E:03A8
cs=0x1f3e;eip=0x0003a8; 	X(PUSH(bp));	// 66444 push    bp ;~ 1F3E:03A8
cs=0x1f3e;eip=0x0003a9; 	T(MOV(bp, sp));	// 66445 mov     bp, sp ;~ 1F3E:03A9
cs=0x1f3e;eip=0x0003ab; 	T(SUB(sp, 2));	// 66446 sub     sp, 2 ;~ 1F3E:03AB
cs=0x1f3e;eip=0x0003ae; 	X(PUSH(di));	// 66447 push    di ;~ 1F3E:03AE
cs=0x1f3e;eip=0x0003af; 	X(PUSH(si));	// 66448 push    si ;~ 1F3E:03AF
cs=0x1f3e;eip=0x0003b0; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 66449 mov     si, [bp+arg_4] ;~ 1F3E:03B0
cs=0x1f3e;eip=0x0003b3; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 66450 mov     di, [bp+arg_2] ;~ 1F3E:03B3
cs=0x1f3e;eip=0x0003b6; 	R(JMP(loc_2dd8a));	// 66451 jmp     short loc_2DD8A ;~ 1F3E:03B6
loc_2dd78:
	// 8672 
cs=0x1f3e;eip=0x0003b8; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 66455 mov     al, [bp+var_2] ;~ 1F3E:03B8
cs=0x1f3e;eip=0x0003bb; 	T(SUB(ah, ah));	// 66456 sub     ah, ah ;~ 1F3E:03BB
cs=0x1f3e;eip=0x0003bd; 	X(PUSH(ax));	// 66457 push    ax ;~ 1F3E:03BD
cs=0x1f3e;eip=0x0003be; 	X(PUSH(di));	// 66458 push    di ;~ 1F3E:03BE
cs=0x1f3e;eip=0x0003bf; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 66459 push    [bp+arg_0] ;~ 1F3E:03BF
cs=0x1f3e;eip=0x0003c2; 	R(CALLF(sub_2e285,0));	// 66460 call    sub_2E285 ;~ 1F3E:03C2
cs=0x1f3e;eip=0x0003c7; 	T(ADD(di, 4));	// 66461 add     di, 4 ;~ 1F3E:03C7
loc_2dd8a:
	// 8673 
cs=0x1f3e;eip=0x0003ca; 	T(LODSB);	// 66464 lodsb ;~ 1F3E:03CA
cs=0x1f3e;eip=0x0003cb; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 66465 mov     [bp+var_2], al ;~ 1F3E:03CB
cs=0x1f3e;eip=0x0003ce; 	T(OR(al, al));	// 66466 or      al, al ;~ 1F3E:03CE
cs=0x1f3e;eip=0x0003d0; 	R(JNZ(loc_2dd78));	// 66467 jnz     short loc_2DD78 ;~ 1F3E:03D0
cs=0x1f3e;eip=0x0003d2; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), di));	// 66468 mov     [bp+arg_2], di ;~ 1F3E:03D2
cs=0x1f3e;eip=0x0003d5; 	X(POP(si));	// 66469 pop     si ;~ 1F3E:03D5
cs=0x1f3e;eip=0x0003d6; 	X(POP(di));	// 66470 pop     di ;~ 1F3E:03D6
cs=0x1f3e;eip=0x0003d7; 	T(MOV(sp, bp));	// 66471 mov     sp, bp ;~ 1F3E:03D7
cs=0x1f3e;eip=0x0003d9; 	X(POP(bp));	// 66472 pop     bp ;~ 1F3E:03D9
cs=0x1f3e;eip=0x0003da; 	R(RETF(6));	// 66473 retf    6 ;~ 1F3E:03DA
sub_2dd9d:
	// 66480 
cs=0x1f3e;eip=0x0003dd; 	T(MOV(ax, 0x230));	// 66482 mov     ax, 230h ;~ 1F3E:03DD
cs=0x1f3e;eip=0x0003e0; 	X(PUSH(ax));	// 66483 push    ax ;~ 1F3E:03E0
cs=0x1f3e;eip=0x0003e1; 	R(CALL(sub_2dba3,0));	// 66484 call    sub_2DBA3 ;~ 1F3E:03E1
cs=0x1f3e;eip=0x0003e4; 	X(MOV(*(dw*)((&unk_5688a)), ax));	// 66485 mov     word ptr unk_5688A, ax ;~ 1F3E:03E4
cs=0x1f3e;eip=0x0003e7; 	X(MOV(*(dw*)((&unk_5688c)), dx));	// 66486 mov     word ptr unk_5688C, dx ;~ 1F3E:03E7
cs=0x1f3e;eip=0x0003eb; 	T(MOV(ax, 0x239));	// 66487 mov     ax, 239h ;~ 1F3E:03EB
cs=0x1f3e;eip=0x0003ee; 	X(PUSH(ax));	// 66488 push    ax ;~ 1F3E:03EE
cs=0x1f3e;eip=0x0003ef; 	R(CALL(sub_2dba3,0));	// 66489 call    sub_2DBA3 ;~ 1F3E:03EF
cs=0x1f3e;eip=0x0003f2; 	X(MOV(*(dw*)((&unk_56886)), ax));	// 66490 mov     word ptr unk_56886, ax ;~ 1F3E:03F2
cs=0x1f3e;eip=0x0003f5; 	X(MOV(*(dw*)((&unk_56888)), dx));	// 66491 mov     word ptr unk_56888, dx ;~ 1F3E:03F5
cs=0x1f3e;eip=0x0003f9; 	R(RETF(0));	// 66492 retf ;~ 1F3E:03F9
sub_2ddba:
	// 66499 
cs=0x1f3e;eip=0x0003fa; 	X(PUSH(*(dw*)((&unk_56888))));	// 66501 push    word ptr unk_56888 ;~ 1F3E:03FA
cs=0x1f3e;eip=0x0003fe; 	X(PUSH(*(dw*)((&unk_56886))));	// 66502 push    word ptr unk_56886 ;~ 1F3E:03FE
cs=0x1f3e;eip=0x000402; 	R(CALL(sub_2dc65,0));	// 66503 call    sub_2DC65 ;~ 1F3E:0402
cs=0x1f3e;eip=0x000405; 	X(PUSH(*(dw*)((&unk_5688c))));	// 66504 push    word ptr unk_5688C ;~ 1F3E:0405
cs=0x1f3e;eip=0x000409; 	X(PUSH(*(dw*)((&unk_5688a))));	// 66505 push    word ptr unk_5688A ;~ 1F3E:0409
cs=0x1f3e;eip=0x00040d; 	R(CALL(sub_2dc65,0));	// 66506 call    sub_2DC65 ;~ 1F3E:040D
cs=0x1f3e;eip=0x000410; 	R(RETF(0));	// 66507 retf ;~ 1F3E:0410

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2d9fc: 	goto loc_2d9fc;
        case m2c::kloc_2da12: 	goto loc_2da12;
        case m2c::kloc_2da8f: 	goto loc_2da8f;
        case m2c::kloc_2dabd: 	goto loc_2dabd;
        case m2c::kloc_2dad8: 	goto loc_2dad8;
        case m2c::kloc_2dade: 	goto loc_2dade;
        case m2c::kloc_2daed: 	goto loc_2daed;
        case m2c::kloc_2daf9: 	goto loc_2daf9;
        case m2c::kloc_2db05: 	goto loc_2db05;
        case m2c::kloc_2db26: 	goto loc_2db26;
        case m2c::kloc_2db3a: 	goto loc_2db3a;
        case m2c::kloc_2dbce: 	goto loc_2dbce;
        case m2c::kloc_2dbe4: 	goto loc_2dbe4;
        case m2c::kloc_2dc5f: 	goto loc_2dc5f;
        case m2c::kloc_2dc82: 	goto loc_2dc82;
        case m2c::kloc_2dcc1: 	goto loc_2dcc1;
        case m2c::kloc_2dccd: 	goto loc_2dccd;
        case m2c::kloc_2dcf4: 	goto loc_2dcf4;
        case m2c::kloc_2dd12: 	goto loc_2dd12;
        case m2c::kloc_2dd32: 	goto loc_2dd32;
        case m2c::kloc_2dd4d: 	goto loc_2dd4d;
        case m2c::kloc_2dd78: 	goto loc_2dd78;
        case m2c::kloc_2dd8a: 	goto loc_2dd8a;
        case m2c::knullsub_10: 	goto nullsub_10;
        case m2c::knullsub_11: 	goto nullsub_11;
        case m2c::kseg004_proc: 	goto seg004_proc;
        case m2c::ksub_2d9cc: 	goto sub_2d9cc;
        case m2c::ksub_2db40: 	goto sub_2db40;
        case m2c::ksub_2db50: 	goto sub_2db50;
        case m2c::ksub_2db87: 	goto sub_2db87;
        case m2c::ksub_2dba3: 	goto sub_2dba3;
        case m2c::ksub_2dc65: 	goto sub_2dc65;
        case m2c::ksub_2dc86: 	goto sub_2dc86;
        case m2c::ksub_2dcb2: 	goto sub_2dcb2;
        case m2c::ksub_2dce4: 	goto sub_2dce4;
        case m2c::ksub_2dd68: 	goto sub_2dd68;
        case m2c::ksub_2dd9d: 	goto sub_2dd9d;
        case m2c::ksub_2ddba: 	goto sub_2ddba;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

