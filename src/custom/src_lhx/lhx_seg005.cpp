/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group5(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group5:
    _begin:
seg005_proc:
	// 66520 
cs=0x1f7f;eip=0x000002; 	X(PUSH(bp));	// 66520 push    bp ;~ 1F7F:0002
cs=0x1f7f;eip=0x000003; 	T(MOV(bp, sp));	// 66521 mov     bp, sp ;~ 1F7F:0003
cs=0x1f7f;eip=0x000005; 	X(PUSH(si));	// 66522 push    si ;~ 1F7F:0005
cs=0x1f7f;eip=0x000006; 	X(PUSH(di));	// 66523 push    di ;~ 1F7F:0006
cs=0x1f7f;eip=0x000007; 	T(MOV(bx, *(dw*)(raddr(ss,bp+8))));	// 66524 mov     bx, [bp+8] ;~ 1F7F:0007
cs=0x1f7f;eip=0x00000a; 	T(CMP(bx, *(dw*)((&unk_5687d))));	// 66525 cmp     bx, word ptr unk_5687D ;~ 1F7F:000A
cs=0x1f7f;eip=0x00000e; 	R(JL(loc_2de14));	// 66526 jl      short loc_2DE14 ;~ 1F7F:000E
cs=0x1f7f;eip=0x000010; 	T(MOV(ax, ds));	// 66527 mov     ax, ds ;~ 1F7F:0010
cs=0x1f7f;eip=0x000012; 	T(MOV(es, ax));	// 66528 mov     es, ax ;~ 1F7F:0012
cs=0x1f7f;eip=0x000014; 	T(MOV(di, *(dw*)(raddr(ss,bp+0x0A))));	// 66530 mov     di, [bp+0Ah] ;~ 1F7F:0014
cs=0x1f7f;eip=0x000017; 	T(MOV(cx, 0x0FFFF));	// 66531 mov     cx, 0FFFFh ;~ 1F7F:0017
cs=0x1f7f;eip=0x00001a; 	T(XOR(al, al));	// 66532 xor     al, al ;~ 1F7F:001A
	// 66533 repne scasb ;~ 1F7F:001C
cs=0x1f7f;eip=0x00001c; 	T(	REPNE SCASB);	// 66533 repne scasb ;~ 1F7F:001C
cs=0x1f7f;eip=0x00001e; 	T(SUB(di, *(dw*)(raddr(ss,bp+0x0A))));	// 66534 sub     di, [bp+0Ah] ;~ 1F7F:001E
cs=0x1f7f;eip=0x000021; 	T(DEC(di));	// 66535 dec     di ;~ 1F7F:0021
cs=0x1f7f;eip=0x000022; 	T(SHL(di, 1));	// 66536 shl     di, 1 ;~ 1F7F:0022
cs=0x1f7f;eip=0x000024; 	T(SHL(di, 1));	// 66537 shl     di, 1 ;~ 1F7F:0024
cs=0x1f7f;eip=0x000026; 	T(ADD(bx, di));	// 66538 add     bx, di ;~ 1F7F:0026
cs=0x1f7f;eip=0x000028; 	T(DEC(bx));	// 66539 dec     bx ;~ 1F7F:0028
cs=0x1f7f;eip=0x000029; 	T(CMP(bx, *(dw*)((&unk_5687f))));	// 66540 cmp     bx, word ptr unk_5687F ;~ 1F7F:0029
cs=0x1f7f;eip=0x00002d; 	R(JG(loc_2de14));	// 66541 jg      short loc_2DE14 ;~ 1F7F:002D
cs=0x1f7f;eip=0x00002f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 66542 mov     ax, [bp+6] ;~ 1F7F:002F
cs=0x1f7f;eip=0x000032; 	T(CMP(ax, *(dw*)((&unk_56881))));	// 66543 cmp     ax, word ptr unk_56881 ;~ 1F7F:0032
cs=0x1f7f;eip=0x000036; 	R(JL(loc_2de14));	// 66544 jl      short loc_2DE14 ;~ 1F7F:0036
cs=0x1f7f;eip=0x000038; 	T(ADD(ax, 5));	// 66545 add     ax, 5 ;~ 1F7F:0038
cs=0x1f7f;eip=0x00003b; 	T(CMP(ax, *(dw*)((&unk_56883))));	// 66546 cmp     ax, word ptr unk_56883 ;~ 1F7F:003B
cs=0x1f7f;eip=0x00003f; 	R(JG(loc_2de14));	// 66547 jg      short loc_2DE14 ;~ 1F7F:003F
cs=0x1f7f;eip=0x000041; 	R(JMP(loc_2de1f));	// 66548 jmp     short loc_2DE1F ;~ 1F7F:0041
loc_2de14:
	// 8674 
cs=0x1f7f;eip=0x000044; 	X(POP(di));	// 66554 pop     di ;~ 1F7F:0044
cs=0x1f7f;eip=0x000045; 	X(POP(si));	// 66555 pop     si ;~ 1F7F:0045
cs=0x1f7f;eip=0x000046; 	X(POP(bp));	// 66556 pop     bp ;~ 1F7F:0046
cs=0x1f7f;eip=0x000047; 	R(RETF(6));	// 66557 retf    6 ;~ 1F7F:0047
sub_2de1a:
	// 66563 
#undef var_s0
#define var_s0 0
	// 66566 var_s0          = word ptr  0 ;~ 1F7F:004A
#undef arg_0
#define arg_0 6
	// 66567 arg_0           = word ptr  6 ;~ 1F7F:004A
#undef arg_2
#define arg_2 8
	// 66568 arg_2           = word ptr  8 ;~ 1F7F:004A
#undef arg_4
#define arg_4 0x0A
	// 66569 arg_4           = word ptr  0Ah ;~ 1F7F:004A
cs=0x1f7f;eip=0x00004a; 	X(PUSH(bp));	// 66571 push    bp ;~ 1F7F:004A
cs=0x1f7f;eip=0x00004b; 	T(MOV(bp, sp));	// 66572 mov     bp, sp ;~ 1F7F:004B
cs=0x1f7f;eip=0x00004d; 	X(PUSH(si));	// 66573 push    si ;~ 1F7F:004D
cs=0x1f7f;eip=0x00004e; 	X(PUSH(di));	// 66574 push    di ;~ 1F7F:004E
loc_2de1f:
	// 8675 
cs=0x1f7f;eip=0x00004f; 	T(MOV(bx, *(dw*)((&unk_47b2e))));	// 66577 mov     bx, word ptr unk_47B2E ;~ 1F7F:004F
cs=0x1f7f;eip=0x000053; 	T(SHL(bx, 1));	// 66578 shl     bx, 1 ;~ 1F7F:0053
cs=0x1f7f;eip=0x000055; 	T(CMP(unk_56885, 0));	// 66579 cmp     byte ptr unk_56885, 0 ;~ 1F7F:0055
cs=0x1f7f;eip=0x00005a; 	R(JNZ(loc_2de30));	// 66580 jnz     short loc_2DE30 ;~ 1F7F:005A
cs=0x1f7f;eip=0x00005c; __disp=*(dw*)(((db*)&off_47c94)+bx);
	R(JMP(__dispatch_call));	// 66581 jmp     off_47C94[bx] ;~ 1F7F:005C
loc_2de30:
	// 8676 
cs=0x1f7f;eip=0x000060; __disp=*(dw*)(((db*)&off_47c88)+bx);
	R(JMP(__dispatch_call));	// 66585 jmp     off_47C88[bx] ;~ 1F7F:0060
loc_2de34:
	// 8677 
cs=0x1f7f;eip=0x000064; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 66590 push    [bp+arg_2] ;~ 1F7F:0064
cs=0x1f7f;eip=0x000067; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 66591 push    [bp+arg_0] ;~ 1F7F:0067
cs=0x1f7f;eip=0x00006a; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 66592 mov     di, [bp+arg_4] ;~ 1F7F:006A
cs=0x1f7f;eip=0x00006d; 	T(MOV(ax, ds));	// 66593 mov     ax, ds ;~ 1F7F:006D
cs=0x1f7f;eip=0x00006f; 	T(MOV(es, ax));	// 66594 mov     es, ax ;~ 1F7F:006F
cs=0x1f7f;eip=0x000071; 	T(MOV(cx, 0x0FFFF));	// 66595 mov     cx, 0FFFFh ;~ 1F7F:0071
cs=0x1f7f;eip=0x000074; 	T(XOR(al, al));	// 66596 xor     al, al ;~ 1F7F:0074
	// 66597 repne scasb ;~ 1F7F:0076
cs=0x1f7f;eip=0x000076; 	T(	REPNE SCASB);	// 66597 repne scasb ;~ 1F7F:0076
cs=0x1f7f;eip=0x000078; 	T(SUB(di, *(dw*)(raddr(ss,bp+arg_4))));	// 66598 sub     di, [bp+arg_4] ;~ 1F7F:0078
cs=0x1f7f;eip=0x00007b; 	T(DEC(di));	// 66599 dec     di ;~ 1F7F:007B
cs=0x1f7f;eip=0x00007c; 	T(SHL(di, 1));	// 66600 shl     di, 1 ;~ 1F7F:007C
cs=0x1f7f;eip=0x00007e; 	T(SHL(di, 1));	// 66601 shl     di, 1 ;~ 1F7F:007E
cs=0x1f7f;eip=0x000080; 	X(PUSH(di));	// 66602 push    di ;~ 1F7F:0080
cs=0x1f7f;eip=0x000081; 	T(MOV(ax, 6));	// 66603 mov     ax, 6 ;~ 1F7F:0081
cs=0x1f7f;eip=0x000084; 	X(PUSH(ax));	// 66604 push    ax ;~ 1F7F:0084
cs=0x1f7f;eip=0x000085; 	T(MOV(al, unk_47bdf));	// 66605 mov     al, byte ptr unk_47BDF ;~ 1F7F:0085
cs=0x1f7f;eip=0x000088; 	T(MOV(ah, 0x0FF));	// 66606 mov     ah, 0FFh ;~ 1F7F:0088
cs=0x1f7f;eip=0x00008a; 	X(PUSH(ax));	// 66607 push    ax ;~ 1F7F:008A
cs=0x1f7f;eip=0x00008b; 	R(CALLF(sub_233c4,0));	// 66608 call    sub_233C4 ;~ 1F7F:008B
cs=0x1f7f;eip=0x000090; 	R(JMP(loc_2de65));	// 66609 jmp     short loc_2DE65 ;~ 1F7F:0090
loc_2de65:
	// 8678 
cs=0x1f7f;eip=0x000095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 66616 mov     ax, [bp+arg_4] ;~ 1F7F:0095
cs=0x1f7f;eip=0x000098; 	X(MOV(*(dw*)((&unk_47cb0)), ax));	// 66617 mov     word ptr unk_47CB0, ax ;~ 1F7F:0098
cs=0x1f7f;eip=0x00009b; 	T(MOV(ax, ds));	// 66618 mov     ax, ds ;~ 1F7F:009B
cs=0x1f7f;eip=0x00009d; 	T(MOV(es, ax));	// 66619 mov     es, ax ;~ 1F7F:009D
cs=0x1f7f;eip=0x00009f; 	T(MOV(cx, 6));	// 66620 mov     cx, 6 ;~ 1F7F:009F
cs=0x1f7f;eip=0x0000a2; 	T(MOV(di, 0x0ED3C));	// 66621 mov     di, 0ED3Ch ;~ 1F7F:00A2
cs=0x1f7f;eip=0x0000a5; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_0))));	// 66622 add     di, [bp+arg_0] ;~ 1F7F:00A5
cs=0x1f7f;eip=0x0000a8; 	T(MOV(al, 0x0FF));	// 66623 mov     al, 0FFh ;~ 1F7F:00A8
	// 66624 rep stosb ;~ 1F7F:00AA
cs=0x1f7f;eip=0x0000aa; 	X(	REP STOSB);	// 66624 rep stosb ;~ 1F7F:00AA
cs=0x1f7f;eip=0x0000ac; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 66625 mov     bx, [bp+arg_0] ;~ 1F7F:00AC
cs=0x1f7f;eip=0x0000af; 	T(SHL(bx, 1));	// 66626 shl     bx, 1 ;~ 1F7F:00AF
cs=0x1f7f;eip=0x0000b1; 	T(MOV(ax, *(dw*)(raddr(ds,bx-0x1492))));	// 66627 mov     ax, [bx-1492h] ;~ 1F7F:00B1
cs=0x1f7f;eip=0x0000b5; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 66628 add     ax, [bp+arg_2] ;~ 1F7F:00B5
cs=0x1f7f;eip=0x0000b8; 	X(MOV(*(dw*)((&unk_47cae)), ax));	// 66629 mov     word ptr unk_47CAE, ax ;~ 1F7F:00B8
cs=0x1f7f;eip=0x0000bb; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 66630 mov     es, word ptr unk_566AE ;~ 1F7F:00BB
loc_2de8f:
	// 8679 
cs=0x1f7f;eip=0x0000bf; 	T(MOV(bx, *(dw*)((&unk_47cb0))));	// 66634 mov     bx, word ptr unk_47CB0 ;~ 1F7F:00BF
cs=0x1f7f;eip=0x0000c3; 	X(INC(*(dw*)((&unk_47cb0))));	// 66635 inc     word ptr unk_47CB0 ;~ 1F7F:00C3
cs=0x1f7f;eip=0x0000c7; 	T(MOV(al, *(raddr(ds,bx))));	// 66636 mov     al, [bx] ;~ 1F7F:00C7
cs=0x1f7f;eip=0x0000c9; 	T(OR(al, al));	// 66637 or      al, al ;~ 1F7F:00C9
cs=0x1f7f;eip=0x0000cb; 	R(JNZ(loc_2dea0));	// 66638 jnz     short loc_2DEA0 ;~ 1F7F:00CB
cs=0x1f7f;eip=0x0000cd; 	R(JMP(loc_2deeb));	// 66639 jmp     short loc_2DEEB ;~ 1F7F:00CD
loc_2dea0:
	// 8680 
