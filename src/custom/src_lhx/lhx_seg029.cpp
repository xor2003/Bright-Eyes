/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group27(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group27:
    _begin:
sub_3d9b2:
	// 100484 
#undef var_4
#define var_4 -4
	// 100486 var_4           = dword ptr -4 ;~ 2F3D:0002
cs=0x2f3d;eip=0x000002; 	X(PUSH(bp));	// 100488 push    bp ;~ 2F3D:0002
cs=0x2f3d;eip=0x000003; 	T(MOV(bp, sp));	// 100489 mov     bp, sp ;~ 2F3D:0003
cs=0x2f3d;eip=0x000005; 	T(SUB(sp, 0x0A));	// 100490 sub     sp, 0Ah ;~ 2F3D:0005
cs=0x2f3d;eip=0x000008; 	X(PUSH(di));	// 100491 push    di ;~ 2F3D:0008
cs=0x2f3d;eip=0x000009; 	X(PUSH(si));	// 100492 push    si ;~ 2F3D:0009
cs=0x2f3d;eip=0x00000a; 	T(MOV(si, 1));	// 100493 mov     si, 1 ;~ 2F3D:000A
cs=0x2f3d;eip=0x00000d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), offset(seg042,unk_40f50)));	// 100494 mov     word ptr [bp+var_4], offset unk_40F50 ;~ 2F3D:000D
cs=0x2f3d;eip=0x000012; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), seg_offset(seg042)));	// 100495 mov     word ptr [bp+var_4+2], seg seg042 ;~ 2F3D:0012
cs=0x2f3d;eip=0x000017; 	R(JMP(loc_3d9f4));	// 100496 jmp     short loc_3D9F4 ;~ 2F3D:0017
loc_3d9c9:
	// 10765 
cs=0x2f3d;eip=0x000019; 	T(CMP(*(dw*)(raddr(ds,di+0x22)), 0));	// 100500 cmp     word ptr [di+22h], 0 ;~ 2F3D:0019
cs=0x2f3d;eip=0x00001d; 	R(JZ(loc_3d9d5));	// 100501 jz      short loc_3D9D5 ;~ 2F3D:001D
cs=0x2f3d;eip=0x00001f; 	X(PUSH(di));	// 100502 push    di ;~ 2F3D:001F
cs=0x2f3d;eip=0x000020; 	R(CALLF(sub_267b7,0));	// 100503 call    sub_267B7 ;~ 2F3D:0020
loc_3d9d5:
	// 10766 
cs=0x2f3d;eip=0x000025; 	X(PUSH(di));	// 100506 push    di ;~ 2F3D:0025
cs=0x2f3d;eip=0x000026; 	R(CALLF(sub_25033,0));	// 100507 call    far ptr sub_25033 ;~ 2F3D:0026
cs=0x2f3d;eip=0x00002b; 	T(OR(al, al));	// 100508 or      al, al ;~ 2F3D:002B
cs=0x2f3d;eip=0x00002d; 	R(JNZ(loc_3d9e4));	// 100509 jnz     short loc_3D9E4 ;~ 2F3D:002D
cs=0x2f3d;eip=0x00002f; 	R(CALLF(sub_2f82e,0));	// 100510 call    sub_2F82E ;~ 2F3D:002F
loc_3d9e4:
	// 10767 
cs=0x2f3d;eip=0x000034; 	T(CMP(*(dw*)(raddr(ds,di+0x22)), 0));	// 100514 cmp     word ptr [di+22h], 0 ;~ 2F3D:0034
cs=0x2f3d;eip=0x000038; 	R(JZ(loc_3d9f0));	// 100515 jz      short loc_3D9F0 ;~ 2F3D:0038
cs=0x2f3d;eip=0x00003a; 	X(PUSH(di));	// 100516 push    di ;~ 2F3D:003A
cs=0x2f3d;eip=0x00003b; 	R(CALLF(sub_26819,0));	// 100517 call    sub_26819 ;~ 2F3D:003B
loc_3d9f0:
	// 10768 
cs=0x2f3d;eip=0x000040; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 2));	// 100520 add     word ptr [bp+var_4], 2 ;~ 2F3D:0040
loc_3d9f4:
	// 10769 
cs=0x2f3d;eip=0x000044; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 100523 les     bx, [bp+var_4] ;~ 2F3D:0044
cs=0x2f3d;eip=0x000047; 	T(MOV(di, *(dw*)(raddr(es,bx))));	// 100524 mov     di, es:[bx] ;~ 2F3D:0047
cs=0x2f3d;eip=0x00004a; 	T(OR(di, di));	// 100525 or      di, di ;~ 2F3D:004A
cs=0x2f3d;eip=0x00004c; 	R(JNZ(loc_3d9c9));	// 100526 jnz     short loc_3D9C9 ;~ 2F3D:004C
cs=0x2f3d;eip=0x00004e; 	T(OR(si, si));	// 100527 or      si, si ;~ 2F3D:004E
cs=0x2f3d;eip=0x000050; 	R(JNZ(loc_3da07));	// 100528 jnz     short loc_3DA07 ;~ 2F3D:0050
cs=0x2f3d;eip=0x000052; 	R(CALLF(sub_315c9,0));	// 100529 call    sub_315C9 ;~ 2F3D:0052
loc_3da07:
	// 10770 
cs=0x2f3d;eip=0x000057; 	X(POP(si));	// 100533 pop     si ;~ 2F3D:0057
cs=0x2f3d;eip=0x000058; 	X(POP(di));	// 100534 pop     di ;~ 2F3D:0058
cs=0x2f3d;eip=0x000059; 	T(MOV(sp, bp));	// 100535 mov     sp, bp ;~ 2F3D:0059
cs=0x2f3d;eip=0x00005b; 	X(POP(bp));	// 100536 pop     bp ;~ 2F3D:005B
cs=0x2f3d;eip=0x00005c; 	R(RETF(0));	// 100537 retf ;~ 2F3D:005C
sub_3da0d:
	// 100545 
#undef var_4
#define var_4 -4
	// 100547 var_4           = dword ptr -4 ;~ 2F3D:005D
cs=0x2f3d;eip=0x00005d; 	X(PUSH(bp));	// 100549 push    bp ;~ 2F3D:005D
cs=0x2f3d;eip=0x00005e; 	T(MOV(bp, sp));	// 100550 mov     bp, sp ;~ 2F3D:005E
cs=0x2f3d;eip=0x000060; 	T(SUB(sp, 6));	// 100551 sub     sp, 6 ;~ 2F3D:0060
cs=0x2f3d;eip=0x000063; 	X(PUSH(si));	// 100552 push    si ;~ 2F3D:0063
cs=0x2f3d;eip=0x000064; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), offset(seg042,unk_40f50)));	// 100553 mov     word ptr [bp+var_4], offset unk_40F50 ;~ 2F3D:0064
cs=0x2f3d;eip=0x000069; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), seg_offset(seg042)));	// 100554 mov     word ptr [bp+var_4+2], seg seg042 ;~ 2F3D:0069
cs=0x2f3d;eip=0x00006e; 	R(JMP(loc_3da42));	// 100555 jmp     short loc_3DA42 ;~ 2F3D:006E
loc_3da20:
	// 10771 
cs=0x2f3d;eip=0x000070; 	T(CMP(*(dw*)(raddr(ds,si+0x22)), 0));	// 100559 cmp     word ptr [si+22h], 0 ;~ 2F3D:0070
cs=0x2f3d;eip=0x000074; 	R(JZ(loc_3da2c));	// 100560 jz      short loc_3DA2C ;~ 2F3D:0074
cs=0x2f3d;eip=0x000076; 	X(PUSH(si));	// 100561 push    si ;~ 2F3D:0076
cs=0x2f3d;eip=0x000077; 	R(CALLF(sub_267b7,0));	// 100562 call    sub_267B7 ;~ 2F3D:0077
loc_3da2c:
	// 10772 
cs=0x2f3d;eip=0x00007c; 	X(PUSH(si));	// 100565 push    si ;~ 2F3D:007C
cs=0x2f3d;eip=0x00007d; 	R(CALLF(sub_2636e,0));	// 100566 call    sub_2636E ;~ 2F3D:007D
cs=0x2f3d;eip=0x000082; 	T(CMP(*(dw*)(raddr(ds,si+0x22)), 0));	// 100567 cmp     word ptr [si+22h], 0 ;~ 2F3D:0082
cs=0x2f3d;eip=0x000086; 	R(JZ(loc_3da3e));	// 100568 jz      short loc_3DA3E ;~ 2F3D:0086
cs=0x2f3d;eip=0x000088; 	X(PUSH(si));	// 100569 push    si ;~ 2F3D:0088
cs=0x2f3d;eip=0x000089; 	R(CALLF(sub_26819,0));	// 100570 call    sub_26819 ;~ 2F3D:0089
loc_3da3e:
	// 10773 
cs=0x2f3d;eip=0x00008e; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 2));	// 100573 add     word ptr [bp+var_4], 2 ;~ 2F3D:008E
loc_3da42:
	// 10774 
cs=0x2f3d;eip=0x000092; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 100576 les     bx, [bp+var_4] ;~ 2F3D:0092
cs=0x2f3d;eip=0x000095; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 100577 mov     si, es:[bx] ;~ 2F3D:0095
cs=0x2f3d;eip=0x000098; 	T(OR(si, si));	// 100578 or      si, si ;~ 2F3D:0098
cs=0x2f3d;eip=0x00009a; 	R(JNZ(loc_3da20));	// 100579 jnz     short loc_3DA20 ;~ 2F3D:009A
cs=0x2f3d;eip=0x00009c; 	X(POP(si));	// 100580 pop     si ;~ 2F3D:009C
cs=0x2f3d;eip=0x00009d; 	T(MOV(sp, bp));	// 100581 mov     sp, bp ;~ 2F3D:009D
cs=0x2f3d;eip=0x00009f; 	X(POP(bp));	// 100582 pop     bp ;~ 2F3D:009F
cs=0x2f3d;eip=0x0000a0; 	R(RETF(0));	// 100583 retf ;~ 2F3D:00A0
sub_3da51:
	// 100591 
#undef var_4
#define var_4 -4
	// 100593 var_4           = word ptr -4 ;~ 2F3D:00A1
#undef var_2
#define var_2 -2
	// 100594 var_2           = word ptr -2 ;~ 2F3D:00A1
cs=0x2f3d;eip=0x0000a1; 	X(PUSH(bp));	// 100596 push    bp ;~ 2F3D:00A1
cs=0x2f3d;eip=0x0000a2; 	T(MOV(bp, sp));	// 100597 mov     bp, sp ;~ 2F3D:00A2
cs=0x2f3d;eip=0x0000a4; 	T(SUB(sp, 8));	// 100598 sub     sp, 8 ;~ 2F3D:00A4
cs=0x2f3d;eip=0x0000a7; 	X(PUSH(di));	// 100599 push    di ;~ 2F3D:00A7
cs=0x2f3d;eip=0x0000a8; 	X(PUSH(si));	// 100600 push    si ;~ 2F3D:00A8
cs=0x2f3d;eip=0x0000a9; 	T(MOV(al, 8));	// 100601 mov     al, 8 ;~ 2F3D:00A9
cs=0x2f3d;eip=0x0000ab; 	X(MOV(unk_4df3f, al));	// 100602 mov     byte ptr unk_4DF3F, al ;~ 2F3D:00AB
cs=0x2f3d;eip=0x0000ae; 	X(MOV(unk_4df2a, al));	// 100603 mov     byte ptr unk_4DF2A, al ;~ 2F3D:00AE
cs=0x2f3d;eip=0x0000b1; 	X(MOV(unk_4df20, al));	// 100604 mov     byte ptr unk_4DF20, al ;~ 2F3D:00B1
cs=0x2f3d;eip=0x0000b4; 	X(MOV(unk_4df16, al));	// 100605 mov     byte ptr unk_4DF16, al ;~ 2F3D:00B4
cs=0x2f3d;eip=0x0000b7; 	X(MOV(unk_4df0c, al));	// 100606 mov     byte ptr unk_4DF0C, al ;~ 2F3D:00B7
cs=0x2f3d;eip=0x0000ba; 	X(MOV(unk_4df02, al));	// 100607 mov     byte ptr unk_4DF02, al ;~ 2F3D:00BA
cs=0x2f3d;eip=0x0000bd; 	T(MOV(ax, 0x40));	// 100608 mov     ax, 40h ; '@' ;~ 2F3D:00BD
cs=0x2f3d;eip=0x0000c0; 	T(CWD);	// 100609 cwd ;~ 2F3D:00C0
cs=0x2f3d;eip=0x0000c1; 	X(PUSH(dx));	// 100610 push    dx ;~ 2F3D:00C1
cs=0x2f3d;eip=0x0000c2; 	X(PUSH(ax));	// 100611 push    ax ;~ 2F3D:00C2
cs=0x2f3d;eip=0x0000c3; 	X(PUSH(word_5705c));	// 100612 push    word_5705C ;~ 2F3D:00C3
cs=0x2f3d;eip=0x0000c7; 	X(PUSH(word_5705a));	// 100613 push    word_5705A ;~ 2F3D:00C7
cs=0x2f3d;eip=0x0000cb; 	R(CALLF(sub_10526,0));	// 100614 call    sub_10526 ;~ 2F3D:00CB
cs=0x2f3d;eip=0x0000d0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 100615 mov     [bp+var_4], ax ;~ 2F3D:00D0
cs=0x2f3d;eip=0x0000d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 100616 mov     [bp+var_2], dx ;~ 2F3D:00D3
cs=0x2f3d;eip=0x0000d6; 	T(MOV(si, ax));	// 100617 mov     si, ax ;~ 2F3D:00D6
cs=0x2f3d;eip=0x0000d8; 	T(AND(si, 0x0F));	// 100618 and     si, 0Fh ;~ 2F3D:00D8
cs=0x2f3d;eip=0x0000db; 	T(MOV(cl, 4));	// 100619 mov     cl, 4 ;~ 2F3D:00DB
cs=0x2f3d;eip=0x0000dd; 	R(CALLF(sub_10240,0));	// 100620 call    sub_10240 ;~ 2F3D:00DD
cs=0x2f3d;eip=0x0000e2; 	T(MOV(di, ax));	// 100621 mov     di, ax ;~ 2F3D:00E2
cs=0x2f3d;eip=0x0000e4; 	T(AND(di, 3));	// 100622 and     di, 3 ;~ 2F3D:00E4
cs=0x2f3d;eip=0x0000e7; 	R(JNZ(loc_3dabe));	// 100623 jnz     short loc_3DABE ;~ 2F3D:00E7
cs=0x2f3d;eip=0x0000e9; 	X(MOV(unk_4df3f, 0));	// 100624 mov     byte ptr unk_4DF3F, 0 ;~ 2F3D:00E9
cs=0x2f3d;eip=0x0000ee; 	T(CMP(si, 8));	// 100625 cmp     si, 8 ;~ 2F3D:00EE
cs=0x2f3d;eip=0x0000f1; 	R(JGE(loc_3daaa));	// 100626 jge     short loc_3DAAA ;~ 2F3D:00F1
cs=0x2f3d;eip=0x0000f3; 	X(MOV(unk_4df2a, 0));	// 100627 mov     byte ptr unk_4DF2A, 0 ;~ 2F3D:00F3
cs=0x2f3d;eip=0x0000f8; 	R(JMP(loc_3db0f));	// 100628 jmp     short loc_3DB0F ;~ 2F3D:00F8
loc_3daaa:
	// 10775 
cs=0x2f3d;eip=0x0000fa; 	T(TEST(si, 1));	// 100632 test    si, 1 ;~ 2F3D:00FA
cs=0x2f3d;eip=0x0000fe; 	R(JZ(loc_3dab7));	// 100633 jz      short loc_3DAB7 ;~ 2F3D:00FE
cs=0x2f3d;eip=0x000100; 	X(MOV(unk_4df02, 0));	// 100634 mov     byte ptr unk_4DF02, 0 ;~ 2F3D:0100
cs=0x2f3d;eip=0x000105; 	R(JMP(loc_3db0f));	// 100635 jmp     short loc_3DB0F ;~ 2F3D:0105
loc_3dab7:
	// 10776 
cs=0x2f3d;eip=0x000107; 	X(MOV(unk_4df0c, 0));	// 100639 mov     byte ptr unk_4DF0C, 0 ;~ 2F3D:0107
cs=0x2f3d;eip=0x00010c; 	R(JMP(loc_3db0f));	// 100640 jmp     short loc_3DB0F ;~ 2F3D:010C
loc_3dabe:
	// 10777 
cs=0x2f3d;eip=0x00010e; 	T(CMP(di, 2));	// 100644 cmp     di, 2 ;~ 2F3D:010E
cs=0x2f3d;eip=0x000111; 	R(JNZ(loc_3dae8));	// 100645 jnz     short loc_3DAE8 ;~ 2F3D:0111
cs=0x2f3d;eip=0x000113; 	X(MOV(unk_4df2a, 0));	// 100646 mov     byte ptr unk_4DF2A, 0 ;~ 2F3D:0113
cs=0x2f3d;eip=0x000118; 	T(CMP(si, 8));	// 100647 cmp     si, 8 ;~ 2F3D:0118
cs=0x2f3d;eip=0x00011b; 	R(JGE(loc_3dad4));	// 100648 jge     short loc_3DAD4 ;~ 2F3D:011B
cs=0x2f3d;eip=0x00011d; 	X(MOV(unk_4df3f, 0));	// 100649 mov     byte ptr unk_4DF3F, 0 ;~ 2F3D:011D
cs=0x2f3d;eip=0x000122; 	R(JMP(loc_3db0f));	// 100650 jmp     short loc_3DB0F ;~ 2F3D:0122
loc_3dad4:
	// 10778 
