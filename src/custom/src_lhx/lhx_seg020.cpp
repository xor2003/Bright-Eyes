/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group18(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group18:
    _begin:
nullsub_13:
	// 74370 
cs=0x229a;eip=0x000003; 	R(RETF(0));	// 74371 retf ;~ 229A:0003
sub_30f84:
	// 74379 
#undef var_4
#define var_4 -4
	// 74381 var_4           = byte ptr -4 ;~ 229A:0004
#undef var_2
#define var_2 -2
	// 74382 var_2           = byte ptr -2 ;~ 229A:0004
#undef arg_0
#define arg_0 4
	// 74383 arg_0           = byte ptr  4 ;~ 229A:0004
cs=0x229a;eip=0x000004; 	X(PUSH(bp));	// 74385 push    bp ;~ 229A:0004
cs=0x229a;eip=0x000005; 	T(MOV(bp, sp));	// 74386 mov     bp, sp ;~ 229A:0005
cs=0x229a;eip=0x000007; 	T(SUB(sp, 4));	// 74387 sub     sp, 4 ;~ 229A:0007
cs=0x229a;eip=0x00000a; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 74388 mov     al, [bp+arg_0] ;~ 229A:000A
cs=0x229a;eip=0x00000d; 	T(CBW);	// 74389 cbw ;~ 229A:000D
cs=0x229a;eip=0x00000e; 	T(MOV(bx, ax));	// 74390 mov     bx, ax ;~ 229A:000E
cs=0x229a;eip=0x000010; 	T(TEST(*(raddr(ds,bx-0x3D7B)), 1));	// 74391 test    byte ptr [bx-3D7Bh], 1 ;~ 229A:0010
cs=0x229a;eip=0x000015; 	R(JZ(loc_30f9b));	// 74392 jz      short loc_30F9B ;~ 229A:0015
cs=0x229a;eip=0x000017; 	T(ADD(al, 0x20));	// 74393 add     al, 20h ; ' ' ;~ 229A:0017
cs=0x229a;eip=0x000019; 	R(JMP(loc_30f9e));	// 74394 jmp     short loc_30F9E ;~ 229A:0019
loc_30f9b:
	// 9187 
cs=0x229a;eip=0x00001b; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 74398 mov     al, [bp+arg_0] ;~ 229A:001B
loc_30f9e:
	// 9188 
cs=0x229a;eip=0x00001e; 	T(SUB(al, 0x61));	// 74401 sub     al, 61h ; 'a' ;~ 229A:001E
cs=0x229a;eip=0x000020; 	X(MOV(*(raddr(ss,bp+arg_0)), al));	// 74402 mov     [bp+arg_0], al ;~ 229A:0020
cs=0x229a;eip=0x000023; 	T(MOV(bx, 0x40));	// 74403 mov     bx, 40h ; '@' ;~ 229A:0023
cs=0x229a;eip=0x000026; 	T(MOV(es, bx));	// 74404 mov     es, bx ;~ 229A:0026
cs=0x229a;eip=0x000028; 	T(MOV(bx, 0x10));	// 74406 mov     bx, 10h ;~ 229A:0028
cs=0x229a;eip=0x00002b; 	T(MOV(al, *(raddr(es,bx))));	// 74407 mov     al, es:[bx] ;~ 229A:002B
cs=0x229a;eip=0x00002e; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 74408 mov     [bp+var_4], al ;~ 229A:002E
cs=0x229a;eip=0x000031; 	T(CMP(*(raddr(ss,bp+arg_0)), 1));	// 74409 cmp     [bp+arg_0], 1 ;~ 229A:0031
cs=0x229a;eip=0x000035; 	R(JG(loc_30fed));	// 74410 jg      short loc_30FED ;~ 229A:0035
cs=0x229a;eip=0x000037; 	T(TEST(*(raddr(ss,bp+var_4)), 1));	// 74411 test    [bp+var_4], 1 ;~ 229A:0037
cs=0x229a;eip=0x00003b; 	R(JZ(loc_30fed));	// 74412 jz      short loc_30FED ;~ 229A:003B
cs=0x229a;eip=0x00003d; 	T(TEST(*(raddr(ss,bp+var_4)), 0x0C0));	// 74413 test    [bp+var_4], 0C0h ;~ 229A:003D
cs=0x229a;eip=0x000041; 	R(JNZ(loc_30fed));	// 74414 jnz     short loc_30FED ;~ 229A:0041
cs=0x229a;eip=0x000043; 	T(MOV(bx, 0x50));	// 74415 mov     bx, 50h ; 'P' ;~ 229A:0043
cs=0x229a;eip=0x000046; 	T(MOV(es, bx));	// 74416 mov     es, bx ;~ 229A:0046
cs=0x229a;eip=0x000048; 	T(MOV(bx, 4));	// 74418 mov     bx, 4 ;~ 229A:0048
cs=0x229a;eip=0x00004b; 	T(MOV(al, *(raddr(es,bx))));	// 74419 mov     al, es:[bx] ;~ 229A:004B
cs=0x229a;eip=0x00004e; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 74420 mov     [bp+var_2], al ;~ 229A:004E
cs=0x229a;eip=0x000051; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 74421 cmp     [bp+arg_0], 0 ;~ 229A:0051
cs=0x229a;eip=0x000055; 	R(JNZ(loc_30fdb));	// 74422 jnz     short loc_30FDB ;~ 229A:0055
cs=0x229a;eip=0x000057; 	T(CMP(al, 1));	// 74423 cmp     al, 1 ;~ 229A:0057
cs=0x229a;eip=0x000059; 	R(JZ(loc_30fe7));	// 74424 jz      short loc_30FE7 ;~ 229A:0059
loc_30fdb:
	// 9189 
cs=0x229a;eip=0x00005b; 	T(CMP(*(raddr(ss,bp+arg_0)), 1));	// 74427 cmp     [bp+arg_0], 1 ;~ 229A:005B
cs=0x229a;eip=0x00005f; 	R(JNZ(loc_30fed));	// 74428 jnz     short loc_30FED ;~ 229A:005F
cs=0x229a;eip=0x000061; 	T(CMP(*(raddr(ss,bp+var_2)), 0));	// 74429 cmp     [bp+var_2], 0 ;~ 229A:0061
cs=0x229a;eip=0x000065; 	R(JNZ(loc_30fed));	// 74430 jnz     short loc_30FED ;~ 229A:0065
loc_30fe7:
	// 9190 
cs=0x229a;eip=0x000067; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 74433 mov     al, [bp+var_2] ;~ 229A:0067
cs=0x229a;eip=0x00006a; 	X(MOV(*(raddr(ss,bp+arg_0)), al));	// 74434 mov     [bp+arg_0], al ;~ 229A:006A
loc_30fed:
	// 9191 
cs=0x229a;eip=0x00006d; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 74438 mov     al, [bp+arg_0] ;~ 229A:006D
cs=0x229a;eip=0x000070; 	T(CBW);	// 74439 cbw ;~ 229A:0070
cs=0x229a;eip=0x000071; 	T(ADD(ax, 0x61));	// 74440 add     ax, 61h ; 'a' ;~ 229A:0071
cs=0x229a;eip=0x000074; 	T(MOV(sp, bp));	// 74441 mov     sp, bp ;~ 229A:0074
cs=0x229a;eip=0x000076; 	X(POP(bp));	// 74442 pop     bp ;~ 229A:0076
cs=0x229a;eip=0x000077; 	R(RETN(2));	// 74443 retn    2 ;~ 229A:0077
sub_30ffa:
	// 74451 
#undef arg_0
#define arg_0 6
	// 74454 arg_0           = word ptr  6 ;~ 229A:007A
#undef arg_2
#define arg_2 8
	// 74455 arg_2           = word ptr  8 ;~ 229A:007A
#undef arg_4
#define arg_4 0x0A
	// 74456 arg_4           = word ptr  0Ah ;~ 229A:007A
#undef arg_6
#define arg_6 0x0C
	// 74457 arg_6           = word ptr  0Ch ;~ 229A:007A
cs=0x229a;eip=0x00007a; 	X(PUSH(bp));	// 74459 push    bp ;~ 229A:007A
cs=0x229a;eip=0x00007b; 	T(MOV(bp, sp));	// 74460 mov     bp, sp ;~ 229A:007B
cs=0x229a;eip=0x00007d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 74461 push    [bp+arg_0] ;~ 229A:007D
cs=0x229a;eip=0x000080; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 74462 push    [bp+arg_0] ;~ 229A:0080
cs=0x229a;eip=0x000083; 	R(CALLF(sub_2dcb2,0));	// 74463 call    sub_2DCB2 ;~ 229A:0083
cs=0x229a;eip=0x000088; 	T(SAR(ax, 1));	// 74464 sar     ax, 1 ;~ 229A:0088
cs=0x229a;eip=0x00008a; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 74465 mov     cx, [bp+arg_2] ;~ 229A:008A
cs=0x229a;eip=0x00008d; 	T(ADD(cx, *(dw*)(raddr(ss,bp+arg_4))));	// 74466 add     cx, [bp+arg_4] ;~ 229A:008D
cs=0x229a;eip=0x000090; 	T(SAR(cx, 1));	// 74467 sar     cx, 1 ;~ 229A:0090
cs=0x229a;eip=0x000092; 	T(SUB(cx, ax));	// 74468 sub     cx, ax ;~ 229A:0092
cs=0x229a;eip=0x000094; 	X(PUSH(cx));	// 74469 push    cx ;~ 229A:0094
cs=0x229a;eip=0x000095; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 74470 push    [bp+arg_6] ;~ 229A:0095
cs=0x229a;eip=0x000098; 	R(CALLF(sub_2dce4,0));	// 74471 call    sub_2DCE4 ;~ 229A:0098
cs=0x229a;eip=0x00009d; 	X(POP(bp));	// 74472 pop     bp ;~ 229A:009D
cs=0x229a;eip=0x00009e; 	R(RETF(0));	// 74473 retf ;~ 229A:009E
sub_3101f:
	// 74480 
cs=0x229a;eip=0x00009f; 	R(CALLF(sub_3d1e6,0));	// 74482 call    sub_3D1E6 ;~ 229A:009F
cs=0x229a;eip=0x0000a4; 	X(MOV(unk_49ae0, 1));	// 74483 mov     byte ptr unk_49AE0, 1 ;~ 229A:00A4
cs=0x229a;eip=0x0000a9; 	R(RETF(0));	// 74484 retf ;~ 229A:00A9
sub_3102a:
	// 74491 
cs=0x229a;eip=0x0000aa; 	T(CMP(unk_49ae0, 0));	// 74493 cmp     byte ptr unk_49AE0, 0 ;~ 229A:00AA
cs=0x229a;eip=0x0000af; 	R(JZ(locret_3103b));	// 74494 jz      short locret_3103B ;~ 229A:00AF
cs=0x229a;eip=0x0000b1; 	X(MOV(unk_49ae0, 0));	// 74495 mov     byte ptr unk_49AE0, 0 ;~ 229A:00B1
cs=0x229a;eip=0x0000b6; 	R(CALLF(sub_3d237,0));	// 74496 call    sub_3D237 ;~ 229A:00B6
locret_3103b:
	// 9192 
cs=0x229a;eip=0x0000bb; 	R(RETF(0));	// 74499 retf ;~ 229A:00BB
sub_3103c:
	// 74507 
#undef var_34
#define var_34 -0x34
	// 74510 var_34          = byte ptr -34h ;~ 229A:00BC
#undef var_1e
#define var_1e -0x1E
	// 74511 var_1E          = byte ptr -1Eh ;~ 229A:00BC
#undef var_18
#define var_18 -0x18
	// 74512 var_18          = byte ptr -18h ;~ 229A:00BC
#undef var_6
#define var_6 -6
	// 74513 var_6           = word ptr -6 ;~ 229A:00BC
#undef var_4
#define var_4 -4
	// 74514 var_4           = word ptr -4 ;~ 229A:00BC
#undef var_2
#define var_2 -2
	// 74515 var_2           = word ptr -2 ;~ 229A:00BC
#undef arg_0
#define arg_0 6
	// 74516 arg_0           = word ptr  6 ;~ 229A:00BC
#undef arg_2
#define arg_2 8
	// 74517 arg_2           = dword ptr  8 ;~ 229A:00BC
cs=0x229a;eip=0x0000bc; 	X(PUSH(bp));	// 74519 push    bp ;~ 229A:00BC
cs=0x229a;eip=0x0000bd; 	T(MOV(bp, sp));	// 74520 mov     bp, sp ;~ 229A:00BD
cs=0x229a;eip=0x0000bf; 	T(SUB(sp, 0x34));	// 74521 sub     sp, 34h ;~ 229A:00BF
cs=0x229a;eip=0x0000c2; 	X(PUSH(di));	// 74522 push    di ;~ 229A:00C2
cs=0x229a;eip=0x0000c3; 	X(PUSH(si));	// 74523 push    si ;~ 229A:00C3
cs=0x229a;eip=0x0000c4; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 74524 les     bx, dword ptr unk_47AD0 ;~ 229A:00C4
cs=0x229a;eip=0x0000c8; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 74526 push    word ptr es:[bx+8] ;~ 229A:00C8
cs=0x229a;eip=0x0000cc; 	X(PUSH(*(dw*)(raddr(es,bx+6))));	// 74527 push    word ptr es:[bx+6] ;~ 229A:00CC
cs=0x229a;eip=0x0000d0; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 74528 push    word ptr es:[bx+10h] ;~ 229A:00D0
cs=0x229a;eip=0x0000d4; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 74529 push    word ptr es:[bx+0Eh] ;~ 229A:00D4
cs=0x229a;eip=0x0000d8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 74530 les     bx, [bp+arg_2] ;~ 229A:00D8
cs=0x229a;eip=0x0000db; 	X(PUSH(*(dw*)(raddr(es,bx+2))));	// 74531 push    word ptr es:[bx+2] ;~ 229A:00DB
cs=0x229a;eip=0x0000df; 	X(PUSH(*(dw*)(raddr(es,bx))));	// 74532 push    word ptr es:[bx] ;~ 229A:00DF
cs=0x229a;eip=0x0000e2; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 74533 push    word ptr es:[bx+0Ah] ;~ 229A:00E2
cs=0x229a;eip=0x0000e6; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 74534 push    word ptr es:[bx+8] ;~ 229A:00E6
cs=0x229a;eip=0x0000ea; 	R(CALLF(sub_27e64,0));	// 74535 call    sub_27E64 ;~ 229A:00EA
cs=0x229a;eip=0x0000ef; 	T(MOV(si, ax));	// 74536 mov     si, ax ;~ 229A:00EF
cs=0x229a;eip=0x0000f1; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 74537 les     bx, dword ptr unk_47AD0 ;~ 229A:00F1
cs=0x229a;eip=0x0000f5; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x12))));	// 74538 sub     ax, es:[bx+12h] ;~ 229A:00F5
cs=0x229a;eip=0x0000f9; 	X(PUSH(ax));	// 74539 push    ax ;~ 229A:00F9
cs=0x229a;eip=0x0000fa; 	R(CALLF(sub_24cf8,0));	// 74540 call    sub_24CF8 ;~ 229A:00FA
cs=0x229a;eip=0x0000ff; 	T(MOV(si, ax));	// 74541 mov     si, ax ;~ 229A:00FF
cs=0x229a;eip=0x000101; 	T(CMP(si, 0x5A0));	// 74542 cmp     si, 5A0h ;~ 229A:0101
cs=0x229a;eip=0x000105; 	R(JL(loc_3108e));	// 74543 jl      short loc_3108E ;~ 229A:0105
cs=0x229a;eip=0x000107; 	T(MOV(ax, 0x0B40));	// 74544 mov     ax, 0B40h ;~ 229A:0107
cs=0x229a;eip=0x00010a; 	T(SUB(ax, si));	// 74545 sub     ax, si ;~ 229A:010A
cs=0x229a;eip=0x00010c; 	R(JMP(loc_31092));	// 74546 jmp     short loc_31092 ;~ 229A:010C
loc_3108e:
	// 9193 
cs=0x229a;eip=0x00010e; 	T(MOV(ax, si));	// 74550 mov     ax, si ;~ 229A:010E
cs=0x229a;eip=0x000110; 	T(NEG(ax));	// 74551 neg     ax ;~ 229A:0110
loc_31092:
	// 9194 
cs=0x229a;eip=0x000112; 	T(MOV(si, ax));	// 74554 mov     si, ax ;~ 229A:0112
cs=0x229a;eip=0x000114; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 74555 mov     ax, word ptr [bp+arg_2] ;~ 229A:0114
cs=0x229a;eip=0x000117; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 74556 mov     dx, word ptr [bp+arg_2+2] ;~ 229A:0117
cs=0x229a;eip=0x00011a; 	X(PUSH(si));	// 74557 push    si ;~ 229A:011A
cs=0x229a;eip=0x00011b; 	T(di = bp+var_18);	// 74558 lea     di, [bp+var_18] ;~ 229A:011B
cs=0x229a;eip=0x00011e; 	T(MOV(si, ax));	// 74559 mov     si, ax ;~ 229A:011E
cs=0x229a;eip=0x000120; 	X(PUSH(ss));	// 74560 push    ss ;~ 229A:0120
cs=0x229a;eip=0x000121; 	X(POP(es));	// 74561 pop     es ;~ 229A:0121
cs=0x229a;eip=0x000122; 	X(PUSH(ds));	// 74562 push    ds ;~ 229A:0122
cs=0x229a;eip=0x000123; 	T(MOV(ds, dx));	// 74563 mov     ds, dx ;~ 229A:0123
cs=0x229a;eip=0x000125; 	T(MOV(cx, 6));	// 74564 mov     cx, 6 ;~ 229A:0125
	// 74565 repne movsw ;~ 229A:0128