cs=0x1f7f;eip=0x0000d0; 	T(SUB(al, 0x16));	// 66644 sub     al, 16h ;~ 1F7F:00D0
cs=0x1f7f;eip=0x0000d2; 	T(XOR(ah, ah));	// 66645 xor     ah, ah ;~ 1F7F:00D2
cs=0x1f7f;eip=0x0000d4; 	T(SHL(ax, 1));	// 66646 shl     ax, 1 ;~ 1F7F:00D4
cs=0x1f7f;eip=0x0000d6; 	T(MOV(si, ax));	// 66647 mov     si, ax ;~ 1F7F:00D6
cs=0x1f7f;eip=0x0000d8; 	T(SHL(ax, 1));	// 66648 shl     ax, 1 ;~ 1F7F:00D8
cs=0x1f7f;eip=0x0000da; 	T(ADD(si, ax));	// 66649 add     si, ax ;~ 1F7F:00DA
cs=0x1f7f;eip=0x0000dc; 	T(MOV(dl, unk_47bde));	// 66650 mov     dl, byte ptr unk_47BDE ;~ 1F7F:00DC
cs=0x1f7f;eip=0x0000e0; 	T(MOV(cx, 6));	// 66651 mov     cx, 6 ;~ 1F7F:00E0
cs=0x1f7f;eip=0x0000e3; 	T(MOV(di, *(dw*)((&unk_47cae))));	// 66652 mov     di, word ptr unk_47CAE ;~ 1F7F:00E3
cs=0x1f7f;eip=0x0000e7; 	X(PUSH(ds));	// 66653 push    ds ;~ 1F7F:00E7
cs=0x1f7f;eip=0x0000e8; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 66654 mov     ds, word ptr unk_47BDC ;~ 1F7F:00E8
loc_2debc:
	// 8681 
cs=0x1f7f;eip=0x0000ec; 	T(LODSB);	// 66657 lodsb ;~ 1F7F:00EC
cs=0x1f7f;eip=0x0000ed; 	T(RCR(al, 1));	// 66658 rcr     al, 1 ;~ 1F7F:00ED
cs=0x1f7f;eip=0x0000ef; 	R(JNC(loc_2dec5));	// 66659 jnb     short loc_2DEC5 ;~ 1F7F:00EF
cs=0x1f7f;eip=0x0000f1; 	X(MOV(*(raddr(es,di+3)), dl));	// 66660 mov     es:[di+3], dl ;~ 1F7F:00F1
loc_2dec5:
	// 8682 
cs=0x1f7f;eip=0x0000f5; 	T(RCR(al, 1));	// 66663 rcr     al, 1 ;~ 1F7F:00F5
cs=0x1f7f;eip=0x0000f7; 	R(JNC(loc_2decd));	// 66664 jnb     short loc_2DECD ;~ 1F7F:00F7
cs=0x1f7f;eip=0x0000f9; 	X(MOV(*(raddr(es,di+2)), dl));	// 66665 mov     es:[di+2], dl ;~ 1F7F:00F9
loc_2decd:
	// 8683 
cs=0x1f7f;eip=0x0000fd; 	T(RCR(al, 1));	// 66668 rcr     al, 1 ;~ 1F7F:00FD
cs=0x1f7f;eip=0x0000ff; 	R(JNC(loc_2ded5));	// 66669 jnb     short loc_2DED5 ;~ 1F7F:00FF
cs=0x1f7f;eip=0x000101; 	X(MOV(*(raddr(es,di+1)), dl));	// 66670 mov     es:[di+1], dl ;~ 1F7F:0101
loc_2ded5:
	// 8684 
cs=0x1f7f;eip=0x000105; 	T(RCR(al, 1));	// 66673 rcr     al, 1 ;~ 1F7F:0105
cs=0x1f7f;eip=0x000107; 	R(JNC(loc_2dedc));	// 66674 jnb     short loc_2DEDC ;~ 1F7F:0107
cs=0x1f7f;eip=0x000109; 	X(MOV(*(raddr(es,di)), dl));	// 66675 mov     es:[di], dl ;~ 1F7F:0109
loc_2dedc:
	// 8685 
cs=0x1f7f;eip=0x00010c; 	T(ADD(di, *(dw*)(raddr(ss,0x0EB5E))));	// 66678 add     di, ss:0EB5Eh ;~ 1F7F:010C
cs=0x1f7f;eip=0x000111; 	R(LOOP(loc_2debc));	// 66679 loop    loc_2DEBC ;~ 1F7F:0111
cs=0x1f7f;eip=0x000113; 	X(POP(ds));	// 66680 pop     ds ;~ 1F7F:0113
cs=0x1f7f;eip=0x000114; 	X(ADD(*(dw*)((&unk_47cae)), 4));	// 66681 add     word ptr unk_47CAE, 4 ;~ 1F7F:0114
cs=0x1f7f;eip=0x000119; 	R(JMP(loc_2de8f));	// 66682 jmp     short loc_2DE8F ;~ 1F7F:0119
loc_2deeb:
	// 8686 
cs=0x1f7f;eip=0x00011b; 	X(POP(di));	// 66686 pop     di ;~ 1F7F:011B
cs=0x1f7f;eip=0x00011c; 	X(POP(si));	// 66687 pop     si ;~ 1F7F:011C
cs=0x1f7f;eip=0x00011d; 	X(POP(bp));	// 66688 pop     bp ;~ 1F7F:011D
cs=0x1f7f;eip=0x00011e; 	R(RETF(6));	// 66689 retf    6 ;~ 1F7F:011E
loc_2def1:
	// 8687 
cs=0x1f7f;eip=0x000121; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 66694 mov     ax, [bp+arg_4] ;~ 1F7F:0121
cs=0x1f7f;eip=0x000124; 	X(MOV(*(dw*)((&unk_47cb0)), ax));	// 66695 mov     word ptr unk_47CB0, ax ;~ 1F7F:0124
cs=0x1f7f;eip=0x000127; 	T(MOV(ax, ds));	// 66696 mov     ax, ds ;~ 1F7F:0127
cs=0x1f7f;eip=0x000129; 	T(MOV(es, ax));	// 66697 mov     es, ax ;~ 1F7F:0129
cs=0x1f7f;eip=0x00012b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 66699 mov     bx, [bp+arg_0] ;~ 1F7F:012B
cs=0x1f7f;eip=0x00012e; 	T(MOV(cx, 6));	// 66700 mov     cx, 6 ;~ 1F7F:012E
cs=0x1f7f;eip=0x000131; 	T(MOV(di, 0x0ED3C));	// 66701 mov     di, 0ED3Ch ;~ 1F7F:0131
cs=0x1f7f;eip=0x000134; 	T(ADD(di, bx));	// 66702 add     di, bx ;~ 1F7F:0134
cs=0x1f7f;eip=0x000136; 	T(MOV(al, 0x0FF));	// 66703 mov     al, 0FFh ;~ 1F7F:0136
	// 66704 rep stosb ;~ 1F7F:0138
cs=0x1f7f;eip=0x000138; 	X(	REP STOSB);	// 66704 rep stosb ;~ 1F7F:0138
cs=0x1f7f;eip=0x00013a; 	T(SHL(bx, 1));	// 66705 shl     bx, 1 ;~ 1F7F:013A
cs=0x1f7f;eip=0x00013c; 	T(ADD(bx, 0x0EB6E));	// 66706 add     bx, 0EB6Eh ;~ 1F7F:013C
cs=0x1f7f;eip=0x000140; 	X(MOV(*(dw*)((&unk_47cb2)), bx));	// 66707 mov     word ptr unk_47CB2, bx ;~ 1F7F:0140
cs=0x1f7f;eip=0x000144; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 66708 mov     ax, [bp+arg_2] ;~ 1F7F:0144
cs=0x1f7f;eip=0x000147; 	T(SHR(ax, 1));	// 66709 shr     ax, 1 ;~ 1F7F:0147
cs=0x1f7f;eip=0x000149; 	T(SHR(ax, 1));	// 66710 shr     ax, 1 ;~ 1F7F:0149
cs=0x1f7f;eip=0x00014b; 	X(MOV(*(dw*)((&unk_47cae)), ax));	// 66711 mov     word ptr unk_47CAE, ax ;~ 1F7F:014B
cs=0x1f7f;eip=0x00014e; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 66712 mov     es, word ptr unk_566AE ;~ 1F7F:014E
cs=0x1f7f;eip=0x000152; 	T(XOR(bx, bx));	// 66714 xor     bx, bx ;~ 1F7F:0152
cs=0x1f7f;eip=0x000154; 	T(MOV(ax, *(dw*)((&unk_47bde))));	// 66715 mov     ax, word ptr unk_47BDE ;~ 1F7F:0154
cs=0x1f7f;eip=0x000157; 	T(MOV(bl, al));	// 66716 mov     bl, al ;~ 1F7F:0157
cs=0x1f7f;eip=0x000159; 	T(SHL(bl, 1));	// 66717 shl     bl, 1 ;~ 1F7F:0159
cs=0x1f7f;eip=0x00015b; 	T(MOV(dl, *(raddr(ds,bx+0x388))));	// 66718 mov     dl, [bx+388h] ;~ 1F7F:015B
cs=0x1f7f;eip=0x00015f; 	T(MOV(bl, ah));	// 66719 mov     bl, ah ;~ 1F7F:015F
cs=0x1f7f;eip=0x000161; 	T(SHL(bl, 1));	// 66720 shl     bl, 1 ;~ 1F7F:0161
cs=0x1f7f;eip=0x000163; 	T(MOV(dh, *(raddr(ds,bx+0x388))));	// 66721 mov     dh, [bx+388h] ;~ 1F7F:0163
loc_2df37:
	// 8688 
cs=0x1f7f;eip=0x000167; 	T(MOV(bx, *(dw*)((&unk_47cb0))));	// 66724 mov     bx, word ptr unk_47CB0 ;~ 1F7F:0167
cs=0x1f7f;eip=0x00016b; 	X(INC(*(dw*)((&unk_47cb0))));	// 66725 inc     word ptr unk_47CB0 ;~ 1F7F:016B
cs=0x1f7f;eip=0x00016f; 	T(MOV(al, *(raddr(ds,bx))));	// 66726 mov     al, [bx] ;~ 1F7F:016F
cs=0x1f7f;eip=0x000171; 	T(OR(al, al));	// 66727 or      al, al ;~ 1F7F:0171
cs=0x1f7f;eip=0x000173; 	R(JNZ(loc_2df48));	// 66728 jnz     short loc_2DF48 ;~ 1F7F:0173
cs=0x1f7f;eip=0x000175; 	R(JMP(loc_2df81));	// 66729 jmp     short loc_2DF81 ;~ 1F7F:0175
loc_2df48:
	// 8689 
cs=0x1f7f;eip=0x000178; 	T(SUB(al, 0x16));	// 66734 sub     al, 16h ;~ 1F7F:0178
cs=0x1f7f;eip=0x00017a; 	T(XOR(ah, ah));	// 66735 xor     ah, ah ;~ 1F7F:017A
cs=0x1f7f;eip=0x00017c; 	T(SHL(ax, 1));	// 66736 shl     ax, 1 ;~ 1F7F:017C
cs=0x1f7f;eip=0x00017e; 	T(MOV(si, ax));	// 66737 mov     si, ax ;~ 1F7F:017E
cs=0x1f7f;eip=0x000180; 	T(SHL(ax, 1));	// 66738 shl     ax, 1 ;~ 1F7F:0180
cs=0x1f7f;eip=0x000182; 	T(ADD(si, ax));	// 66739 add     si, ax ;~ 1F7F:0182
cs=0x1f7f;eip=0x000184; 	T(MOV(cx, 6));	// 66740 mov     cx, 6 ;~ 1F7F:0184
cs=0x1f7f;eip=0x000187; 	T(MOV(bx, *(dw*)((&unk_47cae))));	// 66741 mov     bx, word ptr unk_47CAE ;~ 1F7F:0187
cs=0x1f7f;eip=0x00018b; 	T(MOV(bp, *(dw*)((&unk_47cb2))));	// 66742 mov     bp, word ptr unk_47CB2 ;~ 1F7F:018B
cs=0x1f7f;eip=0x00018f; 	X(PUSH(ds));	// 66743 push    ds ;~ 1F7F:018F
cs=0x1f7f;eip=0x000190; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 66744 mov     ds, word ptr unk_47BDC ;~ 1F7F:0190
loc_2df64:
	// 8690 
cs=0x1f7f;eip=0x000194; 	T(LODSB);	// 66747 lodsb ;~ 1F7F:0194
cs=0x1f7f;eip=0x000195; 	T(MOV(ah, al));	// 66748 mov     ah, al ;~ 1F7F:0195
cs=0x1f7f;eip=0x000197; 	T(AND(ah, dl));	// 66749 and     ah, dl ;~ 1F7F:0197
cs=0x1f7f;eip=0x000199; 	T(NOT(al));	// 66750 not     al ;~ 1F7F:0199
cs=0x1f7f;eip=0x00019b; 	T(AND(al, dh));	// 66751 and     al, dh ;~ 1F7F:019B
cs=0x1f7f;eip=0x00019d; 	T(OR(al, ah));	// 66752 or      al, ah ;~ 1F7F:019D
cs=0x1f7f;eip=0x00019f; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_s0))));	// 66753 mov     di, [bp+var_s0] ;~ 1F7F:019F
cs=0x1f7f;eip=0x0001a2; 	T(ADD(di, bx));	// 66754 add     di, bx ;~ 1F7F:01A2
cs=0x1f7f;eip=0x0001a4; 	X(STOSB);	// 66755 stosb ;~ 1F7F:01A4
cs=0x1f7f;eip=0x0001a5; 	T(ADD(bp, 2));	// 66756 add     bp, 2 ;~ 1F7F:01A5
cs=0x1f7f;eip=0x0001a8; 	R(LOOP(loc_2df64));	// 66757 loop    loc_2DF64 ;~ 1F7F:01A8
cs=0x1f7f;eip=0x0001aa; 	X(POP(ds));	// 66758 pop     ds ;~ 1F7F:01AA
cs=0x1f7f;eip=0x0001ab; 	X(INC(*(dw*)((&unk_47cae))));	// 66759 inc     word ptr unk_47CAE ;~ 1F7F:01AB
cs=0x1f7f;eip=0x0001af; 	R(JMP(loc_2df37));	// 66760 jmp     short loc_2DF37 ;~ 1F7F:01AF
loc_2df81:
	// 8691 
cs=0x1f7f;eip=0x0001b1; 	X(POP(di));	// 66764 pop     di ;~ 1F7F:01B1
cs=0x1f7f;eip=0x0001b2; 	X(POP(si));	// 66765 pop     si ;~ 1F7F:01B2
cs=0x1f7f;eip=0x0001b3; 	X(POP(bp));	// 66766 pop     bp ;~ 1F7F:01B3
cs=0x1f7f;eip=0x0001b4; 	R(RETF(6));	// 66767 retf    6 ;~ 1F7F:01B4
loc_2df87:
	// 8692 
