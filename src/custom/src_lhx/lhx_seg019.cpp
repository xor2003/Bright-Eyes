/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group17(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group17:
    _begin:
seg019_proc:
	// 73989 
cs=0x2266;eip=0x000008; 	X(PUSH(bp));	// 73989 push    bp ;~ 2266:0008
cs=0x2266;eip=0x000009; 	X(POP(bp));	// 73990 pop     bp ;~ 2266:0009
cs=0x2266;eip=0x00000a; 	R(RETF(0));	// 73991 retf ;~ 2266:000A
sub_30c4b:
	// 73996 
cs=0x2266;eip=0x00000b; 	X(PUSH(*(dw*)((&unk_47ad2))));	// 73997 push    word ptr unk_47AD2 ;~ 2266:000B
cs=0x2266;eip=0x00000f; 	X(PUSH(*(dw*)((&unk_47ad0))));	// 73998 push    word ptr unk_47AD0 ;~ 2266:000F
cs=0x2266;eip=0x000013; 	T(MOV(bx, *(dw*)((&unk_47ab2))));	// 73999 mov     bx, word ptr unk_47AB2 ;~ 2266:0013
cs=0x2266;eip=0x000017; 	T(SHL(bx, 1));	// 74000 shl     bx, 1 ;~ 2266:0017
cs=0x2266;eip=0x000019; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2070))));	// 74001 push    word ptr [bx+2070h] ;~ 2266:0019
cs=0x2266;eip=0x00001d; 	R(CALLF(sub_37550,0));	// 74002 call    sub_37550 ;~ 2266:001D
cs=0x2266;eip=0x000022; 	T(ADD(sp, 6));	// 74003 add     sp, 6 ;~ 2266:0022
cs=0x2266;eip=0x000025; 	X(MOV(*(dw*)((&unk_56fd6)), ax));	// 74004 mov     word ptr unk_56FD6, ax ;~ 2266:0025
cs=0x2266;eip=0x000028; 	X(MOV(*(dw*)((&unk_56fd8)), dx));	// 74005 mov     word ptr unk_56FD8, dx ;~ 2266:0028
cs=0x2266;eip=0x00002c; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74006 les     bx, dword ptr unk_56FD6 ;~ 2266:002C
cs=0x2266;eip=0x000030; 	X(MOV(*(raddr(es,bx+0x254)), 1));	// 74007 mov     byte ptr es:[bx+254h], 1 ;~ 2266:0030
cs=0x2266;eip=0x000036; 	X(MOV(*(raddr(es,bx+0x330)), 0));	// 74008 mov     byte ptr es:[bx+330h], 0 ;~ 2266:0036
cs=0x2266;eip=0x00003c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 74009 mov     ax, es:[bx+326h] ;~ 2266:003C
cs=0x2266;eip=0x000041; 	T(OR(ax, *(dw*)(raddr(es,bx+0x328))));	// 74010 or      ax, es:[bx+328h] ;~ 2266:0041
cs=0x2266;eip=0x000046; 	R(JZ(loc_30c93));	// 74011 jz      short loc_30C93 ;~ 2266:0046
cs=0x2266;eip=0x000048; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 74012 les     bx, es:[bx+326h] ;~ 2266:0048
cs=0x2266;eip=0x00004d; 	X(MOV(*(raddr(es,bx+0x330)), 0));	// 74013 mov     byte ptr es:[bx+330h], 0 ;~ 2266:004D
loc_30c93:
	// 9166 
cs=0x2266;eip=0x000053; 	R(CALLF(sub_3db15,0));	// 74016 call    sub_3DB15 ;~ 2266:0053
cs=0x2266;eip=0x000058; 	R(RETF(0));	// 74017 retf ;~ 2266:0058
sub_30c99:
	// 74024 
cs=0x2266;eip=0x000059; 	T(CMP(*(dw*)((&unk_56fd8)), 0));	// 74025 cmp     word ptr unk_56FD8, 0 ;~ 2266:0059
cs=0x2266;eip=0x00005e; 	R(JZ(loc_30ccd));	// 74026 jz      short loc_30CCD ;~ 2266:005E
cs=0x2266;eip=0x000060; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74027 les     bx, dword ptr unk_56FD6 ;~ 2266:0060
cs=0x2266;eip=0x000064; 	X(PUSH(*(dw*)(raddr(es,bx+0x324))));	// 74028 push    word ptr es:[bx+324h] ;~ 2266:0064
cs=0x2266;eip=0x000069; 	R(CALLF(sub_2397c,0));	// 74029 call    sub_2397C ;~ 2266:0069
cs=0x2266;eip=0x00006e; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74030 les     bx, dword ptr unk_56FD6 ;~ 2266:006E
cs=0x2266;eip=0x000072; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 74031 mov     ax, es:[bx+326h] ;~ 2266:0072
cs=0x2266;eip=0x000077; 	T(OR(ax, *(dw*)(raddr(es,bx+0x328))));	// 74032 or      ax, es:[bx+328h] ;~ 2266:0077
cs=0x2266;eip=0x00007c; 	R(JZ(loc_30ccd));	// 74033 jz      short loc_30CCD ;~ 2266:007C
cs=0x2266;eip=0x00007e; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 74034 les     bx, es:[bx+326h] ;~ 2266:007E
cs=0x2266;eip=0x000083; 	X(PUSH(*(dw*)(raddr(es,bx+0x324))));	// 74035 push    word ptr es:[bx+324h] ;~ 2266:0083
cs=0x2266;eip=0x000088; 	R(CALLF(sub_2397c,0));	// 74036 call    sub_2397C ;~ 2266:0088
loc_30ccd:
	// 9167 
