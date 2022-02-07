/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group8:
    _begin:
sub_2ecf0:
	// 68547 
#undef arg_0
#define arg_0 6
	// 68549 arg_0           = word ptr  6 ;~ 2071:0000
#undef arg_2
#define arg_2 8
	// 68550 arg_2           = word ptr  8 ;~ 2071:0000
#undef arg_4
#define arg_4 0x0A
	// 68551 arg_4           = word ptr  0Ah ;~ 2071:0000
cs=0x2071;eip=0x000000; 	X(PUSH(bp));	// 68553 push    bp ;~ 2071:0000
cs=0x2071;eip=0x000001; 	T(MOV(bp, sp));	// 68554 mov     bp, sp ;~ 2071:0001
cs=0x2071;eip=0x000003; 	X(PUSH(si));	// 68555 push    si ;~ 2071:0003
cs=0x2071;eip=0x000004; 	X(PUSH(di));	// 68556 push    di ;~ 2071:0004
cs=0x2071;eip=0x000005; 	T(MOV(dx, 0x3D4));	// 68557 mov     dx, 3D4h ;~ 2071:0005
cs=0x2071;eip=0x000008; 	R(CALL(sub_2ed8e,0));	// 68558 call    sub_2ED8E ;~ 2071:0008
cs=0x2071;eip=0x00000b; 	X(MOV(*(dw*)((&unk_48068)), ax));	// 68559 mov     word ptr unk_48068, ax ;~ 2071:000B
cs=0x2071;eip=0x00000e; 	T(MOV(dx, 0x3B4));	// 68560 mov     dx, 3B4h ;~ 2071:000E
cs=0x2071;eip=0x000011; 	R(CALL(sub_2ed8e,0));	// 68561 call    sub_2ED8E ;~ 2071:0011
cs=0x2071;eip=0x000014; 	X(MOV(*(dw*)((&unk_48066)), ax));	// 68562 mov     word ptr unk_48066, ax ;~ 2071:0014
cs=0x2071;eip=0x000017; 	T(TEST(ax, ax));	// 68563 test    ax, ax ;~ 2071:0017
cs=0x2071;eip=0x000019; 	R(JZ(loc_2ed7a));	// 68564 jz      short loc_2ED7A ;~ 2071:0019
cs=0x2071;eip=0x00001b; 	X(PUSH(ds));	// 68565 push    ds ;~ 2071:001B
cs=0x2071;eip=0x00001c; 	X(PUSH(es));	// 68566 push    es ;~ 2071:001C
cs=0x2071;eip=0x00001d; 	T(MOV(ax, 0x0B000));	// 68567 mov     ax, 0B000h ;~ 2071:001D
cs=0x2071;eip=0x000020; 	T(MOV(ds, ax));	// 68568 mov     ds, ax ;~ 2071:0020
cs=0x2071;eip=0x000022; 	T(MOV(ax, ss));	// 68570 mov     ax, ss ;~ 2071:0022
cs=0x2071;eip=0x000024; 	T(MOV(es, ax));	// 68571 mov     es, ax ;~ 2071:0024
cs=0x2071;eip=0x000026; 	T(MOV(si, 0x4000));	// 68572 mov     si, 4000h ;~ 2071:0026
cs=0x2071;eip=0x000029; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 68573 mov     di, [bp+arg_0] ;~ 2071:0029
cs=0x2071;eip=0x00002c; 	T(MOV(cx, 0x20));	// 68574 mov     cx, 20h ; ' ' ;~ 2071:002C
loc_2ed1f:
	// 8787 
cs=0x2071;eip=0x00002f; 	X(MOVSW);	// 68577 movsw ;~ 2071:002F
cs=0x2071;eip=0x000030; 	T(ADD(si, 0x0FE));	// 68578 add     si, 0FEh ; 'ş' ;~ 2071:0030
cs=0x2071;eip=0x000034; 	R(LOOP(loc_2ed1f));	// 68579 loop    loc_2ED1F ;~ 2071:0034
cs=0x2071;eip=0x000036; 	T(MOV(ax, 0x0B000));	// 68580 mov     ax, 0B000h ;~ 2071:0036
cs=0x2071;eip=0x000039; 	T(MOV(es, ax));	// 68581 mov     es, ax ;~ 2071:0039
cs=0x2071;eip=0x00003b; 	T(MOV(ds, ax));	// 68583 mov     ds, ax ;~ 2071:003B
cs=0x2071;eip=0x00003d; 	T(MOV(di, 0x4000));	// 68584 mov     di, 4000h ;~ 2071:003D
cs=0x2071;eip=0x000040; 	T(MOV(cx, 0x20));	// 68585 mov     cx, 20h ; ' ' ;~ 2071:0040
cs=0x2071;eip=0x000043; 	T(MOV(ax, 0));	// 68586 mov     ax, 0 ;~ 2071:0043
loc_2ed36:
	// 8788 
