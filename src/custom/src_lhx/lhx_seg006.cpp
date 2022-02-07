/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group6:
    _begin:
sub_2e4b0:
	// 67502 
#undef arg_0
#define arg_0 6
	// 67505 arg_0           = word ptr  6 ;~ 1FED:0000
#undef arg_2
#define arg_2 8
	// 67506 arg_2           = word ptr  8 ;~ 1FED:0000
#undef arg_4
#define arg_4 0x0A
	// 67507 arg_4           = word ptr  0Ah ;~ 1FED:0000
cs=0x1fed;eip=0x000000; 	X(PUSH(bp));	// 67509 push    bp ;~ 1FED:0000
cs=0x1fed;eip=0x000001; 	T(MOV(bp, sp));	// 67510 mov     bp, sp ;~ 1FED:0001
cs=0x1fed;eip=0x000003; 	X(PUSH(si));	// 67511 push    si ;~ 1FED:0003
cs=0x1fed;eip=0x000004; 	X(PUSH(di));	// 67512 push    di ;~ 1FED:0004
cs=0x1fed;eip=0x000005; 	T(LES(si, *(dd*)((&unk_5688e))));	// 67513 les     si, dword ptr unk_5688E ;~ 1FED:0005
cs=0x1fed;eip=0x000009; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 67514 mov     bx, [bp+arg_0] ;~ 1FED:0009
cs=0x1fed;eip=0x00000c; 	T(SHL(bx, 1));	// 67515 shl     bx, 1 ;~ 1FED:000C
cs=0x1fed;eip=0x00000e; 	T(MOV(ax, *(dw*)(raddr(es,bx+si+0x1C))));	// 67516 mov     ax, es:[bx+si+1Ch] ;~ 1FED:000E
cs=0x1fed;eip=0x000012; 	X(MOV(*(dw*)((&unk_48004)), ax));	// 67517 mov     word ptr unk_48004, ax ;~ 1FED:0012
cs=0x1fed;eip=0x000015; 	T(MOV(ax, *(dw*)(raddr(es,bx+si+0x1E))));	// 67518 mov     ax, es:[bx+si+1Eh] ;~ 1FED:0015
cs=0x1fed;eip=0x000019; 	T(DEC(ax));	// 67519 dec     ax ;~ 1FED:0019
cs=0x1fed;eip=0x00001a; 	X(MOV(*(dw*)((&unk_48006)), ax));	// 67520 mov     word ptr unk_48006, ax ;~ 1FED:001A
cs=0x1fed;eip=0x00001d; 	T(MOV(ax, *(dw*)(raddr(es,si+0x1A))));	// 67521 mov     ax, es:[si+1Ah] ;~ 1FED:001D
cs=0x1fed;eip=0x000021; 	X(MOV(*(dw*)((&unk_47ff4)), ax));	// 67522 mov     word ptr unk_47FF4, ax ;~ 1FED:0021
cs=0x1fed;eip=0x000024; 	T(MOV(ax, *(dw*)(raddr(es,si+0x14))));	// 67523 mov     ax, es:[si+14h] ;~ 1FED:0024
cs=0x1fed;eip=0x000028; 	X(MOV(*(dw*)((&unk_47ff0)), ax));	// 67524 mov     word ptr unk_47FF0, ax ;~ 1FED:0028
cs=0x1fed;eip=0x00002b; 	T(MOV(ax, *(dw*)(raddr(es,si+0x16))));	// 67525 mov     ax, es:[si+16h] ;~ 1FED:002B
cs=0x1fed;eip=0x00002f; 	X(MOV(*(dw*)((&unk_47ff2)), ax));	// 67526 mov     word ptr unk_47FF2, ax ;~ 1FED:002F
cs=0x1fed;eip=0x000032; 	T(MOV(ax, *(dw*)((&unk_48006))));	// 67527 mov     ax, word ptr unk_48006 ;~ 1FED:0032
cs=0x1fed;eip=0x000035; 	T(SUB(ax, *(dw*)((&unk_48004))));	// 67528 sub     ax, word ptr unk_48004 ;~ 1FED:0035
cs=0x1fed;eip=0x000039; 	T(INC(ax));	// 67529 inc     ax ;~ 1FED:0039
cs=0x1fed;eip=0x00003a; 	X(MOV(*(dw*)((&unk_47fee)), ax));	// 67530 mov     word ptr unk_47FEE, ax ;~ 1FED:003A
cs=0x1fed;eip=0x00003d; 	T(OR(ax, ax));	// 67531 or      ax, ax ;~ 1FED:003D
cs=0x1fed;eip=0x00003f; 	R(JZ(loc_2e562));	// 67532 jz      short loc_2E562 ;~ 1FED:003F
cs=0x1fed;eip=0x000041; 	T(MOV(cl, 3));	// 67533 mov     cl, 3 ;~ 1FED:0041
cs=0x1fed;eip=0x000043; 	T(MOV(ax, *(dw*)((&unk_48004))));	// 67534 mov     ax, word ptr unk_48004 ;~ 1FED:0043
cs=0x1fed;eip=0x000046; 	T(SHR(ax, cl));	// 67535 shr     ax, cl ;~ 1FED:0046
cs=0x1fed;eip=0x000048; 	X(MOV(*(dw*)((&unk_47ffa)), ax));	// 67536 mov     word ptr unk_47FFA, ax ;~ 1FED:0048
cs=0x1fed;eip=0x00004b; 	T(MOV(ax, *(dw*)((&unk_48006))));	// 67537 mov     ax, word ptr unk_48006 ;~ 1FED:004B
cs=0x1fed;eip=0x00004e; 	T(SHR(ax, cl));	// 67538 shr     ax, cl ;~ 1FED:004E
cs=0x1fed;eip=0x000050; 	X(MOV(*(dw*)((&unk_47ffc)), ax));	// 67539 mov     word ptr unk_47FFC, ax ;~ 1FED:0050
cs=0x1fed;eip=0x000053; 	T(MOV(ax, *(dw*)((&unk_48004))));	// 67540 mov     ax, word ptr unk_48004 ;~ 1FED:0053
cs=0x1fed;eip=0x000056; 	T(AND(ax, 7));	// 67541 and     ax, 7 ;~ 1FED:0056
cs=0x1fed;eip=0x000059; 	X(MOV(*(dw*)((&unk_47ff6)), ax));	// 67542 mov     word ptr unk_47FF6, ax ;~ 1FED:0059
cs=0x1fed;eip=0x00005c; 	T(MOV(ax, *(dw*)((&unk_48006))));	// 67543 mov     ax, word ptr unk_48006 ;~ 1FED:005C
cs=0x1fed;eip=0x00005f; 	T(AND(ax, 7));	// 67544 and     ax, 7 ;~ 1FED:005F
cs=0x1fed;eip=0x000062; 	X(MOV(*(dw*)((&unk_47ff8)), ax));	// 67545 mov     word ptr unk_47FF8, ax ;~ 1FED:0062
cs=0x1fed;eip=0x000065; 	T(MOV(ax, *(dw*)((&unk_47ffc))));	// 67546 mov     ax, word ptr unk_47FFC ;~ 1FED:0065
cs=0x1fed;eip=0x000068; 	T(SUB(ax, *(dw*)((&unk_47ffa))));	// 67547 sub     ax, word ptr unk_47FFA ;~ 1FED:0068
cs=0x1fed;eip=0x00006c; 	T(INC(ax));	// 67548 inc     ax ;~ 1FED:006C
cs=0x1fed;eip=0x00006d; 	X(MOV(*(dw*)((&unk_48000)), ax));	// 67549 mov     word ptr unk_48000, ax ;~ 1FED:006D
cs=0x1fed;eip=0x000070; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 67550 mov     ax, [bp+arg_2] ;~ 1FED:0070
cs=0x1fed;eip=0x000073; 	T(CMP(ax, *(dw*)((&unk_5687d))));	// 67551 cmp     ax, word ptr unk_5687D ;~ 1FED:0073
cs=0x1fed;eip=0x000077; 	R(JL(loc_2e562));	// 67552 jl      short loc_2E562 ;~ 1FED:0077
cs=0x1fed;eip=0x000079; 	T(ADD(ax, *(dw*)((&unk_47fee))));	// 67553 add     ax, word ptr unk_47FEE ;~ 1FED:0079
cs=0x1fed;eip=0x00007d; 	T(DEC(ax));	// 67554 dec     ax ;~ 1FED:007D
cs=0x1fed;eip=0x00007e; 	T(CMP(ax, *(dw*)((&unk_5687f))));	// 67555 cmp     ax, word ptr unk_5687F ;~ 1FED:007E
cs=0x1fed;eip=0x000082; 	R(JG(loc_2e562));	// 67556 jg      short loc_2E562 ;~ 1FED:0082
cs=0x1fed;eip=0x000084; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 67557 mov     ax, [bp+arg_4] ;~ 1FED:0084
cs=0x1fed;eip=0x000087; 	T(CMP(ax, *(dw*)((&unk_56881))));	// 67558 cmp     ax, word ptr unk_56881 ;~ 1FED:0087
cs=0x1fed;eip=0x00008b; 	R(JL(loc_2e562));	// 67559 jl      short loc_2E562 ;~ 1FED:008B
cs=0x1fed;eip=0x00008d; 	T(ADD(ax, *(dw*)((&unk_47ff2))));	// 67560 add     ax, word ptr unk_47FF2 ;~ 1FED:008D
cs=0x1fed;eip=0x000091; 	T(DEC(ax));	// 67561 dec     ax ;~ 1FED:0091
cs=0x1fed;eip=0x000092; 	T(CMP(ax, *(dw*)((&unk_56883))));	// 67562 cmp     ax, word ptr unk_56883 ;~ 1FED:0092
cs=0x1fed;eip=0x000096; 	R(JG(loc_2e562));	// 67563 jg      short loc_2E562 ;~ 1FED:0096
cs=0x1fed;eip=0x000098; 	T(MOV(ax, ds));	// 67564 mov     ax, ds ;~ 1FED:0098
cs=0x1fed;eip=0x00009a; 	T(MOV(es, ax));	// 67565 mov     es, ax ;~ 1FED:009A
cs=0x1fed;eip=0x00009c; 	T(MOV(di, 0x0ED3C));	// 67567 mov     di, 0ED3Ch ;~ 1FED:009C
cs=0x1fed;eip=0x00009f; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_4))));	// 67568 add     di, [bp+arg_4] ;~ 1FED:009F
cs=0x1fed;eip=0x0000a2; 	T(MOV(cx, *(dw*)((&unk_47ff2))));	// 67569 mov     cx, word ptr unk_47FF2 ;~ 1FED:00A2
	// 67570 rep stosb ;~ 1FED:00A6