cs=0x2266;eip=0x00008d; 	X(PUSH(*(dw*)((&unk_56fd8))));	// 74040 push    word ptr unk_56FD8 ;~ 2266:008D
cs=0x2266;eip=0x000091; 	R(CALLF(sub_2397c,0));	// 74041 call    sub_2397C ;~ 2266:0091
cs=0x2266;eip=0x000096; 	T(SUB(ax, ax));	// 74042 sub     ax, ax ;~ 2266:0096
cs=0x2266;eip=0x000098; 	X(MOV(*(dw*)((&unk_56fd8)), ax));	// 74043 mov     word ptr unk_56FD8, ax ;~ 2266:0098
cs=0x2266;eip=0x00009b; 	X(MOV(*(dw*)((&unk_56fd6)), ax));	// 74044 mov     word ptr unk_56FD6, ax ;~ 2266:009B
cs=0x2266;eip=0x00009e; 	R(RETF(0));	// 74045 retf ;~ 2266:009E
sub_30cdf:
	// 74052 
cs=0x2266;eip=0x00009f; 	T(MOV(ax, 8));	// 74053 mov     ax, 8 ;~ 2266:009F
cs=0x2266;eip=0x0000a2; 	X(PUSH(ax));	// 74054 push    ax ;~ 2266:00A2
cs=0x2266;eip=0x0000a3; 	R(CALLF(sub_2937a,0));	// 74055 call    sub_2937A ;~ 2266:00A3
cs=0x2266;eip=0x0000a8; 	T(MOV(cx, 0x168));	// 74056 mov     cx, 168h ;~ 2266:00A8
cs=0x2266;eip=0x0000ab; 	T(IMUL1_2(cx));	// 74057 imul    cx ;~ 2266:00AB
cs=0x2266;eip=0x0000ad; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74058 les     bx, dword ptr unk_56FD6 ;~ 2266:00AD
cs=0x2266;eip=0x0000b1; 	X(MOV(*(dw*)(raddr(es,bx+0x1FC)), ax));	// 74059 mov     es:[bx+1FCh], ax ;~ 2266:00B1
cs=0x2266;eip=0x0000b6; 	T(MOV(ax, 0x0A));	// 74060 mov     ax, 0Ah ;~ 2266:00B6
cs=0x2266;eip=0x0000b9; 	X(PUSH(ax));	// 74061 push    ax ;~ 2266:00B9
cs=0x2266;eip=0x0000ba; 	R(CALLF(sub_2937a,0));	// 74062 call    sub_2937A ;~ 2266:00BA
cs=0x2266;eip=0x0000bf; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74063 les     bx, dword ptr unk_56FD6 ;~ 2266:00BF
cs=0x2266;eip=0x0000c3; 	X(MOV(*(dw*)(raddr(es,bx+0x1FE)), ax));	// 74064 mov     es:[bx+1FEh], ax ;~ 2266:00C3
cs=0x2266;eip=0x0000c8; 	T(CMP(ax, 1));	// 74065 cmp     ax, 1 ;~ 2266:00C8
cs=0x2266;eip=0x0000cb; 	R(JNZ(locret_30d14));	// 74066 jnz     short locret_30D14 ;~ 2266:00CB
cs=0x2266;eip=0x0000cd; 	X(MOV(*(dw*)(raddr(es,bx+0x1FE)), 0));	// 74067 mov     word ptr es:[bx+1FEh], 0 ;~ 2266:00CD
locret_30d14:
	// 9168 
cs=0x2266;eip=0x0000d4; 	R(RETF(0));	// 74070 retf ;~ 2266:00D4
sub_30d15:
	// 74078 
#undef arg_0
#define arg_0 6
	// 74081 arg_0           = word ptr  6 ;~ 2266:00D5
cs=0x2266;eip=0x0000d5; 	X(PUSH(bp));	// 74083 push    bp ;~ 2266:00D5
cs=0x2266;eip=0x0000d6; 	T(MOV(bp, sp));	// 74084 mov     bp, sp ;~ 2266:00D6
cs=0x2266;eip=0x0000d8; 	T(CMP(unk_55213, 0));	// 74085 cmp     byte ptr unk_55213, 0 ;~ 2266:00D8
cs=0x2266;eip=0x0000dd; 	R(JNZ(loc_30d54));	// 74086 jnz     short loc_30D54 ;~ 2266:00DD
cs=0x2266;eip=0x0000df; 	T(CMP(unk_57176, 0));	// 74087 cmp     byte ptr unk_57176, 0 ;~ 2266:00DF
cs=0x2266;eip=0x0000e4; 	R(JZ(loc_30d32));	// 74088 jz      short loc_30D32 ;~ 2266:00E4
cs=0x2266;eip=0x0000e6; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x39));	// 74089 cmp     [bp+arg_0], 39h ; '9' ;~ 2266:00E6
cs=0x2266;eip=0x0000ea; 	R(JZ(loc_30d54));	// 74090 jz      short loc_30D54 ;~ 2266:00EA
cs=0x2266;eip=0x0000ec; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x30));	// 74091 cmp     [bp+arg_0], 30h ; '0' ;~ 2266:00EC
cs=0x2266;eip=0x0000f0; 	R(JZ(loc_30d54));	// 74092 jz      short loc_30D54 ;~ 2266:00F0
loc_30d32:
	// 9169 