cs=0x2071;eip=0x000046; 	X(STOSW);	// 68589 stosw ;~ 2071:0046
cs=0x2071;eip=0x000047; 	T(INC(ax));	// 68590 inc     ax ;~ 2071:0047
cs=0x2071;eip=0x000048; 	T(ADD(di, 0x0FE));	// 68591 add     di, 0FEh ; 'ş' ;~ 2071:0048
cs=0x2071;eip=0x00004c; 	R(LOOP(loc_2ed36));	// 68592 loop    loc_2ED36 ;~ 2071:004C
cs=0x2071;eip=0x00004e; 	T(MOV(si, 0x4000));	// 68593 mov     si, 4000h ;~ 2071:004E
cs=0x2071;eip=0x000051; 	T(MOV(dx, 0));	// 68594 mov     dx, 0 ;~ 2071:0051
cs=0x2071;eip=0x000054; 	T(MOV(cx, 0x20));	// 68595 mov     cx, 20h ; ' ' ;~ 2071:0054
loc_2ed47:
	// 8789 
cs=0x2071;eip=0x000057; 	T(LODSW);	// 68598 lodsw ;~ 2071:0057
cs=0x2071;eip=0x000058; 	T(CMP(ax, dx));	// 68599 cmp     ax, dx ;~ 2071:0058
cs=0x2071;eip=0x00005a; 	R(JNZ(loc_2ed71));	// 68600 jnz     short loc_2ED71 ;~ 2071:005A
cs=0x2071;eip=0x00005c; 	T(INC(dx));	// 68601 inc     dx ;~ 2071:005C
cs=0x2071;eip=0x00005d; 	T(ADD(si, 0x0FE));	// 68602 add     si, 0FEh ; 'ş' ;~ 2071:005D
cs=0x2071;eip=0x000061; 	R(LOOP(loc_2ed47));	// 68603 loop    loc_2ED47 ;~ 2071:0061
loc_2ed53:
	// 8790 
cs=0x2071;eip=0x000063; 	T(MOV(ax, ss));	// 68606 mov     ax, ss ;~ 2071:0063
cs=0x2071;eip=0x000065; 	T(MOV(ds, ax));	// 68607 mov     ds, ax ;~ 2071:0065
cs=0x2071;eip=0x000067; 	T(MOV(ax, 0x0B000));	// 68609 mov     ax, 0B000h ;~ 2071:0067
cs=0x2071;eip=0x00006a; 	T(MOV(es, ax));	// 68610 mov     es, ax ;~ 2071:006A
cs=0x2071;eip=0x00006c; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 68611 mov     si, [bp+arg_0] ;~ 2071:006C
cs=0x2071;eip=0x00006f; 	T(MOV(di, 0x4000));	// 68612 mov     di, 4000h ;~ 2071:006F
cs=0x2071;eip=0x000072; 	T(MOV(cx, 0x20));	// 68613 mov     cx, 20h ; ' ' ;~ 2071:0072
loc_2ed65:
	// 8791 
cs=0x2071;eip=0x000075; 	X(MOVSW);	// 68616 movsw ;~ 2071:0075
cs=0x2071;eip=0x000076; 	T(ADD(di, 0x0FE));	// 68617 add     di, 0FEh ; 'ş' ;~ 2071:0076
cs=0x2071;eip=0x00007a; 	R(LOOP(loc_2ed65));	// 68618 loop    loc_2ED65 ;~ 2071:007A
cs=0x2071;eip=0x00007c; 	X(POP(es));	// 68619 pop     es ;~ 2071:007C
cs=0x2071;eip=0x00007d; 	X(POP(ds));	// 68621 pop     ds ;~ 2071:007D
cs=0x2071;eip=0x00007e; 	R(JMP(loc_2ed7a));	// 68622 jmp     short loc_2ED7A ;~ 2071:007E
loc_2ed71:
	// 8792 
