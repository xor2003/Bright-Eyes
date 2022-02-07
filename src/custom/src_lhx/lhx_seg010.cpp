/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group9:
    _begin:
sub_2ee6e:
	// 68838 
cs=0x2088;eip=0x00000e; 	T(MOV(ax, ds));	// 68840 mov     ax, ds ;~ 2088:000E
cs=0x2088;eip=0x000010; 	R(RETF(0));	// 68841 retf ;~ 2088:0010
sub_2ee71:
	// 68848 
cs=0x2088;eip=0x000011; 	R(CALLF(sub_36c43,0));	// 68850 call    sub_36C43 ;~ 2088:0011
cs=0x2088;eip=0x000016; 	T(CMP(ah, 0x66));	// 68851 cmp     ah, 66h ; 'f' ;~ 2088:0016
cs=0x2088;eip=0x000019; 	R(JC(loc_2ee8e));	// 68852 jb      short loc_2EE8E ;~ 2088:0019
cs=0x2088;eip=0x00001b; 	T(CMP(ah, 0x6F));	// 68853 cmp     ah, 6Fh ; 'o' ;~ 2088:001B
cs=0x2088;eip=0x00001e; 	R(JA(loc_2ee8e));	// 68854 ja      short loc_2EE8E ;~ 2088:001E
cs=0x2088;eip=0x000020; 	T(SUB(ah, 0x66));	// 68855 sub     ah, 66h ; 'f' ;~ 2088:0020
cs=0x2088;eip=0x000023; 	T(bx = offset(dseg,aghikmopqrs));	// 68856 lea     bx, aGhikmopqrs ; "GHIKMOPQRS" ;~ 2088:0023
cs=0x2088;eip=0x000027; 	T(ADD(bl, ah));	// 68857 add     bl, ah ;~ 2088:0027
cs=0x2088;eip=0x000029; 	T(ADC(bh, 0));	// 68858 adc     bh, 0 ;~ 2088:0029
cs=0x2088;eip=0x00002c; 	T(MOV(ah, *(raddr(ds,bx))));	// 68859 mov     ah, [bx] ;~ 2088:002C
loc_2ee8e:
	// 8801 
cs=0x2088;eip=0x00002e; 	T(CMP(ah, 0x53));	// 68863 cmp     ah, 53h ; 'S' ;~ 2088:002E
cs=0x2088;eip=0x000031; 	R(JNZ(loc_2eea9));	// 68864 jnz     short loc_2EEA9 ;~ 2088:0031
cs=0x2088;eip=0x000033; 	T(CMP(unk_4a2b8, 0));	// 68865 cmp     byte ptr unk_4A2B8, 0 ;~ 2088:0033
cs=0x2088;eip=0x000038; 	R(JZ(loc_2eea9));	// 68866 jz      short loc_2EEA9 ;~ 2088:0038
cs=0x2088;eip=0x00003a; 	T(CMP(unk_4a2b7, 0));	// 68867 cmp     byte ptr unk_4A2B7, 0 ;~ 2088:003A
cs=0x2088;eip=0x00003f; 	R(JZ(loc_2eea9));	// 68868 jz      short loc_2EEA9 ;~ 2088:003F
cs=0x2088;eip=0x000041; 	T(XOR(ax, ax));	// 68869 xor     ax, ax ;~ 2088:0041
cs=0x2088;eip=0x000043; 	X(PUSH(ax));	// 68870 push    ax ;~ 2088:0043
cs=0x2088;eip=0x000044; 	R(CALLF(sub_2f7e0,0));	// 68871 call    sub_2F7E0 ;~ 2088:0044
loc_2eea9:
	// 8802 
cs=0x2088;eip=0x000049; 	T(CMP(ah, 0x3B));	// 68876 cmp     ah, 3Bh ; ';' ;~ 2088:0049
cs=0x2088;eip=0x00004c; 	R(JC(loc_2eeca));	// 68877 jb      short loc_2EECA ;~ 2088:004C
cs=0x2088;eip=0x00004e; 	T(CMP(ah, 0x53));	// 68878 cmp     ah, 53h ; 'S' ;~ 2088:004E
cs=0x2088;eip=0x000051; 	R(JA(loc_2eeca));	// 68879 ja      short loc_2EECA ;~ 2088:0051
cs=0x2088;eip=0x000053; 	T(XOR(al, al));	// 68880 xor     al, al ;~ 2088:0053
cs=0x2088;eip=0x000055; 	T(CMP(unk_4a2b8, 0));	// 68881 cmp     byte ptr unk_4A2B8, 0 ;~ 2088:0055
cs=0x2088;eip=0x00005a; 	R(JZ(loc_2eebf));	// 68882 jz      short loc_2EEBF ;~ 2088:005A
cs=0x2088;eip=0x00005c; 	T(MOV(al, 1));	// 68883 mov     al, 1 ;~ 2088:005C
cs=0x2088;eip=0x00005e; 	R(RETF(0));	// 68884 retf ;~ 2088:005E
loc_2eebf:
	// 8803 
cs=0x2088;eip=0x00005f; 	T(CMP(unk_4a2b6, 0));	// 68888 cmp     byte ptr unk_4A2B6, 0 ;~ 2088:005F
cs=0x2088;eip=0x000064; 	R(JZ(locret_2eec9));	// 68889 jz      short locret_2EEC9 ;~ 2088:0064
cs=0x2088;eip=0x000066; 	T(MOV(al, 2));	// 68890 mov     al, 2 ;~ 2088:0066
cs=0x2088;eip=0x000068; 	R(RETF(0));	// 68891 retf ;~ 2088:0068
locret_2eec9:
	// 8804 
cs=0x2088;eip=0x000069; 	R(RETF(0));	// 68895 retf ;~ 2088:0069
loc_2eeca:
	// 8805 
cs=0x2088;eip=0x00006a; 	T(OR(ax, ax));	// 68900 or      ax, ax ;~ 2088:006A
cs=0x2088;eip=0x00006c; 	R(JZ(locret_2eee1));	// 68901 jz      short locret_2EEE1 ;~ 2088:006C
cs=0x2088;eip=0x00006e; 	T(XOR(ah, ah));	// 68902 xor     ah, ah ;~ 2088:006E
cs=0x2088;eip=0x000070; 	T(CMP(unk_4a2b8, 0));	// 68903 cmp     byte ptr unk_4A2B8, 0 ;~ 2088:0070
cs=0x2088;eip=0x000075; 	R(JZ(locret_2eee1));	// 68904 jz      short locret_2EEE1 ;~ 2088:0075
cs=0x2088;eip=0x000077; 	T(CMP(al, 0x61));	// 68905 cmp     al, 61h ; 'a' ;~ 2088:0077
cs=0x2088;eip=0x000079; 	R(JC(locret_2eee1));	// 68906 jb      short locret_2EEE1 ;~ 2088:0079
cs=0x2088;eip=0x00007b; 	T(CMP(al, 0x7A));	// 68907 cmp     al, 7Ah ; 'z' ;~ 2088:007B
cs=0x2088;eip=0x00007d; 	R(JA(locret_2eee1));	// 68908 ja      short locret_2EEE1 ;~ 2088:007D
cs=0x2088;eip=0x00007f; 	T(SUB(al, 0x60));	// 68909 sub     al, 60h ; '`' ;~ 2088:007F
locret_2eee1:
	// 8806 
cs=0x2088;eip=0x000081; 	R(RETF(0));	// 68913 retf ;~ 2088:0081
sub_2eee2:
	// 68920 
cs=0x2088;eip=0x000082; 	R(CALLF(nullsub_9,0));	// 68922 call    nullsub_9 ;~ 2088:0082
loc_2eee7:
	// 8807 
cs=0x2088;eip=0x000087; 	R(CALLF(sub_2ee71,0));	// 68925 call    sub_2EE71 ;~ 2088:0087
cs=0x2088;eip=0x00008c; 	X(INC(*(dw*)((&unk_56ff7))));	// 68926 inc     word ptr unk_56FF7 ;~ 2088:008C
cs=0x2088;eip=0x000090; 	T(OR(ax, ax));	// 68927 or      ax, ax ;~ 2088:0090
cs=0x2088;eip=0x000092; 	R(JZ(loc_2eee7));	// 68928 jz      short loc_2EEE7 ;~ 2088:0092
cs=0x2088;eip=0x000094; 	R(RETF(0));	// 68929 retf ;~ 2088:0094
sub_2eef5:
	// 68936 
cs=0x2088;eip=0x000095; 	T(XOR(ax, ax));	// 68937 xor     ax, ax ;~ 2088:0095
cs=0x2088;eip=0x000097; 	T(CMP(unk_4a2b7, 0));	// 68938 cmp     byte ptr unk_4A2B7, 0 ;~ 2088:0097
cs=0x2088;eip=0x00009c; 	R(JZ(locret_2ef01));	// 68939 jz      short locret_2EF01 ;~ 2088:009C
cs=0x2088;eip=0x00009e; 	T(MOV(ax, 8));	// 68940 mov     ax, 8 ;~ 2088:009E
locret_2ef01:
	// 8808 
cs=0x2088;eip=0x0000a1; 	R(RETF(0));	// 68943 retf ;~ 2088:00A1
sub_2ef02:
	// 68951 
#undef arg_0
#define arg_0 6
	// 68954 arg_0           = word ptr  6 ;~ 2088:00A2
#undef arg_2
#define arg_2 8
	// 68955 arg_2           = word ptr  8 ;~ 2088:00A2
#undef arg_4
#define arg_4 0x0A
	// 68956 arg_4           = word ptr  0Ah ;~ 2088:00A2
#undef arg_6
#define arg_6 0x0C
	// 68957 arg_6           = word ptr  0Ch ;~ 2088:00A2
cs=0x2088;eip=0x0000a2; 	X(PUSH(bp));	// 68959 push    bp ;~ 2088:00A2
cs=0x2088;eip=0x0000a3; 	T(MOV(bp, sp));	// 68960 mov     bp, sp ;~ 2088:00A3
cs=0x2088;eip=0x0000a5; 	X(PUSH(di));	// 68961 push    di ;~ 2088:00A5
cs=0x2088;eip=0x0000a6; 	X(PUSH(si));	// 68962 push    si ;~ 2088:00A6
cs=0x2088;eip=0x0000a7; 	T(XOR(si, si));	// 68963 xor     si, si ;~ 2088:00A7
cs=0x2088;eip=0x0000a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 68964 mov     ax, [bp+arg_6] ;~ 2088:00A9
cs=0x2088;eip=0x0000ac; 	T(TEST(ax, ax));	// 68965 test    ax, ax ;~ 2088:00AC
cs=0x2088;eip=0x0000ae; 	R(JNS(loc_2ef1c));	// 68966 jns     short loc_2EF1C ;~ 2088:00AE
cs=0x2088;eip=0x0000b0; 	X(NOT(*(dw*)(raddr(ss,bp+arg_6))));	// 68967 not     [bp+arg_6] ;~ 2088:00B0
cs=0x2088;eip=0x0000b3; 	X(NEG(*(dw*)(raddr(ss,bp+arg_4))));	// 68968 neg     [bp+arg_4] ;~ 2088:00B3
cs=0x2088;eip=0x0000b6; 	X(SBB(*(dw*)(raddr(ss,bp+arg_6)), 0x0FFFF));	// 68969 sbb     [bp+arg_6], 0FFFFh ;~ 2088:00B6
cs=0x2088;eip=0x0000ba; 	T(NOT(si));	// 68970 not     si ;~ 2088:00BA
loc_2ef1c:
	// 8809 
cs=0x2088;eip=0x0000bc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 68973 mov     ax, [bp+arg_2] ;~ 2088:00BC
cs=0x2088;eip=0x0000bf; 	T(TEST(ax, ax));	// 68974 test    ax, ax ;~ 2088:00BF
cs=0x2088;eip=0x0000c1; 	R(JNS(loc_2ef2f));	// 68975 jns     short loc_2EF2F ;~ 2088:00C1
cs=0x2088;eip=0x0000c3; 	X(NOT(*(dw*)(raddr(ss,bp+arg_2))));	// 68976 not     [bp+arg_2] ;~ 2088:00C3
cs=0x2088;eip=0x0000c6; 	X(NEG(*(dw*)(raddr(ss,bp+arg_0))));	// 68977 neg     [bp+arg_0] ;~ 2088:00C6
cs=0x2088;eip=0x0000c9; 	X(SBB(*(dw*)(raddr(ss,bp+arg_2)), 0x0FFFF));	// 68978 sbb     [bp+arg_2], 0FFFFh ;~ 2088:00C9
cs=0x2088;eip=0x0000cd; 	T(NOT(si));	// 68979 not     si ;~ 2088:00CD
loc_2ef2f:
	// 8810 
cs=0x2088;eip=0x0000cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 68982 mov     ax, [bp+arg_4] ;~ 2088:00CF
cs=0x2088;eip=0x0000d2; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 68983 mul     [bp+arg_0] ;~ 2088:00D2
cs=0x2088;eip=0x0000d5; 	T(MOV(bx, dx));	// 68984 mov     bx, dx ;~ 2088:00D5
cs=0x2088;eip=0x0000d7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 68985 mov     ax, [bp+arg_6] ;~ 2088:00D7
cs=0x2088;eip=0x0000da; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 68986 mul     [bp+arg_2] ;~ 2088:00DA
cs=0x2088;eip=0x0000dd; 	T(MOV(cx, ax));	// 68987 mov     cx, ax ;~ 2088:00DD
cs=0x2088;eip=0x0000df; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 68988 mov     ax, [bp+arg_4] ;~ 2088:00DF
cs=0x2088;eip=0x0000e2; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 68989 mul     [bp+arg_2] ;~ 2088:00E2
cs=0x2088;eip=0x0000e5; 	T(ADD(bx, ax));	// 68990 add     bx, ax ;~ 2088:00E5
cs=0x2088;eip=0x0000e7; 	T(ADC(cx, dx));	// 68991 adc     cx, dx ;~ 2088:00E7
cs=0x2088;eip=0x0000e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 68992 mov     ax, [bp+arg_6] ;~ 2088:00E9
cs=0x2088;eip=0x0000ec; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 68993 mul     [bp+arg_0] ;~ 2088:00EC
cs=0x2088;eip=0x0000ef; 	T(ADD(ax, bx));	// 68994 add     ax, bx ;~ 2088:00EF
cs=0x2088;eip=0x0000f1; 	T(ADC(dx, cx));	// 68995 adc     dx, cx ;~ 2088:00F1
cs=0x2088;eip=0x0000f3; 	T(TEST(si, si));	// 68996 test    si, si ;~ 2088:00F3
cs=0x2088;eip=0x0000f5; 	R(JNS(loc_2ef5e));	// 68997 jns     short loc_2EF5E ;~ 2088:00F5
cs=0x2088;eip=0x0000f7; 	T(NOT(dx));	// 68998 not     dx ;~ 2088:00F7
cs=0x2088;eip=0x0000f9; 	T(NEG(ax));	// 68999 neg     ax ;~ 2088:00F9
cs=0x2088;eip=0x0000fb; 	T(SBB(dx, 0x0FFFF));	// 69000 sbb     dx, 0FFFFh ;~ 2088:00FB
loc_2ef5e:
	// 8811 