cs=0x2f3d;eip=0x000124; 	T(TEST(si, 1));	// 100654 test    si, 1 ;~ 2F3D:0124
cs=0x2f3d;eip=0x000128; 	R(JZ(loc_3dae1));	// 100655 jz      short loc_3DAE1 ;~ 2F3D:0128
cs=0x2f3d;eip=0x00012a; 	X(MOV(unk_4df20, 0));	// 100656 mov     byte ptr unk_4DF20, 0 ;~ 2F3D:012A
cs=0x2f3d;eip=0x00012f; 	R(JMP(loc_3db0f));	// 100657 jmp     short loc_3DB0F ;~ 2F3D:012F
loc_3dae1:
	// 10779 
cs=0x2f3d;eip=0x000131; 	X(MOV(unk_4df16, 0));	// 100661 mov     byte ptr unk_4DF16, 0 ;~ 2F3D:0131
cs=0x2f3d;eip=0x000136; 	R(JMP(loc_3db0f));	// 100662 jmp     short loc_3DB0F ;~ 2F3D:0136
loc_3dae8:
	// 10780 
cs=0x2f3d;eip=0x000138; 	T(CMP(si, 8));	// 100666 cmp     si, 8 ;~ 2F3D:0138
cs=0x2f3d;eip=0x00013b; 	R(JGE(loc_3daf7));	// 100667 jge     short loc_3DAF7 ;~ 2F3D:013B
cs=0x2f3d;eip=0x00013d; 	T(SUB(al, al));	// 100668 sub     al, al ;~ 2F3D:013D
cs=0x2f3d;eip=0x00013f; 	X(MOV(unk_4df3f, al));	// 100669 mov     byte ptr unk_4DF3F, al ;~ 2F3D:013F
cs=0x2f3d;eip=0x000142; 	X(MOV(unk_4df2a, al));	// 100670 mov     byte ptr unk_4DF2A, al ;~ 2F3D:0142
cs=0x2f3d;eip=0x000145; 	R(JMP(loc_3db0f));	// 100671 jmp     short loc_3DB0F ;~ 2F3D:0145
loc_3daf7:
	// 10781 
cs=0x2f3d;eip=0x000147; 	T(TEST(si, 1));	// 100675 test    si, 1 ;~ 2F3D:0147
cs=0x2f3d;eip=0x00014b; 	R(JZ(loc_3db07));	// 100676 jz      short loc_3DB07 ;~ 2F3D:014B
cs=0x2f3d;eip=0x00014d; 	T(SUB(al, al));	// 100677 sub     al, al ;~ 2F3D:014D
cs=0x2f3d;eip=0x00014f; 	X(MOV(unk_4df20, al));	// 100678 mov     byte ptr unk_4DF20, al ;~ 2F3D:014F
cs=0x2f3d;eip=0x000152; 	X(MOV(unk_4df02, al));	// 100679 mov     byte ptr unk_4DF02, al ;~ 2F3D:0152
cs=0x2f3d;eip=0x000155; 	R(JMP(loc_3db0f));	// 100680 jmp     short loc_3DB0F ;~ 2F3D:0155
loc_3db07:
	// 10782 
cs=0x2f3d;eip=0x000157; 	T(SUB(al, al));	// 100684 sub     al, al ;~ 2F3D:0157
cs=0x2f3d;eip=0x000159; 	X(MOV(unk_4df16, al));	// 100685 mov     byte ptr unk_4DF16, al ;~ 2F3D:0159
cs=0x2f3d;eip=0x00015c; 	X(MOV(unk_4df0c, al));	// 100686 mov     byte ptr unk_4DF0C, al ;~ 2F3D:015C
loc_3db0f:
	// 10783 
cs=0x2f3d;eip=0x00015f; 	X(POP(si));	// 100690 pop     si ;~ 2F3D:015F
cs=0x2f3d;eip=0x000160; 	X(POP(di));	// 100691 pop     di ;~ 2F3D:0160
cs=0x2f3d;eip=0x000161; 	T(MOV(sp, bp));	// 100692 mov     sp, bp ;~ 2F3D:0161
cs=0x2f3d;eip=0x000163; 	X(POP(bp));	// 100693 pop     bp ;~ 2F3D:0163
cs=0x2f3d;eip=0x000164; 	R(RETN(0));	// 100694 retn ;~ 2F3D:0164
sub_3db15:
	// 100701 
cs=0x2f3d;eip=0x000165; 	X(MOV(*(dw*)((&unk_4bd2e)), 0x2D0));	// 100702 mov     word ptr unk_4BD2E, 2D0h ;~ 2F3D:0165
cs=0x2f3d;eip=0x00016b; 	X(MOV(*(dw*)((&unk_4b07a)), 0));	// 100703 mov     word ptr unk_4B07A, 0 ;~ 2F3D:016B
cs=0x2f3d;eip=0x000171; 	R(RETF(0));	// 100704 retf ;~ 2F3D:0171
sub_3db22:
	// 100712 
#undef var_4
#define var_4 -4
	// 100715 var_4           = word ptr -4 ;~ 2F3D:0172
#undef var_2
#define var_2 -2
	// 100716 var_2           = word ptr -2 ;~ 2F3D:0172
cs=0x2f3d;eip=0x000172; 	X(PUSH(bp));	// 100718 push    bp ;~ 2F3D:0172
cs=0x2f3d;eip=0x000173; 	T(MOV(bp, sp));	// 100719 mov     bp, sp ;~ 2F3D:0173
cs=0x2f3d;eip=0x000175; 	T(SUB(sp, 4));	// 100720 sub     sp, 4 ;~ 2F3D:0175
cs=0x2f3d;eip=0x000178; 	R(CALL(sub_3da51,0));	// 100721 call    sub_3DA51 ;~ 2F3D:0178
cs=0x2f3d;eip=0x00017b; 	X(INC(unk_4b07c));	// 100722 inc     byte ptr unk_4B07C ;~ 2F3D:017B
cs=0x2f3d;eip=0x00017f; 	T(CMP(unk_4b07c, 2));	// 100723 cmp     byte ptr unk_4B07C, 2 ;~ 2F3D:017F
cs=0x2f3d;eip=0x000184; 	R(JC(loc_3db3b));	// 100724 jb      short loc_3DB3B ;~ 2F3D:0184
cs=0x2f3d;eip=0x000186; 	X(MOV(unk_4b07c, 0));	// 100725 mov     byte ptr unk_4B07C, 0 ;~ 2F3D:0186
loc_3db3b:
	// 10784 
cs=0x2f3d;eip=0x00018b; 	X(INC(unk_4b07d));	// 100728 inc     byte ptr unk_4B07D ;~ 2F3D:018B
cs=0x2f3d;eip=0x00018f; 	T(CMP(unk_4b07d, 3));	// 100729 cmp     byte ptr unk_4B07D, 3 ;~ 2F3D:018F
cs=0x2f3d;eip=0x000194; 	R(JC(loc_3db4b));	// 100730 jb      short loc_3DB4B ;~ 2F3D:0194
cs=0x2f3d;eip=0x000196; 	X(MOV(unk_4b07d, 0));	// 100731 mov     byte ptr unk_4B07D, 0 ;~ 2F3D:0196
loc_3db4b:
	// 10785 
cs=0x2f3d;eip=0x00019b; 	T(CMP(unk_57041, 2));	// 100734 cmp     byte ptr unk_57041, 2 ;~ 2F3D:019B
cs=0x2f3d;eip=0x0001a0; 	R(JNZ(loc_3db61));	// 100735 jnz     short loc_3DB61 ;~ 2F3D:01A0
cs=0x2f3d;eip=0x0001a2; 	T(MOV(ax, 0x58FD));	// 100736 mov     ax, 58FDh ;~ 2F3D:01A2
cs=0x2f3d;eip=0x0001a5; 	X(PUSH(ax));	// 100737 push    ax ;~ 2F3D:01A5
cs=0x2f3d;eip=0x0001a6; 	T(MOV(ax, 0x78));	// 100738 mov     ax, 78h ; 'x' ;~ 2F3D:01A6
cs=0x2f3d;eip=0x0001a9; 	X(PUSH(ax));	// 100739 push    ax ;~ 2F3D:01A9
cs=0x2f3d;eip=0x0001aa; 	R(CALLF(sub_24cde,0));	// 100740 call    sub_24CDE ;~ 2F3D:01AA
cs=0x2f3d;eip=0x0001af; 	R(JMP(loc_3db67));	// 100741 jmp     short loc_3DB67 ;~ 2F3D:01AF
loc_3db61:
	// 10786 
cs=0x2f3d;eip=0x0001b1; 	X(MOV(*(dw*)((&unk_4d2ad)), 0));	// 100745 mov     word ptr unk_4D2AD, 0 ;~ 2F3D:01B1
loc_3db67:
	// 10787 
cs=0x2f3d;eip=0x0001b7; 	T(MOV(ax, *(dw*)((&unk_4d2ad))));	// 100748 mov     ax, word ptr unk_4D2AD ;~ 2F3D:01B7
cs=0x2f3d;eip=0x0001ba; 	X(MOV(*(dw*)((&unk_51b92)), ax));	// 100749 mov     word ptr unk_51B92, ax ;~ 2F3D:01BA
cs=0x2f3d;eip=0x0001bd; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 100750 cmp     word ptr unk_47AB2, 3 ;~ 2F3D:01BD
cs=0x2f3d;eip=0x0001c2; 	R(JZ(loc_3db77));	// 100751 jz      short loc_3DB77 ;~ 2F3D:01C2
cs=0x2f3d;eip=0x0001c4; 	R(JMP(loc_3dcde));	// 100752 jmp     loc_3DCDE ;~ 2F3D:01C4
loc_3db77:
	// 10788 
cs=0x2f3d;eip=0x0001c7; 	T(CMP(*(dw*)((&unk_56fd8)), 0));	// 100756 cmp     word ptr unk_56FD8, 0 ;~ 2F3D:01C7
cs=0x2f3d;eip=0x0001cc; 	R(JNZ(loc_3db87));	// 100757 jnz     short loc_3DB87 ;~ 2F3D:01CC
cs=0x2f3d;eip=0x0001ce; 	X(MOV(*(dw*)((&unk_4bd2e)), 0x2D0));	// 100758 mov     word ptr unk_4BD2E, 2D0h ;~ 2F3D:01CE
cs=0x2f3d;eip=0x0001d4; 	R(JMP(loc_3dcde));	// 100759 jmp     loc_3DCDE ;~ 2F3D:01D4
loc_3db87:
	// 10789 
cs=0x2f3d;eip=0x0001d7; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 100763 les     bx, dword ptr unk_56FD6 ;~ 2F3D:01D7
cs=0x2f3d;eip=0x0001db; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 100764 cmp     word ptr es:[bx+306h], 1 ;~ 2F3D:01DB
cs=0x2f3d;eip=0x0001e1; 	R(JNZ(loc_3db9f));	// 100765 jnz     short loc_3DB9F ;~ 2F3D:01E1
cs=0x2f3d;eip=0x0001e3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 100766 mov     ax, es:[bx+32Ch] ;~ 2F3D:01E3
cs=0x2f3d;eip=0x0001e8; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 100767 or      ax, es:[bx+32Eh] ;~ 2F3D:01E8
cs=0x2f3d;eip=0x0001ed; 	R(JZ(loc_3dbb9));	// 100768 jz      short loc_3DBB9 ;~ 2F3D:01ED
loc_3db9f:
	// 10790 
cs=0x2f3d;eip=0x0001ef; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 100771 cmp     word ptr es:[bx+306h], 2 ;~ 2F3D:01EF
cs=0x2f3d;eip=0x0001f5; 	R(JZ(loc_3dbaa));	// 100772 jz      short loc_3DBAA ;~ 2F3D:01F5
cs=0x2f3d;eip=0x0001f7; 	R(JMP(loc_3dca6));	// 100773 jmp     loc_3DCA6 ;~ 2F3D:01F7
loc_3dbaa:
	// 10791 
cs=0x2f3d;eip=0x0001fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 100777 mov     ax, es:[bx+32Ch] ;~ 2F3D:01FA
cs=0x2f3d;eip=0x0001ff; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 100778 or      ax, es:[bx+32Eh] ;~ 2F3D:01FF
cs=0x2f3d;eip=0x000204; 	R(JNZ(loc_3dbb9));	// 100779 jnz     short loc_3DBB9 ;~ 2F3D:0204
cs=0x2f3d;eip=0x000206; 	R(JMP(loc_3dca6));	// 100780 jmp     loc_3DCA6 ;~ 2F3D:0206
loc_3dbb9:
	// 10792 
cs=0x2f3d;eip=0x000209; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 100785 cmp     word ptr es:[bx+332h], 1 ;~ 2F3D:0209
cs=0x2f3d;eip=0x00020f; 	R(JNZ(loc_3dbe5));	// 100786 jnz     short loc_3DBE5 ;~ 2F3D:020F
cs=0x2f3d;eip=0x000211; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 100787 mov     dx, word ptr unk_47A9A ;~ 2F3D:0211
cs=0x2f3d;eip=0x000215; 	T(MOV(ax, *(dw*)((&unk_56fbf))));	// 100788 mov     ax, word ptr unk_56FBF ;~ 2F3D:0215
cs=0x2f3d;eip=0x000218; 	T(MOV(es, dx));	// 100789 mov     es, dx ;~ 2F3D:0218
cs=0x2f3d;eip=0x00021a; 	T(MOV(bx, ax));	// 100791 mov     bx, ax ;~ 2F3D:021A
cs=0x2f3d;eip=0x00021c; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), 0));	// 100792 cmp     word ptr es:[bx+1Ch], 0 ;~ 2F3D:021C
cs=0x2f3d;eip=0x000221; 	R(JG(loc_3dbe5));	// 100793 jg      short loc_3DBE5 ;~ 2F3D:0221
cs=0x2f3d;eip=0x000223; 	R(JL(loc_3dbdd));	// 100794 jl      short loc_3DBDD ;~ 2F3D:0223
cs=0x2f3d;eip=0x000225; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), 0x1E00));	// 100795 cmp     word ptr es:[bx+1Ah], 1E00h ;~ 2F3D:0225
cs=0x2f3d;eip=0x00022b; 	R(JNC(loc_3dbe5));	// 100796 jnb     short loc_3DBE5 ;~ 2F3D:022B
loc_3dbdd:
	// 10793 
cs=0x2f3d;eip=0x00022d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x2D0));	// 100799 mov     [bp+var_2], 2D0h ;~ 2F3D:022D
cs=0x2f3d;eip=0x000232; 	R(JMP(loc_3dcab));	// 100800 jmp     loc_3DCAB ;~ 2F3D:0232
loc_3dbe5:
	// 10794 
cs=0x2f3d;eip=0x000235; 	T(CMP(unk_57113, 0));	// 100805 cmp     byte ptr unk_57113, 0 ;~ 2F3D:0235
cs=0x2f3d;eip=0x00023a; 	R(JZ(loc_3dc22));	// 100806 jz      short loc_3DC22 ;~ 2F3D:023A
cs=0x2f3d;eip=0x00023c; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 100807 les     bx, dword ptr unk_56FD6 ;~ 2F3D:023C
cs=0x2f3d;eip=0x000240; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 100809 mov     ax, es:[bx+138h] ;~ 2F3D:0240
cs=0x2f3d;eip=0x000245; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 100810 mov     dx, es:[bx+13Ah] ;~ 2F3D:0245
cs=0x2f3d;eip=0x00024a; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 100811 cmp     es:[bx+122h], dx ;~ 2F3D:024A
cs=0x2f3d;eip=0x00024f; 	R(JL(loc_3dc0f));	// 100812 jl      short loc_3DC0F ;~ 2F3D:024F
cs=0x2f3d;eip=0x000251; 	R(JG(loc_3dc0a));	// 100813 jg      short loc_3DC0A ;~ 2F3D:0251
cs=0x2f3d;eip=0x000253; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 100814 cmp     es:[bx+120h], ax ;~ 2F3D:0253
cs=0x2f3d;eip=0x000258; 	R(JC(loc_3dc0f));	// 100815 jb      short loc_3DC0F ;~ 2F3D:0258
loc_3dc0a:
	// 10795 
cs=0x2f3d;eip=0x00025a; 	T(MOV(ax, 1));	// 100818 mov     ax, 1 ;~ 2F3D:025A
cs=0x2f3d;eip=0x00025d; 	R(JMP(loc_3dc11));	// 100819 jmp     short loc_3DC11 ;~ 2F3D:025D
loc_3dc0f:
	// 10796 
cs=0x2f3d;eip=0x00025f; 	T(SUB(ax, ax));	// 100824 sub     ax, ax ;~ 2F3D:025F
loc_3dc11:
	// 10797 
cs=0x2f3d;eip=0x000261; 	T(OR(ax, ax));	// 100827 or      ax, ax ;~ 2F3D:0261
cs=0x2f3d;eip=0x000263; 	R(JNZ(loc_3dc22));	// 100828 jnz     short loc_3DC22 ;~ 2F3D:0263
cs=0x2f3d;eip=0x000265; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100829 les     bx, dword ptr unk_47AD0 ;~ 2F3D:0265
cs=0x2f3d;eip=0x000269; 	T(MOV(ax, 0x2D0));	// 100830 mov     ax, 2D0h ;~ 2F3D:0269
loc_3dc1c:
	// 10798 
cs=0x2f3d;eip=0x00026c; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x14))));	// 100833 sub     ax, es:[bx+14h] ;~ 2F3D:026C
cs=0x2f3d;eip=0x000270; 	R(JMP(loc_3dc7b));	// 100834 jmp     short loc_3DC7B ;~ 2F3D:0270
loc_3dc22:
	// 10799 