cs=0x1fed;eip=0x0000a6; 	X(	REP STOSB);	// 67570 rep stosb ;~ 1FED:00A6
cs=0x1fed;eip=0x0000a8; 	T(MOV(bx, *(dw*)((&unk_47b2e))));	// 67571 mov     bx, word ptr unk_47B2E ;~ 1FED:00A8
cs=0x1fed;eip=0x0000ac; 	T(SHL(bx, 1));	// 67572 shl     bx, 1 ;~ 1FED:00AC
cs=0x1fed;eip=0x0000ae; 	R(CALL(__dispatch_call,*(dw*)(((db*)&off_47fc8)+bx)));	// 67573 call    off_47FC8[bx] ;~ 1FED:00AE
loc_2e562:
	// 8731 
cs=0x1fed;eip=0x0000b2; 	X(POP(di));	// 67577 pop     di ;~ 1FED:00B2
cs=0x1fed;eip=0x0000b3; 	X(POP(si));	// 67578 pop     si ;~ 1FED:00B3
cs=0x1fed;eip=0x0000b4; 	X(POP(bp));	// 67579 pop     bp ;~ 1FED:00B4
cs=0x1fed;eip=0x0000b5; 	R(RETF(0));	// 67580 retf ;~ 1FED:00B5
sub_2e566:
	// 67587 
cs=0x1fed;eip=0x0000b6; 	T(MOV(bl, unk_47bde));	// 67589 mov     bl, byte ptr unk_47BDE ;~ 1FED:00B6
cs=0x1fed;eip=0x0000ba; 	T(XOR(bh, bh));	// 67590 xor     bh, bh ;~ 1FED:00BA
cs=0x1fed;eip=0x0000bc; 	T(SHL(bx, 1));	// 67591 shl     bx, 1 ;~ 1FED:00BC
cs=0x1fed;eip=0x0000be; 	T(MOV(al, *(raddr(ds,bx+0x388))));	// 67592 mov     al, [bx+388h] ;~ 1FED:00BE
cs=0x1fed;eip=0x0000c2; 	X(MOV(unk_48014, al));	// 67593 mov     byte ptr unk_48014, al ;~ 1FED:00C2
cs=0x1fed;eip=0x0000c5; 	T(MOV(dx, *(dw*)((&unk_47ff4))));	// 67594 mov     dx, word ptr unk_47FF4 ;~ 1FED:00C5
cs=0x1fed;eip=0x0000c9; 	T(MOV(si, *(dw*)((&unk_47ffa))));	// 67595 mov     si, word ptr unk_47FFA ;~ 1FED:00C9
cs=0x1fed;eip=0x0000cd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 67596 mov     ax, [bp+8] ;~ 1FED:00CD
cs=0x1fed;eip=0x0000d0; 	T(SHR(ax, 1));	// 67597 shr     ax, 1 ;~ 1FED:00D0
cs=0x1fed;eip=0x0000d2; 	T(SHR(ax, 1));	// 67598 shr     ax, 1 ;~ 1FED:00D2
cs=0x1fed;eip=0x0000d4; 	X(MOV(*(dw*)((&unk_4800c)), ax));	// 67599 mov     word ptr unk_4800C, ax ;~ 1FED:00D4
cs=0x1fed;eip=0x0000d7; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 67600 mov     es, word ptr unk_566AE ;~ 1FED:00D7
cs=0x1fed;eip=0x0000db; 	X(MOV(*(dw*)((&unk_4800a)), 0));	// 67602 mov     word ptr unk_4800A, 0 ;~ 1FED:00DB
cs=0x1fed;eip=0x0000e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 67603 mov     ax, [bp+0Ah] ;~ 1FED:00E1
cs=0x1fed;eip=0x0000e4; 	X(MOV(*(dw*)((&unk_4800e)), ax));	// 67604 mov     word ptr unk_4800E, ax ;~ 1FED:00E4
loc_2e597:
	// 8732 