cs=0x229a;eip=0x000128; 	X(	REPNE MOVSW);	// 74565 repne movsw ;~ 229A:0128
cs=0x229a;eip=0x00012a; 	X(POP(ds));	// 74566 pop     ds ;~ 229A:012A
cs=0x229a;eip=0x00012b; 	X(POP(si));	// 74567 pop     si ;~ 229A:012B
cs=0x229a;eip=0x00012c; 	X(PUSH(*(dw*)((&unk_47ad2))));	// 74568 push    word ptr unk_47AD2 ;~ 229A:012C
cs=0x229a;eip=0x000130; 	X(PUSH(*(dw*)((&unk_47ad0))));	// 74569 push    word ptr unk_47AD0 ;~ 229A:0130
cs=0x229a;eip=0x000134; 	T(ax = bp+var_1e);	// 74570 lea     ax, [bp+var_1E] ;~ 229A:0134
cs=0x229a;eip=0x000137; 	X(PUSH(ss));	// 74571 push    ss ;~ 229A:0137
cs=0x229a;eip=0x000138; 	X(PUSH(ax));	// 74572 push    ax ;~ 229A:0138
cs=0x229a;eip=0x000139; 	R(CALLF(sub_19ba3,0));	// 74573 call    sub_19BA3 ;~ 229A:0139
cs=0x229a;eip=0x00013e; 	T(MOV(cl, 8));	// 74574 mov     cl, 8 ;~ 229A:013E
cs=0x229a;eip=0x000140; 	R(CALLF(sub_10240,0));	// 74575 call    sub_10240 ;~ 229A:0140
cs=0x229a;eip=0x000145; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 74576 mov     [bp+var_4], ax ;~ 229A:0145
cs=0x229a;eip=0x000148; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 74577 mov     [bp+var_2], dx ;~ 229A:0148
cs=0x229a;eip=0x00014b; 	T(OR(dx, dx));	// 74578 or      dx, dx ;~ 229A:014B
cs=0x229a;eip=0x00014d; 	R(JG(loc_310eb));	// 74579 jg      short loc_310EB ;~ 229A:014D
cs=0x229a;eip=0x00014f; 	R(JL(loc_310d6));	// 74580 jl      short loc_310D6 ;~ 229A:014F
cs=0x229a;eip=0x000151; 	T(CMP(ax, 0x14A0));	// 74581 cmp     ax, 14A0h ;~ 229A:0151
cs=0x229a;eip=0x000154; 	R(JNC(loc_310eb));	// 74582 jnb     short loc_310EB ;~ 229A:0154
loc_310d6:
	// 9195 
cs=0x229a;eip=0x000156; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 74585 push    [bp+var_4] ;~ 229A:0156
cs=0x229a;eip=0x000159; 	T(MOV(ax, 0x2131));	// 74586 mov     ax, 2131h ;~ 229A:0159
cs=0x229a;eip=0x00015c; 	X(PUSH(ax));	// 74587 push    ax ;~ 229A:015C
cs=0x229a;eip=0x00015d; 	T(ax = bp+var_34);	// 74588 lea     ax, [bp+var_34] ;~ 229A:015D
cs=0x229a;eip=0x000160; 	X(PUSH(ax));	// 74589 push    ax ;~ 229A:0160
cs=0x229a;eip=0x000161; 	R(CALLF(sub_2f1d9,0));	// 74590 call    sub_2F1D9 ;~ 229A:0161
cs=0x229a;eip=0x000166; 	T(ADD(sp, 6));	// 74591 add     sp, 6 ;~ 229A:0166
cs=0x229a;eip=0x000169; 	R(JMP(loc_31158));	// 74592 jmp     short loc_31158 ;~ 229A:0169
loc_310eb:
	// 9196 
cs=0x229a;eip=0x00016b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 74597 push    [bp+var_2] ;~ 229A:016B
cs=0x229a;eip=0x00016e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 74598 push    [bp+var_4] ;~ 229A:016E
cs=0x229a;eip=0x000171; 	T(MOV(ax, 0x210));	// 74599 mov     ax, 210h ;~ 229A:0171
cs=0x229a;eip=0x000174; 	X(PUSH(ax));	// 74600 push    ax ;~ 229A:0174
cs=0x229a;eip=0x000175; 	R(CALLF(sub_2efe2,0));	// 74601 call    sub_2EFE2 ;~ 229A:0175
cs=0x229a;eip=0x00017a; 	X(PUSH(ax));	// 74602 push    ax ;~ 229A:017A
cs=0x229a;eip=0x00017b; 	T(ax = bp+var_34);	// 74603 lea     ax, [bp+var_34] ;~ 229A:017B
cs=0x229a;eip=0x00017e; 	X(PUSH(ax));	// 74604 push    ax ;~ 229A:017E
cs=0x229a;eip=0x00017f; 	X(PUSH(cs));	// 74605 push    cs ;~ 229A:017F
cs=0x229a;eip=0x000180; 	R(CALL(sub_312c7,0));	// 74606 call    near ptr sub_312C7 ;~ 229A:0180
cs=0x229a;eip=0x000183; 	T(di = bp+var_34);	// 74607 lea     di, [bp+var_34] ;~ 229A:0183
cs=0x229a;eip=0x000186; 	T(MOV(ax, ss));	// 74608 mov     ax, ss ;~ 229A:0186
cs=0x229a;eip=0x000188; 	T(MOV(es, ax));	// 74609 mov     es, ax ;~ 229A:0188
cs=0x229a;eip=0x00018a; 	T(MOV(cx, 0x0FFFF));	// 74610 mov     cx, 0FFFFh ;~ 229A:018A
cs=0x229a;eip=0x00018d; 	T(XOR(ax, ax));	// 74611 xor     ax, ax ;~ 229A:018D
	// 74612 repne scasb ;~ 229A:018F
cs=0x229a;eip=0x00018f; 	T(	REPNE SCASB);	// 74612 repne scasb ;~ 229A:018F
cs=0x229a;eip=0x000191; 	T(NOT(cx));	// 74613 not     cx ;~ 229A:0191
cs=0x229a;eip=0x000193; 	T(DEC(cx));	// 74614 dec     cx ;~ 229A:0193
cs=0x229a;eip=0x000194; 	T(MOV(di, cx));	// 74615 mov     di, cx ;~ 229A:0194
cs=0x229a;eip=0x000196; 	T(ax = bp+di+var_34);	// 74616 lea     ax, [bp+di+var_34] ;~ 229A:0196
cs=0x229a;eip=0x000199; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 74617 mov     [bp+var_6], ax ;~ 229A:0199
cs=0x229a;eip=0x00019c; 	T(MOV(bx, ax));	// 74618 mov     bx, ax ;~ 229A:019C
cs=0x229a;eip=0x00019e; 	T(MOV(di, ax));	// 74619 mov     di, ax ;~ 229A:019E
cs=0x229a;eip=0x0001a0; 	T(MOV(al, *(raddr(ds,di-1))));	// 74620 mov     al, [di-1] ;~ 229A:01A0
cs=0x229a;eip=0x0001a3; 	X(MOV(*(raddr(ds,bx)), al));	// 74621 mov     [bx], al ;~ 229A:01A3
cs=0x229a;eip=0x0001a5; 	X(MOV(*(raddr(ds,bx-1)), 0x2E));	// 74622 mov     byte ptr [bx-1], 2Eh ; '.' ;~ 229A:01A5
cs=0x229a;eip=0x0001a9; 	X(MOV(*(raddr(ds,bx+1)), 0));	// 74623 mov     byte ptr [bx+1], 0 ;~ 229A:01A9
cs=0x229a;eip=0x0001ad; 	X(PUSH(si));	// 74624 push    si ;~ 229A:01AD
cs=0x229a;eip=0x0001ae; 	T(MOV(di, 0x2137));	// 74625 mov     di, 2137h ;~ 229A:01AE
cs=0x229a;eip=0x0001b1; 	T(si = bp+var_34);	// 74626 lea     si, [bp+var_34] ;~ 229A:01B1
cs=0x229a;eip=0x0001b4; 	T(MOV(ax, ds));	// 74627 mov     ax, ds ;~ 229A:01B4
cs=0x229a;eip=0x0001b6; 	T(MOV(es, ax));	// 74628 mov     es, ax ;~ 229A:01B6
cs=0x229a;eip=0x0001b8; 	T(MOV(cx, 0x0FFFF));	// 74630 mov     cx, 0FFFFh ;~ 229A:01B8
cs=0x229a;eip=0x0001bb; 	T(XOR(ax, ax));	// 74631 xor     ax, ax ;~ 229A:01BB
	// 74632 repne scasb ;~ 229A:01BD
cs=0x229a;eip=0x0001bd; 	T(	REPNE SCASB);	// 74632 repne scasb ;~ 229A:01BD
cs=0x229a;eip=0x0001bf; 	T(NOT(cx));	// 74633 not     cx ;~ 229A:01BF
cs=0x229a;eip=0x0001c1; 	T(SUB(di, cx));	// 74634 sub     di, cx ;~ 229A:01C1
cs=0x229a;eip=0x0001c3; 	T(MOV(bx, cx));	// 74635 mov     bx, cx ;~ 229A:01C3
cs=0x229a;eip=0x0001c5; 	T(XCHG(di, si));	// 74636 xchg    di, si ;~ 229A:01C5
cs=0x229a;eip=0x0001c7; 	T(MOV(cx, 0x0FFFF));	// 74637 mov     cx, 0FFFFh ;~ 229A:01C7
	// 74638 repne scasb ;~ 229A:01CA
cs=0x229a;eip=0x0001ca; 	T(	REPNE SCASB);	// 74638 repne scasb ;~ 229A:01CA
cs=0x229a;eip=0x0001cc; 	T(DEC(di));	// 74639 dec     di ;~ 229A:01CC
cs=0x229a;eip=0x0001cd; 	T(MOV(cx, bx));	// 74640 mov     cx, bx ;~ 229A:01CD
cs=0x229a;eip=0x0001cf; 	T(SHR(cx, 1));	// 74641 shr     cx, 1 ;~ 229A:01CF
	// 74642 repne movsw ;~ 229A:01D1
cs=0x229a;eip=0x0001d1; 	X(	REPNE MOVSW);	// 74642 repne movsw ;~ 229A:01D1
cs=0x229a;eip=0x0001d3; 	T(ADC(cx, cx));	// 74643 adc     cx, cx ;~ 229A:01D3
	// 74644 repne movsb ;~ 229A:01D5
cs=0x229a;eip=0x0001d5; 	X(	REPNE MOVSB);	// 74644 repne movsb ;~ 229A:01D5
cs=0x229a;eip=0x0001d7; 	X(POP(si));	// 74645 pop     si ;~ 229A:01D7
loc_31158:
	// 9197 
cs=0x229a;eip=0x0001d8; 	T(ax = si+4);	// 74648 lea     ax, [si+4] ;~ 229A:01D8
cs=0x229a;eip=0x0001db; 	T(MOV(cl, 3));	// 74649 mov     cl, 3 ;~ 229A:01DB
cs=0x229a;eip=0x0001dd; 	T(SAR(ax, cl));	// 74650 sar     ax, cl ;~ 229A:01DD
cs=0x229a;eip=0x0001df; 	X(PUSH(ax));	// 74651 push    ax ;~ 229A:01DF
cs=0x229a;eip=0x0001e0; 	T(ax = bp+var_34);	// 74652 lea     ax, [bp+var_34] ;~ 229A:01E0
cs=0x229a;eip=0x0001e3; 	X(PUSH(ax));	// 74653 push    ax ;~ 229A:01E3
cs=0x229a;eip=0x0001e4; 	T(MOV(ax, 0x213B));	// 74654 mov     ax, 213Bh ;~ 229A:01E4
cs=0x229a;eip=0x0001e7; 	X(PUSH(ax));	// 74655 push    ax ;~ 229A:01E7
cs=0x229a;eip=0x0001e8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 74656 push    [bp+arg_0] ;~ 229A:01E8
cs=0x229a;eip=0x0001eb; 	R(CALLF(sub_2f1d9,0));	// 74657 call    sub_2F1D9 ;~ 229A:01EB
cs=0x229a;eip=0x0001f0; 	T(ADD(sp, 8));	// 74658 add     sp, 8 ;~ 229A:01F0
cs=0x229a;eip=0x0001f3; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 74659 cmp     [bp+var_2], 0 ;~ 229A:01F3
cs=0x229a;eip=0x0001f7; 	R(JZ(loc_3117e));	// 74660 jz      short loc_3117E ;~ 229A:01F7
cs=0x229a;eip=0x0001f9; 	T(MOV(ax, 0x0FFFF));	// 74661 mov     ax, 0FFFFh ;~ 229A:01F9
cs=0x229a;eip=0x0001fc; 	R(JMP(loc_31181));	// 74662 jmp     short loc_31181 ;~ 229A:01FC
loc_3117e:
	// 9198 
cs=0x229a;eip=0x0001fe; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 74666 mov     ax, [bp+var_4] ;~ 229A:01FE
loc_31181:
	// 9199 
cs=0x229a;eip=0x000201; 	X(POP(si));	// 74669 pop     si ;~ 229A:0201
cs=0x229a;eip=0x000202; 	X(POP(di));	// 74670 pop     di ;~ 229A:0202
cs=0x229a;eip=0x000203; 	T(MOV(sp, bp));	// 74671 mov     sp, bp ;~ 229A:0203
cs=0x229a;eip=0x000205; 	X(POP(bp));	// 74672 pop     bp ;~ 229A:0205
cs=0x229a;eip=0x000206; 	R(RETF(0));	// 74673 retf ;~ 229A:0206
seg020_proc:
	// 74677 
cs=0x229a;eip=0x000207; 	X(PUSH(bp));	// 74677 push    bp ;~ 229A:0207
cs=0x229a;eip=0x000208; 	T(MOV(bp, sp));	// 74678 mov     bp, sp ;~ 229A:0208
cs=0x229a;eip=0x00020a; 	T(SUB(sp, 0x0C8));	// 74679 sub     sp, 0C8h ;~ 229A:020A
cs=0x229a;eip=0x00020e; 	X(PUSH(*(dw*)(raddr(ss,bp+0x1E))));	// 74680 push    word ptr [bp+1Eh] ;~ 229A:020E
cs=0x229a;eip=0x000211; 	X(PUSH(*(dw*)(raddr(ss,bp+0x1C))));	// 74681 push    word ptr [bp+1Ch] ;~ 229A:0211
cs=0x229a;eip=0x000214; 	X(PUSH(*(dw*)(raddr(ss,bp+0x1A))));	// 74682 push    word ptr [bp+1Ah] ;~ 229A:0214
cs=0x229a;eip=0x000217; 	X(PUSH(*(dw*)(raddr(ss,bp+0x18))));	// 74683 push    word ptr [bp+18h] ;~ 229A:0217
cs=0x229a;eip=0x00021a; 	X(PUSH(*(dw*)(raddr(ss,bp+0x16))));	// 74684 push    word ptr [bp+16h] ;~ 229A:021A
cs=0x229a;eip=0x00021d; 	X(PUSH(*(dw*)(raddr(ss,bp+0x14))));	// 74685 push    word ptr [bp+14h] ;~ 229A:021D
cs=0x229a;eip=0x000220; 	X(PUSH(*(dw*)(raddr(ss,bp+0x12))));	// 74686 push    word ptr [bp+12h] ;~ 229A:0220
cs=0x229a;eip=0x000223; 	X(PUSH(*(dw*)(raddr(ss,bp+0x10))));	// 74687 push    word ptr [bp+10h] ;~ 229A:0223
cs=0x229a;eip=0x000226; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0E))));	// 74688 push    word ptr [bp+0Eh] ;~ 229A:0226
cs=0x229a;eip=0x000229; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0C))));	// 74689 push    word ptr [bp+0Ch] ;~ 229A:0229
cs=0x229a;eip=0x00022c; 	X(PUSH(*(dw*)(raddr(ss,bp+0x0A))));	// 74690 push    word ptr [bp+0Ah] ;~ 229A:022C
cs=0x229a;eip=0x00022f; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 74691 push    word ptr [bp+8] ;~ 229A:022F
cs=0x229a;eip=0x000232; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 74692 push    word ptr [bp+6] ;~ 229A:0232
cs=0x229a;eip=0x000235; 	T(ax = bp-0x0C8);	// 74693 lea     ax, [bp-0C8h] ;~ 229A:0235
cs=0x229a;eip=0x000239; 	X(PUSH(ax));	// 74694 push    ax ;~ 229A:0239
cs=0x229a;eip=0x00023a; 	R(CALLF(sub_2f1d9,0));	// 74695 call    sub_2F1D9 ;~ 229A:023A
cs=0x229a;eip=0x00023f; 	T(ADD(sp, 0x1C));	// 74696 add     sp, 1Ch ;~ 229A:023F
cs=0x229a;eip=0x000242; 	T(ax = bp-0x0C8);	// 74697 lea     ax, [bp-0C8h] ;~ 229A:0242
cs=0x229a;eip=0x000246; 	X(PUSH(ax));	// 74698 push    ax ;~ 229A:0246
cs=0x229a;eip=0x000247; 	R(CALLF(sub_2f3f8,0));	// 74699 call    sub_2F3F8 ;~ 229A:0247
cs=0x229a;eip=0x00024c; 	T(MOV(sp, bp));	// 74700 mov     sp, bp ;~ 229A:024C
cs=0x229a;eip=0x00024e; 	X(POP(bp));	// 74701 pop     bp ;~ 229A:024E
cs=0x229a;eip=0x00024f; 	R(RETF(0));	// 74702 retf ;~ 229A:024F
cs=0x229a;eip=0x000643; 	T(MOV(sp, bp));	// 75313 mov     sp, bp ;~ 229A:0643
cs=0x229a;eip=0x000645; 	X(POP(bp));	// 75314 pop     bp ;~ 229A:0645
cs=0x229a;eip=0x000646; 	R(RETF(2));	// 75315 retf    2 ;~ 229A:0646
cs=0x229a;eip=0x00065d; 	R(RETF(0));	// 75333 retf ;~ 229A:065D
cs=0x229a;eip=0x00068b; 	T(MOV(sp, bp));	// 75365 mov     sp, bp ;~ 229A:068B
cs=0x229a;eip=0x00068d; 	X(POP(bp));	// 75366 pop     bp ;~ 229A:068D
cs=0x229a;eip=0x00068e; 	R(RETN(2));	// 75367 retn    2 ;~ 229A:068E
ret_229a_691:
	// 9219 
cs=0x229a;eip=0x000691; 	X(PUSH(bp));	// 75369 push    bp ;~ 229A:0691
cs=0x229a;eip=0x000692; 	T(MOV(bp, sp));	// 75370 mov     bp, sp ;~ 229A:0692
cs=0x229a;eip=0x000694; 	T(SUB(sp, 4));	// 75371 sub     sp, 4 ;~ 229A:0694
cs=0x229a;eip=0x000697; 	X(PUSH(di));	// 75372 push    di ;~ 229A:0697
cs=0x229a;eip=0x000698; 	X(PUSH(si));	// 75373 push    si ;~ 229A:0698
cs=0x229a;eip=0x000699; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 75374 mov     di, [bp+6] ;~ 229A:0699
cs=0x229a;eip=0x00069c; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 75375 mov     si, [bp+8] ;~ 229A:069C
cs=0x229a;eip=0x00069f; 	R(JMP(loc_31625));	// 75376 jmp     short loc_31625 ;~ 229A:069F
loc_31621:
	// 9220 
cs=0x229a;eip=0x0006a1; 	X(PUSH(si));	// 75380 push    si ;~ 229A:06A1
cs=0x229a;eip=0x0006a2; 	R(CALL(sub_315de,0));	// 75381 call    sub_315DE ;~ 229A:06A2
loc_31625:
	// 9221 
