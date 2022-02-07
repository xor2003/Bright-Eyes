/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group10(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group10:
    _begin:
sub_2f60c:
	// 70316 
cs=0x2102;eip=0x00000c; 	X(PUSH(bp));	// 70318 push    bp ;~ 2102:000C
cs=0x2102;eip=0x00000d; 	T(MOV(bp, sp));	// 70319 mov     bp, sp ;~ 2102:000D
cs=0x2102;eip=0x00000f; 	X(PUSH(di));	// 70320 push    di ;~ 2102:000F
cs=0x2102;eip=0x000010; 	X(PUSH(si));	// 70321 push    si ;~ 2102:0010
cs=0x2102;eip=0x000011; 	X(MOV(*(dw*)((&unk_48190)), 0));	// 70322 mov     word ptr unk_48190, 0 ;~ 2102:0011
cs=0x2102;eip=0x000017; 	X(MOV(*(dw*)((&unk_48192)), 1));	// 70323 mov     word ptr unk_48192, 1 ;~ 2102:0017
cs=0x2102;eip=0x00001d; 	T(MOV(si, 0x7D0));	// 70324 mov     si, 7D0h ;~ 2102:001D
cs=0x2102;eip=0x000020; 	R(CALL(sub_2f6c1,0));	// 70325 call    sub_2F6C1 ;~ 2102:0020
cs=0x2102;eip=0x000023; 	X(MOV(*(dw*)((&unk_48180)), di));	// 70326 mov     word ptr unk_48180, di ;~ 2102:0023
cs=0x2102;eip=0x000027; 	T(CMP(di, 0x10));	// 70327 cmp     di, 10h ;~ 2102:0027
cs=0x2102;eip=0x00002a; 	R(JC(loc_2f64b));	// 70328 jb      short loc_2F64B ;~ 2102:002A
cs=0x2102;eip=0x00002c; 	T(CMP(di, 0x3E8));	// 70329 cmp     di, 3E8h ;~ 2102:002C
cs=0x2102;eip=0x000030; 	R(JA(loc_2f64b));	// 70330 ja      short loc_2F64B ;~ 2102:0030
cs=0x2102;eip=0x000032; 	X(MOV(*(dw*)((&unk_48182)), bx));	// 70331 mov     word ptr unk_48182, bx ;~ 2102:0032
cs=0x2102;eip=0x000036; 	T(CMP(bx, 0x10));	// 70332 cmp     bx, 10h ;~ 2102:0036
cs=0x2102;eip=0x000039; 	R(JC(loc_2f64b));	// 70333 jb      short loc_2F64B ;~ 2102:0039
cs=0x2102;eip=0x00003b; 	T(CMP(bx, 0x3E8));	// 70334 cmp     bx, 3E8h ;~ 2102:003B
cs=0x2102;eip=0x00003f; 	R(JA(loc_2f64b));	// 70335 ja      short loc_2F64B ;~ 2102:003F
cs=0x2102;eip=0x000041; 	X(INC(*(dw*)((&unk_48190))));	// 70336 inc     word ptr unk_48190 ;~ 2102:0041
cs=0x2102;eip=0x000045; 	X(MOV(*(dw*)((&unk_48192)), 0));	// 70337 mov     word ptr unk_48192, 0 ;~ 2102:0045
loc_2f64b:
	// 8885 
cs=0x2102;eip=0x00004b; 	T(MOV(cx, 0x0AF1));	// 70341 mov     cx, 0AF1h ;~ 2102:004B
loc_2f64e:
	// 8886 
cs=0x2102;eip=0x00004e; 	R(LOOP(loc_2f64e));	// 70344 loop    loc_2F64E ;~ 2102:004E
cs=0x2102;eip=0x000050; 	T(MOV(si, 0x7D8));	// 70345 mov     si, 7D8h ;~ 2102:0050
cs=0x2102;eip=0x000053; 	R(CALL(sub_2f6c1,0));	// 70346 call    sub_2F6C1 ;~ 2102:0053
cs=0x2102;eip=0x000056; 	X(MOV(*(dw*)((&unk_48188)), di));	// 70347 mov     word ptr unk_48188, di ;~ 2102:0056
cs=0x2102;eip=0x00005a; 	T(CMP(di, 0x10));	// 70348 cmp     di, 10h ;~ 2102:005A
cs=0x2102;eip=0x00005d; 	R(JC(loc_2f678));	// 70349 jb      short loc_2F678 ;~ 2102:005D
cs=0x2102;eip=0x00005f; 	T(CMP(di, 0x3E8));	// 70350 cmp     di, 3E8h ;~ 2102:005F
cs=0x2102;eip=0x000063; 	R(JA(loc_2f678));	// 70351 ja      short loc_2F678 ;~ 2102:0063
cs=0x2102;eip=0x000065; 	X(MOV(*(dw*)((&unk_4818a)), bx));	// 70352 mov     word ptr unk_4818A, bx ;~ 2102:0065
cs=0x2102;eip=0x000069; 	T(CMP(bx, 0x10));	// 70353 cmp     bx, 10h ;~ 2102:0069
cs=0x2102;eip=0x00006c; 	R(JC(loc_2f678));	// 70354 jb      short loc_2F678 ;~ 2102:006C
cs=0x2102;eip=0x00006e; 	T(CMP(bx, 0x3E8));	// 70355 cmp     bx, 3E8h ;~ 2102:006E
cs=0x2102;eip=0x000072; 	R(JA(loc_2f678));	// 70356 ja      short loc_2F678 ;~ 2102:0072
cs=0x2102;eip=0x000074; 	X(INC(*(dw*)((&unk_48190))));	// 70357 inc     word ptr unk_48190 ;~ 2102:0074
loc_2f678:
	// 8887 
cs=0x2102;eip=0x000078; 	T(MOV(ax, *(dw*)((&unk_48190))));	// 70361 mov     ax, word ptr unk_48190 ;~ 2102:0078
cs=0x2102;eip=0x00007b; 	X(POP(si));	// 70362 pop     si ;~ 2102:007B
cs=0x2102;eip=0x00007c; 	X(POP(di));	// 70363 pop     di ;~ 2102:007C
cs=0x2102;eip=0x00007d; 	X(POP(bp));	// 70364 pop     bp ;~ 2102:007D
cs=0x2102;eip=0x00007e; 	R(RETF(0));	// 70365 retf ;~ 2102:007E
sub_2f67f:
	// 70373 
#undef arg_0
#define arg_0 6
	// 70375 arg_0           = word ptr  6 ;~ 2102:007F
#undef arg_2
#define arg_2 8
	// 70376 arg_2           = word ptr  8 ;~ 2102:007F
#undef arg_4
#define arg_4 0x0A
	// 70377 arg_4           = word ptr  0Ah ;~ 2102:007F
cs=0x2102;eip=0x00007f; 	X(PUSH(bp));	// 70379 push    bp ;~ 2102:007F
cs=0x2102;eip=0x000080; 	T(MOV(bp, sp));	// 70380 mov     bp, sp ;~ 2102:0080
cs=0x2102;eip=0x000082; 	X(PUSH(di));	// 70381 push    di ;~ 2102:0082
cs=0x2102;eip=0x000083; 	X(PUSH(si));	// 70382 push    si ;~ 2102:0083
cs=0x2102;eip=0x000084; 	T(MOV(si, 0x7D0));	// 70383 mov     si, 7D0h ;~ 2102:0084
cs=0x2102;eip=0x000087; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 70384 mov     ax, [bp+arg_4] ;~ 2102:0087
cs=0x2102;eip=0x00008a; 	T(XOR(ax, *(dw*)((&unk_48192))));	// 70385 xor     ax, word ptr unk_48192 ;~ 2102:008A
cs=0x2102;eip=0x00008e; 	T(CMP(ax, 1));	// 70386 cmp     ax, 1 ;~ 2102:008E
cs=0x2102;eip=0x000091; 	R(JNZ(loc_2f696));	// 70387 jnz     short loc_2F696 ;~ 2102:0091
cs=0x2102;eip=0x000093; 	T(MOV(si, 0x7D8));	// 70388 mov     si, 7D8h ;~ 2102:0093
loc_2f696:
	// 8888 
cs=0x2102;eip=0x000096; 	R(CALL(sub_2f6c1,0));	// 70391 call    sub_2F6C1 ;~ 2102:0096
cs=0x2102;eip=0x000099; 	T(SUB(di, *(dw*)(raddr(ds,si))));	// 70392 sub     di, [si] ;~ 2102:0099
cs=0x2102;eip=0x00009b; 	T(MOV(ax, 0x80));	// 70393 mov     ax, 80h ; '€' ;~ 2102:009B
cs=0x2102;eip=0x00009e; 	T(IMUL1_2(di));	// 70394 imul    di ;~ 2102:009E
cs=0x2102;eip=0x0000a0; 	X(IDIV2(*(dw*)(raddr(ds,si))));	// 70395 idiv    word ptr [si] ;~ 2102:00A0
cs=0x2102;eip=0x0000a2; 	R(CALL(sub_2f713,0));	// 70396 call    sub_2F713 ;~ 2102:00A2
cs=0x2102;eip=0x0000a5; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 70397 mov     di, [bp+arg_0] ;~ 2102:00A5
cs=0x2102;eip=0x0000a8; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 70398 mov     [di], ax ;~ 2102:00A8
cs=0x2102;eip=0x0000aa; 	T(SUB(bx, *(dw*)(raddr(ds,si+2))));	// 70399 sub     bx, [si+2] ;~ 2102:00AA
cs=0x2102;eip=0x0000ad; 	T(MOV(ax, 0x80));	// 70400 mov     ax, 80h ; '€' ;~ 2102:00AD
cs=0x2102;eip=0x0000b0; 	T(IMUL1_2(bx));	// 70401 imul    bx ;~ 2102:00B0
cs=0x2102;eip=0x0000b2; 	X(IDIV2(*(dw*)(raddr(ds,si+2))));	// 70402 idiv    word ptr [si+2] ;~ 2102:00B2
cs=0x2102;eip=0x0000b5; 	R(CALL(sub_2f713,0));	// 70403 call    sub_2F713 ;~ 2102:00B5
cs=0x2102;eip=0x0000b8; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 70404 mov     bx, [bp+arg_2] ;~ 2102:00B8
cs=0x2102;eip=0x0000bb; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 70405 mov     [bx], ax ;~ 2102:00BB
cs=0x2102;eip=0x0000bd; 	X(POP(si));	// 70406 pop     si ;~ 2102:00BD
cs=0x2102;eip=0x0000be; 	X(POP(di));	// 70407 pop     di ;~ 2102:00BE
cs=0x2102;eip=0x0000bf; 	X(POP(bp));	// 70408 pop     bp ;~ 2102:00BF
cs=0x2102;eip=0x0000c0; 	R(RETF(0));	// 70409 retf ;~ 2102:00C0
sub_2f6c1:
	// 70416 
cs=0x2102;eip=0x0000c1; 	X(PUSH(cx));	// 70418 push    cx ;~ 2102:00C1
cs=0x2102;eip=0x0000c2; 	X(PUSH(dx));	// 70419 push    dx ;~ 2102:00C2
cs=0x2102;eip=0x0000c3; 	X(PUSH(bp));	// 70420 push    bp ;~ 2102:00C3
cs=0x2102;eip=0x0000c4; 	T(CLI);	// 70421 cli ;~ 2102:00C4
cs=0x2102;eip=0x0000c5; 	T(MOV(dx, 0x201));	// 70422 mov     dx, 201h ;~ 2102:00C5
cs=0x2102;eip=0x0000c8; 	R(OUT(dx, al));	// 70423 out     dx, al          ; Game I/O port ;~ 2102:00C8
cs=0x2102;eip=0x0000c9; 	T(SUB(cx, cx));	// 70426 sub     cx, cx ;~ 2102:00C9
cs=0x2102;eip=0x0000cb; 	T(MOV(ah, *(raddr(ds,si+6))));	// 70427 mov     ah, [si+6] ;~ 2102:00CB
cs=0x2102;eip=0x0000ce; 	R(CALL(sub_2f6f6,0));	// 70428 call    sub_2F6F6 ;~ 2102:00CE
cs=0x2102;eip=0x0000d1; 	T(TEST(*(raddr(ds,si+4)), al));	// 70429 test    [si+4], al ;~ 2102:00D1
cs=0x2102;eip=0x0000d4; 	R(JNZ(loc_2f6e3));	// 70430 jnz     short loc_2F6E3 ;~ 2102:00D4
cs=0x2102;eip=0x0000d6; 	T(MOV(bx, cx));	// 70431 mov     bx, cx ;~ 2102:00D6
cs=0x2102;eip=0x0000d8; 	T(MOV(ah, *(raddr(ds,si+4))));	// 70432 mov     ah, [si+4] ;~ 2102:00D8
cs=0x2102;eip=0x0000db; 	R(CALL(sub_2f6f6,0));	// 70433 call    sub_2F6F6 ;~ 2102:00DB
cs=0x2102;eip=0x0000de; 	T(MOV(di, cx));	// 70434 mov     di, cx ;~ 2102:00DE
cs=0x2102;eip=0x0000e0; 	R(JMP(loc_2f6ed));	// 70435 jmp     short loc_2F6ED ;~ 2102:00E0
loc_2f6e3:
	// 8889 
cs=0x2102;eip=0x0000e3; 	T(MOV(di, cx));	// 70441 mov     di, cx ;~ 2102:00E3
cs=0x2102;eip=0x0000e5; 	T(MOV(ah, *(raddr(ds,si+5))));	// 70442 mov     ah, [si+5] ;~ 2102:00E5
cs=0x2102;eip=0x0000e8; 	R(CALL(sub_2f6f6,0));	// 70443 call    sub_2F6F6 ;~ 2102:00E8
cs=0x2102;eip=0x0000eb; 	T(MOV(bx, cx));	// 70444 mov     bx, cx ;~ 2102:00EB
loc_2f6ed:
	// 8890 
cs=0x2102;eip=0x0000ed; 	T(STI);	// 70447 sti ;~ 2102:00ED
cs=0x2102;eip=0x0000ee; 	T(NEG(bx));	// 70448 neg     bx ;~ 2102:00EE
cs=0x2102;eip=0x0000f0; 	T(NEG(di));	// 70449 neg     di ;~ 2102:00F0
cs=0x2102;eip=0x0000f2; 	X(POP(bp));	// 70450 pop     bp ;~ 2102:00F2
cs=0x2102;eip=0x0000f3; 	X(POP(dx));	// 70451 pop     dx ;~ 2102:00F3
cs=0x2102;eip=0x0000f4; 	X(POP(cx));	// 70452 pop     cx ;~ 2102:00F4
cs=0x2102;eip=0x0000f5; 	R(RETN(0));	// 70453 retn ;~ 2102:00F5
sub_2f6f6:
	// 70460 
cs=0x2102;eip=0x0000f6; 	T(MOV(bp, bx));	// 70462 mov     bp, bx ;~ 2102:00F6
cs=0x2102;eip=0x0000f8; 	R(IN(al, dx));	// 70463 in      al, dx ;~ 2102:00F8
cs=0x2102;eip=0x0000f9; 	T(MOV(bl, al));	// 70464 mov     bl, al ;~ 2102:00F9
cs=0x2102;eip=0x0000fb; 	T(NOT(al));	// 70465 not     al ;~ 2102:00FB
cs=0x2102;eip=0x0000fd; 	T(AND(al, ah));	// 70466 and     al, ah ;~ 2102:00FD
cs=0x2102;eip=0x0000ff; 	R(JNZ(loc_2f710));	// 70467 jnz     short loc_2F710 ;~ 2102:00FF
loc_2f701:
	// 8891 
cs=0x2102;eip=0x000101; 	R(IN(al, dx));	// 70471 in      al, dx ;~ 2102:0101
cs=0x2102;eip=0x000102; 	T(CMP(al, bl));	// 70472 cmp     al, bl ;~ 2102:0102
cs=0x2102;eip=0x000104; 	R(LOOPE(loc_2f701));	// 70473 loope   loc_2F701 ;~ 2102:0104
cs=0x2102;eip=0x000106; 	R(JCXZ(loc_2f710));	// 70474 jcxz    short loc_2F710 ;~ 2102:0106
cs=0x2102;eip=0x000108; 	T(MOV(bl, al));	// 70475 mov     bl, al ;~ 2102:0108
cs=0x2102;eip=0x00010a; 	T(NOT(al));	// 70476 not     al ;~ 2102:010A
cs=0x2102;eip=0x00010c; 	T(AND(al, ah));	// 70477 and     al, ah ;~ 2102:010C
cs=0x2102;eip=0x00010e; 	R(LOOPE(loc_2f701));	// 70478 loope   loc_2F701 ;~ 2102:010E
loc_2f710:
	// 8892 
cs=0x2102;eip=0x000110; 	T(MOV(bx, bp));	// 70482 mov     bx, bp ;~ 2102:0110
cs=0x2102;eip=0x000112; 	R(RETN(0));	// 70483 retn ;~ 2102:0112
sub_2f713:
	// 70490 
cs=0x2102;eip=0x000113; 	T(TEST(ax, ax));	// 70492 test    ax, ax ;~ 2102:0113
cs=0x2102;eip=0x000115; 	R(JZ(loc_2f725));	// 70493 jz      short loc_2F725 ;~ 2102:0115
cs=0x2102;eip=0x000117; 	R(JS(loc_2f71f));	// 70494 js      short loc_2F71F ;~ 2102:0117
cs=0x2102;eip=0x000119; 	T(SUB(ax, 5));	// 70495 sub     ax, 5 ;~ 2102:0119
cs=0x2102;eip=0x00011c; 	R(JS(loc_2f725));	// 70496 js      short loc_2F725 ;~ 2102:011C
cs=0x2102;eip=0x00011e; 	R(RETN(0));	// 70497 retn ;~ 2102:011E
loc_2f71f:
	// 8893 
cs=0x2102;eip=0x00011f; 	T(ADD(ax, 5));	// 70501 add     ax, 5 ;~ 2102:011F
cs=0x2102;eip=0x000122; 	R(JNS(loc_2f725));	// 70502 jns     short loc_2F725 ;~ 2102:0122
cs=0x2102;eip=0x000124; 	R(RETN(0));	// 70503 retn ;~ 2102:0124
loc_2f725:
	// 8894 
cs=0x2102;eip=0x000125; 	T(SUB(ax, ax));	// 70508 sub     ax, ax ;~ 2102:0125
cs=0x2102;eip=0x000127; 	R(RETN(0));	// 70509 retn ;~ 2102:0127
sub_2f728:
	// 70517 
#undef arg_0
#define arg_0 6
	// 70519 arg_0           = word ptr  6 ;~ 2102:0128
cs=0x2102;eip=0x000128; 	X(PUSH(bp));	// 70521 push    bp ;~ 2102:0128
cs=0x2102;eip=0x000129; 	T(MOV(bp, sp));	// 70522 mov     bp, sp ;~ 2102:0129
cs=0x2102;eip=0x00012b; 	T(MOV(bx, 0x7D0));	// 70523 mov     bx, 7D0h ;~ 2102:012B
cs=0x2102;eip=0x00012e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 70524 mov     ax, [bp+arg_0] ;~ 2102:012E
cs=0x2102;eip=0x000131; 	T(XOR(ax, *(dw*)((&unk_48192))));	// 70525 xor     ax, word ptr unk_48192 ;~ 2102:0131
cs=0x2102;eip=0x000135; 	T(CMP(ax, 1));	// 70526 cmp     ax, 1 ;~ 2102:0135
cs=0x2102;eip=0x000138; 	R(JNZ(loc_2f73d));	// 70527 jnz     short loc_2F73D ;~ 2102:0138
cs=0x2102;eip=0x00013a; 	T(MOV(bx, 0x7D8));	// 70528 mov     bx, 7D8h ;~ 2102:013A
loc_2f73d:
	// 8895 
cs=0x2102;eip=0x00013d; 	T(MOV(dx, 0x201));	// 70531 mov     dx, 201h ;~ 2102:013D
cs=0x2102;eip=0x000140; 	R(IN(al, dx));	// 70532 in      al, dx          ; Game I/O port ;~ 2102:0140
cs=0x2102;eip=0x000141; 	T(XOR(al, 0x0FF));	// 70535 xor     al, 0FFh ;~ 2102:0141
cs=0x2102;eip=0x000143; 	T(MOV(cl, *(raddr(ds,bx+7))));	// 70536 mov     cl, [bx+7] ;~ 2102:0143
cs=0x2102;eip=0x000146; 	T(ROR(ax, cl));	// 70537 ror     ax, cl ;~ 2102:0146
cs=0x2102;eip=0x000148; 	T(AND(ax, 3));	// 70538 and     ax, 3 ;~ 2102:0148
cs=0x2102;eip=0x00014b; 	X(POP(bp));	// 70539 pop     bp ;~ 2102:014B
cs=0x2102;eip=0x00014c; 	R(RETF(0));	// 70540 retf ;~ 2102:014C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2f64b: 	goto loc_2f64b;
        case m2c::kloc_2f64e: 	goto loc_2f64e;
        case m2c::kloc_2f678: 	goto loc_2f678;
        case m2c::kloc_2f696: 	goto loc_2f696;
        case m2c::kloc_2f6e3: 	goto loc_2f6e3;
        case m2c::kloc_2f6ed: 	goto loc_2f6ed;
        case m2c::kloc_2f701: 	goto loc_2f701;
        case m2c::kloc_2f710: 	goto loc_2f710;
        case m2c::kloc_2f71f: 	goto loc_2f71f;
        case m2c::kloc_2f725: 	goto loc_2f725;
        case m2c::kloc_2f73d: 	goto loc_2f73d;
        case m2c::ksub_2f60c: 	goto sub_2f60c;
        case m2c::ksub_2f67f: 	goto sub_2f67f;
        case m2c::ksub_2f6c1: 	goto sub_2f6c1;
        case m2c::ksub_2f6f6: 	goto sub_2f6f6;
        case m2c::ksub_2f713: 	goto sub_2f713;
        case m2c::ksub_2f728: 	goto sub_2f728;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

