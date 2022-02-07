/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void sub_2f4ee(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2f4ee:
    _begin:
#undef var_8
#define var_8 -8
	// 70160 var_8           = word ptr -8 ;~ 20F0:000E
#undef var_6
#define var_6 -6
	// 70161 var_6           = word ptr -6 ;~ 20F0:000E
#undef var_4
#define var_4 -4
	// 70162 var_4           = word ptr -4 ;~ 20F0:000E
#undef var_2
#define var_2 -2
	// 70163 var_2           = word ptr -2 ;~ 20F0:000E
#undef arg_0
#define arg_0 6
	// 70164 arg_0           = word ptr  6 ;~ 20F0:000E
#undef arg_2
#define arg_2 8
	// 70165 arg_2           = word ptr  8 ;~ 20F0:000E
#undef arg_4
#define arg_4 0x0A
	// 70166 arg_4           = word ptr  0Ah ;~ 20F0:000E
#undef arg_6
#define arg_6 0x0C
	// 70167 arg_6           = word ptr  0Ch ;~ 20F0:000E
#undef arg_8
#define arg_8 0x0E
	// 70168 arg_8           = dword ptr  0Eh ;~ 20F0:000E
cs=0x20f0;eip=0x00000e; 	X(PUSH(bp));	// 70170 push    bp ;~ 20F0:000E
cs=0x20f0;eip=0x00000f; 	T(MOV(bp, sp));	// 70171 mov     bp, sp ;~ 20F0:000F
cs=0x20f0;eip=0x000011; 	T(SUB(sp, 8));	// 70172 sub     sp, 8 ;~ 20F0:0011
cs=0x20f0;eip=0x000014; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 70173 cmp     [bp+arg_2], 0 ;~ 20F0:0014
cs=0x20f0;eip=0x000018; 	R(JG(loc_2f508));	// 70174 jg      short loc_2F508 ;~ 20F0:0018
cs=0x20f0;eip=0x00001a; 	R(JGE(loc_2f4ff));	// 70175 jge     short loc_2F4FF ;~ 20F0:001A
cs=0x20f0;eip=0x00001c; 	R(JMP(loc_2f605));	// 70176 jmp     loc_2F605 ;~ 20F0:001C
loc_2f4ff:
	// 8876 
cs=0x20f0;eip=0x00001f; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 70180 cmp     [bp+arg_0], 0 ;~ 20F0:001F
cs=0x20f0;eip=0x000023; 	R(JNZ(loc_2f508));	// 70181 jnz     short loc_2F508 ;~ 20F0:0023
cs=0x20f0;eip=0x000025; 	R(JMP(loc_2f605));	// 70182 jmp     loc_2F605 ;~ 20F0:0025
loc_2f508:
	// 8877 
cs=0x20f0;eip=0x000028; 	T(CMP(*(dw*)(raddr(ss,bp+arg_2)), 0));	// 70187 cmp     [bp+arg_2], 0 ;~ 20F0:0028
cs=0x20f0;eip=0x00002c; 	R(JG(loc_2f578));	// 70188 jg      short loc_2F578 ;~ 20F0:002C
cs=0x20f0;eip=0x00002e; 	R(JL(loc_2f517));	// 70189 jl      short loc_2F517 ;~ 20F0:002E
cs=0x20f0;eip=0x000030; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x4000));	// 70190 cmp     [bp+arg_0], 4000h ;~ 20F0:0030
cs=0x20f0;eip=0x000035; 	R(JA(loc_2f578));	// 70191 ja      short loc_2F578 ;~ 20F0:0035
loc_2f517:
	// 8878 