cs=0x2088;eip=0x0000fe; 	X(POP(si));	// 69003 pop     si ;~ 2088:00FE
cs=0x2088;eip=0x0000ff; 	X(POP(di));	// 69004 pop     di ;~ 2088:00FF
cs=0x2088;eip=0x000100; 	X(POP(bp));	// 69005 pop     bp ;~ 2088:0100
cs=0x2088;eip=0x000101; 	R(RETF(8));	// 69006 retf    8 ;~ 2088:0101
sub_2ef64:
	// 69014 
#undef arg_0
#define arg_0 6
	// 69017 arg_0           = word ptr  6 ;~ 2088:0104
#undef arg_2
#define arg_2 8
	// 69018 arg_2           = word ptr  8 ;~ 2088:0104
#undef arg_4
#define arg_4 0x0A
	// 69019 arg_4           = word ptr  0Ah ;~ 2088:0104
#undef arg_6
#define arg_6 0x0C
	// 69020 arg_6           = word ptr  0Ch ;~ 2088:0104
cs=0x2088;eip=0x000104; 	X(PUSH(bp));	// 69022 push    bp ;~ 2088:0104
cs=0x2088;eip=0x000105; 	T(MOV(bp, sp));	// 69023 mov     bp, sp ;~ 2088:0105
cs=0x2088;eip=0x000107; 	T(XOR(cx, cx));	// 69024 xor     cx, cx ;~ 2088:0107
cs=0x2088;eip=0x000109; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 69025 cmp     [bp+arg_6], 0 ;~ 2088:0109
cs=0x2088;eip=0x00010d; 	R(JGE(loc_2ef84));	// 69026 jge     short loc_2EF84 ;~ 2088:010D
cs=0x2088;eip=0x00010f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 69027 mov     ax, [bp+arg_4] ;~ 2088:010F
cs=0x2088;eip=0x000112; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 69028 mov     dx, [bp+arg_6] ;~ 2088:0112
cs=0x2088;eip=0x000115; 	T(NEG(ax));	// 69029 neg     ax ;~ 2088:0115
cs=0x2088;eip=0x000117; 	T(ADC(dx, 0));	// 69030 adc     dx, 0 ;~ 2088:0117
cs=0x2088;eip=0x00011a; 	T(NEG(dx));	// 69031 neg     dx ;~ 2088:011A
cs=0x2088;eip=0x00011c; 	X(MOV(*(dw*)(raddr(ss,bp+arg_4)), ax));	// 69032 mov     [bp+arg_4], ax ;~ 2088:011C
cs=0x2088;eip=0x00011f; 	X(MOV(*(dw*)(raddr(ss,bp+arg_6)), dx));	// 69033 mov     [bp+arg_6], dx ;~ 2088:011F
cs=0x2088;eip=0x000122; 	T(NOT(cx));	// 69034 not     cx ;~ 2088:0122
loc_2ef84:
	// 8812 
cs=0x2088;eip=0x000124; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 69037 cmp     [bp+arg_2], 0 ;~ 2088:0124
cs=0x2088;eip=0x000128; 	R(JGE(loc_2ef9f));	// 69038 jge     short loc_2EF9F ;~ 2088:0128
cs=0x2088;eip=0x00012a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 69039 mov     ax, [bp+arg_0] ;~ 2088:012A
cs=0x2088;eip=0x00012d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 69040 mov     dx, [bp+arg_2] ;~ 2088:012D
cs=0x2088;eip=0x000130; 	T(NEG(ax));	// 69041 neg     ax ;~ 2088:0130
cs=0x2088;eip=0x000132; 	T(ADC(dx, 0));	// 69042 adc     dx, 0 ;~ 2088:0132
cs=0x2088;eip=0x000135; 	T(NEG(dx));	// 69043 neg     dx ;~ 2088:0135
cs=0x2088;eip=0x000137; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 69044 mov     [bp+arg_0], ax ;~ 2088:0137
cs=0x2088;eip=0x00013a; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), dx));	// 69045 mov     [bp+arg_2], dx ;~ 2088:013A
cs=0x2088;eip=0x00013d; 	T(NOT(cx));	// 69046 not     cx ;~ 2088:013D
loc_2ef9f:
	// 8813 
cs=0x2088;eip=0x00013f; 	T(MOV(bx, cx));	// 69049 mov     bx, cx ;~ 2088:013F
loc_2efa1:
	// 8814 