cs=0x1f7f;eip=0x0001b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 66773 mov     ax, [bp+arg_4] ;~ 1F7F:01B7
cs=0x1f7f;eip=0x0001ba; 	X(MOV(*(dw*)((&unk_47cb0)), ax));	// 66774 mov     word ptr unk_47CB0, ax ;~ 1F7F:01BA
cs=0x1f7f;eip=0x0001bd; 	T(MOV(ax, ds));	// 66775 mov     ax, ds ;~ 1F7F:01BD
cs=0x1f7f;eip=0x0001bf; 	T(MOV(es, ax));	// 66776 mov     es, ax ;~ 1F7F:01BF
cs=0x1f7f;eip=0x0001c1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 66778 mov     bx, [bp+arg_0] ;~ 1F7F:01C1
cs=0x1f7f;eip=0x0001c4; 	T(MOV(cx, 6));	// 66779 mov     cx, 6 ;~ 1F7F:01C4
cs=0x1f7f;eip=0x0001c7; 	T(MOV(di, 0x0ED3C));	// 66780 mov     di, 0ED3Ch ;~ 1F7F:01C7
cs=0x1f7f;eip=0x0001ca; 	T(ADD(di, bx));	// 66781 add     di, bx ;~ 1F7F:01CA
cs=0x1f7f;eip=0x0001cc; 	T(MOV(al, 0x0FF));	// 66782 mov     al, 0FFh ;~ 1F7F:01CC
	// 66783 rep stosb ;~ 1F7F:01CE
cs=0x1f7f;eip=0x0001ce; 	X(	REP STOSB);	// 66783 rep stosb ;~ 1F7F:01CE
cs=0x1f7f;eip=0x0001d0; 	T(SHL(bx, 1));	// 66784 shl     bx, 1 ;~ 1F7F:01D0
cs=0x1f7f;eip=0x0001d2; 	T(ADD(bx, 0x0EB6E));	// 66785 add     bx, 0EB6Eh ;~ 1F7F:01D2
cs=0x1f7f;eip=0x0001d6; 	X(MOV(*(dw*)((&unk_47cb2)), bx));	// 66786 mov     word ptr unk_47CB2, bx ;~ 1F7F:01D6
cs=0x1f7f;eip=0x0001da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 66787 mov     ax, [bp+arg_2] ;~ 1F7F:01DA
cs=0x1f7f;eip=0x0001dd; 	T(SHR(ax, 1));	// 66788 shr     ax, 1 ;~ 1F7F:01DD
cs=0x1f7f;eip=0x0001df; 	T(SHR(ax, 1));	// 66789 shr     ax, 1 ;~ 1F7F:01DF
cs=0x1f7f;eip=0x0001e1; 	X(MOV(*(dw*)((&unk_47cae)), ax));	// 66790 mov     word ptr unk_47CAE, ax ;~ 1F7F:01E1
cs=0x1f7f;eip=0x0001e4; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 66791 mov     es, word ptr unk_566AE ;~ 1F7F:01E4
cs=0x1f7f;eip=0x0001e8; 	T(XOR(bx, bx));	// 66793 xor     bx, bx ;~ 1F7F:01E8
cs=0x1f7f;eip=0x0001ea; 	T(MOV(bl, unk_47bde));	// 66794 mov     bl, byte ptr unk_47BDE ;~ 1F7F:01EA
cs=0x1f7f;eip=0x0001ee; 	T(SHL(bl, 1));	// 66795 shl     bl, 1 ;~ 1F7F:01EE
cs=0x1f7f;eip=0x0001f0; 	T(MOV(dl, *(raddr(ds,bx+0x388))));	// 66796 mov     dl, [bx+388h] ;~ 1F7F:01F0
loc_2dfc4:
	// 8693 
cs=0x1f7f;eip=0x0001f4; 	T(MOV(bx, *(dw*)((&unk_47cb0))));	// 66799 mov     bx, word ptr unk_47CB0 ;~ 1F7F:01F4
cs=0x1f7f;eip=0x0001f8; 	X(INC(*(dw*)((&unk_47cb0))));	// 66800 inc     word ptr unk_47CB0 ;~ 1F7F:01F8
cs=0x1f7f;eip=0x0001fc; 	T(MOV(al, *(raddr(ds,bx))));	// 66801 mov     al, [bx] ;~ 1F7F:01FC
cs=0x1f7f;eip=0x0001fe; 	T(OR(al, al));	// 66802 or      al, al ;~ 1F7F:01FE
cs=0x1f7f;eip=0x000200; 	R(JNZ(loc_2dfd5));	// 66803 jnz     short loc_2DFD5 ;~ 1F7F:0200
cs=0x1f7f;eip=0x000202; 	R(JMP(loc_2e00f));	// 66804 jmp     short loc_2E00F ;~ 1F7F:0202
loc_2dfd5:
	// 8694 
cs=0x1f7f;eip=0x000205; 	T(SUB(al, 0x16));	// 66810 sub     al, 16h ;~ 1F7F:0205
cs=0x1f7f;eip=0x000207; 	T(XOR(ah, ah));	// 66811 xor     ah, ah ;~ 1F7F:0207
cs=0x1f7f;eip=0x000209; 	T(SHL(ax, 1));	// 66812 shl     ax, 1 ;~ 1F7F:0209
cs=0x1f7f;eip=0x00020b; 	T(MOV(si, ax));	// 66813 mov     si, ax ;~ 1F7F:020B
cs=0x1f7f;eip=0x00020d; 	T(SHL(ax, 1));	// 66814 shl     ax, 1 ;~ 1F7F:020D
cs=0x1f7f;eip=0x00020f; 	T(ADD(si, ax));	// 66815 add     si, ax ;~ 1F7F:020F
cs=0x1f7f;eip=0x000211; 	T(MOV(cx, 6));	// 66816 mov     cx, 6 ;~ 1F7F:0211
cs=0x1f7f;eip=0x000214; 	T(MOV(bx, *(dw*)((&unk_47cae))));	// 66817 mov     bx, word ptr unk_47CAE ;~ 1F7F:0214
cs=0x1f7f;eip=0x000218; 	T(MOV(bp, *(dw*)((&unk_47cb2))));	// 66818 mov     bp, word ptr unk_47CB2 ;~ 1F7F:0218
cs=0x1f7f;eip=0x00021c; 	X(PUSH(ds));	// 66819 push    ds ;~ 1F7F:021C
cs=0x1f7f;eip=0x00021d; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 66820 mov     ds, word ptr unk_47BDC ;~ 1F7F:021D
loc_2dff1:
	// 8695 
cs=0x1f7f;eip=0x000221; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_s0))));	// 66823 mov     di, [bp+var_s0] ;~ 1F7F:0221
cs=0x1f7f;eip=0x000224; 	T(ADD(di, bx));	// 66824 add     di, bx ;~ 1F7F:0224
cs=0x1f7f;eip=0x000226; 	T(LODSB);	// 66825 lodsb ;~ 1F7F:0226
cs=0x1f7f;eip=0x000227; 	T(MOV(ah, al));	// 66826 mov     ah, al ;~ 1F7F:0227
cs=0x1f7f;eip=0x000229; 	T(AND(ah, dl));	// 66827 and     ah, dl ;~ 1F7F:0229
cs=0x1f7f;eip=0x00022b; 	T(NOT(al));	// 66828 not     al ;~ 1F7F:022B
cs=0x1f7f;eip=0x00022d; 	T(AND(al, *(raddr(es,di))));	// 66829 and     al, es:[di] ;~ 1F7F:022D
cs=0x1f7f;eip=0x000230; 	T(OR(al, ah));	// 66830 or      al, ah ;~ 1F7F:0230
cs=0x1f7f;eip=0x000232; 	X(STOSB);	// 66831 stosb ;~ 1F7F:0232
cs=0x1f7f;eip=0x000233; 	T(ADD(bp, 2));	// 66832 add     bp, 2 ;~ 1F7F:0233
cs=0x1f7f;eip=0x000236; 	R(LOOP(loc_2dff1));	// 66833 loop    loc_2DFF1 ;~ 1F7F:0236
cs=0x1f7f;eip=0x000238; 	X(POP(ds));	// 66834 pop     ds ;~ 1F7F:0238
cs=0x1f7f;eip=0x000239; 	X(INC(*(dw*)((&unk_47cae))));	// 66835 inc     word ptr unk_47CAE ;~ 1F7F:0239
cs=0x1f7f;eip=0x00023d; 	R(JMP(loc_2dfc4));	// 66836 jmp     short loc_2DFC4 ;~ 1F7F:023D
loc_2e00f:
	// 8696 
cs=0x1f7f;eip=0x00023f; 	X(POP(di));	// 66840 pop     di ;~ 1F7F:023F
cs=0x1f7f;eip=0x000240; 	X(POP(si));	// 66841 pop     si ;~ 1F7F:0240
cs=0x1f7f;eip=0x000241; 	X(POP(bp));	// 66842 pop     bp ;~ 1F7F:0241
cs=0x1f7f;eip=0x000242; 	R(RETF(6));	// 66843 retf    6 ;~ 1F7F:0242
loc_2e015:
	// 8697 
cs=0x1f7f;eip=0x000245; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 66848 push    [bp+arg_2] ;~ 1F7F:0245
cs=0x1f7f;eip=0x000248; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 66849 push    [bp+arg_0] ;~ 1F7F:0248
cs=0x1f7f;eip=0x00024b; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 66850 mov     di, [bp+arg_4] ;~ 1F7F:024B
cs=0x1f7f;eip=0x00024e; 	T(MOV(ax, ds));	// 66851 mov     ax, ds ;~ 1F7F:024E
cs=0x1f7f;eip=0x000250; 	T(MOV(es, ax));	// 66852 mov     es, ax ;~ 1F7F:0250
cs=0x1f7f;eip=0x000252; 	T(MOV(cx, 0x0FFFF));	// 66854 mov     cx, 0FFFFh ;~ 1F7F:0252
cs=0x1f7f;eip=0x000255; 	T(XOR(al, al));	// 66855 xor     al, al ;~ 1F7F:0255
	// 66856 repne scasb ;~ 1F7F:0257
cs=0x1f7f;eip=0x000257; 	T(	REPNE SCASB);	// 66856 repne scasb ;~ 1F7F:0257
cs=0x1f7f;eip=0x000259; 	T(SUB(di, *(dw*)(raddr(ss,bp+arg_4))));	// 66857 sub     di, [bp+arg_4] ;~ 1F7F:0259
cs=0x1f7f;eip=0x00025c; 	T(DEC(di));	// 66858 dec     di ;~ 1F7F:025C
cs=0x1f7f;eip=0x00025d; 	T(SHL(di, 1));	// 66859 shl     di, 1 ;~ 1F7F:025D
cs=0x1f7f;eip=0x00025f; 	T(SHL(di, 1));	// 66860 shl     di, 1 ;~ 1F7F:025F
cs=0x1f7f;eip=0x000261; 	X(PUSH(di));	// 66861 push    di ;~ 1F7F:0261
cs=0x1f7f;eip=0x000262; 	T(MOV(ax, 6));	// 66862 mov     ax, 6 ;~ 1F7F:0262
cs=0x1f7f;eip=0x000265; 	X(PUSH(ax));	// 66863 push    ax ;~ 1F7F:0265
cs=0x1f7f;eip=0x000266; 	T(MOV(al, unk_47bdf));	// 66864 mov     al, byte ptr unk_47BDF ;~ 1F7F:0266
cs=0x1f7f;eip=0x000269; 	T(MOV(ah, 0x0FF));	// 66865 mov     ah, 0FFh ;~ 1F7F:0269
cs=0x1f7f;eip=0x00026b; 	X(PUSH(ax));	// 66866 push    ax ;~ 1F7F:026B
cs=0x1f7f;eip=0x00026c; 	R(CALLF(sub_233c4,0));	// 66867 call    sub_233C4 ;~ 1F7F:026C
cs=0x1f7f;eip=0x000271; 	R(JMP(loc_2e046));	// 66868 jmp     short loc_2E046 ;~ 1F7F:0271
loc_2e046:
	// 8698 
cs=0x1f7f;eip=0x000276; 	T(MOV(ax, ds));	// 66875 mov     ax, ds ;~ 1F7F:0276
cs=0x1f7f;eip=0x000278; 	T(MOV(es, ax));	// 66876 mov     es, ax ;~ 1F7F:0278
cs=0x1f7f;eip=0x00027a; 	T(MOV(di, 0x0ED3C));	// 66877 mov     di, 0ED3Ch ;~ 1F7F:027A
cs=0x1f7f;eip=0x00027d; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_0))));	// 66878 add     di, [bp+arg_0] ;~ 1F7F:027D
cs=0x1f7f;eip=0x000280; 	T(MOV(cx, 6));	// 66879 mov     cx, 6 ;~ 1F7F:0280
cs=0x1f7f;eip=0x000283; 	T(MOV(al, 0x0FF));	// 66880 mov     al, 0FFh ;~ 1F7F:0283
	// 66881 rep stosb ;~ 1F7F:0285
cs=0x1f7f;eip=0x000285; 	X(	REP STOSB);	// 66881 rep stosb ;~ 1F7F:0285
cs=0x1f7f;eip=0x000287; 	T(MOV(dx, 0x3CE));	// 66882 mov     dx, 3CEh ;~ 1F7F:0287
cs=0x1f7f;eip=0x00028a; 	T(MOV(ax, 0x0A05));	// 66883 mov     ax, 0A05h ;~ 1F7F:028A
cs=0x1f7f;eip=0x00028d; 	R(OUT(dx, ax));	// 66884 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:028D
cs=0x1f7f;eip=0x00028e; 	T(MOV(ax, 3));	// 66886 mov     ax, 3 ;~ 1F7F:028E
cs=0x1f7f;eip=0x000291; 	R(OUT(dx, ax));	// 66887 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:0291
cs=0x1f7f;eip=0x000292; 	T(MOV(ax, 7));	// 66892 mov     ax, 7 ;~ 1F7F:0292
cs=0x1f7f;eip=0x000295; 	R(OUT(dx, ax));	// 66893 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:0295
cs=0x1f7f;eip=0x000296; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 66896 mov     ax, [bp+arg_4] ;~ 1F7F:0296
cs=0x1f7f;eip=0x000299; 	X(MOV(*(dw*)((&unk_47cb0)), ax));	// 66897 mov     word ptr unk_47CB0, ax ;~ 1F7F:0299
cs=0x1f7f;eip=0x00029c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 66898 mov     ax, [bp+arg_2] ;~ 1F7F:029C
cs=0x1f7f;eip=0x00029f; 	T(SHR(ax, 1));	// 66899 shr     ax, 1 ;~ 1F7F:029F
cs=0x1f7f;eip=0x0002a1; 	T(SHR(ax, 1));	// 66900 shr     ax, 1 ;~ 1F7F:02A1
cs=0x1f7f;eip=0x0002a3; 	T(SHR(ax, 1));	// 66901 shr     ax, 1 ;~ 1F7F:02A3
cs=0x1f7f;eip=0x0002a5; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 66902 mov     bx, [bp+arg_0] ;~ 1F7F:02A5
cs=0x1f7f;eip=0x0002a8; 	T(SHL(bx, 1));	// 66903 shl     bx, 1 ;~ 1F7F:02A8
cs=0x1f7f;eip=0x0002aa; 	T(ADD(ax, *(dw*)(raddr(ds,bx-0x1492))));	// 66904 add     ax, [bx-1492h] ;~ 1F7F:02AA
cs=0x1f7f;eip=0x0002ae; 	X(MOV(*(dw*)((&unk_47cae)), ax));	// 66905 mov     word ptr unk_47CAE, ax ;~ 1F7F:02AE
cs=0x1f7f;eip=0x0002b1; 	T(TEST(*(db*)(raddr(ss,bp+arg_2)), 7));	// 66906 test    byte ptr [bp+arg_2], 7 ;~ 1F7F:02B1
cs=0x1f7f;eip=0x0002b5; 	R(JZ(loc_2e0d3));	// 66907 jz      short loc_2E0D3 ;~ 1F7F:02B5
cs=0x1f7f;eip=0x0002b7; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 66908 mov     es, word ptr unk_566AE ;~ 1F7F:02B7
cs=0x1f7f;eip=0x0002bb; 	T(MOV(di, *(dw*)((&unk_47cae))));	// 66910 mov     di, word ptr unk_47CAE ;~ 1F7F:02BB
cs=0x1f7f;eip=0x0002bf; 	T(MOV(bx, *(dw*)((&unk_47cb0))));	// 66911 mov     bx, word ptr unk_47CB0 ;~ 1F7F:02BF
cs=0x1f7f;eip=0x0002c3; 	X(INC(*(dw*)((&unk_47cb0))));	// 66912 inc     word ptr unk_47CB0 ;~ 1F7F:02C3
cs=0x1f7f;eip=0x0002c7; 	T(MOV(al, *(raddr(ds,bx))));	// 66913 mov     al, [bx] ;~ 1F7F:02C7
cs=0x1f7f;eip=0x0002c9; 	T(OR(al, al));	// 66914 or      al, al ;~ 1F7F:02C9
cs=0x1f7f;eip=0x0002cb; 	R(JNZ(loc_2e0a0));	// 66915 jnz     short loc_2E0A0 ;~ 1F7F:02CB
cs=0x1f7f;eip=0x0002cd; 	R(JMP(loc_2e191));	// 66916 jmp     loc_2E191 ;~ 1F7F:02CD
loc_2e0a0:
	// 8699 