cs=0x2f3d;eip=0x000272; 	X(PUSH(*(dw*)((&unk_56488))));	// 100839 push    word ptr unk_56488 ;~ 2F3D:0272
cs=0x2f3d;eip=0x000276; 	T(MOV(ax, 0x2D0));	// 100840 mov     ax, 2D0h ;~ 2F3D:0276
cs=0x2f3d;eip=0x000279; 	X(PUSH(ax));	// 100841 push    ax ;~ 2F3D:0279
cs=0x2f3d;eip=0x00027a; 	T(MOV(ax, 0x0FF9C));	// 100842 mov     ax, 0FF9Ch ;~ 2F3D:027A
cs=0x2f3d;eip=0x00027d; 	X(PUSH(ax));	// 100843 push    ax ;~ 2F3D:027D
cs=0x2f3d;eip=0x00027e; 	R(CALLF(sub_2f01c,0));	// 100844 call    sub_2F01C ;~ 2F3D:027E
cs=0x2f3d;eip=0x000283; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 100845 mov     [bp+var_2], ax ;~ 2F3D:0283
cs=0x2f3d;eip=0x000286; 	T(CMP(ax, 0x0F0));	// 100846 cmp     ax, 0F0h ; 'ğ' ;~ 2F3D:0286
cs=0x2f3d;eip=0x000289; 	R(JLE(loc_3dc40));	// 100847 jle     short loc_3DC40 ;~ 2F3D:0289
cs=0x2f3d;eip=0x00028b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0F0));	// 100848 mov     [bp+var_2], 0F0h ; 'ğ' ;~ 2F3D:028B
loc_3dc40:
	// 10800 
cs=0x2f3d;eip=0x000290; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0FF10));	// 100851 cmp     [bp+var_2], 0FF10h ;~ 2F3D:0290
cs=0x2f3d;eip=0x000295; 	R(JGE(loc_3dc4c));	// 100852 jge     short loc_3DC4C ;~ 2F3D:0295
cs=0x2f3d;eip=0x000297; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FF10));	// 100853 mov     [bp+var_2], 0FF10h ;~ 2F3D:0297
loc_3dc4c:
	// 10801 
cs=0x2f3d;eip=0x00029c; 	T(MOV(ax, 0x2D0));	// 100856 mov     ax, 2D0h ;~ 2F3D:029C
cs=0x2f3d;eip=0x00029f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2))));	// 100857 sub     ax, [bp+var_2] ;~ 2F3D:029F
cs=0x2f3d;eip=0x0002a2; 	X(PUSH(ax));	// 100858 push    ax ;~ 2F3D:02A2
cs=0x2f3d;eip=0x0002a3; 	R(CALLF(sub_24cf8,0));	// 100859 call    sub_24CF8 ;~ 2F3D:02A3
cs=0x2f3d;eip=0x0002a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 100860 mov     [bp+var_2], ax ;~ 2F3D:02A8
cs=0x2f3d;eip=0x0002ab; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100861 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02AB
cs=0x2f3d;eip=0x0002af; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 100862 mov     ax, es:[bx+14h] ;~ 2F3D:02AF
cs=0x2f3d;eip=0x0002b3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 100863 add     ax, [bp+var_2] ;~ 2F3D:02B3
cs=0x2f3d;eip=0x0002b6; 	X(PUSH(ax));	// 100864 push    ax ;~ 2F3D:02B6
cs=0x2f3d;eip=0x0002b7; 	R(CALLF(sub_24cf8,0));	// 100865 call    sub_24CF8 ;~ 2F3D:02B7
cs=0x2f3d;eip=0x0002bc; 	T(CMP(ax, 0x870));	// 100866 cmp     ax, 870h ;~ 2F3D:02BC
cs=0x2f3d;eip=0x0002bf; 	R(JLE(loc_3dc86));	// 100867 jle     short loc_3DC86 ;~ 2F3D:02BF
cs=0x2f3d;eip=0x0002c1; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100868 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02C1
cs=0x2f3d;eip=0x0002c5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 100869 mov     ax, es:[bx+14h] ;~ 2F3D:02C5
cs=0x2f3d;eip=0x0002c9; 	T(NEG(ax));	// 100870 neg     ax ;~ 2F3D:02C9
loc_3dc7b:
	// 10802 
cs=0x2f3d;eip=0x0002cb; 	X(PUSH(ax));	// 100873 push    ax ;~ 2F3D:02CB
cs=0x2f3d;eip=0x0002cc; 	R(CALLF(sub_24cf8,0));	// 100874 call    sub_24CF8 ;~ 2F3D:02CC
cs=0x2f3d;eip=0x0002d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 100875 mov     [bp+var_2], ax ;~ 2F3D:02D1
cs=0x2f3d;eip=0x0002d4; 	R(JMP(loc_3dcab));	// 100876 jmp     short loc_3DCAB ;~ 2F3D:02D4
loc_3dc86:
	// 10803 
cs=0x2f3d;eip=0x0002d6; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100880 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02D6
cs=0x2f3d;eip=0x0002da; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 100881 mov     ax, es:[bx+14h] ;~ 2F3D:02DA
cs=0x2f3d;eip=0x0002de; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 100882 add     ax, [bp+var_2] ;~ 2F3D:02DE
cs=0x2f3d;eip=0x0002e1; 	X(PUSH(ax));	// 100883 push    ax ;~ 2F3D:02E1
cs=0x2f3d;eip=0x0002e2; 	R(CALLF(sub_24cf8,0));	// 100884 call    sub_24CF8 ;~ 2F3D:02E2
cs=0x2f3d;eip=0x0002e7; 	T(CMP(ax, 0x5A0));	// 100885 cmp     ax, 5A0h ;~ 2F3D:02E7
cs=0x2f3d;eip=0x0002ea; 	R(JLE(loc_3dcab));	// 100886 jle     short loc_3DCAB ;~ 2F3D:02EA
cs=0x2f3d;eip=0x0002ec; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100887 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02EC
cs=0x2f3d;eip=0x0002f0; 	T(MOV(ax, 0x5A0));	// 100888 mov     ax, 5A0h ;~ 2F3D:02F0
cs=0x2f3d;eip=0x0002f3; 	R(JMP(loc_3dc1c));	// 100889 jmp     loc_3DC1C ;~ 2F3D:02F3
loc_3dca6:
	// 10804 
cs=0x2f3d;eip=0x0002f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 100894 mov     [bp+var_2], 0 ;~ 2F3D:02F6
loc_3dcab:
	// 10805 
cs=0x2f3d;eip=0x0002fb; 	T(MOV(ax, 0x168));	// 100898 mov     ax, 168h ;~ 2F3D:02FB
cs=0x2f3d;eip=0x0002fe; 	X(PUSH(ax));	// 100899 push    ax ;~ 2F3D:02FE
cs=0x2f3d;eip=0x0002ff; 	T(MOV(ax, word_5705a));	// 100900 mov     ax, word_5705A ;~ 2F3D:02FF
cs=0x2f3d;eip=0x000302; 	T(SUB(ax, *(dw*)((&unk_4b07a))));	// 100901 sub     ax, word ptr unk_4B07A ;~ 2F3D:0302
cs=0x2f3d;eip=0x000306; 	X(PUSH(ax));	// 100902 push    ax ;~ 2F3D:0306
cs=0x2f3d;eip=0x000307; 	R(CALLF(sub_2f002,0));	// 100903 call    sub_2F002 ;~ 2F3D:0307
cs=0x2f3d;eip=0x00030c; 	T(MOV(cl, 8));	// 100904 mov     cl, 8 ;~ 2F3D:030C
cs=0x2f3d;eip=0x00030e; 	R(CALLF(sub_10240,0));	// 100905 call    sub_10240 ;~ 2F3D:030E
cs=0x2f3d;eip=0x000313; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 100906 mov     [bp+var_4], ax ;~ 2F3D:0313
cs=0x2f3d;eip=0x000316; 	T(MOV(ax, word_5705a));	// 100907 mov     ax, word_5705A ;~ 2F3D:0316
cs=0x2f3d;eip=0x000319; 	X(MOV(*(dw*)((&unk_4b07a)), ax));	// 100908 mov     word ptr unk_4B07A, ax ;~ 2F3D:0319
cs=0x2f3d;eip=0x00031c; 	X(PUSH(*(dw*)((&unk_4bd2e))));	// 100909 push    word ptr unk_4BD2E ;~ 2F3D:031C
cs=0x2f3d;eip=0x000320; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 100910 push    [bp+var_2] ;~ 2F3D:0320
cs=0x2f3d;eip=0x000323; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 100911 push    [bp+var_4] ;~ 2F3D:0323
cs=0x2f3d;eip=0x000326; 	R(CALLF(sub_13561,0));	// 100912 call    sub_13561 ;~ 2F3D:0326
cs=0x2f3d;eip=0x00032b; 	X(MOV(*(dw*)((&unk_4bd2e)), ax));	// 100913 mov     word ptr unk_4BD2E, ax ;~ 2F3D:032B
loc_3dcde:
	// 10806 
cs=0x2f3d;eip=0x00032e; 	T(MOV(ax, *(dw*)((&unk_4bd2e))));	// 100917 mov     ax, word ptr unk_4BD2E ;~ 2F3D:032E
cs=0x2f3d;eip=0x000331; 	X(MOV(*(dw*)((&unk_4b7e0)), ax));	// 100918 mov     word ptr unk_4B7E0, ax ;~ 2F3D:0331
cs=0x2f3d;eip=0x000334; 	T(MOV(al, 1));	// 100919 mov     al, 1 ;~ 2F3D:0334
cs=0x2f3d;eip=0x000336; 	X(MOV(unk_4ffce, al));	// 100920 mov     byte ptr unk_4FFCE, al ;~ 2F3D:0336
cs=0x2f3d;eip=0x000339; 	X(MOV(unk_4ffc6, al));	// 100921 mov     byte ptr unk_4FFC6, al ;~ 2F3D:0339
cs=0x2f3d;eip=0x00033c; 	X(MOV(unk_4ffbe, al));	// 100922 mov     byte ptr unk_4FFBE, al ;~ 2F3D:033C
cs=0x2f3d;eip=0x00033f; 	X(MOV(unk_4ffa8, al));	// 100923 mov     byte ptr unk_4FFA8, al ;~ 2F3D:033F
cs=0x2f3d;eip=0x000342; 	X(MOV(unk_4ffa0, al));	// 100924 mov     byte ptr unk_4FFA0, al ;~ 2F3D:0342
cs=0x2f3d;eip=0x000345; 	X(MOV(unk_4ff98, al));	// 100925 mov     byte ptr unk_4FF98, al ;~ 2F3D:0345
cs=0x2f3d;eip=0x000348; 	X(MOV(unk_4f567, al));	// 100926 mov     byte ptr unk_4F567, al ;~ 2F3D:0348
cs=0x2f3d;eip=0x00034b; 	X(MOV(unk_4f571, al));	// 100927 mov     byte ptr unk_4F571, al ;~ 2F3D:034B
cs=0x2f3d;eip=0x00034e; 	X(MOV(unk_4f57b, al));	// 100928 mov     byte ptr unk_4F57B, al ;~ 2F3D:034E
cs=0x2f3d;eip=0x000351; 	X(MOV(unk_510f7, al));	// 100929 mov     byte ptr unk_510F7, al ;~ 2F3D:0351
cs=0x2f3d;eip=0x000354; 	X(MOV(unk_510eb, al));	// 100930 mov     byte ptr unk_510EB, al ;~ 2F3D:0354
cs=0x2f3d;eip=0x000357; 	X(MOV(unk_510df, al));	// 100931 mov     byte ptr unk_510DF, al ;~ 2F3D:0357
cs=0x2f3d;eip=0x00035a; 	X(MOV(unk_4e627, al));	// 100932 mov     byte ptr unk_4E627, al ;~ 2F3D:035A
cs=0x2f3d;eip=0x00035d; 	X(MOV(unk_4e633, al));	// 100933 mov     byte ptr unk_4E633, al ;~ 2F3D:035D
cs=0x2f3d;eip=0x000360; 	X(MOV(unk_4e63f, al));	// 100934 mov     byte ptr unk_4E63F, al ;~ 2F3D:0360
cs=0x2f3d;eip=0x000363; 	X(MOV(unk_4b4f8, al));	// 100935 mov     byte ptr unk_4B4F8, al ;~ 2F3D:0363
cs=0x2f3d;eip=0x000366; 	X(MOV(unk_4b502, al));	// 100936 mov     byte ptr unk_4B502, al ;~ 2F3D:0366
cs=0x2f3d;eip=0x000369; 	X(MOV(unk_4b50c, al));	// 100937 mov     byte ptr unk_4B50C, al ;~ 2F3D:0369
cs=0x2f3d;eip=0x00036c; 	X(MOV(unk_5091a, al));	// 100938 mov     byte ptr unk_5091A, al ;~ 2F3D:036C
cs=0x2f3d;eip=0x00036f; 	X(MOV(unk_5090e, al));	// 100939 mov     byte ptr unk_5090E, al ;~ 2F3D:036F
cs=0x2f3d;eip=0x000372; 	X(MOV(unk_50902, al));	// 100940 mov     byte ptr unk_50902, al ;~ 2F3D:0372
cs=0x2f3d;eip=0x000375; 	X(MOV(unk_4db4d, al));	// 100941 mov     byte ptr unk_4DB4D, al ;~ 2F3D:0375
cs=0x2f3d;eip=0x000378; 	X(MOV(unk_4db3c, al));	// 100942 mov     byte ptr unk_4DB3C, al ;~ 2F3D:0378
cs=0x2f3d;eip=0x00037b; 	X(MOV(unk_4db32, al));	// 100943 mov     byte ptr unk_4DB32, al ;~ 2F3D:037B
cs=0x2f3d;eip=0x00037e; 	X(MOV(unk_4bdf6, al));	// 100944 mov     byte ptr unk_4BDF6, al ;~ 2F3D:037E
cs=0x2f3d;eip=0x000381; 	X(MOV(unk_4bdfe, al));	// 100945 mov     byte ptr unk_4BDFE, al ;~ 2F3D:0381
cs=0x2f3d;eip=0x000384; 	X(MOV(unk_4be06, al));	// 100946 mov     byte ptr unk_4BE06, al ;~ 2F3D:0384
cs=0x2f3d;eip=0x000387; 	X(MOV(unk_4bd3c, al));	// 100947 mov     byte ptr unk_4BD3C, al ;~ 2F3D:0387
cs=0x2f3d;eip=0x00038a; 	X(MOV(unk_4bd44, al));	// 100948 mov     byte ptr unk_4BD44, al ;~ 2F3D:038A
cs=0x2f3d;eip=0x00038d; 	X(MOV(unk_4bd4c, al));	// 100949 mov     byte ptr unk_4BD4C, al ;~ 2F3D:038D
cs=0x2f3d;eip=0x000390; 	T(MOV(al, unk_4b07d));	// 100950 mov     al, byte ptr unk_4B07D ;~ 2F3D:0390
cs=0x2f3d;eip=0x000393; 	T(SUB(ah, ah));	// 100951 sub     ah, ah ;~ 2F3D:0393
cs=0x2f3d;eip=0x000395; 	T(OR(ax, ax));	// 100952 or      ax, ax ;~ 2F3D:0395
cs=0x2f3d;eip=0x000397; 	R(JZ(loc_3dd55));	// 100953 jz      short loc_3DD55 ;~ 2F3D:0397
cs=0x2f3d;eip=0x000399; 	T(CMP(ax, 1));	// 100954 cmp     ax, 1 ;~ 2F3D:0399
cs=0x2f3d;eip=0x00039c; 	R(JZ(loc_3dda6));	// 100955 jz      short loc_3DDA6 ;~ 2F3D:039C
cs=0x2f3d;eip=0x00039e; 	T(CMP(ax, 2));	// 100956 cmp     ax, 2 ;~ 2F3D:039E
cs=0x2f3d;eip=0x0003a1; 	R(JZ(loc_3ddc8));	// 100957 jz      short loc_3DDC8 ;~ 2F3D:03A1
cs=0x2f3d;eip=0x0003a3; 	R(JMP(loc_3dd75));	// 100958 jmp     short loc_3DD75 ;~ 2F3D:03A3
loc_3dd55:
	// 10807 
cs=0x2f3d;eip=0x0003a5; 	T(MOV(al, 3));	// 100962 mov     al, 3 ;~ 2F3D:03A5
cs=0x2f3d;eip=0x0003a7; 	X(MOV(unk_4ffbe, al));	// 100963 mov     byte ptr unk_4FFBE, al ;~ 2F3D:03A7
cs=0x2f3d;eip=0x0003aa; 	X(MOV(unk_4ff98, al));	// 100964 mov     byte ptr unk_4FF98, al ;~ 2F3D:03AA
cs=0x2f3d;eip=0x0003ad; 	X(MOV(unk_4f57b, al));	// 100965 mov     byte ptr unk_4F57B, al ;~ 2F3D:03AD
cs=0x2f3d;eip=0x0003b0; 	X(MOV(unk_510df, al));	// 100966 mov     byte ptr unk_510DF, al ;~ 2F3D:03B0
cs=0x2f3d;eip=0x0003b3; 	X(MOV(unk_4e63f, al));	// 100967 mov     byte ptr unk_4E63F, al ;~ 2F3D:03B3
cs=0x2f3d;eip=0x0003b6; 	X(MOV(unk_4b50c, al));	// 100968 mov     byte ptr unk_4B50C, al ;~ 2F3D:03B6
cs=0x2f3d;eip=0x0003b9; 	X(MOV(unk_50902, al));	// 100969 mov     byte ptr unk_50902, al ;~ 2F3D:03B9
cs=0x2f3d;eip=0x0003bc; 	X(MOV(unk_4db32, al));	// 100970 mov     byte ptr unk_4DB32, al ;~ 2F3D:03BC
cs=0x2f3d;eip=0x0003bf; 	X(MOV(unk_4be06, al));	// 100971 mov     byte ptr unk_4BE06, al ;~ 2F3D:03BF
cs=0x2f3d;eip=0x0003c2; 	X(MOV(unk_4bd4c, al));	// 100972 mov     byte ptr unk_4BD4C, al ;~ 2F3D:03C2
loc_3dd75:
	// 10808 
