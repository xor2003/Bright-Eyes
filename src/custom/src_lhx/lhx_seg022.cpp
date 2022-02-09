/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group20(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group20:
    _begin:
sub_35078:
	// 83438 
#undef var_8
#define var_8 -8
	// 83441 var_8           = word ptr -8 ;~ 26A9:0008
#undef var_6
#define var_6 -6
	// 83442 var_6           = word ptr -6 ;~ 26A9:0008
#undef var_4
#define var_4 -4
	// 83443 var_4           = word ptr -4 ;~ 26A9:0008
#undef var_2
#define var_2 -2
	// 83444 var_2           = byte ptr -2 ;~ 26A9:0008
#undef arg_0
#define arg_0 4
	// 83445 arg_0           = word ptr  4 ;~ 26A9:0008
#undef arg_2
#define arg_2 6
	// 83446 arg_2           = word ptr  6 ;~ 26A9:0008
#undef arg_4
#define arg_4 8
	// 83447 arg_4           = word ptr  8 ;~ 26A9:0008
cs=0x26a9;eip=0x000008; 	X(PUSH(bp));	// 83449 push    bp ;~ 26A9:0008
cs=0x26a9;eip=0x000009; 	T(MOV(bp, sp));	// 83450 mov     bp, sp ;~ 26A9:0009
cs=0x26a9;eip=0x00000b; 	T(SUB(sp, 8));	// 83451 sub     sp, 8 ;~ 26A9:000B
cs=0x26a9;eip=0x00000e; 	X(PUSH(di));	// 83452 push    di ;~ 26A9:000E
cs=0x26a9;eip=0x00000f; 	X(PUSH(si));	// 83453 push    si ;~ 26A9:000F
cs=0x26a9;eip=0x000010; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 83454 mov     si, [bp+arg_4] ;~ 26A9:0010
cs=0x26a9;eip=0x000013; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 83455 mov     di, [bp+arg_2] ;~ 26A9:0013
cs=0x26a9;eip=0x000016; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 83456 mov     ax, [di] ;~ 26A9:0016
cs=0x26a9;eip=0x000018; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 83457 mov     dx, [di+2] ;~ 26A9:0018
cs=0x26a9;eip=0x00001b; 	T(CMP(*(dw*)(raddr(ds,si+2)), dx));	// 83458 cmp     [si+2], dx ;~ 26A9:001B
cs=0x26a9;eip=0x00001e; 	R(JL(loc_3509a));	// 83459 jl      short loc_3509A ;~ 26A9:001E
cs=0x26a9;eip=0x000020; 	R(JG(loc_35096));	// 83460 jg      short loc_35096 ;~ 26A9:0020
cs=0x26a9;eip=0x000022; 	T(CMP(*(dw*)(raddr(ds,si)), ax));	// 83461 cmp     [si], ax ;~ 26A9:0022
cs=0x26a9;eip=0x000024; 	R(JC(loc_3509a));	// 83462 jb      short loc_3509A ;~ 26A9:0024
loc_35096:
	// 9716 
cs=0x26a9;eip=0x000026; 	T(MOV(al, 1));	// 83465 mov     al, 1 ;~ 26A9:0026
cs=0x26a9;eip=0x000028; 	R(JMP(loc_3509c));	// 83466 jmp     short loc_3509C ;~ 26A9:0028
loc_3509a:
	// 9717 
cs=0x26a9;eip=0x00002a; 	T(SUB(al, al));	// 83471 sub     al, al ;~ 26A9:002A
loc_3509c:
	// 9718 
cs=0x26a9;eip=0x00002c; 	X(MOV(*(raddr(ss,bp+var_2)), al));	// 83474 mov     [bp+var_2], al ;~ 26A9:002C
cs=0x26a9;eip=0x00002f; 	T(MOV(ax, 0x64));	// 83475 mov     ax, 64h ; 'd' ;~ 26A9:002F
cs=0x26a9;eip=0x000032; 	T(CWD);	// 83476 cwd ;~ 26A9:0032
cs=0x26a9;eip=0x000033; 	X(PUSH(dx));	// 83477 push    dx ;~ 26A9:0033
cs=0x26a9;eip=0x000034; 	X(PUSH(ax));	// 83478 push    ax ;~ 26A9:0034
cs=0x26a9;eip=0x000035; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 83479 mov     bx, [bp+arg_0] ;~ 26A9:0035
cs=0x26a9;eip=0x000038; 	X(PUSH(*(dw*)(raddr(ds,bx+2))));	// 83480 push    word ptr [bx+2] ;~ 26A9:0038
cs=0x26a9;eip=0x00003b; 	X(PUSH(*(dw*)(raddr(ds,bx))));	// 83481 push    word ptr [bx] ;~ 26A9:003B
cs=0x26a9;eip=0x00003d; 	R(CALLF(sub_10526,0));	// 83482 call    sub_10526 ;~ 26A9:003D
cs=0x26a9;eip=0x000042; 	T(ADD(ax, *(dw*)(raddr(ds,di))));	// 83483 add     ax, [di] ;~ 26A9:0042
cs=0x26a9;eip=0x000044; 	T(ADC(dx, *(dw*)(raddr(ds,di+2))));	// 83484 adc     dx, [di+2] ;~ 26A9:0044
cs=0x26a9;eip=0x000047; 	T(SUB(ax, *(dw*)(raddr(ds,si))));	// 83485 sub     ax, [si] ;~ 26A9:0047
cs=0x26a9;eip=0x000049; 	T(SBB(dx, *(dw*)(raddr(ds,si+2))));	// 83486 sbb     dx, [si+2] ;~ 26A9:0049
cs=0x26a9;eip=0x00004c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 83487 mov     [bp+var_6], ax ;~ 26A9:004C
cs=0x26a9;eip=0x00004f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 83488 mov     [bp+var_4], dx ;~ 26A9:004F
cs=0x26a9;eip=0x000052; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 83489 mov     [bp+var_8], 0 ;~ 26A9:0052
cs=0x26a9;eip=0x000057; 	R(JMP(loc_350d9));	// 83490 jmp     short loc_350D9 ;~ 26A9:0057
loc_350c9:
	// 9719 
cs=0x26a9;eip=0x000059; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), 2));	// 83494 add     [bp+var_8], 2 ;~ 26A9:0059
cs=0x26a9;eip=0x00005d; 	T(MOV(al, 2));	// 83495 mov     al, 2 ;~ 26A9:005D
cs=0x26a9;eip=0x00005f; 	X(PUSH(ax));	// 83496 push    ax ;~ 26A9:005F
cs=0x26a9;eip=0x000060; 	T(ax = bp+var_6);	// 83497 lea     ax, [bp+var_6] ;~ 26A9:0060
cs=0x26a9;eip=0x000063; 	X(PUSH(ax));	// 83498 push    ax ;~ 26A9:0063
cs=0x26a9;eip=0x000064; 	R(CALLF(sub_10648,0));	// 83499 call    sub_10648 ;~ 26A9:0064
loc_350d9:
	// 9720 
cs=0x26a9;eip=0x000069; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 83502 mov     ax, [bp+var_6] ;~ 26A9:0069
cs=0x26a9;eip=0x00006c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 83503 mov     dx, [bp+var_4] ;~ 26A9:006C
cs=0x26a9;eip=0x00006f; 	T(OR(dx, dx));	// 83504 or      dx, dx ;~ 26A9:006F
cs=0x26a9;eip=0x000071; 	R(JGE(loc_350ea));	// 83505 jge     short loc_350EA ;~ 26A9:0071
cs=0x26a9;eip=0x000073; 	T(NEG(ax));	// 83506 neg     ax ;~ 26A9:0073
cs=0x26a9;eip=0x000075; 	T(ADC(dx, 0));	// 83507 adc     dx, 0 ;~ 26A9:0075
cs=0x26a9;eip=0x000078; 	T(NEG(dx));	// 83508 neg     dx ;~ 26A9:0078
loc_350ea:
	// 9721 
cs=0x26a9;eip=0x00007a; 	T(CMP(dx, 1));	// 83511 cmp     dx, 1 ;~ 26A9:007A
cs=0x26a9;eip=0x00007d; 	R(JGE(loc_350c9));	// 83512 jge     short loc_350C9 ;~ 26A9:007D
cs=0x26a9;eip=0x00007f; 	T(MOV(ax, *(dw*)((&unk_57056))));	// 83513 mov     ax, word ptr unk_57056 ;~ 26A9:007F
cs=0x26a9;eip=0x000082; 	T(CWD);	// 83514 cwd ;~ 26A9:0082
cs=0x26a9;eip=0x000083; 	X(PUSH(dx));	// 83515 push    dx ;~ 26A9:0083
cs=0x26a9;eip=0x000084; 	X(PUSH(ax));	// 83516 push    ax ;~ 26A9:0084
cs=0x26a9;eip=0x000085; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 83517 push    [bp+var_4] ;~ 26A9:0085
cs=0x26a9;eip=0x000088; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 83518 push    [bp+var_6] ;~ 26A9:0088
cs=0x26a9;eip=0x00008b; 	R(CALLF(sub_105c2,0));	// 83519 call    sub_105C2 ;~ 26A9:008B
cs=0x26a9;eip=0x000090; 	T(MOV(cl, 8));	// 83520 mov     cl, 8 ;~ 26A9:0090
cs=0x26a9;eip=0x000092; 	R(CALLF(sub_10240,0));	// 83521 call    sub_10240 ;~ 26A9:0092
cs=0x26a9;eip=0x000097; 	T(MOV(cl, *(db*)(raddr(ss,bp+var_8))));	// 83522 mov     cl, byte ptr [bp+var_8] ;~ 26A9:0097
cs=0x26a9;eip=0x00009a; 	R(CALLF(sub_105f6,0));	// 83523 call    sub_105F6 ;~ 26A9:009A
cs=0x26a9;eip=0x00009f; 	X(ADD(*(dw*)(raddr(ds,si)), ax));	// 83524 add     [si], ax ;~ 26A9:009F
cs=0x26a9;eip=0x0000a1; 	X(ADC(*(dw*)(raddr(ds,si+2)), dx));	// 83525 adc     [si+2], dx ;~ 26A9:00A1
cs=0x26a9;eip=0x0000a4; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 83526 mov     ax, [di] ;~ 26A9:00A4
cs=0x26a9;eip=0x0000a6; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 83527 mov     dx, [di+2] ;~ 26A9:00A6
cs=0x26a9;eip=0x0000a9; 	T(CMP(*(dw*)(raddr(ds,si+2)), dx));	// 83528 cmp     [si+2], dx ;~ 26A9:00A9
cs=0x26a9;eip=0x0000ac; 	R(JL(loc_35129));	// 83529 jl      short loc_35129 ;~ 26A9:00AC
cs=0x26a9;eip=0x0000ae; 	R(JG(loc_35124));	// 83530 jg      short loc_35124 ;~ 26A9:00AE
cs=0x26a9;eip=0x0000b0; 	T(CMP(*(dw*)(raddr(ds,si)), ax));	// 83531 cmp     [si], ax ;~ 26A9:00B0
cs=0x26a9;eip=0x0000b2; 	R(JC(loc_35129));	// 83532 jb      short loc_35129 ;~ 26A9:00B2
loc_35124:
	// 9722 
cs=0x26a9;eip=0x0000b4; 	T(MOV(ax, 1));	// 83535 mov     ax, 1 ;~ 26A9:00B4
cs=0x26a9;eip=0x0000b7; 	R(JMP(loc_3512b));	// 83536 jmp     short loc_3512B ;~ 26A9:00B7
loc_35129:
	// 9723 
cs=0x26a9;eip=0x0000b9; 	T(SUB(ax, ax));	// 83541 sub     ax, ax ;~ 26A9:00B9
loc_3512b:
	// 9724 
cs=0x26a9;eip=0x0000bb; 	T(MOV(cx, ax));	// 83544 mov     cx, ax ;~ 26A9:00BB
cs=0x26a9;eip=0x0000bd; 	T(MOV(al, *(raddr(ss,bp+var_2))));	// 83545 mov     al, [bp+var_2] ;~ 26A9:00BD
cs=0x26a9;eip=0x0000c0; 	T(CBW);	// 83546 cbw ;~ 26A9:00C0
cs=0x26a9;eip=0x0000c1; 	T(CMP(cx, ax));	// 83547 cmp     cx, ax ;~ 26A9:00C1
cs=0x26a9;eip=0x0000c3; 	R(JZ(loc_3513f));	// 83548 jz      short loc_3513F ;~ 26A9:00C3
cs=0x26a9;eip=0x0000c5; 	T(MOV(ax, *(dw*)(raddr(ds,di))));	// 83549 mov     ax, [di] ;~ 26A9:00C5
cs=0x26a9;eip=0x0000c7; 	T(MOV(dx, *(dw*)(raddr(ds,di+2))));	// 83550 mov     dx, [di+2] ;~ 26A9:00C7
cs=0x26a9;eip=0x0000ca; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 83551 mov     [si], ax ;~ 26A9:00CA
cs=0x26a9;eip=0x0000cc; 	X(MOV(*(dw*)(raddr(ds,si+2)), dx));	// 83552 mov     [si+2], dx ;~ 26A9:00CC
loc_3513f:
	// 9725 
cs=0x26a9;eip=0x0000cf; 	X(POP(si));	// 83555 pop     si ;~ 26A9:00CF
cs=0x26a9;eip=0x0000d0; 	X(POP(di));	// 83556 pop     di ;~ 26A9:00D0
cs=0x26a9;eip=0x0000d1; 	T(MOV(sp, bp));	// 83557 mov     sp, bp ;~ 26A9:00D1
cs=0x26a9;eip=0x0000d3; 	X(POP(bp));	// 83558 pop     bp ;~ 26A9:00D3
cs=0x26a9;eip=0x0000d4; 	R(RETN(6));	// 83559 retn    6 ;~ 26A9:00D4
sub_35147:
	// 83567 
#undef var_58
#define var_58 -0x58
	// 83569 var_58          = byte ptr -58h ;~ 26A9:00D7
#undef var_56
#define var_56 -0x56
	// 83570 var_56          = byte ptr -56h ;~ 26A9:00D7
#undef var_54
#define var_54 -0x54
	// 83571 var_54          = word ptr -54h ;~ 26A9:00D7
#undef var_52
#define var_52 -0x52
	// 83572 var_52          = word ptr -52h ;~ 26A9:00D7
#undef var_50
#define var_50 -0x50
	// 83573 var_50          = word ptr -50h ;~ 26A9:00D7
#undef var_4e
#define var_4e -0x4E
	// 83574 var_4E          = word ptr -4Eh ;~ 26A9:00D7
#undef var_4c
#define var_4c -0x4C
	// 83575 var_4C          = word ptr -4Ch ;~ 26A9:00D7
#undef var_4a
#define var_4a -0x4A
	// 83576 var_4A          = word ptr -4Ah ;~ 26A9:00D7
#undef var_48
#define var_48 -0x48
	// 83577 var_48          = word ptr -48h ;~ 26A9:00D7
#undef var_46
#define var_46 -0x46
	// 83578 var_46          = word ptr -46h ;~ 26A9:00D7
#undef var_44
#define var_44 -0x44
	// 83579 var_44          = word ptr -44h ;~ 26A9:00D7
#undef var_42
#define var_42 -0x42
	// 83580 var_42          = byte ptr -42h ;~ 26A9:00D7
#undef var_40
#define var_40 -0x40
	// 83581 var_40          = word ptr -40h ;~ 26A9:00D7
#undef var_3e
#define var_3e -0x3E
	// 83582 var_3E          = word ptr -3Eh ;~ 26A9:00D7
#undef var_3c
#define var_3c -0x3C
	// 83583 var_3C          = word ptr -3Ch ;~ 26A9:00D7
#undef var_3a
#define var_3a -0x3A
	// 83584 var_3A          = word ptr -3Ah ;~ 26A9:00D7
#undef var_36
#define var_36 -0x36
	// 83585 var_36          = word ptr -36h ;~ 26A9:00D7
#undef var_32
#define var_32 -0x32
	// 83586 var_32          = word ptr -32h ;~ 26A9:00D7
#undef var_30
#define var_30 -0x30
	// 83587 var_30          = word ptr -30h ;~ 26A9:00D7
#undef var_2e
#define var_2e -0x2E
	// 83588 var_2E          = word ptr -2Eh ;~ 26A9:00D7
#undef var_2c
#define var_2c -0x2C
	// 83589 var_2C          = byte ptr -2Ch ;~ 26A9:00D7
#undef var_2a
#define var_2a -0x2A
	// 83590 var_2A          = byte ptr -2Ah ;~ 26A9:00D7
#undef var_28
#define var_28 -0x28
	// 83591 var_28          = word ptr -28h ;~ 26A9:00D7
#undef var_26
#define var_26 -0x26
	// 83592 var_26          = word ptr -26h ;~ 26A9:00D7
#undef var_22
#define var_22 -0x22
	// 83593 var_22          = word ptr -22h ;~ 26A9:00D7
#undef var_20
#define var_20 -0x20
	// 83594 var_20          = word ptr -20h ;~ 26A9:00D7
#undef var_1e
#define var_1e -0x1E
	// 83595 var_1E          = byte ptr -1Eh ;~ 26A9:00D7
#undef var_1c
#define var_1c -0x1C
	// 83596 var_1C          = word ptr -1Ch ;~ 26A9:00D7
#undef var_1a
#define var_1a -0x1A
	// 83597 var_1A          = word ptr -1Ah ;~ 26A9:00D7
#undef var_18
#define var_18 -0x18
	// 83598 var_18          = word ptr -18h ;~ 26A9:00D7
#undef var_16
#define var_16 -0x16
	// 83599 var_16          = word ptr -16h ;~ 26A9:00D7
#undef var_14
#define var_14 -0x14
	// 83600 var_14          = word ptr -14h ;~ 26A9:00D7
#undef var_12
#define var_12 -0x12
	// 83601 var_12          = word ptr -12h ;~ 26A9:00D7
#undef var_10
#define var_10 -0x10
	// 83602 var_10          = byte ptr -10h ;~ 26A9:00D7
#undef var_e
#define var_e -0x0E
	// 83603 var_E           = word ptr -0Eh ;~ 26A9:00D7
#undef var_c
#define var_c -0x0C
	// 83604 var_C           = word ptr -0Ch ;~ 26A9:00D7
#undef var_a
#define var_a -0x0A
	// 83605 var_A           = word ptr -0Ah ;~ 26A9:00D7
#undef var_8
#define var_8 -8
	// 83606 var_8           = word ptr -8 ;~ 26A9:00D7
#undef var_6
#define var_6 -6
	// 83607 var_6           = word ptr -6 ;~ 26A9:00D7
#undef var_4
#define var_4 -4
	// 83608 var_4           = word ptr -4 ;~ 26A9:00D7
#undef var_2
#define var_2 -2
	// 83609 var_2           = word ptr -2 ;~ 26A9:00D7
#undef arg_0
#define arg_0 6
	// 83610 arg_0           = word ptr  6 ;~ 26A9:00D7
#undef arg_2
#define arg_2 8
	// 83611 arg_2           = word ptr  8 ;~ 26A9:00D7
#undef arg_4
#define arg_4 0x0A
	// 83612 arg_4           = word ptr  0Ah ;~ 26A9:00D7
#undef arg_6
#define arg_6 0x0C
	// 83613 arg_6           = word ptr  0Ch ;~ 26A9:00D7
#undef arg_8
#define arg_8 0x0E
	// 83614 arg_8           = word ptr  0Eh ;~ 26A9:00D7
#undef arg_a
#define arg_a 0x10
	// 83615 arg_A           = word ptr  10h ;~ 26A9:00D7
#undef arg_c
#define arg_c 0x12
	// 83616 arg_C           = word ptr  12h ;~ 26A9:00D7
cs=0x26a9;eip=0x0000d7; 	X(PUSH(bp));	// 83618 push    bp ;~ 26A9:00D7
cs=0x26a9;eip=0x0000d8; 	T(MOV(bp, sp));	// 83619 mov     bp, sp ;~ 26A9:00D8
cs=0x26a9;eip=0x0000da; 	T(SUB(sp, 0x58));	// 83620 sub     sp, 58h ;~ 26A9:00DA
cs=0x26a9;eip=0x0000dd; 	X(PUSH(di));	// 83621 push    di ;~ 26A9:00DD
cs=0x26a9;eip=0x0000de; 	X(PUSH(si));	// 83622 push    si ;~ 26A9:00DE
cs=0x26a9;eip=0x0000df; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 83623 mov     ax, [bp+arg_C] ;~ 26A9:00DF
cs=0x26a9;eip=0x0000e2; 	T(di = bp+var_3a);	// 83624 lea     di, [bp+var_3A] ;~ 26A9:00E2
cs=0x26a9;eip=0x0000e5; 	T(MOV(si, ax));	// 83625 mov     si, ax ;~ 26A9:00E5
cs=0x26a9;eip=0x0000e7; 	X(PUSH(ss));	// 83626 push    ss ;~ 26A9:00E7
cs=0x26a9;eip=0x0000e8; 	X(POP(es));	// 83627 pop     es ;~ 26A9:00E8
cs=0x26a9;eip=0x0000e9; 	X(MOVSW);	// 83628 movsw ;~ 26A9:00E9
cs=0x26a9;eip=0x0000ea; 	X(MOVSW);	// 83629 movsw ;~ 26A9:00EA
cs=0x26a9;eip=0x0000eb; 	X(MOVSW);	// 83630 movsw ;~ 26A9:00EB
cs=0x26a9;eip=0x0000ec; 	X(MOVSW);	// 83631 movsw ;~ 26A9:00EC
cs=0x26a9;eip=0x0000ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 83632 mov     [bp+var_2], 0 ;~ 26A9:00ED
cs=0x26a9;eip=0x0000f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), 0x870));	// 83633 mov     [bp+var_30], 870h ;~ 26A9:00F2
cs=0x26a9;eip=0x0000f7; 	T(MOV(ax, *(dw*)((&unk_47ad0))));	// 83634 mov     ax, word ptr unk_47AD0 ;~ 26A9:00F7
cs=0x26a9;eip=0x0000fa; 	T(MOV(dx, *(dw*)((&unk_47ad2))));	// 83635 mov     dx, word ptr unk_47AD2 ;~ 26A9:00FA
cs=0x26a9;eip=0x0000fe; 	T(ADD(ax, 6));	// 83636 add     ax, 6 ;~ 26A9:00FE
cs=0x26a9;eip=0x000101; 	T(di = bp+var_e);	// 83637 lea     di, [bp+var_E] ;~ 26A9:0101
cs=0x26a9;eip=0x000104; 	T(MOV(si, ax));	// 83638 mov     si, ax ;~ 26A9:0104
cs=0x26a9;eip=0x000106; 	X(PUSH(ds));	// 83639 push    ds ;~ 26A9:0106
cs=0x26a9;eip=0x000107; 	T(MOV(ds, dx));	// 83640 mov     ds, dx ;~ 26A9:0107
cs=0x26a9;eip=0x000109; 	T(MOV(cx, 6));	// 83641 mov     cx, 6 ;~ 26A9:0109
	// 83642 repne movsw ;~ 26A9:010C