cs=0x229a;eip=0x0006a5; 	X(PUSH(si));	// 75385 push    si ;~ 229A:06A5
cs=0x229a;eip=0x0006a6; 	X(PUSH(di));	// 75386 push    di ;~ 229A:06A6
cs=0x229a;eip=0x0006a7; 	R(CALLF(sub_30a14,0));	// 75387 call    sub_30A14 ;~ 229A:06A7
cs=0x229a;eip=0x0006ac; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 75388 mov     [bp-4], ax ;~ 229A:06AC
cs=0x229a;eip=0x0006af; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 75389 mov     [bp-2], dx ;~ 229A:06AF
cs=0x229a;eip=0x0006b2; 	T(MOV(ax, dx));	// 75390 mov     ax, dx ;~ 229A:06B2
cs=0x229a;eip=0x0006b4; 	T(OR(ax, ax));	// 75391 or      ax, ax ;~ 229A:06B4
cs=0x229a;eip=0x0006b6; 	R(JZ(loc_31621));	// 75392 jz      short loc_31621 ;~ 229A:06B6
cs=0x229a;eip=0x0006b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 75393 mov     ax, [bp-4] ;~ 229A:06B8
cs=0x229a;eip=0x0006bb; 	X(POP(si));	// 75394 pop     si ;~ 229A:06BB
cs=0x229a;eip=0x0006bc; 	X(POP(di));	// 75395 pop     di ;~ 229A:06BC
cs=0x229a;eip=0x0006bd; 	T(MOV(sp, bp));	// 75396 mov     sp, bp ;~ 229A:06BD
cs=0x229a;eip=0x0006bf; 	X(POP(bp));	// 75397 pop     bp ;~ 229A:06BF
cs=0x229a;eip=0x0006c0; 	R(RETF(4));	// 75398 retf    4 ;~ 229A:06C0
cs=0x229a;eip=0x000844; 	X(PUSH(bp));	// 75671 push    bp ;~ 229A:0844
cs=0x229a;eip=0x000845; 	T(MOV(bp, sp));	// 75672 mov     bp, sp ;~ 229A:0845
cs=0x229a;eip=0x000847; 	T(SUB(sp, 2));	// 75673 sub     sp, 2 ;~ 229A:0847
cs=0x229a;eip=0x00084a; 	X(PUSH(si));	// 75674 push    si ;~ 229A:084A
cs=0x229a;eip=0x00084b; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 75675 les     bx, [bp+6] ;~ 229A:084B
cs=0x229a;eip=0x00084e; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 75677 mov     si, es:[bx] ;~ 229A:084E
cs=0x229a;eip=0x000851; 	T(CMP(si, 0x6CB6));	// 75678 cmp     si, 6CB6h ;~ 229A:0851
cs=0x229a;eip=0x000855; 	R(JZ(loc_3180d));	// 75679 jz      short loc_3180D ;~ 229A:0855
cs=0x229a;eip=0x000857; 	T(CMP(si, 0x6D3C));	// 75680 cmp     si, 6D3Ch ;~ 229A:0857
cs=0x229a;eip=0x00085b; 	R(JZ(loc_3180d));	// 75681 jz      short loc_3180D ;~ 229A:085B
cs=0x229a;eip=0x00085d; 	T(CMP(si, 0x6DC2));	// 75682 cmp     si, 6DC2h ;~ 229A:085D
cs=0x229a;eip=0x000861; 	R(JZ(loc_3180d));	// 75683 jz      short loc_3180D ;~ 229A:0861
cs=0x229a;eip=0x000863; 	T(CMP(si, 0x0BDD0));	// 75684 cmp     si, 0BDD0h ;~ 229A:0863
cs=0x229a;eip=0x000867; 	R(JZ(loc_3180d));	// 75685 jz      short loc_3180D ;~ 229A:0867
cs=0x229a;eip=0x000869; 	T(CMP(si, 0x0BE40));	// 75686 cmp     si, 0BE40h ;~ 229A:0869
cs=0x229a;eip=0x00086d; 	R(JZ(loc_3180d));	// 75687 jz      short loc_3180D ;~ 229A:086D
cs=0x229a;eip=0x00086f; 	T(CMP(si, 0x0BEB0));	// 75688 cmp     si, 0BEB0h ;~ 229A:086F
cs=0x229a;eip=0x000873; 	R(JZ(loc_3180d));	// 75689 jz      short loc_3180D ;~ 229A:0873
cs=0x229a;eip=0x000875; 	T(CMP(si, 0x45AC));	// 75690 cmp     si, 45ACh ;~ 229A:0875
cs=0x229a;eip=0x000879; 	R(JZ(loc_3180d));	// 75691 jz      short loc_3180D ;~ 229A:0879
cs=0x229a;eip=0x00087b; 	T(CMP(si, 0x0AF70));	// 75692 cmp     si, 0AF70h ;~ 229A:087B
cs=0x229a;eip=0x00087f; 	R(JZ(loc_3180d));	// 75693 jz      short loc_3180D ;~ 229A:087F
cs=0x229a;eip=0x000881; 	T(CMP(si, 0x0AE48));	// 75694 cmp     si, 0AE48h ;~ 229A:0881
cs=0x229a;eip=0x000885; 	R(JZ(loc_3180d));	// 75695 jz      short loc_3180D ;~ 229A:0885
cs=0x229a;eip=0x000887; 	T(CMP(si, 0x0AE92));	// 75696 cmp     si, 0AE92h ;~ 229A:0887
cs=0x229a;eip=0x00088b; 	R(JNZ(loc_31823));	// 75697 jnz     short loc_31823 ;~ 229A:088B
loc_3180d:
	// 9231 
cs=0x229a;eip=0x00088d; 	T(CMP(unk_57041, 0));	// 75701 cmp     byte ptr unk_57041, 0 ;~ 229A:088D
cs=0x229a;eip=0x000892; 	R(JNZ(loc_3181b));	// 75702 jnz     short loc_3181B ;~ 229A:0892
cs=0x229a;eip=0x000894; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 75703 and     byte ptr es:[bx+2], 0FEh ;~ 229A:0894
cs=0x229a;eip=0x000899; 	R(JMP(loc_31823));	// 75704 jmp     short loc_31823 ;~ 229A:0899
loc_3181b:
	// 9232 
cs=0x229a;eip=0x00089b; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 75708 les     bx, [bp+6] ;~ 229A:089B
cs=0x229a;eip=0x00089e; 	X(OR(*(raddr(es,bx+2)), 1));	// 75709 or      byte ptr es:[bx+2], 1 ;~ 229A:089E
loc_31823:
	// 9233 
cs=0x229a;eip=0x0008a3; 	X(POP(si));	// 75713 pop     si ;~ 229A:08A3
cs=0x229a;eip=0x0008a4; 	T(MOV(sp, bp));	// 75714 mov     sp, bp ;~ 229A:08A4
cs=0x229a;eip=0x0008a6; 	X(POP(bp));	// 75715 pop     bp ;~ 229A:08A6
cs=0x229a;eip=0x0008a7; 	R(RETF(0));	// 75716 retf ;~ 229A:08A7
cs=0x229a;eip=0x000935; 	R(RETF(0));	// 75818 retf ;~ 229A:0935
sub_311d0:
	// 74708 
#undef arg_0
#define arg_0 6
	// 74711 arg_0           = byte ptr  6 ;~ 229A:0250
#undef arg_2
#define arg_2 8
	// 74712 arg_2           = word ptr  8 ;~ 229A:0250
cs=0x229a;eip=0x000250; 	X(PUSH(bp));	// 74714 push    bp ;~ 229A:0250
cs=0x229a;eip=0x000251; 	T(MOV(bp, sp));	// 74715 mov     bp, sp ;~ 229A:0251
cs=0x229a;eip=0x000253; 	T(SUB(sp, 2));	// 74716 sub     sp, 2 ;~ 229A:0253
cs=0x229a;eip=0x000256; 	X(PUSH(di));	// 74717 push    di ;~ 229A:0256
cs=0x229a;eip=0x000257; 	X(PUSH(si));	// 74718 push    si ;~ 229A:0257
cs=0x229a;eip=0x000258; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 74719 mov     si, [bp+arg_2] ;~ 229A:0258
cs=0x229a;eip=0x00025b; 	T(OR(si, si));	// 74720 or      si, si ;~ 229A:025B
cs=0x229a;eip=0x00025d; 	R(JNZ(loc_311e4));	// 74721 jnz     short loc_311E4 ;~ 229A:025D
cs=0x229a;eip=0x00025f; 	T(MOV(ax, 0x21DE));	// 74722 mov     ax, 21DEh ;~ 229A:025F
cs=0x229a;eip=0x000262; 	R(JMP(loc_31211));	// 74723 jmp     short loc_31211 ;~ 229A:0262
loc_311e4:
	// 9200 
cs=0x229a;eip=0x000264; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 74727 cmp     [bp+arg_0], 0 ;~ 229A:0264
cs=0x229a;eip=0x000268; 	R(JNZ(loc_31200));	// 74728 jnz     short loc_31200 ;~ 229A:0268
cs=0x229a;eip=0x00026a; 	T(MOV(di, 0x21EA));	// 74729 mov     di, 21EAh ;~ 229A:026A
cs=0x229a;eip=0x00026d; 	R(JMP(loc_311f2));	// 74730 jmp     short loc_311F2 ;~ 229A:026D
loc_311ef:
	// 9201 
cs=0x229a;eip=0x00026f; 	T(ADD(di, 4));	// 74734 add     di, 4 ;~ 229A:026F
loc_311f2:
	// 9202 
cs=0x229a;eip=0x000272; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 74737 cmp     word ptr [di], 0 ;~ 229A:0272
cs=0x229a;eip=0x000275; 	R(JZ(loc_31200));	// 74738 jz      short loc_31200 ;~ 229A:0275
cs=0x229a;eip=0x000277; 	T(CMP(*(dw*)(raddr(ds,di)), si));	// 74739 cmp     [di], si ;~ 229A:0277
cs=0x229a;eip=0x000279; 	R(JNZ(loc_311ef));	// 74740 jnz     short loc_311EF ;~ 229A:0279
loc_311fb:
	// 9203 
cs=0x229a;eip=0x00027b; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 74743 mov     ax, [di+2] ;~ 229A:027B
cs=0x229a;eip=0x00027e; 	R(JMP(loc_31211));	// 74744 jmp     short loc_31211 ;~ 229A:027E
loc_31200:
	// 9204 
cs=0x229a;eip=0x000280; 	T(MOV(di, 0x21FE));	// 74749 mov     di, 21FEh ;~ 229A:0280
cs=0x229a;eip=0x000283; 	R(JMP(loc_3120c));	// 74750 jmp     short loc_3120C ;~ 229A:0283
loc_31205:
	// 9205 
cs=0x229a;eip=0x000285; 	T(CMP(*(dw*)(raddr(ds,di)), si));	// 74754 cmp     [di], si ;~ 229A:0285
cs=0x229a;eip=0x000287; 	R(JZ(loc_311fb));	// 74755 jz      short loc_311FB ;~ 229A:0287
cs=0x229a;eip=0x000289; 	T(ADD(di, 4));	// 74756 add     di, 4 ;~ 229A:0289
loc_3120c:
	// 9206 
cs=0x229a;eip=0x00028c; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 74759 cmp     word ptr [di], 0 ;~ 229A:028C
cs=0x229a;eip=0x00028f; 	R(JNZ(loc_31205));	// 74760 jnz     short loc_31205 ;~ 229A:028F
loc_31211:
	// 9207 
cs=0x229a;eip=0x000291; 	X(POP(si));	// 74764 pop     si ;~ 229A:0291
cs=0x229a;eip=0x000292; 	X(POP(di));	// 74765 pop     di ;~ 229A:0292
cs=0x229a;eip=0x000293; 	T(MOV(sp, bp));	// 74766 mov     sp, bp ;~ 229A:0293
cs=0x229a;eip=0x000295; 	X(POP(bp));	// 74767 pop     bp ;~ 229A:0295
cs=0x229a;eip=0x000296; 	R(RETF(4));	// 74768 retf    4 ;~ 229A:0296
sub_31219:
	// 74775 
cs=0x229a;eip=0x000299; 	X(PUSH(di));	// 74776 push    di ;~ 229A:0299
cs=0x229a;eip=0x00029a; 	X(MOV(*(dw*)((&unk_5520b)), 0));	// 74777 mov     word ptr unk_5520B, 0 ;~ 229A:029A
cs=0x229a;eip=0x0002a0; 	T(MOV(ax, *(dw*)((&unk_5705a))));	// 74778 mov     ax, word ptr unk_5705A ;~ 229A:02A0
cs=0x229a;eip=0x0002a3; 	T(MOV(dx, *(dw*)((&unk_5705c))));	// 74779 mov     dx, word ptr unk_5705C ;~ 229A:02A3
cs=0x229a;eip=0x0002a7; 	X(MOV(*(dw*)((&unk_5430c)), ax));	// 74780 mov     word ptr unk_5430C, ax ;~ 229A:02A7
cs=0x229a;eip=0x0002aa; 	X(MOV(*(dw*)((&unk_5430e)), dx));	// 74781 mov     word ptr unk_5430E, dx ;~ 229A:02AA
cs=0x229a;eip=0x0002ae; 	T(MOV(cx, 0x20));	// 74782 mov     cx, 20h ; ' ' ;~ 229A:02AE
cs=0x229a;eip=0x0002b1; 	T(MOV(di, 0x0C93A));	// 74783 mov     di, 0C93Ah ;~ 229A:02B1
cs=0x229a;eip=0x0002b4; 	T(MOV(ax, ds));	// 74784 mov     ax, ds ;~ 229A:02B4
cs=0x229a;eip=0x0002b6; 	T(MOV(es, ax));	// 74785 mov     es, ax ;~ 229A:02B6
cs=0x229a;eip=0x0002b8; 	T(SUB(ax, ax));	// 74786 sub     ax, ax ;~ 229A:02B8
	// 74787 repne stosb ;~ 229A:02BA
cs=0x229a;eip=0x0002ba; 	X(	REPNE STOSB);	// 74787 repne stosb ;~ 229A:02BA
cs=0x229a;eip=0x0002bc; 	X(POP(di));	// 74788 pop     di ;~ 229A:02BC
cs=0x229a;eip=0x0002bd; 	R(RETF(0));	// 74789 retf ;~ 229A:02BD
sub_3123e:
	// 74797 
cs=0x229a;eip=0x0002be; 	X(PUSH(bp));	// 74798 push    bp ;~ 229A:02BE
cs=0x229a;eip=0x0002bf; 	T(MOV(bp, sp));	// 74799 mov     bp, sp ;~ 229A:02BF
cs=0x229a;eip=0x0002c1; 	T(SUB(sp, 2));	// 74800 sub     sp, 2 ;~ 229A:02C1
cs=0x229a;eip=0x0002c4; 	X(PUSH(si));	// 74801 push    si ;~ 229A:02C4
cs=0x229a;eip=0x0002c5; 	R(JMP(loc_31270));	// 74802 jmp     short loc_31270 ;~ 229A:02C5
loc_31247:
	// 9208 
cs=0x229a;eip=0x0002c7; 	X(ADD(*(dw*)((&unk_5430c)), 8));	// 74807 add     word ptr unk_5430C, 8 ;~ 229A:02C7
cs=0x229a;eip=0x0002cc; 	X(ADC(*(dw*)((&unk_5430e)), 0));	// 74808 adc     word ptr unk_5430E, 0 ;~ 229A:02CC
cs=0x229a;eip=0x0002d1; 	T(MOV(ax, 0x1E));	// 74809 mov     ax, 1Eh ;~ 229A:02D1
cs=0x229a;eip=0x0002d4; 	X(PUSH(ax));	// 74810 push    ax ;~ 229A:02D4
cs=0x229a;eip=0x0002d5; 	T(MOV(ax, 0x0C93C));	// 74811 mov     ax, 0C93Ch ;~ 229A:02D5
cs=0x229a;eip=0x0002d8; 	X(PUSH(ax));	// 74812 push    ax ;~ 229A:02D8
cs=0x229a;eip=0x0002d9; 	T(MOV(ax, 0x0C93A));	// 74813 mov     ax, 0C93Ah ;~ 229A:02D9
cs=0x229a;eip=0x0002dc; 	X(PUSH(ax));	// 74814 push    ax ;~ 229A:02DC
cs=0x229a;eip=0x0002dd; 	R(CALLF(sub_104b8,0));	// 74815 call    sub_104B8 ;~ 229A:02DD
cs=0x229a;eip=0x0002e2; 	T(ADD(sp, 6));	// 74816 add     sp, 6 ;~ 229A:02E2
cs=0x229a;eip=0x0002e5; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 74817 les     bx, dword ptr unk_47AD0 ;~ 229A:02E5
cs=0x229a;eip=0x0002e9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x16))));	// 74819 mov     ax, es:[bx+16h] ;~ 229A:02E9
cs=0x229a;eip=0x0002ed; 	X(MOV(*(dw*)((&unk_54308)), ax));	// 74820 mov     word ptr unk_54308, ax ;~ 229A:02ED
loc_31270:
	// 9209 
cs=0x229a;eip=0x0002f0; 	T(MOV(ax, *(dw*)((&unk_5430c))));	// 74823 mov     ax, word ptr unk_5430C ;~ 229A:02F0
cs=0x229a;eip=0x0002f3; 	T(MOV(dx, *(dw*)((&unk_5430e))));	// 74824 mov     dx, word ptr unk_5430E ;~ 229A:02F3
cs=0x229a;eip=0x0002f7; 	T(ADD(ax, 8));	// 74825 add     ax, 8 ;~ 229A:02F7
cs=0x229a;eip=0x0002fa; 	T(ADC(dx, 0));	// 74826 adc     dx, 0 ;~ 229A:02FA
cs=0x229a;eip=0x0002fd; 	T(CMP(dx, *(dw*)((&unk_5705c))));	// 74827 cmp     dx, word ptr unk_5705C ;~ 229A:02FD
cs=0x229a;eip=0x000301; 	R(JG(loc_3128b));	// 74828 jg      short loc_3128B ;~ 229A:0301
cs=0x229a;eip=0x000303; 	R(JL(loc_31247));	// 74829 jl      short loc_31247 ;~ 229A:0303
cs=0x229a;eip=0x000305; 	T(CMP(ax, *(dw*)((&unk_5705a))));	// 74830 cmp     ax, word ptr unk_5705A ;~ 229A:0305
cs=0x229a;eip=0x000309; 	R(JBE(loc_31247));	// 74831 jbe     short loc_31247 ;~ 229A:0309
loc_3128b:
	// 9210 
cs=0x229a;eip=0x00030b; 	T(MOV(si, *(dw*)((&unk_5705a))));	// 74834 mov     si, word ptr unk_5705A ;~ 229A:030B
cs=0x229a;eip=0x00030f; 	T(SUB(si, *(dw*)((&unk_5430a))));	// 74835 sub     si, word ptr unk_5430A ;~ 229A:030F
cs=0x229a;eip=0x000313; 	R(JNZ(loc_31298));	// 74836 jnz     short loc_31298 ;~ 229A:0313
cs=0x229a;eip=0x000315; 	T(MOV(si, 1));	// 74837 mov     si, 1 ;~ 229A:0315
loc_31298:
	// 9211 