cs=0x2266;eip=0x0000f2; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74095 les     bx, dword ptr unk_56FD6 ;~ 2266:00F2
cs=0x2266;eip=0x0000f6; 	T(MOV(ax, *(dw*)((&unk_47ad0))));	// 74096 mov     ax, word ptr unk_47AD0 ;~ 2266:00F6
cs=0x2266;eip=0x0000f9; 	T(MOV(dx, *(dw*)((&unk_47ad2))));	// 74097 mov     dx, word ptr unk_47AD2 ;~ 2266:00F9
cs=0x2266;eip=0x0000fd; 	X(MOV(*(dw*)(raddr(es,bx+0x31C)), ax));	// 74098 mov     es:[bx+31Ch], ax ;~ 2266:00FD
cs=0x2266;eip=0x000102; 	X(MOV(*(dw*)(raddr(es,bx+0x31E)), dx));	// 74099 mov     es:[bx+31Eh], dx ;~ 2266:0102
cs=0x2266;eip=0x000107; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 74100 push    [bp+arg_0] ;~ 2266:0107
cs=0x2266;eip=0x00010a; 	X(PUSH(es));	// 74101 push    es ;~ 2266:010A
cs=0x2266;eip=0x00010b; 	X(PUSH(bx));	// 74102 push    bx ;~ 2266:010B
cs=0x2266;eip=0x00010c; 	R(CALLF(sub_376e1,0));	// 74103 call    sub_376E1 ;~ 2266:010C
cs=0x2266;eip=0x000111; 	T(ADD(sp, 6));	// 74104 add     sp, 6 ;~ 2266:0111
loc_30d54:
	// 9170 
cs=0x2266;eip=0x000114; 	X(POP(bp));	// 74108 pop     bp ;~ 2266:0114
cs=0x2266;eip=0x000115; 	R(RETF(0));	// 74109 retf ;~ 2266:0115
sub_30d56:
	// 74117 
#undef var_10
#define var_10 -0x10
	// 74120 var_10          = dword ptr -10h ;~ 2266:0116
#undef var_c
#define var_c -0x0C
	// 74121 var_C           = word ptr -0Ch ;~ 2266:0116
#undef var_a
#define var_a -0x0A
	// 74122 var_A           = word ptr -0Ah ;~ 2266:0116
#undef var_8
#define var_8 -8
	// 74123 var_8           = word ptr -8 ;~ 2266:0116
#undef var_6
#define var_6 -6
	// 74124 var_6           = word ptr -6 ;~ 2266:0116
#undef var_4
#define var_4 -4
	// 74125 var_4           = word ptr -4 ;~ 2266:0116
#undef var_2
#define var_2 -2
	// 74126 var_2           = word ptr -2 ;~ 2266:0116
cs=0x2266;eip=0x000116; 	X(PUSH(bp));	// 74128 push    bp ;~ 2266:0116
cs=0x2266;eip=0x000117; 	T(MOV(bp, sp));	// 74129 mov     bp, sp ;~ 2266:0117
cs=0x2266;eip=0x000119; 	T(SUB(sp, 0x10));	// 74130 sub     sp, 10h ;~ 2266:0119
cs=0x2266;eip=0x00011c; 	T(CMP(unk_55213, 0));	// 74131 cmp     byte ptr unk_55213, 0 ;~ 2266:011C
cs=0x2266;eip=0x000121; 	R(JZ(loc_30d6b));	// 74132 jz      short loc_30D6B ;~ 2266:0121
cs=0x2266;eip=0x000123; 	R(CALLF(sub_1a650,0));	// 74133 call    sub_1A650 ;~ 2266:0123
cs=0x2266;eip=0x000128; 	R(JMP(loc_30f7f));	// 74134 jmp     loc_30F7F ;~ 2266:0128
loc_30d6b:
	// 9171 
cs=0x2266;eip=0x00012b; 	T(MOV(ax, *(dw*)((&unk_56486))));	// 74138 mov     ax, word ptr unk_56486 ;~ 2266:012B
cs=0x2266;eip=0x00012e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 74139 mov     [bp+var_A], ax ;~ 2266:012E
cs=0x2266;eip=0x000131; 	T(MOV(ax, *(dw*)((&unk_56488))));	// 74140 mov     ax, word ptr unk_56488 ;~ 2266:0131
cs=0x2266;eip=0x000134; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 74141 mov     [bp+var_C], ax ;~ 2266:0134
cs=0x2266;eip=0x000137; 	T(MOV(ax, *(dw*)((&unk_5648a))));	// 74142 mov     ax, word ptr unk_5648A ;~ 2266:0137
cs=0x2266;eip=0x00013a; 	T(CMP(*(dw*)((&unk_56486)), ax));	// 74143 cmp     word ptr unk_56486, ax ;~ 2266:013A
cs=0x2266;eip=0x00013e; 	R(JGE(loc_30d83));	// 74144 jge     short loc_30D83 ;~ 2266:013E
cs=0x2266;eip=0x000140; 	X(MOV(*(dw*)((&unk_56486)), ax));	// 74145 mov     word ptr unk_56486, ax ;~ 2266:0140
loc_30d83:
	// 9172 