cs=0x1f7f;eip=0x0002d0; 	T(SUB(al, 0x16));	// 66920 sub     al, 16h ;~ 1F7F:02D0
cs=0x1f7f;eip=0x0002d2; 	T(XOR(ah, ah));	// 66921 xor     ah, ah ;~ 1F7F:02D2
cs=0x1f7f;eip=0x0002d4; 	T(SHL(ax, 1));	// 66922 shl     ax, 1 ;~ 1F7F:02D4
cs=0x1f7f;eip=0x0002d6; 	T(MOV(si, ax));	// 66923 mov     si, ax ;~ 1F7F:02D6
cs=0x1f7f;eip=0x0002d8; 	T(SHL(ax, 1));	// 66924 shl     ax, 1 ;~ 1F7F:02D8
cs=0x1f7f;eip=0x0002da; 	T(ADD(si, ax));	// 66925 add     si, ax ;~ 1F7F:02DA
cs=0x1f7f;eip=0x0002dc; 	T(MOV(bp, 6));	// 66926 mov     bp, 6 ;~ 1F7F:02DC
cs=0x1f7f;eip=0x0002df; 	T(MOV(cl, unk_47bde));	// 66927 mov     cl, byte ptr unk_47BDE ;~ 1F7F:02DF
cs=0x1f7f;eip=0x0002e3; 	X(PUSH(ds));	// 66928 push    ds ;~ 1F7F:02E3
cs=0x1f7f;eip=0x0002e4; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 66929 mov     ds, word ptr unk_47BDC ;~ 1F7F:02E4
cs=0x1f7f;eip=0x0002e8; 	T(MOV(dx, 0x3CE));	// 66930 mov     dx, 3CEh ;~ 1F7F:02E8
cs=0x1f7f;eip=0x0002eb; 	T(MOV(al, 8));	// 66931 mov     al, 8 ;~ 1F7F:02EB
cs=0x1f7f;eip=0x0002ed; 	R(OUT(dx, al));	// 66932 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:02ED
cs=0x1f7f;eip=0x0002ee; 	T(INC(dx));	// 66935 inc     dx ;~ 1F7F:02EE
loc_2e0bf:
	// 8700 
cs=0x1f7f;eip=0x0002ef; 	T(MOV(al, *(raddr(ds,si))));	// 66938 mov     al, [si] ;~ 1F7F:02EF
cs=0x1f7f;eip=0x0002f1; 	T(INC(si));	// 66939 inc     si ;~ 1F7F:02F1
cs=0x1f7f;eip=0x0002f2; 	R(OUT(dx, al));	// 66940 out     dx, al          ; EGA port: graphics controller data register ;~ 1F7F:02F2
cs=0x1f7f;eip=0x0002f3; 	X(AND(*(raddr(es,di)), cl));	// 66941 and     es:[di], cl ;~ 1F7F:02F3
cs=0x1f7f;eip=0x0002f6; 	T(ADD(di, *(dw*)(raddr(ss,0x0EB5E))));	// 66942 add     di, ss:0EB5Eh ;~ 1F7F:02F6
cs=0x1f7f;eip=0x0002fb; 	T(DEC(bp));	// 66943 dec     bp ;~ 1F7F:02FB
cs=0x1f7f;eip=0x0002fc; 	R(JNZ(loc_2e0bf));	// 66944 jnz     short loc_2E0BF ;~ 1F7F:02FC
cs=0x1f7f;eip=0x0002fe; 	X(POP(ds));	// 66945 pop     ds ;~ 1F7F:02FE
cs=0x1f7f;eip=0x0002ff; 	X(INC(*(dw*)((&unk_47cae))));	// 66946 inc     word ptr unk_47CAE ;~ 1F7F:02FF
loc_2e0d3:
	// 8701 
cs=0x1f7f;eip=0x000303; 	T(MOV(bx, *(dw*)((&unk_47cb0))));	// 66950 mov     bx, word ptr unk_47CB0 ;~ 1F7F:0303
cs=0x1f7f;eip=0x000307; 	X(ADD(*(dw*)((&unk_47cb0)), 2));	// 66951 add     word ptr unk_47CB0, 2 ;~ 1F7F:0307
cs=0x1f7f;eip=0x00030c; 	T(MOV(al, *(raddr(ds,bx))));	// 66952 mov     al, [bx] ;~ 1F7F:030C
cs=0x1f7f;eip=0x00030e; 	T(OR(al, al));	// 66953 or      al, al ;~ 1F7F:030E
cs=0x1f7f;eip=0x000310; 	R(JNZ(loc_2e0e5));	// 66954 jnz     short loc_2E0E5 ;~ 1F7F:0310
cs=0x1f7f;eip=0x000312; 	R(JMP(loc_2e191));	// 66955 jmp     loc_2E191 ;~ 1F7F:0312
loc_2e0e5:
	// 8702 
cs=0x1f7f;eip=0x000315; 	T(SUB(al, 0x16));	// 66959 sub     al, 16h ;~ 1F7F:0315
cs=0x1f7f;eip=0x000317; 	T(MOV(ah, *(raddr(ds,bx+1))));	// 66960 mov     ah, [bx+1] ;~ 1F7F:0317
cs=0x1f7f;eip=0x00031a; 	T(OR(ah, ah));	// 66961 or      ah, ah ;~ 1F7F:031A
cs=0x1f7f;eip=0x00031c; 	R(JNZ(loc_2e12e));	// 66962 jnz     short loc_2E12E ;~ 1F7F:031C
cs=0x1f7f;eip=0x00031e; 	T(MOV(di, *(dw*)((&unk_47cae))));	// 66963 mov     di, word ptr unk_47CAE ;~ 1F7F:031E
cs=0x1f7f;eip=0x000322; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 66964 mov     es, word ptr unk_566AE ;~ 1F7F:0322
cs=0x1f7f;eip=0x000326; 	T(XOR(ah, ah));	// 66965 xor     ah, ah ;~ 1F7F:0326
cs=0x1f7f;eip=0x000328; 	T(SHL(ax, 1));	// 66966 shl     ax, 1 ;~ 1F7F:0328
cs=0x1f7f;eip=0x00032a; 	T(MOV(si, ax));	// 66967 mov     si, ax ;~ 1F7F:032A
cs=0x1f7f;eip=0x00032c; 	T(SHL(ax, 1));	// 66968 shl     ax, 1 ;~ 1F7F:032C
cs=0x1f7f;eip=0x00032e; 	T(ADD(si, ax));	// 66969 add     si, ax ;~ 1F7F:032E
cs=0x1f7f;eip=0x000330; 	T(MOV(bp, 6));	// 66970 mov     bp, 6 ;~ 1F7F:0330
cs=0x1f7f;eip=0x000333; 	T(MOV(cl, unk_47bde));	// 66971 mov     cl, byte ptr unk_47BDE ;~ 1F7F:0333
cs=0x1f7f;eip=0x000337; 	X(PUSH(ds));	// 66972 push    ds ;~ 1F7F:0337
cs=0x1f7f;eip=0x000338; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 66973 mov     ds, word ptr unk_47BDC ;~ 1F7F:0338
cs=0x1f7f;eip=0x00033c; 	T(MOV(dx, 0x3CE));	// 66974 mov     dx, 3CEh ;~ 1F7F:033C
cs=0x1f7f;eip=0x00033f; 	T(MOV(al, 8));	// 66975 mov     al, 8 ;~ 1F7F:033F
cs=0x1f7f;eip=0x000341; 	R(OUT(dx, al));	// 66976 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:0341
cs=0x1f7f;eip=0x000342; 	T(INC(dx));	// 66979 inc     dx ;~ 1F7F:0342
loc_2e113:
	// 8703 
cs=0x1f7f;eip=0x000343; 	T(MOV(al, *(raddr(ds,si))));	// 66982 mov     al, [si] ;~ 1F7F:0343
cs=0x1f7f;eip=0x000345; 	T(SHL(al, 1));	// 66983 shl     al, 1 ;~ 1F7F:0345
cs=0x1f7f;eip=0x000347; 	T(SHL(al, 1));	// 66984 shl     al, 1 ;~ 1F7F:0347
cs=0x1f7f;eip=0x000349; 	T(SHL(al, 1));	// 66985 shl     al, 1 ;~ 1F7F:0349
cs=0x1f7f;eip=0x00034b; 	T(SHL(al, 1));	// 66986 shl     al, 1 ;~ 1F7F:034B
cs=0x1f7f;eip=0x00034d; 	T(INC(si));	// 66987 inc     si ;~ 1F7F:034D
cs=0x1f7f;eip=0x00034e; 	R(OUT(dx, al));	// 66988 out     dx, al          ; EGA port: graphics controller data register ;~ 1F7F:034E
cs=0x1f7f;eip=0x00034f; 	X(AND(*(raddr(es,di)), cl));	// 66989 and     es:[di], cl ;~ 1F7F:034F
cs=0x1f7f;eip=0x000352; 	T(ADD(di, *(dw*)(raddr(ss,0x0EB5E))));	// 66990 add     di, ss:0EB5Eh ;~ 1F7F:0352
cs=0x1f7f;eip=0x000357; 	T(DEC(bp));	// 66991 dec     bp ;~ 1F7F:0357
cs=0x1f7f;eip=0x000358; 	R(JNZ(loc_2e113));	// 66992 jnz     short loc_2E113 ;~ 1F7F:0358
cs=0x1f7f;eip=0x00035a; 	X(POP(ds));	// 66993 pop     ds ;~ 1F7F:035A
cs=0x1f7f;eip=0x00035b; 	R(JMP(loc_2e191));	// 66994 jmp     short loc_2E191 ;~ 1F7F:035B
loc_2e12e:
	// 8704 
cs=0x1f7f;eip=0x00035e; 	T(SUB(ah, 0x16));	// 66999 sub     ah, 16h ;~ 1F7F:035E
cs=0x1f7f;eip=0x000361; 	T(MOV(di, *(dw*)((&unk_47cae))));	// 67000 mov     di, word ptr unk_47CAE ;~ 1F7F:0361
cs=0x1f7f;eip=0x000365; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 67001 mov     es, word ptr unk_566AE ;~ 1F7F:0365
cs=0x1f7f;eip=0x000369; 	T(MOV(bl, ah));	// 67002 mov     bl, ah ;~ 1F7F:0369
cs=0x1f7f;eip=0x00036b; 	T(XOR(bh, bh));	// 67003 xor     bh, bh ;~ 1F7F:036B
cs=0x1f7f;eip=0x00036d; 	T(SHL(bx, 1));	// 67004 shl     bx, 1 ;~ 1F7F:036D
cs=0x1f7f;eip=0x00036f; 	T(MOV(bp, bx));	// 67005 mov     bp, bx ;~ 1F7F:036F
cs=0x1f7f;eip=0x000371; 	T(SHL(bp, 1));	// 67006 shl     bp, 1 ;~ 1F7F:0371
cs=0x1f7f;eip=0x000373; 	T(ADD(bp, bx));	// 67007 add     bp, bx ;~ 1F7F:0373
cs=0x1f7f;eip=0x000375; 	T(XOR(ah, ah));	// 67008 xor     ah, ah ;~ 1F7F:0375
cs=0x1f7f;eip=0x000377; 	T(SHL(ax, 1));	// 67009 shl     ax, 1 ;~ 1F7F:0377
cs=0x1f7f;eip=0x000379; 	T(MOV(si, ax));	// 67010 mov     si, ax ;~ 1F7F:0379
cs=0x1f7f;eip=0x00037b; 	T(SHL(ax, 1));	// 67011 shl     ax, 1 ;~ 1F7F:037B
cs=0x1f7f;eip=0x00037d; 	T(ADD(si, ax));	// 67012 add     si, ax ;~ 1F7F:037D
cs=0x1f7f;eip=0x00037f; 	X(MOV(unk_47cad, 6));	// 67013 mov     byte ptr unk_47CAD, 6 ;~ 1F7F:037F
cs=0x1f7f;eip=0x000384; 	T(MOV(cl, unk_47bde));	// 67014 mov     cl, byte ptr unk_47BDE ;~ 1F7F:0384
cs=0x1f7f;eip=0x000388; 	X(PUSH(ds));	// 67015 push    ds ;~ 1F7F:0388
cs=0x1f7f;eip=0x000389; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 67016 mov     ds, word ptr unk_47BDC ;~ 1F7F:0389
cs=0x1f7f;eip=0x00038d; 	T(MOV(dx, 0x3CE));	// 67017 mov     dx, 3CEh ;~ 1F7F:038D
cs=0x1f7f;eip=0x000390; 	T(MOV(al, 8));	// 67018 mov     al, 8 ;~ 1F7F:0390
cs=0x1f7f;eip=0x000392; 	R(OUT(dx, al));	// 67019 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:0392
cs=0x1f7f;eip=0x000393; 	T(INC(dx));	// 67022 inc     dx ;~ 1F7F:0393
loc_2e164:
	// 8705 