cs=0x229a;eip=0x000318; 	X(PUSH(*(dw*)((&unk_5520b))));	// 74840 push    word ptr unk_5520B ;~ 229A:0318
cs=0x229a;eip=0x00031c; 	X(PUSH(*(dw*)((&unk_542ea))));	// 74841 push    word ptr unk_542EA ;~ 229A:031C
cs=0x229a;eip=0x000320; 	T(MOV(ax, 0x0F0));	// 74842 mov     ax, 0F0h ; 'ğ' ;~ 229A:0320
cs=0x229a;eip=0x000323; 	T(IMUL1_2(si));	// 74843 imul    si ;~ 229A:0323
cs=0x229a;eip=0x000325; 	T(CWD);	// 74844 cwd ;~ 229A:0325
cs=0x229a;eip=0x000326; 	T(XOR(ax, dx));	// 74845 xor     ax, dx ;~ 229A:0326
cs=0x229a;eip=0x000328; 	T(SUB(ax, dx));	// 74846 sub     ax, dx ;~ 229A:0328
cs=0x229a;eip=0x00032a; 	T(MOV(cx, 8));	// 74847 mov     cx, 8 ;~ 229A:032A
cs=0x229a;eip=0x00032d; 	T(SAR(ax, cl));	// 74848 sar     ax, cl ;~ 229A:032D
cs=0x229a;eip=0x00032f; 	T(XOR(ax, dx));	// 74849 xor     ax, dx ;~ 229A:032F
cs=0x229a;eip=0x000331; 	T(SUB(ax, dx));	// 74850 sub     ax, dx ;~ 229A:0331
cs=0x229a;eip=0x000333; 	X(PUSH(ax));	// 74851 push    ax ;~ 229A:0333
cs=0x229a;eip=0x000334; 	R(CALLF(sub_13561,0));	// 74852 call    sub_13561 ;~ 229A:0334
cs=0x229a;eip=0x000339; 	X(MOV(*(dw*)((&unk_5520b)), ax));	// 74853 mov     word ptr unk_5520B, ax ;~ 229A:0339
cs=0x229a;eip=0x00033c; 	T(MOV(ax, *(dw*)((&unk_5705a))));	// 74854 mov     ax, word ptr unk_5705A ;~ 229A:033C
cs=0x229a;eip=0x00033f; 	X(MOV(*(dw*)((&unk_5430a)), ax));	// 74855 mov     word ptr unk_5430A, ax ;~ 229A:033F
cs=0x229a;eip=0x000342; 	X(POP(si));	// 74856 pop     si ;~ 229A:0342
cs=0x229a;eip=0x000343; 	T(MOV(sp, bp));	// 74857 mov     sp, bp ;~ 229A:0343
cs=0x229a;eip=0x000345; 	X(POP(bp));	// 74858 pop     bp ;~ 229A:0345
cs=0x229a;eip=0x000346; 	R(RETF(0));	// 74859 retf ;~ 229A:0346
sub_312c7:
	// 74867 
#undef arg_0
#define arg_0 6
	// 74870 arg_0           = word ptr  6 ;~ 229A:0347
#undef arg_2
#define arg_2 8
	// 74871 arg_2           = word ptr  8 ;~ 229A:0347
cs=0x229a;eip=0x000347; 	X(PUSH(bp));	// 74873 push    bp ;~ 229A:0347
cs=0x229a;eip=0x000348; 	T(MOV(bp, sp));	// 74874 mov     bp, sp ;~ 229A:0348
cs=0x229a;eip=0x00034a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 74875 push    [bp+arg_2] ;~ 229A:034A
cs=0x229a;eip=0x00034d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 74876 push    [bp+arg_0] ;~ 229A:034D
cs=0x229a;eip=0x000350; 	T(MOV(ax, 0x0FFFF));	// 74877 mov     ax, 0FFFFh ;~ 229A:0350
cs=0x229a;eip=0x000353; 	X(PUSH(ax));	// 74878 push    ax ;~ 229A:0353
cs=0x229a;eip=0x000354; 	T(MOV(ax, 0x20));	// 74879 mov     ax, 20h ; ' ' ;~ 229A:0354
cs=0x229a;eip=0x000357; 	X(PUSH(ax));	// 74880 push    ax ;~ 229A:0357
cs=0x229a;eip=0x000358; 	R(CALLF(sub_2f12e,0));	// 74881 call    sub_2F12E ;~ 229A:0358
cs=0x229a;eip=0x00035d; 	X(POP(bp));	// 74882 pop     bp ;~ 229A:035D
cs=0x229a;eip=0x00035e; 	R(RETF(4));	// 74883 retf    4 ;~ 229A:035E
sub_312e1:
	// 74891 
#undef var_6
#define var_6 -6
	// 74893 var_6           = word ptr -6 ;~ 229A:0361
#undef var_4
#define var_4 -4
	// 74894 var_4           = word ptr -4 ;~ 229A:0361
#undef var_2
#define var_2 -2
	// 74895 var_2           = byte ptr -2 ;~ 229A:0361
cs=0x229a;eip=0x000361; 	X(PUSH(bp));	// 74897 push    bp ;~ 229A:0361
cs=0x229a;eip=0x000362; 	T(MOV(bp, sp));	// 74898 mov     bp, sp ;~ 229A:0362
cs=0x229a;eip=0x000364; 	T(SUB(sp, 6));	// 74899 sub     sp, 6 ;~ 229A:0364
cs=0x229a;eip=0x000367; 	T(MOV(ax, 0x222A));	// 74900 mov     ax, 222Ah ;~ 229A:0367
cs=0x229a;eip=0x00036a; 	X(PUSH(ax));	// 74901 push    ax ;~ 229A:036A
cs=0x229a;eip=0x00036b; 	T(ax = bp+var_2);	// 74902 lea     ax, [bp+var_2] ;~ 229A:036B
cs=0x229a;eip=0x00036e; 	X(PUSH(ax));	// 74903 push    ax ;~ 229A:036E
cs=0x229a;eip=0x00036f; 	X(PUSH(cs));	// 74904 push    cs ;~ 229A:036F
cs=0x229a;eip=0x000370; 	R(CALL(sub_31643,0));	// 74905 call    near ptr sub_31643 ;~ 229A:0370
cs=0x229a;eip=0x000373; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 74906 mov     [bp+var_6], ax ;~ 229A:0373
cs=0x229a;eip=0x000376; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 74907 mov     [bp+var_4], dx ;~ 229A:0376
cs=0x229a;eip=0x000379; 	X(PUSH(dx));	// 74908 push    dx ;~ 229A:0379
cs=0x229a;eip=0x00037a; 	X(PUSH(ax));	// 74909 push    ax ;~ 229A:037A
cs=0x229a;eip=0x00037b; 	R(CALLF(sub_2f06b,0));	// 74910 call    sub_2F06B ;~ 229A:037B
cs=0x229a;eip=0x000380; 	T(ADD(sp, 4));	// 74911 add     sp, 4 ;~ 229A:0380
cs=0x229a;eip=0x000383; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 74912 push    [bp+var_4] ;~ 229A:0383
cs=0x229a;eip=0x000386; 	R(CALLF(sub_2397c,0));	// 74913 call    sub_2397C ;~ 229A:0386
cs=0x229a;eip=0x00038b; 	T(MOV(sp, bp));	// 74914 mov     sp, bp ;~ 229A:038B
cs=0x229a;eip=0x00038d; 	X(POP(bp));	// 74915 pop     bp ;~ 229A:038D
cs=0x229a;eip=0x00038e; 	R(RETF(0));	// 74916 retf ;~ 229A:038E
sub_3130f:
	// 74923 
cs=0x229a;eip=0x00038f; 	T(MOV(ax, 1));	// 74925 mov     ax, 1 ;~ 229A:038F
cs=0x229a;eip=0x000392; 	X(PUSH(ax));	// 74926 push    ax ;~ 229A:0392
cs=0x229a;eip=0x000393; 	R(CALLF(sub_3e446,0));	// 74927 call    sub_3E446 ;~ 229A:0393
cs=0x229a;eip=0x000398; 	T(MOV(ax, 0x41));	// 74928 mov     ax, 41h ; 'A' ;~ 229A:0398
cs=0x229a;eip=0x00039b; 	X(PUSH(ax));	// 74929 push    ax ;~ 229A:039B
cs=0x229a;eip=0x00039c; 	T(MOV(ax, 0x2234));	// 74930 mov     ax, 2234h ;~ 229A:039C
cs=0x229a;eip=0x00039f; 	X(PUSH(ds));	// 74931 push    ds ;~ 229A:039F
cs=0x229a;eip=0x0003a0; 	X(PUSH(ax));	// 74932 push    ax ;~ 229A:03A0
cs=0x229a;eip=0x0003a1; 	T(MOV(ax, 5));	// 74933 mov     ax, 5 ;~ 229A:03A1
cs=0x229a;eip=0x0003a4; 	X(PUSH(ax));	// 74934 push    ax ;~ 229A:03A4
cs=0x229a;eip=0x0003a5; 	T(MOV(ax, 0x22C0));	// 74935 mov     ax, 22C0h ;~ 229A:03A5
cs=0x229a;eip=0x0003a8; 	X(PUSH(ds));	// 74936 push    ds ;~ 229A:03A8
cs=0x229a;eip=0x0003a9; 	X(PUSH(ax));	// 74937 push    ax ;~ 229A:03A9
cs=0x229a;eip=0x0003aa; 	T(MOV(ax, 0x0D));	// 74938 mov     ax, 0Dh ;~ 229A:03AA
cs=0x229a;eip=0x0003ad; 	X(PUSH(ax));	// 74939 push    ax ;~ 229A:03AD
cs=0x229a;eip=0x0003ae; 	R(CALLF(sub_3e4f4,0));	// 74940 call    sub_3E4F4 ;~ 229A:03AE
cs=0x229a;eip=0x0003b3; 	T(OR(al, al));	// 74941 or      al, al ;~ 229A:03B3
cs=0x229a;eip=0x0003b5; 	R(JNZ(locret_31340));	// 74942 jnz     short locret_31340 ;~ 229A:03B5
cs=0x229a;eip=0x0003b7; 	T(MOV(ax, 0x146));	// 74943 mov     ax, 146h ;~ 229A:03B7
cs=0x229a;eip=0x0003ba; 	X(PUSH(ax));	// 74944 push    ax ;~ 229A:03BA
cs=0x229a;eip=0x0003bb; 	R(CALLF(sub_2f7e0,0));	// 74945 call    sub_2F7E0 ;~ 229A:03BB
locret_31340:
	// 9212 
cs=0x229a;eip=0x0003c0; 	R(RETF(0));	// 74949 retf ;~ 229A:03C0
sub_31341:
	// 74956 
cs=0x229a;eip=0x0003c1; 	T(SUB(ax, ax));	// 74958 sub     ax, ax ;~ 229A:03C1
cs=0x229a;eip=0x0003c3; 	X(PUSH(ax));	// 74959 push    ax ;~ 229A:03C3
cs=0x229a;eip=0x0003c4; 	R(CALLF(sub_3e446,0));	// 74960 call    sub_3E446 ;~ 229A:03C4
cs=0x229a;eip=0x0003c9; 	R(CALLF(sub_3e56b,0));	// 74961 call    sub_3E56B ;~ 229A:03C9
cs=0x229a;eip=0x0003ce; 	R(RETF(0));	// 74962 retf ;~ 229A:03CE
sub_3134f:
	// 74970 
#undef var_2
#define var_2 -2
	// 74973 var_2           = byte ptr -2 ;~ 229A:03CF
cs=0x229a;eip=0x0003cf; 	X(PUSH(bp));	// 74975 push    bp ;~ 229A:03CF
cs=0x229a;eip=0x0003d0; 	T(MOV(bp, sp));	// 74976 mov     bp, sp ;~ 229A:03D0
cs=0x229a;eip=0x0003d2; 	T(SUB(sp, 2));	// 74977 sub     sp, 2 ;~ 229A:03D2
cs=0x229a;eip=0x0003d5; 	R(CALLF(sub_3ee5b,0));	// 74978 call    sub_3EE5B ;~ 229A:03D5
cs=0x229a;eip=0x0003da; 	T(MOV(ax, 0x2376));	// 74979 mov     ax, 2376h ;~ 229A:03DA
cs=0x229a;eip=0x0003dd; 	X(PUSH(ax));	// 74980 push    ax ;~ 229A:03DD
cs=0x229a;eip=0x0003de; 	T(ax = bp+var_2);	// 74981 lea     ax, [bp+var_2] ;~ 229A:03DE
cs=0x229a;eip=0x0003e1; 	X(PUSH(ax));	// 74982 push    ax ;~ 229A:03E1
cs=0x229a;eip=0x0003e2; 	X(PUSH(cs));	// 74983 push    cs ;~ 229A:03E2
cs=0x229a;eip=0x0003e3; 	R(CALL(sub_31643,0));	// 74984 call    near ptr sub_31643 ;~ 229A:03E3
cs=0x229a;eip=0x0003e6; 	T(MOV(ax, dx));	// 74985 mov     ax, dx ;~ 229A:03E6
cs=0x229a;eip=0x0003e8; 	X(PUSH(ax));	// 74986 push    ax ;~ 229A:03E8
cs=0x229a;eip=0x0003e9; 	R(CALLF(sub_2397c,0));	// 74987 call    sub_2397C ;~ 229A:03E9
cs=0x229a;eip=0x0003ee; 	T(MOV(al, unk_49bff));	// 74988 mov     al, byte ptr unk_49BFF ;~ 229A:03EE
cs=0x229a;eip=0x0003f1; 	X(MOV(unk_54310, al));	// 74989 mov     byte ptr unk_54310, al ;~ 229A:03F1
cs=0x229a;eip=0x0003f4; 	X(MOV(unk_54311, 0x3A));	// 74990 mov     byte ptr unk_54311, 3Ah ; ':' ;~ 229A:03F4
cs=0x229a;eip=0x0003f9; 	X(MOV(unk_54312, 0));	// 74991 mov     byte ptr unk_54312, 0 ;~ 229A:03F9
cs=0x229a;eip=0x0003fe; 	T(MOV(ax, 0x0C960));	// 74992 mov     ax, 0C960h ;~ 229A:03FE
cs=0x229a;eip=0x000401; 	T(MOV(sp, bp));	// 74993 mov     sp, bp ;~ 229A:0401
cs=0x229a;eip=0x000403; 	X(POP(bp));	// 74994 pop     bp ;~ 229A:0403
cs=0x229a;eip=0x000404; 	R(RETF(0));	// 74995 retf ;~ 229A:0404
sub_31385:
	// 75003 
#undef arg_0
#define arg_0 6
	// 75005 arg_0           = word ptr  6 ;~ 229A:0405
#undef arg_2
#define arg_2 8
	// 75006 arg_2           = word ptr  8 ;~ 229A:0405
#undef arg_4
#define arg_4 0x0A
	// 75007 arg_4           = word ptr  0Ah ;~ 229A:0405
#undef arg_6
#define arg_6 0x0C
	// 75008 arg_6           = word ptr  0Ch ;~ 229A:0405