cs=0x2088;eip=0x000141; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 69052 mov     cx, [bp+arg_2] ;~ 2088:0141
cs=0x2088;eip=0x000144; 	R(JCXZ(loc_2efb4));	// 69053 jcxz    short loc_2EFB4 ;~ 2088:0144
cs=0x2088;eip=0x000146; 	X(SAR(*(dw*)(raddr(ss,bp+arg_6)), 1));	// 69054 sar     [bp+arg_6], 1 ;~ 2088:0146
cs=0x2088;eip=0x000149; 	X(RCR(*(dw*)(raddr(ss,bp+arg_4)), 1));	// 69055 rcr     [bp+arg_4], 1 ;~ 2088:0149
cs=0x2088;eip=0x00014c; 	X(SAR(*(dw*)(raddr(ss,bp+arg_2)), 1));	// 69056 sar     [bp+arg_2], 1 ;~ 2088:014C
cs=0x2088;eip=0x00014f; 	X(RCR(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 69057 rcr     [bp+arg_0], 1 ;~ 2088:014F
cs=0x2088;eip=0x000152; 	R(JMP(loc_2efa1));	// 69058 jmp     short loc_2EFA1 ;~ 2088:0152
loc_2efb4:
	// 8815 
cs=0x2088;eip=0x000154; 	T(MOV(cx, bx));	// 69062 mov     cx, bx ;~ 2088:0154
cs=0x2088;eip=0x000156; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 69063 mov     ax, [bp+arg_4] ;~ 2088:0156
cs=0x2088;eip=0x000159; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 69064 mov     dx, [bp+arg_6] ;~ 2088:0159
cs=0x2088;eip=0x00015c; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 69065 cmp     dx, [bp+arg_0] ;~ 2088:015C
cs=0x2088;eip=0x00015f; 	R(JC(loc_2efc9));	// 69066 jb      short loc_2EFC9 ;~ 2088:015F
cs=0x2088;eip=0x000161; 	T(MOV(ax, 0x7FFF));	// 69067 mov     ax, 7FFFh ;~ 2088:0161
cs=0x2088;eip=0x000164; 	T(XOR(dx, dx));	// 69068 xor     dx, dx ;~ 2088:0164
cs=0x2088;eip=0x000166; 	R(JMP(loc_2efce));	// 69069 jmp     short loc_2EFCE ;~ 2088:0166
loc_2efc9:
	// 8816 
cs=0x2088;eip=0x000169; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69075 div     [bp+arg_0] ;~ 2088:0169
cs=0x2088;eip=0x00016c; 	T(MOV(bx, ax));	// 69076 mov     bx, ax ;~ 2088:016C
loc_2efce:
	// 8817 
cs=0x2088;eip=0x00016e; 	T(XOR(ax, ax));	// 69079 xor     ax, ax ;~ 2088:016E
cs=0x2088;eip=0x000170; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69080 div     [bp+arg_0] ;~ 2088:0170
cs=0x2088;eip=0x000173; 	T(MOV(dx, bx));	// 69081 mov     dx, bx ;~ 2088:0173
cs=0x2088;eip=0x000175; 	R(JCXZ(loc_2efde));	// 69082 jcxz    short loc_2EFDE ;~ 2088:0175
cs=0x2088;eip=0x000177; 	T(NEG(ax));	// 69083 neg     ax ;~ 2088:0177
cs=0x2088;eip=0x000179; 	T(ADC(dx, 0));	// 69084 adc     dx, 0 ;~ 2088:0179
cs=0x2088;eip=0x00017c; 	T(NEG(dx));	// 69085 neg     dx ;~ 2088:017C
loc_2efde:
	// 8818 
cs=0x2088;eip=0x00017e; 	X(POP(bp));	// 69088 pop     bp ;~ 2088:017E
cs=0x2088;eip=0x00017f; 	R(RETF(8));	// 69089 retf    8 ;~ 2088:017F
sub_2efe2:
	// 69097 
#undef arg_0
#define arg_0 6
	// 69100 arg_0           = word ptr  6 ;~ 2088:0182
#undef arg_2
#define arg_2 8
	// 69101 arg_2           = word ptr  8 ;~ 2088:0182
#undef arg_4
#define arg_4 0x0A
	// 69102 arg_4           = word ptr  0Ah ;~ 2088:0182
cs=0x2088;eip=0x000182; 	X(PUSH(bp));	// 69104 push    bp ;~ 2088:0182
cs=0x2088;eip=0x000183; 	T(MOV(bp, sp));	// 69105 mov     bp, sp ;~ 2088:0183
cs=0x2088;eip=0x000185; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69106 mov     ax, [bp+arg_2] ;~ 2088:0185
cs=0x2088;eip=0x000188; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 69107 mov     dx, [bp+arg_4] ;~ 2088:0188
cs=0x2088;eip=0x00018b; 	X(IDIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69108 idiv    [bp+arg_0] ;~ 2088:018B
cs=0x2088;eip=0x00018e; 	X(POP(bp));	// 69109 pop     bp ;~ 2088:018E
cs=0x2088;eip=0x00018f; 	R(RETF(6));	// 69110 retf    6 ;~ 2088:018F
sub_2eff2:
	// 69118 
#undef arg_0
#define arg_0 6
	// 69121 arg_0           = word ptr  6 ;~ 2088:0192
#undef arg_2
#define arg_2 8
	// 69122 arg_2           = word ptr  8 ;~ 2088:0192
#undef arg_4
#define arg_4 0x0A
	// 69123 arg_4           = word ptr  0Ah ;~ 2088:0192
cs=0x2088;eip=0x000192; 	X(PUSH(bp));	// 69125 push    bp ;~ 2088:0192
cs=0x2088;eip=0x000193; 	T(MOV(bp, sp));	// 69126 mov     bp, sp ;~ 2088:0193
cs=0x2088;eip=0x000195; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69127 mov     ax, [bp+arg_2] ;~ 2088:0195
cs=0x2088;eip=0x000198; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 69128 mov     dx, [bp+arg_4] ;~ 2088:0198
cs=0x2088;eip=0x00019b; 	X(DIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69129 div     [bp+arg_0] ;~ 2088:019B
cs=0x2088;eip=0x00019e; 	X(POP(bp));	// 69130 pop     bp ;~ 2088:019E
cs=0x2088;eip=0x00019f; 	R(RETF(6));	// 69131 retf    6 ;~ 2088:019F
sub_2f002:
	// 69139 
#undef arg_0
#define arg_0 6
	// 69142 arg_0           = word ptr  6 ;~ 2088:01A2
#undef arg_2
#define arg_2 8
	// 69143 arg_2           = word ptr  8 ;~ 2088:01A2
cs=0x2088;eip=0x0001a2; 	X(PUSH(bp));	// 69145 push    bp ;~ 2088:01A2
cs=0x2088;eip=0x0001a3; 	T(MOV(bp, sp));	// 69146 mov     bp, sp ;~ 2088:01A3
cs=0x2088;eip=0x0001a5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69147 mov     ax, [bp+arg_2] ;~ 2088:01A5
cs=0x2088;eip=0x0001a8; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 69148 imul    [bp+arg_0] ;~ 2088:01A8
cs=0x2088;eip=0x0001ab; 	X(POP(bp));	// 69149 pop     bp ;~ 2088:01AB
cs=0x2088;eip=0x0001ac; 	R(RETF(4));	// 69150 retf    4 ;~ 2088:01AC
sub_2f00f:
	// 69158 
#undef arg_0
#define arg_0 6
	// 69161 arg_0           = word ptr  6 ;~ 2088:01AF
#undef arg_2
#define arg_2 8
	// 69162 arg_2           = word ptr  8 ;~ 2088:01AF
cs=0x2088;eip=0x0001af; 	X(PUSH(bp));	// 69164 push    bp ;~ 2088:01AF
cs=0x2088;eip=0x0001b0; 	T(MOV(bp, sp));	// 69165 mov     bp, sp ;~ 2088:01B0
cs=0x2088;eip=0x0001b2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69166 mov     ax, [bp+arg_2] ;~ 2088:01B2
cs=0x2088;eip=0x0001b5; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 69167 mul     [bp+arg_0] ;~ 2088:01B5
cs=0x2088;eip=0x0001b8; 	X(POP(bp));	// 69168 pop     bp ;~ 2088:01B8
cs=0x2088;eip=0x0001b9; 	R(RETF(4));	// 69169 retf    4 ;~ 2088:01B9
sub_2f01c:
	// 69177 
#undef arg_0
#define arg_0 6
	// 69180 arg_0           = word ptr  6 ;~ 2088:01BC
#undef arg_2
#define arg_2 8
	// 69181 arg_2           = word ptr  8 ;~ 2088:01BC
#undef arg_4
#define arg_4 0x0A
	// 69182 arg_4           = word ptr  0Ah ;~ 2088:01BC
cs=0x2088;eip=0x0001bc; 	X(PUSH(bp));	// 69184 push    bp ;~ 2088:01BC
cs=0x2088;eip=0x0001bd; 	T(MOV(bp, sp));	// 69185 mov     bp, sp ;~ 2088:01BD
cs=0x2088;eip=0x0001bf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 69186 mov     ax, [bp+arg_4] ;~ 2088:01BF
cs=0x2088;eip=0x0001c2; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 69187 imul    [bp+arg_2] ;~ 2088:01C2
cs=0x2088;eip=0x0001c5; 	X(IDIV2(*(dw*)(raddr(ss,bp+arg_0))));	// 69188 idiv    [bp+arg_0] ;~ 2088:01C5
cs=0x2088;eip=0x0001c8; 	X(POP(bp));	// 69189 pop     bp ;~ 2088:01C8
cs=0x2088;eip=0x0001c9; 	R(RETF(6));	// 69190 retf    6 ;~ 2088:01C9
sub_2f02c:
	// 69198 
#undef arg_0
#define arg_0 6
	// 69200 arg_0           = word ptr  6 ;~ 2088:01CC
#undef arg_2
#define arg_2 8
	// 69201 arg_2           = word ptr  8 ;~ 2088:01CC
#undef arg_4
#define arg_4 0x0A
	// 69202 arg_4           = word ptr  0Ah ;~ 2088:01CC
cs=0x2088;eip=0x0001cc; 	X(PUSH(bp));	// 69204 push    bp ;~ 2088:01CC
cs=0x2088;eip=0x0001cd; 	T(MOV(bp, sp));	// 69205 mov     bp, sp ;~ 2088:01CD
cs=0x2088;eip=0x0001cf; 	X(PUSH(es));	// 69206 push    es ;~ 2088:01CF
cs=0x2088;eip=0x0001d0; 	X(PUSH(si));	// 69207 push    si ;~ 2088:01D0
cs=0x2088;eip=0x0001d1; 	X(PUSH(di));	// 69208 push    di ;~ 2088:01D1
cs=0x2088;eip=0x0001d2; 	T(MOV(ax, ds));	// 69209 mov     ax, ds ;~ 2088:01D2
cs=0x2088;eip=0x0001d4; 	T(MOV(es, ax));	// 69210 mov     es, ax ;~ 2088:01D4
cs=0x2088;eip=0x0001d6; 	T(CLD);	// 69212 cld ;~ 2088:01D6
cs=0x2088;eip=0x0001d7; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 69213 mov     si, [bp+arg_0] ;~ 2088:01D7
cs=0x2088;eip=0x0001da; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 69214 mov     di, [bp+arg_2] ;~ 2088:01DA
cs=0x2088;eip=0x0001dd; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 69215 mov     cx, [bp+arg_4] ;~ 2088:01DD
cs=0x2088;eip=0x0001e0; 	T(XOR(bh, bh));	// 69216 xor     bh, bh ;~ 2088:01E0
loc_2f042:
	// 8819 
cs=0x2088;eip=0x0001e2; 	T(LODSB);	// 69219 lodsb ;~ 2088:01E2
cs=0x2088;eip=0x0001e3; 	T(MOV(bl, al));	// 69220 mov     bl, al ;~ 2088:01E3
cs=0x2088;eip=0x0001e5; 	T(AND(bl, 0x0F));	// 69221 and     bl, 0Fh ;~ 2088:01E5
cs=0x2088;eip=0x0001e8; 	T(MOV(ah, *(raddr(ds,bx+0x18C))));	// 69222 mov     ah, [bx+18Ch] ;~ 2088:01E8
cs=0x2088;eip=0x0001ec; 	T(MOV(bl, al));	// 69223 mov     bl, al ;~ 2088:01EC
cs=0x2088;eip=0x0001ee; 	T(SHR(bl, 1));	// 69224 shr     bl, 1 ;~ 2088:01EE
cs=0x2088;eip=0x0001f0; 	T(SHR(bl, 1));	// 69225 shr     bl, 1 ;~ 2088:01F0
cs=0x2088;eip=0x0001f2; 	T(SHR(bl, 1));	// 69226 shr     bl, 1 ;~ 2088:01F2
cs=0x2088;eip=0x0001f4; 	T(SHR(bl, 1));	// 69227 shr     bl, 1 ;~ 2088:01F4
cs=0x2088;eip=0x0001f6; 	T(MOV(al, *(raddr(ds,bx+0x18C))));	// 69228 mov     al, [bx+18Ch] ;~ 2088:01F6
cs=0x2088;eip=0x0001fa; 	X(STOSW);	// 69229 stosw ;~ 2088:01FA
cs=0x2088;eip=0x0001fb; 	R(LOOP(loc_2f042));	// 69230 loop    loc_2F042 ;~ 2088:01FB
cs=0x2088;eip=0x0001fd; 	X(POP(di));	// 69231 pop     di ;~ 2088:01FD
cs=0x2088;eip=0x0001fe; 	X(POP(si));	// 69232 pop     si ;~ 2088:01FE
cs=0x2088;eip=0x0001ff; 	X(POP(es));	// 69233 pop     es ;~ 2088:01FF
cs=0x2088;eip=0x000200; 	X(POP(bp));	// 69235 pop     bp ;~ 2088:0200
cs=0x2088;eip=0x000201; 	R(RETF(0));	// 69236 retf ;~ 2088:0201
sub_2f062:
	// 69243 
cs=0x2088;eip=0x000202; 	T(MOV(ah, 0x52));	// 69244 mov     ah, 52h ;~ 2088:0202
cs=0x2088;eip=0x000204; 	R(_INT(0x21));	// 69245 int     21h             ; DOS - 2+ internal - GET LIST OF LISTS ;~ 2088:0204
cs=0x2088;eip=0x000206; 	T(MOV(ax, *(dw*)(raddr(es,bx-2))));	// 69247 mov     ax, es:[bx-2] ;~ 2088:0206
cs=0x2088;eip=0x00020a; 	R(RETF(0));	// 69248 retf ;~ 2088:020A
sub_2f06b:
	// 69256 
#undef arg_0
#define arg_0 6
	// 69258 arg_0           = word ptr  6 ;~ 2088:020B
#undef arg_2
#define arg_2 8
	// 69259 arg_2           = word ptr  8 ;~ 2088:020B
cs=0x2088;eip=0x00020b; 	X(PUSH(bp));	// 69261 push    bp ;~ 2088:020B
cs=0x2088;eip=0x00020c; 	T(MOV(bp, sp));	// 69262 mov     bp, sp ;~ 2088:020C
cs=0x2088;eip=0x00020e; 	X(PUSH(si));	// 69263 push    si ;~ 2088:020E
cs=0x2088;eip=0x00020f; 	T(CLI);	// 69264 cli ;~ 2088:020F
cs=0x2088;eip=0x000210; 	T(MOV(dx, 0x3DA));	// 69265 mov     dx, 3DAh ;~ 2088:0210
loc_2f073:
	// 8820 
cs=0x2088;eip=0x000213; 	R(IN(al, dx));	// 69268 in      al, dx          ; Video status bits: ;~ 2088:0213
cs=0x2088;eip=0x000214; 	T(AND(al, 8));	// 69273 and     al, 8 ;~ 2088:0214
cs=0x2088;eip=0x000216; 	R(JZ(loc_2f073));	// 69274 jz      short loc_2F073 ;~ 2088:0216
cs=0x2088;eip=0x000218; 	T(MOV(dx, 0x3C8));	// 69275 mov     dx, 3C8h ;~ 2088:0218
cs=0x2088;eip=0x00021b; 	T(XOR(al, al));	// 69276 xor     al, al ;~ 2088:021B
cs=0x2088;eip=0x00021d; 	R(OUT(dx, al));	// 69277 out     dx, al ;~ 2088:021D
cs=0x2088;eip=0x00021e; 	R(
);	// 69278 jmp     short $+2 ;~ 2088:021E
loc_2f080:
	// 8821 
cs=0x2088;eip=0x000220; 	T(MOV(dx, 0x3C9));	// 69282 mov     dx, 3C9h ;~ 2088:0220
cs=0x2088;eip=0x000223; 	T(MOV(cx, 0x100));	// 69283 mov     cx, 100h ;~ 2088:0223
cs=0x2088;eip=0x000226; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 69284 mov     si, [bp+arg_0] ;~ 2088:0226
cs=0x2088;eip=0x000229; 	X(PUSH(ds));	// 69285 push    ds ;~ 2088:0229
cs=0x2088;eip=0x00022a; 	T(MOV(ds, *(dw*)(raddr(ss,bp+arg_2))));	// 69286 mov     ds, [bp+arg_2] ;~ 2088:022A
loc_2f08d:
	// 8822 
cs=0x2088;eip=0x00022d; 	T(LODSB);	// 69289 lodsb ;~ 2088:022D
cs=0x2088;eip=0x00022e; 	T(SHR(al, 1));	// 69290 shr     al, 1 ;~ 2088:022E
cs=0x2088;eip=0x000230; 	T(SHR(al, 1));	// 69291 shr     al, 1 ;~ 2088:0230
cs=0x2088;eip=0x000232; 	R(OUT(dx, al));	// 69292 out     dx, al ;~ 2088:0232
cs=0x2088;eip=0x000233; 	R(
);	// 69293 jmp     short $+2 ;~ 2088:0233
loc_2f095:
	// 8823 
cs=0x2088;eip=0x000235; 	T(LODSB);	// 69297 lodsb ;~ 2088:0235
cs=0x2088;eip=0x000236; 	T(SHR(al, 1));	// 69298 shr     al, 1 ;~ 2088:0236
cs=0x2088;eip=0x000238; 	T(SHR(al, 1));	// 69299 shr     al, 1 ;~ 2088:0238
cs=0x2088;eip=0x00023a; 	R(OUT(dx, al));	// 69300 out     dx, al ;~ 2088:023A
cs=0x2088;eip=0x00023b; 	R(
);	// 69301 jmp     short $+2 ;~ 2088:023B
loc_2f09d:
	// 8824 
cs=0x2088;eip=0x00023d; 	T(LODSB);	// 69305 lodsb ;~ 2088:023D
cs=0x2088;eip=0x00023e; 	T(SHR(al, 1));	// 69306 shr     al, 1 ;~ 2088:023E
cs=0x2088;eip=0x000240; 	T(SHR(al, 1));	// 69307 shr     al, 1 ;~ 2088:0240
cs=0x2088;eip=0x000242; 	R(OUT(dx, al));	// 69308 out     dx, al ;~ 2088:0242
cs=0x2088;eip=0x000243; 	R(
);	// 69309 jmp     short $+2 ;~ 2088:0243
loc_2f0a5:
	// 8825 
cs=0x2088;eip=0x000245; 	R(LOOP(loc_2f08d));	// 69313 loop    loc_2F08D ;~ 2088:0245
cs=0x2088;eip=0x000247; 	X(POP(ds));	// 69314 pop     ds ;~ 2088:0247
cs=0x2088;eip=0x000248; 	T(STI);	// 69315 sti ;~ 2088:0248
cs=0x2088;eip=0x000249; 	X(POP(si));	// 69316 pop     si ;~ 2088:0249
cs=0x2088;eip=0x00024a; 	X(POP(bp));	// 69317 pop     bp ;~ 2088:024A
cs=0x2088;eip=0x00024b; 	R(RETF(0));	// 69318 retf ;~ 2088:024B
sub_2f0ac:
	// 69326 
#undef arg_0
#define arg_0 6
	// 69328 arg_0           = word ptr  6 ;~ 2088:024C
#undef arg_2
#define arg_2 8
	// 69329 arg_2           = word ptr  8 ;~ 2088:024C
cs=0x2088;eip=0x00024c; 	X(PUSH(bp));	// 69331 push    bp ;~ 2088:024C
cs=0x2088;eip=0x00024d; 	T(MOV(bp, sp));	// 69332 mov     bp, sp ;~ 2088:024D
cs=0x2088;eip=0x00024f; 	X(PUSH(di));	// 69333 push    di ;~ 2088:024F
cs=0x2088;eip=0x000250; 	X(PUSHF);	// 69334 pushf ;~ 2088:0250
cs=0x2088;eip=0x000251; 	T(MOV(dx, 0x40));	// 69335 mov     dx, 40h ; '@' ;~ 2088:0251
cs=0x2088;eip=0x000254; 	T(MOV(es, dx));	// 69336 mov     es, dx ;~ 2088:0254
cs=0x2088;eip=0x000256; 	T(MOV(bh, *(raddr(es,0x6C))));	// 69338 mov     bh, es:6Ch ;~ 2088:0256
loc_2f0bb:
	// 8826 
cs=0x2088;eip=0x00025b; 	T(CMP(bh, *(raddr(es,0x6C))));	// 69341 cmp     bh, es:6Ch ;~ 2088:025B
cs=0x2088;eip=0x000260; 	R(JZ(loc_2f0bb));	// 69342 jz      short loc_2F0BB ;~ 2088:0260
cs=0x2088;eip=0x000262; 	T(ADD(bh, 6));	// 69343 add     bh, 6 ;~ 2088:0262
cs=0x2088;eip=0x000265; 	T(XOR(ax, ax));	// 69344 xor     ax, ax ;~ 2088:0265
cs=0x2088;eip=0x000267; 	T(XOR(dx, dx));	// 69345 xor     dx, dx ;~ 2088:0267
loc_2f0c9:
	// 8827 
cs=0x2088;eip=0x000269; 	T(ADD(ax, 1));	// 69348 add     ax, 1 ;~ 2088:0269
cs=0x2088;eip=0x00026c; 	R(JNC(loc_2f0cf));	// 69349 jnb     short loc_2F0CF ;~ 2088:026C
cs=0x2088;eip=0x00026e; 	T(INC(dx));	// 69350 inc     dx ;~ 2088:026E
loc_2f0cf:
	// 8828 
cs=0x2088;eip=0x00026f; 	T(CMP(bh, *(raddr(es,0x6C))));	// 69353 cmp     bh, es:6Ch ;~ 2088:026F
cs=0x2088;eip=0x000274; 	R(JNZ(loc_2f0c9));	// 69354 jnz     short loc_2F0C9 ;~ 2088:0274
cs=0x2088;eip=0x000276; 	T(MOV(cx, 0x1977));	// 69355 mov     cx, 1977h ;~ 2088:0276
cs=0x2088;eip=0x000279; 	T(IDIV2(cx));	// 69356 idiv    cx ;~ 2088:0279
cs=0x2088;eip=0x00027b; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 69357 mov     di, [bp+arg_0] ;~ 2088:027B
cs=0x2088;eip=0x00027e; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 69358 mov     [di], ax ;~ 2088:027E
cs=0x2088;eip=0x000280; 	T(MOV(ax, dx));	// 69359 mov     ax, dx ;~ 2088:0280
cs=0x2088;eip=0x000282; 	T(SHL(ax, 1));	// 69360 shl     ax, 1 ;~ 2088:0282
cs=0x2088;eip=0x000284; 	T(XOR(dx, dx));	// 69361 xor     dx, dx ;~ 2088:0284
cs=0x2088;eip=0x000286; 	T(IDIV2(cx));	// 69362 idiv    cx ;~ 2088:0286
cs=0x2088;eip=0x000288; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 69363 mov     di, [bp+arg_2] ;~ 2088:0288
cs=0x2088;eip=0x00028b; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 69364 mov     [di], ax ;~ 2088:028B
cs=0x2088;eip=0x00028d; 	T(XOR(ax, ax));	// 69365 xor     ax, ax ;~ 2088:028D
cs=0x2088;eip=0x00028f; 	X(PUSH(ax));	// 69366 push    ax ;~ 2088:028F
cs=0x2088;eip=0x000290; 	X(POPF);	// 69367 popf ;~ 2088:0290
cs=0x2088;eip=0x000291; 	X(PUSHF);	// 69368 pushf ;~ 2088:0291
cs=0x2088;eip=0x000292; 	X(POP(ax));	// 69369 pop     ax ;~ 2088:0292
cs=0x2088;eip=0x000293; 	T(AND(ax, 0x0F000));	// 69370 and     ax, 0F000h ;~ 2088:0293
cs=0x2088;eip=0x000296; 	T(CMP(ax, 0x0F000));	// 69371 cmp     ax, 0F000h ;~ 2088:0296
cs=0x2088;eip=0x000299; 	R(JNZ(loc_2f114));	// 69372 jnz     short loc_2F114 ;~ 2088:0299
cs=0x2088;eip=0x00029b; 	X(PUSH(cx));	// 69373 push    cx ;~ 2088:029B
cs=0x2088;eip=0x00029c; 	T(MOV(ax, 0x0FFFF));	// 69374 mov     ax, 0FFFFh ;~ 2088:029C
cs=0x2088;eip=0x00029f; 	T(MOV(cl, 0x21));	// 69375 mov     cl, 21h ; '!' ;~ 2088:029F
cs=0x2088;eip=0x0002a1; 	T(SHL(ax, cl));	// 69376 shl     ax, cl ;~ 2088:02A1
cs=0x2088;eip=0x0002a3; 	X(POP(cx));	// 69377 pop     cx ;~ 2088:02A3
cs=0x2088;eip=0x0002a4; 	R(JNZ(loc_2f10d));	// 69378 jnz     short loc_2F10D ;~ 2088:02A4
cs=0x2088;eip=0x0002a6; 	T(MOV(ax, 0x56));	// 69379 mov     ax, 56h ; 'V' ;~ 2088:02A6
cs=0x2088;eip=0x0002a9; 	X(POPF);	// 69380 popf ;~ 2088:02A9
cs=0x2088;eip=0x0002aa; 	X(POP(di));	// 69381 pop     di ;~ 2088:02AA
cs=0x2088;eip=0x0002ab; 	X(POP(bp));	// 69382 pop     bp ;~ 2088:02AB
cs=0x2088;eip=0x0002ac; 	R(RETF(0));	// 69383 retf ;~ 2088:02AC
loc_2f10d:
	// 8829 
cs=0x2088;eip=0x0002ad; 	T(MOV(ax, 0x0BA));	// 69387 mov     ax, 0BAh ; 'º' ;~ 2088:02AD
cs=0x2088;eip=0x0002b0; 	X(POPF);	// 69388 popf ;~ 2088:02B0
cs=0x2088;eip=0x0002b1; 	X(POP(di));	// 69389 pop     di ;~ 2088:02B1
cs=0x2088;eip=0x0002b2; 	X(POP(bp));	// 69390 pop     bp ;~ 2088:02B2
cs=0x2088;eip=0x0002b3; 	R(RETF(0));	// 69391 retf ;~ 2088:02B3
loc_2f114:
	// 8830 
cs=0x2088;eip=0x0002b4; 	T(MOV(ax, 0x7000));	// 69395 mov     ax, 7000h ;~ 2088:02B4
cs=0x2088;eip=0x0002b7; 	X(PUSH(ax));	// 69396 push    ax ;~ 2088:02B7
cs=0x2088;eip=0x0002b8; 	X(POPF);	// 69397 popf ;~ 2088:02B8
cs=0x2088;eip=0x0002b9; 	X(PUSHF);	// 69398 pushf ;~ 2088:02B9
cs=0x2088;eip=0x0002ba; 	X(POP(ax));	// 69399 pop     ax ;~ 2088:02BA
cs=0x2088;eip=0x0002bb; 	T(AND(ax, 0x7000));	// 69400 and     ax, 7000h ;~ 2088:02BB
cs=0x2088;eip=0x0002be; 	R(JNZ(loc_2f127));	// 69401 jnz     short loc_2F127 ;~ 2088:02BE
cs=0x2088;eip=0x0002c0; 	T(MOV(ax, 0x11E));	// 69402 mov     ax, 11Eh ;~ 2088:02C0
cs=0x2088;eip=0x0002c3; 	X(POPF);	// 69403 popf ;~ 2088:02C3
cs=0x2088;eip=0x0002c4; 	X(POP(di));	// 69404 pop     di ;~ 2088:02C4
cs=0x2088;eip=0x0002c5; 	X(POP(bp));	// 69405 pop     bp ;~ 2088:02C5
cs=0x2088;eip=0x0002c6; 	R(RETF(0));	// 69406 retf ;~ 2088:02C6
loc_2f127:
	// 8831 
cs=0x2088;eip=0x0002c7; 	T(MOV(ax, 0x182));	// 69410 mov     ax, 182h ;~ 2088:02C7
cs=0x2088;eip=0x0002ca; 	X(POPF);	// 69411 popf ;~ 2088:02CA
cs=0x2088;eip=0x0002cb; 	X(POP(di));	// 69412 pop     di ;~ 2088:02CB
cs=0x2088;eip=0x0002cc; 	X(POP(bp));	// 69413 pop     bp ;~ 2088:02CC
cs=0x2088;eip=0x0002cd; 	R(RETF(0));	// 69414 retf ;~ 2088:02CD
sub_2f12e:
	// 69422 
#undef arg_0
#define arg_0 6
	// 69425 arg_0           = byte ptr  6 ;~ 2088:02CE
#undef arg_2
#define arg_2 8
	// 69426 arg_2           = word ptr  8 ;~ 2088:02CE
#undef arg_4
#define arg_4 0x0A
	// 69427 arg_4           = word ptr  0Ah ;~ 2088:02CE
#undef arg_6
#define arg_6 0x0C
	// 69428 arg_6           = word ptr  0Ch ;~ 2088:02CE
cs=0x2088;eip=0x0002ce; 	X(PUSH(bp));	// 69430 push    bp ;~ 2088:02CE
cs=0x2088;eip=0x0002cf; 	T(MOV(bp, sp));	// 69431 mov     bp, sp ;~ 2088:02CF
cs=0x2088;eip=0x0002d1; 	X(PUSH(si));	// 69432 push    si ;~ 2088:02D1
cs=0x2088;eip=0x0002d2; 	X(PUSH(di));	// 69433 push    di ;~ 2088:02D2
cs=0x2088;eip=0x0002d3; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 69434 mov     bx, [bp+arg_6] ;~ 2088:02D3
cs=0x2088;eip=0x0002d6; 	T(MOV(ax, ds));	// 69435 mov     ax, ds ;~ 2088:02D6
cs=0x2088;eip=0x0002d8; 	T(MOV(es, ax));	// 69436 mov     es, ax ;~ 2088:02D8
cs=0x2088;eip=0x0002da; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 69438 mov     di, [bp+arg_4] ;~ 2088:02DA
cs=0x2088;eip=0x0002dd; 	T(MOV(si, 0x0FFFF));	// 69439 mov     si, 0FFFFh ;~ 2088:02DD
cs=0x2088;eip=0x0002e0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69440 mov     ax, [bp+arg_2] ;~ 2088:02E0
cs=0x2088;eip=0x0002e3; 	T(CMP(ax, si));	// 69441 cmp     ax, si ;~ 2088:02E3
cs=0x2088;eip=0x0002e5; 	R(JZ(loc_2f14b));	// 69442 jz      short loc_2F14B ;~ 2088:02E5
cs=0x2088;eip=0x0002e7; 	T(MOV(si, di));	// 69443 mov     si, di ;~ 2088:02E7
cs=0x2088;eip=0x0002e9; 	T(ADD(si, ax));	// 69444 add     si, ax ;~ 2088:02E9
loc_2f14b:
	// 8832 
cs=0x2088;eip=0x0002eb; 	T(CMP(unk_480c3, 0));	// 69447 cmp     byte ptr unk_480C3, 0 ;~ 2088:02EB
cs=0x2088;eip=0x0002f0; 	R(JZ(loc_2f160));	// 69448 jz      short loc_2F160 ;~ 2088:02F0
cs=0x2088;eip=0x0002f2; 	T(TEST(bh, 0x80));	// 69449 test    bh, 80h ;~ 2088:02F2
cs=0x2088;eip=0x0002f5; 	R(JZ(loc_2f160));	// 69450 jz      short loc_2F160 ;~ 2088:02F5
cs=0x2088;eip=0x0002f7; 	T(CMP(di, si));	// 69451 cmp     di, si ;~ 2088:02F7
cs=0x2088;eip=0x0002f9; 	R(JNC(loc_2f1a3));	// 69452 jnb     short loc_2F1A3 ;~ 2088:02F9
cs=0x2088;eip=0x0002fb; 	T(NEG(bx));	// 69453 neg     bx ;~ 2088:02FB
cs=0x2088;eip=0x0002fd; 	T(MOV(al, 0x2D));	// 69454 mov     al, 2Dh ; '-' ;~ 2088:02FD
cs=0x2088;eip=0x0002ff; 	X(STOSB);	// 69455 stosb ;~ 2088:02FF
loc_2f160:
	// 8833 
cs=0x2088;eip=0x000300; 	T(OR(bx, bx));	// 69459 or      bx, bx ;~ 2088:0300
cs=0x2088;eip=0x000302; 	R(JNZ(loc_2f16d));	// 69460 jnz     short loc_2F16D ;~ 2088:0302
cs=0x2088;eip=0x000304; 	T(CMP(di, si));	// 69461 cmp     di, si ;~ 2088:0304
cs=0x2088;eip=0x000306; 	R(JNC(loc_2f1a3));	// 69462 jnb     short loc_2F1A3 ;~ 2088:0306
cs=0x2088;eip=0x000308; 	T(MOV(al, 0x30));	// 69463 mov     al, 30h ; '0' ;~ 2088:0308
cs=0x2088;eip=0x00030a; 	X(STOSB);	// 69464 stosb ;~ 2088:030A
cs=0x2088;eip=0x00030b; 	R(JMP(loc_2f1a3));	// 69465 jmp     short loc_2F1A3 ;~ 2088:030B
loc_2f16d:
	// 8834 
cs=0x2088;eip=0x00030d; 	T(MOV(cx, 0x2710));	// 69469 mov     cx, 2710h ;~ 2088:030D
cs=0x2088;eip=0x000310; 	X(MOV(unk_480c2, 0));	// 69470 mov     byte ptr unk_480C2, 0 ;~ 2088:0310
loc_2f175:
	// 8835 
cs=0x2088;eip=0x000315; 	T(XOR(dx, dx));	// 69473 xor     dx, dx ;~ 2088:0315
cs=0x2088;eip=0x000317; 	T(MOV(ax, bx));	// 69474 mov     ax, bx ;~ 2088:0317
cs=0x2088;eip=0x000319; 	T(DIV2(cx));	// 69475 div     cx ;~ 2088:0319
cs=0x2088;eip=0x00031b; 	T(OR(ax, ax));	// 69476 or      ax, ax ;~ 2088:031B
cs=0x2088;eip=0x00031d; 	R(JNZ(loc_2f186));	// 69477 jnz     short loc_2F186 ;~ 2088:031D
cs=0x2088;eip=0x00031f; 	T(CMP(unk_480c2, 0));	// 69478 cmp     byte ptr unk_480C2, 0 ;~ 2088:031F
cs=0x2088;eip=0x000324; 	R(JZ(loc_2f194));	// 69479 jz      short loc_2F194 ;~ 2088:0324
loc_2f186:
	// 8836 
cs=0x2088;eip=0x000326; 	T(CMP(di, si));	// 69482 cmp     di, si ;~ 2088:0326
cs=0x2088;eip=0x000328; 	R(JNC(loc_2f1a3));	// 69483 jnb     short loc_2F1A3 ;~ 2088:0328
cs=0x2088;eip=0x00032a; 	T(ADD(al, 0x30));	// 69484 add     al, 30h ; '0' ;~ 2088:032A
cs=0x2088;eip=0x00032c; 	X(STOSB);	// 69485 stosb ;~ 2088:032C
cs=0x2088;eip=0x00032d; 	X(MOV(unk_480c2, 1));	// 69486 mov     byte ptr unk_480C2, 1 ;~ 2088:032D
cs=0x2088;eip=0x000332; 	T(MOV(bx, dx));	// 69487 mov     bx, dx ;~ 2088:0332
loc_2f194:
	// 8837 
cs=0x2088;eip=0x000334; 	T(MOV(ax, cx));	// 69490 mov     ax, cx ;~ 2088:0334
cs=0x2088;eip=0x000336; 	T(XOR(dx, dx));	// 69491 xor     dx, dx ;~ 2088:0336
cs=0x2088;eip=0x000338; 	T(MOV(cx, 0x0A));	// 69492 mov     cx, 0Ah ;~ 2088:0338
cs=0x2088;eip=0x00033b; 	T(DIV2(cx));	// 69493 div     cx ;~ 2088:033B
cs=0x2088;eip=0x00033d; 	T(MOV(cx, ax));	// 69494 mov     cx, ax ;~ 2088:033D
cs=0x2088;eip=0x00033f; 	T(OR(ax, ax));	// 69495 or      ax, ax ;~ 2088:033F
cs=0x2088;eip=0x000341; 	R(JNZ(loc_2f175));	// 69496 jnz     short loc_2F175 ;~ 2088:0341
loc_2f1a3:
	// 8838 
cs=0x2088;eip=0x000343; 	X(MOV(*(raddr(ds,di)), 0));	// 69500 mov     byte ptr [di], 0 ;~ 2088:0343
cs=0x2088;eip=0x000346; 	T(MOV(ax, di));	// 69501 mov     ax, di ;~ 2088:0346
cs=0x2088;eip=0x000348; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 69502 sub     ax, [bp+arg_4] ;~ 2088:0348
cs=0x2088;eip=0x00034b; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69503 cmp     ax, [bp+arg_2] ;~ 2088:034B
cs=0x2088;eip=0x00034e; 	R(JGE(loc_2f1cc));	// 69504 jge     short loc_2F1CC ;~ 2088:034E
cs=0x2088;eip=0x000350; 	T(MOV(cx, ax));	// 69505 mov     cx, ax ;~ 2088:0350
cs=0x2088;eip=0x000352; 	T(INC(cx));	// 69506 inc     cx ;~ 2088:0352
cs=0x2088;eip=0x000353; 	T(NEG(ax));	// 69507 neg     ax ;~ 2088:0353
cs=0x2088;eip=0x000355; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 69508 add     ax, [bp+arg_2] ;~ 2088:0355
cs=0x2088;eip=0x000358; 	T(MOV(dx, ax));	// 69509 mov     dx, ax ;~ 2088:0358
cs=0x2088;eip=0x00035a; 	T(MOV(si, di));	// 69510 mov     si, di ;~ 2088:035A
cs=0x2088;eip=0x00035c; 	T(ADD(di, ax));	// 69511 add     di, ax ;~ 2088:035C
cs=0x2088;eip=0x00035e; 	T(STD);	// 69512 std ;~ 2088:035E
	// 69513 rep movsb ;~ 2088:035F
cs=0x2088;eip=0x00035f; 	X(	REP MOVSB);	// 69513 rep movsb ;~ 2088:035F
cs=0x2088;eip=0x000361; 	T(CLD);	// 69514 cld ;~ 2088:0361
cs=0x2088;eip=0x000362; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 69515 mov     di, [bp+arg_4] ;~ 2088:0362
cs=0x2088;eip=0x000365; 	T(MOV(cx, dx));	// 69516 mov     cx, dx ;~ 2088:0365
cs=0x2088;eip=0x000367; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 69517 mov     al, [bp+arg_0] ;~ 2088:0367
	// 69518 rep stosb ;~ 2088:036A
cs=0x2088;eip=0x00036a; 	X(	REP STOSB);	// 69518 rep stosb ;~ 2088:036A
loc_2f1cc:
	// 8839 
cs=0x2088;eip=0x00036c; 	X(POP(di));	// 69521 pop     di ;~ 2088:036C
cs=0x2088;eip=0x00036d; 	X(POP(si));	// 69522 pop     si ;~ 2088:036D
cs=0x2088;eip=0x00036e; 	X(POP(bp));	// 69523 pop     bp ;~ 2088:036E
cs=0x2088;eip=0x00036f; 	R(RETF(8));	// 69524 retf    8 ;~ 2088:036F
seg010_proc:
	// 69530 
loc_2f1d2:
	// 8840 
cs=0x2088;eip=0x000372; 	T(XOR(al, al));	// 69531 xor     al, al ;~ 2088:0372
cs=0x2088;eip=0x000374; 	X(STOSB);	// 69532 stosb ;~ 2088:0374
cs=0x2088;eip=0x000375; 	X(POP(di));	// 69533 pop     di ;~ 2088:0375
cs=0x2088;eip=0x000376; 	X(POP(si));	// 69534 pop     si ;~ 2088:0376
cs=0x2088;eip=0x000377; 	X(POP(bp));	// 69535 pop     bp ;~ 2088:0377
cs=0x2088;eip=0x000378; 	R(RETF(0));	// 69536 retf ;~ 2088:0378
cs=0x2088;eip=0x0005bf; 	X(PUSH(bp));	// 69931 push    bp ;~ 2088:05BF
cs=0x2088;eip=0x0005c0; 	T(MOV(bp, sp));	// 69932 mov     bp, sp ;~ 2088:05C0
cs=0x2088;eip=0x0005c2; 	T(MOV(ah, 1));	// 69933 mov     ah, 1 ;~ 2088:05C2
cs=0x2088;eip=0x0005c4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 69934 mov     dx, [bp+6] ;~ 2088:05C4
cs=0x2088;eip=0x0005c7; 	T(MOV(cx, *(dw*)(raddr(ss,bp+8))));	// 69935 mov     cx, [bp+8] ;~ 2088:05C7
cs=0x2088;eip=0x0005ca; 	R(_INT(0x1A));	// 69936 int     1Ah             ; CLOCK - SET TIME OF DAY ;~ 2088:05CA
cs=0x2088;eip=0x0005cc; 	X(POP(bp));	// 69939 pop     bp ;~ 2088:05CC
cs=0x2088;eip=0x0005cd; 	R(RETF(0));	// 69940 retf ;~ 2088:05CD
ret_2088_5d0:
	// 8872 
cs=0x2088;eip=0x0005d0; 	X(PUSHF);	// 69945 pushf ;~ 2088:05D0
cs=0x2088;eip=0x0005d1; 	T(CLI);	// 69946 cli ;~ 2088:05D1
cs=0x2088;eip=0x0005d2; 	X(PUSH(ax));	// 69947 push    ax ;~ 2088:05D2
cs=0x2088;eip=0x0005d3; 	X(PUSH(bx));	// 69948 push    bx ;~ 2088:05D3
cs=0x2088;eip=0x0005d4; 	X(PUSH(cx));	// 69949 push    cx ;~ 2088:05D4
cs=0x2088;eip=0x0005d5; 	X(PUSH(dx));	// 69950 push    dx ;~ 2088:05D5
cs=0x2088;eip=0x0005d6; 	X(PUSH(ds));	// 69951 push    ds ;~ 2088:05D6
cs=0x2088;eip=0x0005d7; 	X(PUSH(es));	// 69952 push    es ;~ 2088:05D7
cs=0x2088;eip=0x0005d8; 	X(PUSH(si));	// 69953 push    si ;~ 2088:05D8
cs=0x2088;eip=0x0005d9; 	X(PUSH(di));	// 69954 push    di ;~ 2088:05D9
cs=0x2088;eip=0x0005da; 	X(PUSH(bp));	// 69955 push    bp ;~ 2088:05DA
	cs=seg_offset(seg010);
cs=0x2088;eip=0x0005db; 	T(MOV(ds, *(dw*)(((db*)&word_2f42e))));	// 69956 mov     ds, cs:word_2F42E ;~ 2088:05DB
cs=0x2088;eip=0x0005e0; 	T(CLD);	// 69957 cld ;~ 2088:05E0
cs=0x2088;eip=0x0005e1; 	X(PUSH(dx));	// 69958 push    dx ;~ 2088:05E1
cs=0x2088;eip=0x0005e2; 	X(PUSH(cx));	// 69959 push    cx ;~ 2088:05E2
cs=0x2088;eip=0x0005e3; 	X(PUSH(bx));	// 69960 push    bx ;~ 2088:05E3
cs=0x2088;eip=0x0005e4; 	X(PUSH(ax));	// 69961 push    ax ;~ 2088:05E4
cs=0x2088;eip=0x0005e5; 	R(CALLF(sub_3e406,0));	// 69962 call    sub_3E406 ;~ 2088:05E5
cs=0x2088;eip=0x0005ea; 	T(ADD(sp, 8));	// 69963 add     sp, 8 ;~ 2088:05EA
cs=0x2088;eip=0x0005ed; 	X(POP(bp));	// 69964 pop     bp ;~ 2088:05ED
cs=0x2088;eip=0x0005ee; 	X(POP(di));	// 69965 pop     di ;~ 2088:05EE
cs=0x2088;eip=0x0005ef; 	X(POP(si));	// 69966 pop     si ;~ 2088:05EF
cs=0x2088;eip=0x0005f0; 	X(POP(es));	// 69967 pop     es ;~ 2088:05F0
cs=0x2088;eip=0x0005f1; 	X(POP(ds));	// 69968 pop     ds ;~ 2088:05F1
cs=0x2088;eip=0x0005f2; 	X(POP(dx));	// 69969 pop     dx ;~ 2088:05F2
cs=0x2088;eip=0x0005f3; 	X(POP(cx));	// 69970 pop     cx ;~ 2088:05F3
cs=0x2088;eip=0x0005f4; 	X(POP(bx));	// 69971 pop     bx ;~ 2088:05F4
cs=0x2088;eip=0x0005f5; 	X(POP(ax));	// 69972 pop     ax ;~ 2088:05F5
cs=0x2088;eip=0x0005f6; 	R(JMP(loc_2f459));	// 69973 jmp     short loc_2F459 ;~ 2088:05F6
loc_2f459:
	// 8873 
cs=0x2088;eip=0x0005f9; 	X(PUSH(cs));	// 69985 push    cs ;~ 2088:05F9
cs=0x2088;eip=0x0005fa; 	R(CALL(nullsub_17,0));	// 69986 call    near ptr nullsub_17 ;~ 2088:05FA
cs=0x2088;eip=0x0005fd; 	R(RETF(0));	// 69987 retf ;~ 2088:05FD
loc_2f49e:
	// 8874 
cs=0x2088;eip=0x00063e; 	X(PUSH(cs));	// 70066 push    cs ;~ 2088:063E
cs=0x2088;eip=0x00063f; 	R(CALL(nullsub_12,0));	// 70067 call    near ptr nullsub_12 ;~ 2088:063F
cs=0x2088;eip=0x000642; 	X(POP(bp));	// 70068 pop     bp ;~ 2088:0642
cs=0x2088;eip=0x000643; 	R(RETF(0));	// 70069 retf ;~ 2088:0643
sub_2f1d9:
	// 69543 
#undef var_s0
#define var_s0 0
	// 69546 var_s0          = word ptr  0 ;~ 2088:0379
#undef arg_0
#define arg_0 6
	// 69547 arg_0           = word ptr  6 ;~ 2088:0379
#undef arg_2
#define arg_2 8
	// 69548 arg_2           = word ptr  8 ;~ 2088:0379
cs=0x2088;eip=0x000379; 	X(PUSH(bp));	// 69552 push    bp ;~ 2088:0379
cs=0x2088;eip=0x00037a; 	T(MOV(bp, sp));	// 69553 mov     bp, sp ;~ 2088:037A
cs=0x2088;eip=0x00037c; 	X(PUSH(si));	// 69554 push    si ;~ 2088:037C
cs=0x2088;eip=0x00037d; 	X(PUSH(di));	// 69555 push    di ;~ 2088:037D
cs=0x2088;eip=0x00037e; 	T(MOV(ax, ds));	// 69556 mov     ax, ds ;~ 2088:037E
cs=0x2088;eip=0x000380; 	T(MOV(es, ax));	// 69557 mov     es, ax ;~ 2088:0380
cs=0x2088;eip=0x000382; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 69558 mov     si, [bp+arg_2] ;~ 2088:0382
cs=0x2088;eip=0x000385; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 69559 mov     di, [bp+arg_0] ;~ 2088:0385
cs=0x2088;eip=0x000388; 	T(bp = bp+0x0A);	// 69560 lea     bp, [bp+0Ah] ;~ 2088:0388
loc_2f1eb:
	// 8841 
cs=0x2088;eip=0x00038b; 	T(LODSB);	// 69564 lodsb ;~ 2088:038B
cs=0x2088;eip=0x00038c; 	T(OR(al, al));	// 69565 or      al, al ;~ 2088:038C
cs=0x2088;eip=0x00038e; 	R(JZ(loc_2f1d2));	// 69566 jz      short loc_2F1D2 ;~ 2088:038E
cs=0x2088;eip=0x000390; 	T(CMP(al, 0x25));	// 69567 cmp     al, 25h ; '%' ;~ 2088:0390
cs=0x2088;eip=0x000392; 	R(JZ(loc_2f1f7));	// 69568 jz      short loc_2F1F7 ;~ 2088:0392
loc_2f1f4:
	// 8842 
cs=0x2088;eip=0x000394; 	X(STOSB);	// 69571 stosb ;~ 2088:0394
cs=0x2088;eip=0x000395; 	R(JMP(loc_2f1eb));	// 69572 jmp     short loc_2F1EB ;~ 2088:0395
loc_2f1f7:
	// 8843 
cs=0x2088;eip=0x000397; 	X(MOV(*(dw*)((&unk_480c4)), 0x0FFFF));	// 69576 mov     word ptr unk_480C4, 0FFFFh ;~ 2088:0397
cs=0x2088;eip=0x00039d; 	X(MOV(*(dw*)((&unk_480c8)), 0x0FFFF));	// 69577 mov     word ptr unk_480C8, 0FFFFh ;~ 2088:039D
cs=0x2088;eip=0x0003a3; 	X(MOV(*(dw*)((&unk_480c6)), di));	// 69578 mov     word ptr unk_480C6, di ;~ 2088:03A3
cs=0x2088;eip=0x0003a7; 	X(MOV(*(dw*)((&unk_480ca)), 0x20));	// 69579 mov     word ptr unk_480CA, 20h ; ' ' ;~ 2088:03A7
cs=0x2088;eip=0x0003ad; 	X(MOV(unk_480cc, 0));	// 69580 mov     byte ptr unk_480CC, 0 ;~ 2088:03AD
loc_2f212:
	// 8844 
cs=0x2088;eip=0x0003b2; 	T(LODSB);	// 69584 lodsb ;~ 2088:03B2
cs=0x2088;eip=0x0003b3; 	T(CMP(al, 0x25));	// 69585 cmp     al, 25h ; '%' ;~ 2088:03B3
cs=0x2088;eip=0x0003b5; 	R(JZ(loc_2f1f4));	// 69586 jz      short loc_2F1F4 ;~ 2088:03B5
cs=0x2088;eip=0x0003b7; 	T(CMP(al, 0x64));	// 69587 cmp     al, 64h ; 'd' ;~ 2088:03B7
cs=0x2088;eip=0x0003b9; 	R(JNZ(loc_2f262));	// 69588 jnz     short loc_2F262 ;~ 2088:03B9
cs=0x2088;eip=0x0003bb; 	T(CMP(unk_480cc, 0));	// 69589 cmp     byte ptr unk_480CC, 0 ;~ 2088:03BB
cs=0x2088;eip=0x0003c0; 	R(JNZ(loc_2f24c));	// 69590 jnz     short loc_2F24C ;~ 2088:03C0
cs=0x2088;eip=0x0003c2; 	X(PUSH(es));	// 69591 push    es ;~ 2088:03C2
cs=0x2088;eip=0x0003c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s0))));	// 69592 mov     ax, [bp+var_s0] ;~ 2088:03C3
cs=0x2088;eip=0x0003c6; 	X(PUSH(ax));	// 69593 push    ax ;~ 2088:03C6
cs=0x2088;eip=0x0003c7; 	T(ADD(bp, 2));	// 69594 add     bp, 2 ;~ 2088:03C7
cs=0x2088;eip=0x0003ca; 	X(PUSH(di));	// 69595 push    di ;~ 2088:03CA
cs=0x2088;eip=0x0003cb; 	X(PUSH(*(dw*)((&unk_480c4))));	// 69596 push    word ptr unk_480C4 ;~ 2088:03CB
cs=0x2088;eip=0x0003cf; 	X(PUSH(*(dw*)((&unk_480ca))));	// 69597 push    word ptr unk_480CA ;~ 2088:03CF
cs=0x2088;eip=0x0003d3; 	X(MOV(unk_480c3, 1));	// 69598 mov     byte ptr unk_480C3, 1 ;~ 2088:03D3
cs=0x2088;eip=0x0003d8; 	R(CALLF(sub_2f12e,0));	// 69599 call    sub_2F12E ;~ 2088:03D8
cs=0x2088;eip=0x0003dd; 	X(MOV(unk_480c3, 0));	// 69600 mov     byte ptr unk_480C3, 0 ;~ 2088:03DD
cs=0x2088;eip=0x0003e2; 	X(POP(es));	// 69601 pop     es ;~ 2088:03E2
loc_2f243:
	// 8845 