cs=0x2f3d;eip=0x0003c5; 	T(CMP(unk_4b07c, 0));	// 100976 cmp     byte ptr unk_4B07C, 0 ;~ 2F3D:03C5
cs=0x2f3d;eip=0x0003ca; 	R(JNZ(loc_3ddea));	// 100977 jnz     short loc_3DDEA ;~ 2F3D:03CA
cs=0x2f3d;eip=0x0003cc; 	T(MOV(al, 3));	// 100978 mov     al, 3 ;~ 2F3D:03CC
cs=0x2f3d;eip=0x0003ce; 	X(MOV(unk_4de51, al));	// 100979 mov     byte ptr unk_4DE51, al ;~ 2F3D:03CE
cs=0x2f3d;eip=0x0003d1; 	X(MOV(unk_4f47d, al));	// 100980 mov     byte ptr unk_4F47D, al ;~ 2F3D:03D1
cs=0x2f3d;eip=0x0003d4; 	X(MOV(unk_5100c, al));	// 100981 mov     byte ptr unk_5100C, al ;~ 2F3D:03D4
cs=0x2f3d;eip=0x0003d7; 	X(MOV(unk_4e4fe, al));	// 100982 mov     byte ptr unk_4E4FE, al ;~ 2F3D:03D7
cs=0x2f3d;eip=0x0003da; 	X(MOV(unk_5087a, al));	// 100983 mov     byte ptr unk_5087A, al ;~ 2F3D:03DA
cs=0x2f3d;eip=0x0003dd; 	X(MOV(unk_4dbe6, al));	// 100984 mov     byte ptr unk_4DBE6, al ;~ 2F3D:03DD
cs=0x2f3d;eip=0x0003e0; 	T(MOV(al, 1));	// 100985 mov     al, 1 ;~ 2F3D:03E0
cs=0x2f3d;eip=0x0003e2; 	X(MOV(unk_4de4b, al));	// 100986 mov     byte ptr unk_4DE4B, al ;~ 2F3D:03E2
cs=0x2f3d;eip=0x0003e5; 	X(MOV(unk_4f477, al));	// 100987 mov     byte ptr unk_4F477, al ;~ 2F3D:03E5
cs=0x2f3d;eip=0x0003e8; 	X(MOV(unk_51012, al));	// 100988 mov     byte ptr unk_51012, al ;~ 2F3D:03E8
cs=0x2f3d;eip=0x0003eb; 	X(MOV(unk_4e4f6, al));	// 100989 mov     byte ptr unk_4E4F6, al ;~ 2F3D:03EB
cs=0x2f3d;eip=0x0003ee; 	X(MOV(unk_50874, al));	// 100990 mov     byte ptr unk_50874, al ;~ 2F3D:03EE
cs=0x2f3d;eip=0x0003f1; 	X(MOV(unk_4dbe0, al));	// 100991 mov     byte ptr unk_4DBE0, al ;~ 2F3D:03F1
cs=0x2f3d;eip=0x0003f4; 	R(JMP(loc_3de12));	// 100992 jmp     short loc_3DE12 ;~ 2F3D:03F4
loc_3dda6:
	// 10809 
cs=0x2f3d;eip=0x0003f6; 	T(MOV(al, 3));	// 100996 mov     al, 3 ;~ 2F3D:03F6
cs=0x2f3d;eip=0x0003f8; 	X(MOV(unk_4ffc6, al));	// 100997 mov     byte ptr unk_4FFC6, al ;~ 2F3D:03F8
cs=0x2f3d;eip=0x0003fb; 	X(MOV(unk_4ffa0, al));	// 100998 mov     byte ptr unk_4FFA0, al ;~ 2F3D:03FB
cs=0x2f3d;eip=0x0003fe; 	X(MOV(unk_4f571, al));	// 100999 mov     byte ptr unk_4F571, al ;~ 2F3D:03FE
cs=0x2f3d;eip=0x000401; 	X(MOV(unk_510eb, al));	// 101000 mov     byte ptr unk_510EB, al ;~ 2F3D:0401
cs=0x2f3d;eip=0x000404; 	X(MOV(unk_4e633, al));	// 101001 mov     byte ptr unk_4E633, al ;~ 2F3D:0404
cs=0x2f3d;eip=0x000407; 	X(MOV(unk_4b502, al));	// 101002 mov     byte ptr unk_4B502, al ;~ 2F3D:0407
cs=0x2f3d;eip=0x00040a; 	X(MOV(unk_5090e, al));	// 101003 mov     byte ptr unk_5090E, al ;~ 2F3D:040A
cs=0x2f3d;eip=0x00040d; 	X(MOV(unk_4db3c, al));	// 101004 mov     byte ptr unk_4DB3C, al ;~ 2F3D:040D
cs=0x2f3d;eip=0x000410; 	X(MOV(unk_4bdfe, al));	// 101005 mov     byte ptr unk_4BDFE, al ;~ 2F3D:0410
cs=0x2f3d;eip=0x000413; 	X(MOV(unk_4bd44, al));	// 101006 mov     byte ptr unk_4BD44, al ;~ 2F3D:0413
cs=0x2f3d;eip=0x000416; 	R(JMP(loc_3dd75));	// 101007 jmp     short loc_3DD75 ;~ 2F3D:0416
loc_3ddc8:
	// 10810 
cs=0x2f3d;eip=0x000418; 	T(MOV(al, 3));	// 101011 mov     al, 3 ;~ 2F3D:0418
cs=0x2f3d;eip=0x00041a; 	X(MOV(unk_4ffce, al));	// 101012 mov     byte ptr unk_4FFCE, al ;~ 2F3D:041A
cs=0x2f3d;eip=0x00041d; 	X(MOV(unk_4ffa8, al));	// 101013 mov     byte ptr unk_4FFA8, al ;~ 2F3D:041D
cs=0x2f3d;eip=0x000420; 	X(MOV(unk_4f567, al));	// 101014 mov     byte ptr unk_4F567, al ;~ 2F3D:0420
cs=0x2f3d;eip=0x000423; 	X(MOV(unk_510f7, al));	// 101015 mov     byte ptr unk_510F7, al ;~ 2F3D:0423
cs=0x2f3d;eip=0x000426; 	X(MOV(unk_4e627, al));	// 101016 mov     byte ptr unk_4E627, al ;~ 2F3D:0426
cs=0x2f3d;eip=0x000429; 	X(MOV(unk_4b4f8, al));	// 101017 mov     byte ptr unk_4B4F8, al ;~ 2F3D:0429
cs=0x2f3d;eip=0x00042c; 	X(MOV(unk_5091a, al));	// 101018 mov     byte ptr unk_5091A, al ;~ 2F3D:042C
cs=0x2f3d;eip=0x00042f; 	X(MOV(unk_4db4d, al));	// 101019 mov     byte ptr unk_4DB4D, al ;~ 2F3D:042F
cs=0x2f3d;eip=0x000432; 	X(MOV(unk_4bdf6, al));	// 101020 mov     byte ptr unk_4BDF6, al ;~ 2F3D:0432
cs=0x2f3d;eip=0x000435; 	X(MOV(unk_4bd3c, al));	// 101021 mov     byte ptr unk_4BD3C, al ;~ 2F3D:0435
cs=0x2f3d;eip=0x000438; 	R(JMP(loc_3dd75));	// 101022 jmp     short loc_3DD75 ;~ 2F3D:0438
loc_3ddea:
	// 10811 
cs=0x2f3d;eip=0x00043a; 	T(MOV(al, 3));	// 101026 mov     al, 3 ;~ 2F3D:043A
cs=0x2f3d;eip=0x00043c; 	X(MOV(unk_4de4b, al));	// 101027 mov     byte ptr unk_4DE4B, al ;~ 2F3D:043C
cs=0x2f3d;eip=0x00043f; 	X(MOV(unk_4f477, al));	// 101028 mov     byte ptr unk_4F477, al ;~ 2F3D:043F
cs=0x2f3d;eip=0x000442; 	X(MOV(unk_51012, al));	// 101029 mov     byte ptr unk_51012, al ;~ 2F3D:0442
cs=0x2f3d;eip=0x000445; 	X(MOV(unk_4e4f6, al));	// 101030 mov     byte ptr unk_4E4F6, al ;~ 2F3D:0445
cs=0x2f3d;eip=0x000448; 	X(MOV(unk_50874, al));	// 101031 mov     byte ptr unk_50874, al ;~ 2F3D:0448
cs=0x2f3d;eip=0x00044b; 	X(MOV(unk_4dbe0, al));	// 101032 mov     byte ptr unk_4DBE0, al ;~ 2F3D:044B
cs=0x2f3d;eip=0x00044e; 	T(MOV(al, 1));	// 101033 mov     al, 1 ;~ 2F3D:044E
cs=0x2f3d;eip=0x000450; 	X(MOV(unk_4de51, al));	// 101034 mov     byte ptr unk_4DE51, al ;~ 2F3D:0450
cs=0x2f3d;eip=0x000453; 	X(MOV(unk_4f47d, al));	// 101035 mov     byte ptr unk_4F47D, al ;~ 2F3D:0453
cs=0x2f3d;eip=0x000456; 	X(MOV(unk_5100c, al));	// 101036 mov     byte ptr unk_5100C, al ;~ 2F3D:0456
cs=0x2f3d;eip=0x000459; 	X(MOV(unk_4e4fe, al));	// 101037 mov     byte ptr unk_4E4FE, al ;~ 2F3D:0459
cs=0x2f3d;eip=0x00045c; 	X(MOV(unk_5087a, al));	// 101038 mov     byte ptr unk_5087A, al ;~ 2F3D:045C
cs=0x2f3d;eip=0x00045f; 	X(MOV(unk_4dbe6, al));	// 101039 mov     byte ptr unk_4DBE6, al ;~ 2F3D:045F
loc_3de12:
	// 10812 
cs=0x2f3d;eip=0x000462; 	T(MOV(sp, bp));	// 101042 mov     sp, bp ;~ 2F3D:0462
cs=0x2f3d;eip=0x000464; 	X(POP(bp));	// 101043 pop     bp ;~ 2F3D:0464
cs=0x2f3d;eip=0x000465; 	R(RETF(0));	// 101044 retf ;~ 2F3D:0465
seg029_proc:
	// 101049 
loc_3de16:
	// 10813 
cs=0x2f3d;eip=0x000466; 	X(PUSH(bp));	// 101051 push    bp ;~ 2F3D:0466
cs=0x2f3d;eip=0x000467; 	T(MOV(bp, sp));	// 101052 mov     bp, sp ;~ 2F3D:0467
cs=0x2f3d;eip=0x000469; 	T(SUB(sp, 4));	// 101053 sub     sp, 4 ;~ 2F3D:0469
cs=0x2f3d;eip=0x00046c; 	T(MOV(ax, *(dw*)((&unk_56bb1))));	// 101054 mov     ax, word ptr unk_56BB1 ;~ 2F3D:046C
cs=0x2f3d;eip=0x00046f; 	T(MOV(dx, *(dw*)((&unk_56bb3))));	// 101055 mov     dx, word ptr unk_56BB3 ;~ 2F3D:046F
cs=0x2f3d;eip=0x000473; 	T(ADD(ax, 0x18));	// 101056 add     ax, 18h ;~ 2F3D:0473
cs=0x2f3d;eip=0x000476; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 101057 mov     [bp-4], ax ;~ 2F3D:0476
cs=0x2f3d;eip=0x000479; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 101058 mov     [bp-2], dx ;~ 2F3D:0479
cs=0x2f3d;eip=0x00047c; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101059 les     bx, [bp-4] ;~ 2F3D:047C
cs=0x2f3d;eip=0x00047f; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1BBE));	// 101060 cmp     word ptr es:[bx], 1BBEh ;~ 2F3D:047F
cs=0x2f3d;eip=0x000484; 	R(JNZ(loc_3de3a));	// 101061 jnz     short loc_3DE3A ;~ 2F3D:0484
cs=0x2f3d;eip=0x000486; 	T(MOV(al, 3));	// 101062 mov     al, 3 ;~ 2F3D:0486
cs=0x2f3d;eip=0x000488; 	R(JMP(loc_3de3c));	// 101063 jmp     short loc_3DE3C ;~ 2F3D:0488
loc_3de3a:
	// 10814 
cs=0x2f3d;eip=0x00048a; 	T(MOV(al, 1));	// 101067 mov     al, 1 ;~ 2F3D:048A
loc_3de3c:
	// 10815 
cs=0x2f3d;eip=0x00048c; 	X(MOV(unk_535fc, al));	// 101070 mov     byte ptr unk_535FC, al ;~ 2F3D:048C
cs=0x2f3d;eip=0x00048f; 	X(MOV(unk_53472, al));	// 101071 mov     byte ptr unk_53472, al ;~ 2F3D:048F
cs=0x2f3d;eip=0x000492; 	T(MOV(sp, bp));	// 101072 mov     sp, bp ;~ 2F3D:0492
cs=0x2f3d;eip=0x000494; 	X(POP(bp));	// 101073 pop     bp ;~ 2F3D:0494
cs=0x2f3d;eip=0x000495; 	R(RETF(0));	// 101074 retf ;~ 2F3D:0495
loc_3de46:
	// 10816 
cs=0x2f3d;eip=0x000496; 	X(PUSH(bp));	// 101079 push    bp ;~ 2F3D:0496
cs=0x2f3d;eip=0x000497; 	T(MOV(bp, sp));	// 101080 mov     bp, sp ;~ 2F3D:0497
cs=0x2f3d;eip=0x000499; 	T(SUB(sp, 4));	// 101081 sub     sp, 4 ;~ 2F3D:0499
cs=0x2f3d;eip=0x00049c; 	T(MOV(ax, *(dw*)((&unk_56bb1))));	// 101082 mov     ax, word ptr unk_56BB1 ;~ 2F3D:049C
cs=0x2f3d;eip=0x00049f; 	T(MOV(dx, *(dw*)((&unk_56bb3))));	// 101083 mov     dx, word ptr unk_56BB3 ;~ 2F3D:049F
cs=0x2f3d;eip=0x0004a3; 	T(ADD(ax, 0x18));	// 101084 add     ax, 18h ;~ 2F3D:04A3
cs=0x2f3d;eip=0x0004a6; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 101085 mov     [bp-4], ax ;~ 2F3D:04A6
cs=0x2f3d;eip=0x0004a9; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 101086 mov     [bp-2], dx ;~ 2F3D:04A9
cs=0x2f3d;eip=0x0004ac; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101087 les     bx, [bp-4] ;~ 2F3D:04AC
cs=0x2f3d;eip=0x0004af; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1C5A));	// 101088 cmp     word ptr es:[bx], 1C5Ah ;~ 2F3D:04AF
cs=0x2f3d;eip=0x0004b4; 	R(JNZ(loc_3de7e));	// 101089 jnz     short loc_3DE7E ;~ 2F3D:04B4
cs=0x2f3d;eip=0x0004b6; 	T(MOV(al, 3));	// 101090 mov     al, 3 ;~ 2F3D:04B6
cs=0x2f3d;eip=0x0004b8; 	X(MOV(unk_53bc1, al));	// 101091 mov     byte ptr unk_53BC1, al ;~ 2F3D:04B8
cs=0x2f3d;eip=0x0004bb; 	X(MOV(unk_53a28, al));	// 101092 mov     byte ptr unk_53A28, al ;~ 2F3D:04BB
cs=0x2f3d;eip=0x0004be; 	T(MOV(al, 1));	// 101093 mov     al, 1 ;~ 2F3D:04BE
cs=0x2f3d;eip=0x0004c0; 	X(MOV(unk_53bcb, al));	// 101094 mov     byte ptr unk_53BCB, al ;~ 2F3D:04C0
cs=0x2f3d;eip=0x0004c3; 	X(MOV(unk_53a32, al));	// 101095 mov     byte ptr unk_53A32, al ;~ 2F3D:04C3
cs=0x2f3d;eip=0x0004c6; 	X(MOV(*(dw*)((&unk_53b69)), 0x0FF0C));	// 101096 mov     word ptr unk_53B69, 0FF0Ch ;~ 2F3D:04C6
cs=0x2f3d;eip=0x0004cc; 	R(JMP(loc_3de94));	// 101097 jmp     short loc_3DE94 ;~ 2F3D:04CC
loc_3de7e:
	// 10817 
cs=0x2f3d;eip=0x0004ce; 	T(MOV(al, 1));	// 101101 mov     al, 1 ;~ 2F3D:04CE
cs=0x2f3d;eip=0x0004d0; 	X(MOV(unk_53bc1, al));	// 101102 mov     byte ptr unk_53BC1, al ;~ 2F3D:04D0
cs=0x2f3d;eip=0x0004d3; 	X(MOV(unk_53a28, al));	// 101103 mov     byte ptr unk_53A28, al ;~ 2F3D:04D3
cs=0x2f3d;eip=0x0004d6; 	T(MOV(al, 3));	// 101104 mov     al, 3 ;~ 2F3D:04D6
cs=0x2f3d;eip=0x0004d8; 	X(MOV(unk_53bcb, al));	// 101105 mov     byte ptr unk_53BCB, al ;~ 2F3D:04D8
cs=0x2f3d;eip=0x0004db; 	X(MOV(unk_53a32, al));	// 101106 mov     byte ptr unk_53A32, al ;~ 2F3D:04DB
cs=0x2f3d;eip=0x0004de; 	X(MOV(*(dw*)((&unk_53b69)), 0x0FF09));	// 101107 mov     word ptr unk_53B69, 0FF09h ;~ 2F3D:04DE
loc_3de94:
	// 10818 