cs=0x1fed;eip=0x0000e7; 	T(MOV(bx, *(dw*)((&unk_4800e))));	// 67607 mov     bx, word ptr unk_4800E ;~ 1FED:00E7
cs=0x1fed;eip=0x0000eb; 	T(SHL(bx, 1));	// 67608 shl     bx, 1 ;~ 1FED:00EB
cs=0x1fed;eip=0x0000ed; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x1492))));	// 67609 mov     di, [bx-1492h] ;~ 1FED:00ED
cs=0x1fed;eip=0x0000f1; 	T(ADD(di, *(dw*)((&unk_4800c))));	// 67610 add     di, word ptr unk_4800C ;~ 1FED:00F1
cs=0x1fed;eip=0x0000f5; 	T(MOV(bl, unk_47ff6));	// 67611 mov     bl, byte ptr unk_47FF6 ;~ 1FED:00F5
cs=0x1fed;eip=0x0000f9; 	T(MOV(bh, 0x0C0));	// 67612 mov     bh, 0C0h ; 'À' ;~ 1FED:00F9
cs=0x1fed;eip=0x0000fb; 	T(MOV(cl, *(raddr(ss,bp+8))));	// 67613 mov     cl, [bp+8] ;~ 1FED:00FB
cs=0x1fed;eip=0x0000fe; 	T(AND(cl, 3));	// 67614 and     cl, 3 ;~ 1FED:00FE
cs=0x1fed;eip=0x000101; 	T(SHL(cl, 1));	// 67615 shl     cl, 1 ;~ 1FED:0101
cs=0x1fed;eip=0x000103; 	T(SHR(bh, cl));	// 67616 shr     bh, cl ;~ 1FED:0103
cs=0x1fed;eip=0x000105; 	T(MOV(ax, *(dw*)((&unk_47fee))));	// 67617 mov     ax, word ptr unk_47FEE ;~ 1FED:0105
cs=0x1fed;eip=0x000108; 	X(MOV(*(dw*)((&unk_48012)), ax));	// 67618 mov     word ptr unk_48012, ax ;~ 1FED:0108
cs=0x1fed;eip=0x00010b; 	X(MOV(*(dw*)((&unk_48000)), 0));	// 67619 mov     word ptr unk_48000, 0 ;~ 1FED:010B
cs=0x1fed;eip=0x000111; 	T(MOV(ah, unk_48014));	// 67620 mov     ah, byte ptr unk_48014 ;~ 1FED:0111
cs=0x1fed;eip=0x000115; 	T(MOV(ds, dx));	// 67621 mov     ds, dx ;~ 1FED:0115
cs=0x1fed;eip=0x000117; 	T(MOV(al, *(raddr(ds,si))));	// 67622 mov     al, [si] ;~ 1FED:0117
cs=0x1fed;eip=0x000119; 	T(MOV(cl, bl));	// 67623 mov     cl, bl ;~ 1FED:0119
cs=0x1fed;eip=0x00011b; 	T(SHL(al, cl));	// 67624 shl     al, cl ;~ 1FED:011B
loc_2e5cd:
	// 8733 
cs=0x1fed;eip=0x00011d; 	T(SHL(al, 1));	// 67627 shl     al, 1 ;~ 1FED:011D
cs=0x1fed;eip=0x00011f; 	R(JNC(loc_2e5df));	// 67628 jnb     short loc_2E5DF ;~ 1FED:011F
cs=0x1fed;eip=0x000121; 	T(NOT(bh));	// 67629 not     bh ;~ 1FED:0121
cs=0x1fed;eip=0x000123; 	X(AND(*(raddr(es,di)), bh));	// 67630 and     es:[di], bh ;~ 1FED:0123
cs=0x1fed;eip=0x000126; 	T(NOT(bh));	// 67631 not     bh ;~ 1FED:0126
cs=0x1fed;eip=0x000128; 	T(MOV(cl, ah));	// 67632 mov     cl, ah ;~ 1FED:0128
cs=0x1fed;eip=0x00012a; 	T(AND(cl, bh));	// 67633 and     cl, bh ;~ 1FED:012A
cs=0x1fed;eip=0x00012c; 	X(OR(*(raddr(es,di)), cl));	// 67634 or      es:[di], cl ;~ 1FED:012C
loc_2e5df:
	// 8734 
cs=0x1fed;eip=0x00012f; 	T(INC(bl));	// 67637 inc     bl ;~ 1FED:012F
cs=0x1fed;eip=0x000131; 	T(CMP(bl, 8));	// 67638 cmp     bl, 8 ;~ 1FED:0131
cs=0x1fed;eip=0x000134; 	R(JL(loc_2e5f0));	// 67639 jl      short loc_2E5F0 ;~ 1FED:0134
cs=0x1fed;eip=0x000136; 	T(XOR(bl, bl));	// 67640 xor     bl, bl ;~ 1FED:0136
cs=0x1fed;eip=0x000138; 	T(INC(si));	// 67641 inc     si ;~ 1FED:0138
cs=0x1fed;eip=0x000139; 	X(INC(*(dw*)(raddr(ss,0x650))));	// 67642 inc     word ptr ss:650h ;~ 1FED:0139
cs=0x1fed;eip=0x00013e; 	T(MOV(al, *(raddr(ds,si))));	// 67643 mov     al, [si] ;~ 1FED:013E
loc_2e5f0:
	// 8735 
cs=0x1fed;eip=0x000140; 	T(SHR(bh, 1));	// 67646 shr     bh, 1 ;~ 1FED:0140
cs=0x1fed;eip=0x000142; 	T(SHR(bh, 1));	// 67647 shr     bh, 1 ;~ 1FED:0142
cs=0x1fed;eip=0x000144; 	R(JNZ(loc_2e5f9));	// 67648 jnz     short loc_2E5F9 ;~ 1FED:0144
cs=0x1fed;eip=0x000146; 	T(MOV(bh, 0x0C0));	// 67649 mov     bh, 0C0h ; 'À' ;~ 1FED:0146
cs=0x1fed;eip=0x000148; 	T(INC(di));	// 67650 inc     di ;~ 1FED:0148
loc_2e5f9:
	// 8736 
cs=0x1fed;eip=0x000149; 	X(DEC(*(dw*)(raddr(ss,0x662))));	// 67653 dec     word ptr ss:662h ;~ 1FED:0149
cs=0x1fed;eip=0x00014e; 	R(JNZ(loc_2e5cd));	// 67654 jnz     short loc_2E5CD ;~ 1FED:014E
cs=0x1fed;eip=0x000150; 	T(MOV(ax, ss));	// 67655 mov     ax, ss ;~ 1FED:0150
cs=0x1fed;eip=0x000152; 	T(MOV(ds, ax));	// 67656 mov     ds, ax ;~ 1FED:0152
cs=0x1fed;eip=0x000154; 	T(ADD(si, *(dw*)((&unk_47ff0))));	// 67657 add     si, word ptr unk_47FF0 ;~ 1FED:0154
cs=0x1fed;eip=0x000158; 	T(SUB(si, *(dw*)((&unk_48000))));	// 67658 sub     si, word ptr unk_48000 ;~ 1FED:0158
cs=0x1fed;eip=0x00015c; 	X(INC(*(dw*)((&unk_4800a))));	// 67659 inc     word ptr unk_4800A ;~ 1FED:015C
cs=0x1fed;eip=0x000160; 	X(INC(*(dw*)((&unk_4800e))));	// 67660 inc     word ptr unk_4800E ;~ 1FED:0160
cs=0x1fed;eip=0x000164; 	T(MOV(ax, *(dw*)((&unk_4800a))));	// 67661 mov     ax, word ptr unk_4800A ;~ 1FED:0164
cs=0x1fed;eip=0x000167; 	T(CMP(ax, *(dw*)((&unk_47ff2))));	// 67662 cmp     ax, word ptr unk_47FF2 ;~ 1FED:0167
cs=0x1fed;eip=0x00016b; 	R(JGE(locret_2e620));	// 67663 jge     short locret_2E620 ;~ 1FED:016B
cs=0x1fed;eip=0x00016d; 	R(JMP(loc_2e597));	// 67664 jmp     loc_2E597 ;~ 1FED:016D
locret_2e620:
	// 8737 
cs=0x1fed;eip=0x000170; 	R(RETN(0));	// 67668 retn ;~ 1FED:0170
sub_2e621:
	// 67675 