cs=0x2266;eip=0x000143; 	T(MOV(ax, *(dw*)((&unk_5648c))));	// 74148 mov     ax, word ptr unk_5648C ;~ 2266:0143
cs=0x2266;eip=0x000146; 	T(CMP(*(dw*)((&unk_56486)), ax));	// 74149 cmp     word ptr unk_56486, ax ;~ 2266:0146
cs=0x2266;eip=0x00014a; 	R(JLE(loc_30d8f));	// 74150 jle     short loc_30D8F ;~ 2266:014A
cs=0x2266;eip=0x00014c; 	X(MOV(*(dw*)((&unk_56486)), ax));	// 74151 mov     word ptr unk_56486, ax ;~ 2266:014C
loc_30d8f:
	// 9173 
cs=0x2266;eip=0x00014f; 	T(MOV(ax, *(dw*)((&unk_5648e))));	// 74154 mov     ax, word ptr unk_5648E ;~ 2266:014F
cs=0x2266;eip=0x000152; 	T(CMP(*(dw*)((&unk_56488)), ax));	// 74155 cmp     word ptr unk_56488, ax ;~ 2266:0152
cs=0x2266;eip=0x000156; 	R(JGE(loc_30d9b));	// 74156 jge     short loc_30D9B ;~ 2266:0156
cs=0x2266;eip=0x000158; 	X(MOV(*(dw*)((&unk_56488)), ax));	// 74157 mov     word ptr unk_56488, ax ;~ 2266:0158
loc_30d9b:
	// 9174 
cs=0x2266;eip=0x00015b; 	T(MOV(ax, *(dw*)((&unk_56490))));	// 74160 mov     ax, word ptr unk_56490 ;~ 2266:015B
cs=0x2266;eip=0x00015e; 	T(CMP(*(dw*)((&unk_56488)), ax));	// 74161 cmp     word ptr unk_56488, ax ;~ 2266:015E
cs=0x2266;eip=0x000162; 	R(JLE(loc_30da7));	// 74162 jle     short loc_30DA7 ;~ 2266:0162
cs=0x2266;eip=0x000164; 	X(MOV(*(dw*)((&unk_56488)), ax));	// 74163 mov     word ptr unk_56488, ax ;~ 2266:0164
loc_30da7:
	// 9175 