cs=0x1f7f;eip=0x000394; 	T(MOV(al, *(raddr(ds,si))));	// 67025 mov     al, [si] ;~ 1F7F:0394
cs=0x1f7f;eip=0x000396; 	T(SHL(al, 1));	// 67026 shl     al, 1 ;~ 1F7F:0396
cs=0x1f7f;eip=0x000398; 	T(SHL(al, 1));	// 67027 shl     al, 1 ;~ 1F7F:0398
cs=0x1f7f;eip=0x00039a; 	T(SHL(al, 1));	// 67028 shl     al, 1 ;~ 1F7F:039A
cs=0x1f7f;eip=0x00039c; 	T(SHL(al, 1));	// 67029 shl     al, 1 ;~ 1F7F:039C
cs=0x1f7f;eip=0x00039e; 	T(INC(si));	// 67030 inc     si ;~ 1F7F:039E
cs=0x1f7f;eip=0x00039f; 	T(MOV(bl, *(raddr(ds,bp+0))));	// 67031 mov     bl, ds:[bp+0] ;~ 1F7F:039F
cs=0x1f7f;eip=0x0003a3; 	T(INC(bp));	// 67032 inc     bp ;~ 1F7F:03A3
cs=0x1f7f;eip=0x0003a4; 	T(AND(bl, 0x0F));	// 67033 and     bl, 0Fh ;~ 1F7F:03A4
cs=0x1f7f;eip=0x0003a7; 	T(OR(al, bl));	// 67034 or      al, bl ;~ 1F7F:03A7
cs=0x1f7f;eip=0x0003a9; 	R(OUT(dx, al));	// 67035 out     dx, al          ; EGA port: graphics controller data register ;~ 1F7F:03A9
cs=0x1f7f;eip=0x0003aa; 	X(AND(*(raddr(es,di)), cl));	// 67036 and     es:[di], cl ;~ 1F7F:03AA
cs=0x1f7f;eip=0x0003ad; 	T(ADD(di, *(dw*)(raddr(ss,0x0EB5E))));	// 67037 add     di, ss:0EB5Eh ;~ 1F7F:03AD
cs=0x1f7f;eip=0x0003b2; 	X(DEC(*(raddr(ss,0x2FD))));	// 67038 dec     byte ptr ss:2FDh ;~ 1F7F:03B2
cs=0x1f7f;eip=0x0003b7; 	R(JNZ(loc_2e164));	// 67039 jnz     short loc_2E164 ;~ 1F7F:03B7
cs=0x1f7f;eip=0x0003b9; 	X(POP(ds));	// 67040 pop     ds ;~ 1F7F:03B9
cs=0x1f7f;eip=0x0003ba; 	X(INC(*(dw*)((&unk_47cae))));	// 67041 inc     word ptr unk_47CAE ;~ 1F7F:03BA
cs=0x1f7f;eip=0x0003be; 	R(JMP(loc_2e0d3));	// 67042 jmp     loc_2E0D3 ;~ 1F7F:03BE
loc_2e191:
	// 8706 
cs=0x1f7f;eip=0x0003c1; 	T(MOV(dx, 0x3CE));	// 67047 mov     dx, 3CEh ;~ 1F7F:03C1
cs=0x1f7f;eip=0x0003c4; 	T(MOV(ax, 5));	// 67048 mov     ax, 5 ;~ 1F7F:03C4
cs=0x1f7f;eip=0x0003c7; 	R(OUT(dx, ax));	// 67049 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:03C7
cs=0x1f7f;eip=0x0003c8; 	T(MOV(dx, 0x3CE));	// 67056 mov     dx, 3CEh ;~ 1F7F:03C8
cs=0x1f7f;eip=0x0003cb; 	T(MOV(ax, 0x0FF08));	// 67057 mov     ax, 0FF08h ;~ 1F7F:03CB
cs=0x1f7f;eip=0x0003ce; 	R(OUT(dx, ax));	// 67058 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:03CE
cs=0x1f7f;eip=0x0003cf; 	X(POP(di));	// 67060 pop     di ;~ 1F7F:03CF
cs=0x1f7f;eip=0x0003d0; 	X(POP(si));	// 67061 pop     si ;~ 1F7F:03D0
cs=0x1f7f;eip=0x0003d1; 	X(POP(bp));	// 67062 pop     bp ;~ 1F7F:03D1
cs=0x1f7f;eip=0x0003d2; 	R(RETF(6));	// 67063 retf    6 ;~ 1F7F:03D2
loc_2e1a5:
	// 8707 
cs=0x1f7f;eip=0x0003d5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 67068 push    [bp+arg_2] ;~ 1F7F:03D5
cs=0x1f7f;eip=0x0003d8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 67069 push    [bp+arg_0] ;~ 1F7F:03D8
cs=0x1f7f;eip=0x0003db; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_4))));	// 67070 mov     di, [bp+arg_4] ;~ 1F7F:03DB
cs=0x1f7f;eip=0x0003de; 	T(MOV(ax, ds));	// 67071 mov     ax, ds ;~ 1F7F:03DE
cs=0x1f7f;eip=0x0003e0; 	T(MOV(es, ax));	// 67072 mov     es, ax ;~ 1F7F:03E0
cs=0x1f7f;eip=0x0003e2; 	T(MOV(cx, 0x0FFFF));	// 67074 mov     cx, 0FFFFh ;~ 1F7F:03E2
cs=0x1f7f;eip=0x0003e5; 	T(XOR(al, al));	// 67075 xor     al, al ;~ 1F7F:03E5
	// 67076 repne scasb ;~ 1F7F:03E7
cs=0x1f7f;eip=0x0003e7; 	T(	REPNE SCASB);	// 67076 repne scasb ;~ 1F7F:03E7
cs=0x1f7f;eip=0x0003e9; 	T(SUB(di, *(dw*)(raddr(ss,bp+arg_4))));	// 67077 sub     di, [bp+arg_4] ;~ 1F7F:03E9
cs=0x1f7f;eip=0x0003ec; 	T(DEC(di));	// 67078 dec     di ;~ 1F7F:03EC
cs=0x1f7f;eip=0x0003ed; 	T(SHL(di, 1));	// 67079 shl     di, 1 ;~ 1F7F:03ED
cs=0x1f7f;eip=0x0003ef; 	T(SHL(di, 1));	// 67080 shl     di, 1 ;~ 1F7F:03EF
cs=0x1f7f;eip=0x0003f1; 	X(PUSH(di));	// 67081 push    di ;~ 1F7F:03F1
cs=0x1f7f;eip=0x0003f2; 	T(MOV(ax, 6));	// 67082 mov     ax, 6 ;~ 1F7F:03F2
cs=0x1f7f;eip=0x0003f5; 	X(PUSH(ax));	// 67083 push    ax ;~ 1F7F:03F5
cs=0x1f7f;eip=0x0003f6; 	T(MOV(al, unk_47bdf));	// 67084 mov     al, byte ptr unk_47BDF ;~ 1F7F:03F6
cs=0x1f7f;eip=0x0003f9; 	T(MOV(ah, 0x0FF));	// 67085 mov     ah, 0FFh ;~ 1F7F:03F9
cs=0x1f7f;eip=0x0003fb; 	X(PUSH(ax));	// 67086 push    ax ;~ 1F7F:03FB
cs=0x1f7f;eip=0x0003fc; 	R(CALLF(sub_233c4,0));	// 67087 call    sub_233C4 ;~ 1F7F:03FC
cs=0x1f7f;eip=0x000401; 	R(JMP(loc_2e1d6));	// 67088 jmp     short loc_2E1D6 ;~ 1F7F:0401
loc_2e1d6:
	// 8708 
cs=0x1f7f;eip=0x000406; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 67095 mov     ax, [bp+arg_4] ;~ 1F7F:0406
cs=0x1f7f;eip=0x000409; 	X(MOV(*(dw*)((&unk_47cb0)), ax));	// 67096 mov     word ptr unk_47CB0, ax ;~ 1F7F:0409
cs=0x1f7f;eip=0x00040c; 	T(MOV(ax, ds));	// 67097 mov     ax, ds ;~ 1F7F:040C
cs=0x1f7f;eip=0x00040e; 	T(MOV(es, ax));	// 67098 mov     es, ax ;~ 1F7F:040E
cs=0x1f7f;eip=0x000410; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 67099 mov     bx, [bp+arg_0] ;~ 1F7F:0410
cs=0x1f7f;eip=0x000413; 	T(MOV(cx, 6));	// 67100 mov     cx, 6 ;~ 1F7F:0413
cs=0x1f7f;eip=0x000416; 	T(MOV(di, 0x0ED3C));	// 67101 mov     di, 0ED3Ch ;~ 1F7F:0416
cs=0x1f7f;eip=0x000419; 	T(ADD(di, bx));	// 67102 add     di, bx ;~ 1F7F:0419
cs=0x1f7f;eip=0x00041b; 	T(MOV(al, 0x0FF));	// 67103 mov     al, 0FFh ;~ 1F7F:041B
	// 67104 rep stosb ;~ 1F7F:041D
cs=0x1f7f;eip=0x00041d; 	X(	REP STOSB);	// 67104 rep stosb ;~ 1F7F:041D
cs=0x1f7f;eip=0x00041f; 	T(SHL(bx, 1));	// 67105 shl     bx, 1 ;~ 1F7F:041F
cs=0x1f7f;eip=0x000421; 	T(ADD(bx, 0x0EB6E));	// 67106 add     bx, 0EB6Eh ;~ 1F7F:0421
cs=0x1f7f;eip=0x000425; 	X(MOV(*(dw*)((&unk_47cb2)), bx));	// 67107 mov     word ptr unk_47CB2, bx ;~ 1F7F:0425
cs=0x1f7f;eip=0x000429; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 67108 mov     ax, [bp+arg_2] ;~ 1F7F:0429
cs=0x1f7f;eip=0x00042c; 	T(SHR(ax, 1));	// 67109 shr     ax, 1 ;~ 1F7F:042C
cs=0x1f7f;eip=0x00042e; 	X(MOV(*(dw*)((&unk_47cae)), ax));	// 67110 mov     word ptr unk_47CAE, ax ;~ 1F7F:042E
cs=0x1f7f;eip=0x000431; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 67111 mov     es, word ptr unk_566AE ;~ 1F7F:0431
cs=0x1f7f;eip=0x000435; 	T(MOV(dl, unk_47bde));	// 67113 mov     dl, byte ptr unk_47BDE ;~ 1F7F:0435
cs=0x1f7f;eip=0x000439; 	T(SHL(dl, 1));	// 67114 shl     dl, 1 ;~ 1F7F:0439
cs=0x1f7f;eip=0x00043b; 	T(SHL(dl, 1));	// 67115 shl     dl, 1 ;~ 1F7F:043B
cs=0x1f7f;eip=0x00043d; 	T(SHL(dl, 1));	// 67116 shl     dl, 1 ;~ 1F7F:043D
cs=0x1f7f;eip=0x00043f; 	T(SHL(dl, 1));	// 67117 shl     dl, 1 ;~ 1F7F:043F
cs=0x1f7f;eip=0x000441; 	T(OR(dl, unk_47bde));	// 67118 or      dl, byte ptr unk_47BDE ;~ 1F7F:0441
cs=0x1f7f;eip=0x000445; 	T(MOV(dh, dl));	// 67119 mov     dh, dl ;~ 1F7F:0445
loc_2e217:
	// 8709 
cs=0x1f7f;eip=0x000447; 	T(MOV(bx, *(dw*)((&unk_47cb0))));	// 67122 mov     bx, word ptr unk_47CB0 ;~ 1F7F:0447
cs=0x1f7f;eip=0x00044b; 	X(INC(*(dw*)((&unk_47cb0))));	// 67123 inc     word ptr unk_47CB0 ;~ 1F7F:044B
cs=0x1f7f;eip=0x00044f; 	T(MOV(al, *(raddr(ds,bx))));	// 67124 mov     al, [bx] ;~ 1F7F:044F
cs=0x1f7f;eip=0x000451; 	T(OR(al, al));	// 67125 or      al, al ;~ 1F7F:0451
cs=0x1f7f;eip=0x000453; 	R(JNZ(loc_2e228));	// 67126 jnz     short loc_2E228 ;~ 1F7F:0453
cs=0x1f7f;eip=0x000455; 	R(JMP(loc_2e27f));	// 67127 jmp     short loc_2E27F ;~ 1F7F:0455
loc_2e228:
	// 8710 
cs=0x1f7f;eip=0x000458; 	T(SUB(al, 0x16));	// 67132 sub     al, 16h ;~ 1F7F:0458
cs=0x1f7f;eip=0x00045a; 	T(XOR(ah, ah));	// 67133 xor     ah, ah ;~ 1F7F:045A
cs=0x1f7f;eip=0x00045c; 	T(SHL(ax, 1));	// 67134 shl     ax, 1 ;~ 1F7F:045C
cs=0x1f7f;eip=0x00045e; 	T(MOV(si, ax));	// 67135 mov     si, ax ;~ 1F7F:045E
cs=0x1f7f;eip=0x000460; 	T(SHL(ax, 1));	// 67136 shl     ax, 1 ;~ 1F7F:0460
cs=0x1f7f;eip=0x000462; 	T(ADD(si, ax));	// 67137 add     si, ax ;~ 1F7F:0462
cs=0x1f7f;eip=0x000464; 	T(MOV(cx, 6));	// 67138 mov     cx, 6 ;~ 1F7F:0464
cs=0x1f7f;eip=0x000467; 	T(MOV(bp, *(dw*)((&unk_47cb2))));	// 67139 mov     bp, word ptr unk_47CB2 ;~ 1F7F:0467
cs=0x1f7f;eip=0x00046b; 	X(PUSH(ds));	// 67140 push    ds ;~ 1F7F:046B
cs=0x1f7f;eip=0x00046c; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 67141 mov     ds, word ptr unk_47BDC ;~ 1F7F:046C
loc_2e240:
	// 8711 