cs=0x1fed;eip=0x000171; 	T(MOV(dx, *(dw*)((&unk_47ff4))));	// 67677 mov     dx, word ptr unk_47FF4 ;~ 1FED:0171
cs=0x1fed;eip=0x000175; 	T(MOV(si, *(dw*)((&unk_47ffa))));	// 67678 mov     si, word ptr unk_47FFA ;~ 1FED:0175
cs=0x1fed;eip=0x000179; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 67679 mov     ax, [bp+8] ;~ 1FED:0179
cs=0x1fed;eip=0x00017c; 	X(MOV(*(dw*)((&unk_4800c)), ax));	// 67680 mov     word ptr unk_4800C, ax ;~ 1FED:017C
cs=0x1fed;eip=0x00017f; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 67681 mov     es, word ptr unk_566AE ;~ 1FED:017F
cs=0x1fed;eip=0x000183; 	X(MOV(*(dw*)((&unk_4800a)), 0));	// 67682 mov     word ptr unk_4800A, 0 ;~ 1FED:0183
cs=0x1fed;eip=0x000189; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 67683 mov     ax, [bp+0Ah] ;~ 1FED:0189
cs=0x1fed;eip=0x00018c; 	X(MOV(*(dw*)((&unk_4800e)), ax));	// 67684 mov     word ptr unk_4800E, ax ;~ 1FED:018C
loc_2e63f:
	// 8738 
cs=0x1fed;eip=0x00018f; 	T(MOV(bx, *(dw*)((&unk_4800e))));	// 67687 mov     bx, word ptr unk_4800E ;~ 1FED:018F
cs=0x1fed;eip=0x000193; 	T(SHL(bx, 1));	// 67688 shl     bx, 1 ;~ 1FED:0193
cs=0x1fed;eip=0x000195; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x1492))));	// 67689 mov     di, [bx-1492h] ;~ 1FED:0195
cs=0x1fed;eip=0x000199; 	T(ADD(di, *(dw*)((&unk_4800c))));	// 67690 add     di, word ptr unk_4800C ;~ 1FED:0199
cs=0x1fed;eip=0x00019d; 	T(MOV(bl, unk_47ff6));	// 67691 mov     bl, byte ptr unk_47FF6 ;~ 1FED:019D
cs=0x1fed;eip=0x0001a1; 	T(MOV(ax, *(dw*)((&unk_47fee))));	// 67692 mov     ax, word ptr unk_47FEE ;~ 1FED:01A1
cs=0x1fed;eip=0x0001a4; 	X(MOV(*(dw*)((&unk_48012)), ax));	// 67693 mov     word ptr unk_48012, ax ;~ 1FED:01A4
cs=0x1fed;eip=0x0001a7; 	X(MOV(*(dw*)((&unk_48000)), 0));	// 67694 mov     word ptr unk_48000, 0 ;~ 1FED:01A7
cs=0x1fed;eip=0x0001ad; 	T(MOV(ds, dx));	// 67695 mov     ds, dx ;~ 1FED:01AD
cs=0x1fed;eip=0x0001af; 	T(MOV(al, *(raddr(ds,si))));	// 67696 mov     al, [si] ;~ 1FED:01AF
cs=0x1fed;eip=0x0001b1; 	T(MOV(cl, bl));	// 67697 mov     cl, bl ;~ 1FED:01B1
cs=0x1fed;eip=0x0001b3; 	T(SHL(al, cl));	// 67698 shl     al, cl ;~ 1FED:01B3
loc_2e665:
	// 8739 
cs=0x1fed;eip=0x0001b5; 	T(SHL(al, 1));	// 67701 shl     al, 1 ;~ 1FED:01B5
cs=0x1fed;eip=0x0001b7; 	R(JNC(loc_2e671));	// 67702 jnb     short loc_2E671 ;~ 1FED:01B7
cs=0x1fed;eip=0x0001b9; 	T(MOV(cl, *(raddr(ss,0x22E))));	// 67703 mov     cl, ss:22Eh ;~ 1FED:01B9
cs=0x1fed;eip=0x0001be; 	X(MOV(*(raddr(es,di)), cl));	// 67704 mov     es:[di], cl ;~ 1FED:01BE
loc_2e671:
	// 8740 
cs=0x1fed;eip=0x0001c1; 	T(INC(bl));	// 67707 inc     bl ;~ 1FED:01C1
cs=0x1fed;eip=0x0001c3; 	T(CMP(bl, 8));	// 67708 cmp     bl, 8 ;~ 1FED:01C3
cs=0x1fed;eip=0x0001c6; 	R(JL(loc_2e682));	// 67709 jl      short loc_2E682 ;~ 1FED:01C6
cs=0x1fed;eip=0x0001c8; 	T(XOR(bl, bl));	// 67710 xor     bl, bl ;~ 1FED:01C8
cs=0x1fed;eip=0x0001ca; 	T(INC(si));	// 67711 inc     si ;~ 1FED:01CA
cs=0x1fed;eip=0x0001cb; 	X(INC(*(dw*)(raddr(ss,0x650))));	// 67712 inc     word ptr ss:650h ;~ 1FED:01CB
cs=0x1fed;eip=0x0001d0; 	T(MOV(al, *(raddr(ds,si))));	// 67713 mov     al, [si] ;~ 1FED:01D0
loc_2e682:
	// 8741 
cs=0x1fed;eip=0x0001d2; 	T(INC(di));	// 67716 inc     di ;~ 1FED:01D2
cs=0x1fed;eip=0x0001d3; 	X(DEC(*(dw*)(raddr(ss,0x662))));	// 67717 dec     word ptr ss:662h ;~ 1FED:01D3
cs=0x1fed;eip=0x0001d8; 	R(JNZ(loc_2e665));	// 67718 jnz     short loc_2E665 ;~ 1FED:01D8
cs=0x1fed;eip=0x0001da; 	T(MOV(ax, ss));	// 67719 mov     ax, ss ;~ 1FED:01DA
cs=0x1fed;eip=0x0001dc; 	T(MOV(ds, ax));	// 67720 mov     ds, ax ;~ 1FED:01DC
cs=0x1fed;eip=0x0001de; 	T(ADD(si, *(dw*)((&unk_47ff0))));	// 67721 add     si, word ptr unk_47FF0 ;~ 1FED:01DE
cs=0x1fed;eip=0x0001e2; 	T(SUB(si, *(dw*)((&unk_48000))));	// 67722 sub     si, word ptr unk_48000 ;~ 1FED:01E2
cs=0x1fed;eip=0x0001e6; 	X(INC(*(dw*)((&unk_4800a))));	// 67723 inc     word ptr unk_4800A ;~ 1FED:01E6
cs=0x1fed;eip=0x0001ea; 	X(INC(*(dw*)((&unk_4800e))));	// 67724 inc     word ptr unk_4800E ;~ 1FED:01EA
cs=0x1fed;eip=0x0001ee; 	T(MOV(ax, *(dw*)((&unk_4800a))));	// 67725 mov     ax, word ptr unk_4800A ;~ 1FED:01EE
cs=0x1fed;eip=0x0001f1; 	T(CMP(ax, *(dw*)((&unk_47ff2))));	// 67726 cmp     ax, word ptr unk_47FF2 ;~ 1FED:01F1
cs=0x1fed;eip=0x0001f5; 	R(JL(loc_2e63f));	// 67727 jl      short loc_2E63F ;~ 1FED:01F5
cs=0x1fed;eip=0x0001f7; 	R(RETN(0));	// 67728 retn ;~ 1FED:01F7
sub_2e6a8:
	// 67735 