cs=0x20f0;eip=0x000037; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 70194 mov     ax, [bp+arg_0] ;~ 20F0:0037
cs=0x20f0;eip=0x00003a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 70195 mov     [bp+var_4], ax ;~ 20F0:003A
cs=0x20f0;eip=0x00003d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 70196 cmp     [bp+arg_4], 0 ;~ 20F0:003D
cs=0x20f0;eip=0x000041; 	R(JZ(loc_2f547));	// 70197 jz      short loc_2F547 ;~ 20F0:0041
cs=0x20f0;eip=0x000043; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 70198 mov     [bp+var_2], 0 ;~ 20F0:0043
cs=0x20f0;eip=0x000048; 	T(ax = bp+var_4);	// 70199 lea     ax, [bp+var_4] ;~ 20F0:0048
cs=0x20f0;eip=0x00004b; 	X(PUSH(ax));	// 70200 push    ax ;~ 20F0:004B
cs=0x20f0;eip=0x00004c; 	T(MOV(ax, 0x106));	// 70201 mov     ax, 106h ;~ 20F0:004C
cs=0x20f0;eip=0x00004f; 	X(PUSH(ax));	// 70202 push    ax ;~ 20F0:004F
cs=0x20f0;eip=0x000050; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 70203 push    [bp+arg_4] ;~ 20F0:0050
cs=0x20f0;eip=0x000053; 	R(CALLF(sub_27d5d,0));	// 70204 call    sub_27D5D ;~ 20F0:0053
cs=0x20f0;eip=0x000058; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 70205 mov     ax, [bp+var_2] ;~ 20F0:0058
cs=0x20f0;eip=0x00005b; 	T(CWD);	// 70206 cwd ;~ 20F0:005B
cs=0x20f0;eip=0x00005c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70207 les     bx, [bp+arg_8] ;~ 20F0:005C
cs=0x20f0;eip=0x00005f; 	X(ADD(*(dw*)(raddr(es,bx+4)), ax));	// 70208 add     es:[bx+4], ax ;~ 20F0:005F
cs=0x20f0;eip=0x000063; 	X(ADC(*(dw*)(raddr(es,bx+6)), dx));	// 70209 adc     es:[bx+6], dx ;~ 20F0:0063
loc_2f547:
	// 8879 
cs=0x20f0;eip=0x000067; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 70212 mov     [bp+var_8], 0 ;~ 20F0:0067
cs=0x20f0;eip=0x00006c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 70213 mov     ax, [bp+var_4] ;~ 20F0:006C
cs=0x20f0;eip=0x00006f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 70214 mov     [bp+var_6], ax ;~ 20F0:006F
cs=0x20f0;eip=0x000072; 	T(ax = bp+var_8);	// 70215 lea     ax, [bp+var_8] ;~ 20F0:0072
cs=0x20f0;eip=0x000075; 	X(PUSH(ax));	// 70216 push    ax ;~ 20F0:0075
cs=0x20f0;eip=0x000076; 	T(MOV(ax, 0x106));	// 70217 mov     ax, 106h ;~ 20F0:0076
cs=0x20f0;eip=0x000079; 	X(PUSH(ax));	// 70218 push    ax ;~ 20F0:0079
cs=0x20f0;eip=0x00007a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 70219 push    [bp+arg_6] ;~ 20F0:007A
cs=0x20f0;eip=0x00007d; 	R(CALLF(sub_27d5d,0));	// 70220 call    sub_27D5D ;~ 20F0:007D
cs=0x20f0;eip=0x000082; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 70221 mov     ax, [bp+var_8] ;~ 20F0:0082
cs=0x20f0;eip=0x000085; 	T(CWD);	// 70222 cwd ;~ 20F0:0085
cs=0x20f0;eip=0x000086; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70223 les     bx, [bp+arg_8] ;~ 20F0:0086
cs=0x20f0;eip=0x000089; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 70224 add     es:[bx], ax ;~ 20F0:0089
cs=0x20f0;eip=0x00008c; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 70225 adc     es:[bx+2], dx ;~ 20F0:008C
cs=0x20f0;eip=0x000090; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 70226 mov     ax, [bp+var_6] ;~ 20F0:0090
cs=0x20f0;eip=0x000093; 	T(CWD);	// 70227 cwd ;~ 20F0:0093
cs=0x20f0;eip=0x000094; 	R(JMP(loc_2f5fa));	// 70228 jmp     loc_2F5FA ;~ 20F0:0094
loc_2f578:
	// 8880 
cs=0x20f0;eip=0x000098; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 70234 mov     ax, [bp+arg_0] ;~ 20F0:0098
cs=0x20f0;eip=0x00009b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 70235 mov     dx, [bp+arg_2] ;~ 20F0:009B
cs=0x20f0;eip=0x00009e; 	T(MOV(cl, 8));	// 70236 mov     cl, 8 ;~ 20F0:009E
loc_2f580:
	// 8881 