cs=0x2f3d;eip=0x0004e4; 	T(MOV(sp, bp));	// 101110 mov     sp, bp ;~ 2F3D:04E4
cs=0x2f3d;eip=0x0004e6; 	X(POP(bp));	// 101111 pop     bp ;~ 2F3D:04E6
cs=0x2f3d;eip=0x0004e7; 	R(RETF(0));	// 101112 retf ;~ 2F3D:04E7
loc_3de98:
	// 10819 
cs=0x2f3d;eip=0x0004e8; 	X(PUSH(bp));	// 101117 push    bp ;~ 2F3D:04E8
cs=0x2f3d;eip=0x0004e9; 	T(MOV(bp, sp));	// 101118 mov     bp, sp ;~ 2F3D:04E9
cs=0x2f3d;eip=0x0004eb; 	T(SUB(sp, 6));	// 101119 sub     sp, 6 ;~ 2F3D:04EB
cs=0x2f3d;eip=0x0004ee; 	T(CMP(*(dw*)((&unk_56bb9)), 0x6771));	// 101120 cmp     word ptr unk_56BB9, 6771h ;~ 2F3D:04EE
cs=0x2f3d;eip=0x0004f4; 	R(JNZ(loc_3def3));	// 101121 jnz     short loc_3DEF3 ;~ 2F3D:04F4
cs=0x2f3d;eip=0x0004f6; 	T(MOV(ax, 0x6C47));	// 101122 mov     ax, 6C47h ;~ 2F3D:04F6
cs=0x2f3d;eip=0x0004f9; 	X(PUSH(ax));	// 101123 push    ax ;~ 2F3D:04F9
cs=0x2f3d;eip=0x0004fa; 	R(CALL(sub_3e27a,0));	// 101124 call    sub_3E27A ;~ 2F3D:04FA
cs=0x2f3d;eip=0x0004fd; 	T(MOV(ax, *(dw*)((&unk_56bb1))));	// 101125 mov     ax, word ptr unk_56BB1 ;~ 2F3D:04FD
cs=0x2f3d;eip=0x000500; 	T(MOV(dx, *(dw*)((&unk_56bb3))));	// 101126 mov     dx, word ptr unk_56BB3 ;~ 2F3D:0500
cs=0x2f3d;eip=0x000504; 	T(ADD(ax, 0x18));	// 101127 add     ax, 18h ;~ 2F3D:0504
cs=0x2f3d;eip=0x000507; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 101128 mov     [bp-4], ax ;~ 2F3D:0507
cs=0x2f3d;eip=0x00050a; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 101129 mov     [bp-2], dx ;~ 2F3D:050A
cs=0x2f3d;eip=0x00050d; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101130 les     bx, [bp-4] ;~ 2F3D:050D
cs=0x2f3d;eip=0x000510; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1A74));	// 101131 cmp     word ptr es:[bx], 1A74h ;~ 2F3D:0510
cs=0x2f3d;eip=0x000515; 	R(JNZ(loc_3ded3));	// 101132 jnz     short loc_3DED3 ;~ 2F3D:0515
cs=0x2f3d;eip=0x000517; 	X(MOV(unk_4e581, 3));	// 101133 mov     byte ptr unk_4E581, 3 ;~ 2F3D:0517
cs=0x2f3d;eip=0x00051c; 	X(MOV(unk_4e56f, 1));	// 101134 mov     byte ptr unk_4E56F, 1 ;~ 2F3D:051C
cs=0x2f3d;eip=0x000521; 	R(JMP(loc_3dedd));	// 101135 jmp     short loc_3DEDD ;~ 2F3D:0521
loc_3ded3:
	// 10820 
cs=0x2f3d;eip=0x000523; 	X(MOV(unk_4e581, 1));	// 101139 mov     byte ptr unk_4E581, 1 ;~ 2F3D:0523
cs=0x2f3d;eip=0x000528; 	X(MOV(unk_4e56f, 3));	// 101140 mov     byte ptr unk_4E56F, 3 ;~ 2F3D:0528
loc_3dedd:
	// 10821 
cs=0x2f3d;eip=0x00052d; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101143 les     bx, [bp-4] ;~ 2F3D:052D
cs=0x2f3d;eip=0x000530; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1ABC));	// 101144 cmp     word ptr es:[bx], 1ABCh ;~ 2F3D:0530
cs=0x2f3d;eip=0x000535; 	R(JNZ(loc_3deeb));	// 101145 jnz     short loc_3DEEB ;~ 2F3D:0535
cs=0x2f3d;eip=0x000537; 	T(MOV(al, 3));	// 101146 mov     al, 3 ;~ 2F3D:0537
cs=0x2f3d;eip=0x000539; 	R(JMP(loc_3deed));	// 101147 jmp     short loc_3DEED ;~ 2F3D:0539
loc_3deeb:
	// 10822 
cs=0x2f3d;eip=0x00053b; 	T(MOV(al, 1));	// 101151 mov     al, 1 ;~ 2F3D:053B
loc_3deed:
	// 10823 
cs=0x2f3d;eip=0x00053d; 	X(MOV(unk_4e5cd, al));	// 101154 mov     byte ptr unk_4E5CD, al ;~ 2F3D:053D
cs=0x2f3d;eip=0x000540; 	X(MOV(unk_4e5ad, al));	// 101155 mov     byte ptr unk_4E5AD, al ;~ 2F3D:0540
loc_3def3:
	// 10824 
cs=0x2f3d;eip=0x000543; 	T(MOV(sp, bp));	// 101158 mov     sp, bp ;~ 2F3D:0543
cs=0x2f3d;eip=0x000545; 	X(POP(bp));	// 101159 pop     bp ;~ 2F3D:0545
cs=0x2f3d;eip=0x000546; 	R(RETF(0));	// 101160 retf ;~ 2F3D:0546
loc_3def7:
	// 10825 
cs=0x2f3d;eip=0x000547; 	X(PUSH(bp));	// 101165 push    bp ;~ 2F3D:0547
cs=0x2f3d;eip=0x000548; 	T(MOV(bp, sp));	// 101166 mov     bp, sp ;~ 2F3D:0548
cs=0x2f3d;eip=0x00054a; 	T(SUB(sp, 4));	// 101167 sub     sp, 4 ;~ 2F3D:054A
cs=0x2f3d;eip=0x00054d; 	T(CMP(*(dw*)((&unk_56bb9)), 0x8030));	// 101168 cmp     word ptr unk_56BB9, 8030h ;~ 2F3D:054D
cs=0x2f3d;eip=0x000553; 	R(JNZ(loc_3df0c));	// 101169 jnz     short loc_3DF0C ;~ 2F3D:0553
cs=0x2f3d;eip=0x000555; 	T(MOV(ax, 0x8548));	// 101170 mov     ax, 8548h ;~ 2F3D:0555
cs=0x2f3d;eip=0x000558; 	X(PUSH(ax));	// 101171 push    ax ;~ 2F3D:0558
cs=0x2f3d;eip=0x000559; 	R(CALL(sub_3e27a,0));	// 101172 call    sub_3E27A ;~ 2F3D:0559
loc_3df0c:
	// 10826 
cs=0x2f3d;eip=0x00055c; 	T(MOV(sp, bp));	// 101175 mov     sp, bp ;~ 2F3D:055C
cs=0x2f3d;eip=0x00055e; 	X(POP(bp));	// 101176 pop     bp ;~ 2F3D:055E
cs=0x2f3d;eip=0x00055f; 	R(RETF(0));	// 101177 retf ;~ 2F3D:055F
loc_3df10:
	// 10827 
cs=0x2f3d;eip=0x000560; 	T(CMP(*(dw*)((&unk_56bb9)), 0x388C));	// 101182 cmp     word ptr unk_56BB9, 388Ch ;~ 2F3D:0560
cs=0x2f3d;eip=0x000566; 	R(JNZ(locret_3df2e));	// 101183 jnz     short locret_3DF2E ;~ 2F3D:0566
cs=0x2f3d;eip=0x000568; 	X(MOV(unk_4b5d4, 1));	// 101184 mov     byte ptr unk_4B5D4, 1 ;~ 2F3D:0568
cs=0x2f3d;eip=0x00056d; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 101185 les     bx, dword ptr unk_56FD6 ;~ 2F3D:056D
cs=0x2f3d;eip=0x000571; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 101186 cmp     word ptr es:[bx+212h], 0 ;~ 2F3D:0571
cs=0x2f3d;eip=0x000577; 	R(JZ(locret_3df2e));	// 101187 jz      short locret_3DF2E ;~ 2F3D:0577
cs=0x2f3d;eip=0x000579; 	X(MOV(unk_4b5d4, 3));	// 101188 mov     byte ptr unk_4B5D4, 3 ;~ 2F3D:0579
locret_3df2e:
	// 10828 
cs=0x2f3d;eip=0x00057e; 	R(RETF(0));	// 101192 retf ;~ 2F3D:057E
loc_3df2f:
	// 10829 
cs=0x2f3d;eip=0x00057f; 	T(CMP(*(dw*)((&unk_56bb9)), 0x3EB0));	// 101197 cmp     word ptr unk_56BB9, 3EB0h ;~ 2F3D:057F
cs=0x2f3d;eip=0x000585; 	R(JNZ(locret_3df4d));	// 101198 jnz     short locret_3DF4D ;~ 2F3D:0585
cs=0x2f3d;eip=0x000587; 	X(MOV(unk_4be6d, 1));	// 101199 mov     byte ptr unk_4BE6D, 1 ;~ 2F3D:0587
cs=0x2f3d;eip=0x00058c; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 101200 les     bx, dword ptr unk_56FD6 ;~ 2F3D:058C
cs=0x2f3d;eip=0x000590; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 101201 cmp     word ptr es:[bx+212h], 0 ;~ 2F3D:0590
cs=0x2f3d;eip=0x000596; 	R(JZ(locret_3df4d));	// 101202 jz      short locret_3DF4D ;~ 2F3D:0596
cs=0x2f3d;eip=0x000598; 	X(MOV(unk_4be6d, 3));	// 101203 mov     byte ptr unk_4BE6D, 3 ;~ 2F3D:0598
locret_3df4d:
	// 10830 
cs=0x2f3d;eip=0x00059d; 	R(RETF(0));	// 101207 retf ;~ 2F3D:059D
ret_2f3d_59e:
	// 10831 
cs=0x2f3d;eip=0x00059e; 	R(RETF(0));	// 101209 retf ;~ 2F3D:059E
cs=0x2f3d;eip=0x000820; 	X(PUSH(bp));	// 101617 push    bp ;~ 2F3D:0820
cs=0x2f3d;eip=0x000821; 	X(POP(bp));	// 101618 pop     bp ;~ 2F3D:0821
cs=0x2f3d;eip=0x000822; 	R(RETF(0));	// 101619 retf ;~ 2F3D:0822
locret_3e276:
	// 10856 
cs=0x2f3d;eip=0x0008c6; 	R(RETF(0));	// 101714 retf ;~ 2F3D:08C6
loc_3e277:
	// 10857 
cs=0x2f3d;eip=0x0008c7; 	X(PUSH(bp));	// 101718 push    bp ;~ 2F3D:08C7
cs=0x2f3d;eip=0x0008c8; 	X(POP(bp));	// 101719 pop     bp ;~ 2F3D:08C8
cs=0x2f3d;eip=0x0008c9; 	R(RETF(0));	// 101720 retf ;~ 2F3D:08C9
sub_3df4f:
	// 101215 
cs=0x2f3d;eip=0x00059f; 	X(PUSH(bp));	// 101216 push    bp ;~ 2F3D:059F
cs=0x2f3d;eip=0x0005a0; 	T(MOV(bp, sp));	// 101217 mov     bp, sp ;~ 2F3D:05A0
cs=0x2f3d;eip=0x0005a2; 	T(SUB(sp, 2));	// 101218 sub     sp, 2 ;~ 2F3D:05A2
cs=0x2f3d;eip=0x0005a5; 	X(PUSH(si));	// 101219 push    si ;~ 2F3D:05A5
cs=0x2f3d;eip=0x0005a6; 	X(MOV(*(dw*)((&unk_4b080)), 0));	// 101220 mov     word ptr unk_4B080, 0 ;~ 2F3D:05A6
cs=0x2f3d;eip=0x0005ac; 	T(MOV(si, 0x0CC8C));	// 101221 mov     si, 0CC8Ch ;~ 2F3D:05AC
cs=0x2f3d;eip=0x0005af; 	R(JMP(loc_3df73));	// 101222 jmp     short loc_3DF73 ;~ 2F3D:05AF
loc_3df61:
	// 10832 
cs=0x2f3d;eip=0x0005b1; 	T(MOV(ax, 0x36CE));	// 101226 mov     ax, 36CEh ;~ 2F3D:05B1
cs=0x2f3d;eip=0x0005b4; 	X(PUSH(ax));	// 101227 push    ax ;~ 2F3D:05B4
cs=0x2f3d;eip=0x0005b5; 	T(MOV(ax, 0x0E0));	// 101228 mov     ax, 0E0h ; 'à' ;~ 2F3D:05B5
cs=0x2f3d;eip=0x0005b8; 	X(PUSH(ax));	// 101229 push    ax ;~ 2F3D:05B8
cs=0x2f3d;eip=0x0005b9; 	R(CALLF(sub_24f74,0));	// 101230 call    sub_24F74 ;~ 2F3D:05B9
cs=0x2f3d;eip=0x0005be; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 101231 mov     [si], ax ;~ 2F3D:05BE
cs=0x2f3d;eip=0x0005c0; 	T(SUB(si, 6));	// 101232 sub     si, 6 ;~ 2F3D:05C0
loc_3df73:
	// 10833 
cs=0x2f3d;eip=0x0005c3; 	T(CMP(si, 0x0CC74));	// 101235 cmp     si, 0CC74h ;~ 2F3D:05C3
cs=0x2f3d;eip=0x0005c7; 	R(JNC(loc_3df61));	// 101236 jnb     short loc_3DF61 ;~ 2F3D:05C7
cs=0x2f3d;eip=0x0005c9; 	X(POP(si));	// 101237 pop     si ;~ 2F3D:05C9
cs=0x2f3d;eip=0x0005ca; 	T(MOV(sp, bp));	// 101238 mov     sp, bp ;~ 2F3D:05CA
cs=0x2f3d;eip=0x0005cc; 	X(POP(bp));	// 101239 pop     bp ;~ 2F3D:05CC
cs=0x2f3d;eip=0x0005cd; 	R(RETF(0));	// 101240 retf ;~ 2F3D:05CD
sub_3df7e:
	// 101248 
cs=0x2f3d;eip=0x0005ce; 	X(PUSH(bp));	// 101249 push    bp ;~ 2F3D:05CE
cs=0x2f3d;eip=0x0005cf; 	T(MOV(bp, sp));	// 101250 mov     bp, sp ;~ 2F3D:05CF
cs=0x2f3d;eip=0x0005d1; 	T(SUB(sp, 2));	// 101251 sub     sp, 2 ;~ 2F3D:05D1
cs=0x2f3d;eip=0x0005d4; 	X(PUSH(si));	// 101252 push    si ;~ 2F3D:05D4
cs=0x2f3d;eip=0x0005d5; 	T(MOV(si, 0x0CC8C));	// 101253 mov     si, 0CC8Ch ;~ 2F3D:05D5
cs=0x2f3d;eip=0x0005d8; 	R(JMP(loc_3df95));	// 101254 jmp     short loc_3DF95 ;~ 2F3D:05D8
loc_3df8a:
	// 10834 
cs=0x2f3d;eip=0x0005da; 	X(PUSH(si));	// 101258 push    si ;~ 2F3D:05DA
cs=0x2f3d;eip=0x0005db; 	X(PUSH(cs));	// 101259 push    cs ;~ 2F3D:05DB
cs=0x2f3d;eip=0x0005dc; 	R(CALL(sub_3e098,0));	// 101260 call    near ptr sub_3E098 ;~ 2F3D:05DC
cs=0x2f3d;eip=0x0005df; 	T(ADD(sp, 2));	// 101261 add     sp, 2 ;~ 2F3D:05DF
cs=0x2f3d;eip=0x0005e2; 	T(SUB(si, 6));	// 101262 sub     si, 6 ;~ 2F3D:05E2
loc_3df95:
	// 10835 
cs=0x2f3d;eip=0x0005e5; 	T(CMP(si, 0x0CC74));	// 101265 cmp     si, 0CC74h ;~ 2F3D:05E5
cs=0x2f3d;eip=0x0005e9; 	R(JNC(loc_3df8a));	// 101266 jnb     short loc_3DF8A ;~ 2F3D:05E9
cs=0x2f3d;eip=0x0005eb; 	X(POP(si));	// 101267 pop     si ;~ 2F3D:05EB
cs=0x2f3d;eip=0x0005ec; 	T(MOV(sp, bp));	// 101268 mov     sp, bp ;~ 2F3D:05EC
cs=0x2f3d;eip=0x0005ee; 	X(POP(bp));	// 101269 pop     bp ;~ 2F3D:05EE
cs=0x2f3d;eip=0x0005ef; 	R(RETF(0));	// 101270 retf ;~ 2F3D:05EF
sub_3dfa0:
	// 101278 
#undef var_c
#define var_c -0x0C
	// 101281 var_C           = word ptr -0Ch ;~ 2F3D:05F0
#undef var_a
#define var_a -0x0A
	// 101282 var_A           = word ptr -0Ah ;~ 2F3D:05F0
#undef var_8
#define var_8 -8
	// 101283 var_8           = word ptr -8 ;~ 2F3D:05F0
#undef var_6
#define var_6 -6
	// 101284 var_6           = word ptr -6 ;~ 2F3D:05F0
#undef arg_0
#define arg_0 6
	// 101285 arg_0           = word ptr  6 ;~ 2F3D:05F0
#undef arg_2
#define arg_2 8
	// 101286 arg_2           = word ptr  8 ;~ 2F3D:05F0