cs=0x1fed;eip=0x0001f8; 	T(MOV(dx, *(dw*)((&unk_47ff4))));	// 67737 mov     dx, word ptr unk_47FF4 ;~ 1FED:01F8
cs=0x1fed;eip=0x0001fc; 	T(MOV(si, *(dw*)((&unk_47ffa))));	// 67738 mov     si, word ptr unk_47FFA ;~ 1FED:01FC
cs=0x1fed;eip=0x000200; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 67739 mov     ax, [bp+8] ;~ 1FED:0200
cs=0x1fed;eip=0x000203; 	T(SHR(ax, 1));	// 67740 shr     ax, 1 ;~ 1FED:0203
cs=0x1fed;eip=0x000205; 	X(MOV(*(dw*)((&unk_4800c)), ax));	// 67741 mov     word ptr unk_4800C, ax ;~ 1FED:0205
cs=0x1fed;eip=0x000208; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 67742 mov     es, word ptr unk_566AE ;~ 1FED:0208
cs=0x1fed;eip=0x00020c; 	X(MOV(*(dw*)((&unk_4800a)), 0));	// 67743 mov     word ptr unk_4800A, 0 ;~ 1FED:020C
cs=0x1fed;eip=0x000212; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 67744 mov     ax, [bp+0Ah] ;~ 1FED:0212
cs=0x1fed;eip=0x000215; 	X(MOV(*(dw*)((&unk_4800e)), ax));	// 67745 mov     word ptr unk_4800E, ax ;~ 1FED:0215
loc_2e6c8:
	// 8742 
cs=0x1fed;eip=0x000218; 	T(MOV(bx, *(dw*)((&unk_4800e))));	// 67748 mov     bx, word ptr unk_4800E ;~ 1FED:0218
cs=0x1fed;eip=0x00021c; 	T(SHL(bx, 1));	// 67749 shl     bx, 1 ;~ 1FED:021C
cs=0x1fed;eip=0x00021e; 	T(MOV(di, *(dw*)(raddr(ds,bx-0x1492))));	// 67750 mov     di, [bx-1492h] ;~ 1FED:021E
cs=0x1fed;eip=0x000222; 	T(ADD(di, *(dw*)((&unk_4800c))));	// 67751 add     di, word ptr unk_4800C ;~ 1FED:0222
cs=0x1fed;eip=0x000226; 	T(MOV(bl, unk_47ff6));	// 67752 mov     bl, byte ptr unk_47FF6 ;~ 1FED:0226
cs=0x1fed;eip=0x00022a; 	T(MOV(bh, 0x0F0));	// 67753 mov     bh, 0F0h ; 'ğ' ;~ 1FED:022A
cs=0x1fed;eip=0x00022c; 	T(TEST(*(raddr(ss,bp+8)), 1));	// 67754 test    byte ptr [bp+8], 1 ;~ 1FED:022C
cs=0x1fed;eip=0x000230; 	R(JZ(loc_2e6e4));	// 67755 jz      short loc_2E6E4 ;~ 1FED:0230
cs=0x1fed;eip=0x000232; 	T(NOT(bh));	// 67756 not     bh ;~ 1FED:0232
loc_2e6e4:
	// 8743 
cs=0x1fed;eip=0x000234; 	T(MOV(ax, *(dw*)((&unk_47fee))));	// 67759 mov     ax, word ptr unk_47FEE ;~ 1FED:0234
cs=0x1fed;eip=0x000237; 	X(MOV(*(dw*)((&unk_48012)), ax));	// 67760 mov     word ptr unk_48012, ax ;~ 1FED:0237
cs=0x1fed;eip=0x00023a; 	X(MOV(*(dw*)((&unk_48000)), 0));	// 67761 mov     word ptr unk_48000, 0 ;~ 1FED:023A
cs=0x1fed;eip=0x000240; 	T(MOV(ah, unk_47bde));	// 67762 mov     ah, byte ptr unk_47BDE ;~ 1FED:0240
cs=0x1fed;eip=0x000244; 	T(MOV(cl, 4));	// 67763 mov     cl, 4 ;~ 1FED:0244
cs=0x1fed;eip=0x000246; 	T(SHL(ah, cl));	// 67764 shl     ah, cl ;~ 1FED:0246
cs=0x1fed;eip=0x000248; 	T(OR(ah, unk_47bde));	// 67765 or      ah, byte ptr unk_47BDE ;~ 1FED:0248
cs=0x1fed;eip=0x00024c; 	T(MOV(ds, dx));	// 67766 mov     ds, dx ;~ 1FED:024C
cs=0x1fed;eip=0x00024e; 	T(MOV(al, *(raddr(ds,si))));	// 67767 mov     al, [si] ;~ 1FED:024E
cs=0x1fed;eip=0x000250; 	T(MOV(cl, bl));	// 67768 mov     cl, bl ;~ 1FED:0250
cs=0x1fed;eip=0x000252; 	T(SHL(al, cl));	// 67769 shl     al, cl ;~ 1FED:0252
loc_2e704:
	// 8744 
cs=0x1fed;eip=0x000254; 	T(SHL(al, 1));	// 67772 shl     al, 1 ;~ 1FED:0254
cs=0x1fed;eip=0x000256; 	R(JNC(loc_2e716));	// 67773 jnb     short loc_2E716 ;~ 1FED:0256
cs=0x1fed;eip=0x000258; 	T(NOT(bh));	// 67774 not     bh ;~ 1FED:0258
cs=0x1fed;eip=0x00025a; 	X(AND(*(raddr(es,di)), bh));	// 67775 and     es:[di], bh ;~ 1FED:025A
cs=0x1fed;eip=0x00025d; 	T(NOT(bh));	// 67776 not     bh ;~ 1FED:025D
cs=0x1fed;eip=0x00025f; 	T(MOV(cl, ah));	// 67777 mov     cl, ah ;~ 1FED:025F
cs=0x1fed;eip=0x000261; 	T(AND(cl, bh));	// 67778 and     cl, bh ;~ 1FED:0261
cs=0x1fed;eip=0x000263; 	X(OR(*(raddr(es,di)), cl));	// 67779 or      es:[di], cl ;~ 1FED:0263
loc_2e716:
	// 8745 
cs=0x1fed;eip=0x000266; 	T(INC(bl));	// 67782 inc     bl ;~ 1FED:0266
cs=0x1fed;eip=0x000268; 	T(CMP(bl, 8));	// 67783 cmp     bl, 8 ;~ 1FED:0268
cs=0x1fed;eip=0x00026b; 	R(JL(loc_2e727));	// 67784 jl      short loc_2E727 ;~ 1FED:026B
cs=0x1fed;eip=0x00026d; 	T(XOR(bl, bl));	// 67785 xor     bl, bl ;~ 1FED:026D
cs=0x1fed;eip=0x00026f; 	T(INC(si));	// 67786 inc     si ;~ 1FED:026F
cs=0x1fed;eip=0x000270; 	X(INC(*(dw*)(raddr(ss,0x650))));	// 67787 inc     word ptr ss:650h ;~ 1FED:0270
cs=0x1fed;eip=0x000275; 	T(MOV(al, *(raddr(ds,si))));	// 67788 mov     al, [si] ;~ 1FED:0275
loc_2e727:
	// 8746 
cs=0x1fed;eip=0x000277; 	T(NOT(bh));	// 67791 not     bh ;~ 1FED:0277
cs=0x1fed;eip=0x000279; 	T(CMP(bh, 0x0F0));	// 67792 cmp     bh, 0F0h ; 'ğ' ;~ 1FED:0279
cs=0x1fed;eip=0x00027c; 	R(JNZ(loc_2e72f));	// 67793 jnz     short loc_2E72F ;~ 1FED:027C
cs=0x1fed;eip=0x00027e; 	T(INC(di));	// 67794 inc     di ;~ 1FED:027E
loc_2e72f:
	// 8747 