cs=0x2088;eip=0x0003e3; 	T(MOV(al, *(raddr(ds,di))));	// 69605 mov     al, [di] ;~ 2088:03E3
cs=0x2088;eip=0x0003e5; 	T(OR(al, al));	// 69606 or      al, al ;~ 2088:03E5
cs=0x2088;eip=0x0003e7; 	R(JZ(loc_2f1eb));	// 69607 jz      short loc_2F1EB ;~ 2088:03E7
cs=0x2088;eip=0x0003e9; 	T(INC(di));	// 69608 inc     di ;~ 2088:03E9
cs=0x2088;eip=0x0003ea; 	R(JMP(loc_2f243));	// 69609 jmp     short loc_2F243 ;~ 2088:03EA
loc_2f24c:
	// 8846 
cs=0x2088;eip=0x0003ec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s0))));	// 69613 mov     ax, [bp+var_s0] ;~ 2088:03EC
cs=0x2088;eip=0x0003ef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+2))));	// 69614 mov     dx, [bp+2] ;~ 2088:03EF
cs=0x2088;eip=0x0003f2; 	T(ADD(bp, 4));	// 69615 add     bp, 4 ;~ 2088:03F2
cs=0x2088;eip=0x0003f5; 	T(MOV(cx, 0x0A));	// 69616 mov     cx, 0Ah ;~ 2088:03F5
cs=0x2088;eip=0x0003f8; 	T(MOV(bl, 1));	// 69617 mov     bl, 1 ;~ 2088:03F8
cs=0x2088;eip=0x0003fa; 	R(CALL(sub_2f3ab,0));	// 69618 call    sub_2F3AB ;~ 2088:03FA
cs=0x2088;eip=0x0003fd; 	R(CALL(sub_2f367,0));	// 69619 call    sub_2F367 ;~ 2088:03FD
cs=0x2088;eip=0x000400; 	R(JMP(loc_2f1eb));	// 69620 jmp     short loc_2F1EB ;~ 2088:0400
loc_2f262:
	// 8847 