cs=0x20f0;eip=0x0000a0; 	T(SAR(dx, 1));	// 70239 sar     dx, 1 ;~ 20F0:00A0
cs=0x20f0;eip=0x0000a2; 	T(RCR(ax, 1));	// 70240 rcr     ax, 1 ;~ 20F0:00A2
cs=0x20f0;eip=0x0000a4; 	T(DEC(cl));	// 70241 dec     cl ;~ 20F0:00A4
cs=0x20f0;eip=0x0000a6; 	R(JNZ(loc_2f580));	// 70242 jnz     short loc_2F580 ;~ 20F0:00A6
cs=0x20f0;eip=0x0000a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 70243 mov     [bp+var_4], ax ;~ 20F0:00A8
cs=0x20f0;eip=0x0000ab; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 70244 cmp     [bp+arg_4], 0 ;~ 20F0:00AB
cs=0x20f0;eip=0x0000af; 	R(JZ(loc_2f5bd));	// 70245 jz      short loc_2F5BD ;~ 20F0:00AF
cs=0x20f0;eip=0x0000b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 70246 mov     [bp+var_2], 0 ;~ 20F0:00B1
cs=0x20f0;eip=0x0000b6; 	T(ax = bp+var_4);	// 70247 lea     ax, [bp+var_4] ;~ 20F0:00B6
cs=0x20f0;eip=0x0000b9; 	X(PUSH(ax));	// 70248 push    ax ;~ 20F0:00B9
cs=0x20f0;eip=0x0000ba; 	T(MOV(ax, 0x106));	// 70249 mov     ax, 106h ;~ 20F0:00BA
cs=0x20f0;eip=0x0000bd; 	X(PUSH(ax));	// 70250 push    ax ;~ 20F0:00BD
cs=0x20f0;eip=0x0000be; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 70251 push    [bp+arg_4] ;~ 20F0:00BE
cs=0x20f0;eip=0x0000c1; 	R(CALLF(sub_27d5d,0));	// 70252 call    sub_27D5D ;~ 20F0:00C1
cs=0x20f0;eip=0x0000c6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 70253 mov     ax, [bp+var_2] ;~ 20F0:00C6
cs=0x20f0;eip=0x0000c9; 	T(CWD);	// 70254 cwd ;~ 20F0:00C9
cs=0x20f0;eip=0x0000ca; 	T(MOV(dh, dl));	// 70255 mov     dh, dl ;~ 20F0:00CA
cs=0x20f0;eip=0x0000cc; 	T(MOV(dl, ah));	// 70256 mov     dl, ah ;~ 20F0:00CC
cs=0x20f0;eip=0x0000ce; 	T(MOV(ah, al));	// 70257 mov     ah, al ;~ 20F0:00CE
cs=0x20f0;eip=0x0000d0; 	T(SUB(al, al));	// 70258 sub     al, al ;~ 20F0:00D0
cs=0x20f0;eip=0x0000d2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70259 les     bx, [bp+arg_8] ;~ 20F0:00D2
cs=0x20f0;eip=0x0000d5; 	X(ADD(*(dw*)(raddr(es,bx+4)), ax));	// 70260 add     es:[bx+4], ax ;~ 20F0:00D5
cs=0x20f0;eip=0x0000d9; 	X(ADC(*(dw*)(raddr(es,bx+6)), dx));	// 70261 adc     es:[bx+6], dx ;~ 20F0:00D9
loc_2f5bd:
	// 8882 