cs=0x229a;eip=0x000405; 	X(PUSH(bp));	// 75010 push    bp ;~ 229A:0405
cs=0x229a;eip=0x000406; 	T(MOV(bp, sp));	// 75011 mov     bp, sp ;~ 229A:0406
cs=0x229a;eip=0x000408; 	T(MOV(al, unk_5651c));	// 75012 mov     al, byte ptr unk_5651C ;~ 229A:0408
cs=0x229a;eip=0x00040b; 	X(MOV(unk_54328, al));	// 75013 mov     byte ptr unk_54328, al ;~ 229A:040B
cs=0x229a;eip=0x00040e; 	T(MOV(ax, *(dw*)((&unk_5687d))));	// 75014 mov     ax, word ptr unk_5687D ;~ 229A:040E
cs=0x229a;eip=0x000411; 	X(MOV(*(dw*)((&unk_5431e)), ax));	// 75015 mov     word ptr unk_5431E, ax ;~ 229A:0411
cs=0x229a;eip=0x000414; 	T(MOV(ax, *(dw*)((&unk_56881))));	// 75016 mov     ax, word ptr unk_56881 ;~ 229A:0414
cs=0x229a;eip=0x000417; 	X(MOV(*(dw*)((&unk_54320)), ax));	// 75017 mov     word ptr unk_54320, ax ;~ 229A:0417
cs=0x229a;eip=0x00041a; 	T(MOV(ax, *(dw*)((&unk_564fe))));	// 75018 mov     ax, word ptr unk_564FE ;~ 229A:041A
cs=0x229a;eip=0x00041d; 	X(MOV(*(dw*)((&unk_54322)), ax));	// 75019 mov     word ptr unk_54322, ax ;~ 229A:041D
cs=0x229a;eip=0x000420; 	T(MOV(ax, *(dw*)((&unk_56500))));	// 75020 mov     ax, word ptr unk_56500 ;~ 229A:0420
cs=0x229a;eip=0x000423; 	X(MOV(*(dw*)((&unk_54324)), ax));	// 75021 mov     word ptr unk_54324, ax ;~ 229A:0423
cs=0x229a;eip=0x000426; 	X(PUSH(*(dw*)((&unk_5651a))));	// 75022 push    word ptr unk_5651A ;~ 229A:0426
cs=0x229a;eip=0x00042a; 	R(CALLF(sub_202f1,0));	// 75023 call    sub_202F1 ;~ 229A:042A
cs=0x229a;eip=0x00042f; 	R(CALLF(sub_203b0,0));	// 75024 call    sub_203B0 ;~ 229A:042F
cs=0x229a;eip=0x000434; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 75025 mov     ax, [bp+arg_6] ;~ 229A:0434
cs=0x229a;eip=0x000437; 	X(MOV(*(dw*)((&unk_54314)), ax));	// 75026 mov     word ptr unk_54314, ax ;~ 229A:0437
cs=0x229a;eip=0x00043a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 75027 mov     ax, [bp+arg_4] ;~ 229A:043A
cs=0x229a;eip=0x00043d; 	X(MOV(*(dw*)((&unk_54316)), ax));	// 75028 mov     word ptr unk_54316, ax ;~ 229A:043D
cs=0x229a;eip=0x000440; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 75029 mov     ax, [bp+arg_2] ;~ 229A:0440
cs=0x229a;eip=0x000443; 	T(ADD(ax, 6));	// 75030 add     ax, 6 ;~ 229A:0443
cs=0x229a;eip=0x000446; 	X(MOV(*(dw*)((&unk_54318)), ax));	// 75031 mov     word ptr unk_54318, ax ;~ 229A:0446
cs=0x229a;eip=0x000449; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 75032 mov     ax, [bp+arg_0] ;~ 229A:0449
cs=0x229a;eip=0x00044c; 	T(ADD(ax, 6));	// 75033 add     ax, 6 ;~ 229A:044C
cs=0x229a;eip=0x00044f; 	X(MOV(*(dw*)((&unk_5431a)), ax));	// 75034 mov     word ptr unk_5431A, ax ;~ 229A:044F
cs=0x229a;eip=0x000452; 	T(MOV(ax, 0x0C964));	// 75035 mov     ax, 0C964h ;~ 229A:0452
cs=0x229a;eip=0x000455; 	X(PUSH(ax));	// 75036 push    ax ;~ 229A:0455
cs=0x229a;eip=0x000456; 	R(CALLF(sub_23644,0));	// 75037 call    sub_23644 ;~ 229A:0456
cs=0x229a;eip=0x00045b; 	T(MOV(ax, 0x0ED08));	// 75038 mov     ax, 0ED08h ;~ 229A:045B
cs=0x229a;eip=0x00045e; 	X(PUSH(ax));	// 75039 push    ax ;~ 229A:045E
cs=0x229a;eip=0x00045f; 	X(PUSH(*(dw*)((&unk_54314))));	// 75040 push    word ptr unk_54314 ;~ 229A:045F
cs=0x229a;eip=0x000463; 	X(PUSH(*(dw*)((&unk_54316))));	// 75041 push    word ptr unk_54316 ;~ 229A:0463
cs=0x229a;eip=0x000467; 	T(MOV(ax, 0x2380));	// 75042 mov     ax, 2380h ;~ 229A:0467
cs=0x229a;eip=0x00046a; 	X(PUSH(ax));	// 75043 push    ax ;~ 229A:046A
cs=0x229a;eip=0x00046b; 	T(SUB(ax, ax));	// 75044 sub     ax, ax ;~ 229A:046B
cs=0x229a;eip=0x00046d; 	X(PUSH(ax));	// 75045 push    ax ;~ 229A:046D
cs=0x229a;eip=0x00046e; 	X(PUSH(ax));	// 75046 push    ax ;~ 229A:046E
cs=0x229a;eip=0x00046f; 	X(PUSH(*(dw*)((&unk_54318))));	// 75047 push    word ptr unk_54318 ;~ 229A:046F
cs=0x229a;eip=0x000473; 	X(PUSH(*(dw*)((&unk_5431a))));	// 75048 push    word ptr unk_5431A ;~ 229A:0473
cs=0x229a;eip=0x000477; 	R(CALLF(sub_2c4d3,0));	// 75049 call    sub_2C4D3 ;~ 229A:0477
cs=0x229a;eip=0x00047c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_6))));	// 75050 push    [bp+arg_6] ;~ 229A:047C
cs=0x229a;eip=0x00047f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 75051 push    [bp+arg_4] ;~ 229A:047F
cs=0x229a;eip=0x000482; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 75052 push    [bp+arg_2] ;~ 229A:0482
cs=0x229a;eip=0x000485; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75053 push    [bp+arg_0] ;~ 229A:0485
cs=0x229a;eip=0x000488; 	T(MOV(ax, 1));	// 75054 mov     ax, 1 ;~ 229A:0488
cs=0x229a;eip=0x00048b; 	X(PUSH(ax));	// 75055 push    ax ;~ 229A:048B
cs=0x229a;eip=0x00048c; 	R(CALLF(sub_2fbda,0));	// 75056 call    sub_2FBDA ;~ 229A:048C
cs=0x229a;eip=0x000491; 	T(MOV(ax, *(dw*)((&unk_47bde))));	// 75057 mov     ax, word ptr unk_47BDE ;~ 229A:0491
cs=0x229a;eip=0x000494; 	X(MOV(*(dw*)((&unk_54326)), ax));	// 75058 mov     word ptr unk_54326, ax ;~ 229A:0494
cs=0x229a;eip=0x000497; 	T(MOV(al, unk_56885));	// 75059 mov     al, byte ptr unk_56885 ;~ 229A:0497
cs=0x229a;eip=0x00049a; 	X(MOV(unk_5431c, al));	// 75060 mov     byte ptr unk_5431C, al ;~ 229A:049A
cs=0x229a;eip=0x00049d; 	X(MOV(*(dw*)((&unk_47bde)), 0x0FF00));	// 75061 mov     word ptr unk_47BDE, 0FF00h ;~ 229A:049D
cs=0x229a;eip=0x0004a3; 	X(MOV(unk_56885, 0));	// 75062 mov     byte ptr unk_56885, 0 ;~ 229A:04A3
cs=0x229a;eip=0x0004a8; 	X(POP(bp));	// 75063 pop     bp ;~ 229A:04A8
cs=0x229a;eip=0x0004a9; 	R(RETF(8));	// 75064 retf    8 ;~ 229A:04A9
sub_3142c:
	// 75071 
cs=0x229a;eip=0x0004ac; 	T(MOV(ax, 0x2380));	// 75073 mov     ax, 2380h ;~ 229A:04AC
cs=0x229a;eip=0x0004af; 	X(PUSH(ax));	// 75074 push    ax ;~ 229A:04AF
cs=0x229a;eip=0x0004b0; 	T(SUB(ax, ax));	// 75075 sub     ax, ax ;~ 229A:04B0
cs=0x229a;eip=0x0004b2; 	X(PUSH(ax));	// 75076 push    ax ;~ 229A:04B2
cs=0x229a;eip=0x0004b3; 	X(PUSH(ax));	// 75077 push    ax ;~ 229A:04B3
cs=0x229a;eip=0x0004b4; 	T(MOV(ax, 0x0ED08));	// 75078 mov     ax, 0ED08h ;~ 229A:04B4
cs=0x229a;eip=0x0004b7; 	X(PUSH(ax));	// 75079 push    ax ;~ 229A:04B7
cs=0x229a;eip=0x0004b8; 	X(PUSH(*(dw*)((&unk_54314))));	// 75080 push    word ptr unk_54314 ;~ 229A:04B8
cs=0x229a;eip=0x0004bc; 	X(PUSH(*(dw*)((&unk_54316))));	// 75081 push    word ptr unk_54316 ;~ 229A:04BC
cs=0x229a;eip=0x0004c0; 	X(PUSH(*(dw*)((&unk_54318))));	// 75082 push    word ptr unk_54318 ;~ 229A:04C0
cs=0x229a;eip=0x0004c4; 	X(PUSH(*(dw*)((&unk_5431a))));	// 75083 push    word ptr unk_5431A ;~ 229A:04C4
cs=0x229a;eip=0x0004c8; 	R(CALLF(sub_2c4d3,0));	// 75084 call    sub_2C4D3 ;~ 229A:04C8
cs=0x229a;eip=0x0004cd; 	T(MOV(al, unk_54328));	// 75085 mov     al, byte ptr unk_54328 ;~ 229A:04CD
cs=0x229a;eip=0x0004d0; 	T(SUB(ah, ah));	// 75086 sub     ah, ah ;~ 229A:04D0
cs=0x229a;eip=0x0004d2; 	X(PUSH(ax));	// 75087 push    ax ;~ 229A:04D2
cs=0x229a;eip=0x0004d3; 	R(CALLF(sub_202f1,0));	// 75088 call    sub_202F1 ;~ 229A:04D3
cs=0x229a;eip=0x0004d8; 	X(PUSH(*(dw*)((&unk_5431e))));	// 75089 push    word ptr unk_5431E ;~ 229A:04D8
cs=0x229a;eip=0x0004dc; 	X(PUSH(*(dw*)((&unk_54320))));	// 75090 push    word ptr unk_54320 ;~ 229A:04DC
cs=0x229a;eip=0x0004e0; 	X(PUSH(*(dw*)((&unk_54322))));	// 75091 push    word ptr unk_54322 ;~ 229A:04E0
cs=0x229a;eip=0x0004e4; 	X(PUSH(*(dw*)((&unk_54324))));	// 75092 push    word ptr unk_54324 ;~ 229A:04E4
cs=0x229a;eip=0x0004e8; 	R(CALLF(sub_212a2,0));	// 75093 call    sub_212A2 ;~ 229A:04E8
cs=0x229a;eip=0x0004ed; 	T(MOV(ax, *(dw*)((&unk_54326))));	// 75094 mov     ax, word ptr unk_54326 ;~ 229A:04ED
cs=0x229a;eip=0x0004f0; 	X(MOV(*(dw*)((&unk_47bde)), ax));	// 75095 mov     word ptr unk_47BDE, ax ;~ 229A:04F0
cs=0x229a;eip=0x0004f3; 	T(MOV(al, unk_5431c));	// 75096 mov     al, byte ptr unk_5431C ;~ 229A:04F3
cs=0x229a;eip=0x0004f6; 	X(MOV(unk_56885, al));	// 75097 mov     byte ptr unk_56885, al ;~ 229A:04F6
cs=0x229a;eip=0x0004f9; 	R(RETF(0));	// 75098 retf ;~ 229A:04F9
sub_3147a:
	// 75106 
#undef var_8
#define var_8 -8
	// 75109 var_8           = word ptr -8 ;~ 229A:04FA
#undef var_6
#define var_6 -6
	// 75110 var_6           = word ptr -6 ;~ 229A:04FA
#undef var_4
#define var_4 -4
	// 75111 var_4           = word ptr -4 ;~ 229A:04FA
#undef var_2
#define var_2 -2
	// 75112 var_2           = word ptr -2 ;~ 229A:04FA
#undef arg_0
#define arg_0 4
	// 75113 arg_0           = word ptr  4 ;~ 229A:04FA
cs=0x229a;eip=0x0004fa; 	X(PUSH(bp));	// 75115 push    bp ;~ 229A:04FA
cs=0x229a;eip=0x0004fb; 	T(MOV(bp, sp));	// 75116 mov     bp, sp ;~ 229A:04FB
cs=0x229a;eip=0x0004fd; 	T(SUB(sp, 8));	// 75117 sub     sp, 8 ;~ 229A:04FD
cs=0x229a;eip=0x000500; 	X(PUSH(di));	// 75118 push    di ;~ 229A:0500
cs=0x229a;eip=0x000501; 	X(PUSH(ds));	// 75119 push    ds ;~ 229A:0501
cs=0x229a;eip=0x000502; 	X(POP(es));	// 75120 pop     es ;~ 229A:0502
cs=0x229a;eip=0x000503; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 75122 mov     di, [bp+arg_0] ;~ 229A:0503
cs=0x229a;eip=0x000506; 	T(MOV(cx, 0x0FFFF));	// 75123 mov     cx, 0FFFFh ;~ 229A:0506
cs=0x229a;eip=0x000509; 	T(XOR(ax, ax));	// 75124 xor     ax, ax ;~ 229A:0509
	// 75125 repne scasb ;~ 229A:050B
cs=0x229a;eip=0x00050b; 	T(	REPNE SCASB);	// 75125 repne scasb ;~ 229A:050B
cs=0x229a;eip=0x00050d; 	T(NOT(cx));	// 75126 not     cx ;~ 229A:050D
cs=0x229a;eip=0x00050f; 	T(DEC(cx));	// 75127 dec     cx ;~ 229A:050F
cs=0x229a;eip=0x000510; 	T(SHL(cx, 1));	// 75128 shl     cx, 1 ;~ 229A:0510
cs=0x229a;eip=0x000512; 	T(SHL(cx, 1));	// 75129 shl     cx, 1 ;~ 229A:0512
cs=0x229a;eip=0x000514; 	T(ADD(cx, 0x18));	// 75130 add     cx, 18h ;~ 229A:0514
cs=0x229a;eip=0x000517; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), cx));	// 75131 mov     [bp+var_2], cx ;~ 229A:0517
cs=0x229a;eip=0x00051a; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), 0x1A));	// 75132 mov     [bp+var_4], 1Ah ;~ 229A:051A
cs=0x229a;eip=0x00051f; 	T(MOV(ax, cx));	// 75133 mov     ax, cx ;~ 229A:051F
cs=0x229a;eip=0x000521; 	T(SAR(ax, 1));	// 75134 sar     ax, 1 ;~ 229A:0521
cs=0x229a;eip=0x000523; 	T(SUB(ax, 0x0A0));	// 75135 sub     ax, 0A0h ; ' ' ;~ 229A:0523
cs=0x229a;eip=0x000526; 	T(NEG(ax));	// 75136 neg     ax ;~ 229A:0526
cs=0x229a;eip=0x000528; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 75137 mov     [bp+var_6], ax ;~ 229A:0528
cs=0x229a;eip=0x00052b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x43));	// 75138 mov     [bp+var_8], 43h ; 'C' ;~ 229A:052B
cs=0x229a;eip=0x000530; 	X(PUSH(ax));	// 75139 push    ax ;~ 229A:0530
cs=0x229a;eip=0x000531; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 75140 push    [bp+var_8] ;~ 229A:0531
cs=0x229a;eip=0x000534; 	X(PUSH(cx));	// 75141 push    cx ;~ 229A:0534
cs=0x229a;eip=0x000535; 	T(MOV(ax, 0x1A));	// 75142 mov     ax, 1Ah ;~ 229A:0535
cs=0x229a;eip=0x000538; 	X(PUSH(ax));	// 75143 push    ax ;~ 229A:0538
cs=0x229a;eip=0x000539; 	X(PUSH(cs));	// 75144 push    cs ;~ 229A:0539
cs=0x229a;eip=0x00053a; 	R(CALL(sub_31385,0));	// 75145 call    near ptr sub_31385 ;~ 229A:053A
cs=0x229a;eip=0x00053d; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75146 push    [bp+arg_0] ;~ 229A:053D
cs=0x229a;eip=0x000540; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 75147 mov     ax, [bp+var_6] ;~ 229A:0540
cs=0x229a;eip=0x000543; 	T(ADD(ax, 0x0C));	// 75148 add     ax, 0Ch ;~ 229A:0543
cs=0x229a;eip=0x000546; 	X(PUSH(ax));	// 75149 push    ax ;~ 229A:0546
cs=0x229a;eip=0x000547; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 75150 mov     ax, [bp+var_8] ;~ 229A:0547
cs=0x229a;eip=0x00054a; 	T(ADD(ax, 0x0A));	// 75151 add     ax, 0Ah ;~ 229A:054A
cs=0x229a;eip=0x00054d; 	X(PUSH(ax));	// 75152 push    ax ;~ 229A:054D
cs=0x229a;eip=0x00054e; 	R(CALLF(sub_2dd68,0));	// 75153 call    sub_2DD68 ;~ 229A:054E
cs=0x229a;eip=0x000553; 	X(POP(di));	// 75154 pop     di ;~ 229A:0553
cs=0x229a;eip=0x000554; 	T(MOV(sp, bp));	// 75155 mov     sp, bp ;~ 229A:0554
cs=0x229a;eip=0x000556; 	X(POP(bp));	// 75156 pop     bp ;~ 229A:0556
cs=0x229a;eip=0x000557; 	R(RETN(2));	// 75157 retn    2 ;~ 229A:0557
sub_314da:
	// 75164 
cs=0x229a;eip=0x00055a; 	T(MOV(ax, 0x2380));	// 75165 mov     ax, 2380h ;~ 229A:055A
cs=0x229a;eip=0x00055d; 	X(PUSH(ax));	// 75166 push    ax ;~ 229A:055D
cs=0x229a;eip=0x00055e; 	T(MOV(ax, 0x140));	// 75167 mov     ax, 140h ;~ 229A:055E
cs=0x229a;eip=0x000561; 	X(PUSH(ax));	// 75168 push    ax ;~ 229A:0561
cs=0x229a;eip=0x000562; 	T(MOV(ax, 0x20));	// 75169 mov     ax, 20h ; ' ' ;~ 229A:0562
cs=0x229a;eip=0x000565; 	X(PUSH(ax));	// 75170 push    ax ;~ 229A:0565
cs=0x229a;eip=0x000566; 	X(PUSH(cs));	// 75171 push    cs ;~ 229A:0566
cs=0x229a;eip=0x000567; 	R(CALL(sub_31695,0));	// 75172 call    near ptr sub_31695 ;~ 229A:0567
cs=0x229a;eip=0x00056a; 	R(RETF(0));	// 75173 retf ;~ 229A:056A
sub_314eb:
	// 75180 
cs=0x229a;eip=0x00056b; 	T(MOV(ax, 0x2380));	// 75181 mov     ax, 2380h ;~ 229A:056B
cs=0x229a;eip=0x00056e; 	X(PUSH(ax));	// 75182 push    ax ;~ 229A:056E
cs=0x229a;eip=0x00056f; 	R(CALLF(sub_236fe,0));	// 75183 call    sub_236FE ;~ 229A:056F
cs=0x229a;eip=0x000574; 	R(RETF(0));	// 75184 retf ;~ 229A:0574
sub_314f5:
	// 75192 
#undef var_7a
#define var_7a -0x7A
	// 75194 var_7A          = byte ptr -7Ah ;~ 229A:0575
#undef var_52
#define var_52 -0x52
	// 75195 var_52          = byte ptr -52h ;~ 229A:0575
#undef var_2
#define var_2 -2
	// 75196 var_2           = byte ptr -2 ;~ 229A:0575
#undef arg_0
#define arg_0 6
	// 75197 arg_0           = word ptr  6 ;~ 229A:0575
#undef arg_2
#define arg_2 8
	// 75198 arg_2           = word ptr  8 ;~ 229A:0575
cs=0x229a;eip=0x000575; 	X(PUSH(bp));	// 75200 push    bp ;~ 229A:0575
cs=0x229a;eip=0x000576; 	T(MOV(bp, sp));	// 75201 mov     bp, sp ;~ 229A:0576
cs=0x229a;eip=0x000578; 	T(SUB(sp, 0x7A));	// 75202 sub     sp, 7Ah ;~ 229A:0578
cs=0x229a;eip=0x00057b; 	T(CMP(*(dw*)((&unk_47bdc)), 0));	// 75203 cmp     word ptr unk_47BDC, 0 ;~ 229A:057B
cs=0x229a;eip=0x000580; 	R(JZ(loc_31509));	// 75204 jz      short loc_31509 ;~ 229A:0580
cs=0x229a;eip=0x000582; 	T(CMP(*(dw*)((&unk_47b2e)), 0x0FFFF));	// 75205 cmp     word ptr unk_47B2E, 0FFFFh ;~ 229A:0582
cs=0x229a;eip=0x000587; 	R(JNZ(loc_31528));	// 75206 jnz     short loc_31528 ;~ 229A:0587
loc_31509:
	// 9213 
cs=0x229a;eip=0x000589; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 75209 push    [bp+arg_2] ;~ 229A:0589
cs=0x229a;eip=0x00058c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75210 push    [bp+arg_0] ;~ 229A:058C
cs=0x229a;eip=0x00058f; 	T(MOV(ax, 0x238A));	// 75211 mov     ax, 238Ah ;~ 229A:058F
cs=0x229a;eip=0x000592; 	X(PUSH(ax));	// 75212 push    ax ;~ 229A:0592
cs=0x229a;eip=0x000593; 	T(ax = bp+var_52);	// 75213 lea     ax, [bp+var_52] ;~ 229A:0593
cs=0x229a;eip=0x000596; 	X(PUSH(ax));	// 75214 push    ax ;~ 229A:0596
cs=0x229a;eip=0x000597; 	R(CALLF(sub_2f1d9,0));	// 75215 call    sub_2F1D9 ;~ 229A:0597
cs=0x229a;eip=0x00059c; 	T(ADD(sp, 8));	// 75216 add     sp, 8 ;~ 229A:059C
cs=0x229a;eip=0x00059f; 	T(ax = bp+var_52);	// 75217 lea     ax, [bp+var_52] ;~ 229A:059F
cs=0x229a;eip=0x0005a2; 	X(PUSH(ax));	// 75218 push    ax ;~ 229A:05A2
cs=0x229a;eip=0x0005a3; 	R(CALLF(sub_2f7e0,0));	// 75219 call    sub_2F7E0 ;~ 229A:05A3
loc_31528:
	// 9214 