#undef arg_4
#define arg_4 0x0A
	// 101287 arg_4           = word ptr  0Ah ;~ 2F3D:05F0
#undef arg_6
#define arg_6 0x0C
	// 101288 arg_6           = word ptr  0Ch ;~ 2F3D:05F0
cs=0x2f3d;eip=0x0005f0; 	X(PUSH(bp));	// 101290 push    bp ;~ 2F3D:05F0
cs=0x2f3d;eip=0x0005f1; 	T(MOV(bp, sp));	// 101291 mov     bp, sp ;~ 2F3D:05F1
cs=0x2f3d;eip=0x0005f3; 	T(SUB(sp, 0x0C));	// 101292 sub     sp, 0Ch ;~ 2F3D:05F3
cs=0x2f3d;eip=0x0005f6; 	X(PUSH(di));	// 101293 push    di ;~ 2F3D:05F6
cs=0x2f3d;eip=0x0005f7; 	X(PUSH(si));	// 101294 push    si ;~ 2F3D:05F7
cs=0x2f3d;eip=0x0005f8; 	T(MOV(si, 0x0CC8C));	// 101295 mov     si, 0CC8Ch ;~ 2F3D:05F8
cs=0x2f3d;eip=0x0005fb; 	T(CMP(si, 0x0CC74));	// 101296 cmp     si, 0CC74h ;~ 2F3D:05FB
cs=0x2f3d;eip=0x0005ff; 	R(JC(loc_3dfd0));	// 101297 jb      short loc_3DFD0 ;~ 2F3D:05FF
cs=0x2f3d;eip=0x000601; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 101298 mov     dx, word ptr unk_47A9A ;~ 2F3D:0601
cs=0x2f3d;eip=0x000605; 	T(SUB(ax, ax));	// 101299 sub     ax, ax ;~ 2F3D:0605
cs=0x2f3d;eip=0x000607; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 101300 mov     [bp+var_C], ax ;~ 2F3D:0607
cs=0x2f3d;eip=0x00060a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 101301 mov     [bp+var_A], dx ;~ 2F3D:060A
loc_3dfbd:
	// 10836 
cs=0x2f3d;eip=0x00060d; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 101304 mov     ax, [si] ;~ 2F3D:060D
cs=0x2f3d;eip=0x00060f; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_c))));	// 101305 or      ax, [bp+var_C] ;~ 2F3D:060F
cs=0x2f3d;eip=0x000612; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 101306 mov     dx, [bp+var_A] ;~ 2F3D:0612
cs=0x2f3d;eip=0x000615; 	T(MOV(es, dx));	// 101307 mov     es, dx ;~ 2F3D:0615
cs=0x2f3d;eip=0x000617; 	T(MOV(bx, ax));	// 101308 mov     bx, ax ;~ 2F3D:0617
cs=0x2f3d;eip=0x000619; 	T(TEST(*(raddr(es,bx+2)), 1));	// 101309 test    byte ptr es:[bx+2], 1 ;~ 2F3D:0619
cs=0x2f3d;eip=0x00061e; 	R(JNZ(loc_3dfeb));	// 101310 jnz     short loc_3DFEB ;~ 2F3D:061E
loc_3dfd0:
	// 10837 
cs=0x2f3d;eip=0x000620; 	T(CMP(si, 0x0CC74));	// 101314 cmp     si, 0CC74h ;~ 2F3D:0620
cs=0x2f3d;eip=0x000624; 	R(JNC(loc_3e027));	// 101315 jnb     short loc_3E027 ;~ 2F3D:0624
cs=0x2f3d;eip=0x000626; 	T(MOV(si, 0x0CC74));	// 101316 mov     si, 0CC74h ;~ 2F3D:0626
cs=0x2f3d;eip=0x000629; 	T(MOV(ax, *(dw*)((&unk_54626))));	// 101317 mov     ax, word ptr unk_54626 ;~ 2F3D:0629
cs=0x2f3d;eip=0x00062c; 	T(MOV(dx, *(dw*)((&unk_54628))));	// 101318 mov     dx, word ptr unk_54628 ;~ 2F3D:062C
cs=0x2f3d;eip=0x000630; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 101319 mov     [bp+var_8], ax ;~ 2F3D:0630
cs=0x2f3d;eip=0x000633; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 101320 mov     [bp+var_6], dx ;~ 2F3D:0633
cs=0x2f3d;eip=0x000636; 	T(MOV(di, 0x0CC8C));	// 101321 mov     di, 0CC8Ch ;~ 2F3D:0636
cs=0x2f3d;eip=0x000639; 	R(JMP(loc_3e019));	// 101322 jmp     short loc_3E019 ;~ 2F3D:0639
loc_3dfeb:
	// 10838 
cs=0x2f3d;eip=0x00063b; 	T(SUB(si, 6));	// 101326 sub     si, 6 ;~ 2F3D:063B
cs=0x2f3d;eip=0x00063e; 	T(CMP(si, 0x0CC74));	// 101327 cmp     si, 0CC74h ;~ 2F3D:063E
cs=0x2f3d;eip=0x000642; 	R(JC(loc_3dfd0));	// 101328 jb      short loc_3DFD0 ;~ 2F3D:0642
cs=0x2f3d;eip=0x000644; 	R(JMP(loc_3dfbd));	// 101329 jmp     short loc_3DFBD ;~ 2F3D:0644
loc_3dff6:
	// 10839 
cs=0x2f3d;eip=0x000646; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 101333 mov     ax, [bp+var_8] ;~ 2F3D:0646
cs=0x2f3d;eip=0x000649; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 101334 mov     dx, [bp+var_6] ;~ 2F3D:0649
cs=0x2f3d;eip=0x00064c; 	T(CMP(*(dw*)(raddr(ds,di+4)), dx));	// 101335 cmp     [di+4], dx ;~ 2F3D:064C
cs=0x2f3d;eip=0x00064f; 	R(JG(loc_3e016));	// 101336 jg      short loc_3E016 ;~ 2F3D:064F
cs=0x2f3d;eip=0x000651; 	R(JL(loc_3e008));	// 101337 jl      short loc_3E008 ;~ 2F3D:0651
cs=0x2f3d;eip=0x000653; 	T(CMP(*(dw*)(raddr(ds,di+2)), ax));	// 101338 cmp     [di+2], ax ;~ 2F3D:0653
cs=0x2f3d;eip=0x000656; 	R(JNC(loc_3e016));	// 101339 jnb     short loc_3E016 ;~ 2F3D:0656
loc_3e008:
	// 10840 
cs=0x2f3d;eip=0x000658; 	T(MOV(si, di));	// 101342 mov     si, di ;~ 2F3D:0658
cs=0x2f3d;eip=0x00065a; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 101343 mov     ax, [di+2] ;~ 2F3D:065A
cs=0x2f3d;eip=0x00065d; 	T(MOV(dx, *(dw*)(raddr(ds,di+4))));	// 101344 mov     dx, [di+4] ;~ 2F3D:065D
cs=0x2f3d;eip=0x000660; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 101345 mov     [bp+var_8], ax ;~ 2F3D:0660
cs=0x2f3d;eip=0x000663; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 101346 mov     [bp+var_6], dx ;~ 2F3D:0663
loc_3e016:
	// 10841 
cs=0x2f3d;eip=0x000666; 	T(SUB(di, 6));	// 101350 sub     di, 6 ;~ 2F3D:0666
loc_3e019:
	// 10842 
cs=0x2f3d;eip=0x000669; 	T(CMP(di, 0x0CC7A));	// 101353 cmp     di, 0CC7Ah ;~ 2F3D:0669
cs=0x2f3d;eip=0x00066d; 	R(JNC(loc_3dff6));	// 101354 jnb     short loc_3DFF6 ;~ 2F3D:066D
cs=0x2f3d;eip=0x00066f; 	X(PUSH(si));	// 101355 push    si ;~ 2F3D:066F
cs=0x2f3d;eip=0x000670; 	X(PUSH(cs));	// 101356 push    cs ;~ 2F3D:0670
cs=0x2f3d;eip=0x000671; 	R(CALL(sub_3e098,0));	// 101357 call    near ptr sub_3E098 ;~ 2F3D:0671
cs=0x2f3d;eip=0x000674; 	T(ADD(sp, 2));	// 101358 add     sp, 2 ;~ 2F3D:0674
loc_3e027:
	// 10843 
cs=0x2f3d;eip=0x000677; 	T(CMP(unk_57041, 2));	// 101361 cmp     byte ptr unk_57041, 2 ;~ 2F3D:0677
cs=0x2f3d;eip=0x00067c; 	R(JC(loc_3e039));	// 101362 jb      short loc_3E039 ;~ 2F3D:067C
cs=0x2f3d;eip=0x00067e; 	T(MOV(ax, 0x0B40));	// 101363 mov     ax, 0B40h ;~ 2F3D:067E
cs=0x2f3d;eip=0x000681; 	X(PUSH(ax));	// 101364 push    ax ;~ 2F3D:0681
cs=0x2f3d;eip=0x000682; 	R(CALLF(sub_2937a,0));	// 101365 call    sub_2937A ;~ 2F3D:0682
cs=0x2f3d;eip=0x000687; 	R(JMP(loc_3e03b));	// 101366 jmp     short loc_3E03B ;~ 2F3D:0687
loc_3e039:
	// 10844 
cs=0x2f3d;eip=0x000689; 	T(SUB(ax, ax));	// 101370 sub     ax, ax ;~ 2F3D:0689
loc_3e03b:
	// 10845 
cs=0x2f3d;eip=0x00068b; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 101373 mov     bx, word ptr unk_47A9A ;~ 2F3D:068B
cs=0x2f3d;eip=0x00068f; 	T(MOV(cx, *(dw*)(raddr(ds,si))));	// 101374 mov     cx, [si] ;~ 2F3D:068F
cs=0x2f3d;eip=0x000691; 	T(MOV(es, bx));	// 101375 mov     es, bx ;~ 2F3D:0691
cs=0x2f3d;eip=0x000693; 	T(MOV(bx, cx));	// 101377 mov     bx, cx ;~ 2F3D:0693
cs=0x2f3d;eip=0x000695; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 101378 mov     es:[bx+12h], ax ;~ 2F3D:0695
cs=0x2f3d;eip=0x000699; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101379 mov     ax, [bp+arg_0] ;~ 2F3D:0699
cs=0x2f3d;eip=0x00069c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 101380 mov     dx, [bp+arg_2] ;~ 2F3D:069C
cs=0x2f3d;eip=0x00069f; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 101381 mov     es:[bx+6], ax ;~ 2F3D:069F
cs=0x2f3d;eip=0x0006a3; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 101382 mov     es:[bx+8], dx ;~ 2F3D:06A3
cs=0x2f3d;eip=0x0006a7; 	T(MOV(ax, cx));	// 101383 mov     ax, cx ;~ 2F3D:06A7
cs=0x2f3d;eip=0x0006a9; 	T(SUB(ax, ax));	// 101384 sub     ax, ax ;~ 2F3D:06A9
cs=0x2f3d;eip=0x0006ab; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 101385 mov     es:[bx+0Ch], ax ;~ 2F3D:06AB
cs=0x2f3d;eip=0x0006af; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 101386 mov     es:[bx+0Ah], ax ;~ 2F3D:06AF
cs=0x2f3d;eip=0x0006b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 101387 mov     ax, [bp+arg_4] ;~ 2F3D:06B3
cs=0x2f3d;eip=0x0006b6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 101388 mov     dx, [bp+arg_6] ;~ 2F3D:06B6
cs=0x2f3d;eip=0x0006b9; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 101389 mov     es:[bx+0Eh], ax ;~ 2F3D:06B9
cs=0x2f3d;eip=0x0006bd; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 101390 mov     es:[bx+10h], dx ;~ 2F3D:06BD
cs=0x2f3d;eip=0x0006c1; 	T(MOV(ax, cx));	// 101391 mov     ax, cx ;~ 2F3D:06C1
cs=0x2f3d;eip=0x0006c3; 	X(OR(*(raddr(es,bx+2)), 1));	// 101392 or      byte ptr es:[bx+2], 1 ;~ 2F3D:06C3
cs=0x2f3d;eip=0x0006c8; 	X(PUSH(ax));	// 101393 push    ax ;~ 2F3D:06C8
cs=0x2f3d;eip=0x0006c9; 	T(MOV(ax, 0x0EAE4));	// 101394 mov     ax, 0EAE4h ;~ 2F3D:06C9
cs=0x2f3d;eip=0x0006cc; 	X(PUSH(ax));	// 101395 push    ax ;~ 2F3D:06CC
cs=0x2f3d;eip=0x0006cd; 	R(CALLF(sub_23e92,0));	// 101396 call    sub_23E92 ;~ 2F3D:06CD
cs=0x2f3d;eip=0x0006d2; 	T(ADD(sp, 4));	// 101397 add     sp, 4 ;~ 2F3D:06D2
cs=0x2f3d;eip=0x0006d5; 	T(MOV(ax, word_5705a));	// 101398 mov     ax, word_5705A ;~ 2F3D:06D5
cs=0x2f3d;eip=0x0006d8; 	T(MOV(dx, word_5705c));	// 101399 mov     dx, word_5705C ;~ 2F3D:06D8
cs=0x2f3d;eip=0x0006dc; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 101400 mov     [si+2], ax ;~ 2F3D:06DC
cs=0x2f3d;eip=0x0006df; 	X(MOV(*(dw*)(raddr(ds,si+4)), dx));	// 101401 mov     [si+4], dx ;~ 2F3D:06DF
cs=0x2f3d;eip=0x0006e2; 	X(POP(si));	// 101402 pop     si ;~ 2F3D:06E2
cs=0x2f3d;eip=0x0006e3; 	X(POP(di));	// 101403 pop     di ;~ 2F3D:06E3
cs=0x2f3d;eip=0x0006e4; 	T(MOV(sp, bp));	// 101404 mov     sp, bp ;~ 2F3D:06E4
cs=0x2f3d;eip=0x0006e6; 	X(POP(bp));	// 101405 pop     bp ;~ 2F3D:06E6
cs=0x2f3d;eip=0x0006e7; 	R(RETF(0));	// 101406 retf ;~ 2F3D:06E7
sub_3e098:
	// 101414 
#undef arg_0
#define arg_0 6
	// 101417 arg_0           = word ptr  6 ;~ 2F3D:06E8
cs=0x2f3d;eip=0x0006e8; 	X(PUSH(bp));	// 101419 push    bp ;~ 2F3D:06E8
cs=0x2f3d;eip=0x0006e9; 	T(MOV(bp, sp));	// 101420 mov     bp, sp ;~ 2F3D:06E9
cs=0x2f3d;eip=0x0006eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 101421 mov     bx, [bp+arg_0] ;~ 2F3D:06EB
cs=0x2f3d;eip=0x0006ee; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 101422 mov     ax, [bx] ;~ 2F3D:06EE
cs=0x2f3d;eip=0x0006f0; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 101423 mov     bx, word ptr unk_47A9A ;~ 2F3D:06F0
cs=0x2f3d;eip=0x0006f4; 	T(MOV(dx, bx));	// 101424 mov     dx, bx ;~ 2F3D:06F4
cs=0x2f3d;eip=0x0006f6; 	T(MOV(es, dx));	// 101425 mov     es, dx ;~ 2F3D:06F6
cs=0x2f3d;eip=0x0006f8; 	T(MOV(bx, ax));	// 101426 mov     bx, ax ;~ 2F3D:06F8
cs=0x2f3d;eip=0x0006fa; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 101427 and     byte ptr es:[bx+2], 0FEh ;~ 2F3D:06FA
cs=0x2f3d;eip=0x0006ff; 	X(POP(bp));	// 101428 pop     bp ;~ 2F3D:06FF
cs=0x2f3d;eip=0x000700; 	R(RETF(0));	// 101429 retf ;~ 2F3D:0700
sub_3e0b1:
	// 101437 
#undef arg_0
#define arg_0 6
	// 101439 arg_0           = byte ptr  6 ;~ 2F3D:0701
cs=0x2f3d;eip=0x000701; 	X(PUSH(bp));	// 101441 push    bp ;~ 2F3D:0701
cs=0x2f3d;eip=0x000702; 	T(MOV(bp, sp));	// 101442 mov     bp, sp ;~ 2F3D:0702
cs=0x2f3d;eip=0x000704; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 101443 cmp     [bp+arg_0], 0 ;~ 2F3D:0704
cs=0x2f3d;eip=0x000708; 	R(JZ(loc_3e0c5));	// 101444 jz      short loc_3E0C5 ;~ 2F3D:0708
cs=0x2f3d;eip=0x00070a; 	T(LES(bx, *(dd*)((&unk_4b076))));	// 101445 les     bx, dword ptr unk_4B076 ;~ 2F3D:070A
cs=0x2f3d;eip=0x00070e; 	X(OR(*(raddr(es,bx+2)), 1));	// 101447 or      byte ptr es:[bx+2], 1 ;~ 2F3D:070E
cs=0x2f3d;eip=0x000713; 	R(JMP(loc_3e0ce));	// 101448 jmp     short loc_3E0CE ;~ 2F3D:0713
loc_3e0c5:
	// 10846 
cs=0x2f3d;eip=0x000715; 	T(LES(bx, *(dd*)((&unk_4b076))));	// 101452 les     bx, dword ptr unk_4B076 ;~ 2F3D:0715
cs=0x2f3d;eip=0x000719; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 101453 and     byte ptr es:[bx+2], 0FEh ;~ 2F3D:0719
loc_3e0ce:
	// 10847 
cs=0x2f3d;eip=0x00071e; 	X(POP(bp));	// 101456 pop     bp ;~ 2F3D:071E
cs=0x2f3d;eip=0x00071f; 	R(RETF(0));	// 101457 retf ;~ 2F3D:071F
sub_3e0d0:
	// 101465 
#undef arg_0
#define arg_0 6
	// 101468 arg_0           = word ptr  6 ;~ 2F3D:0720