cs=0x1fed;eip=0x00027f; 	X(DEC(*(dw*)(raddr(ss,0x662))));	// 67797 dec     word ptr ss:662h ;~ 1FED:027F
cs=0x1fed;eip=0x000284; 	R(JNZ(loc_2e704));	// 67798 jnz     short loc_2E704 ;~ 1FED:0284
cs=0x1fed;eip=0x000286; 	T(MOV(ax, ss));	// 67799 mov     ax, ss ;~ 1FED:0286
cs=0x1fed;eip=0x000288; 	T(MOV(ds, ax));	// 67800 mov     ds, ax ;~ 1FED:0288
cs=0x1fed;eip=0x00028a; 	T(ADD(si, *(dw*)((&unk_47ff0))));	// 67801 add     si, word ptr unk_47FF0 ;~ 1FED:028A
cs=0x1fed;eip=0x00028e; 	T(SUB(si, *(dw*)((&unk_48000))));	// 67802 sub     si, word ptr unk_48000 ;~ 1FED:028E
cs=0x1fed;eip=0x000292; 	X(INC(*(dw*)((&unk_4800a))));	// 67803 inc     word ptr unk_4800A ;~ 1FED:0292
cs=0x1fed;eip=0x000296; 	X(INC(*(dw*)((&unk_4800e))));	// 67804 inc     word ptr unk_4800E ;~ 1FED:0296
cs=0x1fed;eip=0x00029a; 	T(MOV(ax, *(dw*)((&unk_4800a))));	// 67805 mov     ax, word ptr unk_4800A ;~ 1FED:029A
cs=0x1fed;eip=0x00029d; 	T(CMP(ax, *(dw*)((&unk_47ff2))));	// 67806 cmp     ax, word ptr unk_47FF2 ;~ 1FED:029D
cs=0x1fed;eip=0x0002a1; 	R(JGE(locret_2e756));	// 67807 jge     short locret_2E756 ;~ 1FED:02A1
cs=0x1fed;eip=0x0002a3; 	R(JMP(loc_2e6c8));	// 67808 jmp     loc_2E6C8 ;~ 1FED:02A3
locret_2e756:
	// 8748 
cs=0x1fed;eip=0x0002a6; 	R(RETN(0));	// 67812 retn ;~ 1FED:02A6
sub_2e757:
	// 67819 
cs=0x1fed;eip=0x0002a7; 	T(MOV(dx, 0x3CE));	// 67821 mov     dx, 3CEh ;~ 1FED:02A7
cs=0x1fed;eip=0x0002aa; 	T(MOV(ax, 0x0A05));	// 67822 mov     ax, 0A05h ;~ 1FED:02AA
cs=0x1fed;eip=0x0002ad; 	R(OUT(dx, ax));	// 67823 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:02AD
cs=0x1fed;eip=0x0002ae; 	T(MOV(ax, 3));	// 67825 mov     ax, 3 ;~ 1FED:02AE
cs=0x1fed;eip=0x0002b1; 	R(OUT(dx, ax));	// 67826 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:02B1
cs=0x1fed;eip=0x0002b2; 	T(MOV(ax, 7));	// 67831 mov     ax, 7 ;~ 1FED:02B2
cs=0x1fed;eip=0x0002b5; 	R(OUT(dx, ax));	// 67832 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:02B5
cs=0x1fed;eip=0x0002b6; 	T(MOV(si, *(dw*)((&unk_47ffa))));	// 67835 mov     si, word ptr unk_47FFA ;~ 1FED:02B6
cs=0x1fed;eip=0x0002ba; 	T(MOV(ax, si));	// 67836 mov     ax, si ;~ 1FED:02BA
cs=0x1fed;eip=0x0002bc; 	T(ADD(ax, *(dw*)((&unk_47ff0))));	// 67837 add     ax, word ptr unk_47FF0 ;~ 1FED:02BC
cs=0x1fed;eip=0x0002c0; 	X(MOV(*(dw*)((&unk_47ffe)), ax));	// 67838 mov     word ptr unk_47FFE, ax ;~ 1FED:02C0
cs=0x1fed;eip=0x0002c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 67839 mov     ax, [bp+8] ;~ 1FED:02C3
cs=0x1fed;eip=0x0002c6; 	T(MOV(cl, 3));	// 67840 mov     cl, 3 ;~ 1FED:02C6
cs=0x1fed;eip=0x0002c8; 	T(SHR(ax, cl));	// 67841 shr     ax, cl ;~ 1FED:02C8
cs=0x1fed;eip=0x0002ca; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0A))));	// 67842 mov     bx, [bp+0Ah] ;~ 1FED:02CA
cs=0x1fed;eip=0x0002cd; 	T(SHL(bx, 1));	// 67843 shl     bx, 1 ;~ 1FED:02CD
cs=0x1fed;eip=0x0002cf; 	T(ADD(ax, *(dw*)(raddr(ds,bx-0x1492))));	// 67844 add     ax, [bx-1492h] ;~ 1FED:02CF
cs=0x1fed;eip=0x0002d3; 	X(MOV(*(dw*)((&unk_48010)), ax));	// 67845 mov     word ptr unk_48010, ax ;~ 1FED:02D3
cs=0x1fed;eip=0x0002d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 67846 mov     ax, [bp+8] ;~ 1FED:02D6
cs=0x1fed;eip=0x0002d9; 	T(AND(ax, 7));	// 67847 and     ax, 7 ;~ 1FED:02D9
cs=0x1fed;eip=0x0002dc; 	T(SUB(ax, *(dw*)((&unk_47ff6))));	// 67848 sub     ax, word ptr unk_47FF6 ;~ 1FED:02DC
cs=0x1fed;eip=0x0002e0; 	X(MOV(unk_48015, al));	// 67849 mov     byte ptr unk_48015, al ;~ 1FED:02E0
cs=0x1fed;eip=0x0002e3; 	T(MOV(bx, *(dw*)((&unk_48000))));	// 67850 mov     bx, word ptr unk_48000 ;~ 1FED:02E3
cs=0x1fed;eip=0x0002e7; 	T(CBW);	// 67851 cbw ;~ 1FED:02E7
cs=0x1fed;eip=0x0002e8; 	T(ADD(ax, *(dw*)((&unk_47ff8))));	// 67852 add     ax, word ptr unk_47FF8 ;~ 1FED:02E8
cs=0x1fed;eip=0x0002ec; 	T(CMP(ax, 7));	// 67853 cmp     ax, 7 ;~ 1FED:02EC
cs=0x1fed;eip=0x0002ef; 	R(JL(loc_2e7a2));	// 67854 jl      short loc_2E7A2 ;~ 1FED:02EF
cs=0x1fed;eip=0x0002f1; 	T(INC(bx));	// 67855 inc     bx ;~ 1FED:02F1
loc_2e7a2:
	// 8749 
cs=0x1fed;eip=0x0002f2; 	X(MOV(*(dw*)((&unk_48002)), bx));	// 67858 mov     word ptr unk_48002, bx ;~ 1FED:02F2
cs=0x1fed;eip=0x0002f6; 	X(MOV(*(dw*)((&unk_4800a)), 0));	// 67859 mov     word ptr unk_4800A, 0 ;~ 1FED:02F6
loc_2e7ac:
	// 8750 
cs=0x1fed;eip=0x0002fc; 	T(MOV(cx, *(dw*)((&unk_48000))));	// 67862 mov     cx, word ptr unk_48000 ;~ 1FED:02FC
cs=0x1fed;eip=0x000300; 	T(MOV(ax, ds));	// 67863 mov     ax, ds ;~ 1FED:0300
cs=0x1fed;eip=0x000302; 	T(MOV(es, ax));	// 67864 mov     es, ax ;~ 1FED:0302
cs=0x1fed;eip=0x000304; 	T(MOV(ds, *(dw*)((&unk_47ff4))));	// 67866 mov     ds, word ptr unk_47FF4 ;~ 1FED:0304
cs=0x1fed;eip=0x000308; 	T(MOV(di, 0x624));	// 67867 mov     di, 624h ;~ 1FED:0308
	// 67868 rep movsb ;~ 1FED:030B