cs=0x229a;eip=0x0005a8; 	T(ax = bp+var_7a);	// 75223 lea     ax, [bp+var_7A] ;~ 229A:05A8
cs=0x229a;eip=0x0005ab; 	X(PUSH(ax));	// 75224 push    ax ;~ 229A:05AB
cs=0x229a;eip=0x0005ac; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 75225 push    [bp+arg_2] ;~ 229A:05AC
cs=0x229a;eip=0x0005af; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75226 push    [bp+arg_0] ;~ 229A:05AF
cs=0x229a;eip=0x0005b2; 	R(CALLF(sub_318f0,0));	// 75227 call    sub_318F0 ;~ 229A:05B2
cs=0x229a;eip=0x0005b7; 	T(ax = bp+var_7a);	// 75228 lea     ax, [bp+var_7A] ;~ 229A:05B7
cs=0x229a;eip=0x0005ba; 	X(PUSH(ax));	// 75229 push    ax ;~ 229A:05BA
cs=0x229a;eip=0x0005bb; 	T(MOV(ax, 0x239B));	// 75230 mov     ax, 239Bh ;~ 229A:05BB
cs=0x229a;eip=0x0005be; 	X(PUSH(ax));	// 75231 push    ax ;~ 229A:05BE
cs=0x229a;eip=0x0005bf; 	T(ax = bp+var_52);	// 75232 lea     ax, [bp+var_52] ;~ 229A:05BF
cs=0x229a;eip=0x0005c2; 	X(PUSH(ax));	// 75233 push    ax ;~ 229A:05C2
cs=0x229a;eip=0x0005c3; 	R(CALLF(sub_2f1d9,0));	// 75234 call    sub_2F1D9 ;~ 229A:05C3
cs=0x229a;eip=0x0005c8; 	T(ADD(sp, 6));	// 75235 add     sp, 6 ;~ 229A:05C8
cs=0x229a;eip=0x0005cb; 	T(ax = bp+var_52);	// 75236 lea     ax, [bp+var_52] ;~ 229A:05CB
cs=0x229a;eip=0x0005ce; 	X(PUSH(ax));	// 75237 push    ax ;~ 229A:05CE
cs=0x229a;eip=0x0005cf; 	R(CALL(sub_3147a,0));	// 75238 call    sub_3147A ;~ 229A:05CF
loc_31552:
	// 9215 
cs=0x229a;eip=0x0005d2; 	R(CALLF(sub_2eee2,0));	// 75242 call    sub_2EEE2 ;~ 229A:05D2
cs=0x229a;eip=0x0005d7; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 75243 mov     [bp+var_2], al ;~ 229A:05D7
cs=0x229a;eip=0x0005da; 	T(CMP(al, 0x20));	// 75244 cmp     al, 20h ; ' ' ;~ 229A:05DA
cs=0x229a;eip=0x0005dc; 	R(JNZ(loc_31566));	// 75245 jnz     short loc_31566 ;~ 229A:05DC
cs=0x229a;eip=0x0005de; 	X(PUSH(cs));	// 75246 push    cs ;~ 229A:05DE
cs=0x229a;eip=0x0005df; 	R(CALL(sub_3142c,0));	// 75247 call    near ptr sub_3142C ;~ 229A:05DF
cs=0x229a;eip=0x0005e2; 	T(SUB(ax, ax));	// 75248 sub     ax, ax ;~ 229A:05E2
cs=0x229a;eip=0x0005e4; 	R(JMP(loc_31590));	// 75249 jmp     short loc_31590 ;~ 229A:05E4
loc_31566:
	// 9216 
cs=0x229a;eip=0x0005e6; 	T(CMP(*(raddr(ss,bp+var_2)), 0x1B));	// 75253 cmp     [bp+var_2], 1Bh ;~ 229A:05E6
cs=0x229a;eip=0x0005ea; 	R(JNZ(loc_31576));	// 75254 jnz     short loc_31576 ;~ 229A:05EA
cs=0x229a;eip=0x0005ec; 	T(SUB(ax, ax));	// 75255 sub     ax, ax ;~ 229A:05EC
cs=0x229a;eip=0x0005ee; 	X(PUSH(ax));	// 75256 push    ax ;~ 229A:05EE
cs=0x229a;eip=0x0005ef; 	R(CALLF(sub_2f7e0,0));	// 75257 call    sub_2F7E0 ;~ 229A:05EF
cs=0x229a;eip=0x0005f4; 	R(JMP(loc_31552));	// 75259 jmp     short loc_31552 ;~ 229A:05F4
loc_31576:
	// 9217 
cs=0x229a;eip=0x0005f6; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 75263 mov     al, [bp+var_2] ;~ 229A:05F6
cs=0x229a;eip=0x0005f9; 	T(CBW);	// 75264 cbw ;~ 229A:05F9
cs=0x229a;eip=0x0005fa; 	T(MOV(bx, ax));	// 75265 mov     bx, ax ;~ 229A:05FA
cs=0x229a;eip=0x0005fc; 	T(TEST(*(raddr(ds,bx-0x3D7B)), 3));	// 75266 test    byte ptr [bx-3D7Bh], 3 ;~ 229A:05FC
cs=0x229a;eip=0x000601; 	R(JZ(loc_31552));	// 75267 jz      short loc_31552 ;~ 229A:0601
cs=0x229a;eip=0x000603; 	X(PUSH(cs));	// 75268 push    cs ;~ 229A:0603
cs=0x229a;eip=0x000604; 	R(CALL(sub_3142c,0));	// 75269 call    near ptr sub_3142C ;~ 229A:0604
cs=0x229a;eip=0x000607; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 75270 mov     al, [bp+var_2] ;~ 229A:0607
cs=0x229a;eip=0x00060a; 	T(CBW);	// 75271 cbw ;~ 229A:060A
cs=0x229a;eip=0x00060b; 	X(PUSH(ax));	// 75272 push    ax ;~ 229A:060B
cs=0x229a;eip=0x00060c; 	R(CALL(sub_30f84,0));	// 75273 call    sub_30F84 ;~ 229A:060C
cs=0x229a;eip=0x00060f; 	T(CBW);	// 75274 cbw ;~ 229A:060F
loc_31590:
	// 9218 
cs=0x229a;eip=0x000610; 	T(MOV(sp, bp));	// 75277 mov     sp, bp ;~ 229A:0610
cs=0x229a;eip=0x000612; 	X(POP(bp));	// 75278 pop     bp ;~ 229A:0612
cs=0x229a;eip=0x000613; 	R(RETF(4));	// 75279 retf    4 ;~ 229A:0613
sub_31596:
	// 75287 
#undef var_50
#define var_50 -0x50
	// 75290 var_50          = byte ptr -50h ;~ 229A:0616
#undef arg_0
#define arg_0 6
	// 75291 arg_0           = word ptr  6 ;~ 229A:0616
cs=0x229a;eip=0x000616; 	X(PUSH(bp));	// 75293 push    bp ;~ 229A:0616
cs=0x229a;eip=0x000617; 	T(MOV(bp, sp));	// 75294 mov     bp, sp ;~ 229A:0617
cs=0x229a;eip=0x000619; 	T(SUB(sp, 0x50));	// 75295 sub     sp, 50h ;~ 229A:0619
cs=0x229a;eip=0x00061c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75296 push    [bp+arg_0] ;~ 229A:061C
cs=0x229a;eip=0x00061f; 	T(MOV(ax, 0x23CA));	// 75297 mov     ax, 23CAh ;~ 229A:061F
cs=0x229a;eip=0x000622; 	X(PUSH(ax));	// 75298 push    ax ;~ 229A:0622
cs=0x229a;eip=0x000623; 	T(ax = bp+var_50);	// 75299 lea     ax, [bp+var_50] ;~ 229A:0623
cs=0x229a;eip=0x000626; 	X(PUSH(ax));	// 75300 push    ax ;~ 229A:0626
cs=0x229a;eip=0x000627; 	R(CALLF(sub_2f1d9,0));	// 75301 call    sub_2F1D9 ;~ 229A:0627
cs=0x229a;eip=0x00062c; 	T(ADD(sp, 6));	// 75302 add     sp, 6 ;~ 229A:062C
cs=0x229a;eip=0x00062f; 	T(ax = bp+var_50);	// 75303 lea     ax, [bp+var_50] ;~ 229A:062F
cs=0x229a;eip=0x000632; 	X(PUSH(ax));	// 75304 push    ax ;~ 229A:0632
cs=0x229a;eip=0x000633; 	R(CALL(sub_3147a,0));	// 75305 call    sub_3147A ;~ 229A:0633
cs=0x229a;eip=0x000636; 	R(CALLF(sub_2eee2,0));	// 75306 call    sub_2EEE2 ;~ 229A:0636
cs=0x229a;eip=0x00063b; 	T(SUB(ax, ax));	// 75307 sub     ax, ax ;~ 229A:063B
cs=0x229a;eip=0x00063d; 	X(PUSH(ax));	// 75308 push    ax ;~ 229A:063D
cs=0x229a;eip=0x00063e; 	R(CALLF(sub_2f7e0,0));	// 75309 call    sub_2F7E0 ;~ 229A:063E
sub_315c9:
	// 75321 
cs=0x229a;eip=0x000649; 	T(MOV(ax, 0x23FC));	// 75323 mov     ax, 23FCh ;~ 229A:0649
cs=0x229a;eip=0x00064c; 	X(PUSH(ax));	// 75324 push    ax ;~ 229A:064C
cs=0x229a;eip=0x00064d; 	R(CALL(sub_3147a,0));	// 75325 call    sub_3147A ;~ 229A:064D
cs=0x229a;eip=0x000650; 	R(CALLF(sub_2eee2,0));	// 75326 call    sub_2EEE2 ;~ 229A:0650
cs=0x229a;eip=0x000655; 	T(SUB(ax, ax));	// 75327 sub     ax, ax ;~ 229A:0655
cs=0x229a;eip=0x000657; 	X(PUSH(ax));	// 75328 push    ax ;~ 229A:0657
cs=0x229a;eip=0x000658; 	R(CALLF(sub_2f7e0,0));	// 75329 call    sub_2F7E0 ;~ 229A:0658
sub_315de:
	// 75339 
#undef var_50
#define var_50 -0x50
	// 75342 var_50          = byte ptr -50h ;~ 229A:065E
#undef arg_0
#define arg_0 4
	// 75343 arg_0           = word ptr  4 ;~ 229A:065E
cs=0x229a;eip=0x00065e; 	X(PUSH(bp));	// 75345 push    bp ;~ 229A:065E
cs=0x229a;eip=0x00065f; 	T(MOV(bp, sp));	// 75346 mov     bp, sp ;~ 229A:065F
cs=0x229a;eip=0x000661; 	T(SUB(sp, 0x50));	// 75347 sub     sp, 50h ;~ 229A:0661
cs=0x229a;eip=0x000664; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75348 push    [bp+arg_0] ;~ 229A:0664
cs=0x229a;eip=0x000667; 	T(MOV(ax, 0x242A));	// 75349 mov     ax, 242Ah ;~ 229A:0667
cs=0x229a;eip=0x00066a; 	X(PUSH(ax));	// 75350 push    ax ;~ 229A:066A
cs=0x229a;eip=0x00066b; 	T(ax = bp+var_50);	// 75351 lea     ax, [bp+var_50] ;~ 229A:066B
cs=0x229a;eip=0x00066e; 	X(PUSH(ax));	// 75352 push    ax ;~ 229A:066E
cs=0x229a;eip=0x00066f; 	R(CALLF(sub_2f1d9,0));	// 75353 call    sub_2F1D9 ;~ 229A:066F
cs=0x229a;eip=0x000674; 	T(ADD(sp, 6));	// 75354 add     sp, 6 ;~ 229A:0674
cs=0x229a;eip=0x000677; 	T(ax = bp+var_50);	// 75355 lea     ax, [bp+var_50] ;~ 229A:0677
cs=0x229a;eip=0x00067a; 	X(PUSH(ax));	// 75356 push    ax ;~ 229A:067A
cs=0x229a;eip=0x00067b; 	R(CALL(sub_3147a,0));	// 75357 call    sub_3147A ;~ 229A:067B
cs=0x229a;eip=0x00067e; 	R(CALLF(sub_2eee2,0));	// 75358 call    sub_2EEE2 ;~ 229A:067E
cs=0x229a;eip=0x000683; 	T(SUB(ax, ax));	// 75359 sub     ax, ax ;~ 229A:0683
cs=0x229a;eip=0x000685; 	X(PUSH(ax));	// 75360 push    ax ;~ 229A:0685
cs=0x229a;eip=0x000686; 	R(CALLF(sub_2f7e0,0));	// 75361 call    sub_2F7E0 ;~ 229A:0686
sub_31643:
	// 75404 
#undef var_4
#define var_4 -4
	// 75407 var_4           = word ptr -4 ;~ 229A:06C3
#undef var_2
#define var_2 -2
	// 75408 var_2           = word ptr -2 ;~ 229A:06C3
#undef arg_0
#define arg_0 6
	// 75409 arg_0           = word ptr  6 ;~ 229A:06C3
#undef arg_2
#define arg_2 8
	// 75410 arg_2           = word ptr  8 ;~ 229A:06C3
cs=0x229a;eip=0x0006c3; 	X(PUSH(bp));	// 75412 push    bp ;~ 229A:06C3
cs=0x229a;eip=0x0006c4; 	T(MOV(bp, sp));	// 75413 mov     bp, sp ;~ 229A:06C4
cs=0x229a;eip=0x0006c6; 	T(SUB(sp, 4));	// 75414 sub     sp, 4 ;~ 229A:06C6
cs=0x229a;eip=0x0006c9; 	X(PUSH(di));	// 75415 push    di ;~ 229A:06C9
cs=0x229a;eip=0x0006ca; 	X(PUSH(si));	// 75416 push    si ;~ 229A:06CA
cs=0x229a;eip=0x0006cb; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 75417 mov     di, [bp+arg_0] ;~ 229A:06CB
cs=0x229a;eip=0x0006ce; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 75418 mov     si, [bp+arg_2] ;~ 229A:06CE
cs=0x229a;eip=0x0006d1; 	R(JMP(loc_31657));	// 75419 jmp     short loc_31657 ;~ 229A:06D1
loc_31653:
	// 9222 
cs=0x229a;eip=0x0006d3; 	X(PUSH(si));	// 75423 push    si ;~ 229A:06D3
cs=0x229a;eip=0x0006d4; 	R(CALL(sub_315de,0));	// 75424 call    sub_315DE ;~ 229A:06D4
loc_31657:
	// 9223 
cs=0x229a;eip=0x0006d7; 	X(PUSH(si));	// 75428 push    si ;~ 229A:06D7
cs=0x229a;eip=0x0006d8; 	X(PUSH(di));	// 75429 push    di ;~ 229A:06D8
cs=0x229a;eip=0x0006d9; 	R(CALLF(sub_3e595,0));	// 75430 call    sub_3E595 ;~ 229A:06D9
cs=0x229a;eip=0x0006de; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 75431 mov     [bp+var_4], ax ;~ 229A:06DE
cs=0x229a;eip=0x0006e1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 75432 mov     [bp+var_2], dx ;~ 229A:06E1
cs=0x229a;eip=0x0006e4; 	T(OR(dx, ax));	// 75433 or      dx, ax ;~ 229A:06E4
cs=0x229a;eip=0x0006e6; 	R(JZ(loc_31653));	// 75434 jz      short loc_31653 ;~ 229A:06E6
cs=0x229a;eip=0x0006e8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 75435 mov     dx, [bp+var_2] ;~ 229A:06E8
cs=0x229a;eip=0x0006eb; 	X(POP(si));	// 75436 pop     si ;~ 229A:06EB
cs=0x229a;eip=0x0006ec; 	X(POP(di));	// 75437 pop     di ;~ 229A:06EC
cs=0x229a;eip=0x0006ed; 	T(MOV(sp, bp));	// 75438 mov     sp, bp ;~ 229A:06ED
cs=0x229a;eip=0x0006ef; 	X(POP(bp));	// 75439 pop     bp ;~ 229A:06EF
cs=0x229a;eip=0x0006f0; 	R(RETF(4));	// 75440 retf    4 ;~ 229A:06F0
sub_31673:
	// 75448 
#undef arg_0
#define arg_0 6
	// 75451 arg_0           = word ptr  6 ;~ 229A:06F3
#undef arg_2
#define arg_2 8
	// 75452 arg_2           = word ptr  8 ;~ 229A:06F3
cs=0x229a;eip=0x0006f3; 	X(PUSH(bp));	// 75454 push    bp ;~ 229A:06F3
cs=0x229a;eip=0x0006f4; 	T(MOV(bp, sp));	// 75455 mov     bp, sp ;~ 229A:06F4
cs=0x229a;eip=0x0006f6; 	X(PUSH(di));	// 75456 push    di ;~ 229A:06F6
cs=0x229a;eip=0x0006f7; 	X(PUSH(si));	// 75457 push    si ;~ 229A:06F7
cs=0x229a;eip=0x0006f8; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 75458 mov     di, [bp+arg_0] ;~ 229A:06F8
cs=0x229a;eip=0x0006fb; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 75459 mov     si, [bp+arg_2] ;~ 229A:06FB
cs=0x229a;eip=0x0006fe; 	R(JMP(loc_31684));	// 75460 jmp     short loc_31684 ;~ 229A:06FE
loc_31680:
	// 9224 
cs=0x229a;eip=0x000700; 	X(PUSH(si));	// 75464 push    si ;~ 229A:0700
cs=0x229a;eip=0x000701; 	R(CALL(sub_315de,0));	// 75465 call    sub_315DE ;~ 229A:0701
loc_31684:
	// 9225 