cs=0x2266;eip=0x000167; 	T(MOV(ax, *(dw*)((&unk_57170))));	// 74166 mov     ax, word ptr unk_57170 ;~ 2266:0167
cs=0x2266;eip=0x00016a; 	X(ADD(*(dw*)((&unk_56486)), ax));	// 74167 add     word ptr unk_56486, ax ;~ 2266:016A
cs=0x2266;eip=0x00016e; 	T(MOV(ax, *(dw*)((&unk_57172))));	// 74168 mov     ax, word ptr unk_57172 ;~ 2266:016E
cs=0x2266;eip=0x000171; 	X(ADD(*(dw*)((&unk_56488)), ax));	// 74169 add     word ptr unk_56488, ax ;~ 2266:0171
cs=0x2266;eip=0x000175; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 74170 les     bx, dword ptr unk_47AD0 ;~ 2266:0175
cs=0x2266;eip=0x000179; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 74171 mov     ax, es:[bx+0Ah] ;~ 2266:0179
cs=0x2266;eip=0x00017d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 74172 mov     dx, es:[bx+0Ch] ;~ 2266:017D
cs=0x2266;eip=0x000181; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 74173 mov     [bp+var_6], ax ;~ 2266:0181
cs=0x2266;eip=0x000184; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 74174 mov     [bp+var_4], dx ;~ 2266:0184
cs=0x2266;eip=0x000187; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74175 les     bx, dword ptr unk_56FD6 ;~ 2266:0187
cs=0x2266;eip=0x00018b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x332))));	// 74176 mov     ax, es:[bx+332h] ;~ 2266:018B
cs=0x2266;eip=0x000190; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 74177 mov     [bp+var_2], ax ;~ 2266:0190
cs=0x2266;eip=0x000193; 	T(MOV(ax, *(dw*)((&unk_47ad0))));	// 74178 mov     ax, word ptr unk_47AD0 ;~ 2266:0193
cs=0x2266;eip=0x000196; 	T(MOV(dx, *(dw*)((&unk_47ad2))));	// 74179 mov     dx, word ptr unk_47AD2 ;~ 2266:0196
cs=0x2266;eip=0x00019a; 	X(MOV(*(dw*)(raddr(es,bx+0x31C)), ax));	// 74180 mov     es:[bx+31Ch], ax ;~ 2266:019A
cs=0x2266;eip=0x00019f; 	X(MOV(*(dw*)(raddr(es,bx+0x31E)), dx));	// 74181 mov     es:[bx+31Eh], dx ;~ 2266:019F
cs=0x2266;eip=0x0001a4; 	X(PUSH(es));	// 74182 push    es ;~ 2266:01A4
cs=0x2266;eip=0x0001a5; 	X(PUSH(bx));	// 74183 push    bx ;~ 2266:01A5
cs=0x2266;eip=0x0001a6; 	R(CALLF(sub_38b4f,0));	// 74184 call    sub_38B4F ;~ 2266:01A6
cs=0x2266;eip=0x0001ab; 	T(ADD(sp, 4));	// 74185 add     sp, 4 ;~ 2266:01AB
cs=0x2266;eip=0x0001ae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 74186 mov     ax, [bp+var_A] ;~ 2266:01AE
cs=0x2266;eip=0x0001b1; 	X(MOV(*(dw*)((&unk_56486)), ax));	// 74187 mov     word ptr unk_56486, ax ;~ 2266:01B1
cs=0x2266;eip=0x0001b4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 74188 mov     ax, [bp+var_C] ;~ 2266:01B4
cs=0x2266;eip=0x0001b7; 	X(MOV(*(dw*)((&unk_56488)), ax));	// 74189 mov     word ptr unk_56488, ax ;~ 2266:01B7
cs=0x2266;eip=0x0001ba; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74190 les     bx, dword ptr unk_56FD6 ;~ 2266:01BA
cs=0x2266;eip=0x0001be; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x320))));	// 74191 mov     ax, es:[bx+320h] ;~ 2266:01BE
cs=0x2266;eip=0x0001c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 74192 mov     [bp+var_8], ax ;~ 2266:01C3
cs=0x2266;eip=0x0001c6; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 74193 cmp     word ptr es:[bx+332h], 1 ;~ 2266:01C6
cs=0x2266;eip=0x0001cc; 	R(JNZ(loc_30e75));	// 74194 jnz     short loc_30E75 ;~ 2266:01CC
cs=0x2266;eip=0x0001ce; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 74195 mov     ax, es:[bx+2FAh] ;~ 2266:01CE
cs=0x2266;eip=0x0001d3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 74196 mov     dx, es:[bx+2FCh] ;~ 2266:01D3
cs=0x2266;eip=0x0001d8; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 74197 add     ax, es:[bx+302h] ;~ 2266:01D8
cs=0x2266;eip=0x0001dd; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 74198 adc     dx, es:[bx+304h] ;~ 2266:01DD
cs=0x2266;eip=0x0001e2; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 74199 les     bx, dword ptr unk_47AD0 ;~ 2266:01E2
cs=0x2266;eip=0x0001e6; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 74200 cmp     dx, es:[bx+0Ch] ;~ 2266:01E6
cs=0x2266;eip=0x0001ea; 	R(JL(loc_30e75));	// 74201 jl      short loc_30E75 ;~ 2266:01EA
cs=0x2266;eip=0x0001ec; 	R(JG(loc_30e34));	// 74202 jg      short loc_30E34 ;~ 2266:01EC
cs=0x2266;eip=0x0001ee; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 74203 cmp     ax, es:[bx+0Ah] ;~ 2266:01EE
cs=0x2266;eip=0x0001f2; 	R(JC(loc_30e75));	// 74204 jb      short loc_30E75 ;~ 2266:01F2
loc_30e34:
	// 9176 
cs=0x2266;eip=0x0001f4; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74207 les     bx, dword ptr unk_56FD6 ;~ 2266:01F4
cs=0x2266;eip=0x0001f8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 74208 mov     ax, es:[bx+2FAh] ;~ 2266:01F8
cs=0x2266;eip=0x0001fd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 74209 mov     dx, es:[bx+2FCh] ;~ 2266:01FD
cs=0x2266;eip=0x000202; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 74210 add     ax, es:[bx+302h] ;~ 2266:0202
cs=0x2266;eip=0x000207; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 74211 adc     dx, es:[bx+304h] ;~ 2266:0207
cs=0x2266;eip=0x00020c; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_4))));	// 74212 cmp     dx, [bp+var_4] ;~ 2266:020C
cs=0x2266;eip=0x00020f; 	R(JG(loc_30e75));	// 74213 jg      short loc_30E75 ;~ 2266:020F
cs=0x2266;eip=0x000211; 	R(JL(loc_30e58));	// 74214 jl      short loc_30E58 ;~ 2266:0211
cs=0x2266;eip=0x000213; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_6))));	// 74215 cmp     ax, [bp+var_6] ;~ 2266:0213
cs=0x2266;eip=0x000216; 	R(JNC(loc_30e75));	// 74216 jnb     short loc_30E75 ;~ 2266:0216
loc_30e58:
	// 9177 
cs=0x2266;eip=0x000218; 	R(CALLF(sub_36f79,0));	// 74219 call    sub_36F79 ;~ 2266:0218
cs=0x2266;eip=0x00021d; 	R(CALLF(sub_1822c,0));	// 74220 call    sub_1822C ;~ 2266:021D
cs=0x2266;eip=0x000222; 	T(OR(ax, ax));	// 74221 or      ax, ax ;~ 2266:0222
cs=0x2266;eip=0x000224; 	R(JNZ(loc_30e69));	// 74222 jnz     short loc_30E69 ;~ 2266:0224
cs=0x2266;eip=0x000226; 	R(JMP(loc_30f7f));	// 74223 jmp     loc_30F7F ;~ 2266:0226
loc_30e69:
	// 9178 