cs=0x26a9;eip=0x00010c; 	X(	REPNE MOVSW);	// 83642 repne movsw ;~ 26A9:010C
cs=0x26a9;eip=0x00010e; 	X(POP(ds));	// 83643 pop     ds ;~ 26A9:010E
cs=0x26a9;eip=0x00010f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x2800));	// 83644 mov     [bp+var_A], 2800h ;~ 26A9:010F
cs=0x26a9;eip=0x000114; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0));	// 83645 mov     [bp+var_8], 0 ;~ 26A9:0114
cs=0x26a9;eip=0x000119; 	T(ax = bp+var_e);	// 83646 lea     ax, [bp+var_E] ;~ 26A9:0119
cs=0x26a9;eip=0x00011c; 	X(PUSH(ss));	// 83647 push    ss ;~ 26A9:011C
cs=0x26a9;eip=0x00011d; 	X(PUSH(ax));	// 83648 push    ax ;~ 26A9:011D
cs=0x26a9;eip=0x00011e; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 83649 les     bx, dword ptr unk_47AD0 ;~ 26A9:011E
cs=0x26a9;eip=0x000122; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 83650 mov     ax, es:[bx+12h] ;~ 26A9:0122
cs=0x26a9;eip=0x000126; 	T(ADD(ax, 0x5A0));	// 83651 add     ax, 5A0h ;~ 26A9:0126
cs=0x26a9;eip=0x000129; 	X(PUSH(ax));	// 83652 push    ax ;~ 26A9:0129
cs=0x26a9;eip=0x00012a; 	T(SUB(ax, ax));	// 83653 sub     ax, ax ;~ 26A9:012A
cs=0x26a9;eip=0x00012c; 	X(PUSH(ax));	// 83654 push    ax ;~ 26A9:012C
cs=0x26a9;eip=0x00012d; 	T(MOV(ax, 0x4600));	// 83655 mov     ax, 4600h ;~ 26A9:012D
cs=0x26a9;eip=0x000130; 	T(CWD);	// 83656 cwd ;~ 26A9:0130
cs=0x26a9;eip=0x000131; 	X(PUSH(dx));	// 83657 push    dx ;~ 26A9:0131
cs=0x26a9;eip=0x000132; 	X(PUSH(ax));	// 83658 push    ax ;~ 26A9:0132
cs=0x26a9;eip=0x000133; 	R(CALLF(sub_2f4ee,0));	// 83659 call    sub_2F4EE ;~ 26A9:0133
cs=0x26a9;eip=0x000138; 	X(MOV(*(dw*)(raddr(ss,bp+var_50)), 0x0B3F));	// 83660 mov     [bp+var_50], 0B3Fh ;~ 26A9:0138
cs=0x26a9;eip=0x00013d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 83661 mov     ax, [bp+var_E] ;~ 26A9:013D
cs=0x26a9;eip=0x000140; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 83662 mov     dx, [bp+var_C] ;~ 26A9:0140
cs=0x26a9;eip=0x000143; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83663 sub     ax, [bp+arg_0] ;~ 26A9:0143
cs=0x26a9;eip=0x000146; 	T(SBB(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 83664 sbb     dx, [bp+arg_2] ;~ 26A9:0146
cs=0x26a9;eip=0x000149; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 83665 mov     [bp+var_4E], ax ;~ 26A9:0149
cs=0x26a9;eip=0x00014c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), dx));	// 83666 mov     [bp+var_4C], dx ;~ 26A9:014C
cs=0x26a9;eip=0x00014f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 83667 mov     ax, [bp+var_A] ;~ 26A9:014F
cs=0x26a9;eip=0x000152; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 83668 mov     dx, [bp+var_8] ;~ 26A9:0152
cs=0x26a9;eip=0x000155; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83669 sub     ax, [bp+arg_4] ;~ 26A9:0155
cs=0x26a9;eip=0x000158; 	T(SBB(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 83670 sbb     dx, [bp+arg_6] ;~ 26A9:0158
cs=0x26a9;eip=0x00015b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4a)), ax));	// 83671 mov     [bp+var_4A], ax ;~ 26A9:015B
cs=0x26a9;eip=0x00015e; 	X(MOV(*(dw*)(raddr(ss,bp+var_48)), dx));	// 83672 mov     [bp+var_48], dx ;~ 26A9:015E
cs=0x26a9;eip=0x000161; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 83673 mov     ax, [bp+var_6] ;~ 26A9:0161
cs=0x26a9;eip=0x000164; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 83674 mov     dx, [bp+var_4] ;~ 26A9:0164
cs=0x26a9;eip=0x000167; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 83675 sub     ax, [bp+arg_8] ;~ 26A9:0167
cs=0x26a9;eip=0x00016a; 	T(SBB(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 83676 sbb     dx, [bp+arg_A] ;~ 26A9:016A
cs=0x26a9;eip=0x00016d; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), ax));	// 83677 mov     [bp+var_46], ax ;~ 26A9:016D
cs=0x26a9;eip=0x000170; 	X(MOV(*(dw*)(raddr(ss,bp+var_44)), dx));	// 83678 mov     [bp+var_44], dx ;~ 26A9:0170
cs=0x26a9;eip=0x000173; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 83679 mov     ax, [bp+arg_0] ;~ 26A9:0173
cs=0x26a9;eip=0x000176; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 83680 mov     dx, [bp+arg_2] ;~ 26A9:0176
cs=0x26a9;eip=0x000179; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 83681 mov     [bp+var_1C], ax ;~ 26A9:0179
cs=0x26a9;eip=0x00017c; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 83682 mov     [bp+var_1A], dx ;~ 26A9:017C
cs=0x26a9;eip=0x00017f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 83683 mov     ax, [bp+arg_4] ;~ 26A9:017F
cs=0x26a9;eip=0x000182; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 83684 mov     dx, [bp+arg_6] ;~ 26A9:0182
cs=0x26a9;eip=0x000185; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 83685 mov     [bp+var_18], ax ;~ 26A9:0185
cs=0x26a9;eip=0x000188; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 83686 mov     [bp+var_16], dx ;~ 26A9:0188
cs=0x26a9;eip=0x00018b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 83687 mov     ax, [bp+arg_8] ;~ 26A9:018B
cs=0x26a9;eip=0x00018e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 83688 mov     dx, [bp+arg_A] ;~ 26A9:018E
cs=0x26a9;eip=0x000191; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 83689 mov     [bp+var_14], ax ;~ 26A9:0191
cs=0x26a9;eip=0x000194; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 83690 mov     [bp+var_12], dx ;~ 26A9:0194
cs=0x26a9;eip=0x000197; 	X(MOV(*(dw*)(raddr(ss,bp+var_54)), 0));	// 83691 mov     [bp+var_54], 0 ;~ 26A9:0197
cs=0x26a9;eip=0x00019c; 	T(SUB(al, al));	// 83692 sub     al, al ;~ 26A9:019C
cs=0x26a9;eip=0x00019e; 	X(MOV(*(raddr(ss,bp+var_1e)), al));	// 83693 mov     [bp+var_1E], al ;~ 26A9:019E
cs=0x26a9;eip=0x0001a1; 	X(MOV(*(raddr(ss,bp+var_58)), al));	// 83694 mov     [bp+var_58], al ;~ 26A9:01A1
cs=0x26a9;eip=0x0001a4; 	X(MOV(*(raddr(ss,bp+var_2c)), al));	// 83695 mov     [bp+var_2C], al ;~ 26A9:01A4
cs=0x26a9;eip=0x0001a7; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 83696 mov     [bp+var_10], al ;~ 26A9:01A7
cs=0x26a9;eip=0x0001aa; 	X(MOV(*(raddr(ss,bp+var_42)), al));	// 83697 mov     [bp+var_42], al ;~ 26A9:01AA
cs=0x26a9;eip=0x0001ad; 	T(MOV(ax, *(dw*)((&unk_5649a))));	// 83698 mov     ax, word ptr unk_5649A ;~ 26A9:01AD
cs=0x26a9;eip=0x0001b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 83699 mov     [bp+var_22], ax ;~ 26A9:01B0
cs=0x26a9;eip=0x0001b3; 	T(MOV(ax, *(dw*)((&unk_57068))));	// 83700 mov     ax, word ptr unk_57068 ;~ 26A9:01B3
cs=0x26a9;eip=0x0001b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), ax));	// 83701 mov     [bp+var_52], ax ;~ 26A9:01B6
cs=0x26a9;eip=0x0001b9; 	T(MOV(al, unk_564ec));	// 83702 mov     al, byte ptr unk_564EC ;~ 26A9:01B9
cs=0x26a9;eip=0x0001bc; 	X(MOV(*(raddr(ss,bp+var_2a)), al));	// 83703 mov     [bp+var_2A], al ;~ 26A9:01BC
cs=0x26a9;eip=0x0001bf; 	X(MOV(unk_564ec, 0));	// 83704 mov     byte ptr unk_564EC, 0 ;~ 26A9:01BF
cs=0x26a9;eip=0x0001c4; 	T(MOV(al, unk_570ba));	// 83705 mov     al, byte ptr unk_570BA ;~ 26A9:01C4
cs=0x26a9;eip=0x0001c7; 	X(MOV(*(raddr(ss,bp+var_56)), al));	// 83706 mov     [bp+var_56], al ;~ 26A9:01C7
cs=0x26a9;eip=0x0001ca; 	X(MOV(unk_570ba, 0));	// 83707 mov     byte ptr unk_570BA, 0 ;~ 26A9:01CA
cs=0x26a9;eip=0x0001cf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_36))));	// 83708 mov     ax, [bp+var_36] ;~ 26A9:01CF
cs=0x26a9;eip=0x0001d2; 	T(SAR(ax, 1));	// 83709 sar     ax, 1 ;~ 26A9:01D2
cs=0x26a9;eip=0x0001d4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_3a))));	// 83710 add     ax, [bp+var_3A] ;~ 26A9:01D4
cs=0x26a9;eip=0x0001d7; 	X(MOV(*(dw*)((&unk_49ff8)), ax));	// 83711 mov     word ptr unk_49FF8, ax ;~ 26A9:01D7
cs=0x26a9;eip=0x0001da; 	X(MOV(*(dw*)(raddr(ss,bp+var_3e)), ax));	// 83712 mov     [bp+var_3E], ax ;~ 26A9:01DA
cs=0x26a9;eip=0x0001dd; 	T(CMP(unk_47ac2, 0));	// 83713 cmp     byte ptr unk_47AC2, 0 ;~ 26A9:01DD
cs=0x26a9;eip=0x0001e2; 	R(JNZ(loc_35257));	// 83714 jnz     short loc_35257 ;~ 26A9:01E2
cs=0x26a9;eip=0x0001e4; 	R(JMP(loc_355a6));	// 83715 jmp     loc_355A6 ;~ 26A9:01E4
loc_35257:
	// 9726 
cs=0x26a9;eip=0x0001e7; 	X(PUSH(word_5651a));	// 83719 push    word_5651A ;~ 26A9:01E7
cs=0x26a9;eip=0x0001eb; 	T(MOV(ax, 1));	// 83720 mov     ax, 1 ;~ 26A9:01EB
cs=0x26a9;eip=0x0001ee; 	T(SUB(ax, word_5651a));	// 83721 sub     ax, word_5651A ;~ 26A9:01EE
cs=0x26a9;eip=0x0001f2; 	X(PUSH(ax));	// 83722 push    ax ;~ 26A9:01F2
cs=0x26a9;eip=0x0001f3; 	R(CALLF(sub_2c939,0));	// 83723 call    sub_2C939 ;~ 26A9:01F3
cs=0x26a9;eip=0x0001f8; 	R(CALLF(sub_3101f,0));	// 83724 call    sub_3101F ;~ 26A9:01F8
cs=0x26a9;eip=0x0001fd; 	R(CALLF(sub_1bbee,0));	// 83725 call    sub_1BBEE ;~ 26A9:01FD
cs=0x26a9;eip=0x000202; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), 0));	// 83726 mov     [bp+var_20], 0 ;~ 26A9:0202
loc_35277:
	// 9727 
cs=0x26a9;eip=0x000207; 	R(CALLF(sub_2ee71,0));	// 83730 call    sub_2EE71 ;~ 26A9:0207
cs=0x26a9;eip=0x00020c; 	X(MOV(*(dw*)(raddr(ss,bp+var_3c)), ax));	// 83731 mov     [bp+var_3C], ax ;~ 26A9:020C
cs=0x26a9;eip=0x00020f; 	T(OR(ax, ax));	// 83732 or      ax, ax ;~ 26A9:020F
cs=0x26a9;eip=0x000211; 	R(JZ(loc_35290));	// 83733 jz      short loc_35290 ;~ 26A9:0211
cs=0x26a9;eip=0x000213; 	T(CMP(ax, 3));	// 83734 cmp     ax, 3 ;~ 26A9:0213
cs=0x26a9;eip=0x000216; 	R(JZ(loc_3528b));	// 83735 jz      short loc_3528B ;~ 26A9:0216
cs=0x26a9;eip=0x000218; 	R(JMP(loc_355a6));	// 83736 jmp     loc_355A6 ;~ 26A9:0218
loc_3528b:
	// 9728 
cs=0x26a9;eip=0x00021b; 	R(CALLF(sub_318b6,0));	// 83740 call    sub_318B6 ;~ 26A9:021B
loc_35290:
	// 9729 
cs=0x26a9;eip=0x000220; 	R(CALLF(sub_1bc16,0));	// 83743 call    sub_1BC16 ;~ 26A9:0220
cs=0x26a9;eip=0x000225; 	T(CMP(*(dw*)((&unk_57056)), 0x80));	// 83744 cmp     word ptr unk_57056, 80h ; '€' ;~ 26A9:0225
cs=0x26a9;eip=0x00022b; 	R(JLE(loc_352a3));	// 83745 jle     short loc_352A3 ;~ 26A9:022B
cs=0x26a9;eip=0x00022d; 	X(MOV(*(dw*)((&unk_57056)), 0x80));	// 83746 mov     word ptr unk_57056, 80h ; '€' ;~ 26A9:022D
loc_352a3:
	// 9730 
cs=0x26a9;eip=0x000233; 	T(CMP(*(dw*)((&unk_57058)), 1));	// 83749 cmp     word ptr unk_57058, 1 ;~ 26A9:0233
cs=0x26a9;eip=0x000238; 	R(JC(loc_352c5));	// 83750 jb      short loc_352C5 ;~ 26A9:0238
cs=0x26a9;eip=0x00023a; 	T(CMP(*(raddr(ss,bp+var_1e)), 0));	// 83751 cmp     [bp+var_1E], 0 ;~ 26A9:023A
cs=0x26a9;eip=0x00023e; 	R(JNZ(loc_352c5));	// 83752 jnz     short loc_352C5 ;~ 26A9:023E
cs=0x26a9;eip=0x000240; 	X(MOV(*(raddr(ss,bp+var_1e)), 1));	// 83753 mov     [bp+var_1E], 1 ;~ 26A9:0240
cs=0x26a9;eip=0x000244; 	T(di = bp+var_3a);	// 83754 lea     di, [bp+var_3A] ;~ 26A9:0244
cs=0x26a9;eip=0x000247; 	T(MOV(si, 0x180));	// 83755 mov     si, 180h ;~ 26A9:0247
cs=0x26a9;eip=0x00024a; 	X(PUSH(ss));	// 83756 push    ss ;~ 26A9:024A
cs=0x26a9;eip=0x00024b; 	X(POP(es));	// 83757 pop     es ;~ 26A9:024B
cs=0x26a9;eip=0x00024c; 	X(MOVSW);	// 83758 movsw ;~ 26A9:024C
cs=0x26a9;eip=0x00024d; 	X(MOVSW);	// 83759 movsw ;~ 26A9:024D
cs=0x26a9;eip=0x00024e; 	X(MOVSW);	// 83760 movsw ;~ 26A9:024E
cs=0x26a9;eip=0x00024f; 	X(MOVSW);	// 83761 movsw ;~ 26A9:024F
cs=0x26a9;eip=0x000250; 	R(CALLF(sub_20565,0));	// 83762 call    sub_20565 ;~ 26A9:0250
loc_352c5:
	// 9731 
cs=0x26a9;eip=0x000255; 	T(CMP(*(dw*)((&unk_57058)), 2));	// 83766 cmp     word ptr unk_57058, 2 ;~ 26A9:0255
cs=0x26a9;eip=0x00025a; 	R(JNC(loc_352e8));	// 83767 jnb     short loc_352E8 ;~ 26A9:025A
cs=0x26a9;eip=0x00025c; 	X(PUSH(word_5705a));	// 83768 push    word_5705A ;~ 26A9:025C
cs=0x26a9;eip=0x000260; 	T(MOV(ax, 0x0A0));	// 83769 mov     ax, 0A0h ; ' ' ;~ 26A9:0260
cs=0x26a9;eip=0x000263; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 83770 sub     ax, [bp+var_3E] ;~ 26A9:0263
cs=0x26a9;eip=0x000266; 	X(PUSH(ax));	// 83771 push    ax ;~ 26A9:0266
cs=0x26a9;eip=0x000267; 	T(MOV(ax, 0x200));	// 83772 mov     ax, 200h ;~ 26A9:0267
cs=0x26a9;eip=0x00026a; 	X(PUSH(ax));	// 83773 push    ax ;~ 26A9:026A
cs=0x26a9;eip=0x00026b; 	R(CALLF(sub_2f01c,0));	// 83774 call    sub_2F01C ;~ 26A9:026B
cs=0x26a9;eip=0x000270; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_3e))));	// 83775 add     ax, [bp+var_3E] ;~ 26A9:0270
cs=0x26a9;eip=0x000273; 	X(MOV(*(dw*)((&unk_49ff8)), ax));	// 83776 mov     word ptr unk_49FF8, ax ;~ 26A9:0273
cs=0x26a9;eip=0x000276; 	R(JMP(loc_352ee));	// 83777 jmp     short loc_352EE ;~ 26A9:0276
loc_352e8:
	// 9732 
cs=0x26a9;eip=0x000278; 	X(MOV(*(dw*)((&unk_49ff8)), 0x0A0));	// 83781 mov     word ptr unk_49FF8, 0A0h ; ' ' ;~ 26A9:0278
loc_352ee:
	// 9733 
cs=0x26a9;eip=0x00027e; 	T(ax = bp+var_1c);	// 83784 lea     ax, [bp+var_1C] ;~ 26A9:027E
cs=0x26a9;eip=0x000281; 	X(PUSH(ax));	// 83785 push    ax ;~ 26A9:0281
cs=0x26a9;eip=0x000282; 	T(ax = bp+var_e);	// 83786 lea     ax, [bp+var_E] ;~ 26A9:0282
cs=0x26a9;eip=0x000285; 	X(PUSH(ax));	// 83787 push    ax ;~ 26A9:0285
cs=0x26a9;eip=0x000286; 	T(ax = bp+var_4e);	// 83788 lea     ax, [bp+var_4E] ;~ 26A9:0286
cs=0x26a9;eip=0x000289; 	X(PUSH(ax));	// 83789 push    ax ;~ 26A9:0289
cs=0x26a9;eip=0x00028a; 	R(CALL(sub_35078,0));	// 83790 call    sub_35078 ;~ 26A9:028A
cs=0x26a9;eip=0x00028d; 	T(ax = bp+var_18);	// 83791 lea     ax, [bp+var_18] ;~ 26A9:028D
cs=0x26a9;eip=0x000290; 	X(PUSH(ax));	// 83792 push    ax ;~ 26A9:0290
cs=0x26a9;eip=0x000291; 	T(ax = bp+var_a);	// 83793 lea     ax, [bp+var_A] ;~ 26A9:0291
cs=0x26a9;eip=0x000294; 	X(PUSH(ax));	// 83794 push    ax ;~ 26A9:0294
cs=0x26a9;eip=0x000295; 	T(ax = bp+var_4a);	// 83795 lea     ax, [bp+var_4A] ;~ 26A9:0295
cs=0x26a9;eip=0x000298; 	X(PUSH(ax));	// 83796 push    ax ;~ 26A9:0298
cs=0x26a9;eip=0x000299; 	R(CALL(sub_35078,0));	// 83797 call    sub_35078 ;~ 26A9:0299
cs=0x26a9;eip=0x00029c; 	T(ax = bp+var_14);	// 83798 lea     ax, [bp+var_14] ;~ 26A9:029C
cs=0x26a9;eip=0x00029f; 	X(PUSH(ax));	// 83799 push    ax ;~ 26A9:029F
cs=0x26a9;eip=0x0002a0; 	T(ax = bp+var_6);	// 83800 lea     ax, [bp+var_6] ;~ 26A9:02A0
cs=0x26a9;eip=0x0002a3; 	X(PUSH(ax));	// 83801 push    ax ;~ 26A9:02A3
cs=0x26a9;eip=0x0002a4; 	T(ax = bp+var_46);	// 83802 lea     ax, [bp+var_46] ;~ 26A9:02A4
cs=0x26a9;eip=0x0002a7; 	X(PUSH(ax));	// 83803 push    ax ;~ 26A9:02A7
cs=0x26a9;eip=0x0002a8; 	R(CALL(sub_35078,0));	// 83804 call    sub_35078 ;~ 26A9:02A8
cs=0x26a9;eip=0x0002ab; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 83805 mov     ax, [bp+var_14] ;~ 26A9:02AB
cs=0x26a9;eip=0x0002ae; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_12))));	// 83806 mov     dx, [bp+var_12] ;~ 26A9:02AE
cs=0x26a9;eip=0x0002b1; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 83807 sub     ax, [bp+var_6] ;~ 26A9:02B1
cs=0x26a9;eip=0x0002b4; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_4))));	// 83808 sbb     dx, [bp+var_4] ;~ 26A9:02B4
cs=0x26a9;eip=0x0002b7; 	R(JNS(loc_35330));	// 83809 jns     short loc_35330 ;~ 26A9:02B7
cs=0x26a9;eip=0x0002b9; 	T(NEG(ax));	// 83810 neg     ax ;~ 26A9:02B9
cs=0x26a9;eip=0x0002bb; 	T(ADC(dx, 0));	// 83811 adc     dx, 0 ;~ 26A9:02BB
cs=0x26a9;eip=0x0002be; 	T(NEG(dx));	// 83812 neg     dx ;~ 26A9:02BE
loc_35330:
	// 9734 