cs=0x1fed;eip=0x00030b; 	X(	REP MOVSB);	// 67868 rep movsb ;~ 1FED:030B
cs=0x1fed;eip=0x00030d; 	T(MOV(ax, ss));	// 67869 mov     ax, ss ;~ 1FED:030D
cs=0x1fed;eip=0x00030f; 	T(MOV(ds, ax));	// 67870 mov     ds, ax ;~ 1FED:030F
cs=0x1fed;eip=0x000311; 	T(MOV(bx, *(dw*)((&unk_47ff6))));	// 67871 mov     bx, word ptr unk_47FF6 ;~ 1FED:0311
cs=0x1fed;eip=0x000315; 	T(AND(bx, 7));	// 67872 and     bx, 7 ;~ 1FED:0315
cs=0x1fed;eip=0x000318; 	T(MOV(al, *(raddr(ds,bx+0x62E))));	// 67873 mov     al, [bx+62Eh] ;~ 1FED:0318
cs=0x1fed;eip=0x00031c; 	X(AND(unk_47fd4, al));	// 67874 and     byte ptr unk_47FD4, al ;~ 1FED:031C
cs=0x1fed;eip=0x000320; 	T(MOV(bx, *(dw*)((&unk_47ff8))));	// 67875 mov     bx, word ptr unk_47FF8 ;~ 1FED:0320
cs=0x1fed;eip=0x000324; 	T(AND(bx, 7));	// 67876 and     bx, 7 ;~ 1FED:0324
cs=0x1fed;eip=0x000327; 	T(MOV(al, *(raddr(ds,bx+0x636))));	// 67877 mov     al, [bx+636h] ;~ 1FED:0327
cs=0x1fed;eip=0x00032b; 	T(MOV(bx, *(dw*)((&unk_48000))));	// 67878 mov     bx, word ptr unk_48000 ;~ 1FED:032B
cs=0x1fed;eip=0x00032f; 	T(DEC(bx));	// 67879 dec     bx ;~ 1FED:032F
cs=0x1fed;eip=0x000330; 	X(AND(*(raddr(ds,bx+0x624)), al));	// 67880 and     [bx+624h], al ;~ 1FED:0330
cs=0x1fed;eip=0x000334; 	X(MOV(*(raddr(ds,bx+0x625)), 0));	// 67881 mov     byte ptr [bx+625h], 0 ;~ 1FED:0334
cs=0x1fed;eip=0x000339; 	T(MOV(bl, unk_48015));	// 67882 mov     bl, byte ptr unk_48015 ;~ 1FED:0339
cs=0x1fed;eip=0x00033d; 	T(OR(bl, bl));	// 67883 or      bl, bl ;~ 1FED:033D
cs=0x1fed;eip=0x00033f; 	R(JG(loc_2e7f5));	// 67884 jg      short loc_2E7F5 ;~ 1FED:033F
cs=0x1fed;eip=0x000341; 	R(JL(loc_2e814));	// 67885 jl      short loc_2E814 ;~ 1FED:0341
cs=0x1fed;eip=0x000343; 	R(JMP(loc_2e835));	// 67886 jmp     short loc_2E835 ;~ 1FED:0343
loc_2e7f5:
	// 8751 
cs=0x1fed;eip=0x000345; 	T(MOV(si, 0x624));	// 67891 mov     si, 624h ;~ 1FED:0345
cs=0x1fed;eip=0x000348; 	T(MOV(cx, *(dw*)((&unk_48002))));	// 67892 mov     cx, word ptr unk_48002 ;~ 1FED:0348
cs=0x1fed;eip=0x00034c; 	T(XOR(ah, ah));	// 67893 xor     ah, ah ;~ 1FED:034C
loc_2e7fe:
	// 8752 
cs=0x1fed;eip=0x00034e; 	T(MOV(al, *(raddr(ds,si))));	// 67896 mov     al, [si] ;~ 1FED:034E
cs=0x1fed;eip=0x000350; 	T(MOV(bh, al));	// 67897 mov     bh, al ;~ 1FED:0350
cs=0x1fed;eip=0x000352; 	T(SHR(ah, 1));	// 67898 shr     ah, 1 ;~ 1FED:0352
cs=0x1fed;eip=0x000354; 	T(RCR(al, 1));	// 67899 rcr     al, 1 ;~ 1FED:0354
cs=0x1fed;eip=0x000356; 	T(MOV(ah, bh));	// 67900 mov     ah, bh ;~ 1FED:0356
cs=0x1fed;eip=0x000358; 	X(MOV(*(raddr(ds,si)), al));	// 67901 mov     [si], al ;~ 1FED:0358
cs=0x1fed;eip=0x00035a; 	T(INC(si));	// 67902 inc     si ;~ 1FED:035A
cs=0x1fed;eip=0x00035b; 	R(LOOP(loc_2e7fe));	// 67903 loop    loc_2E7FE ;~ 1FED:035B
cs=0x1fed;eip=0x00035d; 	T(DEC(bl));	// 67904 dec     bl ;~ 1FED:035D
cs=0x1fed;eip=0x00035f; 	R(JNZ(loc_2e7f5));	// 67905 jnz     short loc_2E7F5 ;~ 1FED:035F
cs=0x1fed;eip=0x000361; 	R(JMP(loc_2e835));	// 67906 jmp     short loc_2E835 ;~ 1FED:0361
loc_2e814:
	// 8753 
cs=0x1fed;eip=0x000364; 	T(NEG(bl));	// 67911 neg     bl ;~ 1FED:0364
loc_2e816:
	// 8754 
cs=0x1fed;eip=0x000366; 	T(MOV(cx, *(dw*)((&unk_48000))));	// 67914 mov     cx, word ptr unk_48000 ;~ 1FED:0366
cs=0x1fed;eip=0x00036a; 	T(MOV(si, cx));	// 67915 mov     si, cx ;~ 1FED:036A
cs=0x1fed;eip=0x00036c; 	T(ADD(si, 0x623));	// 67916 add     si, 623h ;~ 1FED:036C
cs=0x1fed;eip=0x000370; 	T(XOR(ah, ah));	// 67917 xor     ah, ah ;~ 1FED:0370
loc_2e822:
	// 8755 
cs=0x1fed;eip=0x000372; 	T(MOV(al, *(raddr(ds,si))));	// 67920 mov     al, [si] ;~ 1FED:0372
cs=0x1fed;eip=0x000374; 	T(MOV(bh, al));	// 67921 mov     bh, al ;~ 1FED:0374
cs=0x1fed;eip=0x000376; 	T(SHL(ah, 1));	// 67922 shl     ah, 1 ;~ 1FED:0376
cs=0x1fed;eip=0x000378; 	T(RCL(al, 1));	// 67923 rcl     al, 1 ;~ 1FED:0378
cs=0x1fed;eip=0x00037a; 	T(MOV(ah, bh));	// 67924 mov     ah, bh ;~ 1FED:037A
cs=0x1fed;eip=0x00037c; 	X(MOV(*(raddr(ds,si)), al));	// 67925 mov     [si], al ;~ 1FED:037C
cs=0x1fed;eip=0x00037e; 	T(DEC(si));	// 67926 dec     si ;~ 1FED:037E
cs=0x1fed;eip=0x00037f; 	R(LOOP(loc_2e822));	// 67927 loop    loc_2E822 ;~ 1FED:037F
cs=0x1fed;eip=0x000381; 	T(DEC(bl));	// 67928 dec     bl ;~ 1FED:0381
cs=0x1fed;eip=0x000383; 	R(JNZ(loc_2e816));	// 67929 jnz     short loc_2E816 ;~ 1FED:0383
loc_2e835:
	// 8756 