cs=0x2266;eip=0x000229; 	T(MOV(ax, *(dw*)((&unk_57058))));	// 74227 mov     ax, word ptr unk_57058 ;~ 2266:0229
cs=0x2266;eip=0x00022c; 	T(ADD(ax, 4));	// 74228 add     ax, 4 ;~ 2266:022C
cs=0x2266;eip=0x00022f; 	X(MOV(*(dw*)((&unk_564f0)), ax));	// 74229 mov     word ptr unk_564F0, ax ;~ 2266:022F
cs=0x2266;eip=0x000232; 	R(JMP(loc_30f7f));	// 74230 jmp     loc_30F7F ;~ 2266:0232
loc_30e75:
	// 9179 
cs=0x2266;eip=0x000235; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 74235 les     bx, dword ptr unk_56FD6 ;~ 2266:0235
cs=0x2266;eip=0x000239; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 74236 cmp     word ptr es:[bx+332h], 2 ;~ 2266:0239
cs=0x2266;eip=0x00023f; 	R(JNZ(loc_30e87));	// 74237 jnz     short loc_30E87 ;~ 2266:023F
cs=0x2266;eip=0x000241; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 2));	// 74238 cmp     [bp+var_2], 2 ;~ 2266:0241
cs=0x2266;eip=0x000245; 	R(JNZ(loc_30e90));	// 74239 jnz     short loc_30E90 ;~ 2266:0245
loc_30e87:
	// 9180 
cs=0x2266;eip=0x000247; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 74242 cmp     [bp+var_8], 0 ;~ 2266:0247
cs=0x2266;eip=0x00024b; 	R(JNZ(loc_30e90));	// 74243 jnz     short loc_30E90 ;~ 2266:024B
cs=0x2266;eip=0x00024d; 	R(JMP(loc_30f7f));	// 74244 jmp     loc_30F7F ;~ 2266:024D
loc_30e90:
	// 9181 
cs=0x2266;eip=0x000250; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x0FFFF));	// 74249 cmp     [bp+var_8], 0FFFFh ;~ 2266:0250
cs=0x2266;eip=0x000254; 	R(JNZ(loc_30ea4));	// 74250 jnz     short loc_30EA4 ;~ 2266:0254
cs=0x2266;eip=0x000256; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 74251 cmp     word ptr es:[bx+332h], 1 ;~ 2266:0256
cs=0x2266;eip=0x00025c; 	R(JZ(loc_30ea1));	// 74252 jz      short loc_30EA1 ;~ 2266:025C
cs=0x2266;eip=0x00025e; 	R(JMP(loc_30f4f));	// 74253 jmp     loc_30F4F ;~ 2266:025E
loc_30ea1:
	// 9182 
cs=0x2266;eip=0x000261; 	R(JMP(loc_30f7f));	// 74257 jmp     loc_30F7F ;~ 2266:0261
loc_30ea4:
	// 9183 