cs=0x26a9;eip=0x0002c0; 	T(MOV(cx, ax));	// 83815 mov     cx, ax ;~ 26A9:02C0
cs=0x26a9;eip=0x0002c2; 	T(MOV(bx, dx));	// 83816 mov     bx, dx ;~ 26A9:02C2
cs=0x26a9;eip=0x0002c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 83817 mov     ax, [bp+var_18] ;~ 26A9:02C4
cs=0x26a9;eip=0x0002c7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 83818 mov     dx, [bp+var_16] ;~ 26A9:02C7
cs=0x26a9;eip=0x0002ca; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 83819 sub     ax, [bp+var_A] ;~ 26A9:02CA
cs=0x26a9;eip=0x0002cd; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_8))));	// 83820 sbb     dx, [bp+var_8] ;~ 26A9:02CD
cs=0x26a9;eip=0x0002d0; 	R(JNS(loc_35349));	// 83821 jns     short loc_35349 ;~ 26A9:02D0
cs=0x26a9;eip=0x0002d2; 	T(NEG(ax));	// 83822 neg     ax ;~ 26A9:02D2
cs=0x26a9;eip=0x0002d4; 	T(ADC(dx, 0));	// 83823 adc     dx, 0 ;~ 26A9:02D4
cs=0x26a9;eip=0x0002d7; 	T(NEG(dx));	// 83824 neg     dx ;~ 26A9:02D7
loc_35349:
	// 9735 
cs=0x26a9;eip=0x0002d9; 	T(MOV(si, ax));	// 83827 mov     si, ax ;~ 26A9:02D9
cs=0x26a9;eip=0x0002db; 	T(MOV(di, dx));	// 83828 mov     di, dx ;~ 26A9:02DB
cs=0x26a9;eip=0x0002dd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 83829 mov     ax, [bp+var_1C] ;~ 26A9:02DD
cs=0x26a9;eip=0x0002e0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1a))));	// 83830 mov     dx, [bp+var_1A] ;~ 26A9:02E0
cs=0x26a9;eip=0x0002e3; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_e))));	// 83831 sub     ax, [bp+var_E] ;~ 26A9:02E3
cs=0x26a9;eip=0x0002e6; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_c))));	// 83832 sbb     dx, [bp+var_C] ;~ 26A9:02E6
cs=0x26a9;eip=0x0002e9; 	R(JNS(loc_35362));	// 83833 jns     short loc_35362 ;~ 26A9:02E9
cs=0x26a9;eip=0x0002eb; 	T(NEG(ax));	// 83834 neg     ax ;~ 26A9:02EB
cs=0x26a9;eip=0x0002ed; 	T(ADC(dx, 0));	// 83835 adc     dx, 0 ;~ 26A9:02ED
cs=0x26a9;eip=0x0002f0; 	T(NEG(dx));	// 83836 neg     dx ;~ 26A9:02F0
loc_35362:
	// 9736 
cs=0x26a9;eip=0x0002f2; 	T(ADD(ax, si));	// 83839 add     ax, si ;~ 26A9:02F2
cs=0x26a9;eip=0x0002f4; 	T(ADC(dx, di));	// 83840 adc     dx, di ;~ 26A9:02F4
cs=0x26a9;eip=0x0002f6; 	T(ADD(ax, cx));	// 83841 add     ax, cx ;~ 26A9:02F6
cs=0x26a9;eip=0x0002f8; 	T(ADC(dx, bx));	// 83842 adc     dx, bx ;~ 26A9:02F8
cs=0x26a9;eip=0x0002fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), ax));	// 83843 mov     [bp+var_28], ax ;~ 26A9:02FA
cs=0x26a9;eip=0x0002fd; 	X(MOV(*(dw*)(raddr(ss,bp+var_26)), dx));	// 83844 mov     [bp+var_26], dx ;~ 26A9:02FD
cs=0x26a9;eip=0x000300; 	T(MOV(cl, 8));	// 83845 mov     cl, 8 ;~ 26A9:0300
cs=0x26a9;eip=0x000302; 	R(CALLF(sub_10240,0));	// 83846 call    sub_10240 ;~ 26A9:0302
cs=0x26a9;eip=0x000307; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_54))));	// 83847 mov     bx, [bp+var_54] ;~ 26A9:0307
cs=0x26a9;eip=0x00030a; 	T(SHL(bx, 1));	// 83848 shl     bx, 1 ;~ 26A9:030A
cs=0x26a9;eip=0x00030c; 	T(MOV(cx, *(dw*)(raddr(ds,bx+0x264A))));	// 83849 mov     cx, [bx+264Ah] ;~ 26A9:030C
cs=0x26a9;eip=0x000310; 	T(SUB(bx, bx));	// 83850 sub     bx, bx ;~ 26A9:0310
cs=0x26a9;eip=0x000312; 	T(CMP(bx, dx));	// 83851 cmp     bx, dx ;~ 26A9:0312
cs=0x26a9;eip=0x000314; 	R(JC(loc_353a1));	// 83852 jb      short loc_353A1 ;~ 26A9:0314
cs=0x26a9;eip=0x000316; 	R(JA(loc_3538c));	// 83853 ja      short loc_3538C ;~ 26A9:0316
cs=0x26a9;eip=0x000318; 	T(CMP(cx, ax));	// 83854 cmp     cx, ax ;~ 26A9:0318
cs=0x26a9;eip=0x00031a; 	R(JBE(loc_353a1));	// 83855 jbe     short loc_353A1 ;~ 26A9:031A
loc_3538c:
	// 9737 
cs=0x26a9;eip=0x00031c; 	X(SAR(*(dw*)(raddr(ss,bp+var_4c)), 1));	// 83858 sar     [bp+var_4C], 1 ;~ 26A9:031C
cs=0x26a9;eip=0x00031f; 	X(RCR(*(dw*)(raddr(ss,bp+var_4e)), 1));	// 83859 rcr     [bp+var_4E], 1 ;~ 26A9:031F
cs=0x26a9;eip=0x000322; 	X(SAR(*(dw*)(raddr(ss,bp+var_48)), 1));	// 83860 sar     [bp+var_48], 1 ;~ 26A9:0322
cs=0x26a9;eip=0x000325; 	X(RCR(*(dw*)(raddr(ss,bp+var_4a)), 1));	// 83861 rcr     [bp+var_4A], 1 ;~ 26A9:0325
cs=0x26a9;eip=0x000328; 	X(SAR(*(dw*)(raddr(ss,bp+var_44)), 1));	// 83862 sar     [bp+var_44], 1 ;~ 26A9:0328
cs=0x26a9;eip=0x00032b; 	X(RCR(*(dw*)(raddr(ss,bp+var_46)), 1));	// 83863 rcr     [bp+var_46], 1 ;~ 26A9:032B
cs=0x26a9;eip=0x00032e; 	X(INC(*(dw*)(raddr(ss,bp+var_54))));	// 83864 inc     [bp+var_54] ;~ 26A9:032E
loc_353a1:
	// 9738 
cs=0x26a9;eip=0x000331; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 83868 push    [bp+var_1A] ;~ 26A9:0331
cs=0x26a9;eip=0x000334; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 83869 push    [bp+var_1C] ;~ 26A9:0334
cs=0x26a9;eip=0x000337; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 83870 push    [bp+var_16] ;~ 26A9:0337
cs=0x26a9;eip=0x00033a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 83871 push    [bp+var_18] ;~ 26A9:033A
cs=0x26a9;eip=0x00033d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 83872 push    [bp+var_12] ;~ 26A9:033D
cs=0x26a9;eip=0x000340; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 83873 push    [bp+var_14] ;~ 26A9:0340
cs=0x26a9;eip=0x000343; 	X(PUSH(*(dw*)((&unk_47ad2))));	// 83874 push    word ptr unk_47AD2 ;~ 26A9:0343
cs=0x26a9;eip=0x000347; 	X(PUSH(*(dw*)((&unk_47ad0))));	// 83875 push    word ptr unk_47AD0 ;~ 26A9:0347
cs=0x26a9;eip=0x00034b; 	T(ax = bp+var_2e);	// 83876 lea     ax, [bp+var_2E] ;~ 26A9:034B
cs=0x26a9;eip=0x00034e; 	X(PUSH(ax));	// 83877 push    ax ;~ 26A9:034E
cs=0x26a9;eip=0x00034f; 	T(ax = bp+var_32);	// 83878 lea     ax, [bp+var_32] ;~ 26A9:034F
cs=0x26a9;eip=0x000352; 	X(PUSH(ax));	// 83879 push    ax ;~ 26A9:0352
cs=0x26a9;eip=0x000353; 	R(CALLF(sub_25b9c,0));	// 83880 call    sub_25B9C ;~ 26A9:0353
cs=0x26a9;eip=0x000358; 	T(MOV(ax, 0x0F0));	// 83881 mov     ax, 0F0h ; 'ğ' ;~ 26A9:0358
cs=0x26a9;eip=0x00035b; 	X(PUSH(ax));	// 83882 push    ax ;~ 26A9:035B
cs=0x26a9;eip=0x00035c; 	X(PUSH(*(dw*)((&unk_57056))));	// 83883 push    word ptr unk_57056 ;~ 26A9:035C
cs=0x26a9;eip=0x000360; 	R(CALLF(sub_2f002,0));	// 83884 call    sub_2F002 ;~ 26A9:0360
cs=0x26a9;eip=0x000365; 	T(MOV(cl, 8));	// 83885 mov     cl, 8 ;~ 26A9:0365
cs=0x26a9;eip=0x000367; 	R(CALLF(sub_10240,0));	// 83886 call    sub_10240 ;~ 26A9:0367
cs=0x26a9;eip=0x00036c; 	X(MOV(*(dw*)(raddr(ss,bp+var_40)), ax));	// 83887 mov     [bp+var_40], ax ;~ 26A9:036C
cs=0x26a9;eip=0x00036f; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 1));	// 83888 cmp     [bp+var_16], 1 ;~ 26A9:036F
cs=0x26a9;eip=0x000373; 	R(JGE(loc_353ed));	// 83889 jge     short loc_353ED ;~ 26A9:0373
cs=0x26a9;eip=0x000375; 	T(MOV(al, 1));	// 83890 mov     al, 1 ;~ 26A9:0375
cs=0x26a9;eip=0x000377; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 83891 mov     [bp+var_10], al ;~ 26A9:0377
cs=0x26a9;eip=0x00037a; 	X(MOV(*(raddr(ss,bp+var_42)), al));	// 83892 mov     [bp+var_42], al ;~ 26A9:037A
loc_353ed:
	// 9739 
cs=0x26a9;eip=0x00037d; 	T(CMP(*(raddr(ss,bp+var_42)), 0));	// 83895 cmp     [bp+var_42], 0 ;~ 26A9:037D
cs=0x26a9;eip=0x000381; 	R(JZ(loc_353fb));	// 83896 jz      short loc_353FB ;~ 26A9:0381
cs=0x26a9;eip=0x000383; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 83897 mov     ax, [bp+var_2E] ;~ 26A9:0383
cs=0x26a9;eip=0x000386; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 83898 mov     [bp+var_2], ax ;~ 26A9:0386
cs=0x26a9;eip=0x000389; 	R(JMP(loc_3541d));	// 83899 jmp     short loc_3541D ;~ 26A9:0389
loc_353fb:
	// 9740 
cs=0x26a9;eip=0x00038b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 83903 push    [bp+var_2] ;~ 26A9:038B
cs=0x26a9;eip=0x00038e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2e))));	// 83904 push    [bp+var_2E] ;~ 26A9:038E
cs=0x26a9;eip=0x000391; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 83905 push    [bp+var_40] ;~ 26A9:0391
cs=0x26a9;eip=0x000394; 	R(CALLF(sub_13561,0));	// 83906 call    sub_13561 ;~ 26A9:0394
cs=0x26a9;eip=0x000399; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 83907 mov     [bp+var_2], ax ;~ 26A9:0399
cs=0x26a9;eip=0x00039c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2e))));	// 83908 mov     ax, [bp+var_2E] ;~ 26A9:039C
cs=0x26a9;eip=0x00039f; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), ax));	// 83909 cmp     [bp+var_2], ax ;~ 26A9:039F
cs=0x26a9;eip=0x0003a2; 	R(JNZ(loc_35418));	// 83910 jnz     short loc_35418 ;~ 26A9:03A2
cs=0x26a9;eip=0x0003a4; 	T(MOV(al, 1));	// 83911 mov     al, 1 ;~ 26A9:03A4
cs=0x26a9;eip=0x0003a6; 	R(JMP(loc_3541a));	// 83912 jmp     short loc_3541A ;~ 26A9:03A6
loc_35418:
	// 9741 
cs=0x26a9;eip=0x0003a8; 	T(SUB(al, al));	// 83916 sub     al, al ;~ 26A9:03A8
loc_3541a:
	// 9742 
cs=0x26a9;eip=0x0003aa; 	X(MOV(*(raddr(ss,bp+var_42)), al));	// 83919 mov     [bp+var_42], al ;~ 26A9:03AA
loc_3541d:
	// 9743 
cs=0x26a9;eip=0x0003ad; 	T(CMP(*(raddr(ss,bp+var_10)), 0));	// 83922 cmp     [bp+var_10], 0 ;~ 26A9:03AD
cs=0x26a9;eip=0x0003b1; 	R(JZ(loc_3542b));	// 83923 jz      short loc_3542B ;~ 26A9:03B1
cs=0x26a9;eip=0x0003b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 83924 mov     ax, [bp+var_32] ;~ 26A9:03B3
cs=0x26a9;eip=0x0003b6; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 83925 mov     [bp+var_30], ax ;~ 26A9:03B6
cs=0x26a9;eip=0x0003b9; 	R(JMP(loc_3544d));	// 83926 jmp     short loc_3544D ;~ 26A9:03B9
loc_3542b:
	// 9744 
cs=0x26a9;eip=0x0003bb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 83930 push    [bp+var_30] ;~ 26A9:03BB
cs=0x26a9;eip=0x0003be; 	X(PUSH(*(dw*)(raddr(ss,bp+var_32))));	// 83931 push    [bp+var_32] ;~ 26A9:03BE
cs=0x26a9;eip=0x0003c1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_40))));	// 83932 push    [bp+var_40] ;~ 26A9:03C1
cs=0x26a9;eip=0x0003c4; 	R(CALLF(sub_13561,0));	// 83933 call    sub_13561 ;~ 26A9:03C4
cs=0x26a9;eip=0x0003c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_30)), ax));	// 83934 mov     [bp+var_30], ax ;~ 26A9:03C9
cs=0x26a9;eip=0x0003cc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_32))));	// 83935 mov     ax, [bp+var_32] ;~ 26A9:03CC
cs=0x26a9;eip=0x0003cf; 	T(CMP(*(dw*)(raddr(ss,bp+var_30)), ax));	// 83936 cmp     [bp+var_30], ax ;~ 26A9:03CF
cs=0x26a9;eip=0x0003d2; 	R(JNZ(loc_35448));	// 83937 jnz     short loc_35448 ;~ 26A9:03D2
cs=0x26a9;eip=0x0003d4; 	T(MOV(al, 1));	// 83938 mov     al, 1 ;~ 26A9:03D4
cs=0x26a9;eip=0x0003d6; 	R(JMP(loc_3544a));	// 83939 jmp     short loc_3544A ;~ 26A9:03D6
loc_35448:
	// 9745 
cs=0x26a9;eip=0x0003d8; 	T(SUB(al, al));	// 83943 sub     al, al ;~ 26A9:03D8
loc_3544a:
	// 9746 
cs=0x26a9;eip=0x0003da; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 83946 mov     [bp+var_10], al ;~ 26A9:03DA
loc_3544d:
	// 9747 
cs=0x26a9;eip=0x0003dd; 	R(CALLF(sub_3db22,0));	// 83949 call    sub_3DB22 ;~ 26A9:03DD
cs=0x26a9;eip=0x0003e2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 83950 push    [bp+var_12] ;~ 26A9:03E2
cs=0x26a9;eip=0x0003e5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 83951 push    [bp+var_14] ;~ 26A9:03E5
cs=0x26a9;eip=0x0003e8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 83952 push    [bp+var_16] ;~ 26A9:03E8
cs=0x26a9;eip=0x0003eb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 83953 push    [bp+var_18] ;~ 26A9:03EB
cs=0x26a9;eip=0x0003ee; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 83954 push    [bp+var_1A] ;~ 26A9:03EE
cs=0x26a9;eip=0x0003f1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 83955 push    [bp+var_1C] ;~ 26A9:03F1
cs=0x26a9;eip=0x0003f4; 	R(CALLF(sub_3e0d0,0));	// 83956 call    sub_3E0D0 ;~ 26A9:03F4
cs=0x26a9;eip=0x0003f9; 	T(ADD(sp, 0x0C));	// 83957 add     sp, 0Ch ;~ 26A9:03F9
cs=0x26a9;eip=0x0003fc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 83958 push    [bp+var_12] ;~ 26A9:03FC
cs=0x26a9;eip=0x0003ff; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 83959 push    [bp+var_14] ;~ 26A9:03FF
cs=0x26a9;eip=0x000402; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 83960 push    [bp+var_16] ;~ 26A9:0402
cs=0x26a9;eip=0x000405; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 83961 push    [bp+var_18] ;~ 26A9:0405
cs=0x26a9;eip=0x000408; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 83962 push    [bp+var_1A] ;~ 26A9:0408
cs=0x26a9;eip=0x00040b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 83963 push    [bp+var_1C] ;~ 26A9:040B
cs=0x26a9;eip=0x00040e; 	R(CALLF(sub_3e149,0));	// 83964 call    sub_3E149 ;~ 26A9:040E
cs=0x26a9;eip=0x000413; 	T(ADD(sp, 0x0C));	// 83965 add     sp, 0Ch ;~ 26A9:0413
cs=0x26a9;eip=0x000416; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x4E));	// 83966 cmp     [bp+var_16], 4Eh ; 'N' ;~ 26A9:0416
cs=0x26a9;eip=0x00041a; 	R(JL(loc_354fe));	// 83967 jl      short loc_354FE ;~ 26A9:041A
cs=0x26a9;eip=0x00041c; 	R(JG(loc_35495));	// 83968 jg      short loc_35495 ;~ 26A9:041C
cs=0x26a9;eip=0x00041e; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x2000));	// 83969 cmp     [bp+var_18], 2000h ;~ 26A9:041E
cs=0x26a9;eip=0x000423; 	R(JC(loc_354fe));	// 83970 jb      short loc_354FE ;~ 26A9:0423
loc_35495:
	// 9748 
cs=0x26a9;eip=0x000425; 	T(CMP(*(raddr(ss,bp+var_58)), 0));	// 83973 cmp     [bp+var_58], 0 ;~ 26A9:0425
cs=0x26a9;eip=0x000429; 	R(JZ(loc_354a0));	// 83974 jz      short loc_354A0 ;~ 26A9:0429
cs=0x26a9;eip=0x00042b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 83975 mov     ax, [bp+var_52] ;~ 26A9:042B
cs=0x26a9;eip=0x00042e; 	R(JMP(loc_354a3));	// 83976 jmp     short loc_354A3 ;~ 26A9:042E
loc_354a0:
	// 9749 
cs=0x26a9;eip=0x000430; 	T(MOV(ax, 1));	// 83980 mov     ax, 1 ;~ 26A9:0430
loc_354a3:
	// 9750 