cs=0x2088;eip=0x000402; 	T(CMP(al, 0x78));	// 69624 cmp     al, 78h ; 'x' ;~ 2088:0402
cs=0x2088;eip=0x000404; 	R(JNZ(loc_2f289));	// 69625 jnz     short loc_2F289 ;~ 2088:0404
cs=0x2088;eip=0x000406; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s0))));	// 69626 mov     ax, [bp+var_s0] ;~ 2088:0406
cs=0x2088;eip=0x000409; 	T(XOR(dx, dx));	// 69627 xor     dx, dx ;~ 2088:0409
cs=0x2088;eip=0x00040b; 	T(ADD(bp, 2));	// 69628 add     bp, 2 ;~ 2088:040B
cs=0x2088;eip=0x00040e; 	T(CMP(unk_480cc, 0));	// 69629 cmp     byte ptr unk_480CC, 0 ;~ 2088:040E
cs=0x2088;eip=0x000413; 	R(JZ(loc_2f27b));	// 69630 jz      short loc_2F27B ;~ 2088:0413
cs=0x2088;eip=0x000415; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_s0))));	// 69631 mov     dx, [bp+var_s0] ;~ 2088:0415
cs=0x2088;eip=0x000418; 	T(ADD(bp, 2));	// 69632 add     bp, 2 ;~ 2088:0418
loc_2f27b:
	// 8848 