cs=0x2266;eip=0x000264; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 74261 mov     dx, word ptr unk_47A9A ;~ 2266:0264
cs=0x2266;eip=0x000268; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 74262 mov     ax, [bp+var_8] ;~ 2266:0268
cs=0x2266;eip=0x00026b; 	T(MOV(es, dx));	// 74263 mov     es, dx ;~ 2266:026B
cs=0x2266;eip=0x00026d; 	T(MOV(bx, ax));	// 74265 mov     bx, ax ;~ 2266:026D
cs=0x2266;eip=0x00026f; 	T(CMP(*(dw*)(raddr(es,bx)), 0x0B13C));	// 74266 cmp     word ptr es:[bx], 0B13Ch ;~ 2266:026F
cs=0x2266;eip=0x000274; 	R(JNZ(loc_30f2d));	// 74267 jnz     short loc_30F2D ;~ 2266:0274
cs=0x2266;eip=0x000276; 	T(MOV(ax, 0x2078));	// 74268 mov     ax, 2078h ;~ 2266:0276
cs=0x2266;eip=0x000279; 	X(PUSH(ds));	// 74269 push    ds ;~ 2266:0279
cs=0x2266;eip=0x00027a; 	X(PUSH(ax));	// 74270 push    ax ;~ 2266:027A
cs=0x2266;eip=0x00027b; 	R(CALLF(sub_1c5f1,0));	// 74271 call    sub_1C5F1 ;~ 2266:027B
cs=0x2266;eip=0x000280; 	R(CALLF(sub_36f43,0));	// 74272 call    sub_36F43 ;~ 2266:0280
cs=0x2266;eip=0x000285; 	T(MOV(ax, 0x14A0));	// 74273 mov     ax, 14A0h ;~ 2266:0285
cs=0x2266;eip=0x000288; 	T(CWD);	// 74274 cwd ;~ 2266:0288
cs=0x2266;eip=0x000289; 	X(PUSH(dx));	// 74275 push    dx ;~ 2266:0289
cs=0x2266;eip=0x00028a; 	X(PUSH(ax));	// 74276 push    ax ;~ 2266:028A
cs=0x2266;eip=0x00028b; 	T(MOV(ax, 0x14));	// 74277 mov     ax, 14h ;~ 2266:028B
cs=0x2266;eip=0x00028e; 	X(PUSH(ax));	// 74278 push    ax ;~ 2266:028E
cs=0x2266;eip=0x00028f; 	R(CALLF(sub_2937a,0));	// 74279 call    sub_2937A ;~ 2266:028F
cs=0x2266;eip=0x000294; 	T(INC(ax));	// 74280 inc     ax ;~ 2266:0294
cs=0x2266;eip=0x000295; 	T(INC(ax));	// 74281 inc     ax ;~ 2266:0295
cs=0x2266;eip=0x000296; 	T(CWD);	// 74282 cwd ;~ 2266:0296
cs=0x2266;eip=0x000297; 	T(MOV(dh, dl));	// 74283 mov     dh, dl ;~ 2266:0297
cs=0x2266;eip=0x000299; 	T(MOV(dl, ah));	// 74284 mov     dl, ah ;~ 2266:0299
cs=0x2266;eip=0x00029b; 	T(MOV(ah, al));	// 74285 mov     ah, al ;~ 2266:029B
cs=0x2266;eip=0x00029d; 	T(SUB(al, al));	// 74286 sub     al, al ;~ 2266:029D
cs=0x2266;eip=0x00029f; 	X(PUSH(dx));	// 74287 push    dx ;~ 2266:029F
cs=0x2266;eip=0x0002a0; 	X(PUSH(ax));	// 74288 push    ax ;~ 2266:02A0
cs=0x2266;eip=0x0002a1; 	R(CALLF(sub_105c2,0));	// 74289 call    sub_105C2 ;~ 2266:02A1
cs=0x2266;eip=0x0002a6; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 74290 les     bx, dword ptr unk_47AD0 ;~ 2266:02A6
cs=0x2266;eip=0x0002aa; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 74292 mov     es:[bx+6], ax ;~ 2266:02AA
cs=0x2266;eip=0x0002ae; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 74293 mov     es:[bx+8], dx ;~ 2266:02AE
cs=0x2266;eip=0x0002b2; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), 0x0DC00));	// 74294 mov     word ptr es:[bx+0Ah], 0DC00h ;~ 2266:02B2
cs=0x2266;eip=0x0002b8; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), 5));	// 74295 mov     word ptr es:[bx+0Ch], 5 ;~ 2266:02B8
cs=0x2266;eip=0x0002be; 	T(MOV(ax, 0x14A0));	// 74296 mov     ax, 14A0h ;~ 2266:02BE
cs=0x2266;eip=0x0002c1; 	T(CWD);	// 74297 cwd ;~ 2266:02C1
cs=0x2266;eip=0x0002c2; 	X(PUSH(dx));	// 74298 push    dx ;~ 2266:02C2
cs=0x2266;eip=0x0002c3; 	X(PUSH(ax));	// 74299 push    ax ;~ 2266:02C3
cs=0x2266;eip=0x0002c4; 	T(MOV(ax, 0x14));	// 74300 mov     ax, 14h ;~ 2266:02C4
cs=0x2266;eip=0x0002c7; 	X(PUSH(ax));	// 74301 push    ax ;~ 2266:02C7
cs=0x2266;eip=0x0002c8; 	R(CALLF(sub_2937a,0));	// 74302 call    sub_2937A ;~ 2266:02C8
cs=0x2266;eip=0x0002cd; 	T(INC(ax));	// 74303 inc     ax ;~ 2266:02CD
cs=0x2266;eip=0x0002ce; 	T(INC(ax));	// 74304 inc     ax ;~ 2266:02CE
cs=0x2266;eip=0x0002cf; 	T(CWD);	// 74305 cwd ;~ 2266:02CF
cs=0x2266;eip=0x0002d0; 	T(MOV(dh, dl));	// 74306 mov     dh, dl ;~ 2266:02D0
cs=0x2266;eip=0x0002d2; 	T(MOV(dl, ah));	// 74307 mov     dl, ah ;~ 2266:02D2
cs=0x2266;eip=0x0002d4; 	T(MOV(ah, al));	// 74308 mov     ah, al ;~ 2266:02D4
cs=0x2266;eip=0x0002d6; 	T(SUB(al, al));	// 74309 sub     al, al ;~ 2266:02D6
cs=0x2266;eip=0x0002d8; 	X(PUSH(dx));	// 74310 push    dx ;~ 2266:02D8
cs=0x2266;eip=0x0002d9; 	X(PUSH(ax));	// 74311 push    ax ;~ 2266:02D9
cs=0x2266;eip=0x0002da; 	R(CALLF(sub_105c2,0));	// 74312 call    sub_105C2 ;~ 2266:02DA
cs=0x2266;eip=0x0002df; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 74313 les     bx, dword ptr unk_47AD0 ;~ 2266:02DF
cs=0x2266;eip=0x0002e3; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 74314 mov     es:[bx+0Eh], ax ;~ 2266:02E3
cs=0x2266;eip=0x0002e7; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 74315 mov     es:[bx+10h], dx ;~ 2266:02E7
cs=0x2266;eip=0x0002eb; 	R(JMP(loc_30f7f));	// 74316 jmp     short loc_30F7F ;~ 2266:02EB
loc_30f2d:
	// 9184 