cs=0x26a9;eip=0x000433; 	X(MOV(*(dw*)((&unk_57068)), ax));	// 83983 mov     word ptr unk_57068, ax ;~ 26A9:0433
cs=0x26a9;eip=0x000436; 	X(MOV(*(raddr(ss,bp+var_58)), 1));	// 83984 mov     [bp+var_58], 1 ;~ 26A9:0436
cs=0x26a9;eip=0x00043a; 	T(MOV(al, unk_47ac4));	// 83985 mov     al, byte ptr unk_47AC4 ;~ 26A9:043A
cs=0x26a9;eip=0x00043d; 	T(CBW);	// 83986 cbw ;~ 26A9:043D
cs=0x26a9;eip=0x00043e; 	X(PUSH(ax));	// 83987 push    ax ;~ 26A9:043E
cs=0x26a9;eip=0x00043f; 	T(MOV(ax, 1));	// 83988 mov     ax, 1 ;~ 26A9:043F
cs=0x26a9;eip=0x000442; 	X(PUSH(ax));	// 83989 push    ax ;~ 26A9:0442
cs=0x26a9;eip=0x000443; 	T(SUB(ax, ax));	// 83990 sub     ax, ax ;~ 26A9:0443
cs=0x26a9;eip=0x000445; 	X(PUSH(ax));	// 83991 push    ax ;~ 26A9:0445
cs=0x26a9;eip=0x000446; 	T(ax = bp+var_3a);	// 83992 lea     ax, [bp+var_3A] ;~ 26A9:0446
cs=0x26a9;eip=0x000449; 	X(PUSH(ax));	// 83993 push    ax ;~ 26A9:0449
cs=0x26a9;eip=0x00044a; 	T(MOV(ax, 7));	// 83994 mov     ax, 7 ;~ 26A9:044A
cs=0x26a9;eip=0x00044d; 	X(PUSH(ax));	// 83995 push    ax ;~ 26A9:044D
cs=0x26a9;eip=0x00044e; 	T(SUB(ax, ax));	// 83996 sub     ax, ax ;~ 26A9:044E
cs=0x26a9;eip=0x000450; 	X(PUSH(ax));	// 83997 push    ax ;~ 26A9:0450
cs=0x26a9;eip=0x000451; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 83998 push    [bp+var_30] ;~ 26A9:0451
cs=0x26a9;eip=0x000454; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 83999 push    [bp+var_2] ;~ 26A9:0454
cs=0x26a9;eip=0x000457; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 84000 mov     ax, [bp+var_14] ;~ 26A9:0457
cs=0x26a9;eip=0x00045a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_12))));	// 84001 mov     dx, [bp+var_12] ;~ 26A9:045A
cs=0x26a9;eip=0x00045d; 	T(MOV(cl, 8));	// 84002 mov     cl, 8 ;~ 26A9:045D
cs=0x26a9;eip=0x00045f; 	R(CALLF(sub_10240,0));	// 84003 call    sub_10240 ;~ 26A9:045F
cs=0x26a9;eip=0x000464; 	X(PUSH(dx));	// 84004 push    dx ;~ 26A9:0464
cs=0x26a9;eip=0x000465; 	X(PUSH(ax));	// 84005 push    ax ;~ 26A9:0465
cs=0x26a9;eip=0x000466; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 84006 mov     ax, [bp+var_18] ;~ 26A9:0466
cs=0x26a9;eip=0x000469; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 84007 mov     dx, [bp+var_16] ;~ 26A9:0469
cs=0x26a9;eip=0x00046c; 	T(MOV(cl, 9));	// 84008 mov     cl, 9 ;~ 26A9:046C
cs=0x26a9;eip=0x00046e; 	R(CALLF(sub_10240,0));	// 84009 call    sub_10240 ;~ 26A9:046E
cs=0x26a9;eip=0x000473; 	X(PUSH(dx));	// 84010 push    dx ;~ 26A9:0473
cs=0x26a9;eip=0x000474; 	X(PUSH(ax));	// 84011 push    ax ;~ 26A9:0474
cs=0x26a9;eip=0x000475; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1c))));	// 84012 mov     ax, [bp+var_1C] ;~ 26A9:0475
cs=0x26a9;eip=0x000478; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1a))));	// 84013 mov     dx, [bp+var_1A] ;~ 26A9:0478
cs=0x26a9;eip=0x00047b; 	T(MOV(cl, 8));	// 84014 mov     cl, 8 ;~ 26A9:047B
cs=0x26a9;eip=0x00047d; 	R(CALLF(sub_10240,0));	// 84015 call    sub_10240 ;~ 26A9:047D
cs=0x26a9;eip=0x000482; 	X(PUSH(dx));	// 84016 push    dx ;~ 26A9:0482
cs=0x26a9;eip=0x000483; 	X(PUSH(ax));	// 84017 push    ax ;~ 26A9:0483
cs=0x26a9;eip=0x000484; 	R(CALLF(sub_2d15d,0));	// 84018 call    sub_2D15D ;~ 26A9:0484
cs=0x26a9;eip=0x000489; 	T(ADD(sp, 0x1C));	// 84019 add     sp, 1Ch ;~ 26A9:0489
cs=0x26a9;eip=0x00048c; 	R(JMP(loc_35553));	// 84020 jmp     short loc_35553 ;~ 26A9:048C
loc_354fe:
	// 9751 
cs=0x26a9;eip=0x00048e; 	T(CMP(*(raddr(ss,bp+var_2c)), 0));	// 84025 cmp     [bp+var_2C], 0 ;~ 26A9:048E
cs=0x26a9;eip=0x000492; 	R(JZ(loc_35509));	// 84026 jz      short loc_35509 ;~ 26A9:0492
cs=0x26a9;eip=0x000494; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 84027 mov     ax, [bp+var_22] ;~ 26A9:0494
cs=0x26a9;eip=0x000497; 	R(JMP(loc_3550c));	// 84028 jmp     short loc_3550C ;~ 26A9:0497
loc_35509:
	// 9752 
cs=0x26a9;eip=0x000499; 	T(MOV(ax, 1));	// 84032 mov     ax, 1 ;~ 26A9:0499
loc_3550c:
	// 9753 
cs=0x26a9;eip=0x00049c; 	X(MOV(*(dw*)((&unk_5649a)), ax));	// 84035 mov     word ptr unk_5649A, ax ;~ 26A9:049C
cs=0x26a9;eip=0x00049f; 	X(MOV(*(raddr(ss,bp+var_2c)), 1));	// 84036 mov     [bp+var_2C], 1 ;~ 26A9:049F
cs=0x26a9;eip=0x0004a3; 	T(MOV(ax, 0x0E0));	// 84037 mov     ax, 0E0h ; 'à' ;~ 26A9:04A3
cs=0x26a9;eip=0x0004a6; 	X(PUSH(ax));	// 84038 push    ax ;~ 26A9:04A6
cs=0x26a9;eip=0x0004a7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 84039 push    [bp+var_1A] ;~ 26A9:04A7
cs=0x26a9;eip=0x0004aa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 84040 push    [bp+var_1C] ;~ 26A9:04AA
cs=0x26a9;eip=0x0004ad; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84041 push    [bp+var_16] ;~ 26A9:04AD
cs=0x26a9;eip=0x0004b0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 84042 push    [bp+var_18] ;~ 26A9:04B0
cs=0x26a9;eip=0x0004b3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 84043 push    [bp+var_12] ;~ 26A9:04B3
cs=0x26a9;eip=0x0004b6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 84044 push    [bp+var_14] ;~ 26A9:04B6
cs=0x26a9;eip=0x0004b9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 84045 push    [bp+var_2] ;~ 26A9:04B9
cs=0x26a9;eip=0x0004bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_30))));	// 84046 push    [bp+var_30] ;~ 26A9:04BC
cs=0x26a9;eip=0x0004bf; 	T(SUB(ax, ax));	// 84047 sub     ax, ax ;~ 26A9:04BF
cs=0x26a9;eip=0x0004c1; 	X(PUSH(ax));	// 84048 push    ax ;~ 26A9:04C1
cs=0x26a9;eip=0x0004c2; 	T(ax = bp+var_3a);	// 84049 lea     ax, [bp+var_3A] ;~ 26A9:04C2
cs=0x26a9;eip=0x0004c5; 	X(PUSH(ax));	// 84050 push    ax ;~ 26A9:04C5
cs=0x26a9;eip=0x0004c6; 	T(MOV(ax, 8));	// 84051 mov     ax, 8 ;~ 26A9:04C6
cs=0x26a9;eip=0x0004c9; 	X(PUSH(ax));	// 84052 push    ax ;~ 26A9:04C9
cs=0x26a9;eip=0x0004ca; 	T(MOV(ax, 0x0CC9C));	// 84053 mov     ax, 0CC9Ch ;~ 26A9:04CA
cs=0x26a9;eip=0x0004cd; 	X(PUSH(ax));	// 84054 push    ax ;~ 26A9:04CD
cs=0x26a9;eip=0x0004ce; 	T(MOV(ax, 0x0BB8));	// 84055 mov     ax, 0BB8h ;~ 26A9:04CE
cs=0x26a9;eip=0x0004d1; 	X(PUSH(ax));	// 84056 push    ax ;~ 26A9:04D1
cs=0x26a9;eip=0x0004d2; 	T(MOV(ax, 0x0EAE4));	// 84057 mov     ax, 0EAE4h ;~ 26A9:04D2
cs=0x26a9;eip=0x0004d5; 	X(PUSH(ax));	// 84058 push    ax ;~ 26A9:04D5
cs=0x26a9;eip=0x0004d6; 	T(SUB(ax, ax));	// 84059 sub     ax, ax ;~ 26A9:04D6
cs=0x26a9;eip=0x0004d8; 	X(PUSH(ax));	// 84060 push    ax ;~ 26A9:04D8
cs=0x26a9;eip=0x0004d9; 	T(MOV(al, unk_47ac4));	// 84061 mov     al, byte ptr unk_47AC4 ;~ 26A9:04D9
cs=0x26a9;eip=0x0004dc; 	T(CBW);	// 84062 cbw ;~ 26A9:04DC
cs=0x26a9;eip=0x0004dd; 	X(PUSH(ax));	// 84063 push    ax ;~ 26A9:04DD
cs=0x26a9;eip=0x0004de; 	R(CALLF(sub_240ce,0));	// 84064 call    sub_240CE ;~ 26A9:04DE
loc_35553:
	// 9754 
cs=0x26a9;eip=0x0004e3; 	T(MOV(ax, 1));	// 84067 mov     ax, 1 ;~ 26A9:04E3
cs=0x26a9;eip=0x0004e6; 	X(PUSH(ax));	// 84068 push    ax ;~ 26A9:04E6
cs=0x26a9;eip=0x0004e7; 	T(SUB(ax, ax));	// 84069 sub     ax, ax ;~ 26A9:04E7
cs=0x26a9;eip=0x0004e9; 	X(PUSH(ax));	// 84070 push    ax ;~ 26A9:04E9
cs=0x26a9;eip=0x0004ea; 	R(CALLF(sub_20275,0));	// 84071 call    sub_20275 ;~ 26A9:04EA
cs=0x26a9;eip=0x0004ef; 	R(CALLF(sub_3d480,0));	// 84072 call    sub_3D480 ;~ 26A9:04EF
cs=0x26a9;eip=0x0004f4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 84073 mov     ax, [bp+var_E] ;~ 26A9:04F4
cs=0x26a9;eip=0x0004f7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_c))));	// 84074 mov     dx, [bp+var_C] ;~ 26A9:04F7
cs=0x26a9;eip=0x0004fa; 	T(CMP(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 84075 cmp     [bp+var_1C], ax ;~ 26A9:04FA
cs=0x26a9;eip=0x0004fd; 	R(JZ(loc_35572));	// 84076 jz      short loc_35572 ;~ 26A9:04FD
cs=0x26a9;eip=0x0004ff; 	R(JMP(loc_35277));	// 84077 jmp     loc_35277 ;~ 26A9:04FF
loc_35572:
	// 9755 
cs=0x26a9;eip=0x000502; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 84081 cmp     [bp+var_1A], dx ;~ 26A9:0502
cs=0x26a9;eip=0x000505; 	R(JZ(loc_3557a));	// 84082 jz      short loc_3557A ;~ 26A9:0505
cs=0x26a9;eip=0x000507; 	R(JMP(loc_35277));	// 84083 jmp     loc_35277 ;~ 26A9:0507
loc_3557a:
	// 9756 
cs=0x26a9;eip=0x00050a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 84087 mov     ax, [bp+var_A] ;~ 26A9:050A
cs=0x26a9;eip=0x00050d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 84088 mov     dx, [bp+var_8] ;~ 26A9:050D
cs=0x26a9;eip=0x000510; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), ax));	// 84089 cmp     [bp+var_18], ax ;~ 26A9:0510
cs=0x26a9;eip=0x000513; 	R(JZ(loc_35588));	// 84090 jz      short loc_35588 ;~ 26A9:0513
cs=0x26a9;eip=0x000515; 	R(JMP(loc_35277));	// 84091 jmp     loc_35277 ;~ 26A9:0515
loc_35588:
	// 9757 
cs=0x26a9;eip=0x000518; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), dx));	// 84095 cmp     [bp+var_16], dx ;~ 26A9:0518
cs=0x26a9;eip=0x00051b; 	R(JZ(loc_35590));	// 84096 jz      short loc_35590 ;~ 26A9:051B
cs=0x26a9;eip=0x00051d; 	R(JMP(loc_35277));	// 84097 jmp     loc_35277 ;~ 26A9:051D
loc_35590:
	// 9758 
cs=0x26a9;eip=0x000520; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 84101 mov     ax, [bp+var_6] ;~ 26A9:0520
cs=0x26a9;eip=0x000523; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 84102 mov     dx, [bp+var_4] ;~ 26A9:0523
cs=0x26a9;eip=0x000526; 	T(CMP(*(dw*)(raddr(ss,bp+var_14)), ax));	// 84103 cmp     [bp+var_14], ax ;~ 26A9:0526
cs=0x26a9;eip=0x000529; 	R(JZ(loc_3559e));	// 84104 jz      short loc_3559E ;~ 26A9:0529
cs=0x26a9;eip=0x00052b; 	R(JMP(loc_35277));	// 84105 jmp     loc_35277 ;~ 26A9:052B
loc_3559e:
	// 9759 
cs=0x26a9;eip=0x00052e; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), dx));	// 84109 cmp     [bp+var_12], dx ;~ 26A9:052E
cs=0x26a9;eip=0x000531; 	R(JZ(loc_355a6));	// 84110 jz      short loc_355A6 ;~ 26A9:0531
cs=0x26a9;eip=0x000533; 	R(JMP(loc_35277));	// 84111 jmp     loc_35277 ;~ 26A9:0533
loc_355a6:
	// 9760 
cs=0x26a9;eip=0x000536; 	R(CALLF(sub_20565,0));	// 84116 call    sub_20565 ;~ 26A9:0536
cs=0x26a9;eip=0x00053b; 	T(MOV(ax, 0x0E0));	// 84117 mov     ax, 0E0h ; 'à' ;~ 26A9:053B
cs=0x26a9;eip=0x00053e; 	X(PUSH(ax));	// 84118 push    ax ;~ 26A9:053E
cs=0x26a9;eip=0x00053f; 	R(CALLF(sub_25ad0,0));	// 84119 call    sub_25AD0 ;~ 26A9:053F
cs=0x26a9;eip=0x000544; 	T(MOV(ax, 0x2664));	// 84120 mov     ax, 2664h ;~ 26A9:0544
cs=0x26a9;eip=0x000547; 	X(PUSH(ax));	// 84121 push    ax ;~ 26A9:0547
cs=0x26a9;eip=0x000548; 	R(CALLF(sub_25ad0,0));	// 84122 call    sub_25AD0 ;~ 26A9:0548
cs=0x26a9;eip=0x00054d; 	R(CALLF(sub_3102a,0));	// 84123 call    sub_3102A ;~ 26A9:054D
cs=0x26a9;eip=0x000552; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 84124 mov     ax, [bp+var_22] ;~ 26A9:0552
cs=0x26a9;eip=0x000555; 	X(MOV(*(dw*)((&unk_5649a)), ax));	// 84125 mov     word ptr unk_5649A, ax ;~ 26A9:0555
cs=0x26a9;eip=0x000558; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 84126 mov     ax, [bp+var_52] ;~ 26A9:0558
cs=0x26a9;eip=0x00055b; 	X(MOV(*(dw*)((&unk_57068)), ax));	// 84127 mov     word ptr unk_57068, ax ;~ 26A9:055B
cs=0x26a9;eip=0x00055e; 	T(MOV(al, *(raddr(ss,bp+var_2a))));	// 84128 mov     al, [bp+var_2A] ;~ 26A9:055E
cs=0x26a9;eip=0x000561; 	X(MOV(unk_564ec, al));	// 84129 mov     byte ptr unk_564EC, al ;~ 26A9:0561
cs=0x26a9;eip=0x000564; 	T(MOV(al, *(raddr(ss,bp+var_56))));	// 84130 mov     al, [bp+var_56] ;~ 26A9:0564
cs=0x26a9;eip=0x000567; 	X(MOV(unk_570ba, al));	// 84131 mov     byte ptr unk_570BA, al ;~ 26A9:0567
cs=0x26a9;eip=0x00056a; 	T(MOV(ax, 0x0EAE4));	// 84132 mov     ax, 0EAE4h ;~ 26A9:056A
cs=0x26a9;eip=0x00056d; 	X(PUSH(ax));	// 84133 push    ax ;~ 26A9:056D
cs=0x26a9;eip=0x00056e; 	R(CALLF(sub_259bd,0));	// 84134 call    sub_259BD ;~ 26A9:056E
cs=0x26a9;eip=0x000573; 	T(MOV(ax, 0x0F6B2));	// 84135 mov     ax, 0F6B2h ;~ 26A9:0573
cs=0x26a9;eip=0x000576; 	X(PUSH(ax));	// 84136 push    ax ;~ 26A9:0576
cs=0x26a9;eip=0x000577; 	R(CALLF(sub_259bd,0));	// 84137 call    sub_259BD ;~ 26A9:0577
cs=0x26a9;eip=0x00057c; 	X(MOV(*(dw*)((&unk_49ff8)), 0x0FFFF));	// 84138 mov     word ptr unk_49FF8, 0FFFFh ;~ 26A9:057C
cs=0x26a9;eip=0x000582; 	X(POP(si));	// 84139 pop     si ;~ 26A9:0582
cs=0x26a9;eip=0x000583; 	X(POP(di));	// 84140 pop     di ;~ 26A9:0583
cs=0x26a9;eip=0x000584; 	T(MOV(sp, bp));	// 84141 mov     sp, bp ;~ 26A9:0584
cs=0x26a9;eip=0x000586; 	X(POP(bp));	// 84142 pop     bp ;~ 26A9:0586
cs=0x26a9;eip=0x000587; 	R(RETF(0));	// 84143 retf ;~ 26A9:0587
sub_355f8:
	// 84151 
#undef var_8
#define var_8 -8
	// 84154 var_8           = word ptr -8 ;~ 26A9:0588
#undef var_6
#define var_6 -6
	// 84155 var_6           = word ptr -6 ;~ 26A9:0588
#undef var_4
#define var_4 -4
	// 84156 var_4           = byte ptr -4 ;~ 26A9:0588
#undef var_2
#define var_2 -2
	// 84157 var_2           = word ptr -2 ;~ 26A9:0588
#undef arg_0
#define arg_0 4
	// 84158 arg_0           = word ptr  4 ;~ 26A9:0588
#undef arg_2
#define arg_2 6
	// 84159 arg_2           = word ptr  6 ;~ 26A9:0588
cs=0x26a9;eip=0x000588; 	X(PUSH(bp));	// 84161 push    bp ;~ 26A9:0588
cs=0x26a9;eip=0x000589; 	T(MOV(bp, sp));	// 84162 mov     bp, sp ;~ 26A9:0589
cs=0x26a9;eip=0x00058b; 	T(SUB(sp, 8));	// 84163 sub     sp, 8 ;~ 26A9:058B
cs=0x26a9;eip=0x00058e; 	X(PUSH(si));	// 84164 push    si ;~ 26A9:058E
cs=0x26a9;eip=0x00058f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 84165 mov     bx, [bp+arg_2] ;~ 26A9:058F
cs=0x26a9;eip=0x000592; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 84166 mov     si, [bp+arg_0] ;~ 26A9:0592
cs=0x26a9;eip=0x000595; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84167 mov     ax, [si] ;~ 26A9:0595
cs=0x26a9;eip=0x000597; 	T(MOV(dx, *(dw*)(raddr(ds,si+2))));	// 84168 mov     dx, [si+2] ;~ 26A9:0597
cs=0x26a9;eip=0x00059a; 	T(CMP(*(dw*)(raddr(ds,bx+2)), dx));	// 84169 cmp     [bx+2], dx ;~ 26A9:059A
cs=0x26a9;eip=0x00059d; 	R(JL(loc_35619));	// 84170 jl      short loc_35619 ;~ 26A9:059D
cs=0x26a9;eip=0x00059f; 	R(JG(loc_35615));	// 84171 jg      short loc_35615 ;~ 26A9:059F
cs=0x26a9;eip=0x0005a1; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 84172 cmp     [bx], ax ;~ 26A9:05A1
cs=0x26a9;eip=0x0005a3; 	R(JC(loc_35619));	// 84173 jb      short loc_35619 ;~ 26A9:05A3
loc_35615:
	// 9761 
cs=0x26a9;eip=0x0005a5; 	T(MOV(al, 1));	// 84176 mov     al, 1 ;~ 26A9:05A5
cs=0x26a9;eip=0x0005a7; 	R(JMP(loc_3561b));	// 84177 jmp     short loc_3561B ;~ 26A9:05A7
loc_35619:
	// 9762 
cs=0x26a9;eip=0x0005a9; 	T(SUB(al, al));	// 84182 sub     al, al ;~ 26A9:05A9
loc_3561b:
	// 9763 
cs=0x26a9;eip=0x0005ab; 	X(MOV(*(raddr(ss,bp+var_4)), al));	// 84185 mov     [bp+var_4], al ;~ 26A9:05AB
cs=0x26a9;eip=0x0005ae; 	T(CMP(*(dw*)((&unk_57058)), 7));	// 84186 cmp     word ptr unk_57058, 7 ;~ 26A9:05AE
cs=0x26a9;eip=0x0005b3; 	R(JC(loc_3562c));	// 84187 jb      short loc_3562C ;~ 26A9:05B3
cs=0x26a9;eip=0x0005b5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x5DC0));	// 84188 mov     [bp+var_2], 5DC0h ;~ 26A9:05B5
cs=0x26a9;eip=0x0005ba; 	R(JMP(loc_35685));	// 84189 jmp     short loc_35685 ;~ 26A9:05BA
loc_3562c:
	// 9764 
cs=0x26a9;eip=0x0005bc; 	T(CMP(*(dw*)((&unk_57058)), 6));	// 84193 cmp     word ptr unk_57058, 6 ;~ 26A9:05BC
cs=0x26a9;eip=0x0005c1; 	R(JC(loc_3563a));	// 84194 jb      short loc_3563A ;~ 26A9:05C1
cs=0x26a9;eip=0x0005c3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x2EE0));	// 84195 mov     [bp+var_2], 2EE0h ;~ 26A9:05C3
cs=0x26a9;eip=0x0005c8; 	R(JMP(loc_35685));	// 84196 jmp     short loc_35685 ;~ 26A9:05C8
loc_3563a:
	// 9765 
cs=0x26a9;eip=0x0005ca; 	T(CMP(*(dw*)((&unk_57058)), 5));	// 84200 cmp     word ptr unk_57058, 5 ;~ 26A9:05CA
cs=0x26a9;eip=0x0005cf; 	R(JC(loc_35648));	// 84201 jb      short loc_35648 ;~ 26A9:05CF
cs=0x26a9;eip=0x0005d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x1770));	// 84202 mov     [bp+var_2], 1770h ;~ 26A9:05D1
cs=0x26a9;eip=0x0005d6; 	R(JMP(loc_35685));	// 84203 jmp     short loc_35685 ;~ 26A9:05D6
loc_35648:
	// 9766 