#undef arg_2
#define arg_2 8
	// 101469 arg_2           = word ptr  8 ;~ 2F3D:0720
#undef arg_4
#define arg_4 0x0A
	// 101470 arg_4           = word ptr  0Ah ;~ 2F3D:0720
#undef arg_6
#define arg_6 0x0C
	// 101471 arg_6           = word ptr  0Ch ;~ 2F3D:0720
#undef arg_8
#define arg_8 0x0E
	// 101472 arg_8           = word ptr  0Eh ;~ 2F3D:0720
#undef arg_a
#define arg_a 0x10
	// 101473 arg_A           = word ptr  10h ;~ 2F3D:0720
cs=0x2f3d;eip=0x000720; 	X(PUSH(bp));	// 101475 push    bp ;~ 2F3D:0720
cs=0x2f3d;eip=0x000721; 	T(MOV(bp, sp));	// 101476 mov     bp, sp ;~ 2F3D:0721
cs=0x2f3d;eip=0x000723; 	T(LES(bx, *(dd*)((&unk_4b076))));	// 101477 les     bx, dword ptr unk_4B076 ;~ 2F3D:0723
cs=0x2f3d;eip=0x000727; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101478 mov     ax, [bp+arg_0] ;~ 2F3D:0727
cs=0x2f3d;eip=0x00072a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 101479 mov     dx, [bp+arg_2] ;~ 2F3D:072A
cs=0x2f3d;eip=0x00072d; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 101480 mov     es:[bx+6], ax ;~ 2F3D:072D
cs=0x2f3d;eip=0x000731; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 101481 mov     es:[bx+8], dx ;~ 2F3D:0731
cs=0x2f3d;eip=0x000735; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 101482 mov     ax, [bp+arg_4] ;~ 2F3D:0735
cs=0x2f3d;eip=0x000738; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 101483 mov     dx, [bp+arg_6] ;~ 2F3D:0738
cs=0x2f3d;eip=0x00073b; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 101484 mov     es:[bx+0Ah], ax ;~ 2F3D:073B
cs=0x2f3d;eip=0x00073f; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 101485 mov     es:[bx+0Ch], dx ;~ 2F3D:073F
cs=0x2f3d;eip=0x000743; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 101486 mov     ax, [bp+arg_8] ;~ 2F3D:0743
cs=0x2f3d;eip=0x000746; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 101487 mov     dx, [bp+arg_A] ;~ 2F3D:0746
cs=0x2f3d;eip=0x000749; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 101488 mov     es:[bx+0Eh], ax ;~ 2F3D:0749
cs=0x2f3d;eip=0x00074d; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 101489 mov     es:[bx+10h], dx ;~ 2F3D:074D
cs=0x2f3d;eip=0x000751; 	X(POP(bp));	// 101490 pop     bp ;~ 2F3D:0751
cs=0x2f3d;eip=0x000752; 	R(RETF(0));	// 101491 retf ;~ 2F3D:0752
sub_3e103:
	// 101499 
#undef arg_0
#define arg_0 6
	// 101501 arg_0           = word ptr  6 ;~ 2F3D:0753
#undef arg_6
#define arg_6 0x0C
	// 101502 arg_6           = word ptr  0Ch ;~ 2F3D:0753
cs=0x2f3d;eip=0x000753; 	X(PUSH(bp));	// 101504 push    bp ;~ 2F3D:0753
cs=0x2f3d;eip=0x000754; 	T(MOV(bp, sp));	// 101505 mov     bp, sp ;~ 2F3D:0754
cs=0x2f3d;eip=0x000756; 	T(SUB(sp, 0x0A));	// 101506 sub     sp, 0Ah ;~ 2F3D:0756
cs=0x2f3d;eip=0x000759; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101507 mov     ax, [bp+arg_0] ;~ 2F3D:0759
cs=0x2f3d;eip=0x00075c; 	T(CWD);	// 101508 cwd ;~ 2F3D:075C
cs=0x2f3d;eip=0x00075d; 	T(MOV(dh, dl));	// 101509 mov     dh, dl ;~ 2F3D:075D
cs=0x2f3d;eip=0x00075f; 	T(MOV(dl, ah));	// 101510 mov     dl, ah ;~ 2F3D:075F
cs=0x2f3d;eip=0x000761; 	T(MOV(ah, al));	// 101511 mov     ah, al ;~ 2F3D:0761
cs=0x2f3d;eip=0x000763; 	T(SUB(al, al));	// 101512 sub     al, al ;~ 2F3D:0763
cs=0x2f3d;eip=0x000765; 	T(MOV(ax, dx));	// 101513 mov     ax, dx ;~ 2F3D:0765
cs=0x2f3d;eip=0x000767; 	X(MOV(*(dw*)((&unk_4e918)), ax));	// 101514 mov     word ptr unk_4E918, ax ;~ 2F3D:0767
cs=0x2f3d;eip=0x00076a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 101515 mov     ax, [bp+arg_6] ;~ 2F3D:076A
cs=0x2f3d;eip=0x00076d; 	T(CWD);	// 101516 cwd ;~ 2F3D:076D
cs=0x2f3d;eip=0x00076e; 	T(MOV(dh, dl));	// 101517 mov     dh, dl ;~ 2F3D:076E
cs=0x2f3d;eip=0x000770; 	T(MOV(dl, ah));	// 101518 mov     dl, ah ;~ 2F3D:0770
cs=0x2f3d;eip=0x000772; 	T(MOV(ah, al));	// 101519 mov     ah, al ;~ 2F3D:0772
cs=0x2f3d;eip=0x000774; 	T(SUB(al, al));	// 101520 sub     al, al ;~ 2F3D:0774
cs=0x2f3d;eip=0x000776; 	X(MOV(*(dw*)((&unk_54620)), ax));	// 101521 mov     word ptr unk_54620, ax ;~ 2F3D:0776
cs=0x2f3d;eip=0x000779; 	X(MOV(*(dw*)((&unk_54622)), dx));	// 101522 mov     word ptr unk_54622, dx ;~ 2F3D:0779
cs=0x2f3d;eip=0x00077d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 101523 mov     ax, [bp+arg_6] ;~ 2F3D:077D
cs=0x2f3d;eip=0x000780; 	T(DEC(ax));	// 101524 dec     ax ;~ 2F3D:0780
cs=0x2f3d;eip=0x000781; 	T(CWD);	// 101525 cwd ;~ 2F3D:0781
cs=0x2f3d;eip=0x000782; 	T(MOV(dh, dl));	// 101526 mov     dh, dl ;~ 2F3D:0782
cs=0x2f3d;eip=0x000784; 	T(MOV(dl, ah));	// 101527 mov     dl, ah ;~ 2F3D:0784
cs=0x2f3d;eip=0x000786; 	T(MOV(ah, al));	// 101528 mov     ah, al ;~ 2F3D:0786
cs=0x2f3d;eip=0x000788; 	T(MOV(al, 0x0FF));	// 101529 mov     al, 0FFh ;~ 2F3D:0788
cs=0x2f3d;eip=0x00078a; 	T(NOT(ax));	// 101530 not     ax ;~ 2F3D:078A
cs=0x2f3d;eip=0x00078c; 	T(NOT(dx));	// 101531 not     dx ;~ 2F3D:078C
cs=0x2f3d;eip=0x00078e; 	X(MOV(*(dw*)((&unk_5461c)), ax));	// 101532 mov     word ptr unk_5461C, ax ;~ 2F3D:078E
cs=0x2f3d;eip=0x000791; 	X(MOV(*(dw*)((&unk_5461e)), dx));	// 101533 mov     word ptr unk_5461E, dx ;~ 2F3D:0791
cs=0x2f3d;eip=0x000795; 	T(MOV(sp, bp));	// 101534 mov     sp, bp ;~ 2F3D:0795
cs=0x2f3d;eip=0x000797; 	X(POP(bp));	// 101535 pop     bp ;~ 2F3D:0797
cs=0x2f3d;eip=0x000798; 	R(RETF(0));	// 101536 retf ;~ 2F3D:0798
sub_3e149:
	// 101544 
#undef var_4
#define var_4 -4
	// 101547 var_4           = word ptr -4 ;~ 2F3D:0799
#undef var_2
#define var_2 -2
	// 101548 var_2           = word ptr -2 ;~ 2F3D:0799
#undef arg_0
#define arg_0 6
	// 101549 arg_0           = word ptr  6 ;~ 2F3D:0799
#undef arg_2
#define arg_2 8
	// 101550 arg_2           = word ptr  8 ;~ 2F3D:0799
#undef arg_8
#define arg_8 0x0E
	// 101551 arg_8           = word ptr  0Eh ;~ 2F3D:0799
#undef arg_a
#define arg_a 0x10
	// 101552 arg_A           = word ptr  10h ;~ 2F3D:0799
cs=0x2f3d;eip=0x000799; 	X(PUSH(bp));	// 101554 push    bp ;~ 2F3D:0799
cs=0x2f3d;eip=0x00079a; 	T(MOV(bp, sp));	// 101555 mov     bp, sp ;~ 2F3D:079A
cs=0x2f3d;eip=0x00079c; 	T(SUB(sp, 4));	// 101556 sub     sp, 4 ;~ 2F3D:079C
cs=0x2f3d;eip=0x00079f; 	T(MOV(ax, *(dw*)((&unk_54620))));	// 101557 mov     ax, word ptr unk_54620 ;~ 2F3D:079F
cs=0x2f3d;eip=0x0007a2; 	T(MOV(dx, *(dw*)((&unk_54622))));	// 101558 mov     dx, word ptr unk_54622 ;~ 2F3D:07A2
cs=0x2f3d;eip=0x0007a6; 	T(MOV(cl, 1));	// 101559 mov     cl, 1 ;~ 2F3D:07A6
cs=0x2f3d;eip=0x0007a8; 	T(SUB(cl, unk_4e916));	// 101560 sub     cl, byte ptr unk_4E916 ;~ 2F3D:07A8
cs=0x2f3d;eip=0x0007ac; 	R(CALLF(sub_10240,0));	// 101561 call    sub_10240 ;~ 2F3D:07AC
cs=0x2f3d;eip=0x0007b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 101562 mov     [bp+var_4], ax ;~ 2F3D:07B1
cs=0x2f3d;eip=0x0007b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 101563 mov     [bp+var_2], dx ;~ 2F3D:07B4
cs=0x2f3d;eip=0x0007b7; 	T(LES(bx, *(dd*)((&unk_4b072))));	// 101564 les     bx, dword ptr unk_4B072 ;~ 2F3D:07B7
cs=0x2f3d;eip=0x0007bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101565 mov     ax, [bp+arg_0] ;~ 2F3D:07BB
cs=0x2f3d;eip=0x0007be; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 101566 mov     dx, [bp+arg_2] ;~ 2F3D:07BE
cs=0x2f3d;eip=0x0007c1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 101567 add     ax, [bp+var_4] ;~ 2F3D:07C1
cs=0x2f3d;eip=0x0007c4; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_2))));	// 101568 adc     dx, [bp+var_2] ;~ 2F3D:07C4
cs=0x2f3d;eip=0x0007c7; 	T(AND(ax, *(dw*)((&unk_5461c))));	// 101569 and     ax, word ptr unk_5461C ;~ 2F3D:07C7
cs=0x2f3d;eip=0x0007cb; 	T(AND(dx, *(dw*)((&unk_5461e))));	// 101570 and     dx, word ptr unk_5461E ;~ 2F3D:07CB
cs=0x2f3d;eip=0x0007cf; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 101571 mov     es:[bx+6], ax ;~ 2F3D:07CF
cs=0x2f3d;eip=0x0007d3; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 101572 mov     es:[bx+8], dx ;~ 2F3D:07D3
cs=0x2f3d;eip=0x0007d7; 	T(SUB(ax, ax));	// 101573 sub     ax, ax ;~ 2F3D:07D7
cs=0x2f3d;eip=0x0007d9; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 101574 mov     es:[bx+0Ch], ax ;~ 2F3D:07D9
cs=0x2f3d;eip=0x0007dd; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 101575 mov     es:[bx+0Ah], ax ;~ 2F3D:07DD
cs=0x2f3d;eip=0x0007e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 101576 mov     ax, [bp+arg_8] ;~ 2F3D:07E1
cs=0x2f3d;eip=0x0007e4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 101577 mov     dx, [bp+arg_A] ;~ 2F3D:07E4
cs=0x2f3d;eip=0x0007e7; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 101578 add     ax, [bp+var_4] ;~ 2F3D:07E7
cs=0x2f3d;eip=0x0007ea; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_2))));	// 101579 adc     dx, [bp+var_2] ;~ 2F3D:07EA
cs=0x2f3d;eip=0x0007ed; 	T(AND(ax, *(dw*)((&unk_5461c))));	// 101580 and     ax, word ptr unk_5461C ;~ 2F3D:07ED
cs=0x2f3d;eip=0x0007f1; 	T(AND(dx, *(dw*)((&unk_5461e))));	// 101581 and     dx, word ptr unk_5461E ;~ 2F3D:07F1
cs=0x2f3d;eip=0x0007f5; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 101582 mov     es:[bx+0Eh], ax ;~ 2F3D:07F5
cs=0x2f3d;eip=0x0007f9; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 101583 mov     es:[bx+10h], dx ;~ 2F3D:07F9
cs=0x2f3d;eip=0x0007fd; 	T(MOV(sp, bp));	// 101584 mov     sp, bp ;~ 2F3D:07FD
cs=0x2f3d;eip=0x0007ff; 	X(POP(bp));	// 101585 pop     bp ;~ 2F3D:07FF
cs=0x2f3d;eip=0x000800; 	R(RETF(0));	// 101586 retf ;~ 2F3D:0800
sub_3e1b1:
	// 101594 
#undef arg_0
#define arg_0 6
	// 101596 arg_0           = byte ptr  6 ;~ 2F3D:0801
cs=0x2f3d;eip=0x000801; 	X(PUSH(bp));	// 101598 push    bp ;~ 2F3D:0801
cs=0x2f3d;eip=0x000802; 	T(MOV(bp, sp));	// 101599 mov     bp, sp ;~ 2F3D:0802
cs=0x2f3d;eip=0x000804; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 101600 cmp     [bp+arg_0], 0 ;~ 2F3D:0804
cs=0x2f3d;eip=0x000808; 	R(JZ(loc_3e1c5));	// 101601 jz      short loc_3E1C5 ;~ 2F3D:0808
cs=0x2f3d;eip=0x00080a; 	T(LES(bx, *(dd*)((&unk_4b072))));	// 101602 les     bx, dword ptr unk_4B072 ;~ 2F3D:080A
cs=0x2f3d;eip=0x00080e; 	X(OR(*(raddr(es,bx+2)), 1));	// 101603 or      byte ptr es:[bx+2], 1 ;~ 2F3D:080E
cs=0x2f3d;eip=0x000813; 	R(JMP(loc_3e1ce));	// 101604 jmp     short loc_3E1CE ;~ 2F3D:0813
loc_3e1c5:
	// 10848 
cs=0x2f3d;eip=0x000815; 	T(LES(bx, *(dd*)((&unk_4b072))));	// 101608 les     bx, dword ptr unk_4B072 ;~ 2F3D:0815
cs=0x2f3d;eip=0x000819; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 101609 and     byte ptr es:[bx+2], 0FEh ;~ 2F3D:0819
loc_3e1ce:
	// 10849 
cs=0x2f3d;eip=0x00081e; 	X(POP(bp));	// 101612 pop     bp ;~ 2F3D:081E
cs=0x2f3d;eip=0x00081f; 	R(RETF(0));	// 101613 retf ;~ 2F3D:081F
sub_3e1d3:
	// 101625 
#undef var_14
#define var_14 -0x14
	// 101628 var_14          = word ptr -14h ;~ 2F3D:0823
#undef var_12
#define var_12 -0x12
	// 101629 var_12          = word ptr -12h ;~ 2F3D:0823
#undef var_10
#define var_10 -0x10
	// 101630 var_10          = dword ptr -10h ;~ 2F3D:0823
#undef var_c
#define var_c -0x0C
	// 101631 var_C           = dword ptr -0Ch ;~ 2F3D:0823
#undef var_8
#define var_8 -8
	// 101632 var_8           = dword ptr -8 ;~ 2F3D:0823
#undef arg_0
#define arg_0 6
	// 101633 arg_0           = word ptr  6 ;~ 2F3D:0823
cs=0x2f3d;eip=0x000823; 	X(PUSH(bp));	// 101635 push    bp ;~ 2F3D:0823
cs=0x2f3d;eip=0x000824; 	T(MOV(bp, sp));	// 101636 mov     bp, sp ;~ 2F3D:0824
cs=0x2f3d;eip=0x000826; 	T(SUB(sp, 0x14));	// 101637 sub     sp, 14h ;~ 2F3D:0826
cs=0x2f3d;eip=0x000829; 	X(PUSH(di));	// 101638 push    di ;~ 2F3D:0829
cs=0x2f3d;eip=0x00082a; 	X(PUSH(si));	// 101639 push    si ;~ 2F3D:082A
cs=0x2f3d;eip=0x00082b; 	T(MOV(ax, *(dw*)((&unk_4b096))));	// 101640 mov     ax, word ptr unk_4B096 ;~ 2F3D:082B
cs=0x2f3d;eip=0x00082e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 101641 cmp     [bp+arg_0], ax ;~ 2F3D:082E
cs=0x2f3d;eip=0x000831; 	R(JNZ(loc_3e1e6));	// 101642 jnz     short loc_3E1E6 ;~ 2F3D:0831
cs=0x2f3d;eip=0x000833; 	R(JMP(loc_3e26e));	// 101643 jmp     loc_3E26E ;~ 2F3D:0833
loc_3e1e6:
	// 10850 