cs=0x2088;eip=0x00041b; 	T(MOV(cx, 0x10));	// 69635 mov     cx, 10h ;~ 2088:041B
cs=0x2088;eip=0x00041e; 	T(MOV(bl, 0));	// 69636 mov     bl, 0 ;~ 2088:041E
cs=0x2088;eip=0x000420; 	R(CALL(sub_2f3ab,0));	// 69637 call    sub_2F3AB ;~ 2088:0420
cs=0x2088;eip=0x000423; 	R(CALL(sub_2f367,0));	// 69638 call    sub_2F367 ;~ 2088:0423
cs=0x2088;eip=0x000426; 	R(JMP(loc_2f1eb));	// 69639 jmp     loc_2F1EB ;~ 2088:0426
loc_2f289:
	// 8849 
cs=0x2088;eip=0x000429; 	T(CMP(al, 0x75));	// 69643 cmp     al, 75h ; 'u' ;~ 2088:0429
cs=0x2088;eip=0x00042b; 	R(JNZ(loc_2f2b0));	// 69644 jnz     short loc_2F2B0 ;~ 2088:042B
cs=0x2088;eip=0x00042d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_s0))));	// 69645 mov     ax, [bp+var_s0] ;~ 2088:042D
cs=0x2088;eip=0x000430; 	T(XOR(dx, dx));	// 69646 xor     dx, dx ;~ 2088:0430
cs=0x2088;eip=0x000432; 	T(ADD(bp, 2));	// 69647 add     bp, 2 ;~ 2088:0432
cs=0x2088;eip=0x000435; 	T(CMP(unk_480cc, 0));	// 69648 cmp     byte ptr unk_480CC, 0 ;~ 2088:0435
cs=0x2088;eip=0x00043a; 	R(JZ(loc_2f2a2));	// 69649 jz      short loc_2F2A2 ;~ 2088:043A
cs=0x2088;eip=0x00043c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_s0))));	// 69650 mov     dx, [bp+var_s0] ;~ 2088:043C
cs=0x2088;eip=0x00043f; 	T(ADD(bp, 2));	// 69651 add     bp, 2 ;~ 2088:043F
loc_2f2a2:
	// 8850 
cs=0x2088;eip=0x000442; 	T(MOV(cx, 0x0A));	// 69654 mov     cx, 0Ah ;~ 2088:0442
cs=0x2088;eip=0x000445; 	T(MOV(bl, 1));	// 69655 mov     bl, 1 ;~ 2088:0445
cs=0x2088;eip=0x000447; 	R(CALL(sub_2f3ab,0));	// 69656 call    sub_2F3AB ;~ 2088:0447
cs=0x2088;eip=0x00044a; 	R(CALL(sub_2f367,0));	// 69657 call    sub_2F367 ;~ 2088:044A
cs=0x2088;eip=0x00044d; 	R(JMP(loc_2f1eb));	// 69658 jmp     loc_2F1EB ;~ 2088:044D
loc_2f2b0:
	// 8851 
cs=0x2088;eip=0x000450; 	T(CMP(al, 0x73));	// 69662 cmp     al, 73h ; 's' ;~ 2088:0450
cs=0x2088;eip=0x000452; 	R(JNZ(loc_2f316));	// 69663 jnz     short loc_2F316 ;~ 2088:0452
cs=0x2088;eip=0x000454; 	T(CMP(*(dw*)((&unk_480c4)), 0x0FFFF));	// 69664 cmp     word ptr unk_480C4, 0FFFFh ;~ 2088:0454
cs=0x2088;eip=0x000459; 	R(JNZ(loc_2f2d0));	// 69665 jnz     short loc_2F2D0 ;~ 2088:0459
cs=0x2088;eip=0x00045b; 	T(MOV(dx, si));	// 69666 mov     dx, si ;~ 2088:045B
cs=0x2088;eip=0x00045d; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_s0))));	// 69667 mov     si, [bp+var_s0] ;~ 2088:045D
cs=0x2088;eip=0x000460; 	T(ADD(bp, 2));	// 69668 add     bp, 2 ;~ 2088:0460
loc_2f2c3:
	// 8852 
cs=0x2088;eip=0x000463; 	T(LODSB);	// 69671 lodsb ;~ 2088:0463
cs=0x2088;eip=0x000464; 	T(OR(al, al));	// 69672 or      al, al ;~ 2088:0464
cs=0x2088;eip=0x000466; 	R(JZ(loc_2f2cb));	// 69673 jz      short loc_2F2CB ;~ 2088:0466
cs=0x2088;eip=0x000468; 	X(STOSB);	// 69674 stosb ;~ 2088:0468
cs=0x2088;eip=0x000469; 	R(JMP(loc_2f2c3));	// 69675 jmp     short loc_2F2C3 ;~ 2088:0469
loc_2f2cb:
	// 8853 
cs=0x2088;eip=0x00046b; 	T(MOV(si, dx));	// 69679 mov     si, dx ;~ 2088:046B
cs=0x2088;eip=0x00046d; 	R(JMP(loc_2f1eb));	// 69680 jmp     loc_2F1EB ;~ 2088:046D
loc_2f2d0:
	// 8854 
cs=0x2088;eip=0x000470; 	T(MOV(dx, di));	// 69684 mov     dx, di ;~ 2088:0470
cs=0x2088;eip=0x000472; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_s0))));	// 69685 mov     di, [bp+var_s0] ;~ 2088:0472
cs=0x2088;eip=0x000475; 	T(MOV(cx, 0x0FFFF));	// 69686 mov     cx, 0FFFFh ;~ 2088:0475
cs=0x2088;eip=0x000478; 	T(XOR(al, al));	// 69687 xor     al, al ;~ 2088:0478
	// 69688 repne scasb ;~ 2088:047A
cs=0x2088;eip=0x00047a; 	T(	REPNE SCASB);	// 69688 repne scasb ;~ 2088:047A
cs=0x2088;eip=0x00047c; 	T(MOV(di, dx));	// 69689 mov     di, dx ;~ 2088:047C
cs=0x2088;eip=0x00047e; 	T(NEG(cx));	// 69690 neg     cx ;~ 2088:047E
cs=0x2088;eip=0x000480; 	T(SUB(cx, 2));	// 69691 sub     cx, 2 ;~ 2088:0480
cs=0x2088;eip=0x000483; 	T(CMP(cx, *(dw*)((&unk_480c4))));	// 69692 cmp     cx, word ptr unk_480C4 ;~ 2088:0483
cs=0x2088;eip=0x000487; 	R(JL(loc_2f2f8));	// 69693 jl      short loc_2F2F8 ;~ 2088:0487
cs=0x2088;eip=0x000489; 	T(MOV(dx, si));	// 69694 mov     dx, si ;~ 2088:0489
cs=0x2088;eip=0x00048b; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_s0))));	// 69695 mov     si, [bp+var_s0] ;~ 2088:048B
cs=0x2088;eip=0x00048e; 	T(MOV(cx, *(dw*)((&unk_480c4))));	// 69696 mov     cx, word ptr unk_480C4 ;~ 2088:048E
	// 69697 rep movsb ;~ 2088:0492
cs=0x2088;eip=0x000492; 	X(	REP MOVSB);	// 69697 rep movsb ;~ 2088:0492
cs=0x2088;eip=0x000494; 	T(MOV(si, dx));	// 69698 mov     si, dx ;~ 2088:0494
cs=0x2088;eip=0x000496; 	R(JMP(loc_2f310));	// 69699 jmp     short loc_2F310 ;~ 2088:0496
loc_2f2f8:
	// 8855 
cs=0x2088;eip=0x000498; 	T(MOV(dx, cx));	// 69703 mov     dx, cx ;~ 2088:0498
cs=0x2088;eip=0x00049a; 	T(NEG(cx));	// 69704 neg     cx ;~ 2088:049A
cs=0x2088;eip=0x00049c; 	T(ADD(cx, *(dw*)((&unk_480c4))));	// 69705 add     cx, word ptr unk_480C4 ;~ 2088:049C
cs=0x2088;eip=0x0004a0; 	T(MOV(al, unk_480ca));	// 69706 mov     al, byte ptr unk_480CA ;~ 2088:04A0
	// 69707 rep stosb ;~ 2088:04A3
cs=0x2088;eip=0x0004a3; 	X(	REP STOSB);	// 69707 rep stosb ;~ 2088:04A3
cs=0x2088;eip=0x0004a5; 	T(MOV(cx, dx));	// 69708 mov     cx, dx ;~ 2088:04A5
cs=0x2088;eip=0x0004a7; 	T(MOV(dx, si));	// 69709 mov     dx, si ;~ 2088:04A7
cs=0x2088;eip=0x0004a9; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_s0))));	// 69710 mov     si, [bp+var_s0] ;~ 2088:04A9
	// 69711 rep movsb ;~ 2088:04AC
cs=0x2088;eip=0x0004ac; 	X(	REP MOVSB);	// 69711 rep movsb ;~ 2088:04AC
cs=0x2088;eip=0x0004ae; 	T(MOV(si, dx));	// 69712 mov     si, dx ;~ 2088:04AE
loc_2f310:
	// 8856 
cs=0x2088;eip=0x0004b0; 	T(ADD(bp, 2));	// 69715 add     bp, 2 ;~ 2088:04B0
cs=0x2088;eip=0x0004b3; 	R(JMP(loc_2f1eb));	// 69716 jmp     loc_2F1EB ;~ 2088:04B3
loc_2f316:
	// 8857 
cs=0x2088;eip=0x0004b6; 	T(CMP(al, 0x6C));	// 69720 cmp     al, 6Ch ; 'l' ;~ 2088:04B6
cs=0x2088;eip=0x0004b8; 	R(JNZ(loc_2f322));	// 69721 jnz     short loc_2F322 ;~ 2088:04B8
cs=0x2088;eip=0x0004ba; 	X(MOV(unk_480cc, 1));	// 69722 mov     byte ptr unk_480CC, 1 ;~ 2088:04BA
cs=0x2088;eip=0x0004bf; 	R(JMP(loc_2f212));	// 69723 jmp     loc_2F212 ;~ 2088:04BF
loc_2f322:
	// 8858 
cs=0x2088;eip=0x0004c2; 	T(CMP(al, 0x30));	// 69727 cmp     al, 30h ; '0' ;~ 2088:04C2
cs=0x2088;eip=0x0004c4; 	R(JNZ(loc_2f32f));	// 69728 jnz     short loc_2F32F ;~ 2088:04C4
cs=0x2088;eip=0x0004c6; 	X(MOV(*(dw*)((&unk_480ca)), 0x30));	// 69729 mov     word ptr unk_480CA, 30h ; '0' ;~ 2088:04C6
cs=0x2088;eip=0x0004cc; 	R(JMP(loc_2f212));	// 69730 jmp     loc_2F212 ;~ 2088:04CC
loc_2f32f:
	// 8859 
cs=0x2088;eip=0x0004cf; 	T(CMP(al, 0x31));	// 69734 cmp     al, 31h ; '1' ;~ 2088:04CF
cs=0x2088;eip=0x0004d1; 	R(JL(loc_2f364));	// 69735 jl      short loc_2F364 ;~ 2088:04D1
cs=0x2088;eip=0x0004d3; 	T(CMP(al, 0x39));	// 69736 cmp     al, 39h ; '9' ;~ 2088:04D3
cs=0x2088;eip=0x0004d5; 	R(JG(loc_2f364));	// 69737 jg      short loc_2F364 ;~ 2088:04D5
cs=0x2088;eip=0x0004d7; 	T(SUB(al, 0x30));	// 69738 sub     al, 30h ; '0' ;~ 2088:04D7
cs=0x2088;eip=0x0004d9; 	T(XOR(ah, ah));	// 69739 xor     ah, ah ;~ 2088:04D9
loc_2f33b:
	// 8860 
cs=0x2088;eip=0x0004db; 	T(MOV(bl, *(raddr(ds,si))));	// 69742 mov     bl, [si] ;~ 2088:04DB
cs=0x2088;eip=0x0004dd; 	T(SUB(bl, 0x30));	// 69743 sub     bl, 30h ; '0' ;~ 2088:04DD
cs=0x2088;eip=0x0004e0; 	R(JS(loc_2f358));	// 69744 js      short loc_2F358 ;~ 2088:04E0
cs=0x2088;eip=0x0004e2; 	T(CMP(bl, 9));	// 69745 cmp     bl, 9 ;~ 2088:04E2
cs=0x2088;eip=0x0004e5; 	R(JG(loc_2f358));	// 69746 jg      short loc_2F358 ;~ 2088:04E5
cs=0x2088;eip=0x0004e7; 	T(INC(si));	// 69747 inc     si ;~ 2088:04E7
cs=0x2088;eip=0x0004e8; 	T(XOR(bh, bh));	// 69748 xor     bh, bh ;~ 2088:04E8
cs=0x2088;eip=0x0004ea; 	T(SHL(ax, 1));	// 69749 shl     ax, 1 ;~ 2088:04EA
cs=0x2088;eip=0x0004ec; 	T(MOV(cx, ax));	// 69750 mov     cx, ax ;~ 2088:04EC
cs=0x2088;eip=0x0004ee; 	T(SHL(ax, 1));	// 69751 shl     ax, 1 ;~ 2088:04EE
cs=0x2088;eip=0x0004f0; 	T(SHL(ax, 1));	// 69752 shl     ax, 1 ;~ 2088:04F0
cs=0x2088;eip=0x0004f2; 	T(ADD(ax, cx));	// 69753 add     ax, cx ;~ 2088:04F2
cs=0x2088;eip=0x0004f4; 	T(ADD(ax, bx));	// 69754 add     ax, bx ;~ 2088:04F4
cs=0x2088;eip=0x0004f6; 	R(JMP(loc_2f33b));	// 69755 jmp     short loc_2F33B ;~ 2088:04F6
loc_2f358:
	// 8861 
cs=0x2088;eip=0x0004f8; 	X(MOV(*(dw*)((&unk_480c4)), ax));	// 69760 mov     word ptr unk_480C4, ax ;~ 2088:04F8
cs=0x2088;eip=0x0004fb; 	T(ADD(ax, di));	// 69761 add     ax, di ;~ 2088:04FB
cs=0x2088;eip=0x0004fd; 	T(DEC(ax));	// 69762 dec     ax ;~ 2088:04FD
cs=0x2088;eip=0x0004fe; 	X(MOV(*(dw*)((&unk_480c8)), ax));	// 69763 mov     word ptr unk_480C8, ax ;~ 2088:04FE
cs=0x2088;eip=0x000501; 	R(JMP(loc_2f212));	// 69764 jmp     loc_2F212 ;~ 2088:0501
loc_2f364:
	// 8862 
cs=0x2088;eip=0x000504; 	R(JMP(loc_2f1eb));	// 69769 jmp     loc_2F1EB ;~ 2088:0504
sub_2f367:
	// 69776 
cs=0x2088;eip=0x000507; 	T(CMP(*(dw*)((&unk_480c4)), 0x0FFFF));	// 69778 cmp     word ptr unk_480C4, 0FFFFh ;~ 2088:0507
cs=0x2088;eip=0x00050c; 	R(JZ(locret_2f3aa));	// 69779 jz      short locret_2F3AA ;~ 2088:050C
cs=0x2088;eip=0x00050e; 	T(CMP(di, *(dw*)((&unk_480c8))));	// 69780 cmp     di, word ptr unk_480C8 ;~ 2088:050E
cs=0x2088;eip=0x000512; 	R(JLE(loc_2f37a));	// 69781 jle     short loc_2F37A ;~ 2088:0512
cs=0x2088;eip=0x000514; 	T(MOV(di, *(dw*)((&unk_480c8))));	// 69782 mov     di, word ptr unk_480C8 ;~ 2088:0514
cs=0x2088;eip=0x000518; 	T(INC(di));	// 69783 inc     di ;~ 2088:0518
cs=0x2088;eip=0x000519; 	R(RETN(0));	// 69784 retn ;~ 2088:0519
loc_2f37a:
	// 8863 