cs=0x26a9;eip=0x0005d8; 	T(CMP(*(dw*)((&unk_57058)), 4));	// 84207 cmp     word ptr unk_57058, 4 ;~ 26A9:05D8
cs=0x26a9;eip=0x0005dd; 	R(JC(loc_35656));	// 84208 jb      short loc_35656 ;~ 26A9:05DD
cs=0x26a9;eip=0x0005df; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0BB8));	// 84209 mov     [bp+var_2], 0BB8h ;~ 26A9:05DF
cs=0x26a9;eip=0x0005e4; 	R(JMP(loc_35685));	// 84210 jmp     short loc_35685 ;~ 26A9:05E4
loc_35656:
	// 9767 
cs=0x26a9;eip=0x0005e6; 	T(CMP(*(dw*)((&unk_57058)), 3));	// 84214 cmp     word ptr unk_57058, 3 ;~ 26A9:05E6
cs=0x26a9;eip=0x0005eb; 	R(JC(loc_35664));	// 84215 jb      short loc_35664 ;~ 26A9:05EB
cs=0x26a9;eip=0x0005ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x5DC));	// 84216 mov     [bp+var_2], 5DCh ;~ 26A9:05ED
cs=0x26a9;eip=0x0005f2; 	R(JMP(loc_35685));	// 84217 jmp     short loc_35685 ;~ 26A9:05F2
loc_35664:
	// 9768 
cs=0x26a9;eip=0x0005f4; 	T(CMP(*(dw*)((&unk_57058)), 2));	// 84221 cmp     word ptr unk_57058, 2 ;~ 26A9:05F4
cs=0x26a9;eip=0x0005f9; 	R(JC(loc_35672));	// 84222 jb      short loc_35672 ;~ 26A9:05F9
cs=0x26a9;eip=0x0005fb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x258));	// 84223 mov     [bp+var_2], 258h ;~ 26A9:05FB
cs=0x26a9;eip=0x000600; 	R(JMP(loc_35685));	// 84224 jmp     short loc_35685 ;~ 26A9:0600
loc_35672:
	// 9769 
cs=0x26a9;eip=0x000602; 	T(CMP(*(dw*)((&unk_57058)), 1));	// 84228 cmp     word ptr unk_57058, 1 ;~ 26A9:0602
cs=0x26a9;eip=0x000607; 	R(JC(loc_35680));	// 84229 jb      short loc_35680 ;~ 26A9:0607
cs=0x26a9;eip=0x000609; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x12C));	// 84230 mov     [bp+var_2], 12Ch ;~ 26A9:0609
cs=0x26a9;eip=0x00060e; 	R(JMP(loc_35685));	// 84231 jmp     short loc_35685 ;~ 26A9:060E
loc_35680:
	// 9770 
cs=0x26a9;eip=0x000610; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x96));	// 84235 mov     [bp+var_2], 96h ; '–' ;~ 26A9:0610
loc_35685:
	// 9771 
cs=0x26a9;eip=0x000615; 	T(MOV(ax, *(dw*)((&unk_57056))));	// 84239 mov     ax, word ptr unk_57056 ;~ 26A9:0615
cs=0x26a9;eip=0x000618; 	T(CWD);	// 84240 cwd ;~ 26A9:0618
cs=0x26a9;eip=0x000619; 	X(PUSH(dx));	// 84241 push    dx ;~ 26A9:0619
cs=0x26a9;eip=0x00061a; 	X(PUSH(ax));	// 84242 push    ax ;~ 26A9:061A
cs=0x26a9;eip=0x00061b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 84243 mov     ax, [bp+var_2] ;~ 26A9:061B
cs=0x26a9;eip=0x00061e; 	T(CWD);	// 84244 cwd ;~ 26A9:061E
cs=0x26a9;eip=0x00061f; 	T(MOV(dh, dl));	// 84245 mov     dh, dl ;~ 26A9:061F
cs=0x26a9;eip=0x000621; 	T(MOV(dl, ah));	// 84246 mov     dl, ah ;~ 26A9:0621
cs=0x26a9;eip=0x000623; 	T(MOV(ah, al));	// 84247 mov     ah, al ;~ 26A9:0623
cs=0x26a9;eip=0x000625; 	T(SUB(al, al));	// 84248 sub     al, al ;~ 26A9:0625
cs=0x26a9;eip=0x000627; 	X(PUSH(dx));	// 84249 push    dx ;~ 26A9:0627
cs=0x26a9;eip=0x000628; 	X(PUSH(ax));	// 84250 push    ax ;~ 26A9:0628
cs=0x26a9;eip=0x000629; 	R(CALLF(sub_105c2,0));	// 84251 call    sub_105C2 ;~ 26A9:0629
cs=0x26a9;eip=0x00062e; 	T(MOV(cl, 8));	// 84252 mov     cl, 8 ;~ 26A9:062E
cs=0x26a9;eip=0x000630; 	R(CALLF(sub_10240,0));	// 84253 call    sub_10240 ;~ 26A9:0630
cs=0x26a9;eip=0x000635; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 84254 mov     [bp+var_8], ax ;~ 26A9:0635
cs=0x26a9;eip=0x000638; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 84255 mov     [bp+var_6], dx ;~ 26A9:0638
cs=0x26a9;eip=0x00063b; 	T(CMP(*(raddr(ss,bp+var_4)), 0));	// 84256 cmp     [bp+var_4], 0 ;~ 26A9:063B
cs=0x26a9;eip=0x00063f; 	R(JZ(loc_356be));	// 84257 jz      short loc_356BE ;~ 26A9:063F
cs=0x26a9;eip=0x000641; 	T(NEG(ax));	// 84258 neg     ax ;~ 26A9:0641
cs=0x26a9;eip=0x000643; 	T(ADC(dx, 0));	// 84259 adc     dx, 0 ;~ 26A9:0643
cs=0x26a9;eip=0x000646; 	T(NEG(dx));	// 84260 neg     dx ;~ 26A9:0646
cs=0x26a9;eip=0x000648; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 84261 mov     [bp+var_8], ax ;~ 26A9:0648
cs=0x26a9;eip=0x00064b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 84262 mov     [bp+var_6], dx ;~ 26A9:064B
loc_356be:
	// 9772 
cs=0x26a9;eip=0x00064e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 84265 mov     bx, [bp+arg_2] ;~ 26A9:064E
cs=0x26a9;eip=0x000651; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 84266 mov     ax, [bp+var_8] ;~ 26A9:0651
cs=0x26a9;eip=0x000654; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 84267 mov     dx, [bp+var_6] ;~ 26A9:0654
cs=0x26a9;eip=0x000657; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 84268 add     [bx], ax ;~ 26A9:0657
cs=0x26a9;eip=0x000659; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 84269 adc     [bx+2], dx ;~ 26A9:0659
cs=0x26a9;eip=0x00065c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 84270 mov     si, [bp+arg_0] ;~ 26A9:065C
cs=0x26a9;eip=0x00065f; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84271 mov     ax, [si] ;~ 26A9:065F
cs=0x26a9;eip=0x000661; 	T(MOV(dx, *(dw*)(raddr(ds,si+2))));	// 84272 mov     dx, [si+2] ;~ 26A9:0661
cs=0x26a9;eip=0x000664; 	T(CMP(*(dw*)(raddr(ds,bx+2)), dx));	// 84273 cmp     [bx+2], dx ;~ 26A9:0664
cs=0x26a9;eip=0x000667; 	R(JL(loc_356e4));	// 84274 jl      short loc_356E4 ;~ 26A9:0667
cs=0x26a9;eip=0x000669; 	R(JG(loc_356df));	// 84275 jg      short loc_356DF ;~ 26A9:0669
cs=0x26a9;eip=0x00066b; 	T(CMP(*(dw*)(raddr(ds,bx)), ax));	// 84276 cmp     [bx], ax ;~ 26A9:066B
cs=0x26a9;eip=0x00066d; 	R(JC(loc_356e4));	// 84277 jb      short loc_356E4 ;~ 26A9:066D
loc_356df:
	// 9773 
cs=0x26a9;eip=0x00066f; 	T(MOV(ax, 1));	// 84280 mov     ax, 1 ;~ 26A9:066F
cs=0x26a9;eip=0x000672; 	R(JMP(loc_356e6));	// 84281 jmp     short loc_356E6 ;~ 26A9:0672
loc_356e4:
	// 9774 
cs=0x26a9;eip=0x000674; 	T(SUB(ax, ax));	// 84286 sub     ax, ax ;~ 26A9:0674
loc_356e6:
	// 9775 
cs=0x26a9;eip=0x000676; 	T(MOV(cx, ax));	// 84289 mov     cx, ax ;~ 26A9:0676
cs=0x26a9;eip=0x000678; 	T(MOV(al, *(raddr(ss,bp+var_4))));	// 84290 mov     al, [bp+var_4] ;~ 26A9:0678
cs=0x26a9;eip=0x00067b; 	T(CBW);	// 84291 cbw ;~ 26A9:067B
cs=0x26a9;eip=0x00067c; 	T(CMP(cx, ax));	// 84292 cmp     cx, ax ;~ 26A9:067C
cs=0x26a9;eip=0x00067e; 	R(JZ(loc_35700));	// 84293 jz      short loc_35700 ;~ 26A9:067E
cs=0x26a9;eip=0x000680; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 84294 mov     bx, [bp+arg_2] ;~ 26A9:0680
cs=0x26a9;eip=0x000683; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 84295 mov     si, [bp+arg_0] ;~ 26A9:0683
cs=0x26a9;eip=0x000686; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 84296 mov     ax, [si] ;~ 26A9:0686
cs=0x26a9;eip=0x000688; 	T(MOV(dx, *(dw*)(raddr(ds,si+2))));	// 84297 mov     dx, [si+2] ;~ 26A9:0688
cs=0x26a9;eip=0x00068b; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 84298 mov     [bx], ax ;~ 26A9:068B
cs=0x26a9;eip=0x00068d; 	X(MOV(*(dw*)(raddr(ds,bx+2)), dx));	// 84299 mov     [bx+2], dx ;~ 26A9:068D
loc_35700:
	// 9776 
cs=0x26a9;eip=0x000690; 	X(POP(si));	// 84302 pop     si ;~ 26A9:0690
cs=0x26a9;eip=0x000691; 	T(MOV(sp, bp));	// 84303 mov     sp, bp ;~ 26A9:0691
cs=0x26a9;eip=0x000693; 	X(POP(bp));	// 84304 pop     bp ;~ 26A9:0693
cs=0x26a9;eip=0x000694; 	R(RETN(4));	// 84305 retn    4 ;~ 26A9:0694
sub_35707:
	// 84313 
#undef var_58
#define var_58 -0x58
	// 84315 var_58          = byte ptr -58h ;~ 26A9:0697
#undef var_56
#define var_56 -0x56
	// 84316 var_56          = byte ptr -56h ;~ 26A9:0697
#undef var_54
#define var_54 -0x54
	// 84317 var_54          = byte ptr -54h ;~ 26A9:0697
#undef var_52
#define var_52 -0x52
	// 84318 var_52          = word ptr -52h ;~ 26A9:0697
#undef var_50
#define var_50 -0x50
	// 84319 var_50          = byte ptr -50h ;~ 26A9:0697
#undef var_46
#define var_46 -0x46
	// 84320 var_46          = word ptr -46h ;~ 26A9:0697
#undef var_44
#define var_44 -0x44
	// 84321 var_44          = byte ptr -44h ;~ 26A9:0697
#undef var_42
#define var_42 -0x42
	// 84322 var_42          = word ptr -42h ;~ 26A9:0697
#undef var_40
#define var_40 -0x40
	// 84323 var_40          = byte ptr -40h ;~ 26A9:0697
#undef var_36
#define var_36 -0x36
	// 84324 var_36          = word ptr -36h ;~ 26A9:0697
#undef var_34
#define var_34 -0x34
	// 84325 var_34          = byte ptr -34h ;~ 26A9:0697
#undef var_33
#define var_33 -0x33
	// 84326 var_33          = byte ptr -33h ;~ 26A9:0697
#undef var_30
#define var_30 -0x30
	// 84327 var_30          = byte ptr -30h ;~ 26A9:0697
#undef var_2e
#define var_2e -0x2E
	// 84328 var_2E          = byte ptr -2Eh ;~ 26A9:0697
#undef var_2c
#define var_2c -0x2C
	// 84329 var_2C          = byte ptr -2Ch ;~ 26A9:0697
#undef var_2a
#define var_2a -0x2A
	// 84330 var_2A          = word ptr -2Ah ;~ 26A9:0697
#undef var_28
#define var_28 -0x28
	// 84331 var_28          = word ptr -28h ;~ 26A9:0697
#undef var_24
#define var_24 -0x24
	// 84332 var_24          = word ptr -24h ;~ 26A9:0697
#undef var_22
#define var_22 -0x22
	// 84333 var_22          = word ptr -22h ;~ 26A9:0697
#undef var_20
#define var_20 -0x20
	// 84334 var_20          = word ptr -20h ;~ 26A9:0697
#undef var_1e
#define var_1e -0x1E
	// 84335 var_1E          = word ptr -1Eh ;~ 26A9:0697
#undef var_1c
#define var_1c -0x1C
	// 84336 var_1C          = word ptr -1Ch ;~ 26A9:0697
#undef var_1a
#define var_1a -0x1A
	// 84337 var_1A          = word ptr -1Ah ;~ 26A9:0697
#undef var_18
#define var_18 -0x18
	// 84338 var_18          = word ptr -18h ;~ 26A9:0697
#undef var_16
#define var_16 -0x16
	// 84339 var_16          = word ptr -16h ;~ 26A9:0697
#undef var_14
#define var_14 -0x14
	// 84340 var_14          = word ptr -14h ;~ 26A9:0697
#undef var_12
#define var_12 -0x12
	// 84341 var_12          = byte ptr -12h ;~ 26A9:0697
#undef var_10
#define var_10 -0x10
	// 84342 var_10          = byte ptr -10h ;~ 26A9:0697
#undef var_e
#define var_e -0x0E
	// 84343 var_E           = word ptr -0Eh ;~ 26A9:0697
#undef var_c
#define var_c -0x0C
	// 84344 var_C           = word ptr -0Ch ;~ 26A9:0697
#undef var_a
#define var_a -0x0A
	// 84345 var_A           = word ptr -0Ah ;~ 26A9:0697
#undef var_8
#define var_8 -8
	// 84346 var_8           = word ptr -8 ;~ 26A9:0697
#undef var_6
#define var_6 -6
	// 84347 var_6           = word ptr -6 ;~ 26A9:0697
#undef var_4
#define var_4 -4
	// 84348 var_4           = word ptr -4 ;~ 26A9:0697
#undef var_2
#define var_2 -2
	// 84349 var_2           = word ptr -2 ;~ 26A9:0697
#undef arg_0
#define arg_0 6
	// 84350 arg_0           = byte ptr  6 ;~ 26A9:0697
#undef arg_4
#define arg_4 0x0A
	// 84351 arg_4           = word ptr  0Ah ;~ 26A9:0697
#undef arg_6
#define arg_6 0x0C
	// 84352 arg_6           = word ptr  0Ch ;~ 26A9:0697
#undef arg_8
#define arg_8 0x0E
	// 84353 arg_8           = byte ptr  0Eh ;~ 26A9:0697
#undef arg_c
#define arg_c 0x12
	// 84354 arg_C           = word ptr  12h ;~ 26A9:0697
cs=0x26a9;eip=0x000697; 	X(PUSH(bp));	// 84356 push    bp ;~ 26A9:0697
cs=0x26a9;eip=0x000698; 	T(MOV(bp, sp));	// 84357 mov     bp, sp ;~ 26A9:0698
cs=0x26a9;eip=0x00069a; 	T(SUB(sp, 0x58));	// 84358 sub     sp, 58h ;~ 26A9:069A
cs=0x26a9;eip=0x00069d; 	X(PUSH(di));	// 84359 push    di ;~ 26A9:069D
cs=0x26a9;eip=0x00069e; 	X(PUSH(si));	// 84360 push    si ;~ 26A9:069E
cs=0x26a9;eip=0x00069f; 	T(CMP(unk_47ac2, 0));	// 84361 cmp     byte ptr unk_47AC2, 0 ;~ 26A9:069F
cs=0x26a9;eip=0x0006a4; 	R(JNZ(loc_35719));	// 84362 jnz     short loc_35719 ;~ 26A9:06A4
cs=0x26a9;eip=0x0006a6; 	R(JMP(loc_35ba8));	// 84363 jmp     loc_35BA8 ;~ 26A9:06A6
loc_35719:
	// 9777 
cs=0x26a9;eip=0x0006a9; 	T(MOV(ax, 0x0EAE4));	// 84367 mov     ax, 0EAE4h ;~ 26A9:06A9
cs=0x26a9;eip=0x0006ac; 	X(PUSH(ax));	// 84368 push    ax ;~ 26A9:06AC
cs=0x26a9;eip=0x0006ad; 	R(CALLF(sub_259bd,0));	// 84369 call    sub_259BD ;~ 26A9:06AD
cs=0x26a9;eip=0x0006b2; 	T(MOV(ax, 0x0F6B2));	// 84370 mov     ax, 0F6B2h ;~ 26A9:06B2
cs=0x26a9;eip=0x0006b5; 	X(PUSH(ax));	// 84371 push    ax ;~ 26A9:06B5
cs=0x26a9;eip=0x0006b6; 	R(CALLF(sub_259bd,0));	// 84372 call    sub_259BD ;~ 26A9:06B6
cs=0x26a9;eip=0x0006bb; 	T(CMP(*(dw*)((&byte_47b2e)), 4));	// 84373 cmp     word ptr byte_47B2E, 4 ;~ 26A9:06BB
cs=0x26a9;eip=0x0006c0; 	R(JZ(loc_35739));	// 84374 jz      short loc_35739 ;~ 26A9:06C0
cs=0x26a9;eip=0x0006c2; 	T(CMP(*(dw*)((&byte_47b2e)), 5));	// 84375 cmp     word ptr byte_47B2E, 5 ;~ 26A9:06C2
cs=0x26a9;eip=0x0006c7; 	R(JNZ(loc_3573d));	// 84376 jnz     short loc_3573D ;~ 26A9:06C7
loc_35739:
	// 9778 
cs=0x26a9;eip=0x0006c9; 	T(MOV(al, 1));	// 84379 mov     al, 1 ;~ 26A9:06C9
cs=0x26a9;eip=0x0006cb; 	R(JMP(loc_3573f));	// 84380 jmp     short loc_3573F ;~ 26A9:06CB
loc_3573d:
	// 9779 
cs=0x26a9;eip=0x0006cd; 	T(SUB(al, al));	// 84384 sub     al, al ;~ 26A9:06CD
loc_3573f:
	// 9780 
cs=0x26a9;eip=0x0006cf; 	X(MOV(*(raddr(ss,bp+var_54)), al));	// 84387 mov     [bp+var_54], al ;~ 26A9:06CF
cs=0x26a9;eip=0x0006d2; 	T(OR(al, al));	// 84388 or      al, al ;~ 26A9:06D2
cs=0x26a9;eip=0x0006d4; 	R(JZ(loc_3574c));	// 84389 jz      short loc_3574C ;~ 26A9:06D4
cs=0x26a9;eip=0x0006d6; 	X(MOV(*(raddr(ss,bp+var_10)), 0));	// 84390 mov     [bp+var_10], 0 ;~ 26A9:06D6
cs=0x26a9;eip=0x0006da; 	R(JMP(loc_35788));	// 84391 jmp     short loc_35788 ;~ 26A9:06DA
loc_3574c:
	// 9781 
cs=0x26a9;eip=0x0006dc; 	T(MOV(cx, 0x0A));	// 84395 mov     cx, 0Ah ;~ 26A9:06DC
cs=0x26a9;eip=0x0006df; 	T(di = bp+var_50);	// 84396 lea     di, [bp+var_50] ;~ 26A9:06DF
cs=0x26a9;eip=0x0006e2; 	T(MOV(ax, ss));	// 84397 mov     ax, ss ;~ 26A9:06E2
cs=0x26a9;eip=0x0006e4; 	T(MOV(es, ax));	// 84398 mov     es, ax ;~ 26A9:06E4
cs=0x26a9;eip=0x0006e6; 	T(SUB(ax, ax));	// 84399 sub     ax, ax ;~ 26A9:06E6
	// 84400 repne stosb ;~ 26A9:06E8
cs=0x26a9;eip=0x0006e8; 	X(	REPNE STOSB);	// 84400 repne stosb ;~ 26A9:06E8
cs=0x26a9;eip=0x0006ea; 	T(ax = bp+var_50);	// 84401 lea     ax, [bp+var_50] ;~ 26A9:06EA
cs=0x26a9;eip=0x0006ed; 	X(PUSH(ax));	// 84402 push    ax ;~ 26A9:06ED
cs=0x26a9;eip=0x0006ee; 	X(PUSH(*(dw*)((&unk_47b34))));	// 84403 push    word ptr unk_47B34 ;~ 26A9:06EE
cs=0x26a9;eip=0x0006f2; 	X(PUSH(*(dw*)((&unk_47b36))));	// 84404 push    word ptr unk_47B36 ;~ 26A9:06F2
cs=0x26a9;eip=0x0006f6; 	R(CALLF(sub_31695,0));	// 84405 call    sub_31695 ;~ 26A9:06F6
cs=0x26a9;eip=0x0006fb; 	T(MOV(ax, 0x0ED08));	// 84406 mov     ax, 0ED08h ;~ 26A9:06FB
cs=0x26a9;eip=0x0006fe; 	X(PUSH(ax));	// 84407 push    ax ;~ 26A9:06FE
cs=0x26a9;eip=0x0006ff; 	T(SUB(ax, ax));	// 84408 sub     ax, ax ;~ 26A9:06FF
cs=0x26a9;eip=0x000701; 	X(PUSH(ax));	// 84409 push    ax ;~ 26A9:0701
cs=0x26a9;eip=0x000702; 	X(PUSH(ax));	// 84410 push    ax ;~ 26A9:0702
cs=0x26a9;eip=0x000703; 	T(ax = bp+var_50);	// 84411 lea     ax, [bp+var_50] ;~ 26A9:0703
cs=0x26a9;eip=0x000706; 	X(PUSH(ax));	// 84412 push    ax ;~ 26A9:0706
cs=0x26a9;eip=0x000707; 	T(SUB(ax, ax));	// 84413 sub     ax, ax ;~ 26A9:0707
cs=0x26a9;eip=0x000709; 	X(PUSH(ax));	// 84414 push    ax ;~ 26A9:0709
cs=0x26a9;eip=0x00070a; 	X(PUSH(ax));	// 84415 push    ax ;~ 26A9:070A
cs=0x26a9;eip=0x00070b; 	X(PUSH(*(dw*)((&unk_47b34))));	// 84416 push    word ptr unk_47B34 ;~ 26A9:070B
cs=0x26a9;eip=0x00070f; 	X(PUSH(*(dw*)((&unk_47b36))));	// 84417 push    word ptr unk_47B36 ;~ 26A9:070F
cs=0x26a9;eip=0x000713; 	R(CALLF(sub_2c4d3,0));	// 84418 call    sub_2C4D3 ;~ 26A9:0713
loc_35788:
	// 9782 