cs=0x229a;eip=0x000704; 	X(PUSH(si));	// 75469 push    si ;~ 229A:0704
cs=0x229a;eip=0x000705; 	X(PUSH(di));	// 75470 push    di ;~ 229A:0705
cs=0x229a;eip=0x000706; 	R(CALLF(sub_3e7d3,0));	// 75471 call    sub_3E7D3 ;~ 229A:0706
cs=0x229a;eip=0x00070b; 	T(OR(al, al));	// 75472 or      al, al ;~ 229A:070B
cs=0x229a;eip=0x00070d; 	R(JZ(loc_31680));	// 75473 jz      short loc_31680 ;~ 229A:070D
cs=0x229a;eip=0x00070f; 	X(POP(si));	// 75474 pop     si ;~ 229A:070F
cs=0x229a;eip=0x000710; 	X(POP(di));	// 75475 pop     di ;~ 229A:0710
cs=0x229a;eip=0x000711; 	X(POP(bp));	// 75476 pop     bp ;~ 229A:0711
cs=0x229a;eip=0x000712; 	R(RETF(4));	// 75477 retf    4 ;~ 229A:0712
sub_31695:
	// 75485 
#undef arg_0
#define arg_0 6
	// 75488 arg_0           = word ptr  6 ;~ 229A:0715
#undef arg_2
#define arg_2 8
	// 75489 arg_2           = word ptr  8 ;~ 229A:0715
#undef arg_4
#define arg_4 0x0A
	// 75490 arg_4           = word ptr  0Ah ;~ 229A:0715
cs=0x229a;eip=0x000715; 	X(PUSH(bp));	// 75492 push    bp ;~ 229A:0715
cs=0x229a;eip=0x000716; 	T(MOV(bp, sp));	// 75493 mov     bp, sp ;~ 229A:0716
cs=0x229a;eip=0x000718; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 75494 push    [bp+arg_4] ;~ 229A:0718
cs=0x229a;eip=0x00071b; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 75495 push    [bp+arg_2] ;~ 229A:071B
cs=0x229a;eip=0x00071e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 75496 push    [bp+arg_0] ;~ 229A:071E
cs=0x229a;eip=0x000721; 	R(CALLF(sub_23696,0));	// 75497 call    sub_23696 ;~ 229A:0721
cs=0x229a;eip=0x000726; 	T(OR(al, al));	// 75498 or      al, al ;~ 229A:0726
cs=0x229a;eip=0x000728; 	R(JNZ(loc_316ae));	// 75499 jnz     short loc_316AE ;~ 229A:0728
cs=0x229a;eip=0x00072a; 	X(PUSH(cs));	// 75500 push    cs ;~ 229A:072A
cs=0x229a;eip=0x00072b; 	R(CALL(sub_315c9,0));	// 75501 call    near ptr sub_315C9 ;~ 229A:072B
loc_316ae:
	// 9226 
cs=0x229a;eip=0x00072e; 	X(POP(bp));	// 75505 pop     bp ;~ 229A:072E
cs=0x229a;eip=0x00072f; 	R(RETF(6));	// 75506 retf    6 ;~ 229A:072F
sub_316b2:
	// 75514 
#undef var_50
#define var_50 -0x50
	// 75517 var_50          = byte ptr -50h ;~ 229A:0732
#undef arg_0
#define arg_0 6
	// 75518 arg_0           = word ptr  6 ;~ 229A:0732
#undef arg_2
#define arg_2 8
	// 75519 arg_2           = word ptr  8 ;~ 229A:0732
cs=0x229a;eip=0x000732; 	X(PUSH(bp));	// 75521 push    bp ;~ 229A:0732
cs=0x229a;eip=0x000733; 	T(MOV(bp, sp));	// 75522 mov     bp, sp ;~ 229A:0733
cs=0x229a;eip=0x000735; 	T(SUB(sp, 0x50));	// 75523 sub     sp, 50h ;~ 229A:0735
cs=0x229a;eip=0x000738; 	X(PUSH(di));	// 75524 push    di ;~ 229A:0738
cs=0x229a;eip=0x000739; 	X(PUSH(si));	// 75525 push    si ;~ 229A:0739
cs=0x229a;eip=0x00073a; 	T(si = bp+var_50);	// 75526 lea     si, [bp+var_50] ;~ 229A:073A
cs=0x229a;eip=0x00073d; 	X(PUSH(ds));	// 75527 push    ds ;~ 229A:073D
cs=0x229a;eip=0x00073e; 	X(POP(es));	// 75528 pop     es ;~ 229A:073E
cs=0x229a;eip=0x00073f; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 75529 mov     di, [bp+arg_2] ;~ 229A:073F
cs=0x229a;eip=0x000742; 	T(MOV(cx, 0x0FFFF));	// 75530 mov     cx, 0FFFFh ;~ 229A:0742
cs=0x229a;eip=0x000745; 	T(XOR(ax, ax));	// 75531 xor     ax, ax ;~ 229A:0745
	// 75532 repne scasb ;~ 229A:0747
cs=0x229a;eip=0x000747; 	T(	REPNE SCASB);	// 75532 repne scasb ;~ 229A:0747
cs=0x229a;eip=0x000749; 	T(NOT(cx));	// 75533 not     cx ;~ 229A:0749
cs=0x229a;eip=0x00074b; 	T(SUB(di, cx));	// 75534 sub     di, cx ;~ 229A:074B
cs=0x229a;eip=0x00074d; 	T(XCHG(di, si));	// 75535 xchg    di, si ;~ 229A:074D
cs=0x229a;eip=0x00074f; 	T(SHR(cx, 1));	// 75536 shr     cx, 1 ;~ 229A:074F
	// 75537 repne movsw ;~ 229A:0751
cs=0x229a;eip=0x000751; 	X(	REPNE MOVSW);	// 75537 repne movsw ;~ 229A:0751
cs=0x229a;eip=0x000753; 	T(ADC(cx, cx));	// 75538 adc     cx, cx ;~ 229A:0753
	// 75539 repne movsb ;~ 229A:0755
cs=0x229a;eip=0x000755; 	X(	REPNE MOVSB);	// 75539 repne movsb ;~ 229A:0755
cs=0x229a;eip=0x000757; 	T(CMP(*(dw*)((&unk_47b2e)), 4));	// 75540 cmp     word ptr unk_47B2E, 4 ;~ 229A:0757
cs=0x229a;eip=0x00075c; 	R(JNZ(loc_31705));	// 75541 jnz     short loc_31705 ;~ 229A:075C
cs=0x229a;eip=0x00075e; 	T(MOV(di, 0x2466));	// 75542 mov     di, 2466h ;~ 229A:075E
cs=0x229a;eip=0x000761; 	T(si = bp+var_50);	// 75543 lea     si, [bp+var_50] ;~ 229A:0761
cs=0x229a;eip=0x000764; 	T(MOV(ax, ds));	// 75544 mov     ax, ds ;~ 229A:0764
cs=0x229a;eip=0x000766; 	T(MOV(cx, 0x0FFFF));	// 75545 mov     cx, 0FFFFh ;~ 229A:0766
cs=0x229a;eip=0x000769; 	T(XOR(ax, ax));	// 75546 xor     ax, ax ;~ 229A:0769
	// 75547 repne scasb ;~ 229A:076B
cs=0x229a;eip=0x00076b; 	T(	REPNE SCASB);	// 75547 repne scasb ;~ 229A:076B
cs=0x229a;eip=0x00076d; 	T(NOT(cx));	// 75548 not     cx ;~ 229A:076D
cs=0x229a;eip=0x00076f; 	T(SUB(di, cx));	// 75549 sub     di, cx ;~ 229A:076F
cs=0x229a;eip=0x000771; 	T(MOV(bx, cx));	// 75550 mov     bx, cx ;~ 229A:0771
cs=0x229a;eip=0x000773; 	T(XCHG(di, si));	// 75551 xchg    di, si ;~ 229A:0773
cs=0x229a;eip=0x000775; 	T(MOV(cx, 0x0FFFF));	// 75552 mov     cx, 0FFFFh ;~ 229A:0775
	// 75553 repne scasb ;~ 229A:0778
cs=0x229a;eip=0x000778; 	T(	REPNE SCASB);	// 75553 repne scasb ;~ 229A:0778
cs=0x229a;eip=0x00077a; 	T(DEC(di));	// 75554 dec     di ;~ 229A:077A
cs=0x229a;eip=0x00077b; 	T(MOV(cx, bx));	// 75555 mov     cx, bx ;~ 229A:077B
cs=0x229a;eip=0x00077d; 	T(SHR(cx, 1));	// 75556 shr     cx, 1 ;~ 229A:077D
	// 75557 repne movsw ;~ 229A:077F
cs=0x229a;eip=0x00077f; 	X(	REPNE MOVSW);	// 75557 repne movsw ;~ 229A:077F
cs=0x229a;eip=0x000781; 	T(ADC(cx, cx));	// 75558 adc     cx, cx ;~ 229A:0781
	// 75559 repne movsb ;~ 229A:0783
cs=0x229a;eip=0x000783; 	X(	REPNE MOVSB);	// 75559 repne movsb ;~ 229A:0783
loc_31705:
	// 9227 
cs=0x229a;eip=0x000785; 	T(MOV(di, 0x2468));	// 75562 mov     di, 2468h ;~ 229A:0785
cs=0x229a;eip=0x000788; 	T(si = bp+var_50);	// 75563 lea     si, [bp+var_50] ;~ 229A:0788
cs=0x229a;eip=0x00078b; 	T(MOV(ax, ds));	// 75564 mov     ax, ds ;~ 229A:078B
cs=0x229a;eip=0x00078d; 	T(MOV(cx, 0x0FFFF));	// 75565 mov     cx, 0FFFFh ;~ 229A:078D
cs=0x229a;eip=0x000790; 	T(XOR(ax, ax));	// 75566 xor     ax, ax ;~ 229A:0790
	// 75567 repne scasb ;~ 229A:0792
cs=0x229a;eip=0x000792; 	T(	REPNE SCASB);	// 75567 repne scasb ;~ 229A:0792
cs=0x229a;eip=0x000794; 	T(NOT(cx));	// 75568 not     cx ;~ 229A:0794
cs=0x229a;eip=0x000796; 	T(SUB(di, cx));	// 75569 sub     di, cx ;~ 229A:0796
cs=0x229a;eip=0x000798; 	T(MOV(bx, cx));	// 75570 mov     bx, cx ;~ 229A:0798
cs=0x229a;eip=0x00079a; 	T(XCHG(di, si));	// 75571 xchg    di, si ;~ 229A:079A
cs=0x229a;eip=0x00079c; 	T(MOV(cx, 0x0FFFF));	// 75572 mov     cx, 0FFFFh ;~ 229A:079C
	// 75573 repne scasb ;~ 229A:079F
cs=0x229a;eip=0x00079f; 	T(	REPNE SCASB);	// 75573 repne scasb ;~ 229A:079F
cs=0x229a;eip=0x0007a1; 	T(DEC(di));	// 75574 dec     di ;~ 229A:07A1
cs=0x229a;eip=0x0007a2; 	T(MOV(cx, bx));	// 75575 mov     cx, bx ;~ 229A:07A2
cs=0x229a;eip=0x0007a4; 	T(SHR(cx, 1));	// 75576 shr     cx, 1 ;~ 229A:07A4
	// 75577 repne movsw ;~ 229A:07A6
cs=0x229a;eip=0x0007a6; 	X(	REPNE MOVSW);	// 75577 repne movsw ;~ 229A:07A6
cs=0x229a;eip=0x0007a8; 	T(ADC(cx, cx));	// 75578 adc     cx, cx ;~ 229A:07A8
	// 75579 repne movsb ;~ 229A:07AA
cs=0x229a;eip=0x0007aa; 	X(	REPNE MOVSB);	// 75579 repne movsb ;~ 229A:07AA
cs=0x229a;eip=0x0007ac; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 75580 mov     si, [bp+arg_0] ;~ 229A:07AC
cs=0x229a;eip=0x0007af; 	R(JMP(loc_31738));	// 75581 jmp     short loc_31738 ;~ 229A:07AF
loc_31731:
	// 9228 
cs=0x229a;eip=0x0007b1; 	T(ax = bp+var_50);	// 75585 lea     ax, [bp+var_50] ;~ 229A:07B1
cs=0x229a;eip=0x0007b4; 	X(PUSH(ax));	// 75586 push    ax ;~ 229A:07B4
cs=0x229a;eip=0x0007b5; 	R(CALL(sub_315de,0));	// 75587 call    sub_315DE ;~ 229A:07B5
loc_31738:
	// 9229 
cs=0x229a;eip=0x0007b8; 	T(ax = bp+var_50);	// 75591 lea     ax, [bp+var_50] ;~ 229A:07B8
cs=0x229a;eip=0x0007bb; 	X(PUSH(ax));	// 75592 push    ax ;~ 229A:07BB
cs=0x229a;eip=0x0007bc; 	X(PUSH(si));	// 75593 push    si ;~ 229A:07BC
cs=0x229a;eip=0x0007bd; 	R(CALLF(sub_3e7d3,0));	// 75594 call    sub_3E7D3 ;~ 229A:07BD
cs=0x229a;eip=0x0007c2; 	T(OR(al, al));	// 75595 or      al, al ;~ 229A:07C2
cs=0x229a;eip=0x0007c4; 	R(JZ(loc_31731));	// 75596 jz      short loc_31731 ;~ 229A:07C4
cs=0x229a;eip=0x0007c6; 	X(POP(si));	// 75597 pop     si ;~ 229A:07C6
cs=0x229a;eip=0x0007c7; 	X(POP(di));	// 75598 pop     di ;~ 229A:07C7
cs=0x229a;eip=0x0007c8; 	T(MOV(sp, bp));	// 75599 mov     sp, bp ;~ 229A:07C8
cs=0x229a;eip=0x0007ca; 	X(POP(bp));	// 75600 pop     bp ;~ 229A:07CA
cs=0x229a;eip=0x0007cb; 	R(RETF(4));	// 75601 retf    4 ;~ 229A:07CB
sub_3174e:
	// 75609 
#undef var_10
#define var_10 -0x10
	// 75612 var_10          = word ptr -10h ;~ 229A:07CE
#undef var_e
#define var_e -0x0E
	// 75613 var_E           = word ptr -0Eh ;~ 229A:07CE
#undef var_c
#define var_c -0x0C
	// 75614 var_C           = word ptr -0Ch ;~ 229A:07CE
#undef var_a
#define var_a -0x0A
	// 75615 var_A           = word ptr -0Ah ;~ 229A:07CE
#undef var_8
#define var_8 -8
	// 75616 var_8           = word ptr -8 ;~ 229A:07CE
#undef var_6
#define var_6 -6
	// 75617 var_6           = word ptr -6 ;~ 229A:07CE
#undef arg_0
#define arg_0 6
	// 75618 arg_0           = word ptr  6 ;~ 229A:07CE
#undef arg_2
#define arg_2 8
	// 75619 arg_2           = word ptr  8 ;~ 229A:07CE
cs=0x229a;eip=0x0007ce; 	X(PUSH(bp));	// 75621 push    bp ;~ 229A:07CE
cs=0x229a;eip=0x0007cf; 	T(MOV(bp, sp));	// 75622 mov     bp, sp ;~ 229A:07CF
cs=0x229a;eip=0x0007d1; 	T(SUB(sp, 0x10));	// 75623 sub     sp, 10h ;~ 229A:07D1
cs=0x229a;eip=0x0007d4; 	X(PUSH(di));	// 75624 push    di ;~ 229A:07D4
cs=0x229a;eip=0x0007d5; 	X(PUSH(si));	// 75625 push    si ;~ 229A:07D5
cs=0x229a;eip=0x0007d6; 	R(CALLF(sub_203b0,0));	// 75626 call    sub_203B0 ;~ 229A:07D6
cs=0x229a;eip=0x0007db; 	T(SUB(si, si));	// 75627 sub     si, si ;~ 229A:07DB
cs=0x229a;eip=0x0007dd; 	T(SUB(di, di));	// 75628 sub     di, di ;~ 229A:07DD
cs=0x229a;eip=0x0007df; 	T(MOV(ax, 0x0A));	// 75629 mov     ax, 0Ah ;~ 229A:07DF
cs=0x229a;eip=0x0007e2; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 75630 imul    [bp+arg_0] ;~ 229A:07E2
cs=0x229a;eip=0x0007e5; 	T(ADD(ax, 0x0ED12));	// 75631 add     ax, 0ED12h ;~ 229A:07E5
cs=0x229a;eip=0x0007e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 75632 mov     [bp+var_6], ax ;~ 229A:07E8
cs=0x229a;eip=0x0007eb; 	T(MOV(ax, 0x0A));	// 75633 mov     ax, 0Ah ;~ 229A:07EB
cs=0x229a;eip=0x0007ee; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+arg_2))));	// 75634 imul    [bp+arg_2] ;~ 229A:07EE
cs=0x229a;eip=0x0007f1; 	T(ADD(ax, 0x0ED12));	// 75635 add     ax, 0ED12h ;~ 229A:07F1
cs=0x229a;eip=0x0007f4; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 75636 mov     [bp+var_8], ax ;~ 229A:07F4
cs=0x229a;eip=0x0007f7; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), si));	// 75637 mov     [bp+var_A], si ;~ 229A:07F7
cs=0x229a;eip=0x0007fa; 	T(MOV(ax, si));	// 75638 mov     ax, si ;~ 229A:07FA
cs=0x229a;eip=0x0007fc; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 75639 mov     [bp+var_C], ax ;~ 229A:07FC
loc_3177f:
	// 9230 
cs=0x229a;eip=0x0007ff; 	T(MOV(ax, 0x64));	// 75642 mov     ax, 64h ; 'd' ;~ 229A:07FF
cs=0x229a;eip=0x000802; 	T(SUB(ax, di));	// 75643 sub     ax, di ;~ 229A:0802
cs=0x229a;eip=0x000804; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 75644 mov     [bp+var_E], ax ;~ 229A:0804
cs=0x229a;eip=0x000807; 	T(MOV(ax, 0x0A0));	// 75645 mov     ax, 0A0h ; ' ' ;~ 229A:0807
cs=0x229a;eip=0x00080a; 	T(SUB(ax, si));	// 75646 sub     ax, si ;~ 229A:080A
cs=0x229a;eip=0x00080c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 75647 mov     [bp+var_10], ax ;~ 229A:080C
cs=0x229a;eip=0x00080f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 75648 push    [bp+var_8] ;~ 229A:080F
cs=0x229a;eip=0x000812; 	X(PUSH(ax));	// 75649 push    ax ;~ 229A:0812
cs=0x229a;eip=0x000813; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 75650 push    [bp+var_E] ;~ 229A:0813
cs=0x229a;eip=0x000816; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 75651 push    [bp+var_6] ;~ 229A:0816
cs=0x229a;eip=0x000819; 	X(PUSH(ax));	// 75652 push    ax ;~ 229A:0819
cs=0x229a;eip=0x00081a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 75653 push    [bp+var_E] ;~ 229A:081A
cs=0x229a;eip=0x00081d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 75654 push    [bp+var_A] ;~ 229A:081D
cs=0x229a;eip=0x000820; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 75655 push    [bp+var_C] ;~ 229A:0820
cs=0x229a;eip=0x000823; 	R(CALLF(sub_2c4d3,0));	// 75656 call    sub_2C4D3 ;~ 229A:0823
cs=0x229a;eip=0x000828; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x20));	// 75657 add     [bp+var_A], 20h ; ' ' ;~ 229A:0828
cs=0x229a;eip=0x00082c; 	T(ADD(si, 0x10));	// 75658 add     si, 10h ;~ 229A:082C
cs=0x229a;eip=0x00082f; 	X(ADD(*(dw*)(raddr(ss,bp+var_c)), 0x14));	// 75659 add     [bp+var_C], 14h ;~ 229A:082F
cs=0x229a;eip=0x000833; 	T(ADD(di, 0x0A));	// 75660 add     di, 0Ah ;~ 229A:0833
cs=0x229a;eip=0x000836; 	T(CMP(si, 0x0A0));	// 75661 cmp     si, 0A0h ; ' ' ;~ 229A:0836
cs=0x229a;eip=0x00083a; 	R(JLE(loc_3177f));	// 75662 jle     short loc_3177F ;~ 229A:083A
cs=0x229a;eip=0x00083c; 	X(POP(si));	// 75663 pop     si ;~ 229A:083C
cs=0x229a;eip=0x00083d; 	X(POP(di));	// 75664 pop     di ;~ 229A:083D
cs=0x229a;eip=0x00083e; 	T(MOV(sp, bp));	// 75665 mov     sp, bp ;~ 229A:083E
cs=0x229a;eip=0x000840; 	X(POP(bp));	// 75666 pop     bp ;~ 229A:0840
cs=0x229a;eip=0x000841; 	R(RETF(4));	// 75667 retf    4 ;~ 229A:0841
sub_31828:
	// 75722 