cs=0x2088;eip=0x00051a; 	T(MOV(cx, *(dw*)((&unk_480c8))));	// 69788 mov     cx, word ptr unk_480C8 ;~ 2088:051A
cs=0x2088;eip=0x00051e; 	T(SUB(cx, di));	// 69789 sub     cx, di ;~ 2088:051E
cs=0x2088;eip=0x000520; 	T(INC(cx));	// 69790 inc     cx ;~ 2088:0520
cs=0x2088;eip=0x000521; 	R(JZ(locret_2f3aa));	// 69791 jz      short locret_2F3AA ;~ 2088:0521
cs=0x2088;eip=0x000523; 	X(PUSH(si));	// 69792 push    si ;~ 2088:0523
cs=0x2088;eip=0x000524; 	X(PUSH(di));	// 69793 push    di ;~ 2088:0524
cs=0x2088;eip=0x000525; 	T(MOV(bx, cx));	// 69794 mov     bx, cx ;~ 2088:0525
cs=0x2088;eip=0x000527; 	T(STD);	// 69795 std ;~ 2088:0527
cs=0x2088;eip=0x000528; 	T(MOV(cx, di));	// 69796 mov     cx, di ;~ 2088:0528
cs=0x2088;eip=0x00052a; 	T(SUB(cx, *(dw*)((&unk_480c6))));	// 69797 sub     cx, word ptr unk_480C6 ;~ 2088:052A
cs=0x2088;eip=0x00052e; 	T(MOV(si, di));	// 69798 mov     si, di ;~ 2088:052E
cs=0x2088;eip=0x000530; 	T(DEC(si));	// 69799 dec     si ;~ 2088:0530
cs=0x2088;eip=0x000531; 	T(MOV(di, *(dw*)((&unk_480c8))));	// 69800 mov     di, word ptr unk_480C8 ;~ 2088:0531
	// 69801 rep movsb ;~ 2088:0535
cs=0x2088;eip=0x000535; 	X(	REP MOVSB);	// 69801 rep movsb ;~ 2088:0535
cs=0x2088;eip=0x000537; 	T(CLD);	// 69802 cld ;~ 2088:0537
cs=0x2088;eip=0x000538; 	T(MOV(cx, bx));	// 69803 mov     cx, bx ;~ 2088:0538
cs=0x2088;eip=0x00053a; 	X(POP(di));	// 69804 pop     di ;~ 2088:053A
cs=0x2088;eip=0x00053b; 	X(POP(si));	// 69805 pop     si ;~ 2088:053B
cs=0x2088;eip=0x00053c; 	T(MOV(al, unk_480ca));	// 69806 mov     al, byte ptr unk_480CA ;~ 2088:053C
cs=0x2088;eip=0x00053f; 	T(MOV(di, *(dw*)((&unk_480c6))));	// 69807 mov     di, word ptr unk_480C6 ;~ 2088:053F
	// 69808 rep stosb ;~ 2088:0543
cs=0x2088;eip=0x000543; 	X(	REP STOSB);	// 69808 rep stosb ;~ 2088:0543
cs=0x2088;eip=0x000545; 	T(MOV(di, *(dw*)((&unk_480c8))));	// 69809 mov     di, word ptr unk_480C8 ;~ 2088:0545
cs=0x2088;eip=0x000549; 	T(INC(di));	// 69810 inc     di ;~ 2088:0549
locret_2f3aa:
	// 8864 
cs=0x2088;eip=0x00054a; 	R(RETN(0));	// 69814 retn ;~ 2088:054A
sub_2f3ab:
	// 69821 
cs=0x2088;eip=0x00054b; 	X(PUSH(si));	// 69823 push    si ;~ 2088:054B
cs=0x2088;eip=0x00054c; 	T(XCHG(ax, bx));	// 69824 xchg    ax, bx ;~ 2088:054C
cs=0x2088;eip=0x00054d; 	T(OR(al, al));	// 69825 or      al, al ;~ 2088:054D
cs=0x2088;eip=0x00054f; 	R(JZ(loc_2f3c4));	// 69826 jz      short loc_2F3C4 ;~ 2088:054F
cs=0x2088;eip=0x000551; 	T(CMP(cx, 0x0A));	// 69827 cmp     cx, 0Ah ;~ 2088:0551
cs=0x2088;eip=0x000554; 	R(JNZ(loc_2f3c4));	// 69828 jnz     short loc_2F3C4 ;~ 2088:0554
cs=0x2088;eip=0x000556; 	T(OR(dx, dx));	// 69829 or      dx, dx ;~ 2088:0556
cs=0x2088;eip=0x000558; 	R(JNS(loc_2f3c4));	// 69830 jns     short loc_2F3C4 ;~ 2088:0558
cs=0x2088;eip=0x00055a; 	T(MOV(al, 0x2D));	// 69831 mov     al, 2Dh ; '-' ;~ 2088:055A
cs=0x2088;eip=0x00055c; 	X(STOSB);	// 69832 stosb ;~ 2088:055C
cs=0x2088;eip=0x00055d; 	T(NEG(bx));	// 69833 neg     bx ;~ 2088:055D
cs=0x2088;eip=0x00055f; 	T(ADC(dx, 0));	// 69834 adc     dx, 0 ;~ 2088:055F
cs=0x2088;eip=0x000562; 	T(NEG(dx));	// 69835 neg     dx ;~ 2088:0562
loc_2f3c4:
	// 8865 
cs=0x2088;eip=0x000564; 	T(MOV(si, di));	// 69839 mov     si, di ;~ 2088:0564
loc_2f3c6:
	// 8866 
cs=0x2088;eip=0x000566; 	T(XCHG(ax, dx));	// 69842 xchg    ax, dx ;~ 2088:0566
cs=0x2088;eip=0x000567; 	T(XOR(dx, dx));	// 69843 xor     dx, dx ;~ 2088:0567
cs=0x2088;eip=0x000569; 	T(OR(ax, ax));	// 69844 or      ax, ax ;~ 2088:0569
cs=0x2088;eip=0x00056b; 	R(JZ(loc_2f3cf));	// 69845 jz      short loc_2F3CF ;~ 2088:056B
cs=0x2088;eip=0x00056d; 	T(DIV2(cx));	// 69846 div     cx ;~ 2088:056D
loc_2f3cf:
	// 8867 
cs=0x2088;eip=0x00056f; 	T(XCHG(ax, bx));	// 69849 xchg    ax, bx ;~ 2088:056F
cs=0x2088;eip=0x000570; 	T(DIV2(cx));	// 69850 div     cx ;~ 2088:0570
cs=0x2088;eip=0x000572; 	T(XCHG(ax, dx));	// 69851 xchg    ax, dx ;~ 2088:0572
cs=0x2088;eip=0x000573; 	T(XCHG(dx, bx));	// 69852 xchg    dx, bx ;~ 2088:0573
cs=0x2088;eip=0x000575; 	T(ADD(al, 0x30));	// 69853 add     al, 30h ; '0' ;~ 2088:0575
cs=0x2088;eip=0x000577; 	T(CMP(al, 0x39));	// 69854 cmp     al, 39h ; '9' ;~ 2088:0577
cs=0x2088;eip=0x000579; 	R(JBE(loc_2f3dd));	// 69855 jbe     short loc_2F3DD ;~ 2088:0579
cs=0x2088;eip=0x00057b; 	T(ADD(al, 0x27));	// 69856 add     al, 27h ; ''' ;~ 2088:057B
loc_2f3dd:
	// 8868 
cs=0x2088;eip=0x00057d; 	X(STOSB);	// 69859 stosb ;~ 2088:057D
cs=0x2088;eip=0x00057e; 	T(MOV(ax, dx));	// 69860 mov     ax, dx ;~ 2088:057E
cs=0x2088;eip=0x000580; 	T(OR(ax, bx));	// 69861 or      ax, bx ;~ 2088:0580
cs=0x2088;eip=0x000582; 	R(JNZ(loc_2f3c6));	// 69862 jnz     short loc_2F3C6 ;~ 2088:0582
cs=0x2088;eip=0x000584; 	T(MOV(cx, di));	// 69863 mov     cx, di ;~ 2088:0584
loc_2f3e6:
	// 8869 
cs=0x2088;eip=0x000586; 	T(DEC(di));	// 69866 dec     di ;~ 2088:0586
cs=0x2088;eip=0x000587; 	T(LODSB);	// 69867 lodsb ;~ 2088:0587
cs=0x2088;eip=0x000588; 	X(XCHG(al, *(raddr(ds,di))));	// 69868 xchg    al, [di] ;~ 2088:0588
cs=0x2088;eip=0x00058a; 	X(MOV(*(raddr(ds,si-1)), al));	// 69869 mov     [si-1], al ;~ 2088:058A
cs=0x2088;eip=0x00058d; 	T(ax = si+1);	// 69870 lea     ax, [si+1] ;~ 2088:058D
cs=0x2088;eip=0x000590; 	T(CMP(ax, di));	// 69871 cmp     ax, di ;~ 2088:0590
cs=0x2088;eip=0x000592; 	R(JC(loc_2f3e6));	// 69872 jb      short loc_2F3E6 ;~ 2088:0592
cs=0x2088;eip=0x000594; 	T(MOV(di, cx));	// 69873 mov     di, cx ;~ 2088:0594
cs=0x2088;eip=0x000596; 	X(POP(si));	// 69874 pop     si ;~ 2088:0596
cs=0x2088;eip=0x000597; 	R(RETN(0));	// 69875 retn ;~ 2088:0597
sub_2f3f8:
	// 69883 
#undef arg_0
#define arg_0 6
	// 69886 arg_0           = word ptr  6 ;~ 2088:0598
cs=0x2088;eip=0x000598; 	X(PUSH(bp));	// 69888 push    bp ;~ 2088:0598
cs=0x2088;eip=0x000599; 	T(MOV(bp, sp));	// 69889 mov     bp, sp ;~ 2088:0599
cs=0x2088;eip=0x00059b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 69890 mov     bx, [bp+arg_0] ;~ 2088:059B
cs=0x2088;eip=0x00059e; 	T(MOV(ah, 2));	// 69891 mov     ah, 2 ;~ 2088:059E
loc_2f400:
	// 8870 
cs=0x2088;eip=0x0005a0; 	T(MOV(dl, *(raddr(ds,bx))));	// 69895 mov     dl, [bx] ;~ 2088:05A0
cs=0x2088;eip=0x0005a2; 	T(INC(bx));	// 69896 inc     bx ;~ 2088:05A2
cs=0x2088;eip=0x0005a3; 	T(OR(dl, dl));	// 69897 or      dl, dl ;~ 2088:05A3
cs=0x2088;eip=0x0005a5; 	R(JZ(loc_2f414));	// 69898 jz      short loc_2F414 ;~ 2088:05A5
cs=0x2088;eip=0x0005a7; 	R(_INT(0x21));	// 69899 int     21h             ; DOS - DISPLAY OUTPUT ;~ 2088:05A7
cs=0x2088;eip=0x0005a9; 	T(CMP(dl, 0x0A));	// 69901 cmp     dl, 0Ah ;~ 2088:05A9
cs=0x2088;eip=0x0005ac; 	R(JNZ(loc_2f400));	// 69902 jnz     short loc_2F400 ;~ 2088:05AC
cs=0x2088;eip=0x0005ae; 	T(MOV(dl, 0x0D));	// 69903 mov     dl, 0Dh ;~ 2088:05AE
cs=0x2088;eip=0x0005b0; 	R(_INT(0x21));	// 69904 int     21h             ; DOS - ;~ 2088:05B0
cs=0x2088;eip=0x0005b2; 	R(JMP(loc_2f400));	// 69905 jmp     short loc_2F400 ;~ 2088:05B2
loc_2f414:
	// 8871 
cs=0x2088;eip=0x0005b4; 	X(POP(bp));	// 69909 pop     bp ;~ 2088:05B4
cs=0x2088;eip=0x0005b5; 	R(RETF(0));	// 69910 retf ;~ 2088:05B5
sub_2f416:
	// 69917 
cs=0x2088;eip=0x0005b6; 	T(XOR(ah, ah));	// 69919 xor     ah, ah ;~ 2088:05B6
cs=0x2088;eip=0x0005b8; 	R(_INT(0x1A));	// 69920 int     1Ah             ; CLOCK - GET TIME OF DAY ;~ 2088:05B8
cs=0x2088;eip=0x0005ba; 	T(MOV(ax, dx));	// 69925 mov     ax, dx ;~ 2088:05BA
cs=0x2088;eip=0x0005bc; 	T(MOV(dx, cx));	// 69926 mov     dx, cx ;~ 2088:05BC
cs=0x2088;eip=0x0005be; 	R(RETF(0));	// 69927 retf ;~ 2088:05BE
nullsub_17:
	// 69978 
cs=0x2088;eip=0x0005f8; 	R(IRET);	// 69979 iret ;~ 2088:05F8
sub_2f45e:
	// 69993 
cs=0x2088;eip=0x0005fe; 	X(PUSH(bp));	// 69994 push    bp ;~ 2088:05FE
cs=0x2088;eip=0x0005ff; 	T(MOV(bp, sp));	// 69995 mov     bp, sp ;~ 2088:05FF
	cs=seg_offset(seg010);
cs=0x2088;eip=0x000601; 	X(MOV(*(dw*)(((db*)&word_2f42e)), ds));	// 69996 mov     cs:word_2F42E, ds ;~ 2088:0601
cs=0x2088;eip=0x000606; 	T(MOV(dx, 0x5D0));	// 69997 mov     dx, 5D0h ;~ 2088:0606
cs=0x2088;eip=0x000609; 	T(MOV(ax, seg_offset(seg010)));	// 69998 mov     ax, seg seg010 ;~ 2088:0609
cs=0x2088;eip=0x00060c; 	T(MOV(es, ax));	// 69999 mov     es, ax ;~ 2088:060C
cs=0x2088;eip=0x00060e; 	T(MOV(ax, 0x0C));	// 70001 mov     ax, 0Ch ;~ 2088:060E
cs=0x2088;eip=0x000611; 	T(MOV(cx, 0x0FFFF));	// 70002 mov     cx, 0FFFFh ;~ 2088:0611
cs=0x2088;eip=0x000614; 	R(_INT(0x33));	// 70003 int     33h             ; - MS MOUSE - DEFINE INTERRUPT SUBROUTINE PARAMETERS ;~ 2088:0614
cs=0x2088;eip=0x000616; 	X(POP(bp));	// 70005 pop     bp ;~ 2088:0616
cs=0x2088;eip=0x000617; 	R(RETF(0));	// 70006 retf ;~ 2088:0617
sub_2f478:
	// 70013 
cs=0x2088;eip=0x000618; 	T(XOR(dx, dx));	// 70014 xor     dx, dx ;~ 2088:0618
cs=0x2088;eip=0x00061a; 	T(MOV(es, dx));	// 70015 mov     es, dx ;~ 2088:061A
cs=0x2088;eip=0x00061c; 	T(MOV(ax, 0x0C));	// 70017 mov     ax, 0Ch ;~ 2088:061C
cs=0x2088;eip=0x00061f; 	T(XOR(cx, cx));	// 70018 xor     cx, cx ;~ 2088:061F
cs=0x2088;eip=0x000621; 	R(_INT(0x33));	// 70019 int     33h             ; - MS MOUSE - DEFINE INTERRUPT SUBROUTINE PARAMETERS ;~ 2088:0621
cs=0x2088;eip=0x000623; 	R(RETF(0));	// 70021 retf ;~ 2088:0623
sub_2f484:
	// 70029 