cs=0x26a9;eip=0x000718; 	T(di = bp+var_40);	// 84421 lea     di, [bp+var_40] ;~ 26A9:0718
cs=0x26a9;eip=0x00071b; 	T(MOV(si, 0x180));	// 84422 mov     si, 180h ;~ 26A9:071B
cs=0x26a9;eip=0x00071e; 	X(PUSH(ss));	// 84423 push    ss ;~ 26A9:071E
cs=0x26a9;eip=0x00071f; 	X(POP(es));	// 84424 pop     es ;~ 26A9:071F
cs=0x26a9;eip=0x000720; 	X(MOVSW);	// 84425 movsw ;~ 26A9:0720
cs=0x26a9;eip=0x000721; 	X(MOVSW);	// 84426 movsw ;~ 26A9:0721
cs=0x26a9;eip=0x000722; 	X(MOVSW);	// 84427 movsw ;~ 26A9:0722
cs=0x26a9;eip=0x000723; 	X(MOVSW);	// 84428 movsw ;~ 26A9:0723
cs=0x26a9;eip=0x000724; 	T(MOV(ax, *(dw*)((&unk_47ad0))));	// 84429 mov     ax, word ptr unk_47AD0 ;~ 26A9:0724
cs=0x26a9;eip=0x000727; 	T(MOV(dx, *(dw*)((&unk_47ad2))));	// 84430 mov     dx, word ptr unk_47AD2 ;~ 26A9:0727
cs=0x26a9;eip=0x00072b; 	T(ADD(ax, 6));	// 84431 add     ax, 6 ;~ 26A9:072B
cs=0x26a9;eip=0x00072e; 	T(di = bp+var_e);	// 84432 lea     di, [bp+var_E] ;~ 26A9:072E
cs=0x26a9;eip=0x000731; 	T(MOV(si, ax));	// 84433 mov     si, ax ;~ 26A9:0731
cs=0x26a9;eip=0x000733; 	X(PUSH(ds));	// 84434 push    ds ;~ 26A9:0733
cs=0x26a9;eip=0x000734; 	T(MOV(ds, dx));	// 84435 mov     ds, dx ;~ 26A9:0734
cs=0x26a9;eip=0x000736; 	T(MOV(cx, 6));	// 84436 mov     cx, 6 ;~ 26A9:0736
	// 84437 repne movsw ;~ 26A9:0739
cs=0x26a9;eip=0x000739; 	X(	REPNE MOVSW);	// 84437 repne movsw ;~ 26A9:0739
cs=0x26a9;eip=0x00073b; 	X(POP(ds));	// 84438 pop     ds ;~ 26A9:073B
cs=0x26a9;eip=0x00073c; 	T(ax = bp+var_e);	// 84439 lea     ax, [bp+var_E] ;~ 26A9:073C
cs=0x26a9;eip=0x00073f; 	X(PUSH(ss));	// 84440 push    ss ;~ 26A9:073F
cs=0x26a9;eip=0x000740; 	X(PUSH(ax));	// 84441 push    ax ;~ 26A9:0740
cs=0x26a9;eip=0x000741; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 84442 les     bx, dword ptr unk_47AD0 ;~ 26A9:0741
cs=0x26a9;eip=0x000745; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 84443 mov     ax, es:[bx+12h] ;~ 26A9:0745
cs=0x26a9;eip=0x000749; 	T(ADD(ax, 0x5A0));	// 84444 add     ax, 5A0h ;~ 26A9:0749
cs=0x26a9;eip=0x00074c; 	X(PUSH(ax));	// 84445 push    ax ;~ 26A9:074C
cs=0x26a9;eip=0x00074d; 	T(MOV(ax, 0x78));	// 84446 mov     ax, 78h ; 'x' ;~ 26A9:074D
cs=0x26a9;eip=0x000750; 	X(PUSH(ax));	// 84447 push    ax ;~ 26A9:0750
cs=0x26a9;eip=0x000751; 	T(MOV(ax, 0x4600));	// 84448 mov     ax, 4600h ;~ 26A9:0751
cs=0x26a9;eip=0x000754; 	T(CWD);	// 84449 cwd ;~ 26A9:0754
cs=0x26a9;eip=0x000755; 	X(PUSH(dx));	// 84450 push    dx ;~ 26A9:0755
cs=0x26a9;eip=0x000756; 	X(PUSH(ax));	// 84451 push    ax ;~ 26A9:0756
cs=0x26a9;eip=0x000757; 	R(CALLF(sub_2f4ee,0));	// 84452 call    sub_2F4EE ;~ 26A9:0757
cs=0x26a9;eip=0x00075c; 	T(di = bp+var_1e);	// 84453 lea     di, [bp+var_1E] ;~ 26A9:075C
cs=0x26a9;eip=0x00075f; 	T(si = bp+var_e);	// 84454 lea     si, [bp+var_E] ;~ 26A9:075F
cs=0x26a9;eip=0x000762; 	X(PUSH(ss));	// 84455 push    ss ;~ 26A9:0762
cs=0x26a9;eip=0x000763; 	X(POP(es));	// 84456 pop     es ;~ 26A9:0763
cs=0x26a9;eip=0x000764; 	T(MOV(cx, 6));	// 84457 mov     cx, 6 ;~ 26A9:0764
	// 84458 repne movsw ;~ 26A9:0767
cs=0x26a9;eip=0x000767; 	X(	REPNE MOVSW);	// 84458 repne movsw ;~ 26A9:0767
cs=0x26a9;eip=0x000769; 	T(SUB(ax, ax));	// 84459 sub     ax, ax ;~ 26A9:0769
cs=0x26a9;eip=0x00076b; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 84460 mov     [bp+var_36], ax ;~ 26A9:076B
cs=0x26a9;eip=0x00076e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 84461 mov     [bp+var_2], ax ;~ 26A9:076E
cs=0x26a9;eip=0x000771; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 84462 mov     [bp+var_24], ax ;~ 26A9:0771
cs=0x26a9;eip=0x000774; 	X(MOV(*(dw*)(raddr(ss,bp+var_46)), 0x870));	// 84463 mov     [bp+var_46], 870h ;~ 26A9:0774
cs=0x26a9;eip=0x000779; 	T(SUB(al, al));	// 84464 sub     al, al ;~ 26A9:0779
cs=0x26a9;eip=0x00077b; 	X(MOV(*(raddr(ss,bp+var_33)), al));	// 84465 mov     [bp+var_33], al ;~ 26A9:077B
cs=0x26a9;eip=0x00077e; 	X(MOV(*(raddr(ss,bp+var_34)), al));	// 84466 mov     [bp+var_34], al ;~ 26A9:077E
cs=0x26a9;eip=0x000781; 	X(MOV(*(raddr(ss,bp+var_2e)), al));	// 84467 mov     [bp+var_2E], al ;~ 26A9:0781
cs=0x26a9;eip=0x000784; 	X(MOV(*(raddr(ss,bp+var_58)), al));	// 84468 mov     [bp+var_58], al ;~ 26A9:0784
cs=0x26a9;eip=0x000787; 	X(MOV(*(raddr(ss,bp+var_30)), al));	// 84469 mov     [bp+var_30], al ;~ 26A9:0787
cs=0x26a9;eip=0x00078a; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 84470 mov     [bp+var_12], al ;~ 26A9:078A
cs=0x26a9;eip=0x00078d; 	X(MOV(*(raddr(ss,bp+var_44)), al));	// 84471 mov     [bp+var_44], al ;~ 26A9:078D
cs=0x26a9;eip=0x000790; 	T(MOV(ax, *(dw*)((&unk_5649a))));	// 84472 mov     ax, word ptr unk_5649A ;~ 26A9:0790
cs=0x26a9;eip=0x000793; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 84473 mov     [bp+var_22], ax ;~ 26A9:0793
cs=0x26a9;eip=0x000796; 	T(MOV(ax, *(dw*)((&unk_57068))));	// 84474 mov     ax, word ptr unk_57068 ;~ 26A9:0796
cs=0x26a9;eip=0x000799; 	X(MOV(*(dw*)(raddr(ss,bp+var_52)), ax));	// 84475 mov     [bp+var_52], ax ;~ 26A9:0799
cs=0x26a9;eip=0x00079c; 	T(MOV(al, unk_564ec));	// 84476 mov     al, byte ptr unk_564EC ;~ 26A9:079C
cs=0x26a9;eip=0x00079f; 	X(MOV(*(raddr(ss,bp+var_2c)), al));	// 84477 mov     [bp+var_2C], al ;~ 26A9:079F
cs=0x26a9;eip=0x0007a2; 	T(MOV(al, unk_570ba));	// 84478 mov     al, byte ptr unk_570BA ;~ 26A9:07A2
cs=0x26a9;eip=0x0007a5; 	X(MOV(*(raddr(ss,bp+var_56)), al));	// 84479 mov     [bp+var_56], al ;~ 26A9:07A5
cs=0x26a9;eip=0x0007a8; 	T(SUB(al, al));	// 84480 sub     al, al ;~ 26A9:07A8
cs=0x26a9;eip=0x0007aa; 	X(MOV(unk_570ba, al));	// 84481 mov     byte ptr unk_570BA, al ;~ 26A9:07AA
cs=0x26a9;eip=0x0007ad; 	X(MOV(unk_564ec, al));	// 84482 mov     byte ptr unk_564EC, al ;~ 26A9:07AD
cs=0x26a9;eip=0x0007b0; 	X(MOV(*(dw*)((&unk_49ff8)), 0x0A0));	// 84483 mov     word ptr unk_49FF8, 0A0h ; ' ' ;~ 26A9:07B0
cs=0x26a9;eip=0x0007b6; 	R(CALLF(sub_3101f,0));	// 84484 call    sub_3101F ;~ 26A9:07B6
cs=0x26a9;eip=0x0007bb; 	R(CALLF(sub_1bbee,0));	// 84485 call    sub_1BBEE ;~ 26A9:07BB
cs=0x26a9;eip=0x0007c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), 0));	// 84486 mov     [bp+var_20], 0 ;~ 26A9:07C0
loc_35835:
	// 9783 
cs=0x26a9;eip=0x0007c5; 	R(CALLF(sub_2ee71,0));	// 84490 call    sub_2EE71 ;~ 26A9:07C5
cs=0x26a9;eip=0x0007ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_42)), ax));	// 84491 mov     [bp+var_42], ax ;~ 26A9:07CA
cs=0x26a9;eip=0x0007cd; 	T(OR(ax, ax));	// 84492 or      ax, ax ;~ 26A9:07CD
cs=0x26a9;eip=0x0007cf; 	R(JZ(loc_3584e));	// 84493 jz      short loc_3584E ;~ 26A9:07CF
cs=0x26a9;eip=0x0007d1; 	T(CMP(ax, 3));	// 84494 cmp     ax, 3 ;~ 26A9:07D1
cs=0x26a9;eip=0x0007d4; 	R(JZ(loc_35849));	// 84495 jz      short loc_35849 ;~ 26A9:07D4
cs=0x26a9;eip=0x0007d6; 	R(JMP(loc_35b1b));	// 84496 jmp     loc_35B1B ;~ 26A9:07D6
loc_35849:
	// 9784 
cs=0x26a9;eip=0x0007d9; 	R(CALLF(sub_318b6,0));	// 84500 call    sub_318B6 ;~ 26A9:07D9
loc_3584e:
	// 9785 
cs=0x26a9;eip=0x0007de; 	R(CALLF(sub_1bc16,0));	// 84503 call    sub_1BC16 ;~ 26A9:07DE
cs=0x26a9;eip=0x0007e3; 	T(CMP(*(dw*)((&unk_57056)), 0x80));	// 84504 cmp     word ptr unk_57056, 80h ; '€' ;~ 26A9:07E3
cs=0x26a9;eip=0x0007e9; 	R(JLE(loc_35861));	// 84505 jle     short loc_35861 ;~ 26A9:07E9
cs=0x26a9;eip=0x0007eb; 	X(MOV(*(dw*)((&unk_57056)), 0x80));	// 84506 mov     word ptr unk_57056, 80h ; '€' ;~ 26A9:07EB
loc_35861:
	// 9786 
cs=0x26a9;eip=0x0007f1; 	T(CMP(*(dw*)((&unk_57058)), 4));	// 84509 cmp     word ptr unk_57058, 4 ;~ 26A9:07F1
cs=0x26a9;eip=0x0007f6; 	R(JC(loc_35885));	// 84510 jb      short loc_35885 ;~ 26A9:07F6
cs=0x26a9;eip=0x0007f8; 	T(CMP(*(raddr(ss,bp+var_2e)), 0));	// 84511 cmp     [bp+var_2E], 0 ;~ 26A9:07F8
cs=0x26a9;eip=0x0007fc; 	R(JNZ(loc_35885));	// 84512 jnz     short loc_35885 ;~ 26A9:07FC
cs=0x26a9;eip=0x0007fe; 	X(MOV(*(raddr(ss,bp+var_2e)), 1));	// 84513 mov     [bp+var_2E], 1 ;~ 26A9:07FE
cs=0x26a9;eip=0x000802; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_c))));	// 84514 mov     ax, [bp+arg_C] ;~ 26A9:0802
cs=0x26a9;eip=0x000805; 	T(di = bp+var_40);	// 84515 lea     di, [bp+var_40] ;~ 26A9:0805
cs=0x26a9;eip=0x000808; 	T(MOV(si, ax));	// 84516 mov     si, ax ;~ 26A9:0808
cs=0x26a9;eip=0x00080a; 	X(PUSH(ss));	// 84517 push    ss ;~ 26A9:080A
cs=0x26a9;eip=0x00080b; 	X(POP(es));	// 84518 pop     es ;~ 26A9:080B
cs=0x26a9;eip=0x00080c; 	X(MOVSW);	// 84519 movsw ;~ 26A9:080C
cs=0x26a9;eip=0x00080d; 	X(MOVSW);	// 84520 movsw ;~ 26A9:080D
cs=0x26a9;eip=0x00080e; 	X(MOVSW);	// 84521 movsw ;~ 26A9:080E
cs=0x26a9;eip=0x00080f; 	X(MOVSW);	// 84522 movsw ;~ 26A9:080F
cs=0x26a9;eip=0x000810; 	R(CALLF(sub_20565,0));	// 84523 call    sub_20565 ;~ 26A9:0810
loc_35885:
	// 9787 
cs=0x26a9;eip=0x000815; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 84527 mov     ax, [bp+var_16] ;~ 26A9:0815
cs=0x26a9;eip=0x000818; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_14))));	// 84528 mov     dx, [bp+var_14] ;~ 26A9:0818
cs=0x26a9;eip=0x00081b; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_6))));	// 84529 sub     ax, [bp+var_6] ;~ 26A9:081B
cs=0x26a9;eip=0x00081e; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_4))));	// 84530 sbb     dx, [bp+var_4] ;~ 26A9:081E
cs=0x26a9;eip=0x000821; 	R(JNS(loc_3589a));	// 84531 jns     short loc_3589A ;~ 26A9:0821
cs=0x26a9;eip=0x000823; 	T(NEG(ax));	// 84532 neg     ax ;~ 26A9:0823
cs=0x26a9;eip=0x000825; 	T(ADC(dx, 0));	// 84533 adc     dx, 0 ;~ 26A9:0825
cs=0x26a9;eip=0x000828; 	T(NEG(dx));	// 84534 neg     dx ;~ 26A9:0828
loc_3589a:
	// 9788 
cs=0x26a9;eip=0x00082a; 	T(MOV(cx, ax));	// 84537 mov     cx, ax ;~ 26A9:082A
cs=0x26a9;eip=0x00082c; 	T(MOV(bx, dx));	// 84538 mov     bx, dx ;~ 26A9:082C
cs=0x26a9;eip=0x00082e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 84539 mov     ax, [bp+var_1A] ;~ 26A9:082E
cs=0x26a9;eip=0x000831; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_18))));	// 84540 mov     dx, [bp+var_18] ;~ 26A9:0831
cs=0x26a9;eip=0x000834; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_a))));	// 84541 sub     ax, [bp+var_A] ;~ 26A9:0834
cs=0x26a9;eip=0x000837; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_8))));	// 84542 sbb     dx, [bp+var_8] ;~ 26A9:0837
cs=0x26a9;eip=0x00083a; 	R(JNS(loc_358b3));	// 84543 jns     short loc_358B3 ;~ 26A9:083A
cs=0x26a9;eip=0x00083c; 	T(NEG(ax));	// 84544 neg     ax ;~ 26A9:083C
cs=0x26a9;eip=0x00083e; 	T(ADC(dx, 0));	// 84545 adc     dx, 0 ;~ 26A9:083E
cs=0x26a9;eip=0x000841; 	T(NEG(dx));	// 84546 neg     dx ;~ 26A9:0841
loc_358b3:
	// 9789 
cs=0x26a9;eip=0x000843; 	T(MOV(si, ax));	// 84549 mov     si, ax ;~ 26A9:0843
cs=0x26a9;eip=0x000845; 	T(MOV(di, dx));	// 84550 mov     di, dx ;~ 26A9:0845
cs=0x26a9;eip=0x000847; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 84551 mov     ax, [bp+var_1E] ;~ 26A9:0847
cs=0x26a9;eip=0x00084a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1c))));	// 84552 mov     dx, [bp+var_1C] ;~ 26A9:084A
cs=0x26a9;eip=0x00084d; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_e))));	// 84553 sub     ax, [bp+var_E] ;~ 26A9:084D
cs=0x26a9;eip=0x000850; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_c))));	// 84554 sbb     dx, [bp+var_C] ;~ 26A9:0850
cs=0x26a9;eip=0x000853; 	R(JNS(loc_358cc));	// 84555 jns     short loc_358CC ;~ 26A9:0853
cs=0x26a9;eip=0x000855; 	T(NEG(ax));	// 84556 neg     ax ;~ 26A9:0855
cs=0x26a9;eip=0x000857; 	T(ADC(dx, 0));	// 84557 adc     dx, 0 ;~ 26A9:0857
cs=0x26a9;eip=0x00085a; 	T(NEG(dx));	// 84558 neg     dx ;~ 26A9:085A
loc_358cc:
	// 9790 
cs=0x26a9;eip=0x00085c; 	T(ADD(ax, si));	// 84561 add     ax, si ;~ 26A9:085C
cs=0x26a9;eip=0x00085e; 	T(ADC(dx, di));	// 84562 adc     dx, di ;~ 26A9:085E
cs=0x26a9;eip=0x000860; 	T(ADD(ax, cx));	// 84563 add     ax, cx ;~ 26A9:0860
cs=0x26a9;eip=0x000862; 	T(ADC(dx, bx));	// 84564 adc     dx, bx ;~ 26A9:0862
cs=0x26a9;eip=0x000864; 	X(MOV(*(dw*)(raddr(ss,bp+var_2a)), ax));	// 84565 mov     [bp+var_2A], ax ;~ 26A9:0864
cs=0x26a9;eip=0x000867; 	X(MOV(*(dw*)(raddr(ss,bp+var_28)), dx));	// 84566 mov     [bp+var_28], dx ;~ 26A9:0867
cs=0x26a9;eip=0x00086a; 	T(ax = bp+var_1e);	// 84567 lea     ax, [bp+var_1E] ;~ 26A9:086A
cs=0x26a9;eip=0x00086d; 	X(PUSH(ax));	// 84568 push    ax ;~ 26A9:086D
cs=0x26a9;eip=0x00086e; 	T(ax = bp+arg_0);	// 84569 lea     ax, [bp+arg_0] ;~ 26A9:086E
cs=0x26a9;eip=0x000871; 	X(PUSH(ax));	// 84570 push    ax ;~ 26A9:0871
cs=0x26a9;eip=0x000872; 	R(CALL(sub_355f8,0));	// 84571 call    sub_355F8 ;~ 26A9:0872
cs=0x26a9;eip=0x000875; 	T(ax = bp+var_1a);	// 84572 lea     ax, [bp+var_1A] ;~ 26A9:0875
cs=0x26a9;eip=0x000878; 	X(PUSH(ax));	// 84573 push    ax ;~ 26A9:0878
cs=0x26a9;eip=0x000879; 	T(ax = bp+arg_4);	// 84574 lea     ax, [bp+arg_4] ;~ 26A9:0879
cs=0x26a9;eip=0x00087c; 	X(PUSH(ax));	// 84575 push    ax ;~ 26A9:087C
cs=0x26a9;eip=0x00087d; 	R(CALL(sub_355f8,0));	// 84576 call    sub_355F8 ;~ 26A9:087D
cs=0x26a9;eip=0x000880; 	T(ax = bp+var_16);	// 84577 lea     ax, [bp+var_16] ;~ 26A9:0880
cs=0x26a9;eip=0x000883; 	X(PUSH(ax));	// 84578 push    ax ;~ 26A9:0883
cs=0x26a9;eip=0x000884; 	T(ax = bp+arg_8);	// 84579 lea     ax, [bp+arg_8] ;~ 26A9:0884
cs=0x26a9;eip=0x000887; 	X(PUSH(ax));	// 84580 push    ax ;~ 26A9:0887
cs=0x26a9;eip=0x000888; 	R(CALL(sub_355f8,0));	// 84581 call    sub_355F8 ;~ 26A9:0888
cs=0x26a9;eip=0x00088b; 	T(CMP(*(dw*)((&unk_57058)), 1));	// 84582 cmp     word ptr unk_57058, 1 ;~ 26A9:088B
cs=0x26a9;eip=0x000890; 	R(JNC(loc_3592b));	// 84583 jnb     short loc_3592B ;~ 26A9:0890
cs=0x26a9;eip=0x000892; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 84584 push    [bp+var_1C] ;~ 26A9:0892
cs=0x26a9;eip=0x000895; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 84585 push    [bp+var_1E] ;~ 26A9:0895
cs=0x26a9;eip=0x000898; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 84586 push    [bp+var_18] ;~ 26A9:0898
cs=0x26a9;eip=0x00089b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 84587 push    [bp+var_1A] ;~ 26A9:089B
cs=0x26a9;eip=0x00089e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 84588 push    [bp+var_14] ;~ 26A9:089E
cs=0x26a9;eip=0x0008a1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84589 push    [bp+var_16] ;~ 26A9:08A1
cs=0x26a9;eip=0x0008a4; 	X(PUSH(*(dw*)((&unk_47ad2))));	// 84590 push    word ptr unk_47AD2 ;~ 26A9:08A4
cs=0x26a9;eip=0x0008a8; 	X(PUSH(*(dw*)((&unk_47ad0))));	// 84591 push    word ptr unk_47AD0 ;~ 26A9:08A8
cs=0x26a9;eip=0x0008ac; 	T(ax = bp+var_2);	// 84592 lea     ax, [bp+var_2] ;~ 26A9:08AC
cs=0x26a9;eip=0x0008af; 	X(PUSH(ax));	// 84593 push    ax ;~ 26A9:08AF
cs=0x26a9;eip=0x0008b0; 	T(ax = bp+var_36);	// 84594 lea     ax, [bp+var_36] ;~ 26A9:08B0
cs=0x26a9;eip=0x0008b3; 	X(PUSH(ax));	// 84595 push    ax ;~ 26A9:08B3
cs=0x26a9;eip=0x0008b4; 	R(CALLF(sub_25b9c,0));	// 84596 call    sub_25B9C ;~ 26A9:08B4
cs=0x26a9;eip=0x0008b9; 	R(JMP(loc_35971));	// 84597 jmp     short loc_35971 ;~ 26A9:08B9
loc_3592b:
	// 9791 