cs=0x1f7f;eip=0x000470; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_s0))));	// 67144 mov     di, [bp+var_s0] ;~ 1F7F:0470
cs=0x1f7f;eip=0x000473; 	T(ADD(di, *(dw*)(raddr(ss,0x2FE))));	// 67145 add     di, ss:2FEh ;~ 1F7F:0473
cs=0x1f7f;eip=0x000478; 	T(LODSB);	// 67146 lodsb ;~ 1F7F:0478
cs=0x1f7f;eip=0x000479; 	T(MOV(bx, 0x0FFFF));	// 67147 mov     bx, 0FFFFh ;~ 1F7F:0479
cs=0x1f7f;eip=0x00047c; 	T(SHR(al, 1));	// 67148 shr     al, 1 ;~ 1F7F:047C
cs=0x1f7f;eip=0x00047e; 	R(JNC(loc_2e253));	// 67149 jnb     short loc_2E253 ;~ 1F7F:047E
cs=0x1f7f;eip=0x000480; 	T(AND(bh, 0x0F0));	// 67150 and     bh, 0F0h ;~ 1F7F:0480
loc_2e253:
	// 8712 
cs=0x1f7f;eip=0x000483; 	T(SHR(al, 1));	// 67153 shr     al, 1 ;~ 1F7F:0483
cs=0x1f7f;eip=0x000485; 	R(JNC(loc_2e25a));	// 67154 jnb     short loc_2E25A ;~ 1F7F:0485
cs=0x1f7f;eip=0x000487; 	T(AND(bh, 0x0F));	// 67155 and     bh, 0Fh ;~ 1F7F:0487
loc_2e25a:
	// 8713 
cs=0x1f7f;eip=0x00048a; 	T(SHR(al, 1));	// 67158 shr     al, 1 ;~ 1F7F:048A
cs=0x1f7f;eip=0x00048c; 	R(JNC(loc_2e261));	// 67159 jnb     short loc_2E261 ;~ 1F7F:048C
cs=0x1f7f;eip=0x00048e; 	T(AND(bl, 0x0F0));	// 67160 and     bl, 0F0h ;~ 1F7F:048E
loc_2e261:
	// 8714 
cs=0x1f7f;eip=0x000491; 	T(SHR(al, 1));	// 67163 shr     al, 1 ;~ 1F7F:0491
cs=0x1f7f;eip=0x000493; 	R(JNC(loc_2e268));	// 67164 jnb     short loc_2E268 ;~ 1F7F:0493
cs=0x1f7f;eip=0x000495; 	T(AND(bl, 0x0F));	// 67165 and     bl, 0Fh ;~ 1F7F:0495
loc_2e268:
	// 8715 
cs=0x1f7f;eip=0x000498; 	X(AND(*(dw*)(raddr(es,di)), bx));	// 67168 and     es:[di], bx ;~ 1F7F:0498
cs=0x1f7f;eip=0x00049b; 	T(NOT(bx));	// 67169 not     bx ;~ 1F7F:049B
cs=0x1f7f;eip=0x00049d; 	T(AND(bx, dx));	// 67170 and     bx, dx ;~ 1F7F:049D
cs=0x1f7f;eip=0x00049f; 	X(OR(*(dw*)(raddr(es,di)), bx));	// 67171 or      es:[di], bx ;~ 1F7F:049F
cs=0x1f7f;eip=0x0004a2; 	T(ADD(bp, 2));	// 67172 add     bp, 2 ;~ 1F7F:04A2
cs=0x1f7f;eip=0x0004a5; 	R(LOOP(loc_2e240));	// 67173 loop    loc_2E240 ;~ 1F7F:04A5
cs=0x1f7f;eip=0x0004a7; 	X(POP(ds));	// 67174 pop     ds ;~ 1F7F:04A7
cs=0x1f7f;eip=0x0004a8; 	X(ADD(*(dw*)((&unk_47cae)), 2));	// 67175 add     word ptr unk_47CAE, 2 ;~ 1F7F:04A8
cs=0x1f7f;eip=0x0004ad; 	R(JMP(loc_2e217));	// 67176 jmp     short loc_2E217 ;~ 1F7F:04AD
loc_2e27f:
	// 8716 
cs=0x1f7f;eip=0x0004af; 	X(POP(di));	// 67180 pop     di ;~ 1F7F:04AF
cs=0x1f7f;eip=0x0004b0; 	X(POP(si));	// 67181 pop     si ;~ 1F7F:04B0
cs=0x1f7f;eip=0x0004b1; 	X(POP(bp));	// 67182 pop     bp ;~ 1F7F:04B1
cs=0x1f7f;eip=0x0004b2; 	R(RETF(6));	// 67183 retf    6 ;~ 1F7F:04B2
sub_2e285:
	// 67191 
#undef var_s0
#define var_s0 0
	// 67194 var_s0          = word ptr  0 ;~ 1F7F:04B5
#undef arg_0
#define arg_0 6
	// 67195 arg_0           = word ptr  6 ;~ 1F7F:04B5
#undef arg_2
#define arg_2 8
	// 67196 arg_2           = word ptr  8 ;~ 1F7F:04B5
#undef arg_4
#define arg_4 0x0A
	// 67197 arg_4           = byte ptr  0Ah ;~ 1F7F:04B5
cs=0x1f7f;eip=0x0004b5; 	X(PUSH(bp));	// 67199 push    bp ;~ 1F7F:04B5
cs=0x1f7f;eip=0x0004b6; 	T(MOV(bp, sp));	// 67200 mov     bp, sp ;~ 1F7F:04B6
cs=0x1f7f;eip=0x0004b8; 	X(PUSH(si));	// 67201 push    si ;~ 1F7F:04B8
cs=0x1f7f;eip=0x0004b9; 	X(PUSH(di));	// 67202 push    di ;~ 1F7F:04B9
cs=0x1f7f;eip=0x0004ba; 	T(MOV(ax, *(dw*)((&unk_56512))));	// 67203 mov     ax, word ptr unk_56512 ;~ 1F7F:04BA
cs=0x1f7f;eip=0x0004bd; 	T(CMP(unk_47b38, 0));	// 67204 cmp     byte ptr unk_47B38, 0 ;~ 1F7F:04BD
cs=0x1f7f;eip=0x0004c2; 	R(JZ(loc_2e297));	// 67205 jz      short loc_2E297 ;~ 1F7F:04C2
cs=0x1f7f;eip=0x0004c4; 	T(MOV(ax, 4));	// 67206 mov     ax, 4 ;~ 1F7F:04C4
loc_2e297:
	// 8717 
cs=0x1f7f;eip=0x0004c7; 	T(DEC(ax));	// 67209 dec     ax ;~ 1F7F:04C7
cs=0x1f7f;eip=0x0004c8; 	T(AND(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 67210 and     ax, [bp+arg_2] ;~ 1F7F:04C8
cs=0x1f7f;eip=0x0004cb; 	R(JNZ(loc_2e2b8));	// 67211 jnz     short loc_2E2B8 ;~ 1F7F:04CB
cs=0x1f7f;eip=0x0004cd; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 67212 mov     al, [bp+arg_4] ;~ 1F7F:04CD
cs=0x1f7f;eip=0x0004d0; 	X(MOV(unk_47cb4, al));	// 67213 mov     byte ptr unk_47CB4, al ;~ 1F7F:04D0
cs=0x1f7f;eip=0x0004d3; 	T(MOV(ax, 0x304));	// 67214 mov     ax, 304h ;~ 1F7F:04D3
cs=0x1f7f;eip=0x0004d6; 	X(PUSH(ax));	// 67215 push    ax ;~ 1F7F:04D6
cs=0x1f7f;eip=0x0004d7; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 67216 push    [bp+arg_2] ;~ 1F7F:04D7
cs=0x1f7f;eip=0x0004da; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 67217 push    [bp+arg_0] ;~ 1F7F:04DA
cs=0x1f7f;eip=0x0004dd; 	R(CALLF(sub_2de1a,0));	// 67218 call    sub_2DE1A ;~ 1F7F:04DD
cs=0x1f7f;eip=0x0004e2; 	X(POP(di));	// 67219 pop     di ;~ 1F7F:04E2
cs=0x1f7f;eip=0x0004e3; 	X(POP(si));	// 67220 pop     si ;~ 1F7F:04E3
cs=0x1f7f;eip=0x0004e4; 	X(POP(bp));	// 67221 pop     bp ;~ 1F7F:04E4
cs=0x1f7f;eip=0x0004e5; 	R(RETF(6));	// 67222 retf    6 ;~ 1F7F:04E5
loc_2e2b8:
	// 8718 
cs=0x1f7f;eip=0x0004e8; 	T(MOV(si, *(dw*)((&unk_47b2e))));	// 67226 mov     si, word ptr unk_47B2E ;~ 1F7F:04E8
cs=0x1f7f;eip=0x0004ec; 	T(SHL(si, 1));	// 67227 shl     si, 1 ;~ 1F7F:04EC
cs=0x1f7f;eip=0x0004ee; 	T(CMP(unk_56885, 0));	// 67228 cmp     byte ptr unk_56885, 0 ;~ 1F7F:04EE
cs=0x1f7f;eip=0x0004f3; 	R(JZ(loc_2e2de));	// 67229 jz      short loc_2E2DE ;~ 1F7F:04F3
cs=0x1f7f;eip=0x0004f5; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 67230 push    [bp+arg_2] ;~ 1F7F:04F5
cs=0x1f7f;eip=0x0004f8; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 67231 push    [bp+arg_0] ;~ 1F7F:04F8
cs=0x1f7f;eip=0x0004fb; 	T(MOV(ax, 4));	// 67232 mov     ax, 4 ;~ 1F7F:04FB
cs=0x1f7f;eip=0x0004fe; 	X(PUSH(ax));	// 67233 push    ax ;~ 1F7F:04FE
cs=0x1f7f;eip=0x0004ff; 	T(MOV(ax, 6));	// 67234 mov     ax, 6 ;~ 1F7F:04FF
cs=0x1f7f;eip=0x000502; 	X(PUSH(ax));	// 67235 push    ax ;~ 1F7F:0502
cs=0x1f7f;eip=0x000503; 	T(MOV(al, unk_47bdf));	// 67236 mov     al, byte ptr unk_47BDF ;~ 1F7F:0503
cs=0x1f7f;eip=0x000506; 	T(MOV(ah, 0x0FF));	// 67237 mov     ah, 0FFh ;~ 1F7F:0506
cs=0x1f7f;eip=0x000508; 	X(PUSH(ax));	// 67238 push    ax ;~ 1F7F:0508
cs=0x1f7f;eip=0x000509; 	R(CALLF(sub_233c4,0));	// 67239 call    sub_233C4 ;~ 1F7F:0509
loc_2e2de:
	// 8719 
cs=0x1f7f;eip=0x00050e; __disp=*(dw*)(((db*)&off_47ca0)+si);
	R(JMP(__dispatch_call));	// 67242 jmp     off_47CA0[si] ;~ 1F7F:050E
loc_2e2e2:
	// 8720 
cs=0x1f7f;eip=0x000512; 	T(MOV(ax, ds));	// 67247 mov     ax, ds ;~ 1F7F:0512
cs=0x1f7f;eip=0x000514; 	T(MOV(es, ax));	// 67248 mov     es, ax ;~ 1F7F:0514
cs=0x1f7f;eip=0x000516; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 67250 mov     bx, [bp+arg_0] ;~ 1F7F:0516
cs=0x1f7f;eip=0x000519; 	T(MOV(cx, 6));	// 67251 mov     cx, 6 ;~ 1F7F:0519
cs=0x1f7f;eip=0x00051c; 	T(MOV(di, 0x0ED3C));	// 67252 mov     di, 0ED3Ch ;~ 1F7F:051C
cs=0x1f7f;eip=0x00051f; 	T(ADD(di, bx));	// 67253 add     di, bx ;~ 1F7F:051F
cs=0x1f7f;eip=0x000521; 	T(MOV(al, 0x0FF));	// 67254 mov     al, 0FFh ;~ 1F7F:0521
	// 67255 rep stosb ;~ 1F7F:0523
cs=0x1f7f;eip=0x000523; 	X(	REP STOSB);	// 67255 rep stosb ;~ 1F7F:0523
cs=0x1f7f;eip=0x000525; 	T(SHL(bx, 1));	// 67256 shl     bx, 1 ;~ 1F7F:0525
cs=0x1f7f;eip=0x000527; 	T(ADD(bx, 0x0EB6E));	// 67257 add     bx, 0EB6Eh ;~ 1F7F:0527
cs=0x1f7f;eip=0x00052b; 	X(MOV(*(dw*)((&unk_47cb2)), bx));	// 67258 mov     word ptr unk_47CB2, bx ;~ 1F7F:052B
cs=0x1f7f;eip=0x00052f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 67259 mov     ax, [bp+arg_2] ;~ 1F7F:052F
cs=0x1f7f;eip=0x000532; 	T(SHR(ax, 1));	// 67260 shr     ax, 1 ;~ 1F7F:0532
cs=0x1f7f;eip=0x000534; 	T(SHR(ax, 1));	// 67261 shr     ax, 1 ;~ 1F7F:0534
cs=0x1f7f;eip=0x000536; 	X(MOV(*(dw*)((&unk_47cae)), ax));	// 67262 mov     word ptr unk_47CAE, ax ;~ 1F7F:0536
cs=0x1f7f;eip=0x000539; 	T(MOV(cl, *(db*)(raddr(ss,bp+arg_2))));	// 67263 mov     cl, byte ptr [bp+arg_2] ;~ 1F7F:0539
cs=0x1f7f;eip=0x00053c; 	T(AND(cl, 3));	// 67264 and     cl, 3 ;~ 1F7F:053C
cs=0x1f7f;eip=0x00053f; 	T(SHL(cl, 1));	// 67265 shl     cl, 1 ;~ 1F7F:053F
cs=0x1f7f;eip=0x000541; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 67266 mov     es, word ptr unk_566AE ;~ 1F7F:0541
cs=0x1f7f;eip=0x000545; 	T(XOR(bx, bx));	// 67268 xor     bx, bx ;~ 1F7F:0545
cs=0x1f7f;eip=0x000547; 	T(MOV(bl, unk_47bde));	// 67269 mov     bl, byte ptr unk_47BDE ;~ 1F7F:0547
cs=0x1f7f;eip=0x00054b; 	T(SHL(bl, 1));	// 67270 shl     bl, 1 ;~ 1F7F:054B
cs=0x1f7f;eip=0x00054d; 	T(MOV(dl, *(raddr(ds,bx+0x388))));	// 67271 mov     dl, [bx+388h] ;~ 1F7F:054D
cs=0x1f7f;eip=0x000551; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 67272 mov     al, [bp+arg_4] ;~ 1F7F:0551
cs=0x1f7f;eip=0x000554; 	T(SUB(al, 0x16));	// 67273 sub     al, 16h ;~ 1F7F:0554
cs=0x1f7f;eip=0x000556; 	T(XOR(ah, ah));	// 67274 xor     ah, ah ;~ 1F7F:0556
cs=0x1f7f;eip=0x000558; 	T(SHL(ax, 1));	// 67275 shl     ax, 1 ;~ 1F7F:0558
cs=0x1f7f;eip=0x00055a; 	T(MOV(si, ax));	// 67276 mov     si, ax ;~ 1F7F:055A
cs=0x1f7f;eip=0x00055c; 	T(SHL(ax, 1));	// 67277 shl     ax, 1 ;~ 1F7F:055C
cs=0x1f7f;eip=0x00055e; 	T(ADD(si, ax));	// 67278 add     si, ax ;~ 1F7F:055E
cs=0x1f7f;eip=0x000560; 	X(MOV(unk_47cad, 6));	// 67279 mov     byte ptr unk_47CAD, 6 ;~ 1F7F:0560
cs=0x1f7f;eip=0x000565; 	T(MOV(bp, *(dw*)((&unk_47cb2))));	// 67280 mov     bp, word ptr unk_47CB2 ;~ 1F7F:0565
cs=0x1f7f;eip=0x000569; 	X(PUSH(ds));	// 67281 push    ds ;~ 1F7F:0569
cs=0x1f7f;eip=0x00056a; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 67282 mov     ds, word ptr unk_47BDC ;~ 1F7F:056A
loc_2e33e:
	// 8721 
cs=0x1f7f;eip=0x00056e; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_s0))));	// 67285 mov     di, [bp+var_s0] ;~ 1F7F:056E
cs=0x1f7f;eip=0x000571; 	T(ADD(di, *(dw*)(raddr(ss,0x2FE))));	// 67286 add     di, ss:2FEh ;~ 1F7F:0571
cs=0x1f7f;eip=0x000576; 	T(LODSB);	// 67287 lodsb ;~ 1F7F:0576
cs=0x1f7f;eip=0x000577; 	T(XCHG(al, ah));	// 67288 xchg    al, ah ;~ 1F7F:0577
cs=0x1f7f;eip=0x000579; 	T(XOR(al, al));	// 67289 xor     al, al ;~ 1F7F:0579
cs=0x1f7f;eip=0x00057b; 	T(SHR(ax, cl));	// 67290 shr     ax, cl ;~ 1F7F:057B
cs=0x1f7f;eip=0x00057d; 	T(XCHG(al, ah));	// 67291 xchg    al, ah ;~ 1F7F:057D
cs=0x1f7f;eip=0x00057f; 	T(MOV(bx, ax));	// 67292 mov     bx, ax ;~ 1F7F:057F
cs=0x1f7f;eip=0x000581; 	T(NOT(ax));	// 67293 not     ax ;~ 1F7F:0581
cs=0x1f7f;eip=0x000583; 	T(AND(ax, *(dw*)(raddr(es,di))));	// 67294 and     ax, es:[di] ;~ 1F7F:0583
cs=0x1f7f;eip=0x000586; 	T(AND(bl, dl));	// 67295 and     bl, dl ;~ 1F7F:0586
cs=0x1f7f;eip=0x000588; 	T(AND(bh, dl));	// 67296 and     bh, dl ;~ 1F7F:0588
cs=0x1f7f;eip=0x00058a; 	T(OR(ax, bx));	// 67297 or      ax, bx ;~ 1F7F:058A
cs=0x1f7f;eip=0x00058c; 	X(STOSW);	// 67298 stosw ;~ 1F7F:058C
cs=0x1f7f;eip=0x00058d; 	T(ADD(bp, 2));	// 67299 add     bp, 2 ;~ 1F7F:058D
cs=0x1f7f;eip=0x000590; 	X(DEC(*(raddr(ss,0x2FD))));	// 67300 dec     byte ptr ss:2FDh ;~ 1F7F:0590
cs=0x1f7f;eip=0x000595; 	R(JNZ(loc_2e33e));	// 67301 jnz     short loc_2E33E ;~ 1F7F:0595
cs=0x1f7f;eip=0x000597; 	X(POP(ds));	// 67302 pop     ds ;~ 1F7F:0597
cs=0x1f7f;eip=0x000598; 	X(POP(di));	// 67303 pop     di ;~ 1F7F:0598
cs=0x1f7f;eip=0x000599; 	X(POP(si));	// 67304 pop     si ;~ 1F7F:0599
cs=0x1f7f;eip=0x00059a; 	X(POP(bp));	// 67305 pop     bp ;~ 1F7F:059A
cs=0x1f7f;eip=0x00059b; 	R(RETF(6));	// 67306 retf    6 ;~ 1F7F:059B
loc_2e36e:
	// 8722 