cs=0x2071;eip=0x000081; 	X(MOV(*(dw*)(raddr(ss,0x6B6)), 0));	// 68628 mov     word ptr ss:6B6h, 0 ;~ 2071:0081
cs=0x2071;eip=0x000088; 	R(JMP(loc_2ed53));	// 68629 jmp     short loc_2ED53 ;~ 2071:0088
loc_2ed7a:
	// 8793 
cs=0x2071;eip=0x00008a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 68634 mov     bx, [bp+arg_2] ;~ 2071:008A
cs=0x2071;eip=0x00008d; 	T(MOV(ax, *(dw*)((&unk_48066))));	// 68635 mov     ax, word ptr unk_48066 ;~ 2071:008D
cs=0x2071;eip=0x000090; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 68636 mov     [bx], ax ;~ 2071:0090
cs=0x2071;eip=0x000092; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 68637 mov     bx, [bp+arg_4] ;~ 2071:0092
cs=0x2071;eip=0x000095; 	T(MOV(ax, *(dw*)((&unk_48068))));	// 68638 mov     ax, word ptr unk_48068 ;~ 2071:0095
cs=0x2071;eip=0x000098; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 68639 mov     [bx], ax ;~ 2071:0098
cs=0x2071;eip=0x00009a; 	X(POP(di));	// 68640 pop     di ;~ 2071:009A
cs=0x2071;eip=0x00009b; 	X(POP(si));	// 68641 pop     si ;~ 2071:009B
cs=0x2071;eip=0x00009c; 	X(POP(bp));	// 68642 pop     bp ;~ 2071:009C
cs=0x2071;eip=0x00009d; 	R(RETF(0));	// 68643 retf ;~ 2071:009D
sub_2ed8e:
	// 68650 
cs=0x2071;eip=0x00009e; 	R(CALL(sub_2edbc,0));	// 68652 call    sub_2EDBC ;~ 2071:009E
cs=0x2071;eip=0x0000a1; 	X(PUSH(bx));	// 68653 push    bx ;~ 2071:00A1
cs=0x2071;eip=0x0000a2; 	T(INC(bx));	// 68654 inc     bx ;~ 2071:00A2
cs=0x2071;eip=0x0000a3; 	R(CALL(sub_2edab,0));	// 68655 call    sub_2EDAB ;~ 2071:00A3
cs=0x2071;eip=0x0000a6; 	R(CALL(sub_2edbc,0));	// 68656 call    sub_2EDBC ;~ 2071:00A6
cs=0x2071;eip=0x0000a9; 	T(MOV(cx, bx));	// 68657 mov     cx, bx ;~ 2071:00A9
cs=0x2071;eip=0x0000ab; 	X(POP(bx));	// 68658 pop     bx ;~ 2071:00AB
cs=0x2071;eip=0x0000ac; 	R(CALL(sub_2edab,0));	// 68659 call    sub_2EDAB ;~ 2071:00AC
cs=0x2071;eip=0x0000af; 	T(SUB(bx, cx));	// 68660 sub     bx, cx ;~ 2071:00AF
cs=0x2071;eip=0x0000b1; 	T(INC(bx));	// 68661 inc     bx ;~ 2071:00B1
cs=0x2071;eip=0x0000b2; 	R(JZ(loc_2eda7));	// 68662 jz      short loc_2EDA7 ;~ 2071:00B2
cs=0x2071;eip=0x0000b4; 	T(SUB(ax, ax));	// 68663 sub     ax, ax ;~ 2071:00B4
cs=0x2071;eip=0x0000b6; 	R(RETN(0));	// 68664 retn ;~ 2071:00B6
loc_2eda7:
	// 8794 
cs=0x2071;eip=0x0000b7; 	T(MOV(ax, 0x0FFFF));	// 68668 mov     ax, 0FFFFh ;~ 2071:00B7
cs=0x2071;eip=0x0000ba; 	R(RETN(0));	// 68669 retn ;~ 2071:00BA
sub_2edab:
	// 68676 