cs=0x26a9;eip=0x0008bb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 84601 push    [bp+var_2] ;~ 26A9:08BB
cs=0x26a9;eip=0x0008be; 	X(PUSH(*(dw*)(raddr(ss,bp+var_24))));	// 84602 push    [bp+var_24] ;~ 26A9:08BE
cs=0x26a9;eip=0x0008c1; 	T(MOV(ax, 0x168));	// 84603 mov     ax, 168h ;~ 26A9:08C1
cs=0x26a9;eip=0x0008c4; 	X(PUSH(ax));	// 84604 push    ax ;~ 26A9:08C4
cs=0x26a9;eip=0x0008c5; 	X(PUSH(*(dw*)((&unk_57056))));	// 84605 push    word ptr unk_57056 ;~ 26A9:08C5
cs=0x26a9;eip=0x0008c9; 	R(CALLF(sub_2f002,0));	// 84606 call    sub_2F002 ;~ 26A9:08C9
cs=0x26a9;eip=0x0008ce; 	T(MOV(cl, 8));	// 84607 mov     cl, 8 ;~ 26A9:08CE
cs=0x26a9;eip=0x0008d0; 	R(CALLF(sub_10240,0));	// 84608 call    sub_10240 ;~ 26A9:08D0
cs=0x26a9;eip=0x0008d5; 	X(PUSH(ax));	// 84609 push    ax ;~ 26A9:08D5
cs=0x26a9;eip=0x0008d6; 	R(CALLF(sub_13561,0));	// 84610 call    sub_13561 ;~ 26A9:08D6
cs=0x26a9;eip=0x0008db; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 84611 mov     [bp+var_2], ax ;~ 26A9:08DB
cs=0x26a9;eip=0x0008de; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 84612 push    [bp+var_36] ;~ 26A9:08DE
cs=0x26a9;eip=0x0008e1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_46))));	// 84613 push    [bp+var_46] ;~ 26A9:08E1
cs=0x26a9;eip=0x0008e4; 	T(MOV(ax, 0x168));	// 84614 mov     ax, 168h ;~ 26A9:08E4
cs=0x26a9;eip=0x0008e7; 	X(PUSH(ax));	// 84615 push    ax ;~ 26A9:08E7
cs=0x26a9;eip=0x0008e8; 	X(PUSH(*(dw*)((&unk_57056))));	// 84616 push    word ptr unk_57056 ;~ 26A9:08E8
cs=0x26a9;eip=0x0008ec; 	R(CALLF(sub_2f002,0));	// 84617 call    sub_2F002 ;~ 26A9:08EC
cs=0x26a9;eip=0x0008f1; 	T(MOV(cl, 8));	// 84618 mov     cl, 8 ;~ 26A9:08F1
cs=0x26a9;eip=0x0008f3; 	R(CALLF(sub_10240,0));	// 84619 call    sub_10240 ;~ 26A9:08F3
cs=0x26a9;eip=0x0008f8; 	X(PUSH(ax));	// 84620 push    ax ;~ 26A9:08F8
cs=0x26a9;eip=0x0008f9; 	R(CALLF(sub_13561,0));	// 84621 call    sub_13561 ;~ 26A9:08F9
cs=0x26a9;eip=0x0008fe; 	X(MOV(*(dw*)(raddr(ss,bp+var_36)), ax));	// 84622 mov     [bp+var_36], ax ;~ 26A9:08FE
loc_35971:
	// 9792 
cs=0x26a9;eip=0x000901; 	T(CMP(*(raddr(ss,bp+var_2e)), 0));	// 84625 cmp     [bp+var_2E], 0 ;~ 26A9:0901
cs=0x26a9;eip=0x000905; 	R(JZ(loc_359cb));	// 84626 jz      short loc_359CB ;~ 26A9:0905
cs=0x26a9;eip=0x000907; 	T(MOV(si, *(dw*)((&unk_5651c))));	// 84627 mov     si, word ptr unk_5651C ;~ 26A9:0907
cs=0x26a9;eip=0x00090b; 	T(CMP(*(raddr(ss,bp+si+var_34)), 0));	// 84628 cmp     [bp+si+var_34], 0 ;~ 26A9:090B
cs=0x26a9;eip=0x00090f; 	R(JNZ(loc_359cb));	// 84629 jnz     short loc_359CB ;~ 26A9:090F
cs=0x26a9;eip=0x000911; 	T(CMP(*(raddr(ss,bp+var_54)), 0));	// 84630 cmp     [bp+var_54], 0 ;~ 26A9:0911
cs=0x26a9;eip=0x000915; 	R(JZ(loc_3599a));	// 84631 jz      short loc_3599A ;~ 26A9:0915
cs=0x26a9;eip=0x000917; 	T(MOV(ax, 0x265A));	// 84632 mov     ax, 265Ah ;~ 26A9:0917
cs=0x26a9;eip=0x00091a; 	X(PUSH(ax));	// 84633 push    ax ;~ 26A9:091A
cs=0x26a9;eip=0x00091b; 	T(MOV(ax, 0x0ED08));	// 84634 mov     ax, 0ED08h ;~ 26A9:091B
cs=0x26a9;eip=0x00091e; 	X(PUSH(ax));	// 84635 push    ax ;~ 26A9:091E
cs=0x26a9;eip=0x00091f; 	R(CALLF(sub_316b2,0));	// 84636 call    sub_316B2 ;~ 26A9:091F
cs=0x26a9;eip=0x000924; 	X(MOV(*(raddr(ss,bp+var_10)), 1));	// 84637 mov     [bp+var_10], 1 ;~ 26A9:0924
cs=0x26a9;eip=0x000928; 	R(JMP(loc_359b7));	// 84638 jmp     short loc_359B7 ;~ 26A9:0928
loc_3599a:
	// 9793 
cs=0x26a9;eip=0x00092a; 	T(ax = bp+var_50);	// 84642 lea     ax, [bp+var_50] ;~ 26A9:092A
cs=0x26a9;eip=0x00092d; 	X(PUSH(ax));	// 84643 push    ax ;~ 26A9:092D
cs=0x26a9;eip=0x00092e; 	T(SUB(ax, ax));	// 84644 sub     ax, ax ;~ 26A9:092E
cs=0x26a9;eip=0x000930; 	X(PUSH(ax));	// 84645 push    ax ;~ 26A9:0930
cs=0x26a9;eip=0x000931; 	X(PUSH(ax));	// 84646 push    ax ;~ 26A9:0931
cs=0x26a9;eip=0x000932; 	T(MOV(ax, 0x0ED08));	// 84647 mov     ax, 0ED08h ;~ 26A9:0932
cs=0x26a9;eip=0x000935; 	X(PUSH(ax));	// 84648 push    ax ;~ 26A9:0935
cs=0x26a9;eip=0x000936; 	T(SUB(ax, ax));	// 84649 sub     ax, ax ;~ 26A9:0936
cs=0x26a9;eip=0x000938; 	X(PUSH(ax));	// 84650 push    ax ;~ 26A9:0938
cs=0x26a9;eip=0x000939; 	X(PUSH(ax));	// 84651 push    ax ;~ 26A9:0939
cs=0x26a9;eip=0x00093a; 	X(PUSH(*(dw*)((&unk_47b34))));	// 84652 push    word ptr unk_47B34 ;~ 26A9:093A
cs=0x26a9;eip=0x00093e; 	X(PUSH(*(dw*)((&unk_47b36))));	// 84653 push    word ptr unk_47B36 ;~ 26A9:093E
cs=0x26a9;eip=0x000942; 	R(CALLF(sub_2c4d3,0));	// 84654 call    sub_2C4D3 ;~ 26A9:0942
loc_359b7:
	// 9794 
cs=0x26a9;eip=0x000947; 	T(TEST(byte_5687c, 2));	// 84657 test    byte_5687C, 2 ;~ 26A9:0947
cs=0x26a9;eip=0x00094c; 	R(JZ(loc_359c6));	// 84658 jz      short loc_359C6 ;~ 26A9:094C
cs=0x26a9;eip=0x00094e; 	T(MOV(si, *(dw*)((&unk_5651c))));	// 84659 mov     si, word ptr unk_5651C ;~ 26A9:094E
cs=0x26a9;eip=0x000952; 	X(MOV(*(raddr(ss,bp+si+var_34)), 1));	// 84660 mov     [bp+si+var_34], 1 ;~ 26A9:0952
loc_359c6:
	// 9795 
cs=0x26a9;eip=0x000956; 	R(CALLF(sub_1bc9c,0));	// 84663 call    sub_1BC9C ;~ 26A9:0956
loc_359cb:
	// 9796 
cs=0x26a9;eip=0x00095b; 	R(CALLF(sub_3db22,0));	// 84667 call    sub_3DB22 ;~ 26A9:095B
cs=0x26a9;eip=0x000960; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 84668 push    [bp+var_14] ;~ 26A9:0960
cs=0x26a9;eip=0x000963; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84669 push    [bp+var_16] ;~ 26A9:0963
cs=0x26a9;eip=0x000966; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 84670 push    [bp+var_18] ;~ 26A9:0966
cs=0x26a9;eip=0x000969; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 84671 push    [bp+var_1A] ;~ 26A9:0969
cs=0x26a9;eip=0x00096c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 84672 push    [bp+var_1C] ;~ 26A9:096C
cs=0x26a9;eip=0x00096f; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 84673 push    [bp+var_1E] ;~ 26A9:096F
cs=0x26a9;eip=0x000972; 	R(CALLF(sub_3e0d0,0));	// 84674 call    sub_3E0D0 ;~ 26A9:0972
cs=0x26a9;eip=0x000977; 	T(ADD(sp, 0x0C));	// 84675 add     sp, 0Ch ;~ 26A9:0977
cs=0x26a9;eip=0x00097a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 84676 push    [bp+var_14] ;~ 26A9:097A
cs=0x26a9;eip=0x00097d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84677 push    [bp+var_16] ;~ 26A9:097D
cs=0x26a9;eip=0x000980; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 84678 push    [bp+var_18] ;~ 26A9:0980
cs=0x26a9;eip=0x000983; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 84679 push    [bp+var_1A] ;~ 26A9:0983
cs=0x26a9;eip=0x000986; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 84680 push    [bp+var_1C] ;~ 26A9:0986
cs=0x26a9;eip=0x000989; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 84681 push    [bp+var_1E] ;~ 26A9:0989
cs=0x26a9;eip=0x00098c; 	R(CALLF(sub_3e149,0));	// 84682 call    sub_3E149 ;~ 26A9:098C
cs=0x26a9;eip=0x000991; 	T(ADD(sp, 0x0C));	// 84683 add     sp, 0Ch ;~ 26A9:0991
cs=0x26a9;eip=0x000994; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x4E));	// 84684 cmp     [bp+var_18], 4Eh ; 'N' ;~ 26A9:0994
cs=0x26a9;eip=0x000998; 	R(JL(loc_35a79));	// 84685 jl      short loc_35A79 ;~ 26A9:0998
cs=0x26a9;eip=0x00099a; 	R(JG(loc_35a13));	// 84686 jg      short loc_35A13 ;~ 26A9:099A
cs=0x26a9;eip=0x00099c; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x2000));	// 84687 cmp     [bp+var_1A], 2000h ;~ 26A9:099C
cs=0x26a9;eip=0x0009a1; 	R(JC(loc_35a79));	// 84688 jb      short loc_35A79 ;~ 26A9:09A1
loc_35a13:
	// 9797 
cs=0x26a9;eip=0x0009a3; 	T(CMP(*(raddr(ss,bp+var_58)), 0));	// 84691 cmp     [bp+var_58], 0 ;~ 26A9:09A3
cs=0x26a9;eip=0x0009a7; 	R(JZ(loc_35a1e));	// 84692 jz      short loc_35A1E ;~ 26A9:09A7
cs=0x26a9;eip=0x0009a9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 84693 mov     ax, [bp+var_52] ;~ 26A9:09A9
cs=0x26a9;eip=0x0009ac; 	R(JMP(loc_35a21));	// 84694 jmp     short loc_35A21 ;~ 26A9:09AC
loc_35a1e:
	// 9798 
cs=0x26a9;eip=0x0009ae; 	T(MOV(ax, 1));	// 84698 mov     ax, 1 ;~ 26A9:09AE
loc_35a21:
	// 9799 
cs=0x26a9;eip=0x0009b1; 	X(MOV(*(dw*)((&unk_57068)), ax));	// 84701 mov     word ptr unk_57068, ax ;~ 26A9:09B1
cs=0x26a9;eip=0x0009b4; 	X(MOV(*(raddr(ss,bp+var_58)), 1));	// 84702 mov     [bp+var_58], 1 ;~ 26A9:09B4
cs=0x26a9;eip=0x0009b8; 	T(MOV(al, unk_47ac4));	// 84703 mov     al, byte ptr unk_47AC4 ;~ 26A9:09B8
cs=0x26a9;eip=0x0009bb; 	T(CBW);	// 84704 cbw ;~ 26A9:09BB
cs=0x26a9;eip=0x0009bc; 	X(PUSH(ax));	// 84705 push    ax ;~ 26A9:09BC
cs=0x26a9;eip=0x0009bd; 	T(SUB(ax, ax));	// 84706 sub     ax, ax ;~ 26A9:09BD
cs=0x26a9;eip=0x0009bf; 	X(PUSH(ax));	// 84707 push    ax ;~ 26A9:09BF
cs=0x26a9;eip=0x0009c0; 	X(PUSH(ax));	// 84708 push    ax ;~ 26A9:09C0
cs=0x26a9;eip=0x0009c1; 	T(ax = bp+var_40);	// 84709 lea     ax, [bp+var_40] ;~ 26A9:09C1
cs=0x26a9;eip=0x0009c4; 	X(PUSH(ax));	// 84710 push    ax ;~ 26A9:09C4
cs=0x26a9;eip=0x0009c5; 	T(MOV(ax, 7));	// 84711 mov     ax, 7 ;~ 26A9:09C5
cs=0x26a9;eip=0x0009c8; 	X(PUSH(ax));	// 84712 push    ax ;~ 26A9:09C8
cs=0x26a9;eip=0x0009c9; 	T(SUB(ax, ax));	// 84713 sub     ax, ax ;~ 26A9:09C9
cs=0x26a9;eip=0x0009cb; 	X(PUSH(ax));	// 84714 push    ax ;~ 26A9:09CB
cs=0x26a9;eip=0x0009cc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 84715 push    [bp+var_36] ;~ 26A9:09CC
cs=0x26a9;eip=0x0009cf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 84716 push    [bp+var_2] ;~ 26A9:09CF
cs=0x26a9;eip=0x0009d2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 84717 mov     ax, [bp+var_16] ;~ 26A9:09D2
cs=0x26a9;eip=0x0009d5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_14))));	// 84718 mov     dx, [bp+var_14] ;~ 26A9:09D5
cs=0x26a9;eip=0x0009d8; 	T(MOV(cl, 8));	// 84719 mov     cl, 8 ;~ 26A9:09D8
cs=0x26a9;eip=0x0009da; 	R(CALLF(sub_10240,0));	// 84720 call    sub_10240 ;~ 26A9:09DA
cs=0x26a9;eip=0x0009df; 	X(PUSH(dx));	// 84721 push    dx ;~ 26A9:09DF
cs=0x26a9;eip=0x0009e0; 	X(PUSH(ax));	// 84722 push    ax ;~ 26A9:09E0
cs=0x26a9;eip=0x0009e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 84723 mov     ax, [bp+var_1A] ;~ 26A9:09E1
cs=0x26a9;eip=0x0009e4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_18))));	// 84724 mov     dx, [bp+var_18] ;~ 26A9:09E4
cs=0x26a9;eip=0x0009e7; 	T(MOV(cl, 8));	// 84725 mov     cl, 8 ;~ 26A9:09E7
cs=0x26a9;eip=0x0009e9; 	R(CALLF(sub_10240,0));	// 84726 call    sub_10240 ;~ 26A9:09E9
cs=0x26a9;eip=0x0009ee; 	X(PUSH(dx));	// 84727 push    dx ;~ 26A9:09EE
cs=0x26a9;eip=0x0009ef; 	X(PUSH(ax));	// 84728 push    ax ;~ 26A9:09EF
cs=0x26a9;eip=0x0009f0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1e))));	// 84729 mov     ax, [bp+var_1E] ;~ 26A9:09F0
cs=0x26a9;eip=0x0009f3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_1c))));	// 84730 mov     dx, [bp+var_1C] ;~ 26A9:09F3
cs=0x26a9;eip=0x0009f6; 	T(MOV(cl, 8));	// 84731 mov     cl, 8 ;~ 26A9:09F6
cs=0x26a9;eip=0x0009f8; 	R(CALLF(sub_10240,0));	// 84732 call    sub_10240 ;~ 26A9:09F8
cs=0x26a9;eip=0x0009fd; 	X(PUSH(dx));	// 84733 push    dx ;~ 26A9:09FD
cs=0x26a9;eip=0x0009fe; 	X(PUSH(ax));	// 84734 push    ax ;~ 26A9:09FE
cs=0x26a9;eip=0x0009ff; 	R(CALLF(sub_2d15d,0));	// 84735 call    sub_2D15D ;~ 26A9:09FF
cs=0x26a9;eip=0x000a04; 	T(ADD(sp, 0x1C));	// 84736 add     sp, 1Ch ;~ 26A9:0A04
cs=0x26a9;eip=0x000a07; 	R(JMP(loc_35ace));	// 84737 jmp     short loc_35ACE ;~ 26A9:0A07
loc_35a79:
	// 9800 
cs=0x26a9;eip=0x000a09; 	T(CMP(*(raddr(ss,bp+var_30)), 0));	// 84742 cmp     [bp+var_30], 0 ;~ 26A9:0A09
cs=0x26a9;eip=0x000a0d; 	R(JZ(loc_35a84));	// 84743 jz      short loc_35A84 ;~ 26A9:0A0D
cs=0x26a9;eip=0x000a0f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 84744 mov     ax, [bp+var_22] ;~ 26A9:0A0F
cs=0x26a9;eip=0x000a12; 	R(JMP(loc_35a87));	// 84745 jmp     short loc_35A87 ;~ 26A9:0A12
loc_35a84:
	// 9801 
cs=0x26a9;eip=0x000a14; 	T(MOV(ax, 1));	// 84749 mov     ax, 1 ;~ 26A9:0A14
loc_35a87:
	// 9802 