cs=0x20f0;eip=0x0000dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 70264 mov     [bp+var_8], 0 ;~ 20F0:00DD
cs=0x20f0;eip=0x0000e2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 70265 mov     ax, [bp+var_4] ;~ 20F0:00E2
cs=0x20f0;eip=0x0000e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 70266 mov     [bp+var_6], ax ;~ 20F0:00E5
cs=0x20f0;eip=0x0000e8; 	T(ax = bp+var_8);	// 70267 lea     ax, [bp+var_8] ;~ 20F0:00E8
cs=0x20f0;eip=0x0000eb; 	X(PUSH(ax));	// 70268 push    ax ;~ 20F0:00EB
cs=0x20f0;eip=0x0000ec; 	T(MOV(ax, 0x106));	// 70269 mov     ax, 106h ;~ 20F0:00EC
cs=0x20f0;eip=0x0000ef; 	X(PUSH(ax));	// 70270 push    ax ;~ 20F0:00EF
cs=0x20f0;eip=0x0000f0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 70271 push    [bp+arg_6] ;~ 20F0:00F0
cs=0x20f0;eip=0x0000f3; 	R(CALLF(sub_27d5d,0));	// 70272 call    sub_27D5D ;~ 20F0:00F3
cs=0x20f0;eip=0x0000f8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 70273 mov     ax, [bp+var_8] ;~ 20F0:00F8
cs=0x20f0;eip=0x0000fb; 	T(CWD);	// 70274 cwd ;~ 20F0:00FB
cs=0x20f0;eip=0x0000fc; 	T(MOV(dh, dl));	// 70275 mov     dh, dl ;~ 20F0:00FC
cs=0x20f0;eip=0x0000fe; 	T(MOV(dl, ah));	// 70276 mov     dl, ah ;~ 20F0:00FE
cs=0x20f0;eip=0x000100; 	T(MOV(ah, al));	// 70277 mov     ah, al ;~ 20F0:0100
cs=0x20f0;eip=0x000102; 	T(SUB(al, al));	// 70278 sub     al, al ;~ 20F0:0102
cs=0x20f0;eip=0x000104; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70279 les     bx, [bp+arg_8] ;~ 20F0:0104
cs=0x20f0;eip=0x000107; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 70280 add     es:[bx], ax ;~ 20F0:0107
cs=0x20f0;eip=0x00010a; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 70281 adc     es:[bx+2], dx ;~ 20F0:010A
cs=0x20f0;eip=0x00010e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 70282 mov     ax, [bp+var_6] ;~ 20F0:010E
cs=0x20f0;eip=0x000111; 	T(CWD);	// 70283 cwd ;~ 20F0:0111
cs=0x20f0;eip=0x000112; 	T(MOV(dh, dl));	// 70284 mov     dh, dl ;~ 20F0:0112
cs=0x20f0;eip=0x000114; 	T(MOV(dl, ah));	// 70285 mov     dl, ah ;~ 20F0:0114
cs=0x20f0;eip=0x000116; 	T(MOV(ah, al));	// 70286 mov     ah, al ;~ 20F0:0116
cs=0x20f0;eip=0x000118; 	T(SUB(al, al));	// 70287 sub     al, al ;~ 20F0:0118
loc_2f5fa:
	// 8883 
cs=0x20f0;eip=0x00011a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 70290 les     bx, [bp+arg_8] ;~ 20F0:011A
cs=0x20f0;eip=0x00011d; 	X(ADD(*(dw*)(raddr(es,bx+8)), ax));	// 70291 add     es:[bx+8], ax ;~ 20F0:011D
cs=0x20f0;eip=0x000121; 	X(ADC(*(dw*)(raddr(es,bx+0x0A)), dx));	// 70292 adc     es:[bx+0Ah], dx ;~ 20F0:0121
loc_2f605:
	// 8884 
cs=0x20f0;eip=0x000125; 	T(MOV(sp, bp));	// 70296 mov     sp, bp ;~ 20F0:0125
cs=0x20f0;eip=0x000127; 	X(POP(bp));	// 70297 pop     bp ;~ 20F0:0127
cs=0x20f0;eip=0x000128; 	R(RETF(0x0C));	// 70298 retf    0Ch ;~ 20F0:0128

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2f4ff: 	goto loc_2f4ff;
        case m2c::kloc_2f508: 	goto loc_2f508;
        case m2c::kloc_2f517: 	goto loc_2f517;
        case m2c::kloc_2f547: 	goto loc_2f547;
        case m2c::kloc_2f578: 	goto loc_2f578;
        case m2c::kloc_2f580: 	goto loc_2f580;
        case m2c::kloc_2f5bd: 	goto loc_2f5bd;
        case m2c::kloc_2f5fa: 	goto loc_2f5fa;
        case m2c::kloc_2f605: 	goto loc_2f605;
        case m2c::ksub_2f4ee: 	goto sub_2f4ee;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