cs=0x2071;eip=0x0000bb; 	T(MOV(al, 0x0F));	// 68678 mov     al, 0Fh ;~ 2071:00BB
cs=0x2071;eip=0x0000bd; 	R(OUT(dx, al));	// 68679 out     dx, al ;~ 2071:00BD
cs=0x2071;eip=0x0000be; 	T(INC(dx));	// 68680 inc     dx ;~ 2071:00BE
cs=0x2071;eip=0x0000bf; 	T(MOV(ax, bx));	// 68681 mov     ax, bx ;~ 2071:00BF
cs=0x2071;eip=0x0000c1; 	R(OUT(dx, al));	// 68682 out     dx, al ;~ 2071:00C1
cs=0x2071;eip=0x0000c2; 	T(DEC(dx));	// 68683 dec     dx ;~ 2071:00C2
cs=0x2071;eip=0x0000c3; 	T(MOV(al, 0x0E));	// 68684 mov     al, 0Eh ;~ 2071:00C3
cs=0x2071;eip=0x0000c5; 	R(OUT(dx, al));	// 68685 out     dx, al ;~ 2071:00C5
cs=0x2071;eip=0x0000c6; 	T(INC(dx));	// 68686 inc     dx ;~ 2071:00C6
cs=0x2071;eip=0x0000c7; 	T(MOV(al, ah));	// 68687 mov     al, ah ;~ 2071:00C7
cs=0x2071;eip=0x0000c9; 	R(OUT(dx, al));	// 68688 out     dx, al ;~ 2071:00C9
cs=0x2071;eip=0x0000ca; 	T(DEC(dx));	// 68689 dec     dx ;~ 2071:00CA
cs=0x2071;eip=0x0000cb; 	R(RETN(0));	// 68690 retn ;~ 2071:00CB
sub_2edbc:
	// 68697 
cs=0x2071;eip=0x0000cc; 	T(MOV(al, 0x0F));	// 68699 mov     al, 0Fh ;~ 2071:00CC
cs=0x2071;eip=0x0000ce; 	R(OUT(dx, al));	// 68700 out     dx, al ;~ 2071:00CE
cs=0x2071;eip=0x0000cf; 	T(INC(dx));	// 68701 inc     dx ;~ 2071:00CF
cs=0x2071;eip=0x0000d0; 	R(IN(al, dx));	// 68702 in      al, dx ;~ 2071:00D0
cs=0x2071;eip=0x0000d1; 	T(MOV(bl, al));	// 68703 mov     bl, al ;~ 2071:00D1
	// 68704 nop ;~ 2071:00D3
	// 68705 nop ;~ 2071:00D4
	// 68706 nop ;~ 2071:00D5
	// 68707 nop ;~ 2071:00D6
	// 68708 nop ;~ 2071:00D7
	// 68709 nop ;~ 2071:00D8
	// 68710 nop ;~ 2071:00D9
	// 68711 nop ;~ 2071:00DA
	// 68712 nop ;~ 2071:00DB
	// 68713 nop ;~ 2071:00DC
cs=0x2071;eip=0x0000dd; 	T(DEC(dx));	// 68714 dec     dx ;~ 2071:00DD
cs=0x2071;eip=0x0000de; 	T(MOV(al, 0x0E));	// 68715 mov     al, 0Eh ;~ 2071:00DE
cs=0x2071;eip=0x0000e0; 	R(OUT(dx, al));	// 68716 out     dx, al ;~ 2071:00E0
cs=0x2071;eip=0x0000e1; 	T(INC(dx));	// 68717 inc     dx ;~ 2071:00E1
cs=0x2071;eip=0x0000e2; 	R(IN(al, dx));	// 68718 in      al, dx ;~ 2071:00E2
cs=0x2071;eip=0x0000e3; 	T(MOV(bh, al));	// 68719 mov     bh, al ;~ 2071:00E3
cs=0x2071;eip=0x0000e5; 	T(DEC(dx));	// 68720 dec     dx ;~ 2071:00E5
cs=0x2071;eip=0x0000e6; 	R(RETN(0));	// 68721 retn ;~ 2071:00E6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2ed1f: 	goto loc_2ed1f;
        case m2c::kloc_2ed36: 	goto loc_2ed36;
        case m2c::kloc_2ed47: 	goto loc_2ed47;
        case m2c::kloc_2ed53: 	goto loc_2ed53;
        case m2c::kloc_2ed65: 	goto loc_2ed65;
        case m2c::kloc_2ed71: 	goto loc_2ed71;
        case m2c::kloc_2ed7a: 	goto loc_2ed7a;
        case m2c::kloc_2eda7: 	goto loc_2eda7;
        case m2c::ksub_2ecf0: 	goto sub_2ecf0;
        case m2c::ksub_2ed8e: 	goto sub_2ed8e;
        case m2c::ksub_2edab: 	goto sub_2edab;
        case m2c::ksub_2edbc: 	goto sub_2edbc;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