cs=0x2266;eip=0x0002ed; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 74320 mov     dx, word ptr unk_47A9A ;~ 2266:02ED
cs=0x2266;eip=0x0002f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 74321 mov     ax, [bp+var_8] ;~ 2266:02F1
cs=0x2266;eip=0x0002f4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 74322 mov     word ptr [bp+var_10], ax ;~ 2266:02F4
cs=0x2266;eip=0x0002f7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 74323 mov     word ptr [bp+var_10+2], dx ;~ 2266:02F7
cs=0x2266;eip=0x0002fa; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 74324 les     bx, [bp+var_10] ;~ 2266:02FA
cs=0x2266;eip=0x0002fd; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x800));	// 74325 test    word ptr es:[bx+2], 800h ;~ 2266:02FD
cs=0x2266;eip=0x000303; 	R(JZ(loc_30f4f));	// 74326 jz      short loc_30F4F ;~ 2266:0303
cs=0x2266;eip=0x000305; 	X(PUSH(dx));	// 74327 push    dx ;~ 2266:0305
cs=0x2266;eip=0x000306; 	X(PUSH(ax));	// 74328 push    ax ;~ 2266:0306
cs=0x2266;eip=0x000307; 	R(CALLF(sub_1be19,0));	// 74329 call    sub_1BE19 ;~ 2266:0307
cs=0x2266;eip=0x00030c; 	T(ADD(sp, 4));	// 74330 add     sp, 4 ;~ 2266:030C
loc_30f4f:
	// 9185 
cs=0x2266;eip=0x00030f; 	R(CALLF(sub_3701c,0));	// 74334 call    sub_3701C ;~ 2266:030F
cs=0x2266;eip=0x000314; 	R(CALLF(sub_140e2,0));	// 74335 call    sub_140E2 ;~ 2266:0314
cs=0x2266;eip=0x000319; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 74336 mov     dx, word ptr unk_47A9A ;~ 2266:0319
cs=0x2266;eip=0x00031d; 	T(MOV(ax, *(dw*)((&unk_56fbf))));	// 74337 mov     ax, word ptr unk_56FBF ;~ 2266:031D
cs=0x2266;eip=0x000320; 	T(MOV(es, dx));	// 74338 mov     es, dx ;~ 2266:0320
cs=0x2266;eip=0x000322; 	T(MOV(bx, ax));	// 74340 mov     bx, ax ;~ 2266:0322
cs=0x2266;eip=0x000324; 	T(SUB(ax, ax));	// 74341 sub     ax, ax ;~ 2266:0324
cs=0x2266;eip=0x000326; 	X(MOV(*(dw*)(raddr(es,bx+0x1C)), ax));	// 74342 mov     es:[bx+1Ch], ax ;~ 2266:0326
cs=0x2266;eip=0x00032a; 	X(MOV(*(dw*)(raddr(es,bx+0x1A)), ax));	// 74343 mov     es:[bx+1Ah], ax ;~ 2266:032A
cs=0x2266;eip=0x00032e; 	X(MOV(unk_56eb1, 4));	// 74344 mov     byte ptr unk_56EB1, 4 ;~ 2266:032E
cs=0x2266;eip=0x000333; 	T(MOV(ax, 1));	// 74345 mov     ax, 1 ;~ 2266:0333
cs=0x2266;eip=0x000336; 	X(PUSH(ax));	// 74346 push    ax ;~ 2266:0336
cs=0x2266;eip=0x000337; 	R(CALLF(sub_1a5bb,0));	// 74347 call    sub_1A5BB ;~ 2266:0337
cs=0x2266;eip=0x00033c; 	T(ADD(sp, 2));	// 74348 add     sp, 2 ;~ 2266:033C
loc_30f7f:
	// 9186 
cs=0x2266;eip=0x00033f; 	T(MOV(sp, bp));	// 74352 mov     sp, bp ;~ 2266:033F
cs=0x2266;eip=0x000341; 	X(POP(bp));	// 74353 pop     bp ;~ 2266:0341
cs=0x2266;eip=0x000342; 	R(RETF(0));	// 74354 retf ;~ 2266:0342

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_30c93: 	goto loc_30c93;
        case m2c::kloc_30ccd: 	goto loc_30ccd;
        case m2c::kloc_30d32: 	goto loc_30d32;
        case m2c::kloc_30d54: 	goto loc_30d54;
        case m2c::kloc_30d6b: 	goto loc_30d6b;
        case m2c::kloc_30d83: 	goto loc_30d83;
        case m2c::kloc_30d8f: 	goto loc_30d8f;
        case m2c::kloc_30d9b: 	goto loc_30d9b;
        case m2c::kloc_30da7: 	goto loc_30da7;
        case m2c::kloc_30e34: 	goto loc_30e34;
        case m2c::kloc_30e58: 	goto loc_30e58;
        case m2c::kloc_30e69: 	goto loc_30e69;
        case m2c::kloc_30e75: 	goto loc_30e75;
        case m2c::kloc_30e87: 	goto loc_30e87;
        case m2c::kloc_30e90: 	goto loc_30e90;
        case m2c::kloc_30ea1: 	goto loc_30ea1;
        case m2c::kloc_30ea4: 	goto loc_30ea4;
        case m2c::kloc_30f2d: 	goto loc_30f2d;
        case m2c::kloc_30f4f: 	goto loc_30f4f;
        case m2c::kloc_30f7f: 	goto loc_30f7f;
        case m2c::klocret_30d14: 	goto locret_30d14;
        case m2c::kseg019_proc: 	goto seg019_proc;
        case m2c::ksub_30c4b: 	goto sub_30c4b;
        case m2c::ksub_30c99: 	goto sub_30c99;
        case m2c::ksub_30cdf: 	goto sub_30cdf;
        case m2c::ksub_30d15: 	goto sub_30d15;
        case m2c::ksub_30d56: 	goto sub_30d56;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