cs=0x26a9;eip=0x000a17; 	X(MOV(*(dw*)((&unk_5649a)), ax));	// 84752 mov     word ptr unk_5649A, ax ;~ 26A9:0A17
cs=0x26a9;eip=0x000a1a; 	X(MOV(*(raddr(ss,bp+var_30)), 1));	// 84753 mov     [bp+var_30], 1 ;~ 26A9:0A1A
cs=0x26a9;eip=0x000a1e; 	T(MOV(ax, 0x0E0));	// 84754 mov     ax, 0E0h ; 'à' ;~ 26A9:0A1E
cs=0x26a9;eip=0x000a21; 	X(PUSH(ax));	// 84755 push    ax ;~ 26A9:0A21
cs=0x26a9;eip=0x000a22; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1c))));	// 84756 push    [bp+var_1C] ;~ 26A9:0A22
cs=0x26a9;eip=0x000a25; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1e))));	// 84757 push    [bp+var_1E] ;~ 26A9:0A25
cs=0x26a9;eip=0x000a28; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 84758 push    [bp+var_18] ;~ 26A9:0A28
cs=0x26a9;eip=0x000a2b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_1a))));	// 84759 push    [bp+var_1A] ;~ 26A9:0A2B
cs=0x26a9;eip=0x000a2e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 84760 push    [bp+var_14] ;~ 26A9:0A2E
cs=0x26a9;eip=0x000a31; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 84761 push    [bp+var_16] ;~ 26A9:0A31
cs=0x26a9;eip=0x000a34; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 84762 push    [bp+var_2] ;~ 26A9:0A34
cs=0x26a9;eip=0x000a37; 	X(PUSH(*(dw*)(raddr(ss,bp+var_36))));	// 84763 push    [bp+var_36] ;~ 26A9:0A37
cs=0x26a9;eip=0x000a3a; 	T(SUB(ax, ax));	// 84764 sub     ax, ax ;~ 26A9:0A3A
cs=0x26a9;eip=0x000a3c; 	X(PUSH(ax));	// 84765 push    ax ;~ 26A9:0A3C
cs=0x26a9;eip=0x000a3d; 	T(ax = bp+var_40);	// 84766 lea     ax, [bp+var_40] ;~ 26A9:0A3D
cs=0x26a9;eip=0x000a40; 	X(PUSH(ax));	// 84767 push    ax ;~ 26A9:0A40
cs=0x26a9;eip=0x000a41; 	T(MOV(ax, 7));	// 84768 mov     ax, 7 ;~ 26A9:0A41
cs=0x26a9;eip=0x000a44; 	X(PUSH(ax));	// 84769 push    ax ;~ 26A9:0A44
cs=0x26a9;eip=0x000a45; 	T(MOV(ax, 0x0CC9C));	// 84770 mov     ax, 0CC9Ch ;~ 26A9:0A45
cs=0x26a9;eip=0x000a48; 	X(PUSH(ax));	// 84771 push    ax ;~ 26A9:0A48
cs=0x26a9;eip=0x000a49; 	T(MOV(ax, 0x0BB8));	// 84772 mov     ax, 0BB8h ;~ 26A9:0A49
cs=0x26a9;eip=0x000a4c; 	X(PUSH(ax));	// 84773 push    ax ;~ 26A9:0A4C
cs=0x26a9;eip=0x000a4d; 	T(MOV(ax, 0x0EAE4));	// 84774 mov     ax, 0EAE4h ;~ 26A9:0A4D
cs=0x26a9;eip=0x000a50; 	X(PUSH(ax));	// 84775 push    ax ;~ 26A9:0A50
cs=0x26a9;eip=0x000a51; 	T(SUB(ax, ax));	// 84776 sub     ax, ax ;~ 26A9:0A51
cs=0x26a9;eip=0x000a53; 	X(PUSH(ax));	// 84777 push    ax ;~ 26A9:0A53
cs=0x26a9;eip=0x000a54; 	T(MOV(al, unk_47ac4));	// 84778 mov     al, byte ptr unk_47AC4 ;~ 26A9:0A54
cs=0x26a9;eip=0x000a57; 	T(CBW);	// 84779 cbw ;~ 26A9:0A57
cs=0x26a9;eip=0x000a58; 	X(PUSH(ax));	// 84780 push    ax ;~ 26A9:0A58
cs=0x26a9;eip=0x000a59; 	R(CALLF(sub_240ce,0));	// 84781 call    sub_240CE ;~ 26A9:0A59
loc_35ace:
	// 9803 
cs=0x26a9;eip=0x000a5e; 	T(CMP(*(raddr(ss,bp+var_2e)), 0));	// 84784 cmp     [bp+var_2E], 0 ;~ 26A9:0A5E
cs=0x26a9;eip=0x000a62; 	R(JZ(loc_35af2));	// 84785 jz      short loc_35AF2 ;~ 26A9:0A62
cs=0x26a9;eip=0x000a64; 	T(MOV(si, *(dw*)((&unk_5651c))));	// 84786 mov     si, word ptr unk_5651C ;~ 26A9:0A64
cs=0x26a9;eip=0x000a68; 	T(CMP(*(raddr(ss,bp+si+var_34)), 0));	// 84787 cmp     [bp+si+var_34], 0 ;~ 26A9:0A68
cs=0x26a9;eip=0x000a6c; 	R(JNZ(loc_35af2));	// 84788 jnz     short loc_35AF2 ;~ 26A9:0A6C
cs=0x26a9;eip=0x000a6e; 	T(TEST(byte_5687c, 2));	// 84789 test    byte_5687C, 2 ;~ 26A9:0A6E
cs=0x26a9;eip=0x000a73; 	R(JNZ(loc_35af2));	// 84790 jnz     short loc_35AF2 ;~ 26A9:0A73
cs=0x26a9;eip=0x000a75; 	R(CALLF(sub_203b0,0));	// 84791 call    sub_203B0 ;~ 26A9:0A75
cs=0x26a9;eip=0x000a7a; 	T(MOV(si, *(dw*)((&unk_5651c))));	// 84792 mov     si, word ptr unk_5651C ;~ 26A9:0A7A
cs=0x26a9;eip=0x000a7e; 	X(MOV(*(raddr(ss,bp+si+var_34)), 1));	// 84793 mov     [bp+si+var_34], 1 ;~ 26A9:0A7E
loc_35af2:
	// 9804 
cs=0x26a9;eip=0x000a82; 	T(MOV(ax, 1));	// 84797 mov     ax, 1 ;~ 26A9:0A82
cs=0x26a9;eip=0x000a85; 	X(PUSH(ax));	// 84798 push    ax ;~ 26A9:0A85
cs=0x26a9;eip=0x000a86; 	T(SUB(ax, ax));	// 84799 sub     ax, ax ;~ 26A9:0A86
cs=0x26a9;eip=0x000a88; 	X(PUSH(ax));	// 84800 push    ax ;~ 26A9:0A88
cs=0x26a9;eip=0x000a89; 	R(CALLF(sub_20275,0));	// 84801 call    sub_20275 ;~ 26A9:0A89
cs=0x26a9;eip=0x000a8e; 	R(CALLF(sub_3d480,0));	// 84802 call    sub_3D480 ;~ 26A9:0A8E
cs=0x26a9;eip=0x000a93; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 84803 mov     ax, [bp+arg_4] ;~ 26A9:0A93
cs=0x26a9;eip=0x000a96; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 84804 mov     dx, [bp+arg_6] ;~ 26A9:0A96
cs=0x26a9;eip=0x000a99; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), dx));	// 84805 cmp     [bp+var_18], dx ;~ 26A9:0A99
cs=0x26a9;eip=0x000a9c; 	R(JGE(loc_35b11));	// 84806 jge     short loc_35B11 ;~ 26A9:0A9C
cs=0x26a9;eip=0x000a9e; 	R(JMP(loc_35835));	// 84807 jmp     loc_35835 ;~ 26A9:0A9E
loc_35b11:
	// 9805 
cs=0x26a9;eip=0x000aa1; 	R(JG(loc_35b1b));	// 84811 jg      short loc_35B1B ;~ 26A9:0AA1
cs=0x26a9;eip=0x000aa3; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 84812 cmp     [bp+var_1A], ax ;~ 26A9:0AA3
cs=0x26a9;eip=0x000aa6; 	R(JNC(loc_35b1b));	// 84813 jnb     short loc_35B1B ;~ 26A9:0AA6
cs=0x26a9;eip=0x000aa8; 	R(JMP(loc_35835));	// 84814 jmp     loc_35835 ;~ 26A9:0AA8
loc_35b1b:
	// 9806 
cs=0x26a9;eip=0x000aab; 	T(MOV(ax, 0x0E0));	// 84819 mov     ax, 0E0h ; 'à' ;~ 26A9:0AAB
cs=0x26a9;eip=0x000aae; 	X(PUSH(ax));	// 84820 push    ax ;~ 26A9:0AAE
cs=0x26a9;eip=0x000aaf; 	R(CALLF(sub_25ad0,0));	// 84821 call    sub_25AD0 ;~ 26A9:0AAF
cs=0x26a9;eip=0x000ab4; 	T(MOV(ax, 0x2664));	// 84822 mov     ax, 2664h ;~ 26A9:0AB4
cs=0x26a9;eip=0x000ab7; 	X(PUSH(ax));	// 84823 push    ax ;~ 26A9:0AB7
cs=0x26a9;eip=0x000ab8; 	R(CALLF(sub_25ad0,0));	// 84824 call    sub_25AD0 ;~ 26A9:0AB8
cs=0x26a9;eip=0x000abd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_22))));	// 84825 mov     ax, [bp+var_22] ;~ 26A9:0ABD
cs=0x26a9;eip=0x000ac0; 	X(MOV(*(dw*)((&unk_5649a)), ax));	// 84826 mov     word ptr unk_5649A, ax ;~ 26A9:0AC0
cs=0x26a9;eip=0x000ac3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_52))));	// 84827 mov     ax, [bp+var_52] ;~ 26A9:0AC3
cs=0x26a9;eip=0x000ac6; 	X(MOV(*(dw*)((&unk_57068)), ax));	// 84828 mov     word ptr unk_57068, ax ;~ 26A9:0AC6
cs=0x26a9;eip=0x000ac9; 	T(MOV(al, *(raddr(ss,bp+var_2c))));	// 84829 mov     al, [bp+var_2C] ;~ 26A9:0AC9
cs=0x26a9;eip=0x000acc; 	X(MOV(unk_564ec, al));	// 84830 mov     byte ptr unk_564EC, al ;~ 26A9:0ACC
cs=0x26a9;eip=0x000acf; 	T(MOV(al, *(raddr(ss,bp+var_56))));	// 84831 mov     al, [bp+var_56] ;~ 26A9:0ACF
cs=0x26a9;eip=0x000ad2; 	X(MOV(unk_570ba, al));	// 84832 mov     byte ptr unk_570BA, al ;~ 26A9:0AD2
cs=0x26a9;eip=0x000ad5; 	T(CMP(*(raddr(ss,bp+var_2e)), 0));	// 84833 cmp     [bp+var_2E], 0 ;~ 26A9:0AD5
cs=0x26a9;eip=0x000ad9; 	R(JNZ(loc_35b8e));	// 84834 jnz     short loc_35B8E ;~ 26A9:0AD9
cs=0x26a9;eip=0x000adb; 	T(CMP(*(raddr(ss,bp+var_54)), 0));	// 84835 cmp     [bp+var_54], 0 ;~ 26A9:0ADB
cs=0x26a9;eip=0x000adf; 	R(JZ(loc_35b60));	// 84836 jz      short loc_35B60 ;~ 26A9:0ADF
cs=0x26a9;eip=0x000ae1; 	T(MOV(ax, 0x265F));	// 84837 mov     ax, 265Fh ;~ 26A9:0AE1
cs=0x26a9;eip=0x000ae4; 	X(PUSH(ax));	// 84838 push    ax ;~ 26A9:0AE4
cs=0x26a9;eip=0x000ae5; 	T(MOV(ax, 0x0ED08));	// 84839 mov     ax, 0ED08h ;~ 26A9:0AE5
cs=0x26a9;eip=0x000ae8; 	X(PUSH(ax));	// 84840 push    ax ;~ 26A9:0AE8
cs=0x26a9;eip=0x000ae9; 	R(CALLF(sub_316b2,0));	// 84841 call    sub_316B2 ;~ 26A9:0AE9
cs=0x26a9;eip=0x000aee; 	R(JMP(loc_35b7d));	// 84842 jmp     short loc_35B7D ;~ 26A9:0AEE
loc_35b60:
	// 9807 
cs=0x26a9;eip=0x000af0; 	T(ax = bp+var_50);	// 84846 lea     ax, [bp+var_50] ;~ 26A9:0AF0
cs=0x26a9;eip=0x000af3; 	X(PUSH(ax));	// 84847 push    ax ;~ 26A9:0AF3
cs=0x26a9;eip=0x000af4; 	T(SUB(ax, ax));	// 84848 sub     ax, ax ;~ 26A9:0AF4
cs=0x26a9;eip=0x000af6; 	X(PUSH(ax));	// 84849 push    ax ;~ 26A9:0AF6
cs=0x26a9;eip=0x000af7; 	X(PUSH(ax));	// 84850 push    ax ;~ 26A9:0AF7
cs=0x26a9;eip=0x000af8; 	T(MOV(ax, 0x0ED08));	// 84851 mov     ax, 0ED08h ;~ 26A9:0AF8
cs=0x26a9;eip=0x000afb; 	X(PUSH(ax));	// 84852 push    ax ;~ 26A9:0AFB
cs=0x26a9;eip=0x000afc; 	T(SUB(ax, ax));	// 84853 sub     ax, ax ;~ 26A9:0AFC
cs=0x26a9;eip=0x000afe; 	X(PUSH(ax));	// 84854 push    ax ;~ 26A9:0AFE
cs=0x26a9;eip=0x000aff; 	X(PUSH(ax));	// 84855 push    ax ;~ 26A9:0AFF
cs=0x26a9;eip=0x000b00; 	X(PUSH(*(dw*)((&unk_47b34))));	// 84856 push    word ptr unk_47B34 ;~ 26A9:0B00
cs=0x26a9;eip=0x000b04; 	X(PUSH(*(dw*)((&unk_47b36))));	// 84857 push    word ptr unk_47B36 ;~ 26A9:0B04
cs=0x26a9;eip=0x000b08; 	R(CALLF(sub_2c4d3,0));	// 84858 call    sub_2C4D3 ;~ 26A9:0B08
loc_35b7d:
	// 9808 
cs=0x26a9;eip=0x000b0d; 	X(PUSH(*(dw*)((&unk_5651c))));	// 84861 push    word ptr unk_5651C ;~ 26A9:0B0D
cs=0x26a9;eip=0x000b11; 	T(MOV(ax, 1));	// 84862 mov     ax, 1 ;~ 26A9:0B11
cs=0x26a9;eip=0x000b14; 	T(SUB(ax, *(dw*)((&unk_5651c))));	// 84863 sub     ax, word ptr unk_5651C ;~ 26A9:0B14
cs=0x26a9;eip=0x000b18; 	X(PUSH(ax));	// 84864 push    ax ;~ 26A9:0B18
cs=0x26a9;eip=0x000b19; 	R(CALLF(sub_2c939,0));	// 84865 call    sub_2C939 ;~ 26A9:0B19
loc_35b8e:
	// 9809 
cs=0x26a9;eip=0x000b1e; 	T(CMP(*(raddr(ss,bp+var_54)), 0));	// 84868 cmp     [bp+var_54], 0 ;~ 26A9:0B1E
cs=0x26a9;eip=0x000b22; 	R(JNZ(loc_35b9d));	// 84869 jnz     short loc_35B9D ;~ 26A9:0B22
cs=0x26a9;eip=0x000b24; 	T(ax = bp+var_50);	// 84870 lea     ax, [bp+var_50] ;~ 26A9:0B24
cs=0x26a9;eip=0x000b27; 	X(PUSH(ax));	// 84871 push    ax ;~ 26A9:0B27
cs=0x26a9;eip=0x000b28; 	R(CALLF(sub_236fe,0));	// 84872 call    sub_236FE ;~ 26A9:0B28
loc_35b9d:
	// 9810 
cs=0x26a9;eip=0x000b2d; 	R(CALLF(sub_3102a,0));	// 84875 call    sub_3102A ;~ 26A9:0B2D
cs=0x26a9;eip=0x000b32; 	X(MOV(*(dw*)((&unk_49ff8)), 0x0FFFF));	// 84876 mov     word ptr unk_49FF8, 0FFFFh ;~ 26A9:0B32
loc_35ba8:
	// 9811 
cs=0x26a9;eip=0x000b38; 	X(POP(si));	// 84879 pop     si ;~ 26A9:0B38
cs=0x26a9;eip=0x000b39; 	X(POP(di));	// 84880 pop     di ;~ 26A9:0B39
cs=0x26a9;eip=0x000b3a; 	T(MOV(sp, bp));	// 84881 mov     sp, bp ;~ 26A9:0B3A
cs=0x26a9;eip=0x000b3c; 	X(POP(bp));	// 84882 pop     bp ;~ 26A9:0B3C
cs=0x26a9;eip=0x000b3d; 	R(RETF(0));	// 84883 retf ;~ 26A9:0B3D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_35096: 	goto loc_35096;
        case m2c::kloc_3509a: 	goto loc_3509a;
        case m2c::kloc_3509c: 	goto loc_3509c;
        case m2c::kloc_350c9: 	goto loc_350c9;
        case m2c::kloc_350d9: 	goto loc_350d9;
        case m2c::kloc_350ea: 	goto loc_350ea;
        case m2c::kloc_35124: 	goto loc_35124;
        case m2c::kloc_35129: 	goto loc_35129;
        case m2c::kloc_3512b: 	goto loc_3512b;
        case m2c::kloc_3513f: 	goto loc_3513f;
        case m2c::kloc_35257: 	goto loc_35257;
        case m2c::kloc_35277: 	goto loc_35277;
        case m2c::kloc_3528b: 	goto loc_3528b;
        case m2c::kloc_35290: 	goto loc_35290;
        case m2c::kloc_352a3: 	goto loc_352a3;
        case m2c::kloc_352c5: 	goto loc_352c5;
        case m2c::kloc_352e8: 	goto loc_352e8;
        case m2c::kloc_352ee: 	goto loc_352ee;
        case m2c::kloc_35330: 	goto loc_35330;
        case m2c::kloc_35349: 	goto loc_35349;
        case m2c::kloc_35362: 	goto loc_35362;
        case m2c::kloc_3538c: 	goto loc_3538c;
        case m2c::kloc_353a1: 	goto loc_353a1;
        case m2c::kloc_353ed: 	goto loc_353ed;
        case m2c::kloc_353fb: 	goto loc_353fb;
        case m2c::kloc_35418: 	goto loc_35418;
        case m2c::kloc_3541a: 	goto loc_3541a;
        case m2c::kloc_3541d: 	goto loc_3541d;
        case m2c::kloc_3542b: 	goto loc_3542b;
        case m2c::kloc_35448: 	goto loc_35448;
        case m2c::kloc_3544a: 	goto loc_3544a;
        case m2c::kloc_3544d: 	goto loc_3544d;
        case m2c::kloc_35495: 	goto loc_35495;
        case m2c::kloc_354a0: 	goto loc_354a0;
        case m2c::kloc_354a3: 	goto loc_354a3;
        case m2c::kloc_354fe: 	goto loc_354fe;
        case m2c::kloc_35509: 	goto loc_35509;
        case m2c::kloc_3550c: 	goto loc_3550c;
        case m2c::kloc_35553: 	goto loc_35553;
        case m2c::kloc_35572: 	goto loc_35572;
        case m2c::kloc_3557a: 	goto loc_3557a;
        case m2c::kloc_35588: 	goto loc_35588;
        case m2c::kloc_35590: 	goto loc_35590;
        case m2c::kloc_3559e: 	goto loc_3559e;
        case m2c::kloc_355a6: 	goto loc_355a6;
        case m2c::kloc_35615: 	goto loc_35615;
        case m2c::kloc_35619: 	goto loc_35619;
        case m2c::kloc_3561b: 	goto loc_3561b;
        case m2c::kloc_3562c: 	goto loc_3562c;
        case m2c::kloc_3563a: 	goto loc_3563a;
        case m2c::kloc_35648: 	goto loc_35648;
        case m2c::kloc_35656: 	goto loc_35656;
        case m2c::kloc_35664: 	goto loc_35664;
        case m2c::kloc_35672: 	goto loc_35672;
        case m2c::kloc_35680: 	goto loc_35680;
        case m2c::kloc_35685: 	goto loc_35685;
        case m2c::kloc_356be: 	goto loc_356be;
        case m2c::kloc_356df: 	goto loc_356df;
        case m2c::kloc_356e4: 	goto loc_356e4;
        case m2c::kloc_356e6: 	goto loc_356e6;
        case m2c::kloc_35700: 	goto loc_35700;
        case m2c::kloc_35719: 	goto loc_35719;
        case m2c::kloc_35739: 	goto loc_35739;
        case m2c::kloc_3573d: 	goto loc_3573d;
        case m2c::kloc_3573f: 	goto loc_3573f;
        case m2c::kloc_3574c: 	goto loc_3574c;
        case m2c::kloc_35788: 	goto loc_35788;
        case m2c::kloc_35835: 	goto loc_35835;
        case m2c::kloc_35849: 	goto loc_35849;
        case m2c::kloc_3584e: 	goto loc_3584e;
        case m2c::kloc_35861: 	goto loc_35861;
        case m2c::kloc_35885: 	goto loc_35885;
        case m2c::kloc_3589a: 	goto loc_3589a;
        case m2c::kloc_358b3: 	goto loc_358b3;
        case m2c::kloc_358cc: 	goto loc_358cc;
        case m2c::kloc_3592b: 	goto loc_3592b;
        case m2c::kloc_35971: 	goto loc_35971;
        case m2c::kloc_3599a: 	goto loc_3599a;
        case m2c::kloc_359b7: 	goto loc_359b7;
        case m2c::kloc_359c6: 	goto loc_359c6;
        case m2c::kloc_359cb: 	goto loc_359cb;
        case m2c::kloc_35a13: 	goto loc_35a13;
        case m2c::kloc_35a1e: 	goto loc_35a1e;
        case m2c::kloc_35a21: 	goto loc_35a21;
        case m2c::kloc_35a79: 	goto loc_35a79;
        case m2c::kloc_35a84: 	goto loc_35a84;
        case m2c::kloc_35a87: 	goto loc_35a87;
        case m2c::kloc_35ace: 	goto loc_35ace;
        case m2c::kloc_35af2: 	goto loc_35af2;
        case m2c::kloc_35b11: 	goto loc_35b11;
        case m2c::kloc_35b1b: 	goto loc_35b1b;
        case m2c::kloc_35b60: 	goto loc_35b60;
        case m2c::kloc_35b7d: 	goto loc_35b7d;
        case m2c::kloc_35b8e: 	goto loc_35b8e;
        case m2c::kloc_35b9d: 	goto loc_35b9d;
        case m2c::kloc_35ba8: 	goto loc_35ba8;
        case m2c::ksub_35078: 	goto sub_35078;
        case m2c::ksub_35147: 	goto sub_35147;
        case m2c::ksub_355f8: 	goto sub_355f8;
        case m2c::ksub_35707: 	goto sub_35707;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