#undef arg_2
#define arg_2 6
	// 70032 arg_2           = dword ptr  6 ;~ 2088:0624
#undef arg_6
#define arg_6 0x0A
	// 70033 arg_6           = word ptr  0Ah ;~ 2088:0624
#undef arg_8
#define arg_8 0x0C
	// 70034 arg_8           = word ptr  0Ch ;~ 2088:0624
#undef arg_a
#define arg_a 0x0E
	// 70035 arg_A           = word ptr  0Eh ;~ 2088:0624
cs=0x2088;eip=0x000624; 	X(PUSH(bp));	// 70039 push    bp ;~ 2088:0624
cs=0x2088;eip=0x000625; 	T(MOV(bp, sp));	// 70040 mov     bp, sp ;~ 2088:0625
cs=0x2088;eip=0x000627; 	X(PUSHF);	// 70041 pushf ;~ 2088:0627
cs=0x2088;eip=0x000628; 	X(PUSH(si));	// 70042 push    si ;~ 2088:0628
cs=0x2088;eip=0x000629; 	X(PUSH(di));	// 70043 push    di ;~ 2088:0629
cs=0x2088;eip=0x00062a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_a))));	// 70044 push    [bp+arg_A] ;~ 2088:062A
cs=0x2088;eip=0x00062d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_8))));	// 70045 push    [bp+arg_8] ;~ 2088:062D
cs=0x2088;eip=0x000630; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 70046 push    [bp+arg_6] ;~ 2088:0630
cs=0x2088;eip=0x000633; 	R(CALLF(__dispatch_call,*(dd*)(raddr(ss,bp+arg_2))));	// 70047 call    [bp+arg_2] ;~ 2088:0633
cs=0x2088;eip=0x000636; 	T(ADD(sp, 6));	// 70048 add     sp, 6 ;~ 2088:0636
cs=0x2088;eip=0x000639; 	X(POP(di));	// 70049 pop     di ;~ 2088:0639
cs=0x2088;eip=0x00063a; 	X(POP(si));	// 70050 pop     si ;~ 2088:063A
cs=0x2088;eip=0x00063b; 	R(JMP(loc_2f49e));	// 70051 jmp     short loc_2F49E ;~ 2088:063B
nullsub_12:
	// 70058 
cs=0x2088;eip=0x00063d; 	R(IRET);	// 70059 iret ;~ 2088:063D
sub_2f4a4:
	// 70076 
cs=0x2088;eip=0x000644; 	X(PUSH(bp));	// 70078 push    bp ;~ 2088:0644
cs=0x2088;eip=0x000645; 	T(MOV(bp, sp));	// 70079 mov     bp, sp ;~ 2088:0645
cs=0x2088;eip=0x000647; 	X(PUSH(si));	// 70080 push    si ;~ 2088:0647
cs=0x2088;eip=0x000648; 	X(PUSH(di));	// 70081 push    di ;~ 2088:0648
cs=0x2088;eip=0x000649; 	T(MOV(si, 0x727));	// 70082 mov     si, 727h ;~ 2088:0649
cs=0x2088;eip=0x00064c; 	T(XOR(di, di));	// 70083 xor     di, di ;~ 2088:064C
loc_2f4ae:
	// 8875 
cs=0x2088;eip=0x00064e; 	T(LODSB);	// 70086 lodsb ;~ 2088:064E
cs=0x2088;eip=0x00064f; 	T(MOV(bx, di));	// 70087 mov     bx, di ;~ 2088:064F
cs=0x2088;eip=0x000651; 	T(MOV(bh, al));	// 70088 mov     bh, al ;~ 2088:0651
cs=0x2088;eip=0x000653; 	T(MOV(ax, 0x1000));	// 70089 mov     ax, 1000h ;~ 2088:0653
cs=0x2088;eip=0x000656; 	R(_INT(0x10));	// 70090 int     10h             ; - VIDEO - SET PALETTE REGISTER (Jr, PS, TANDY 1000, EGA, VGA) ;~ 2088:0656
cs=0x2088;eip=0x000658; 	T(INC(di));	// 70093 inc     di ;~ 2088:0658
cs=0x2088;eip=0x000659; 	T(CMP(di, 0x10));	// 70094 cmp     di, 10h ;~ 2088:0659
cs=0x2088;eip=0x00065c; 	R(JL(loc_2f4ae));	// 70095 jl      short loc_2F4AE ;~ 2088:065C
cs=0x2088;eip=0x00065e; 	X(POP(di));	// 70096 pop     di ;~ 2088:065E
cs=0x2088;eip=0x00065f; 	X(POP(si));	// 70097 pop     si ;~ 2088:065F
cs=0x2088;eip=0x000660; 	X(POP(bp));	// 70098 pop     bp ;~ 2088:0660
cs=0x2088;eip=0x000661; 	R(RETF(0));	// 70099 retf ;~ 2088:0661
sub_2f4c2:
	// 70106 
cs=0x2088;eip=0x000662; 	X(PUSH(bp));	// 70107 push    bp ;~ 2088:0662
cs=0x2088;eip=0x000663; 	T(MOV(ah, 0x0B));	// 70108 mov     ah, 0Bh ;~ 2088:0663
cs=0x2088;eip=0x000665; 	T(MOV(bh, 1));	// 70109 mov     bh, 1 ;~ 2088:0665
cs=0x2088;eip=0x000667; 	T(MOV(bl, 0));	// 70110 mov     bl, 0 ;~ 2088:0667
cs=0x2088;eip=0x000669; 	R(_INT(0x10));	// 70111 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0669
cs=0x2088;eip=0x00066b; 	T(MOV(ah, 0x0B));	// 70114 mov     ah, 0Bh ;~ 2088:066B
cs=0x2088;eip=0x00066d; 	T(MOV(bh, 0));	// 70115 mov     bh, 0 ;~ 2088:066D
cs=0x2088;eip=0x00066f; 	T(MOV(bl, 0x10));	// 70116 mov     bl, 10h ;~ 2088:066F
cs=0x2088;eip=0x000671; 	R(_INT(0x10));	// 70117 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0671
cs=0x2088;eip=0x000673; 	T(MOV(ah, 0x0B));	// 70120 mov     ah, 0Bh ;~ 2088:0673
cs=0x2088;eip=0x000675; 	T(MOV(bh, 1));	// 70121 mov     bh, 1 ;~ 2088:0675
cs=0x2088;eip=0x000677; 	T(MOV(bl, 0x11));	// 70122 mov     bl, 11h ;~ 2088:0677
cs=0x2088;eip=0x000679; 	R(_INT(0x10));	// 70123 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0679
cs=0x2088;eip=0x00067b; 	T(MOV(ah, 0x0B));	// 70126 mov     ah, 0Bh ;~ 2088:067B
cs=0x2088;eip=0x00067d; 	T(MOV(bh, 2));	// 70127 mov     bh, 2 ;~ 2088:067D
cs=0x2088;eip=0x00067f; 	T(MOV(bl, 0x12));	// 70128 mov     bl, 12h ;~ 2088:067F
cs=0x2088;eip=0x000681; 	R(_INT(0x10));	// 70129 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0681
cs=0x2088;eip=0x000683; 	T(MOV(ah, 0x0B));	// 70132 mov     ah, 0Bh ;~ 2088:0683
cs=0x2088;eip=0x000685; 	T(MOV(bh, 3));	// 70133 mov     bh, 3 ;~ 2088:0685
cs=0x2088;eip=0x000687; 	T(MOV(bl, 0x13));	// 70134 mov     bl, 13h ;~ 2088:0687
cs=0x2088;eip=0x000689; 	R(_INT(0x10));	// 70135 int     10h             ; - VIDEO - SET COLOR PALETTE ;~ 2088:0689
cs=0x2088;eip=0x00068b; 	X(POP(bp));	// 70138 pop     bp ;~ 2088:068B
cs=0x2088;eip=0x00068c; 	R(RETF(0));	// 70139 retf ;~ 2088:068C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2ee8e: 	goto loc_2ee8e;
        case m2c::kloc_2eea9: 	goto loc_2eea9;
        case m2c::kloc_2eebf: 	goto loc_2eebf;
        case m2c::kloc_2eeca: 	goto loc_2eeca;
        case m2c::kloc_2eee7: 	goto loc_2eee7;
        case m2c::kloc_2ef1c: 	goto loc_2ef1c;
        case m2c::kloc_2ef2f: 	goto loc_2ef2f;
        case m2c::kloc_2ef5e: 	goto loc_2ef5e;
        case m2c::kloc_2ef84: 	goto loc_2ef84;
        case m2c::kloc_2ef9f: 	goto loc_2ef9f;
        case m2c::kloc_2efa1: 	goto loc_2efa1;
        case m2c::kloc_2efb4: 	goto loc_2efb4;
        case m2c::kloc_2efc9: 	goto loc_2efc9;
        case m2c::kloc_2efce: 	goto loc_2efce;
        case m2c::kloc_2efde: 	goto loc_2efde;
        case m2c::kloc_2f042: 	goto loc_2f042;
        case m2c::kloc_2f073: 	goto loc_2f073;
        case m2c::kloc_2f080: 	goto loc_2f080;
        case m2c::kloc_2f08d: 	goto loc_2f08d;
        case m2c::kloc_2f095: 	goto loc_2f095;
        case m2c::kloc_2f09d: 	goto loc_2f09d;
        case m2c::kloc_2f0a5: 	goto loc_2f0a5;
        case m2c::kloc_2f0bb: 	goto loc_2f0bb;
        case m2c::kloc_2f0c9: 	goto loc_2f0c9;
        case m2c::kloc_2f0cf: 	goto loc_2f0cf;
        case m2c::kloc_2f10d: 	goto loc_2f10d;
        case m2c::kloc_2f114: 	goto loc_2f114;
        case m2c::kloc_2f127: 	goto loc_2f127;
        case m2c::kloc_2f14b: 	goto loc_2f14b;
        case m2c::kloc_2f160: 	goto loc_2f160;
        case m2c::kloc_2f16d: 	goto loc_2f16d;
        case m2c::kloc_2f175: 	goto loc_2f175;
        case m2c::kloc_2f186: 	goto loc_2f186;
        case m2c::kloc_2f194: 	goto loc_2f194;
        case m2c::kloc_2f1a3: 	goto loc_2f1a3;
        case m2c::kloc_2f1cc: 	goto loc_2f1cc;
        case m2c::kloc_2f1d2: 	goto loc_2f1d2;
        case m2c::kloc_2f1eb: 	goto loc_2f1eb;
        case m2c::kloc_2f1f4: 	goto loc_2f1f4;
        case m2c::kloc_2f1f7: 	goto loc_2f1f7;
        case m2c::kloc_2f212: 	goto loc_2f212;
        case m2c::kloc_2f243: 	goto loc_2f243;
        case m2c::kloc_2f24c: 	goto loc_2f24c;
        case m2c::kloc_2f262: 	goto loc_2f262;
        case m2c::kloc_2f27b: 	goto loc_2f27b;
        case m2c::kloc_2f289: 	goto loc_2f289;
        case m2c::kloc_2f2a2: 	goto loc_2f2a2;
        case m2c::kloc_2f2b0: 	goto loc_2f2b0;
        case m2c::kloc_2f2c3: 	goto loc_2f2c3;
        case m2c::kloc_2f2cb: 	goto loc_2f2cb;
        case m2c::kloc_2f2d0: 	goto loc_2f2d0;
        case m2c::kloc_2f2f8: 	goto loc_2f2f8;
        case m2c::kloc_2f310: 	goto loc_2f310;
        case m2c::kloc_2f316: 	goto loc_2f316;
        case m2c::kloc_2f322: 	goto loc_2f322;
        case m2c::kloc_2f32f: 	goto loc_2f32f;
        case m2c::kloc_2f33b: 	goto loc_2f33b;
        case m2c::kloc_2f358: 	goto loc_2f358;
        case m2c::kloc_2f364: 	goto loc_2f364;
        case m2c::kloc_2f37a: 	goto loc_2f37a;
        case m2c::kloc_2f3c4: 	goto loc_2f3c4;
        case m2c::kloc_2f3c6: 	goto loc_2f3c6;
        case m2c::kloc_2f3cf: 	goto loc_2f3cf;
        case m2c::kloc_2f3dd: 	goto loc_2f3dd;
        case m2c::kloc_2f3e6: 	goto loc_2f3e6;
        case m2c::kloc_2f400: 	goto loc_2f400;
        case m2c::kloc_2f414: 	goto loc_2f414;
        case m2c::kloc_2f459: 	goto loc_2f459;
        case m2c::kloc_2f49e: 	goto loc_2f49e;
        case m2c::kloc_2f4ae: 	goto loc_2f4ae;
        case m2c::klocret_2eec9: 	goto locret_2eec9;
        case m2c::klocret_2eee1: 	goto locret_2eee1;
        case m2c::klocret_2ef01: 	goto locret_2ef01;
        case m2c::klocret_2f3aa: 	goto locret_2f3aa;
        case m2c::knullsub_12: 	goto nullsub_12;
        case m2c::knullsub_17: 	goto nullsub_17;
        case m2c::kret_2088_5d0: 	goto ret_2088_5d0;
  //      case m2c::kseg010_proc: 	goto seg010_proc;
        case m2c::ksub_2ee6e: 	goto sub_2ee6e;
        case m2c::ksub_2ee71: 	goto sub_2ee71;
        case m2c::ksub_2eee2: 	goto sub_2eee2;
        case m2c::ksub_2eef5: 	goto sub_2eef5;
        case m2c::ksub_2ef02: 	goto sub_2ef02;
        case m2c::ksub_2ef64: 	goto sub_2ef64;
        case m2c::ksub_2efe2: 	goto sub_2efe2;
        case m2c::ksub_2eff2: 	goto sub_2eff2;
        case m2c::ksub_2f002: 	goto sub_2f002;
        case m2c::ksub_2f00f: 	goto sub_2f00f;
        case m2c::ksub_2f01c: 	goto sub_2f01c;
        case m2c::ksub_2f02c: 	goto sub_2f02c;
        case m2c::ksub_2f062: 	goto sub_2f062;
        case m2c::ksub_2f06b: 	goto sub_2f06b;
        case m2c::ksub_2f0ac: 	goto sub_2f0ac;
        case m2c::ksub_2f12e: 	goto sub_2f12e;
        case m2c::ksub_2f1d9: 	goto sub_2f1d9;
        case m2c::ksub_2f367: 	goto sub_2f367;
        case m2c::ksub_2f3ab: 	goto sub_2f3ab;
        case m2c::ksub_2f3f8: 	goto sub_2f3f8;
        case m2c::ksub_2f416: 	goto sub_2f416;
        case m2c::ksub_2f45e: 	goto sub_2f45e;
        case m2c::ksub_2f478: 	goto sub_2f478;
        case m2c::ksub_2f484: 	goto sub_2f484;
        case m2c::ksub_2f4a4: 	goto sub_2f4a4;
        case m2c::ksub_2f4c2: 	goto sub_2f4c2;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