cs=0x1fed;eip=0x000385; 	T(MOV(si, 0x624));	// 67933 mov     si, 624h ;~ 1FED:0385
cs=0x1fed;eip=0x000388; 	T(MOV(di, *(dw*)((&unk_48010))));	// 67934 mov     di, word ptr unk_48010 ;~ 1FED:0388
cs=0x1fed;eip=0x00038c; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 67935 mov     es, word ptr unk_566AE ;~ 1FED:038C
cs=0x1fed;eip=0x000390; 	T(MOV(bl, unk_47bde));	// 67937 mov     bl, byte ptr unk_47BDE ;~ 1FED:0390
cs=0x1fed;eip=0x000394; 	T(MOV(dx, 0x3CE));	// 67938 mov     dx, 3CEh ;~ 1FED:0394
cs=0x1fed;eip=0x000397; 	T(MOV(al, 8));	// 67939 mov     al, 8 ;~ 1FED:0397
cs=0x1fed;eip=0x000399; 	R(OUT(dx, al));	// 67940 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:0399
cs=0x1fed;eip=0x00039a; 	T(INC(dx));	// 67943 inc     dx ;~ 1FED:039A
cs=0x1fed;eip=0x00039b; 	T(MOV(cx, *(dw*)((&unk_48002))));	// 67944 mov     cx, word ptr unk_48002 ;~ 1FED:039B
loc_2e84f:
	// 8757 
cs=0x1fed;eip=0x00039f; 	T(LODSB);	// 67947 lodsb ;~ 1FED:039F
cs=0x1fed;eip=0x0003a0; 	R(OUT(dx, al));	// 67948 out     dx, al          ; EGA port: graphics controller data register ;~ 1FED:03A0
cs=0x1fed;eip=0x0003a1; 	X(AND(*(raddr(es,di)), bl));	// 67949 and     es:[di], bl ;~ 1FED:03A1
cs=0x1fed;eip=0x0003a4; 	T(INC(di));	// 67950 inc     di ;~ 1FED:03A4
cs=0x1fed;eip=0x0003a5; 	R(LOOP(loc_2e84f));	// 67951 loop    loc_2E84F ;~ 1FED:03A5
cs=0x1fed;eip=0x0003a7; 	T(MOV(si, *(dw*)((&unk_47ffe))));	// 67952 mov     si, word ptr unk_47FFE ;~ 1FED:03A7
cs=0x1fed;eip=0x0003ab; 	T(MOV(ax, si));	// 67953 mov     ax, si ;~ 1FED:03AB
cs=0x1fed;eip=0x0003ad; 	T(ADD(ax, *(dw*)((&unk_47ff0))));	// 67954 add     ax, word ptr unk_47FF0 ;~ 1FED:03AD
cs=0x1fed;eip=0x0003b1; 	X(MOV(*(dw*)((&unk_47ffe)), ax));	// 67955 mov     word ptr unk_47FFE, ax ;~ 1FED:03B1
cs=0x1fed;eip=0x0003b4; 	T(MOV(ax, *(dw*)((&unk_5650e))));	// 67956 mov     ax, word ptr unk_5650E ;~ 1FED:03B4
cs=0x1fed;eip=0x0003b7; 	X(ADD(*(dw*)((&unk_48010)), ax));	// 67957 add     word ptr unk_48010, ax ;~ 1FED:03B7
cs=0x1fed;eip=0x0003bb; 	X(INC(*(dw*)((&unk_4800a))));	// 67958 inc     word ptr unk_4800A ;~ 1FED:03BB
cs=0x1fed;eip=0x0003bf; 	T(MOV(ax, *(dw*)((&unk_4800a))));	// 67959 mov     ax, word ptr unk_4800A ;~ 1FED:03BF
cs=0x1fed;eip=0x0003c2; 	T(CMP(ax, *(dw*)((&unk_47ff2))));	// 67960 cmp     ax, word ptr unk_47FF2 ;~ 1FED:03C2
cs=0x1fed;eip=0x0003c6; 	R(JGE(loc_2e87b));	// 67961 jge     short loc_2E87B ;~ 1FED:03C6
cs=0x1fed;eip=0x0003c8; 	R(JMP(loc_2e7ac));	// 67962 jmp     loc_2E7AC ;~ 1FED:03C8
loc_2e87b:
	// 8758 
cs=0x1fed;eip=0x0003cb; 	T(MOV(dx, 0x3CE));	// 67966 mov     dx, 3CEh ;~ 1FED:03CB
cs=0x1fed;eip=0x0003ce; 	T(MOV(ax, 5));	// 67967 mov     ax, 5 ;~ 1FED:03CE
cs=0x1fed;eip=0x0003d1; 	R(OUT(dx, ax));	// 67968 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:03D1
cs=0x1fed;eip=0x0003d2; 	T(MOV(dx, 0x3CE));	// 67975 mov     dx, 3CEh ;~ 1FED:03D2
cs=0x1fed;eip=0x0003d5; 	T(MOV(ax, 0x0FF08));	// 67976 mov     ax, 0FF08h ;~ 1FED:03D5
cs=0x1fed;eip=0x0003d8; 	R(OUT(dx, ax));	// 67977 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1FED:03D8
cs=0x1fed;eip=0x0003d9; 	R(RETN(0));	// 67979 retn ;~ 1FED:03D9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2e562: 	goto loc_2e562;
        case m2c::kloc_2e597: 	goto loc_2e597;
        case m2c::kloc_2e5cd: 	goto loc_2e5cd;
        case m2c::kloc_2e5df: 	goto loc_2e5df;
        case m2c::kloc_2e5f0: 	goto loc_2e5f0;
        case m2c::kloc_2e5f9: 	goto loc_2e5f9;
        case m2c::kloc_2e63f: 	goto loc_2e63f;
        case m2c::kloc_2e665: 	goto loc_2e665;
        case m2c::kloc_2e671: 	goto loc_2e671;
        case m2c::kloc_2e682: 	goto loc_2e682;
        case m2c::kloc_2e6c8: 	goto loc_2e6c8;
        case m2c::kloc_2e6e4: 	goto loc_2e6e4;
        case m2c::kloc_2e704: 	goto loc_2e704;
        case m2c::kloc_2e716: 	goto loc_2e716;
        case m2c::kloc_2e727: 	goto loc_2e727;
        case m2c::kloc_2e72f: 	goto loc_2e72f;
        case m2c::kloc_2e7a2: 	goto loc_2e7a2;
        case m2c::kloc_2e7ac: 	goto loc_2e7ac;
        case m2c::kloc_2e7f5: 	goto loc_2e7f5;
        case m2c::kloc_2e7fe: 	goto loc_2e7fe;
        case m2c::kloc_2e814: 	goto loc_2e814;
        case m2c::kloc_2e816: 	goto loc_2e816;
        case m2c::kloc_2e822: 	goto loc_2e822;
        case m2c::kloc_2e835: 	goto loc_2e835;
        case m2c::kloc_2e84f: 	goto loc_2e84f;
        case m2c::kloc_2e87b: 	goto loc_2e87b;
        case m2c::klocret_2e620: 	goto locret_2e620;
        case m2c::klocret_2e756: 	goto locret_2e756;
        case m2c::ksub_2e4b0: 	goto sub_2e4b0;
        case m2c::ksub_2e566: 	goto sub_2e566;
        case m2c::ksub_2e621: 	goto sub_2e621;
        case m2c::ksub_2e6a8: 	goto sub_2e6a8;
        case m2c::ksub_2e757: 	goto sub_2e757;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