cs=0x1f7f;eip=0x00059e; 	T(MOV(ax, ds));	// 67311 mov     ax, ds ;~ 1F7F:059E
cs=0x1f7f;eip=0x0005a0; 	T(MOV(es, ax));	// 67312 mov     es, ax ;~ 1F7F:05A0
cs=0x1f7f;eip=0x0005a2; 	T(MOV(di, 0x0ED3C));	// 67314 mov     di, 0ED3Ch ;~ 1F7F:05A2
cs=0x1f7f;eip=0x0005a5; 	T(ADD(di, *(dw*)(raddr(ss,bp+arg_0))));	// 67315 add     di, [bp+arg_0] ;~ 1F7F:05A5
cs=0x1f7f;eip=0x0005a8; 	T(MOV(cx, 6));	// 67316 mov     cx, 6 ;~ 1F7F:05A8
cs=0x1f7f;eip=0x0005ab; 	T(MOV(al, 0x0FF));	// 67317 mov     al, 0FFh ;~ 1F7F:05AB
	// 67318 rep stosb ;~ 1F7F:05AD
cs=0x1f7f;eip=0x0005ad; 	X(	REP STOSB);	// 67318 rep stosb ;~ 1F7F:05AD
cs=0x1f7f;eip=0x0005af; 	T(MOV(dx, 0x3CE));	// 67319 mov     dx, 3CEh ;~ 1F7F:05AF
cs=0x1f7f;eip=0x0005b2; 	T(MOV(ax, 0x0A05));	// 67320 mov     ax, 0A05h ;~ 1F7F:05B2
cs=0x1f7f;eip=0x0005b5; 	R(OUT(dx, ax));	// 67321 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:05B5
cs=0x1f7f;eip=0x0005b6; 	T(MOV(ax, 3));	// 67323 mov     ax, 3 ;~ 1F7F:05B6
cs=0x1f7f;eip=0x0005b9; 	R(OUT(dx, ax));	// 67324 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:05B9
cs=0x1f7f;eip=0x0005ba; 	T(MOV(ax, 7));	// 67329 mov     ax, 7 ;~ 1F7F:05BA
cs=0x1f7f;eip=0x0005bd; 	R(OUT(dx, ax));	// 67330 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:05BD
cs=0x1f7f;eip=0x0005be; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 67333 mov     ax, [bp+arg_2] ;~ 1F7F:05BE
cs=0x1f7f;eip=0x0005c1; 	T(SHR(ax, 1));	// 67334 shr     ax, 1 ;~ 1F7F:05C1
cs=0x1f7f;eip=0x0005c3; 	T(SHR(ax, 1));	// 67335 shr     ax, 1 ;~ 1F7F:05C3
cs=0x1f7f;eip=0x0005c5; 	T(SHR(ax, 1));	// 67336 shr     ax, 1 ;~ 1F7F:05C5
cs=0x1f7f;eip=0x0005c7; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 67337 mov     bx, [bp+arg_0] ;~ 1F7F:05C7
cs=0x1f7f;eip=0x0005ca; 	T(SHL(bx, 1));	// 67338 shl     bx, 1 ;~ 1F7F:05CA
cs=0x1f7f;eip=0x0005cc; 	T(ADD(ax, *(dw*)(raddr(ds,bx-0x1492))));	// 67339 add     ax, [bx-1492h] ;~ 1F7F:05CC
cs=0x1f7f;eip=0x0005d0; 	X(MOV(*(dw*)((&unk_47cae)), ax));	// 67340 mov     word ptr unk_47CAE, ax ;~ 1F7F:05D0
cs=0x1f7f;eip=0x0005d3; 	T(MOV(cl, *(db*)(raddr(ss,bp+arg_2))));	// 67341 mov     cl, byte ptr [bp+arg_2] ;~ 1F7F:05D3
cs=0x1f7f;eip=0x0005d6; 	T(AND(cl, 7));	// 67342 and     cl, 7 ;~ 1F7F:05D6
cs=0x1f7f;eip=0x0005d9; 	T(MOV(di, *(dw*)((&unk_47cae))));	// 67343 mov     di, word ptr unk_47CAE ;~ 1F7F:05D9
cs=0x1f7f;eip=0x0005dd; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 67344 mov     es, word ptr unk_566AE ;~ 1F7F:05DD
cs=0x1f7f;eip=0x0005e1; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 67346 mov     al, [bp+arg_4] ;~ 1F7F:05E1
cs=0x1f7f;eip=0x0005e4; 	T(SUB(al, 0x16));	// 67347 sub     al, 16h ;~ 1F7F:05E4
cs=0x1f7f;eip=0x0005e6; 	T(XOR(ah, ah));	// 67348 xor     ah, ah ;~ 1F7F:05E6
cs=0x1f7f;eip=0x0005e8; 	T(SHL(ax, 1));	// 67349 shl     ax, 1 ;~ 1F7F:05E8
cs=0x1f7f;eip=0x0005ea; 	T(MOV(si, ax));	// 67350 mov     si, ax ;~ 1F7F:05EA
cs=0x1f7f;eip=0x0005ec; 	T(SHL(ax, 1));	// 67351 shl     ax, 1 ;~ 1F7F:05EC
cs=0x1f7f;eip=0x0005ee; 	T(ADD(si, ax));	// 67352 add     si, ax ;~ 1F7F:05EE
cs=0x1f7f;eip=0x0005f0; 	T(MOV(bp, 6));	// 67353 mov     bp, 6 ;~ 1F7F:05F0
cs=0x1f7f;eip=0x0005f3; 	T(MOV(ch, unk_47bde));	// 67354 mov     ch, byte ptr unk_47BDE ;~ 1F7F:05F3
cs=0x1f7f;eip=0x0005f7; 	X(PUSH(ds));	// 67355 push    ds ;~ 1F7F:05F7
cs=0x1f7f;eip=0x0005f8; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 67356 mov     ds, word ptr unk_47BDC ;~ 1F7F:05F8
cs=0x1f7f;eip=0x0005fc; 	T(MOV(dx, 0x3CE));	// 67357 mov     dx, 3CEh ;~ 1F7F:05FC
cs=0x1f7f;eip=0x0005ff; 	T(MOV(al, 8));	// 67358 mov     al, 8 ;~ 1F7F:05FF
cs=0x1f7f;eip=0x000601; 	R(OUT(dx, al));	// 67359 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:0601
cs=0x1f7f;eip=0x000602; 	T(INC(dx));	// 67362 inc     dx ;~ 1F7F:0602
loc_2e3d3:
	// 8723 
cs=0x1f7f;eip=0x000603; 	T(MOV(ah, *(raddr(ds,si))));	// 67365 mov     ah, [si] ;~ 1F7F:0603
cs=0x1f7f;eip=0x000605; 	T(XOR(al, al));	// 67366 xor     al, al ;~ 1F7F:0605
cs=0x1f7f;eip=0x000607; 	T(SHL(ah, 1));	// 67367 shl     ah, 1 ;~ 1F7F:0607
cs=0x1f7f;eip=0x000609; 	T(SHL(ah, 1));	// 67368 shl     ah, 1 ;~ 1F7F:0609
cs=0x1f7f;eip=0x00060b; 	T(SHL(ah, 1));	// 67369 shl     ah, 1 ;~ 1F7F:060B
cs=0x1f7f;eip=0x00060d; 	T(SHL(ah, 1));	// 67370 shl     ah, 1 ;~ 1F7F:060D
cs=0x1f7f;eip=0x00060f; 	T(SHR(ax, cl));	// 67371 shr     ax, cl ;~ 1F7F:060F
cs=0x1f7f;eip=0x000611; 	T(XCHG(al, ah));	// 67372 xchg    al, ah ;~ 1F7F:0611
cs=0x1f7f;eip=0x000613; 	R(OUT(dx, al));	// 67373 out     dx, al          ; EGA port: graphics controller data register ;~ 1F7F:0613
cs=0x1f7f;eip=0x000614; 	X(AND(*(raddr(es,di)), ch));	// 67374 and     es:[di], ch ;~ 1F7F:0614
cs=0x1f7f;eip=0x000617; 	T(XCHG(al, ah));	// 67375 xchg    al, ah ;~ 1F7F:0617
cs=0x1f7f;eip=0x000619; 	R(OUT(dx, al));	// 67376 out     dx, al          ; EGA port: graphics controller data register ;~ 1F7F:0619
cs=0x1f7f;eip=0x00061a; 	X(AND(*(raddr(es,di+1)), ch));	// 67377 and     es:[di+1], ch ;~ 1F7F:061A
cs=0x1f7f;eip=0x00061e; 	T(INC(si));	// 67378 inc     si ;~ 1F7F:061E
cs=0x1f7f;eip=0x00061f; 	T(ADD(di, *(dw*)(raddr(ss,0x0EB5E))));	// 67379 add     di, ss:0EB5Eh ;~ 1F7F:061F
cs=0x1f7f;eip=0x000624; 	T(DEC(bp));	// 67380 dec     bp ;~ 1F7F:0624
cs=0x1f7f;eip=0x000625; 	R(JNZ(loc_2e3d3));	// 67381 jnz     short loc_2E3D3 ;~ 1F7F:0625
cs=0x1f7f;eip=0x000627; 	X(POP(ds));	// 67382 pop     ds ;~ 1F7F:0627
cs=0x1f7f;eip=0x000628; 	T(MOV(dx, 0x3CE));	// 67383 mov     dx, 3CEh ;~ 1F7F:0628
cs=0x1f7f;eip=0x00062b; 	T(MOV(ax, 5));	// 67384 mov     ax, 5 ;~ 1F7F:062B
cs=0x1f7f;eip=0x00062e; 	R(OUT(dx, ax));	// 67385 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:062E
cs=0x1f7f;eip=0x00062f; 	T(MOV(dx, 0x3CE));	// 67392 mov     dx, 3CEh ;~ 1F7F:062F
cs=0x1f7f;eip=0x000632; 	T(MOV(ax, 0x0FF08));	// 67393 mov     ax, 0FF08h ;~ 1F7F:0632
cs=0x1f7f;eip=0x000635; 	R(OUT(dx, ax));	// 67394 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 1F7F:0635
cs=0x1f7f;eip=0x000636; 	X(POP(di));	// 67396 pop     di ;~ 1F7F:0636
cs=0x1f7f;eip=0x000637; 	X(POP(si));	// 67397 pop     si ;~ 1F7F:0637
cs=0x1f7f;eip=0x000638; 	X(POP(bp));	// 67398 pop     bp ;~ 1F7F:0638
cs=0x1f7f;eip=0x000639; 	R(RETF(6));	// 67399 retf    6 ;~ 1F7F:0639
loc_2e40c:
	// 8724 