cs=0x2f3d;eip=0x000836; 	T(CMP(ax, 0x0FFFF));	// 101647 cmp     ax, 0FFFFh ;~ 2F3D:0836
cs=0x2f3d;eip=0x000839; 	R(JNZ(loc_3e1ee));	// 101648 jnz     short loc_3E1EE ;~ 2F3D:0839
cs=0x2f3d;eip=0x00083b; 	R(JMP(loc_3e26e));	// 101649 jmp     loc_3E26E ;~ 2F3D:083B
loc_3e1ee:
	// 10851 
cs=0x2f3d;eip=0x00083e; 	T(SUB(si, si));	// 101653 sub     si, si ;~ 2F3D:083E
cs=0x2f3d;eip=0x000840; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), si));	// 101654 mov     [bp+var_14], si ;~ 2F3D:0840
cs=0x2f3d;eip=0x000843; 	T(MOV(ax, si));	// 101655 mov     ax, si ;~ 2F3D:0843
cs=0x2f3d;eip=0x000845; 	T(ADD(ax, 0x132));	// 101656 add     ax, 132h ;~ 2F3D:0845
cs=0x2f3d;eip=0x000848; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 101657 mov     word ptr [bp+var_8], ax ;~ 2F3D:0848
cs=0x2f3d;eip=0x00084b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), seg_offset(seg042)));	// 101658 mov     word ptr [bp+var_8+2], seg seg042 ;~ 2F3D:084B
cs=0x2f3d;eip=0x000850; 	T(MOV(ax, si));	// 101659 mov     ax, si ;~ 2F3D:0850
cs=0x2f3d;eip=0x000852; 	T(ADD(ax, 0x0DA));	// 101660 add     ax, 0DAh ; 'Ú' ;~ 2F3D:0852
cs=0x2f3d;eip=0x000855; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 101661 mov     word ptr [bp+var_C], ax ;~ 2F3D:0855
cs=0x2f3d;eip=0x000858; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), seg_offset(seg042)));	// 101662 mov     word ptr [bp+var_C+2], seg seg042 ;~ 2F3D:0858
cs=0x2f3d;eip=0x00085d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 101663 mov     dx, word ptr [bp+var_C+2] ;~ 2F3D:085D
cs=0x2f3d;eip=0x000860; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 101664 mov     word ptr [bp+var_10], ax ;~ 2F3D:0860
cs=0x2f3d;eip=0x000863; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 101665 mov     word ptr [bp+var_10+2], dx ;~ 2F3D:0863
cs=0x2f3d;eip=0x000866; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0x2C));	// 101666 mov     [bp+var_12], 2Ch ; ',' ;~ 2F3D:0866
cs=0x2f3d;eip=0x00086b; 	T(ADD(si, 0x2C));	// 101667 add     si, 2Ch ; ',' ;~ 2F3D:086B
loc_3e21e:
	// 10852 
cs=0x2f3d;eip=0x00086e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 101670 les     bx, [bp+var_8] ;~ 2F3D:086E
cs=0x2f3d;eip=0x000871; 	T(MOV(di, *(dw*)(raddr(es,bx))));	// 101671 mov     di, es:[bx] ;~ 2F3D:0871
cs=0x2f3d;eip=0x000874; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 101672 cmp     [bp+arg_0], 1 ;~ 2F3D:0874
cs=0x2f3d;eip=0x000878; 	R(JNZ(loc_3e235));	// 101673 jnz     short loc_3E235 ;~ 2F3D:0878
cs=0x2f3d;eip=0x00087a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 101674 les     bx, [bp+var_C] ;~ 2F3D:087A
cs=0x2f3d;eip=0x00087d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 101675 mov     ax, es:[bx] ;~ 2F3D:087D
cs=0x2f3d;eip=0x000880; 	X(MOV(*(dw*)(raddr(ds,di+0x48)), ax));	// 101676 mov     [di+48h], ax ;~ 2F3D:0880
cs=0x2f3d;eip=0x000883; 	R(JMP(loc_3e24e));	// 101677 jmp     short loc_3E24E ;~ 2F3D:0883
loc_3e235:
	// 10853 
cs=0x2f3d;eip=0x000885; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 101681 les     bx, [bp+var_10] ;~ 2F3D:0885
cs=0x2f3d;eip=0x000888; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x48))));	// 101682 mov     ax, [di+48h] ;~ 2F3D:0888
cs=0x2f3d;eip=0x00088b; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 101683 mov     es:[bx], ax ;~ 2F3D:088B
cs=0x2f3d;eip=0x00088e; 	X(MOV(*(dw*)(raddr(ds,di+0x48)), 0));	// 101684 mov     word ptr [di+48h], 0 ;~ 2F3D:088E
cs=0x2f3d;eip=0x000893; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFF));	// 101685 cmp     [bp+arg_0], 0FFFFh ;~ 2F3D:0893
cs=0x2f3d;eip=0x000897; 	R(JNZ(loc_3e24e));	// 101686 jnz     short loc_3E24E ;~ 2F3D:0897
cs=0x2f3d;eip=0x000899; 	X(MOV(*(dw*)(raddr(ds,di+0x14)), 0));	// 101687 mov     word ptr [di+14h], 0 ;~ 2F3D:0899
loc_3e24e:
	// 10854 
cs=0x2f3d;eip=0x00089e; 	X(PUSH(di));	// 101691 push    di ;~ 2F3D:089E
cs=0x2f3d;eip=0x00089f; 	R(CALLF(sub_25e68,0));	// 101692 call    sub_25E68 ;~ 2F3D:089F
cs=0x2f3d;eip=0x0008a4; 	T(ADD(sp, 2));	// 101693 add     sp, 2 ;~ 2F3D:08A4
cs=0x2f3d;eip=0x0008a7; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8))), 2));	// 101694 add     word ptr [bp+var_8], 2 ;~ 2F3D:08A7
cs=0x2f3d;eip=0x0008ab; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_c))), 2));	// 101695 add     word ptr [bp+var_C], 2 ;~ 2F3D:08AB
cs=0x2f3d;eip=0x0008af; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_10))), 2));	// 101696 add     word ptr [bp+var_10], 2 ;~ 2F3D:08AF
cs=0x2f3d;eip=0x0008b3; 	X(DEC(*(dw*)(raddr(ss,bp+var_12))));	// 101697 dec     [bp+var_12] ;~ 2F3D:08B3
cs=0x2f3d;eip=0x0008b6; 	R(JNZ(loc_3e21e));	// 101698 jnz     short loc_3E21E ;~ 2F3D:08B6
cs=0x2f3d;eip=0x0008b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101699 mov     ax, [bp+arg_0] ;~ 2F3D:08B8
cs=0x2f3d;eip=0x0008bb; 	X(MOV(*(dw*)((&unk_4b096)), ax));	// 101700 mov     word ptr unk_4B096, ax ;~ 2F3D:08BB
loc_3e26e:
	// 10855 
cs=0x2f3d;eip=0x0008be; 	X(POP(si));	// 101704 pop     si ;~ 2F3D:08BE
cs=0x2f3d;eip=0x0008bf; 	X(POP(di));	// 101705 pop     di ;~ 2F3D:08BF
cs=0x2f3d;eip=0x0008c0; 	T(MOV(sp, bp));	// 101706 mov     sp, bp ;~ 2F3D:08C0
cs=0x2f3d;eip=0x0008c2; 	X(POP(bp));	// 101707 pop     bp ;~ 2F3D:08C2
cs=0x2f3d;eip=0x0008c3; 	R(RETF(2));	// 101708 retf    2 ;~ 2F3D:08C3
sub_3e27a:
	// 101726 
#undef arg_0
#define arg_0 4
	// 101729 arg_0           = word ptr  4 ;~ 2F3D:08CA
cs=0x2f3d;eip=0x0008ca; 	X(PUSH(bp));	// 101731 push    bp ;~ 2F3D:08CA
cs=0x2f3d;eip=0x0008cb; 	T(MOV(bp, sp));	// 101732 mov     bp, sp ;~ 2F3D:08CB
cs=0x2f3d;eip=0x0008cd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 101733 mov     bx, [bp+arg_0] ;~ 2F3D:08CD
cs=0x2f3d;eip=0x0008d0; 	X(MOV(*(raddr(ds,bx)), 1));	// 101734 mov     byte ptr [bx], 1 ;~ 2F3D:08D0
cs=0x2f3d;eip=0x0008d3; 	T(LES(bx, *(dd*)((&unk_56bb1))));	// 101735 les     bx, dword ptr unk_56BB1 ;~ 2F3D:08D3
cs=0x2f3d;eip=0x0008d7; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), 0));	// 101736 cmp     word ptr es:[bx+0Ch], 0 ;~ 2F3D:08D7
cs=0x2f3d;eip=0x0008dc; 	R(JG(loc_3e2a5));	// 101737 jg      short loc_3E2A5 ;~ 2F3D:08DC
cs=0x2f3d;eip=0x0008de; 	R(JL(loc_3e298));	// 101738 jl      short loc_3E298 ;~ 2F3D:08DE
cs=0x2f3d;eip=0x0008e0; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), 0x6400));	// 101739 cmp     word ptr es:[bx+0Ah], 6400h ;~ 2F3D:08E0
cs=0x2f3d;eip=0x0008e6; 	R(JNC(loc_3e2a5));	// 101740 jnb     short loc_3E2A5 ;~ 2F3D:08E6
loc_3e298:
	// 10858 
cs=0x2f3d;eip=0x0008e8; 	T(CMP(*(raddr(es,bx+0x24)), 7));	// 101743 cmp     byte ptr es:[bx+24h], 7 ;~ 2F3D:08E8
cs=0x2f3d;eip=0x0008ed; 	R(JZ(loc_3e2a5));	// 101744 jz      short loc_3E2A5 ;~ 2F3D:08ED
cs=0x2f3d;eip=0x0008ef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 101745 mov     bx, [bp+arg_0] ;~ 2F3D:08EF
cs=0x2f3d;eip=0x0008f2; 	X(MOV(*(raddr(ds,bx)), 3));	// 101746 mov     byte ptr [bx], 3 ;~ 2F3D:08F2
loc_3e2a5:
	// 10859 
cs=0x2f3d;eip=0x0008f5; 	X(POP(bp));	// 101750 pop     bp ;~ 2F3D:08F5
cs=0x2f3d;eip=0x0008f6; 	R(RETN(2));	// 101751 retn    2 ;~ 2F3D:08F6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3d9c9: 	goto loc_3d9c9;
        case m2c::kloc_3d9d5: 	goto loc_3d9d5;
        case m2c::kloc_3d9e4: 	goto loc_3d9e4;
        case m2c::kloc_3d9f0: 	goto loc_3d9f0;
        case m2c::kloc_3d9f4: 	goto loc_3d9f4;
        case m2c::kloc_3da07: 	goto loc_3da07;
        case m2c::kloc_3da20: 	goto loc_3da20;
        case m2c::kloc_3da2c: 	goto loc_3da2c;
        case m2c::kloc_3da3e: 	goto loc_3da3e;
        case m2c::kloc_3da42: 	goto loc_3da42;
        case m2c::kloc_3daaa: 	goto loc_3daaa;
        case m2c::kloc_3dab7: 	goto loc_3dab7;
        case m2c::kloc_3dabe: 	goto loc_3dabe;
        case m2c::kloc_3dad4: 	goto loc_3dad4;
        case m2c::kloc_3dae1: 	goto loc_3dae1;
        case m2c::kloc_3dae8: 	goto loc_3dae8;
        case m2c::kloc_3daf7: 	goto loc_3daf7;
        case m2c::kloc_3db07: 	goto loc_3db07;
        case m2c::kloc_3db0f: 	goto loc_3db0f;
        case m2c::kloc_3db3b: 	goto loc_3db3b;
        case m2c::kloc_3db4b: 	goto loc_3db4b;
        case m2c::kloc_3db61: 	goto loc_3db61;
        case m2c::kloc_3db67: 	goto loc_3db67;
        case m2c::kloc_3db77: 	goto loc_3db77;
        case m2c::kloc_3db87: 	goto loc_3db87;
        case m2c::kloc_3db9f: 	goto loc_3db9f;
        case m2c::kloc_3dbaa: 	goto loc_3dbaa;
        case m2c::kloc_3dbb9: 	goto loc_3dbb9;
        case m2c::kloc_3dbdd: 	goto loc_3dbdd;
        case m2c::kloc_3dbe5: 	goto loc_3dbe5;
        case m2c::kloc_3dc0a: 	goto loc_3dc0a;
        case m2c::kloc_3dc0f: 	goto loc_3dc0f;
        case m2c::kloc_3dc11: 	goto loc_3dc11;
        case m2c::kloc_3dc1c: 	goto loc_3dc1c;
        case m2c::kloc_3dc22: 	goto loc_3dc22;
        case m2c::kloc_3dc40: 	goto loc_3dc40;
        case m2c::kloc_3dc4c: 	goto loc_3dc4c;
        case m2c::kloc_3dc7b: 	goto loc_3dc7b;
        case m2c::kloc_3dc86: 	goto loc_3dc86;
        case m2c::kloc_3dca6: 	goto loc_3dca6;
        case m2c::kloc_3dcab: 	goto loc_3dcab;
        case m2c::kloc_3dcde: 	goto loc_3dcde;
        case m2c::kloc_3dd55: 	goto loc_3dd55;
        case m2c::kloc_3dd75: 	goto loc_3dd75;
        case m2c::kloc_3dda6: 	goto loc_3dda6;
        case m2c::kloc_3ddc8: 	goto loc_3ddc8;
        case m2c::kloc_3ddea: 	goto loc_3ddea;
        case m2c::kloc_3de12: 	goto loc_3de12;
        case m2c::kloc_3de3a: 	goto loc_3de3a;
        case m2c::kloc_3de3c: 	goto loc_3de3c;
        case m2c::kloc_3de46: 	goto loc_3de46;
        case m2c::kloc_3de7e: 	goto loc_3de7e;
        case m2c::kloc_3de94: 	goto loc_3de94;
        case m2c::kloc_3de98: 	goto loc_3de98;
        case m2c::kloc_3ded3: 	goto loc_3ded3;
        case m2c::kloc_3dedd: 	goto loc_3dedd;
        case m2c::kloc_3deeb: 	goto loc_3deeb;
        case m2c::kloc_3deed: 	goto loc_3deed;
        case m2c::kloc_3def3: 	goto loc_3def3;
        case m2c::kloc_3def7: 	goto loc_3def7;
        case m2c::kloc_3df0c: 	goto loc_3df0c;
        case m2c::kloc_3df10: 	goto loc_3df10;
        case m2c::kloc_3df2f: 	goto loc_3df2f;
        case m2c::kloc_3df61: 	goto loc_3df61;
        case m2c::kloc_3df73: 	goto loc_3df73;
        case m2c::kloc_3df8a: 	goto loc_3df8a;
        case m2c::kloc_3df95: 	goto loc_3df95;
        case m2c::kloc_3dfbd: 	goto loc_3dfbd;
        case m2c::kloc_3dfd0: 	goto loc_3dfd0;
        case m2c::kloc_3dfeb: 	goto loc_3dfeb;
        case m2c::kloc_3dff6: 	goto loc_3dff6;
        case m2c::kloc_3e008: 	goto loc_3e008;
        case m2c::kloc_3e016: 	goto loc_3e016;
        case m2c::kloc_3e019: 	goto loc_3e019;
        case m2c::kloc_3e027: 	goto loc_3e027;
        case m2c::kloc_3e039: 	goto loc_3e039;
        case m2c::kloc_3e03b: 	goto loc_3e03b;
        case m2c::kloc_3e0c5: 	goto loc_3e0c5;
        case m2c::kloc_3e0ce: 	goto loc_3e0ce;
        case m2c::kloc_3e1c5: 	goto loc_3e1c5;
        case m2c::kloc_3e1ce: 	goto loc_3e1ce;
        case m2c::kloc_3e1e6: 	goto loc_3e1e6;
        case m2c::kloc_3e1ee: 	goto loc_3e1ee;
        case m2c::kloc_3e21e: 	goto loc_3e21e;
        case m2c::kloc_3e235: 	goto loc_3e235;
        case m2c::kloc_3e24e: 	goto loc_3e24e;
        case m2c::kloc_3e26e: 	goto loc_3e26e;
        case m2c::kloc_3e277: 	goto loc_3e277;
        case m2c::kloc_3e298: 	goto loc_3e298;
        case m2c::kloc_3e2a5: 	goto loc_3e2a5;
        case m2c::klocret_3df2e: 	goto locret_3df2e;
        case m2c::klocret_3df4d: 	goto locret_3df4d;
        case m2c::klocret_3e276: 	goto locret_3e276;
        case m2c::kret_2f3d_59e: 	goto ret_2f3d_59e;
        case m2c::kseg029_proc: 	goto seg029_proc;
        case m2c::ksub_3d9b2: 	goto sub_3d9b2;
        case m2c::ksub_3da0d: 	goto sub_3da0d;
        case m2c::ksub_3da51: 	goto sub_3da51;
        case m2c::ksub_3db15: 	goto sub_3db15;
        case m2c::ksub_3db22: 	goto sub_3db22;
        case m2c::ksub_3df4f: 	goto sub_3df4f;
        case m2c::ksub_3df7e: 	goto sub_3df7e;
        case m2c::ksub_3dfa0: 	goto sub_3dfa0;
        case m2c::ksub_3e098: 	goto sub_3e098;
        case m2c::ksub_3e0b1: 	goto sub_3e0b1;
        case m2c::ksub_3e0d0: 	goto sub_3e0d0;
        case m2c::ksub_3e103: 	goto sub_3e103;
        case m2c::ksub_3e149: 	goto sub_3e149;
        case m2c::ksub_3e1b1: 	goto sub_3e1b1;
        case m2c::ksub_3e1d3: 	goto sub_3e1d3;
        case m2c::ksub_3e27a: 	goto sub_3e27a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