#undef arg_0
#define arg_0 6
	// 75725 arg_0           = byte ptr  6 ;~ 229A:08A8
cs=0x229a;eip=0x0008a8; 	X(PUSH(bp));	// 75727 push    bp ;~ 229A:08A8
cs=0x229a;eip=0x0008a9; 	T(MOV(bp, sp));	// 75728 mov     bp, sp ;~ 229A:08A9
cs=0x229a;eip=0x0008ab; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 75729 mov     al, [bp+arg_0] ;~ 229A:08AB
cs=0x229a;eip=0x0008ae; 	X(MOV(unk_57041, al));	// 75730 mov     byte ptr unk_57041, al ;~ 229A:08AE
cs=0x229a;eip=0x0008b1; 	T(CMP(al, 1));	// 75731 cmp     al, 1 ;~ 229A:08B1
cs=0x229a;eip=0x0008b3; 	R(JC(loc_3183a));	// 75732 jb      short loc_3183A ;~ 229A:08B3
cs=0x229a;eip=0x0008b5; 	T(MOV(ax, 1));	// 75733 mov     ax, 1 ;~ 229A:08B5
cs=0x229a;eip=0x0008b8; 	R(JMP(loc_3183c));	// 75734 jmp     short loc_3183C ;~ 229A:08B8
loc_3183a:
	// 9234 
cs=0x229a;eip=0x0008ba; 	T(SUB(ax, ax));	// 75738 sub     ax, ax ;~ 229A:08BA
loc_3183c:
	// 9235 
cs=0x229a;eip=0x0008bc; 	X(PUSH(ax));	// 75741 push    ax ;~ 229A:08BC
cs=0x229a;eip=0x0008bd; 	R(CALLF(sub_3e1d3,0));	// 75742 call    sub_3E1D3 ;~ 229A:08BD
cs=0x229a;eip=0x0008c2; 	T(CMP(*(dw*)((&unk_47a9a)), 0));	// 75743 cmp     word ptr unk_47A9A, 0 ;~ 229A:08C2
cs=0x229a;eip=0x0008c7; 	R(JZ(loc_3185a));	// 75744 jz      short loc_3185A ;~ 229A:08C7
cs=0x229a;eip=0x0008c9; 	T(MOV(ax, 0x0E0));	// 75745 mov     ax, 0E0h ; 'à' ;~ 229A:08C9
cs=0x229a;eip=0x0008cc; 	X(PUSH(ax));	// 75746 push    ax ;~ 229A:08CC
cs=0x229a;eip=0x0008cd; 	T(MOV(ax, 0x844));	// 75747 mov     ax, 844h ;~ 229A:08CD
cs=0x229a;eip=0x0008d0; 	T(MOV(dx, seg_offset(seg020)));	// 75748 mov     dx, seg seg020 ;~ 229A:08D0
cs=0x229a;eip=0x0008d3; 	X(PUSH(dx));	// 75749 push    dx ;~ 229A:08D3
cs=0x229a;eip=0x0008d4; 	X(PUSH(ax));	// 75750 push    ax ;~ 229A:08D4
cs=0x229a;eip=0x0008d5; 	R(CALLF(sub_25b35,0));	// 75751 call    sub_25B35 ;~ 229A:08D5
loc_3185a:
	// 9236 
cs=0x229a;eip=0x0008da; 	X(POP(bp));	// 75754 pop     bp ;~ 229A:08DA
cs=0x229a;eip=0x0008db; 	R(RETF(0));	// 75755 retf ;~ 229A:08DB
sub_3185c:
	// 75763 
#undef arg_0
#define arg_0 6
	// 75766 arg_0           = byte ptr  6 ;~ 229A:08DC
cs=0x229a;eip=0x0008dc; 	X(PUSH(bp));	// 75768 push    bp ;~ 229A:08DC
cs=0x229a;eip=0x0008dd; 	T(MOV(bp, sp));	// 75769 mov     bp, sp ;~ 229A:08DD
cs=0x229a;eip=0x0008df; 	R(CALLF(sub_3e3be,0));	// 75770 call    sub_3E3BE ;~ 229A:08DF
cs=0x229a;eip=0x0008e4; 	T(CMP(*(raddr(ss,bp+arg_0)), 1));	// 75771 cmp     [bp+arg_0], 1 ;~ 229A:08E4
cs=0x229a;eip=0x0008e8; 	R(JNZ(loc_31873));	// 75772 jnz     short loc_31873 ;~ 229A:08E8
cs=0x229a;eip=0x0008ea; 	R(CALLF(sub_2f60c,0));	// 75773 call    sub_2F60C ;~ 229A:08EA
cs=0x229a;eip=0x0008ef; 	T(OR(ax, ax));	// 75774 or      ax, ax ;~ 229A:08EF
cs=0x229a;eip=0x0008f1; 	R(JLE(loc_318a6));	// 75775 jle     short loc_318A6 ;~ 229A:08F1
loc_31873:
	// 9237 
cs=0x229a;eip=0x0008f3; 	T(CMP(*(raddr(ss,bp+arg_0)), 3));	// 75778 cmp     [bp+arg_0], 3 ;~ 229A:08F3
cs=0x229a;eip=0x0008f7; 	R(JC(loc_3188b));	// 75779 jb      short loc_3188B ;~ 229A:08F7
cs=0x229a;eip=0x0008f9; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 75780 mov     al, [bp+arg_0] ;~ 229A:08F9
cs=0x229a;eip=0x0008fc; 	T(SUB(ah, ah));	// 75781 sub     ah, ah ;~ 229A:08FC
cs=0x229a;eip=0x0008fe; 	X(PUSH(ax));	// 75782 push    ax ;~ 229A:08FE
cs=0x229a;eip=0x0008ff; 	R(CALLF(sub_3e2aa,0));	// 75783 call    sub_3E2AA ;~ 229A:08FF
cs=0x229a;eip=0x000904; 	T(ADD(sp, 2));	// 75784 add     sp, 2 ;~ 229A:0904
cs=0x229a;eip=0x000907; 	T(OR(ax, ax));	// 75785 or      ax, ax ;~ 229A:0907
cs=0x229a;eip=0x000909; 	R(JZ(loc_318a6));	// 75786 jz      short loc_318A6 ;~ 229A:0909
loc_3188b:
	// 9238 
cs=0x229a;eip=0x00090b; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 75789 mov     al, [bp+arg_0] ;~ 229A:090B
cs=0x229a;eip=0x00090e; 	X(MOV(unk_55204, al));	// 75790 mov     byte ptr unk_55204, al ;~ 229A:090E
cs=0x229a;eip=0x000911; 	T(SUB(ax, ax));	// 75791 sub     ax, ax ;~ 229A:0911
cs=0x229a;eip=0x000913; 	X(MOV(*(dw*)((&unk_56488)), ax));	// 75792 mov     word ptr unk_56488, ax ;~ 229A:0913
cs=0x229a;eip=0x000916; 	X(MOV(*(dw*)((&unk_56486)), ax));	// 75793 mov     word ptr unk_56486, ax ;~ 229A:0916
cs=0x229a;eip=0x000919; 	X(MOV(unk_56492, 0));	// 75794 mov     byte ptr unk_56492, 0 ;~ 229A:0919
cs=0x229a;eip=0x00091e; 	T(SUB(al, al));	// 75795 sub     al, al ;~ 229A:091E
cs=0x229a;eip=0x000920; 	X(MOV(unk_47ab5, al));	// 75796 mov     byte ptr unk_47AB5, al ;~ 229A:0920
cs=0x229a;eip=0x000923; 	X(MOV(unk_47ab4, al));	// 75797 mov     byte ptr unk_47AB4, al ;~ 229A:0923
loc_318a6:
	// 9239 
cs=0x229a;eip=0x000926; 	X(POP(bp));	// 75801 pop     bp ;~ 229A:0926
cs=0x229a;eip=0x000927; 	R(RETF(0));	// 75802 retf ;~ 229A:0927
sub_318a8:
	// 75810 
cs=0x229a;eip=0x000928; 	R(CALLF(sub_3d819,0));	// 75811 call    sub_3D819 ;~ 229A:0928
cs=0x229a;eip=0x00092d; 	T(SUB(ax, ax));	// 75812 sub     ax, ax ;~ 229A:092D
cs=0x229a;eip=0x00092f; 	X(PUSH(ax));	// 75813 push    ax ;~ 229A:092F
cs=0x229a;eip=0x000930; 	R(CALLF(sub_2f7e0,0));	// 75814 call    sub_2F7E0 ;~ 229A:0930
sub_318b6:
	// 75824 
cs=0x229a;eip=0x000936; 	X(PUSH(bp));	// 75826 push    bp ;~ 229A:0936
cs=0x229a;eip=0x000937; 	T(MOV(bp, sp));	// 75827 mov     bp, sp ;~ 229A:0937
cs=0x229a;eip=0x000939; 	T(SUB(sp, 2));	// 75828 sub     sp, 2 ;~ 229A:0939
cs=0x229a;eip=0x00093c; 	X(PUSH(si));	// 75829 push    si ;~ 229A:093C
cs=0x229a;eip=0x00093d; 	T(MOV(ax, 0x246D));	// 75830 mov     ax, 246Dh ;~ 229A:093D
cs=0x229a;eip=0x000940; 	X(PUSH(ax));	// 75831 push    ax ;~ 229A:0940
cs=0x229a;eip=0x000941; 	R(CALL(sub_3147a,0));	// 75832 call    sub_3147A ;~ 229A:0941
cs=0x229a;eip=0x000944; 	R(CALLF(sub_2eee2,0));	// 75833 call    sub_2EEE2 ;~ 229A:0944
cs=0x229a;eip=0x000949; 	T(MOV(si, ax));	// 75834 mov     si, ax ;~ 229A:0949
cs=0x229a;eip=0x00094b; 	X(PUSH(cs));	// 75835 push    cs ;~ 229A:094B
cs=0x229a;eip=0x00094c; 	R(CALL(sub_3142c,0));	// 75836 call    near ptr sub_3142C ;~ 229A:094C
cs=0x229a;eip=0x00094f; 	T(TEST(*(raddr(ds,si-0x3D7B)), 1));	// 75837 test    byte ptr [si-3D7Bh], 1 ;~ 229A:094F
cs=0x229a;eip=0x000954; 	R(JZ(loc_318db));	// 75838 jz      short loc_318DB ;~ 229A:0954
cs=0x229a;eip=0x000956; 	T(ax = si+0x20);	// 75839 lea     ax, [si+20h] ;~ 229A:0956
cs=0x229a;eip=0x000959; 	R(JMP(loc_318dd));	// 75840 jmp     short loc_318DD ;~ 229A:0959
loc_318db:
	// 9240 
cs=0x229a;eip=0x00095b; 	T(MOV(ax, si));	// 75844 mov     ax, si ;~ 229A:095B
loc_318dd:
	// 9241 
cs=0x229a;eip=0x00095d; 	T(CMP(ax, 0x79));	// 75847 cmp     ax, 79h ; 'y' ;~ 229A:095D
cs=0x229a;eip=0x000960; 	R(JNZ(loc_318e6));	// 75848 jnz     short loc_318E6 ;~ 229A:0960
cs=0x229a;eip=0x000962; 	X(PUSH(cs));	// 75849 push    cs ;~ 229A:0962
cs=0x229a;eip=0x000963; 	R(CALL(sub_318a8,0));	// 75850 call    near ptr sub_318A8 ;~ 229A:0963
loc_318e6:
	// 9242 
cs=0x229a;eip=0x000966; 	R(CALLF(sub_1bc9c,0));	// 75854 call    sub_1BC9C ;~ 229A:0966
cs=0x229a;eip=0x00096b; 	X(POP(si));	// 75855 pop     si ;~ 229A:096B
cs=0x229a;eip=0x00096c; 	T(MOV(sp, bp));	// 75856 mov     sp, bp ;~ 229A:096C
cs=0x229a;eip=0x00096e; 	X(POP(bp));	// 75857 pop     bp ;~ 229A:096E
cs=0x229a;eip=0x00096f; 	R(RETF(0));	// 75858 retf ;~ 229A:096F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_30f9b: 	goto loc_30f9b;
        case m2c::kloc_30f9e: 	goto loc_30f9e;
        case m2c::kloc_30fdb: 	goto loc_30fdb;
        case m2c::kloc_30fe7: 	goto loc_30fe7;
        case m2c::kloc_30fed: 	goto loc_30fed;
        case m2c::kloc_3108e: 	goto loc_3108e;
        case m2c::kloc_31092: 	goto loc_31092;
        case m2c::kloc_310d6: 	goto loc_310d6;
        case m2c::kloc_310eb: 	goto loc_310eb;
        case m2c::kloc_31158: 	goto loc_31158;
        case m2c::kloc_3117e: 	goto loc_3117e;
        case m2c::kloc_31181: 	goto loc_31181;
        case m2c::kloc_311e4: 	goto loc_311e4;
        case m2c::kloc_311ef: 	goto loc_311ef;
        case m2c::kloc_311f2: 	goto loc_311f2;
        case m2c::kloc_311fb: 	goto loc_311fb;
        case m2c::kloc_31200: 	goto loc_31200;
        case m2c::kloc_31205: 	goto loc_31205;
        case m2c::kloc_3120c: 	goto loc_3120c;
        case m2c::kloc_31211: 	goto loc_31211;
        case m2c::kloc_31247: 	goto loc_31247;
        case m2c::kloc_31270: 	goto loc_31270;
        case m2c::kloc_3128b: 	goto loc_3128b;
        case m2c::kloc_31298: 	goto loc_31298;
        case m2c::kloc_31509: 	goto loc_31509;
        case m2c::kloc_31528: 	goto loc_31528;
        case m2c::kloc_31552: 	goto loc_31552;
        case m2c::kloc_31566: 	goto loc_31566;
        case m2c::kloc_31576: 	goto loc_31576;
        case m2c::kloc_31590: 	goto loc_31590;
        case m2c::kloc_31621: 	goto loc_31621;
        case m2c::kloc_31625: 	goto loc_31625;
        case m2c::kloc_31653: 	goto loc_31653;
        case m2c::kloc_31657: 	goto loc_31657;
        case m2c::kloc_31680: 	goto loc_31680;
        case m2c::kloc_31684: 	goto loc_31684;
        case m2c::kloc_316ae: 	goto loc_316ae;
        case m2c::kloc_31705: 	goto loc_31705;
        case m2c::kloc_31731: 	goto loc_31731;
        case m2c::kloc_31738: 	goto loc_31738;
        case m2c::kloc_3177f: 	goto loc_3177f;
        case m2c::kloc_3180d: 	goto loc_3180d;
        case m2c::kloc_3181b: 	goto loc_3181b;
        case m2c::kloc_31823: 	goto loc_31823;
        case m2c::kloc_3183a: 	goto loc_3183a;
        case m2c::kloc_3183c: 	goto loc_3183c;
        case m2c::kloc_3185a: 	goto loc_3185a;
        case m2c::kloc_31873: 	goto loc_31873;
        case m2c::kloc_3188b: 	goto loc_3188b;
        case m2c::kloc_318a6: 	goto loc_318a6;
        case m2c::kloc_318db: 	goto loc_318db;
        case m2c::kloc_318dd: 	goto loc_318dd;
        case m2c::kloc_318e6: 	goto loc_318e6;
        case m2c::klocret_3103b: 	goto locret_3103b;
        case m2c::klocret_31340: 	goto locret_31340;
        case m2c::knullsub_13: 	goto nullsub_13;
        case m2c::kret_229a_691: 	goto ret_229a_691;
        case m2c::kseg020_proc: 	goto seg020_proc;
        case m2c::ksub_30f84: 	goto sub_30f84;
        case m2c::ksub_30ffa: 	goto sub_30ffa;
        case m2c::ksub_3101f: 	goto sub_3101f;
        case m2c::ksub_3102a: 	goto sub_3102a;
        case m2c::ksub_3103c: 	goto sub_3103c;
        case m2c::ksub_311d0: 	goto sub_311d0;
        case m2c::ksub_31219: 	goto sub_31219;
        case m2c::ksub_3123e: 	goto sub_3123e;
        case m2c::ksub_312c7: 	goto sub_312c7;
        case m2c::ksub_312e1: 	goto sub_312e1;
        case m2c::ksub_3130f: 	goto sub_3130f;
        case m2c::ksub_31341: 	goto sub_31341;
        case m2c::ksub_3134f: 	goto sub_3134f;
        case m2c::ksub_31385: 	goto sub_31385;
        case m2c::ksub_3142c: 	goto sub_3142c;
        case m2c::ksub_3147a: 	goto sub_3147a;
        case m2c::ksub_314da: 	goto sub_314da;
        case m2c::ksub_314eb: 	goto sub_314eb;
        case m2c::ksub_314f5: 	goto sub_314f5;
        case m2c::ksub_31596: 	goto sub_31596;
        case m2c::ksub_315c9: 	goto sub_315c9;
        case m2c::ksub_315de: 	goto sub_315de;
        case m2c::ksub_31643: 	goto sub_31643;
        case m2c::ksub_31673: 	goto sub_31673;
        case m2c::ksub_31695: 	goto sub_31695;
        case m2c::ksub_316b2: 	goto sub_316b2;
        case m2c::ksub_3174e: 	goto sub_3174e;
        case m2c::ksub_31828: 	goto sub_31828;
        case m2c::ksub_3185c: 	goto sub_3185c;
        case m2c::ksub_318a8: 	goto sub_318a8;
        case m2c::ksub_318b6: 	goto sub_318b6;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