cs=0x1f7f;eip=0x00063c; 	X(POP(di));	// 67404 pop     di ;~ 1F7F:063C
cs=0x1f7f;eip=0x00063d; 	X(POP(si));	// 67405 pop     si ;~ 1F7F:063D
cs=0x1f7f;eip=0x00063e; 	X(POP(bp));	// 67406 pop     bp ;~ 1F7F:063E
cs=0x1f7f;eip=0x00063f; 	R(RETF(6));	// 67407 retf    6 ;~ 1F7F:063F
loc_2e412:
	// 8725 
cs=0x1f7f;eip=0x000642; 	T(MOV(ax, ds));	// 67412 mov     ax, ds ;~ 1F7F:0642
cs=0x1f7f;eip=0x000644; 	T(MOV(es, ax));	// 67413 mov     es, ax ;~ 1F7F:0644
cs=0x1f7f;eip=0x000646; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 67415 mov     bx, [bp+arg_0] ;~ 1F7F:0646
cs=0x1f7f;eip=0x000649; 	T(MOV(cx, 6));	// 67416 mov     cx, 6 ;~ 1F7F:0649
cs=0x1f7f;eip=0x00064c; 	T(MOV(di, 0x0ED3C));	// 67417 mov     di, 0ED3Ch ;~ 1F7F:064C
cs=0x1f7f;eip=0x00064f; 	T(ADD(di, bx));	// 67418 add     di, bx ;~ 1F7F:064F
cs=0x1f7f;eip=0x000651; 	T(MOV(al, 0x0FF));	// 67419 mov     al, 0FFh ;~ 1F7F:0651
	// 67420 rep stosb ;~ 1F7F:0653
cs=0x1f7f;eip=0x000653; 	X(	REP STOSB);	// 67420 rep stosb ;~ 1F7F:0653
cs=0x1f7f;eip=0x000655; 	T(SHL(bx, 1));	// 67421 shl     bx, 1 ;~ 1F7F:0655
cs=0x1f7f;eip=0x000657; 	T(ADD(bx, 0x0EB6E));	// 67422 add     bx, 0EB6Eh ;~ 1F7F:0657
cs=0x1f7f;eip=0x00065b; 	X(MOV(*(dw*)((&unk_47cb2)), bx));	// 67423 mov     word ptr unk_47CB2, bx ;~ 1F7F:065B
cs=0x1f7f;eip=0x00065f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 67424 mov     ax, [bp+arg_2] ;~ 1F7F:065F
cs=0x1f7f;eip=0x000662; 	T(SHR(ax, 1));	// 67425 shr     ax, 1 ;~ 1F7F:0662
cs=0x1f7f;eip=0x000664; 	X(MOV(*(dw*)((&unk_47cae)), ax));	// 67426 mov     word ptr unk_47CAE, ax ;~ 1F7F:0664
cs=0x1f7f;eip=0x000667; 	T(MOV(es, *(dw*)((&unk_566ae))));	// 67427 mov     es, word ptr unk_566AE ;~ 1F7F:0667
cs=0x1f7f;eip=0x00066b; 	T(MOV(dl, unk_47bde));	// 67429 mov     dl, byte ptr unk_47BDE ;~ 1F7F:066B
cs=0x1f7f;eip=0x00066f; 	T(SHL(dl, 1));	// 67430 shl     dl, 1 ;~ 1F7F:066F
cs=0x1f7f;eip=0x000671; 	T(SHL(dl, 1));	// 67431 shl     dl, 1 ;~ 1F7F:0671
cs=0x1f7f;eip=0x000673; 	T(SHL(dl, 1));	// 67432 shl     dl, 1 ;~ 1F7F:0673
cs=0x1f7f;eip=0x000675; 	T(SHL(dl, 1));	// 67433 shl     dl, 1 ;~ 1F7F:0675
cs=0x1f7f;eip=0x000677; 	T(OR(dl, unk_47bde));	// 67434 or      dl, byte ptr unk_47BDE ;~ 1F7F:0677
cs=0x1f7f;eip=0x00067b; 	T(MOV(dh, dl));	// 67435 mov     dh, dl ;~ 1F7F:067B
cs=0x1f7f;eip=0x00067d; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 67436 mov     al, [bp+arg_4] ;~ 1F7F:067D
cs=0x1f7f;eip=0x000680; 	T(SUB(al, 0x16));	// 67437 sub     al, 16h ;~ 1F7F:0680
cs=0x1f7f;eip=0x000682; 	T(XOR(ah, ah));	// 67438 xor     ah, ah ;~ 1F7F:0682
cs=0x1f7f;eip=0x000684; 	T(SHL(ax, 1));	// 67439 shl     ax, 1 ;~ 1F7F:0684
cs=0x1f7f;eip=0x000686; 	T(MOV(si, ax));	// 67440 mov     si, ax ;~ 1F7F:0686
cs=0x1f7f;eip=0x000688; 	T(SHL(ax, 1));	// 67441 shl     ax, 1 ;~ 1F7F:0688
cs=0x1f7f;eip=0x00068a; 	T(ADD(si, ax));	// 67442 add     si, ax ;~ 1F7F:068A
cs=0x1f7f;eip=0x00068c; 	T(MOV(cx, 6));	// 67443 mov     cx, 6 ;~ 1F7F:068C
cs=0x1f7f;eip=0x00068f; 	T(MOV(bp, *(dw*)((&unk_47cb2))));	// 67444 mov     bp, word ptr unk_47CB2 ;~ 1F7F:068F
cs=0x1f7f;eip=0x000693; 	X(PUSH(ds));	// 67445 push    ds ;~ 1F7F:0693
cs=0x1f7f;eip=0x000694; 	T(MOV(ds, *(dw*)((&unk_47bdc))));	// 67446 mov     ds, word ptr unk_47BDC ;~ 1F7F:0694
loc_2e468:
	// 8726 
cs=0x1f7f;eip=0x000698; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_s0))));	// 67449 mov     di, [bp+var_s0] ;~ 1F7F:0698
cs=0x1f7f;eip=0x00069b; 	T(ADD(di, *(dw*)(raddr(ss,0x2FE))));	// 67450 add     di, ss:2FEh ;~ 1F7F:069B
cs=0x1f7f;eip=0x0006a0; 	T(LODSB);	// 67451 lodsb ;~ 1F7F:06A0
cs=0x1f7f;eip=0x0006a1; 	T(SHR(al, 1));	// 67452 shr     al, 1 ;~ 1F7F:06A1
cs=0x1f7f;eip=0x0006a3; 	R(JNC(loc_2e482));	// 67453 jnb     short loc_2E482 ;~ 1F7F:06A3
cs=0x1f7f;eip=0x0006a5; 	X(AND(*(raddr(es,di+2)), 0x0F0));	// 67454 and     byte ptr es:[di+2], 0F0h ;~ 1F7F:06A5
cs=0x1f7f;eip=0x0006aa; 	T(MOV(al, dl));	// 67455 mov     al, dl ;~ 1F7F:06AA
cs=0x1f7f;eip=0x0006ac; 	T(AND(al, 0x0F0));	// 67456 and     al, 0F0h ;~ 1F7F:06AC
cs=0x1f7f;eip=0x0006ae; 	X(OR(*(raddr(es,di+2)), al));	// 67457 or      es:[di+2], al ;~ 1F7F:06AE
loc_2e482:
	// 8727 
cs=0x1f7f;eip=0x0006b2; 	T(MOV(bx, 0x0FFFF));	// 67460 mov     bx, 0FFFFh ;~ 1F7F:06B2
cs=0x1f7f;eip=0x0006b5; 	T(SHR(al, 1));	// 67461 shr     al, 1 ;~ 1F7F:06B5
cs=0x1f7f;eip=0x0006b7; 	R(JNC(loc_2e48c));	// 67462 jnb     short loc_2E48C ;~ 1F7F:06B7
cs=0x1f7f;eip=0x0006b9; 	T(AND(bh, 0x0F0));	// 67463 and     bh, 0F0h ;~ 1F7F:06B9
loc_2e48c:
	// 8728 
cs=0x1f7f;eip=0x0006bc; 	T(SHR(al, 1));	// 67466 shr     al, 1 ;~ 1F7F:06BC
cs=0x1f7f;eip=0x0006be; 	R(JNC(loc_2e493));	// 67467 jnb     short loc_2E493 ;~ 1F7F:06BE
cs=0x1f7f;eip=0x0006c0; 	T(AND(bh, 0x0F));	// 67468 and     bh, 0Fh ;~ 1F7F:06C0
loc_2e493:
	// 8729 
cs=0x1f7f;eip=0x0006c3; 	T(SHR(al, 1));	// 67471 shr     al, 1 ;~ 1F7F:06C3
cs=0x1f7f;eip=0x0006c5; 	R(JNC(loc_2e49a));	// 67472 jnb     short loc_2E49A ;~ 1F7F:06C5
cs=0x1f7f;eip=0x0006c7; 	T(AND(bl, 0x0F0));	// 67473 and     bl, 0F0h ;~ 1F7F:06C7
loc_2e49a:
	// 8730 
cs=0x1f7f;eip=0x0006ca; 	X(AND(*(dw*)(raddr(es,di)), bx));	// 67476 and     es:[di], bx ;~ 1F7F:06CA
cs=0x1f7f;eip=0x0006cd; 	T(NOT(bx));	// 67477 not     bx ;~ 1F7F:06CD
cs=0x1f7f;eip=0x0006cf; 	T(AND(bx, dx));	// 67478 and     bx, dx ;~ 1F7F:06CF
cs=0x1f7f;eip=0x0006d1; 	X(OR(*(dw*)(raddr(es,di)), bx));	// 67479 or      es:[di], bx ;~ 1F7F:06D1
cs=0x1f7f;eip=0x0006d4; 	T(ADD(bp, 2));	// 67480 add     bp, 2 ;~ 1F7F:06D4
cs=0x1f7f;eip=0x0006d7; 	R(LOOP(loc_2e468));	// 67481 loop    loc_2E468 ;~ 1F7F:06D7
cs=0x1f7f;eip=0x0006d9; 	X(POP(ds));	// 67482 pop     ds ;~ 1F7F:06D9
cs=0x1f7f;eip=0x0006da; 	X(POP(di));	// 67483 pop     di ;~ 1F7F:06DA
cs=0x1f7f;eip=0x0006db; 	X(POP(si));	// 67484 pop     si ;~ 1F7F:06DB
cs=0x1f7f;eip=0x0006dc; 	X(POP(bp));	// 67485 pop     bp ;~ 1F7F:06DC
cs=0x1f7f;eip=0x0006dd; 	R(RETF(6));	// 67486 retf    6 ;~ 1F7F:06DD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2de14: 	goto loc_2de14;
        case m2c::kloc_2de1f: 	goto loc_2de1f;
        case m2c::kloc_2de30: 	goto loc_2de30;
        case m2c::kloc_2de34: 	goto loc_2de34;
        case m2c::kloc_2de65: 	goto loc_2de65;
        case m2c::kloc_2de8f: 	goto loc_2de8f;
        case m2c::kloc_2dea0: 	goto loc_2dea0;
        case m2c::kloc_2debc: 	goto loc_2debc;
        case m2c::kloc_2dec5: 	goto loc_2dec5;
        case m2c::kloc_2decd: 	goto loc_2decd;
        case m2c::kloc_2ded5: 	goto loc_2ded5;
        case m2c::kloc_2dedc: 	goto loc_2dedc;
        case m2c::kloc_2deeb: 	goto loc_2deeb;
        case m2c::kloc_2def1: 	goto loc_2def1;
        case m2c::kloc_2df37: 	goto loc_2df37;
        case m2c::kloc_2df48: 	goto loc_2df48;
        case m2c::kloc_2df64: 	goto loc_2df64;
        case m2c::kloc_2df81: 	goto loc_2df81;
        case m2c::kloc_2df87: 	goto loc_2df87;
        case m2c::kloc_2dfc4: 	goto loc_2dfc4;
        case m2c::kloc_2dfd5: 	goto loc_2dfd5;
        case m2c::kloc_2dff1: 	goto loc_2dff1;
        case m2c::kloc_2e00f: 	goto loc_2e00f;
        case m2c::kloc_2e015: 	goto loc_2e015;
        case m2c::kloc_2e046: 	goto loc_2e046;
        case m2c::kloc_2e0a0: 	goto loc_2e0a0;
        case m2c::kloc_2e0bf: 	goto loc_2e0bf;
        case m2c::kloc_2e0d3: 	goto loc_2e0d3;
        case m2c::kloc_2e0e5: 	goto loc_2e0e5;
        case m2c::kloc_2e113: 	goto loc_2e113;
        case m2c::kloc_2e12e: 	goto loc_2e12e;
        case m2c::kloc_2e164: 	goto loc_2e164;
        case m2c::kloc_2e191: 	goto loc_2e191;
        case m2c::kloc_2e1a5: 	goto loc_2e1a5;
        case m2c::kloc_2e1d6: 	goto loc_2e1d6;
        case m2c::kloc_2e217: 	goto loc_2e217;
        case m2c::kloc_2e228: 	goto loc_2e228;
        case m2c::kloc_2e240: 	goto loc_2e240;
        case m2c::kloc_2e253: 	goto loc_2e253;
        case m2c::kloc_2e25a: 	goto loc_2e25a;
        case m2c::kloc_2e261: 	goto loc_2e261;
        case m2c::kloc_2e268: 	goto loc_2e268;
        case m2c::kloc_2e27f: 	goto loc_2e27f;
        case m2c::kloc_2e297: 	goto loc_2e297;
        case m2c::kloc_2e2b8: 	goto loc_2e2b8;
        case m2c::kloc_2e2de: 	goto loc_2e2de;
        case m2c::kloc_2e2e2: 	goto loc_2e2e2;
        case m2c::kloc_2e33e: 	goto loc_2e33e;
        case m2c::kloc_2e36e: 	goto loc_2e36e;
        case m2c::kloc_2e3d3: 	goto loc_2e3d3;
        case m2c::kloc_2e40c: 	goto loc_2e40c;
        case m2c::kloc_2e412: 	goto loc_2e412;
        case m2c::kloc_2e468: 	goto loc_2e468;
        case m2c::kloc_2e482: 	goto loc_2e482;
        case m2c::kloc_2e48c: 	goto loc_2e48c;
        case m2c::kloc_2e493: 	goto loc_2e493;
        case m2c::kloc_2e49a: 	goto loc_2e49a;
        case m2c::kseg005_proc: 	goto seg005_proc;
        case m2c::ksub_2de1a: 	goto sub_2de1a;
        case m2c::ksub_2e285: 	goto sub_2e285;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

