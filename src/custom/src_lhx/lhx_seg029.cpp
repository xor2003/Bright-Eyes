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
	// 100396 
#undef var_4
#define var_4 -4
	// 100398 var_4           = dword ptr -4 ;~ 2F3D:0002
cs=0x2f3d;eip=0x000002; 	X(PUSH(bp));	// 100400 push    bp ;~ 2F3D:0002
cs=0x2f3d;eip=0x000003; 	T(MOV(bp, sp));	// 100401 mov     bp, sp ;~ 2F3D:0003
cs=0x2f3d;eip=0x000005; 	T(SUB(sp, 0x0A));	// 100402 sub     sp, 0Ah ;~ 2F3D:0005
cs=0x2f3d;eip=0x000008; 	X(PUSH(di));	// 100403 push    di ;~ 2F3D:0008
cs=0x2f3d;eip=0x000009; 	X(PUSH(si));	// 100404 push    si ;~ 2F3D:0009
cs=0x2f3d;eip=0x00000a; 	T(MOV(si, 1));	// 100405 mov     si, 1 ;~ 2F3D:000A
cs=0x2f3d;eip=0x00000d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), offset(seg042,unk_40f50)));	// 100406 mov     word ptr [bp+var_4], offset unk_40F50 ;~ 2F3D:000D
cs=0x2f3d;eip=0x000012; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), seg_offset(seg042)));	// 100407 mov     word ptr [bp+var_4+2], seg seg042 ;~ 2F3D:0012
cs=0x2f3d;eip=0x000017; 	R(JMP(loc_3d9f4));	// 100408 jmp     short loc_3D9F4 ;~ 2F3D:0017
loc_3d9c9:
	// 10758 
cs=0x2f3d;eip=0x000019; 	T(CMP(*(dw*)(raddr(ds,di+0x22)), 0));	// 100412 cmp     word ptr [di+22h], 0 ;~ 2F3D:0019
cs=0x2f3d;eip=0x00001d; 	R(JZ(loc_3d9d5));	// 100413 jz      short loc_3D9D5 ;~ 2F3D:001D
cs=0x2f3d;eip=0x00001f; 	X(PUSH(di));	// 100414 push    di ;~ 2F3D:001F
cs=0x2f3d;eip=0x000020; 	R(CALLF(sub_267b7,0));	// 100415 call    sub_267B7 ;~ 2F3D:0020
loc_3d9d5:
	// 10759 
cs=0x2f3d;eip=0x000025; 	X(PUSH(di));	// 100418 push    di ;~ 2F3D:0025
cs=0x2f3d;eip=0x000026; 	R(CALLF(sub_25033,0));	// 100419 call    far ptr sub_25033 ;~ 2F3D:0026
cs=0x2f3d;eip=0x00002b; 	T(OR(al, al));	// 100420 or      al, al ;~ 2F3D:002B
cs=0x2f3d;eip=0x00002d; 	R(JNZ(loc_3d9e4));	// 100421 jnz     short loc_3D9E4 ;~ 2F3D:002D
cs=0x2f3d;eip=0x00002f; 	R(CALLF(sub_2f82e,0));	// 100422 call    sub_2F82E ;~ 2F3D:002F
loc_3d9e4:
	// 10760 
cs=0x2f3d;eip=0x000034; 	T(CMP(*(dw*)(raddr(ds,di+0x22)), 0));	// 100426 cmp     word ptr [di+22h], 0 ;~ 2F3D:0034
cs=0x2f3d;eip=0x000038; 	R(JZ(loc_3d9f0));	// 100427 jz      short loc_3D9F0 ;~ 2F3D:0038
cs=0x2f3d;eip=0x00003a; 	X(PUSH(di));	// 100428 push    di ;~ 2F3D:003A
cs=0x2f3d;eip=0x00003b; 	R(CALLF(sub_26819,0));	// 100429 call    sub_26819 ;~ 2F3D:003B
loc_3d9f0:
	// 10761 
cs=0x2f3d;eip=0x000040; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 2));	// 100432 add     word ptr [bp+var_4], 2 ;~ 2F3D:0040
loc_3d9f4:
	// 10762 
cs=0x2f3d;eip=0x000044; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 100435 les     bx, [bp+var_4] ;~ 2F3D:0044
cs=0x2f3d;eip=0x000047; 	T(MOV(di, *(dw*)(raddr(es,bx))));	// 100436 mov     di, es:[bx] ;~ 2F3D:0047
cs=0x2f3d;eip=0x00004a; 	T(OR(di, di));	// 100437 or      di, di ;~ 2F3D:004A
cs=0x2f3d;eip=0x00004c; 	R(JNZ(loc_3d9c9));	// 100438 jnz     short loc_3D9C9 ;~ 2F3D:004C
cs=0x2f3d;eip=0x00004e; 	T(OR(si, si));	// 100439 or      si, si ;~ 2F3D:004E
cs=0x2f3d;eip=0x000050; 	R(JNZ(loc_3da07));	// 100440 jnz     short loc_3DA07 ;~ 2F3D:0050
cs=0x2f3d;eip=0x000052; 	R(CALLF(sub_315c9,0));	// 100441 call    sub_315C9 ;~ 2F3D:0052
loc_3da07:
	// 10763 
cs=0x2f3d;eip=0x000057; 	X(POP(si));	// 100445 pop     si ;~ 2F3D:0057
cs=0x2f3d;eip=0x000058; 	X(POP(di));	// 100446 pop     di ;~ 2F3D:0058
cs=0x2f3d;eip=0x000059; 	T(MOV(sp, bp));	// 100447 mov     sp, bp ;~ 2F3D:0059
cs=0x2f3d;eip=0x00005b; 	X(POP(bp));	// 100448 pop     bp ;~ 2F3D:005B
cs=0x2f3d;eip=0x00005c; 	R(RETF(0));	// 100449 retf ;~ 2F3D:005C
sub_3da0d:
	// 100457 
#undef var_4
#define var_4 -4
	// 100459 var_4           = dword ptr -4 ;~ 2F3D:005D
cs=0x2f3d;eip=0x00005d; 	X(PUSH(bp));	// 100461 push    bp ;~ 2F3D:005D
cs=0x2f3d;eip=0x00005e; 	T(MOV(bp, sp));	// 100462 mov     bp, sp ;~ 2F3D:005E
cs=0x2f3d;eip=0x000060; 	T(SUB(sp, 6));	// 100463 sub     sp, 6 ;~ 2F3D:0060
cs=0x2f3d;eip=0x000063; 	X(PUSH(si));	// 100464 push    si ;~ 2F3D:0063
cs=0x2f3d;eip=0x000064; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), offset(seg042,unk_40f50)));	// 100465 mov     word ptr [bp+var_4], offset unk_40F50 ;~ 2F3D:0064
cs=0x2f3d;eip=0x000069; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), seg_offset(seg042)));	// 100466 mov     word ptr [bp+var_4+2], seg seg042 ;~ 2F3D:0069
cs=0x2f3d;eip=0x00006e; 	R(JMP(loc_3da42));	// 100467 jmp     short loc_3DA42 ;~ 2F3D:006E
loc_3da20:
	// 10764 
cs=0x2f3d;eip=0x000070; 	T(CMP(*(dw*)(raddr(ds,si+0x22)), 0));	// 100471 cmp     word ptr [si+22h], 0 ;~ 2F3D:0070
cs=0x2f3d;eip=0x000074; 	R(JZ(loc_3da2c));	// 100472 jz      short loc_3DA2C ;~ 2F3D:0074
cs=0x2f3d;eip=0x000076; 	X(PUSH(si));	// 100473 push    si ;~ 2F3D:0076
cs=0x2f3d;eip=0x000077; 	R(CALLF(sub_267b7,0));	// 100474 call    sub_267B7 ;~ 2F3D:0077
loc_3da2c:
	// 10765 
cs=0x2f3d;eip=0x00007c; 	X(PUSH(si));	// 100477 push    si ;~ 2F3D:007C
cs=0x2f3d;eip=0x00007d; 	R(CALLF(sub_2636e,0));	// 100478 call    sub_2636E ;~ 2F3D:007D
cs=0x2f3d;eip=0x000082; 	T(CMP(*(dw*)(raddr(ds,si+0x22)), 0));	// 100479 cmp     word ptr [si+22h], 0 ;~ 2F3D:0082
cs=0x2f3d;eip=0x000086; 	R(JZ(loc_3da3e));	// 100480 jz      short loc_3DA3E ;~ 2F3D:0086
cs=0x2f3d;eip=0x000088; 	X(PUSH(si));	// 100481 push    si ;~ 2F3D:0088
cs=0x2f3d;eip=0x000089; 	R(CALLF(sub_26819,0));	// 100482 call    sub_26819 ;~ 2F3D:0089
loc_3da3e:
	// 10766 
cs=0x2f3d;eip=0x00008e; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_4))), 2));	// 100485 add     word ptr [bp+var_4], 2 ;~ 2F3D:008E
loc_3da42:
	// 10767 
cs=0x2f3d;eip=0x000092; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 100488 les     bx, [bp+var_4] ;~ 2F3D:0092
cs=0x2f3d;eip=0x000095; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 100489 mov     si, es:[bx] ;~ 2F3D:0095
cs=0x2f3d;eip=0x000098; 	T(OR(si, si));	// 100490 or      si, si ;~ 2F3D:0098
cs=0x2f3d;eip=0x00009a; 	R(JNZ(loc_3da20));	// 100491 jnz     short loc_3DA20 ;~ 2F3D:009A
cs=0x2f3d;eip=0x00009c; 	X(POP(si));	// 100492 pop     si ;~ 2F3D:009C
cs=0x2f3d;eip=0x00009d; 	T(MOV(sp, bp));	// 100493 mov     sp, bp ;~ 2F3D:009D
cs=0x2f3d;eip=0x00009f; 	X(POP(bp));	// 100494 pop     bp ;~ 2F3D:009F
cs=0x2f3d;eip=0x0000a0; 	R(RETF(0));	// 100495 retf ;~ 2F3D:00A0
sub_3da51:
	// 100503 
#undef var_4
#define var_4 -4
	// 100505 var_4           = word ptr -4 ;~ 2F3D:00A1
#undef var_2
#define var_2 -2
	// 100506 var_2           = word ptr -2 ;~ 2F3D:00A1
cs=0x2f3d;eip=0x0000a1; 	X(PUSH(bp));	// 100508 push    bp ;~ 2F3D:00A1
cs=0x2f3d;eip=0x0000a2; 	T(MOV(bp, sp));	// 100509 mov     bp, sp ;~ 2F3D:00A2
cs=0x2f3d;eip=0x0000a4; 	T(SUB(sp, 8));	// 100510 sub     sp, 8 ;~ 2F3D:00A4
cs=0x2f3d;eip=0x0000a7; 	X(PUSH(di));	// 100511 push    di ;~ 2F3D:00A7
cs=0x2f3d;eip=0x0000a8; 	X(PUSH(si));	// 100512 push    si ;~ 2F3D:00A8
cs=0x2f3d;eip=0x0000a9; 	T(MOV(al, 8));	// 100513 mov     al, 8 ;~ 2F3D:00A9
cs=0x2f3d;eip=0x0000ab; 	X(MOV(unk_4df3f, al));	// 100514 mov     byte ptr unk_4DF3F, al ;~ 2F3D:00AB
cs=0x2f3d;eip=0x0000ae; 	X(MOV(unk_4df2a, al));	// 100515 mov     byte ptr unk_4DF2A, al ;~ 2F3D:00AE
cs=0x2f3d;eip=0x0000b1; 	X(MOV(unk_4df20, al));	// 100516 mov     byte ptr unk_4DF20, al ;~ 2F3D:00B1
cs=0x2f3d;eip=0x0000b4; 	X(MOV(unk_4df16, al));	// 100517 mov     byte ptr unk_4DF16, al ;~ 2F3D:00B4
cs=0x2f3d;eip=0x0000b7; 	X(MOV(unk_4df0c, al));	// 100518 mov     byte ptr unk_4DF0C, al ;~ 2F3D:00B7
cs=0x2f3d;eip=0x0000ba; 	X(MOV(unk_4df02, al));	// 100519 mov     byte ptr unk_4DF02, al ;~ 2F3D:00BA
cs=0x2f3d;eip=0x0000bd; 	T(MOV(ax, 0x40));	// 100520 mov     ax, 40h ; '@' ;~ 2F3D:00BD
cs=0x2f3d;eip=0x0000c0; 	T(CWD);	// 100521 cwd ;~ 2F3D:00C0
cs=0x2f3d;eip=0x0000c1; 	X(PUSH(dx));	// 100522 push    dx ;~ 2F3D:00C1
cs=0x2f3d;eip=0x0000c2; 	X(PUSH(ax));	// 100523 push    ax ;~ 2F3D:00C2
cs=0x2f3d;eip=0x0000c3; 	X(PUSH(*(dw*)((&unk_5705c))));	// 100524 push    word ptr unk_5705C ;~ 2F3D:00C3
cs=0x2f3d;eip=0x0000c7; 	X(PUSH(*(dw*)((&unk_5705a))));	// 100525 push    word ptr unk_5705A ;~ 2F3D:00C7
cs=0x2f3d;eip=0x0000cb; 	R(CALLF(sub_10526,0));	// 100526 call    sub_10526 ;~ 2F3D:00CB
cs=0x2f3d;eip=0x0000d0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 100527 mov     [bp+var_4], ax ;~ 2F3D:00D0
cs=0x2f3d;eip=0x0000d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 100528 mov     [bp+var_2], dx ;~ 2F3D:00D3
cs=0x2f3d;eip=0x0000d6; 	T(MOV(si, ax));	// 100529 mov     si, ax ;~ 2F3D:00D6
cs=0x2f3d;eip=0x0000d8; 	T(AND(si, 0x0F));	// 100530 and     si, 0Fh ;~ 2F3D:00D8
cs=0x2f3d;eip=0x0000db; 	T(MOV(cl, 4));	// 100531 mov     cl, 4 ;~ 2F3D:00DB
cs=0x2f3d;eip=0x0000dd; 	R(CALLF(sub_10240,0));	// 100532 call    sub_10240 ;~ 2F3D:00DD
cs=0x2f3d;eip=0x0000e2; 	T(MOV(di, ax));	// 100533 mov     di, ax ;~ 2F3D:00E2
cs=0x2f3d;eip=0x0000e4; 	T(AND(di, 3));	// 100534 and     di, 3 ;~ 2F3D:00E4
cs=0x2f3d;eip=0x0000e7; 	R(JNZ(loc_3dabe));	// 100535 jnz     short loc_3DABE ;~ 2F3D:00E7
cs=0x2f3d;eip=0x0000e9; 	X(MOV(unk_4df3f, 0));	// 100536 mov     byte ptr unk_4DF3F, 0 ;~ 2F3D:00E9
cs=0x2f3d;eip=0x0000ee; 	T(CMP(si, 8));	// 100537 cmp     si, 8 ;~ 2F3D:00EE
cs=0x2f3d;eip=0x0000f1; 	R(JGE(loc_3daaa));	// 100538 jge     short loc_3DAAA ;~ 2F3D:00F1
cs=0x2f3d;eip=0x0000f3; 	X(MOV(unk_4df2a, 0));	// 100539 mov     byte ptr unk_4DF2A, 0 ;~ 2F3D:00F3
cs=0x2f3d;eip=0x0000f8; 	R(JMP(loc_3db0f));	// 100540 jmp     short loc_3DB0F ;~ 2F3D:00F8
loc_3daaa:
	// 10768 
cs=0x2f3d;eip=0x0000fa; 	T(TEST(si, 1));	// 100544 test    si, 1 ;~ 2F3D:00FA
cs=0x2f3d;eip=0x0000fe; 	R(JZ(loc_3dab7));	// 100545 jz      short loc_3DAB7 ;~ 2F3D:00FE
cs=0x2f3d;eip=0x000100; 	X(MOV(unk_4df02, 0));	// 100546 mov     byte ptr unk_4DF02, 0 ;~ 2F3D:0100
cs=0x2f3d;eip=0x000105; 	R(JMP(loc_3db0f));	// 100547 jmp     short loc_3DB0F ;~ 2F3D:0105
loc_3dab7:
	// 10769 
cs=0x2f3d;eip=0x000107; 	X(MOV(unk_4df0c, 0));	// 100551 mov     byte ptr unk_4DF0C, 0 ;~ 2F3D:0107
cs=0x2f3d;eip=0x00010c; 	R(JMP(loc_3db0f));	// 100552 jmp     short loc_3DB0F ;~ 2F3D:010C
loc_3dabe:
	// 10770 
cs=0x2f3d;eip=0x00010e; 	T(CMP(di, 2));	// 100556 cmp     di, 2 ;~ 2F3D:010E
cs=0x2f3d;eip=0x000111; 	R(JNZ(loc_3dae8));	// 100557 jnz     short loc_3DAE8 ;~ 2F3D:0111
cs=0x2f3d;eip=0x000113; 	X(MOV(unk_4df2a, 0));	// 100558 mov     byte ptr unk_4DF2A, 0 ;~ 2F3D:0113
cs=0x2f3d;eip=0x000118; 	T(CMP(si, 8));	// 100559 cmp     si, 8 ;~ 2F3D:0118
cs=0x2f3d;eip=0x00011b; 	R(JGE(loc_3dad4));	// 100560 jge     short loc_3DAD4 ;~ 2F3D:011B
cs=0x2f3d;eip=0x00011d; 	X(MOV(unk_4df3f, 0));	// 100561 mov     byte ptr unk_4DF3F, 0 ;~ 2F3D:011D
cs=0x2f3d;eip=0x000122; 	R(JMP(loc_3db0f));	// 100562 jmp     short loc_3DB0F ;~ 2F3D:0122
loc_3dad4:
	// 10771 
cs=0x2f3d;eip=0x000124; 	T(TEST(si, 1));	// 100566 test    si, 1 ;~ 2F3D:0124
cs=0x2f3d;eip=0x000128; 	R(JZ(loc_3dae1));	// 100567 jz      short loc_3DAE1 ;~ 2F3D:0128
cs=0x2f3d;eip=0x00012a; 	X(MOV(unk_4df20, 0));	// 100568 mov     byte ptr unk_4DF20, 0 ;~ 2F3D:012A
cs=0x2f3d;eip=0x00012f; 	R(JMP(loc_3db0f));	// 100569 jmp     short loc_3DB0F ;~ 2F3D:012F
loc_3dae1:
	// 10772 
cs=0x2f3d;eip=0x000131; 	X(MOV(unk_4df16, 0));	// 100573 mov     byte ptr unk_4DF16, 0 ;~ 2F3D:0131
cs=0x2f3d;eip=0x000136; 	R(JMP(loc_3db0f));	// 100574 jmp     short loc_3DB0F ;~ 2F3D:0136
loc_3dae8:
	// 10773 
cs=0x2f3d;eip=0x000138; 	T(CMP(si, 8));	// 100578 cmp     si, 8 ;~ 2F3D:0138
cs=0x2f3d;eip=0x00013b; 	R(JGE(loc_3daf7));	// 100579 jge     short loc_3DAF7 ;~ 2F3D:013B
cs=0x2f3d;eip=0x00013d; 	T(SUB(al, al));	// 100580 sub     al, al ;~ 2F3D:013D
cs=0x2f3d;eip=0x00013f; 	X(MOV(unk_4df3f, al));	// 100581 mov     byte ptr unk_4DF3F, al ;~ 2F3D:013F
cs=0x2f3d;eip=0x000142; 	X(MOV(unk_4df2a, al));	// 100582 mov     byte ptr unk_4DF2A, al ;~ 2F3D:0142
cs=0x2f3d;eip=0x000145; 	R(JMP(loc_3db0f));	// 100583 jmp     short loc_3DB0F ;~ 2F3D:0145
loc_3daf7:
	// 10774 
cs=0x2f3d;eip=0x000147; 	T(TEST(si, 1));	// 100587 test    si, 1 ;~ 2F3D:0147
cs=0x2f3d;eip=0x00014b; 	R(JZ(loc_3db07));	// 100588 jz      short loc_3DB07 ;~ 2F3D:014B
cs=0x2f3d;eip=0x00014d; 	T(SUB(al, al));	// 100589 sub     al, al ;~ 2F3D:014D
cs=0x2f3d;eip=0x00014f; 	X(MOV(unk_4df20, al));	// 100590 mov     byte ptr unk_4DF20, al ;~ 2F3D:014F
cs=0x2f3d;eip=0x000152; 	X(MOV(unk_4df02, al));	// 100591 mov     byte ptr unk_4DF02, al ;~ 2F3D:0152
cs=0x2f3d;eip=0x000155; 	R(JMP(loc_3db0f));	// 100592 jmp     short loc_3DB0F ;~ 2F3D:0155
loc_3db07:
	// 10775 
cs=0x2f3d;eip=0x000157; 	T(SUB(al, al));	// 100596 sub     al, al ;~ 2F3D:0157
cs=0x2f3d;eip=0x000159; 	X(MOV(unk_4df16, al));	// 100597 mov     byte ptr unk_4DF16, al ;~ 2F3D:0159
cs=0x2f3d;eip=0x00015c; 	X(MOV(unk_4df0c, al));	// 100598 mov     byte ptr unk_4DF0C, al ;~ 2F3D:015C
loc_3db0f:
	// 10776 
cs=0x2f3d;eip=0x00015f; 	X(POP(si));	// 100602 pop     si ;~ 2F3D:015F
cs=0x2f3d;eip=0x000160; 	X(POP(di));	// 100603 pop     di ;~ 2F3D:0160
cs=0x2f3d;eip=0x000161; 	T(MOV(sp, bp));	// 100604 mov     sp, bp ;~ 2F3D:0161
cs=0x2f3d;eip=0x000163; 	X(POP(bp));	// 100605 pop     bp ;~ 2F3D:0163
cs=0x2f3d;eip=0x000164; 	R(RETN(0));	// 100606 retn ;~ 2F3D:0164
sub_3db15:
	// 100613 
cs=0x2f3d;eip=0x000165; 	X(MOV(*(dw*)((&unk_4bd2e)), 0x2D0));	// 100614 mov     word ptr unk_4BD2E, 2D0h ;~ 2F3D:0165
cs=0x2f3d;eip=0x00016b; 	X(MOV(*(dw*)((&unk_4b07a)), 0));	// 100615 mov     word ptr unk_4B07A, 0 ;~ 2F3D:016B
cs=0x2f3d;eip=0x000171; 	R(RETF(0));	// 100616 retf ;~ 2F3D:0171
sub_3db22:
	// 100624 
#undef var_4
#define var_4 -4
	// 100627 var_4           = word ptr -4 ;~ 2F3D:0172
#undef var_2
#define var_2 -2
	// 100628 var_2           = word ptr -2 ;~ 2F3D:0172
cs=0x2f3d;eip=0x000172; 	X(PUSH(bp));	// 100630 push    bp ;~ 2F3D:0172
cs=0x2f3d;eip=0x000173; 	T(MOV(bp, sp));	// 100631 mov     bp, sp ;~ 2F3D:0173
cs=0x2f3d;eip=0x000175; 	T(SUB(sp, 4));	// 100632 sub     sp, 4 ;~ 2F3D:0175
cs=0x2f3d;eip=0x000178; 	R(CALL(sub_3da51,0));	// 100633 call    sub_3DA51 ;~ 2F3D:0178
cs=0x2f3d;eip=0x00017b; 	X(INC(unk_4b07c));	// 100634 inc     byte ptr unk_4B07C ;~ 2F3D:017B
cs=0x2f3d;eip=0x00017f; 	T(CMP(unk_4b07c, 2));	// 100635 cmp     byte ptr unk_4B07C, 2 ;~ 2F3D:017F
cs=0x2f3d;eip=0x000184; 	R(JC(loc_3db3b));	// 100636 jb      short loc_3DB3B ;~ 2F3D:0184
cs=0x2f3d;eip=0x000186; 	X(MOV(unk_4b07c, 0));	// 100637 mov     byte ptr unk_4B07C, 0 ;~ 2F3D:0186
loc_3db3b:
	// 10777 
cs=0x2f3d;eip=0x00018b; 	X(INC(unk_4b07d));	// 100640 inc     byte ptr unk_4B07D ;~ 2F3D:018B
cs=0x2f3d;eip=0x00018f; 	T(CMP(unk_4b07d, 3));	// 100641 cmp     byte ptr unk_4B07D, 3 ;~ 2F3D:018F
cs=0x2f3d;eip=0x000194; 	R(JC(loc_3db4b));	// 100642 jb      short loc_3DB4B ;~ 2F3D:0194
cs=0x2f3d;eip=0x000196; 	X(MOV(unk_4b07d, 0));	// 100643 mov     byte ptr unk_4B07D, 0 ;~ 2F3D:0196
loc_3db4b:
	// 10778 
cs=0x2f3d;eip=0x00019b; 	T(CMP(unk_57041, 2));	// 100646 cmp     byte ptr unk_57041, 2 ;~ 2F3D:019B
cs=0x2f3d;eip=0x0001a0; 	R(JNZ(loc_3db61));	// 100647 jnz     short loc_3DB61 ;~ 2F3D:01A0
cs=0x2f3d;eip=0x0001a2; 	T(MOV(ax, 0x58FD));	// 100648 mov     ax, 58FDh ;~ 2F3D:01A2
cs=0x2f3d;eip=0x0001a5; 	X(PUSH(ax));	// 100649 push    ax ;~ 2F3D:01A5
cs=0x2f3d;eip=0x0001a6; 	T(MOV(ax, 0x78));	// 100650 mov     ax, 78h ; 'x' ;~ 2F3D:01A6
cs=0x2f3d;eip=0x0001a9; 	X(PUSH(ax));	// 100651 push    ax ;~ 2F3D:01A9
cs=0x2f3d;eip=0x0001aa; 	R(CALLF(sub_24cde,0));	// 100652 call    sub_24CDE ;~ 2F3D:01AA
cs=0x2f3d;eip=0x0001af; 	R(JMP(loc_3db67));	// 100653 jmp     short loc_3DB67 ;~ 2F3D:01AF
loc_3db61:
	// 10779 
cs=0x2f3d;eip=0x0001b1; 	X(MOV(*(dw*)((&unk_4d2ad)), 0));	// 100657 mov     word ptr unk_4D2AD, 0 ;~ 2F3D:01B1
loc_3db67:
	// 10780 
cs=0x2f3d;eip=0x0001b7; 	T(MOV(ax, *(dw*)((&unk_4d2ad))));	// 100660 mov     ax, word ptr unk_4D2AD ;~ 2F3D:01B7
cs=0x2f3d;eip=0x0001ba; 	X(MOV(*(dw*)((&unk_51b92)), ax));	// 100661 mov     word ptr unk_51B92, ax ;~ 2F3D:01BA
cs=0x2f3d;eip=0x0001bd; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 100662 cmp     word ptr unk_47AB2, 3 ;~ 2F3D:01BD
cs=0x2f3d;eip=0x0001c2; 	R(JZ(loc_3db77));	// 100663 jz      short loc_3DB77 ;~ 2F3D:01C2
cs=0x2f3d;eip=0x0001c4; 	R(JMP(loc_3dcde));	// 100664 jmp     loc_3DCDE ;~ 2F3D:01C4
loc_3db77:
	// 10781 
cs=0x2f3d;eip=0x0001c7; 	T(CMP(*(dw*)((&unk_56fd8)), 0));	// 100668 cmp     word ptr unk_56FD8, 0 ;~ 2F3D:01C7
cs=0x2f3d;eip=0x0001cc; 	R(JNZ(loc_3db87));	// 100669 jnz     short loc_3DB87 ;~ 2F3D:01CC
cs=0x2f3d;eip=0x0001ce; 	X(MOV(*(dw*)((&unk_4bd2e)), 0x2D0));	// 100670 mov     word ptr unk_4BD2E, 2D0h ;~ 2F3D:01CE
cs=0x2f3d;eip=0x0001d4; 	R(JMP(loc_3dcde));	// 100671 jmp     loc_3DCDE ;~ 2F3D:01D4
loc_3db87:
	// 10782 
cs=0x2f3d;eip=0x0001d7; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 100675 les     bx, dword ptr unk_56FD6 ;~ 2F3D:01D7
cs=0x2f3d;eip=0x0001db; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 100676 cmp     word ptr es:[bx+306h], 1 ;~ 2F3D:01DB
cs=0x2f3d;eip=0x0001e1; 	R(JNZ(loc_3db9f));	// 100677 jnz     short loc_3DB9F ;~ 2F3D:01E1
cs=0x2f3d;eip=0x0001e3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 100678 mov     ax, es:[bx+32Ch] ;~ 2F3D:01E3
cs=0x2f3d;eip=0x0001e8; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 100679 or      ax, es:[bx+32Eh] ;~ 2F3D:01E8
cs=0x2f3d;eip=0x0001ed; 	R(JZ(loc_3dbb9));	// 100680 jz      short loc_3DBB9 ;~ 2F3D:01ED
loc_3db9f:
	// 10783 
cs=0x2f3d;eip=0x0001ef; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 100683 cmp     word ptr es:[bx+306h], 2 ;~ 2F3D:01EF
cs=0x2f3d;eip=0x0001f5; 	R(JZ(loc_3dbaa));	// 100684 jz      short loc_3DBAA ;~ 2F3D:01F5
cs=0x2f3d;eip=0x0001f7; 	R(JMP(loc_3dca6));	// 100685 jmp     loc_3DCA6 ;~ 2F3D:01F7
loc_3dbaa:
	// 10784 
cs=0x2f3d;eip=0x0001fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 100689 mov     ax, es:[bx+32Ch] ;~ 2F3D:01FA
cs=0x2f3d;eip=0x0001ff; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 100690 or      ax, es:[bx+32Eh] ;~ 2F3D:01FF
cs=0x2f3d;eip=0x000204; 	R(JNZ(loc_3dbb9));	// 100691 jnz     short loc_3DBB9 ;~ 2F3D:0204
cs=0x2f3d;eip=0x000206; 	R(JMP(loc_3dca6));	// 100692 jmp     loc_3DCA6 ;~ 2F3D:0206
loc_3dbb9:
	// 10785 
cs=0x2f3d;eip=0x000209; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 100697 cmp     word ptr es:[bx+332h], 1 ;~ 2F3D:0209
cs=0x2f3d;eip=0x00020f; 	R(JNZ(loc_3dbe5));	// 100698 jnz     short loc_3DBE5 ;~ 2F3D:020F
cs=0x2f3d;eip=0x000211; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 100699 mov     dx, word ptr unk_47A9A ;~ 2F3D:0211
cs=0x2f3d;eip=0x000215; 	T(MOV(ax, *(dw*)((&unk_56fbf))));	// 100700 mov     ax, word ptr unk_56FBF ;~ 2F3D:0215
cs=0x2f3d;eip=0x000218; 	T(MOV(es, dx));	// 100701 mov     es, dx ;~ 2F3D:0218
cs=0x2f3d;eip=0x00021a; 	T(MOV(bx, ax));	// 100703 mov     bx, ax ;~ 2F3D:021A
cs=0x2f3d;eip=0x00021c; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), 0));	// 100704 cmp     word ptr es:[bx+1Ch], 0 ;~ 2F3D:021C
cs=0x2f3d;eip=0x000221; 	R(JG(loc_3dbe5));	// 100705 jg      short loc_3DBE5 ;~ 2F3D:0221
cs=0x2f3d;eip=0x000223; 	R(JL(loc_3dbdd));	// 100706 jl      short loc_3DBDD ;~ 2F3D:0223
cs=0x2f3d;eip=0x000225; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), 0x1E00));	// 100707 cmp     word ptr es:[bx+1Ah], 1E00h ;~ 2F3D:0225
cs=0x2f3d;eip=0x00022b; 	R(JNC(loc_3dbe5));	// 100708 jnb     short loc_3DBE5 ;~ 2F3D:022B
loc_3dbdd:
	// 10786 
cs=0x2f3d;eip=0x00022d; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x2D0));	// 100711 mov     [bp+var_2], 2D0h ;~ 2F3D:022D
cs=0x2f3d;eip=0x000232; 	R(JMP(loc_3dcab));	// 100712 jmp     loc_3DCAB ;~ 2F3D:0232
loc_3dbe5:
	// 10787 
cs=0x2f3d;eip=0x000235; 	T(CMP(unk_57113, 0));	// 100717 cmp     byte ptr unk_57113, 0 ;~ 2F3D:0235
cs=0x2f3d;eip=0x00023a; 	R(JZ(loc_3dc22));	// 100718 jz      short loc_3DC22 ;~ 2F3D:023A
cs=0x2f3d;eip=0x00023c; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 100719 les     bx, dword ptr unk_56FD6 ;~ 2F3D:023C
cs=0x2f3d;eip=0x000240; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 100721 mov     ax, es:[bx+138h] ;~ 2F3D:0240
cs=0x2f3d;eip=0x000245; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 100722 mov     dx, es:[bx+13Ah] ;~ 2F3D:0245
cs=0x2f3d;eip=0x00024a; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 100723 cmp     es:[bx+122h], dx ;~ 2F3D:024A
cs=0x2f3d;eip=0x00024f; 	R(JL(loc_3dc0f));	// 100724 jl      short loc_3DC0F ;~ 2F3D:024F
cs=0x2f3d;eip=0x000251; 	R(JG(loc_3dc0a));	// 100725 jg      short loc_3DC0A ;~ 2F3D:0251
cs=0x2f3d;eip=0x000253; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 100726 cmp     es:[bx+120h], ax ;~ 2F3D:0253
cs=0x2f3d;eip=0x000258; 	R(JC(loc_3dc0f));	// 100727 jb      short loc_3DC0F ;~ 2F3D:0258
loc_3dc0a:
	// 10788 
cs=0x2f3d;eip=0x00025a; 	T(MOV(ax, 1));	// 100730 mov     ax, 1 ;~ 2F3D:025A
cs=0x2f3d;eip=0x00025d; 	R(JMP(loc_3dc11));	// 100731 jmp     short loc_3DC11 ;~ 2F3D:025D
loc_3dc0f:
	// 10789 
cs=0x2f3d;eip=0x00025f; 	T(SUB(ax, ax));	// 100736 sub     ax, ax ;~ 2F3D:025F
loc_3dc11:
	// 10790 
cs=0x2f3d;eip=0x000261; 	T(OR(ax, ax));	// 100739 or      ax, ax ;~ 2F3D:0261
cs=0x2f3d;eip=0x000263; 	R(JNZ(loc_3dc22));	// 100740 jnz     short loc_3DC22 ;~ 2F3D:0263
cs=0x2f3d;eip=0x000265; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100741 les     bx, dword ptr unk_47AD0 ;~ 2F3D:0265
cs=0x2f3d;eip=0x000269; 	T(MOV(ax, 0x2D0));	// 100742 mov     ax, 2D0h ;~ 2F3D:0269
loc_3dc1c:
	// 10791 
cs=0x2f3d;eip=0x00026c; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x14))));	// 100745 sub     ax, es:[bx+14h] ;~ 2F3D:026C
cs=0x2f3d;eip=0x000270; 	R(JMP(loc_3dc7b));	// 100746 jmp     short loc_3DC7B ;~ 2F3D:0270
loc_3dc22:
	// 10792 
cs=0x2f3d;eip=0x000272; 	X(PUSH(*(dw*)((&unk_56488))));	// 100751 push    word ptr unk_56488 ;~ 2F3D:0272
cs=0x2f3d;eip=0x000276; 	T(MOV(ax, 0x2D0));	// 100752 mov     ax, 2D0h ;~ 2F3D:0276
cs=0x2f3d;eip=0x000279; 	X(PUSH(ax));	// 100753 push    ax ;~ 2F3D:0279
cs=0x2f3d;eip=0x00027a; 	T(MOV(ax, 0x0FF9C));	// 100754 mov     ax, 0FF9Ch ;~ 2F3D:027A
cs=0x2f3d;eip=0x00027d; 	X(PUSH(ax));	// 100755 push    ax ;~ 2F3D:027D
cs=0x2f3d;eip=0x00027e; 	R(CALLF(sub_2f01c,0));	// 100756 call    sub_2F01C ;~ 2F3D:027E
cs=0x2f3d;eip=0x000283; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 100757 mov     [bp+var_2], ax ;~ 2F3D:0283
cs=0x2f3d;eip=0x000286; 	T(CMP(ax, 0x0F0));	// 100758 cmp     ax, 0F0h ; 'ğ' ;~ 2F3D:0286
cs=0x2f3d;eip=0x000289; 	R(JLE(loc_3dc40));	// 100759 jle     short loc_3DC40 ;~ 2F3D:0289
cs=0x2f3d;eip=0x00028b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0F0));	// 100760 mov     [bp+var_2], 0F0h ; 'ğ' ;~ 2F3D:028B
loc_3dc40:
	// 10793 
cs=0x2f3d;eip=0x000290; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0FF10));	// 100763 cmp     [bp+var_2], 0FF10h ;~ 2F3D:0290
cs=0x2f3d;eip=0x000295; 	R(JGE(loc_3dc4c));	// 100764 jge     short loc_3DC4C ;~ 2F3D:0295
cs=0x2f3d;eip=0x000297; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0x0FF10));	// 100765 mov     [bp+var_2], 0FF10h ;~ 2F3D:0297
loc_3dc4c:
	// 10794 
cs=0x2f3d;eip=0x00029c; 	T(MOV(ax, 0x2D0));	// 100768 mov     ax, 2D0h ;~ 2F3D:029C
cs=0x2f3d;eip=0x00029f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_2))));	// 100769 sub     ax, [bp+var_2] ;~ 2F3D:029F
cs=0x2f3d;eip=0x0002a2; 	X(PUSH(ax));	// 100770 push    ax ;~ 2F3D:02A2
cs=0x2f3d;eip=0x0002a3; 	R(CALLF(sub_24cf8,0));	// 100771 call    sub_24CF8 ;~ 2F3D:02A3
cs=0x2f3d;eip=0x0002a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 100772 mov     [bp+var_2], ax ;~ 2F3D:02A8
cs=0x2f3d;eip=0x0002ab; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100773 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02AB
cs=0x2f3d;eip=0x0002af; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 100774 mov     ax, es:[bx+14h] ;~ 2F3D:02AF
cs=0x2f3d;eip=0x0002b3; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 100775 add     ax, [bp+var_2] ;~ 2F3D:02B3
cs=0x2f3d;eip=0x0002b6; 	X(PUSH(ax));	// 100776 push    ax ;~ 2F3D:02B6
cs=0x2f3d;eip=0x0002b7; 	R(CALLF(sub_24cf8,0));	// 100777 call    sub_24CF8 ;~ 2F3D:02B7
cs=0x2f3d;eip=0x0002bc; 	T(CMP(ax, 0x870));	// 100778 cmp     ax, 870h ;~ 2F3D:02BC
cs=0x2f3d;eip=0x0002bf; 	R(JLE(loc_3dc86));	// 100779 jle     short loc_3DC86 ;~ 2F3D:02BF
cs=0x2f3d;eip=0x0002c1; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100780 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02C1
cs=0x2f3d;eip=0x0002c5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 100781 mov     ax, es:[bx+14h] ;~ 2F3D:02C5
cs=0x2f3d;eip=0x0002c9; 	T(NEG(ax));	// 100782 neg     ax ;~ 2F3D:02C9
loc_3dc7b:
	// 10795 
cs=0x2f3d;eip=0x0002cb; 	X(PUSH(ax));	// 100785 push    ax ;~ 2F3D:02CB
cs=0x2f3d;eip=0x0002cc; 	R(CALLF(sub_24cf8,0));	// 100786 call    sub_24CF8 ;~ 2F3D:02CC
cs=0x2f3d;eip=0x0002d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 100787 mov     [bp+var_2], ax ;~ 2F3D:02D1
cs=0x2f3d;eip=0x0002d4; 	R(JMP(loc_3dcab));	// 100788 jmp     short loc_3DCAB ;~ 2F3D:02D4
loc_3dc86:
	// 10796 
cs=0x2f3d;eip=0x0002d6; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100792 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02D6
cs=0x2f3d;eip=0x0002da; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 100793 mov     ax, es:[bx+14h] ;~ 2F3D:02DA
cs=0x2f3d;eip=0x0002de; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_2))));	// 100794 add     ax, [bp+var_2] ;~ 2F3D:02DE
cs=0x2f3d;eip=0x0002e1; 	X(PUSH(ax));	// 100795 push    ax ;~ 2F3D:02E1
cs=0x2f3d;eip=0x0002e2; 	R(CALLF(sub_24cf8,0));	// 100796 call    sub_24CF8 ;~ 2F3D:02E2
cs=0x2f3d;eip=0x0002e7; 	T(CMP(ax, 0x5A0));	// 100797 cmp     ax, 5A0h ;~ 2F3D:02E7
cs=0x2f3d;eip=0x0002ea; 	R(JLE(loc_3dcab));	// 100798 jle     short loc_3DCAB ;~ 2F3D:02EA
cs=0x2f3d;eip=0x0002ec; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 100799 les     bx, dword ptr unk_47AD0 ;~ 2F3D:02EC
cs=0x2f3d;eip=0x0002f0; 	T(MOV(ax, 0x5A0));	// 100800 mov     ax, 5A0h ;~ 2F3D:02F0
cs=0x2f3d;eip=0x0002f3; 	R(JMP(loc_3dc1c));	// 100801 jmp     loc_3DC1C ;~ 2F3D:02F3
loc_3dca6:
	// 10797 
cs=0x2f3d;eip=0x0002f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 100806 mov     [bp+var_2], 0 ;~ 2F3D:02F6
loc_3dcab:
	// 10798 
cs=0x2f3d;eip=0x0002fb; 	T(MOV(ax, 0x168));	// 100810 mov     ax, 168h ;~ 2F3D:02FB
cs=0x2f3d;eip=0x0002fe; 	X(PUSH(ax));	// 100811 push    ax ;~ 2F3D:02FE
cs=0x2f3d;eip=0x0002ff; 	T(MOV(ax, *(dw*)((&unk_5705a))));	// 100812 mov     ax, word ptr unk_5705A ;~ 2F3D:02FF
cs=0x2f3d;eip=0x000302; 	T(SUB(ax, *(dw*)((&unk_4b07a))));	// 100813 sub     ax, word ptr unk_4B07A ;~ 2F3D:0302
cs=0x2f3d;eip=0x000306; 	X(PUSH(ax));	// 100814 push    ax ;~ 2F3D:0306
cs=0x2f3d;eip=0x000307; 	R(CALLF(sub_2f002,0));	// 100815 call    sub_2F002 ;~ 2F3D:0307
cs=0x2f3d;eip=0x00030c; 	T(MOV(cl, 8));	// 100816 mov     cl, 8 ;~ 2F3D:030C
cs=0x2f3d;eip=0x00030e; 	R(CALLF(sub_10240,0));	// 100817 call    sub_10240 ;~ 2F3D:030E
cs=0x2f3d;eip=0x000313; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 100818 mov     [bp+var_4], ax ;~ 2F3D:0313
cs=0x2f3d;eip=0x000316; 	T(MOV(ax, *(dw*)((&unk_5705a))));	// 100819 mov     ax, word ptr unk_5705A ;~ 2F3D:0316
cs=0x2f3d;eip=0x000319; 	X(MOV(*(dw*)((&unk_4b07a)), ax));	// 100820 mov     word ptr unk_4B07A, ax ;~ 2F3D:0319
cs=0x2f3d;eip=0x00031c; 	X(PUSH(*(dw*)((&unk_4bd2e))));	// 100821 push    word ptr unk_4BD2E ;~ 2F3D:031C
cs=0x2f3d;eip=0x000320; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 100822 push    [bp+var_2] ;~ 2F3D:0320
cs=0x2f3d;eip=0x000323; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 100823 push    [bp+var_4] ;~ 2F3D:0323
cs=0x2f3d;eip=0x000326; 	R(CALLF(sub_13561,0));	// 100824 call    sub_13561 ;~ 2F3D:0326
cs=0x2f3d;eip=0x00032b; 	X(MOV(*(dw*)((&unk_4bd2e)), ax));	// 100825 mov     word ptr unk_4BD2E, ax ;~ 2F3D:032B
loc_3dcde:
	// 10799 
cs=0x2f3d;eip=0x00032e; 	T(MOV(ax, *(dw*)((&unk_4bd2e))));	// 100829 mov     ax, word ptr unk_4BD2E ;~ 2F3D:032E
cs=0x2f3d;eip=0x000331; 	X(MOV(*(dw*)((&unk_4b7e0)), ax));	// 100830 mov     word ptr unk_4B7E0, ax ;~ 2F3D:0331
cs=0x2f3d;eip=0x000334; 	T(MOV(al, 1));	// 100831 mov     al, 1 ;~ 2F3D:0334
cs=0x2f3d;eip=0x000336; 	X(MOV(unk_4ffce, al));	// 100832 mov     byte ptr unk_4FFCE, al ;~ 2F3D:0336
cs=0x2f3d;eip=0x000339; 	X(MOV(unk_4ffc6, al));	// 100833 mov     byte ptr unk_4FFC6, al ;~ 2F3D:0339
cs=0x2f3d;eip=0x00033c; 	X(MOV(unk_4ffbe, al));	// 100834 mov     byte ptr unk_4FFBE, al ;~ 2F3D:033C
cs=0x2f3d;eip=0x00033f; 	X(MOV(unk_4ffa8, al));	// 100835 mov     byte ptr unk_4FFA8, al ;~ 2F3D:033F
cs=0x2f3d;eip=0x000342; 	X(MOV(unk_4ffa0, al));	// 100836 mov     byte ptr unk_4FFA0, al ;~ 2F3D:0342
cs=0x2f3d;eip=0x000345; 	X(MOV(unk_4ff98, al));	// 100837 mov     byte ptr unk_4FF98, al ;~ 2F3D:0345
cs=0x2f3d;eip=0x000348; 	X(MOV(unk_4f567, al));	// 100838 mov     byte ptr unk_4F567, al ;~ 2F3D:0348
cs=0x2f3d;eip=0x00034b; 	X(MOV(unk_4f571, al));	// 100839 mov     byte ptr unk_4F571, al ;~ 2F3D:034B
cs=0x2f3d;eip=0x00034e; 	X(MOV(unk_4f57b, al));	// 100840 mov     byte ptr unk_4F57B, al ;~ 2F3D:034E
cs=0x2f3d;eip=0x000351; 	X(MOV(unk_510f7, al));	// 100841 mov     byte ptr unk_510F7, al ;~ 2F3D:0351
cs=0x2f3d;eip=0x000354; 	X(MOV(unk_510eb, al));	// 100842 mov     byte ptr unk_510EB, al ;~ 2F3D:0354
cs=0x2f3d;eip=0x000357; 	X(MOV(unk_510df, al));	// 100843 mov     byte ptr unk_510DF, al ;~ 2F3D:0357
cs=0x2f3d;eip=0x00035a; 	X(MOV(unk_4e627, al));	// 100844 mov     byte ptr unk_4E627, al ;~ 2F3D:035A
cs=0x2f3d;eip=0x00035d; 	X(MOV(unk_4e633, al));	// 100845 mov     byte ptr unk_4E633, al ;~ 2F3D:035D
cs=0x2f3d;eip=0x000360; 	X(MOV(unk_4e63f, al));	// 100846 mov     byte ptr unk_4E63F, al ;~ 2F3D:0360
cs=0x2f3d;eip=0x000363; 	X(MOV(unk_4b4f8, al));	// 100847 mov     byte ptr unk_4B4F8, al ;~ 2F3D:0363
cs=0x2f3d;eip=0x000366; 	X(MOV(unk_4b502, al));	// 100848 mov     byte ptr unk_4B502, al ;~ 2F3D:0366
cs=0x2f3d;eip=0x000369; 	X(MOV(unk_4b50c, al));	// 100849 mov     byte ptr unk_4B50C, al ;~ 2F3D:0369
cs=0x2f3d;eip=0x00036c; 	X(MOV(unk_5091a, al));	// 100850 mov     byte ptr unk_5091A, al ;~ 2F3D:036C
cs=0x2f3d;eip=0x00036f; 	X(MOV(unk_5090e, al));	// 100851 mov     byte ptr unk_5090E, al ;~ 2F3D:036F
cs=0x2f3d;eip=0x000372; 	X(MOV(unk_50902, al));	// 100852 mov     byte ptr unk_50902, al ;~ 2F3D:0372
cs=0x2f3d;eip=0x000375; 	X(MOV(unk_4db4d, al));	// 100853 mov     byte ptr unk_4DB4D, al ;~ 2F3D:0375
cs=0x2f3d;eip=0x000378; 	X(MOV(unk_4db3c, al));	// 100854 mov     byte ptr unk_4DB3C, al ;~ 2F3D:0378
cs=0x2f3d;eip=0x00037b; 	X(MOV(unk_4db32, al));	// 100855 mov     byte ptr unk_4DB32, al ;~ 2F3D:037B
cs=0x2f3d;eip=0x00037e; 	X(MOV(unk_4bdf6, al));	// 100856 mov     byte ptr unk_4BDF6, al ;~ 2F3D:037E
cs=0x2f3d;eip=0x000381; 	X(MOV(unk_4bdfe, al));	// 100857 mov     byte ptr unk_4BDFE, al ;~ 2F3D:0381
cs=0x2f3d;eip=0x000384; 	X(MOV(unk_4be06, al));	// 100858 mov     byte ptr unk_4BE06, al ;~ 2F3D:0384
cs=0x2f3d;eip=0x000387; 	X(MOV(unk_4bd3c, al));	// 100859 mov     byte ptr unk_4BD3C, al ;~ 2F3D:0387
cs=0x2f3d;eip=0x00038a; 	X(MOV(unk_4bd44, al));	// 100860 mov     byte ptr unk_4BD44, al ;~ 2F3D:038A
cs=0x2f3d;eip=0x00038d; 	X(MOV(unk_4bd4c, al));	// 100861 mov     byte ptr unk_4BD4C, al ;~ 2F3D:038D
cs=0x2f3d;eip=0x000390; 	T(MOV(al, unk_4b07d));	// 100862 mov     al, byte ptr unk_4B07D ;~ 2F3D:0390
cs=0x2f3d;eip=0x000393; 	T(SUB(ah, ah));	// 100863 sub     ah, ah ;~ 2F3D:0393
cs=0x2f3d;eip=0x000395; 	T(OR(ax, ax));	// 100864 or      ax, ax ;~ 2F3D:0395
cs=0x2f3d;eip=0x000397; 	R(JZ(loc_3dd55));	// 100865 jz      short loc_3DD55 ;~ 2F3D:0397
cs=0x2f3d;eip=0x000399; 	T(CMP(ax, 1));	// 100866 cmp     ax, 1 ;~ 2F3D:0399
cs=0x2f3d;eip=0x00039c; 	R(JZ(loc_3dda6));	// 100867 jz      short loc_3DDA6 ;~ 2F3D:039C
cs=0x2f3d;eip=0x00039e; 	T(CMP(ax, 2));	// 100868 cmp     ax, 2 ;~ 2F3D:039E
cs=0x2f3d;eip=0x0003a1; 	R(JZ(loc_3ddc8));	// 100869 jz      short loc_3DDC8 ;~ 2F3D:03A1
cs=0x2f3d;eip=0x0003a3; 	R(JMP(loc_3dd75));	// 100870 jmp     short loc_3DD75 ;~ 2F3D:03A3
loc_3dd55:
	// 10800 
cs=0x2f3d;eip=0x0003a5; 	T(MOV(al, 3));	// 100874 mov     al, 3 ;~ 2F3D:03A5
cs=0x2f3d;eip=0x0003a7; 	X(MOV(unk_4ffbe, al));	// 100875 mov     byte ptr unk_4FFBE, al ;~ 2F3D:03A7
cs=0x2f3d;eip=0x0003aa; 	X(MOV(unk_4ff98, al));	// 100876 mov     byte ptr unk_4FF98, al ;~ 2F3D:03AA
cs=0x2f3d;eip=0x0003ad; 	X(MOV(unk_4f57b, al));	// 100877 mov     byte ptr unk_4F57B, al ;~ 2F3D:03AD
cs=0x2f3d;eip=0x0003b0; 	X(MOV(unk_510df, al));	// 100878 mov     byte ptr unk_510DF, al ;~ 2F3D:03B0
cs=0x2f3d;eip=0x0003b3; 	X(MOV(unk_4e63f, al));	// 100879 mov     byte ptr unk_4E63F, al ;~ 2F3D:03B3
cs=0x2f3d;eip=0x0003b6; 	X(MOV(unk_4b50c, al));	// 100880 mov     byte ptr unk_4B50C, al ;~ 2F3D:03B6
cs=0x2f3d;eip=0x0003b9; 	X(MOV(unk_50902, al));	// 100881 mov     byte ptr unk_50902, al ;~ 2F3D:03B9
cs=0x2f3d;eip=0x0003bc; 	X(MOV(unk_4db32, al));	// 100882 mov     byte ptr unk_4DB32, al ;~ 2F3D:03BC
cs=0x2f3d;eip=0x0003bf; 	X(MOV(unk_4be06, al));	// 100883 mov     byte ptr unk_4BE06, al ;~ 2F3D:03BF
cs=0x2f3d;eip=0x0003c2; 	X(MOV(unk_4bd4c, al));	// 100884 mov     byte ptr unk_4BD4C, al ;~ 2F3D:03C2
loc_3dd75:
	// 10801 
cs=0x2f3d;eip=0x0003c5; 	T(CMP(unk_4b07c, 0));	// 100888 cmp     byte ptr unk_4B07C, 0 ;~ 2F3D:03C5
cs=0x2f3d;eip=0x0003ca; 	R(JNZ(loc_3ddea));	// 100889 jnz     short loc_3DDEA ;~ 2F3D:03CA
cs=0x2f3d;eip=0x0003cc; 	T(MOV(al, 3));	// 100890 mov     al, 3 ;~ 2F3D:03CC
cs=0x2f3d;eip=0x0003ce; 	X(MOV(unk_4de51, al));	// 100891 mov     byte ptr unk_4DE51, al ;~ 2F3D:03CE
cs=0x2f3d;eip=0x0003d1; 	X(MOV(unk_4f47d, al));	// 100892 mov     byte ptr unk_4F47D, al ;~ 2F3D:03D1
cs=0x2f3d;eip=0x0003d4; 	X(MOV(unk_5100c, al));	// 100893 mov     byte ptr unk_5100C, al ;~ 2F3D:03D4
cs=0x2f3d;eip=0x0003d7; 	X(MOV(unk_4e4fe, al));	// 100894 mov     byte ptr unk_4E4FE, al ;~ 2F3D:03D7
cs=0x2f3d;eip=0x0003da; 	X(MOV(unk_5087a, al));	// 100895 mov     byte ptr unk_5087A, al ;~ 2F3D:03DA
cs=0x2f3d;eip=0x0003dd; 	X(MOV(unk_4dbe6, al));	// 100896 mov     byte ptr unk_4DBE6, al ;~ 2F3D:03DD
cs=0x2f3d;eip=0x0003e0; 	T(MOV(al, 1));	// 100897 mov     al, 1 ;~ 2F3D:03E0
cs=0x2f3d;eip=0x0003e2; 	X(MOV(unk_4de4b, al));	// 100898 mov     byte ptr unk_4DE4B, al ;~ 2F3D:03E2
cs=0x2f3d;eip=0x0003e5; 	X(MOV(unk_4f477, al));	// 100899 mov     byte ptr unk_4F477, al ;~ 2F3D:03E5
cs=0x2f3d;eip=0x0003e8; 	X(MOV(unk_51012, al));	// 100900 mov     byte ptr unk_51012, al ;~ 2F3D:03E8
cs=0x2f3d;eip=0x0003eb; 	X(MOV(unk_4e4f6, al));	// 100901 mov     byte ptr unk_4E4F6, al ;~ 2F3D:03EB
cs=0x2f3d;eip=0x0003ee; 	X(MOV(unk_50874, al));	// 100902 mov     byte ptr unk_50874, al ;~ 2F3D:03EE
cs=0x2f3d;eip=0x0003f1; 	X(MOV(unk_4dbe0, al));	// 100903 mov     byte ptr unk_4DBE0, al ;~ 2F3D:03F1
cs=0x2f3d;eip=0x0003f4; 	R(JMP(loc_3de12));	// 100904 jmp     short loc_3DE12 ;~ 2F3D:03F4
loc_3dda6:
	// 10802 
cs=0x2f3d;eip=0x0003f6; 	T(MOV(al, 3));	// 100908 mov     al, 3 ;~ 2F3D:03F6
cs=0x2f3d;eip=0x0003f8; 	X(MOV(unk_4ffc6, al));	// 100909 mov     byte ptr unk_4FFC6, al ;~ 2F3D:03F8
cs=0x2f3d;eip=0x0003fb; 	X(MOV(unk_4ffa0, al));	// 100910 mov     byte ptr unk_4FFA0, al ;~ 2F3D:03FB
cs=0x2f3d;eip=0x0003fe; 	X(MOV(unk_4f571, al));	// 100911 mov     byte ptr unk_4F571, al ;~ 2F3D:03FE
cs=0x2f3d;eip=0x000401; 	X(MOV(unk_510eb, al));	// 100912 mov     byte ptr unk_510EB, al ;~ 2F3D:0401
cs=0x2f3d;eip=0x000404; 	X(MOV(unk_4e633, al));	// 100913 mov     byte ptr unk_4E633, al ;~ 2F3D:0404
cs=0x2f3d;eip=0x000407; 	X(MOV(unk_4b502, al));	// 100914 mov     byte ptr unk_4B502, al ;~ 2F3D:0407
cs=0x2f3d;eip=0x00040a; 	X(MOV(unk_5090e, al));	// 100915 mov     byte ptr unk_5090E, al ;~ 2F3D:040A
cs=0x2f3d;eip=0x00040d; 	X(MOV(unk_4db3c, al));	// 100916 mov     byte ptr unk_4DB3C, al ;~ 2F3D:040D
cs=0x2f3d;eip=0x000410; 	X(MOV(unk_4bdfe, al));	// 100917 mov     byte ptr unk_4BDFE, al ;~ 2F3D:0410
cs=0x2f3d;eip=0x000413; 	X(MOV(unk_4bd44, al));	// 100918 mov     byte ptr unk_4BD44, al ;~ 2F3D:0413
cs=0x2f3d;eip=0x000416; 	R(JMP(loc_3dd75));	// 100919 jmp     short loc_3DD75 ;~ 2F3D:0416
loc_3ddc8:
	// 10803 
cs=0x2f3d;eip=0x000418; 	T(MOV(al, 3));	// 100923 mov     al, 3 ;~ 2F3D:0418
cs=0x2f3d;eip=0x00041a; 	X(MOV(unk_4ffce, al));	// 100924 mov     byte ptr unk_4FFCE, al ;~ 2F3D:041A
cs=0x2f3d;eip=0x00041d; 	X(MOV(unk_4ffa8, al));	// 100925 mov     byte ptr unk_4FFA8, al ;~ 2F3D:041D
cs=0x2f3d;eip=0x000420; 	X(MOV(unk_4f567, al));	// 100926 mov     byte ptr unk_4F567, al ;~ 2F3D:0420
cs=0x2f3d;eip=0x000423; 	X(MOV(unk_510f7, al));	// 100927 mov     byte ptr unk_510F7, al ;~ 2F3D:0423
cs=0x2f3d;eip=0x000426; 	X(MOV(unk_4e627, al));	// 100928 mov     byte ptr unk_4E627, al ;~ 2F3D:0426
cs=0x2f3d;eip=0x000429; 	X(MOV(unk_4b4f8, al));	// 100929 mov     byte ptr unk_4B4F8, al ;~ 2F3D:0429
cs=0x2f3d;eip=0x00042c; 	X(MOV(unk_5091a, al));	// 100930 mov     byte ptr unk_5091A, al ;~ 2F3D:042C
cs=0x2f3d;eip=0x00042f; 	X(MOV(unk_4db4d, al));	// 100931 mov     byte ptr unk_4DB4D, al ;~ 2F3D:042F
cs=0x2f3d;eip=0x000432; 	X(MOV(unk_4bdf6, al));	// 100932 mov     byte ptr unk_4BDF6, al ;~ 2F3D:0432
cs=0x2f3d;eip=0x000435; 	X(MOV(unk_4bd3c, al));	// 100933 mov     byte ptr unk_4BD3C, al ;~ 2F3D:0435
cs=0x2f3d;eip=0x000438; 	R(JMP(loc_3dd75));	// 100934 jmp     short loc_3DD75 ;~ 2F3D:0438
loc_3ddea:
	// 10804 
cs=0x2f3d;eip=0x00043a; 	T(MOV(al, 3));	// 100938 mov     al, 3 ;~ 2F3D:043A
cs=0x2f3d;eip=0x00043c; 	X(MOV(unk_4de4b, al));	// 100939 mov     byte ptr unk_4DE4B, al ;~ 2F3D:043C
cs=0x2f3d;eip=0x00043f; 	X(MOV(unk_4f477, al));	// 100940 mov     byte ptr unk_4F477, al ;~ 2F3D:043F
cs=0x2f3d;eip=0x000442; 	X(MOV(unk_51012, al));	// 100941 mov     byte ptr unk_51012, al ;~ 2F3D:0442
cs=0x2f3d;eip=0x000445; 	X(MOV(unk_4e4f6, al));	// 100942 mov     byte ptr unk_4E4F6, al ;~ 2F3D:0445
cs=0x2f3d;eip=0x000448; 	X(MOV(unk_50874, al));	// 100943 mov     byte ptr unk_50874, al ;~ 2F3D:0448
cs=0x2f3d;eip=0x00044b; 	X(MOV(unk_4dbe0, al));	// 100944 mov     byte ptr unk_4DBE0, al ;~ 2F3D:044B
cs=0x2f3d;eip=0x00044e; 	T(MOV(al, 1));	// 100945 mov     al, 1 ;~ 2F3D:044E
cs=0x2f3d;eip=0x000450; 	X(MOV(unk_4de51, al));	// 100946 mov     byte ptr unk_4DE51, al ;~ 2F3D:0450
cs=0x2f3d;eip=0x000453; 	X(MOV(unk_4f47d, al));	// 100947 mov     byte ptr unk_4F47D, al ;~ 2F3D:0453
cs=0x2f3d;eip=0x000456; 	X(MOV(unk_5100c, al));	// 100948 mov     byte ptr unk_5100C, al ;~ 2F3D:0456
cs=0x2f3d;eip=0x000459; 	X(MOV(unk_4e4fe, al));	// 100949 mov     byte ptr unk_4E4FE, al ;~ 2F3D:0459
cs=0x2f3d;eip=0x00045c; 	X(MOV(unk_5087a, al));	// 100950 mov     byte ptr unk_5087A, al ;~ 2F3D:045C
cs=0x2f3d;eip=0x00045f; 	X(MOV(unk_4dbe6, al));	// 100951 mov     byte ptr unk_4DBE6, al ;~ 2F3D:045F
loc_3de12:
	// 10805 
cs=0x2f3d;eip=0x000462; 	T(MOV(sp, bp));	// 100954 mov     sp, bp ;~ 2F3D:0462
cs=0x2f3d;eip=0x000464; 	X(POP(bp));	// 100955 pop     bp ;~ 2F3D:0464
cs=0x2f3d;eip=0x000465; 	R(RETF(0));	// 100956 retf ;~ 2F3D:0465
seg029_proc:
	// 100961 
loc_3de16:
	// 10806 
cs=0x2f3d;eip=0x000466; 	X(PUSH(bp));	// 100963 push    bp ;~ 2F3D:0466
cs=0x2f3d;eip=0x000467; 	T(MOV(bp, sp));	// 100964 mov     bp, sp ;~ 2F3D:0467
cs=0x2f3d;eip=0x000469; 	T(SUB(sp, 4));	// 100965 sub     sp, 4 ;~ 2F3D:0469
cs=0x2f3d;eip=0x00046c; 	T(MOV(ax, *(dw*)((&unk_56bb1))));	// 100966 mov     ax, word ptr unk_56BB1 ;~ 2F3D:046C
cs=0x2f3d;eip=0x00046f; 	T(MOV(dx, *(dw*)((&unk_56bb3))));	// 100967 mov     dx, word ptr unk_56BB3 ;~ 2F3D:046F
cs=0x2f3d;eip=0x000473; 	T(ADD(ax, 0x18));	// 100968 add     ax, 18h ;~ 2F3D:0473
cs=0x2f3d;eip=0x000476; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 100969 mov     [bp-4], ax ;~ 2F3D:0476
cs=0x2f3d;eip=0x000479; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 100970 mov     [bp-2], dx ;~ 2F3D:0479
cs=0x2f3d;eip=0x00047c; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 100971 les     bx, [bp-4] ;~ 2F3D:047C
cs=0x2f3d;eip=0x00047f; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1BBE));	// 100972 cmp     word ptr es:[bx], 1BBEh ;~ 2F3D:047F
cs=0x2f3d;eip=0x000484; 	R(JNZ(loc_3de3a));	// 100973 jnz     short loc_3DE3A ;~ 2F3D:0484
cs=0x2f3d;eip=0x000486; 	T(MOV(al, 3));	// 100974 mov     al, 3 ;~ 2F3D:0486
cs=0x2f3d;eip=0x000488; 	R(JMP(loc_3de3c));	// 100975 jmp     short loc_3DE3C ;~ 2F3D:0488
loc_3de3a:
	// 10807 
cs=0x2f3d;eip=0x00048a; 	T(MOV(al, 1));	// 100979 mov     al, 1 ;~ 2F3D:048A
loc_3de3c:
	// 10808 
cs=0x2f3d;eip=0x00048c; 	X(MOV(unk_535fc, al));	// 100982 mov     byte ptr unk_535FC, al ;~ 2F3D:048C
cs=0x2f3d;eip=0x00048f; 	X(MOV(unk_53472, al));	// 100983 mov     byte ptr unk_53472, al ;~ 2F3D:048F
cs=0x2f3d;eip=0x000492; 	T(MOV(sp, bp));	// 100984 mov     sp, bp ;~ 2F3D:0492
cs=0x2f3d;eip=0x000494; 	X(POP(bp));	// 100985 pop     bp ;~ 2F3D:0494
cs=0x2f3d;eip=0x000495; 	R(RETF(0));	// 100986 retf ;~ 2F3D:0495
loc_3de46:
	// 10809 
cs=0x2f3d;eip=0x000496; 	X(PUSH(bp));	// 100991 push    bp ;~ 2F3D:0496
cs=0x2f3d;eip=0x000497; 	T(MOV(bp, sp));	// 100992 mov     bp, sp ;~ 2F3D:0497
cs=0x2f3d;eip=0x000499; 	T(SUB(sp, 4));	// 100993 sub     sp, 4 ;~ 2F3D:0499
cs=0x2f3d;eip=0x00049c; 	T(MOV(ax, *(dw*)((&unk_56bb1))));	// 100994 mov     ax, word ptr unk_56BB1 ;~ 2F3D:049C
cs=0x2f3d;eip=0x00049f; 	T(MOV(dx, *(dw*)((&unk_56bb3))));	// 100995 mov     dx, word ptr unk_56BB3 ;~ 2F3D:049F
cs=0x2f3d;eip=0x0004a3; 	T(ADD(ax, 0x18));	// 100996 add     ax, 18h ;~ 2F3D:04A3
cs=0x2f3d;eip=0x0004a6; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 100997 mov     [bp-4], ax ;~ 2F3D:04A6
cs=0x2f3d;eip=0x0004a9; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 100998 mov     [bp-2], dx ;~ 2F3D:04A9
cs=0x2f3d;eip=0x0004ac; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 100999 les     bx, [bp-4] ;~ 2F3D:04AC
cs=0x2f3d;eip=0x0004af; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1C5A));	// 101000 cmp     word ptr es:[bx], 1C5Ah ;~ 2F3D:04AF
cs=0x2f3d;eip=0x0004b4; 	R(JNZ(loc_3de7e));	// 101001 jnz     short loc_3DE7E ;~ 2F3D:04B4
cs=0x2f3d;eip=0x0004b6; 	T(MOV(al, 3));	// 101002 mov     al, 3 ;~ 2F3D:04B6
cs=0x2f3d;eip=0x0004b8; 	X(MOV(unk_53bc1, al));	// 101003 mov     byte ptr unk_53BC1, al ;~ 2F3D:04B8
cs=0x2f3d;eip=0x0004bb; 	X(MOV(unk_53a28, al));	// 101004 mov     byte ptr unk_53A28, al ;~ 2F3D:04BB
cs=0x2f3d;eip=0x0004be; 	T(MOV(al, 1));	// 101005 mov     al, 1 ;~ 2F3D:04BE
cs=0x2f3d;eip=0x0004c0; 	X(MOV(unk_53bcb, al));	// 101006 mov     byte ptr unk_53BCB, al ;~ 2F3D:04C0
cs=0x2f3d;eip=0x0004c3; 	X(MOV(unk_53a32, al));	// 101007 mov     byte ptr unk_53A32, al ;~ 2F3D:04C3
cs=0x2f3d;eip=0x0004c6; 	X(MOV(*(dw*)((&unk_53b69)), 0x0FF0C));	// 101008 mov     word ptr unk_53B69, 0FF0Ch ;~ 2F3D:04C6
cs=0x2f3d;eip=0x0004cc; 	R(JMP(loc_3de94));	// 101009 jmp     short loc_3DE94 ;~ 2F3D:04CC
loc_3de7e:
	// 10810 
cs=0x2f3d;eip=0x0004ce; 	T(MOV(al, 1));	// 101013 mov     al, 1 ;~ 2F3D:04CE
cs=0x2f3d;eip=0x0004d0; 	X(MOV(unk_53bc1, al));	// 101014 mov     byte ptr unk_53BC1, al ;~ 2F3D:04D0
cs=0x2f3d;eip=0x0004d3; 	X(MOV(unk_53a28, al));	// 101015 mov     byte ptr unk_53A28, al ;~ 2F3D:04D3
cs=0x2f3d;eip=0x0004d6; 	T(MOV(al, 3));	// 101016 mov     al, 3 ;~ 2F3D:04D6
cs=0x2f3d;eip=0x0004d8; 	X(MOV(unk_53bcb, al));	// 101017 mov     byte ptr unk_53BCB, al ;~ 2F3D:04D8
cs=0x2f3d;eip=0x0004db; 	X(MOV(unk_53a32, al));	// 101018 mov     byte ptr unk_53A32, al ;~ 2F3D:04DB
cs=0x2f3d;eip=0x0004de; 	X(MOV(*(dw*)((&unk_53b69)), 0x0FF09));	// 101019 mov     word ptr unk_53B69, 0FF09h ;~ 2F3D:04DE
loc_3de94:
	// 10811 
cs=0x2f3d;eip=0x0004e4; 	T(MOV(sp, bp));	// 101022 mov     sp, bp ;~ 2F3D:04E4
cs=0x2f3d;eip=0x0004e6; 	X(POP(bp));	// 101023 pop     bp ;~ 2F3D:04E6
cs=0x2f3d;eip=0x0004e7; 	R(RETF(0));	// 101024 retf ;~ 2F3D:04E7
loc_3de98:
	// 10812 
cs=0x2f3d;eip=0x0004e8; 	X(PUSH(bp));	// 101029 push    bp ;~ 2F3D:04E8
cs=0x2f3d;eip=0x0004e9; 	T(MOV(bp, sp));	// 101030 mov     bp, sp ;~ 2F3D:04E9
cs=0x2f3d;eip=0x0004eb; 	T(SUB(sp, 6));	// 101031 sub     sp, 6 ;~ 2F3D:04EB
cs=0x2f3d;eip=0x0004ee; 	T(CMP(*(dw*)((&unk_56bb9)), 0x6771));	// 101032 cmp     word ptr unk_56BB9, 6771h ;~ 2F3D:04EE
cs=0x2f3d;eip=0x0004f4; 	R(JNZ(loc_3def3));	// 101033 jnz     short loc_3DEF3 ;~ 2F3D:04F4
cs=0x2f3d;eip=0x0004f6; 	T(MOV(ax, 0x6C47));	// 101034 mov     ax, 6C47h ;~ 2F3D:04F6
cs=0x2f3d;eip=0x0004f9; 	X(PUSH(ax));	// 101035 push    ax ;~ 2F3D:04F9
cs=0x2f3d;eip=0x0004fa; 	R(CALL(sub_3e27a,0));	// 101036 call    sub_3E27A ;~ 2F3D:04FA
cs=0x2f3d;eip=0x0004fd; 	T(MOV(ax, *(dw*)((&unk_56bb1))));	// 101037 mov     ax, word ptr unk_56BB1 ;~ 2F3D:04FD
cs=0x2f3d;eip=0x000500; 	T(MOV(dx, *(dw*)((&unk_56bb3))));	// 101038 mov     dx, word ptr unk_56BB3 ;~ 2F3D:0500
cs=0x2f3d;eip=0x000504; 	T(ADD(ax, 0x18));	// 101039 add     ax, 18h ;~ 2F3D:0504
cs=0x2f3d;eip=0x000507; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 101040 mov     [bp-4], ax ;~ 2F3D:0507
cs=0x2f3d;eip=0x00050a; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 101041 mov     [bp-2], dx ;~ 2F3D:050A
cs=0x2f3d;eip=0x00050d; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101042 les     bx, [bp-4] ;~ 2F3D:050D
cs=0x2f3d;eip=0x000510; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1A74));	// 101043 cmp     word ptr es:[bx], 1A74h ;~ 2F3D:0510
cs=0x2f3d;eip=0x000515; 	R(JNZ(loc_3ded3));	// 101044 jnz     short loc_3DED3 ;~ 2F3D:0515
cs=0x2f3d;eip=0x000517; 	X(MOV(unk_4e581, 3));	// 101045 mov     byte ptr unk_4E581, 3 ;~ 2F3D:0517
cs=0x2f3d;eip=0x00051c; 	X(MOV(unk_4e56f, 1));	// 101046 mov     byte ptr unk_4E56F, 1 ;~ 2F3D:051C
cs=0x2f3d;eip=0x000521; 	R(JMP(loc_3dedd));	// 101047 jmp     short loc_3DEDD ;~ 2F3D:0521
loc_3ded3:
	// 10813 
cs=0x2f3d;eip=0x000523; 	X(MOV(unk_4e581, 1));	// 101051 mov     byte ptr unk_4E581, 1 ;~ 2F3D:0523
cs=0x2f3d;eip=0x000528; 	X(MOV(unk_4e56f, 3));	// 101052 mov     byte ptr unk_4E56F, 3 ;~ 2F3D:0528
loc_3dedd:
	// 10814 
cs=0x2f3d;eip=0x00052d; 	T(LES(bx, *(dw*)(raddr(ss,bp-4))));	// 101055 les     bx, [bp-4] ;~ 2F3D:052D
cs=0x2f3d;eip=0x000530; 	T(CMP(*(dw*)(raddr(es,bx)), 0x1ABC));	// 101056 cmp     word ptr es:[bx], 1ABCh ;~ 2F3D:0530
cs=0x2f3d;eip=0x000535; 	R(JNZ(loc_3deeb));	// 101057 jnz     short loc_3DEEB ;~ 2F3D:0535
cs=0x2f3d;eip=0x000537; 	T(MOV(al, 3));	// 101058 mov     al, 3 ;~ 2F3D:0537
cs=0x2f3d;eip=0x000539; 	R(JMP(loc_3deed));	// 101059 jmp     short loc_3DEED ;~ 2F3D:0539
loc_3deeb:
	// 10815 
cs=0x2f3d;eip=0x00053b; 	T(MOV(al, 1));	// 101063 mov     al, 1 ;~ 2F3D:053B
loc_3deed:
	// 10816 
cs=0x2f3d;eip=0x00053d; 	X(MOV(unk_4e5cd, al));	// 101066 mov     byte ptr unk_4E5CD, al ;~ 2F3D:053D
cs=0x2f3d;eip=0x000540; 	X(MOV(unk_4e5ad, al));	// 101067 mov     byte ptr unk_4E5AD, al ;~ 2F3D:0540
loc_3def3:
	// 10817 
cs=0x2f3d;eip=0x000543; 	T(MOV(sp, bp));	// 101070 mov     sp, bp ;~ 2F3D:0543
cs=0x2f3d;eip=0x000545; 	X(POP(bp));	// 101071 pop     bp ;~ 2F3D:0545
cs=0x2f3d;eip=0x000546; 	R(RETF(0));	// 101072 retf ;~ 2F3D:0546
loc_3def7:
	// 10818 
cs=0x2f3d;eip=0x000547; 	X(PUSH(bp));	// 101077 push    bp ;~ 2F3D:0547
cs=0x2f3d;eip=0x000548; 	T(MOV(bp, sp));	// 101078 mov     bp, sp ;~ 2F3D:0548
cs=0x2f3d;eip=0x00054a; 	T(SUB(sp, 4));	// 101079 sub     sp, 4 ;~ 2F3D:054A
cs=0x2f3d;eip=0x00054d; 	T(CMP(*(dw*)((&unk_56bb9)), 0x8030));	// 101080 cmp     word ptr unk_56BB9, 8030h ;~ 2F3D:054D
cs=0x2f3d;eip=0x000553; 	R(JNZ(loc_3df0c));	// 101081 jnz     short loc_3DF0C ;~ 2F3D:0553
cs=0x2f3d;eip=0x000555; 	T(MOV(ax, 0x8548));	// 101082 mov     ax, 8548h ;~ 2F3D:0555
cs=0x2f3d;eip=0x000558; 	X(PUSH(ax));	// 101083 push    ax ;~ 2F3D:0558
cs=0x2f3d;eip=0x000559; 	R(CALL(sub_3e27a,0));	// 101084 call    sub_3E27A ;~ 2F3D:0559
loc_3df0c:
	// 10819 
cs=0x2f3d;eip=0x00055c; 	T(MOV(sp, bp));	// 101087 mov     sp, bp ;~ 2F3D:055C
cs=0x2f3d;eip=0x00055e; 	X(POP(bp));	// 101088 pop     bp ;~ 2F3D:055E
cs=0x2f3d;eip=0x00055f; 	R(RETF(0));	// 101089 retf ;~ 2F3D:055F
loc_3df10:
	// 10820 
cs=0x2f3d;eip=0x000560; 	T(CMP(*(dw*)((&unk_56bb9)), 0x388C));	// 101094 cmp     word ptr unk_56BB9, 388Ch ;~ 2F3D:0560
cs=0x2f3d;eip=0x000566; 	R(JNZ(locret_3df2e));	// 101095 jnz     short locret_3DF2E ;~ 2F3D:0566
cs=0x2f3d;eip=0x000568; 	X(MOV(unk_4b5d4, 1));	// 101096 mov     byte ptr unk_4B5D4, 1 ;~ 2F3D:0568
cs=0x2f3d;eip=0x00056d; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 101097 les     bx, dword ptr unk_56FD6 ;~ 2F3D:056D
cs=0x2f3d;eip=0x000571; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 101098 cmp     word ptr es:[bx+212h], 0 ;~ 2F3D:0571
cs=0x2f3d;eip=0x000577; 	R(JZ(locret_3df2e));	// 101099 jz      short locret_3DF2E ;~ 2F3D:0577
cs=0x2f3d;eip=0x000579; 	X(MOV(unk_4b5d4, 3));	// 101100 mov     byte ptr unk_4B5D4, 3 ;~ 2F3D:0579
locret_3df2e:
	// 10821 
cs=0x2f3d;eip=0x00057e; 	R(RETF(0));	// 101104 retf ;~ 2F3D:057E
loc_3df2f:
	// 10822 
cs=0x2f3d;eip=0x00057f; 	T(CMP(*(dw*)((&unk_56bb9)), 0x3EB0));	// 101109 cmp     word ptr unk_56BB9, 3EB0h ;~ 2F3D:057F
cs=0x2f3d;eip=0x000585; 	R(JNZ(locret_3df4d));	// 101110 jnz     short locret_3DF4D ;~ 2F3D:0585
cs=0x2f3d;eip=0x000587; 	X(MOV(unk_4be6d, 1));	// 101111 mov     byte ptr unk_4BE6D, 1 ;~ 2F3D:0587
cs=0x2f3d;eip=0x00058c; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 101112 les     bx, dword ptr unk_56FD6 ;~ 2F3D:058C
cs=0x2f3d;eip=0x000590; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 101113 cmp     word ptr es:[bx+212h], 0 ;~ 2F3D:0590
cs=0x2f3d;eip=0x000596; 	R(JZ(locret_3df4d));	// 101114 jz      short locret_3DF4D ;~ 2F3D:0596
cs=0x2f3d;eip=0x000598; 	X(MOV(unk_4be6d, 3));	// 101115 mov     byte ptr unk_4BE6D, 3 ;~ 2F3D:0598
locret_3df4d:
	// 10823 
cs=0x2f3d;eip=0x00059d; 	R(RETF(0));	// 101119 retf ;~ 2F3D:059D
ret_2f3d_59e:
	// 10824 
cs=0x2f3d;eip=0x00059e; 	R(RETF(0));	// 101121 retf ;~ 2F3D:059E
cs=0x2f3d;eip=0x000820; 	X(PUSH(bp));	// 101529 push    bp ;~ 2F3D:0820
cs=0x2f3d;eip=0x000821; 	X(POP(bp));	// 101530 pop     bp ;~ 2F3D:0821
cs=0x2f3d;eip=0x000822; 	R(RETF(0));	// 101531 retf ;~ 2F3D:0822
locret_3e276:
	// 10849 
cs=0x2f3d;eip=0x0008c6; 	R(RETF(0));	// 101626 retf ;~ 2F3D:08C6
loc_3e277:
	// 10850 
cs=0x2f3d;eip=0x0008c7; 	X(PUSH(bp));	// 101630 push    bp ;~ 2F3D:08C7
cs=0x2f3d;eip=0x0008c8; 	X(POP(bp));	// 101631 pop     bp ;~ 2F3D:08C8
cs=0x2f3d;eip=0x0008c9; 	R(RETF(0));	// 101632 retf ;~ 2F3D:08C9
sub_3df4f:
	// 101127 
cs=0x2f3d;eip=0x00059f; 	X(PUSH(bp));	// 101128 push    bp ;~ 2F3D:059F
cs=0x2f3d;eip=0x0005a0; 	T(MOV(bp, sp));	// 101129 mov     bp, sp ;~ 2F3D:05A0
cs=0x2f3d;eip=0x0005a2; 	T(SUB(sp, 2));	// 101130 sub     sp, 2 ;~ 2F3D:05A2
cs=0x2f3d;eip=0x0005a5; 	X(PUSH(si));	// 101131 push    si ;~ 2F3D:05A5
cs=0x2f3d;eip=0x0005a6; 	X(MOV(*(dw*)((&unk_4b080)), 0));	// 101132 mov     word ptr unk_4B080, 0 ;~ 2F3D:05A6
cs=0x2f3d;eip=0x0005ac; 	T(MOV(si, 0x0CC8C));	// 101133 mov     si, 0CC8Ch ;~ 2F3D:05AC
cs=0x2f3d;eip=0x0005af; 	R(JMP(loc_3df73));	// 101134 jmp     short loc_3DF73 ;~ 2F3D:05AF
loc_3df61:
	// 10825 
cs=0x2f3d;eip=0x0005b1; 	T(MOV(ax, 0x36CE));	// 101138 mov     ax, 36CEh ;~ 2F3D:05B1
cs=0x2f3d;eip=0x0005b4; 	X(PUSH(ax));	// 101139 push    ax ;~ 2F3D:05B4
cs=0x2f3d;eip=0x0005b5; 	T(MOV(ax, 0x0E0));	// 101140 mov     ax, 0E0h ; 'à' ;~ 2F3D:05B5
cs=0x2f3d;eip=0x0005b8; 	X(PUSH(ax));	// 101141 push    ax ;~ 2F3D:05B8
cs=0x2f3d;eip=0x0005b9; 	R(CALLF(sub_24f74,0));	// 101142 call    sub_24F74 ;~ 2F3D:05B9
cs=0x2f3d;eip=0x0005be; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 101143 mov     [si], ax ;~ 2F3D:05BE
cs=0x2f3d;eip=0x0005c0; 	T(SUB(si, 6));	// 101144 sub     si, 6 ;~ 2F3D:05C0
loc_3df73:
	// 10826 
cs=0x2f3d;eip=0x0005c3; 	T(CMP(si, 0x0CC74));	// 101147 cmp     si, 0CC74h ;~ 2F3D:05C3
cs=0x2f3d;eip=0x0005c7; 	R(JNC(loc_3df61));	// 101148 jnb     short loc_3DF61 ;~ 2F3D:05C7
cs=0x2f3d;eip=0x0005c9; 	X(POP(si));	// 101149 pop     si ;~ 2F3D:05C9
cs=0x2f3d;eip=0x0005ca; 	T(MOV(sp, bp));	// 101150 mov     sp, bp ;~ 2F3D:05CA
cs=0x2f3d;eip=0x0005cc; 	X(POP(bp));	// 101151 pop     bp ;~ 2F3D:05CC
cs=0x2f3d;eip=0x0005cd; 	R(RETF(0));	// 101152 retf ;~ 2F3D:05CD
sub_3df7e:
	// 101160 
cs=0x2f3d;eip=0x0005ce; 	X(PUSH(bp));	// 101161 push    bp ;~ 2F3D:05CE
cs=0x2f3d;eip=0x0005cf; 	T(MOV(bp, sp));	// 101162 mov     bp, sp ;~ 2F3D:05CF
cs=0x2f3d;eip=0x0005d1; 	T(SUB(sp, 2));	// 101163 sub     sp, 2 ;~ 2F3D:05D1
cs=0x2f3d;eip=0x0005d4; 	X(PUSH(si));	// 101164 push    si ;~ 2F3D:05D4
cs=0x2f3d;eip=0x0005d5; 	T(MOV(si, 0x0CC8C));	// 101165 mov     si, 0CC8Ch ;~ 2F3D:05D5
cs=0x2f3d;eip=0x0005d8; 	R(JMP(loc_3df95));	// 101166 jmp     short loc_3DF95 ;~ 2F3D:05D8
loc_3df8a:
	// 10827 
cs=0x2f3d;eip=0x0005da; 	X(PUSH(si));	// 101170 push    si ;~ 2F3D:05DA
cs=0x2f3d;eip=0x0005db; 	X(PUSH(cs));	// 101171 push    cs ;~ 2F3D:05DB
cs=0x2f3d;eip=0x0005dc; 	R(CALL(sub_3e098,0));	// 101172 call    near ptr sub_3E098 ;~ 2F3D:05DC
cs=0x2f3d;eip=0x0005df; 	T(ADD(sp, 2));	// 101173 add     sp, 2 ;~ 2F3D:05DF
cs=0x2f3d;eip=0x0005e2; 	T(SUB(si, 6));	// 101174 sub     si, 6 ;~ 2F3D:05E2
loc_3df95:
	// 10828 
cs=0x2f3d;eip=0x0005e5; 	T(CMP(si, 0x0CC74));	// 101177 cmp     si, 0CC74h ;~ 2F3D:05E5
cs=0x2f3d;eip=0x0005e9; 	R(JNC(loc_3df8a));	// 101178 jnb     short loc_3DF8A ;~ 2F3D:05E9
cs=0x2f3d;eip=0x0005eb; 	X(POP(si));	// 101179 pop     si ;~ 2F3D:05EB
cs=0x2f3d;eip=0x0005ec; 	T(MOV(sp, bp));	// 101180 mov     sp, bp ;~ 2F3D:05EC
cs=0x2f3d;eip=0x0005ee; 	X(POP(bp));	// 101181 pop     bp ;~ 2F3D:05EE
cs=0x2f3d;eip=0x0005ef; 	R(RETF(0));	// 101182 retf ;~ 2F3D:05EF
sub_3dfa0:
	// 101190 
#undef var_c
#define var_c -0x0C
	// 101193 var_C           = word ptr -0Ch ;~ 2F3D:05F0
#undef var_a
#define var_a -0x0A
	// 101194 var_A           = word ptr -0Ah ;~ 2F3D:05F0
#undef var_8
#define var_8 -8
	// 101195 var_8           = word ptr -8 ;~ 2F3D:05F0
#undef var_6
#define var_6 -6
	// 101196 var_6           = word ptr -6 ;~ 2F3D:05F0
#undef arg_0
#define arg_0 6
	// 101197 arg_0           = word ptr  6 ;~ 2F3D:05F0
#undef arg_2
#define arg_2 8
	// 101198 arg_2           = word ptr  8 ;~ 2F3D:05F0
#undef arg_4
#define arg_4 0x0A
	// 101199 arg_4           = word ptr  0Ah ;~ 2F3D:05F0
#undef arg_6
#define arg_6 0x0C
	// 101200 arg_6           = word ptr  0Ch ;~ 2F3D:05F0
cs=0x2f3d;eip=0x0005f0; 	X(PUSH(bp));	// 101202 push    bp ;~ 2F3D:05F0
cs=0x2f3d;eip=0x0005f1; 	T(MOV(bp, sp));	// 101203 mov     bp, sp ;~ 2F3D:05F1
cs=0x2f3d;eip=0x0005f3; 	T(SUB(sp, 0x0C));	// 101204 sub     sp, 0Ch ;~ 2F3D:05F3
cs=0x2f3d;eip=0x0005f6; 	X(PUSH(di));	// 101205 push    di ;~ 2F3D:05F6
cs=0x2f3d;eip=0x0005f7; 	X(PUSH(si));	// 101206 push    si ;~ 2F3D:05F7
cs=0x2f3d;eip=0x0005f8; 	T(MOV(si, 0x0CC8C));	// 101207 mov     si, 0CC8Ch ;~ 2F3D:05F8
cs=0x2f3d;eip=0x0005fb; 	T(CMP(si, 0x0CC74));	// 101208 cmp     si, 0CC74h ;~ 2F3D:05FB
cs=0x2f3d;eip=0x0005ff; 	R(JC(loc_3dfd0));	// 101209 jb      short loc_3DFD0 ;~ 2F3D:05FF
cs=0x2f3d;eip=0x000601; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 101210 mov     dx, word ptr unk_47A9A ;~ 2F3D:0601
cs=0x2f3d;eip=0x000605; 	T(SUB(ax, ax));	// 101211 sub     ax, ax ;~ 2F3D:0605
cs=0x2f3d;eip=0x000607; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 101212 mov     [bp+var_C], ax ;~ 2F3D:0607
cs=0x2f3d;eip=0x00060a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 101213 mov     [bp+var_A], dx ;~ 2F3D:060A
loc_3dfbd:
	// 10829 
cs=0x2f3d;eip=0x00060d; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 101216 mov     ax, [si] ;~ 2F3D:060D
cs=0x2f3d;eip=0x00060f; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_c))));	// 101217 or      ax, [bp+var_C] ;~ 2F3D:060F
cs=0x2f3d;eip=0x000612; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 101218 mov     dx, [bp+var_A] ;~ 2F3D:0612
cs=0x2f3d;eip=0x000615; 	T(MOV(es, dx));	// 101219 mov     es, dx ;~ 2F3D:0615
cs=0x2f3d;eip=0x000617; 	T(MOV(bx, ax));	// 101220 mov     bx, ax ;~ 2F3D:0617
cs=0x2f3d;eip=0x000619; 	T(TEST(*(raddr(es,bx+2)), 1));	// 101221 test    byte ptr es:[bx+2], 1 ;~ 2F3D:0619
cs=0x2f3d;eip=0x00061e; 	R(JNZ(loc_3dfeb));	// 101222 jnz     short loc_3DFEB ;~ 2F3D:061E
loc_3dfd0:
	// 10830 
cs=0x2f3d;eip=0x000620; 	T(CMP(si, 0x0CC74));	// 101226 cmp     si, 0CC74h ;~ 2F3D:0620
cs=0x2f3d;eip=0x000624; 	R(JNC(loc_3e027));	// 101227 jnb     short loc_3E027 ;~ 2F3D:0624
cs=0x2f3d;eip=0x000626; 	T(MOV(si, 0x0CC74));	// 101228 mov     si, 0CC74h ;~ 2F3D:0626
cs=0x2f3d;eip=0x000629; 	T(MOV(ax, *(dw*)((&unk_54626))));	// 101229 mov     ax, word ptr unk_54626 ;~ 2F3D:0629
cs=0x2f3d;eip=0x00062c; 	T(MOV(dx, *(dw*)((&unk_54628))));	// 101230 mov     dx, word ptr unk_54628 ;~ 2F3D:062C
cs=0x2f3d;eip=0x000630; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 101231 mov     [bp+var_8], ax ;~ 2F3D:0630
cs=0x2f3d;eip=0x000633; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 101232 mov     [bp+var_6], dx ;~ 2F3D:0633
cs=0x2f3d;eip=0x000636; 	T(MOV(di, 0x0CC8C));	// 101233 mov     di, 0CC8Ch ;~ 2F3D:0636
cs=0x2f3d;eip=0x000639; 	R(JMP(loc_3e019));	// 101234 jmp     short loc_3E019 ;~ 2F3D:0639
loc_3dfeb:
	// 10831 
cs=0x2f3d;eip=0x00063b; 	T(SUB(si, 6));	// 101238 sub     si, 6 ;~ 2F3D:063B
cs=0x2f3d;eip=0x00063e; 	T(CMP(si, 0x0CC74));	// 101239 cmp     si, 0CC74h ;~ 2F3D:063E
cs=0x2f3d;eip=0x000642; 	R(JC(loc_3dfd0));	// 101240 jb      short loc_3DFD0 ;~ 2F3D:0642
cs=0x2f3d;eip=0x000644; 	R(JMP(loc_3dfbd));	// 101241 jmp     short loc_3DFBD ;~ 2F3D:0644
loc_3dff6:
	// 10832 
cs=0x2f3d;eip=0x000646; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 101245 mov     ax, [bp+var_8] ;~ 2F3D:0646
cs=0x2f3d;eip=0x000649; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 101246 mov     dx, [bp+var_6] ;~ 2F3D:0649
cs=0x2f3d;eip=0x00064c; 	T(CMP(*(dw*)(raddr(ds,di+4)), dx));	// 101247 cmp     [di+4], dx ;~ 2F3D:064C
cs=0x2f3d;eip=0x00064f; 	R(JG(loc_3e016));	// 101248 jg      short loc_3E016 ;~ 2F3D:064F
cs=0x2f3d;eip=0x000651; 	R(JL(loc_3e008));	// 101249 jl      short loc_3E008 ;~ 2F3D:0651
cs=0x2f3d;eip=0x000653; 	T(CMP(*(dw*)(raddr(ds,di+2)), ax));	// 101250 cmp     [di+2], ax ;~ 2F3D:0653
cs=0x2f3d;eip=0x000656; 	R(JNC(loc_3e016));	// 101251 jnb     short loc_3E016 ;~ 2F3D:0656
loc_3e008:
	// 10833 
cs=0x2f3d;eip=0x000658; 	T(MOV(si, di));	// 101254 mov     si, di ;~ 2F3D:0658
cs=0x2f3d;eip=0x00065a; 	T(MOV(ax, *(dw*)(raddr(ds,di+2))));	// 101255 mov     ax, [di+2] ;~ 2F3D:065A
cs=0x2f3d;eip=0x00065d; 	T(MOV(dx, *(dw*)(raddr(ds,di+4))));	// 101256 mov     dx, [di+4] ;~ 2F3D:065D
cs=0x2f3d;eip=0x000660; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 101257 mov     [bp+var_8], ax ;~ 2F3D:0660
cs=0x2f3d;eip=0x000663; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 101258 mov     [bp+var_6], dx ;~ 2F3D:0663
loc_3e016:
	// 10834 
cs=0x2f3d;eip=0x000666; 	T(SUB(di, 6));	// 101262 sub     di, 6 ;~ 2F3D:0666
loc_3e019:
	// 10835 
cs=0x2f3d;eip=0x000669; 	T(CMP(di, 0x0CC7A));	// 101265 cmp     di, 0CC7Ah ;~ 2F3D:0669
cs=0x2f3d;eip=0x00066d; 	R(JNC(loc_3dff6));	// 101266 jnb     short loc_3DFF6 ;~ 2F3D:066D
cs=0x2f3d;eip=0x00066f; 	X(PUSH(si));	// 101267 push    si ;~ 2F3D:066F
cs=0x2f3d;eip=0x000670; 	X(PUSH(cs));	// 101268 push    cs ;~ 2F3D:0670
cs=0x2f3d;eip=0x000671; 	R(CALL(sub_3e098,0));	// 101269 call    near ptr sub_3E098 ;~ 2F3D:0671
cs=0x2f3d;eip=0x000674; 	T(ADD(sp, 2));	// 101270 add     sp, 2 ;~ 2F3D:0674
loc_3e027:
	// 10836 
cs=0x2f3d;eip=0x000677; 	T(CMP(unk_57041, 2));	// 101273 cmp     byte ptr unk_57041, 2 ;~ 2F3D:0677
cs=0x2f3d;eip=0x00067c; 	R(JC(loc_3e039));	// 101274 jb      short loc_3E039 ;~ 2F3D:067C
cs=0x2f3d;eip=0x00067e; 	T(MOV(ax, 0x0B40));	// 101275 mov     ax, 0B40h ;~ 2F3D:067E
cs=0x2f3d;eip=0x000681; 	X(PUSH(ax));	// 101276 push    ax ;~ 2F3D:0681
cs=0x2f3d;eip=0x000682; 	R(CALLF(sub_2937a,0));	// 101277 call    sub_2937A ;~ 2F3D:0682
cs=0x2f3d;eip=0x000687; 	R(JMP(loc_3e03b));	// 101278 jmp     short loc_3E03B ;~ 2F3D:0687
loc_3e039:
	// 10837 
cs=0x2f3d;eip=0x000689; 	T(SUB(ax, ax));	// 101282 sub     ax, ax ;~ 2F3D:0689
loc_3e03b:
	// 10838 
cs=0x2f3d;eip=0x00068b; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 101285 mov     bx, word ptr unk_47A9A ;~ 2F3D:068B
cs=0x2f3d;eip=0x00068f; 	T(MOV(cx, *(dw*)(raddr(ds,si))));	// 101286 mov     cx, [si] ;~ 2F3D:068F
cs=0x2f3d;eip=0x000691; 	T(MOV(es, bx));	// 101287 mov     es, bx ;~ 2F3D:0691
cs=0x2f3d;eip=0x000693; 	T(MOV(bx, cx));	// 101289 mov     bx, cx ;~ 2F3D:0693
cs=0x2f3d;eip=0x000695; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 101290 mov     es:[bx+12h], ax ;~ 2F3D:0695
cs=0x2f3d;eip=0x000699; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101291 mov     ax, [bp+arg_0] ;~ 2F3D:0699
cs=0x2f3d;eip=0x00069c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 101292 mov     dx, [bp+arg_2] ;~ 2F3D:069C
cs=0x2f3d;eip=0x00069f; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 101293 mov     es:[bx+6], ax ;~ 2F3D:069F
cs=0x2f3d;eip=0x0006a3; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 101294 mov     es:[bx+8], dx ;~ 2F3D:06A3
cs=0x2f3d;eip=0x0006a7; 	T(MOV(ax, cx));	// 101295 mov     ax, cx ;~ 2F3D:06A7
cs=0x2f3d;eip=0x0006a9; 	T(SUB(ax, ax));	// 101296 sub     ax, ax ;~ 2F3D:06A9
cs=0x2f3d;eip=0x0006ab; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 101297 mov     es:[bx+0Ch], ax ;~ 2F3D:06AB
cs=0x2f3d;eip=0x0006af; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 101298 mov     es:[bx+0Ah], ax ;~ 2F3D:06AF
cs=0x2f3d;eip=0x0006b3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 101299 mov     ax, [bp+arg_4] ;~ 2F3D:06B3
cs=0x2f3d;eip=0x0006b6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 101300 mov     dx, [bp+arg_6] ;~ 2F3D:06B6
cs=0x2f3d;eip=0x0006b9; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 101301 mov     es:[bx+0Eh], ax ;~ 2F3D:06B9
cs=0x2f3d;eip=0x0006bd; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 101302 mov     es:[bx+10h], dx ;~ 2F3D:06BD
cs=0x2f3d;eip=0x0006c1; 	T(MOV(ax, cx));	// 101303 mov     ax, cx ;~ 2F3D:06C1
cs=0x2f3d;eip=0x0006c3; 	X(OR(*(raddr(es,bx+2)), 1));	// 101304 or      byte ptr es:[bx+2], 1 ;~ 2F3D:06C3
cs=0x2f3d;eip=0x0006c8; 	X(PUSH(ax));	// 101305 push    ax ;~ 2F3D:06C8
cs=0x2f3d;eip=0x0006c9; 	T(MOV(ax, 0x0EAE4));	// 101306 mov     ax, 0EAE4h ;~ 2F3D:06C9
cs=0x2f3d;eip=0x0006cc; 	X(PUSH(ax));	// 101307 push    ax ;~ 2F3D:06CC
cs=0x2f3d;eip=0x0006cd; 	R(CALLF(sub_23e92,0));	// 101308 call    sub_23E92 ;~ 2F3D:06CD
cs=0x2f3d;eip=0x0006d2; 	T(ADD(sp, 4));	// 101309 add     sp, 4 ;~ 2F3D:06D2
cs=0x2f3d;eip=0x0006d5; 	T(MOV(ax, *(dw*)((&unk_5705a))));	// 101310 mov     ax, word ptr unk_5705A ;~ 2F3D:06D5
cs=0x2f3d;eip=0x0006d8; 	T(MOV(dx, *(dw*)((&unk_5705c))));	// 101311 mov     dx, word ptr unk_5705C ;~ 2F3D:06D8
cs=0x2f3d;eip=0x0006dc; 	X(MOV(*(dw*)(raddr(ds,si+2)), ax));	// 101312 mov     [si+2], ax ;~ 2F3D:06DC
cs=0x2f3d;eip=0x0006df; 	X(MOV(*(dw*)(raddr(ds,si+4)), dx));	// 101313 mov     [si+4], dx ;~ 2F3D:06DF
cs=0x2f3d;eip=0x0006e2; 	X(POP(si));	// 101314 pop     si ;~ 2F3D:06E2
cs=0x2f3d;eip=0x0006e3; 	X(POP(di));	// 101315 pop     di ;~ 2F3D:06E3
cs=0x2f3d;eip=0x0006e4; 	T(MOV(sp, bp));	// 101316 mov     sp, bp ;~ 2F3D:06E4
cs=0x2f3d;eip=0x0006e6; 	X(POP(bp));	// 101317 pop     bp ;~ 2F3D:06E6
cs=0x2f3d;eip=0x0006e7; 	R(RETF(0));	// 101318 retf ;~ 2F3D:06E7
sub_3e098:
	// 101326 
#undef arg_0
#define arg_0 6
	// 101329 arg_0           = word ptr  6 ;~ 2F3D:06E8
cs=0x2f3d;eip=0x0006e8; 	X(PUSH(bp));	// 101331 push    bp ;~ 2F3D:06E8
cs=0x2f3d;eip=0x0006e9; 	T(MOV(bp, sp));	// 101332 mov     bp, sp ;~ 2F3D:06E9
cs=0x2f3d;eip=0x0006eb; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 101333 mov     bx, [bp+arg_0] ;~ 2F3D:06EB
cs=0x2f3d;eip=0x0006ee; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 101334 mov     ax, [bx] ;~ 2F3D:06EE
cs=0x2f3d;eip=0x0006f0; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 101335 mov     bx, word ptr unk_47A9A ;~ 2F3D:06F0
cs=0x2f3d;eip=0x0006f4; 	T(MOV(dx, bx));	// 101336 mov     dx, bx ;~ 2F3D:06F4
cs=0x2f3d;eip=0x0006f6; 	T(MOV(es, dx));	// 101337 mov     es, dx ;~ 2F3D:06F6
cs=0x2f3d;eip=0x0006f8; 	T(MOV(bx, ax));	// 101338 mov     bx, ax ;~ 2F3D:06F8
cs=0x2f3d;eip=0x0006fa; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 101339 and     byte ptr es:[bx+2], 0FEh ;~ 2F3D:06FA
cs=0x2f3d;eip=0x0006ff; 	X(POP(bp));	// 101340 pop     bp ;~ 2F3D:06FF
cs=0x2f3d;eip=0x000700; 	R(RETF(0));	// 101341 retf ;~ 2F3D:0700
sub_3e0b1:
	// 101349 
#undef arg_0
#define arg_0 6
	// 101351 arg_0           = byte ptr  6 ;~ 2F3D:0701
cs=0x2f3d;eip=0x000701; 	X(PUSH(bp));	// 101353 push    bp ;~ 2F3D:0701
cs=0x2f3d;eip=0x000702; 	T(MOV(bp, sp));	// 101354 mov     bp, sp ;~ 2F3D:0702
cs=0x2f3d;eip=0x000704; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 101355 cmp     [bp+arg_0], 0 ;~ 2F3D:0704
cs=0x2f3d;eip=0x000708; 	R(JZ(loc_3e0c5));	// 101356 jz      short loc_3E0C5 ;~ 2F3D:0708
cs=0x2f3d;eip=0x00070a; 	T(LES(bx, *(dd*)((&unk_4b076))));	// 101357 les     bx, dword ptr unk_4B076 ;~ 2F3D:070A
cs=0x2f3d;eip=0x00070e; 	X(OR(*(raddr(es,bx+2)), 1));	// 101359 or      byte ptr es:[bx+2], 1 ;~ 2F3D:070E
cs=0x2f3d;eip=0x000713; 	R(JMP(loc_3e0ce));	// 101360 jmp     short loc_3E0CE ;~ 2F3D:0713
loc_3e0c5:
	// 10839 
cs=0x2f3d;eip=0x000715; 	T(LES(bx, *(dd*)((&unk_4b076))));	// 101364 les     bx, dword ptr unk_4B076 ;~ 2F3D:0715
cs=0x2f3d;eip=0x000719; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 101365 and     byte ptr es:[bx+2], 0FEh ;~ 2F3D:0719
loc_3e0ce:
	// 10840 
cs=0x2f3d;eip=0x00071e; 	X(POP(bp));	// 101368 pop     bp ;~ 2F3D:071E
cs=0x2f3d;eip=0x00071f; 	R(RETF(0));	// 101369 retf ;~ 2F3D:071F
sub_3e0d0:
	// 101377 
#undef arg_0
#define arg_0 6
	// 101380 arg_0           = word ptr  6 ;~ 2F3D:0720
#undef arg_2
#define arg_2 8
	// 101381 arg_2           = word ptr  8 ;~ 2F3D:0720
#undef arg_4
#define arg_4 0x0A
	// 101382 arg_4           = word ptr  0Ah ;~ 2F3D:0720
#undef arg_6
#define arg_6 0x0C
	// 101383 arg_6           = word ptr  0Ch ;~ 2F3D:0720
#undef arg_8
#define arg_8 0x0E
	// 101384 arg_8           = word ptr  0Eh ;~ 2F3D:0720
#undef arg_a
#define arg_a 0x10
	// 101385 arg_A           = word ptr  10h ;~ 2F3D:0720
cs=0x2f3d;eip=0x000720; 	X(PUSH(bp));	// 101387 push    bp ;~ 2F3D:0720
cs=0x2f3d;eip=0x000721; 	T(MOV(bp, sp));	// 101388 mov     bp, sp ;~ 2F3D:0721
cs=0x2f3d;eip=0x000723; 	T(LES(bx, *(dd*)((&unk_4b076))));	// 101389 les     bx, dword ptr unk_4B076 ;~ 2F3D:0723
cs=0x2f3d;eip=0x000727; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101390 mov     ax, [bp+arg_0] ;~ 2F3D:0727
cs=0x2f3d;eip=0x00072a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 101391 mov     dx, [bp+arg_2] ;~ 2F3D:072A
cs=0x2f3d;eip=0x00072d; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 101392 mov     es:[bx+6], ax ;~ 2F3D:072D
cs=0x2f3d;eip=0x000731; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 101393 mov     es:[bx+8], dx ;~ 2F3D:0731
cs=0x2f3d;eip=0x000735; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 101394 mov     ax, [bp+arg_4] ;~ 2F3D:0735
cs=0x2f3d;eip=0x000738; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 101395 mov     dx, [bp+arg_6] ;~ 2F3D:0738
cs=0x2f3d;eip=0x00073b; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 101396 mov     es:[bx+0Ah], ax ;~ 2F3D:073B
cs=0x2f3d;eip=0x00073f; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 101397 mov     es:[bx+0Ch], dx ;~ 2F3D:073F
cs=0x2f3d;eip=0x000743; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 101398 mov     ax, [bp+arg_8] ;~ 2F3D:0743
cs=0x2f3d;eip=0x000746; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 101399 mov     dx, [bp+arg_A] ;~ 2F3D:0746
cs=0x2f3d;eip=0x000749; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 101400 mov     es:[bx+0Eh], ax ;~ 2F3D:0749
cs=0x2f3d;eip=0x00074d; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 101401 mov     es:[bx+10h], dx ;~ 2F3D:074D
cs=0x2f3d;eip=0x000751; 	X(POP(bp));	// 101402 pop     bp ;~ 2F3D:0751
cs=0x2f3d;eip=0x000752; 	R(RETF(0));	// 101403 retf ;~ 2F3D:0752
sub_3e103:
	// 101411 
#undef arg_0
#define arg_0 6
	// 101413 arg_0           = word ptr  6 ;~ 2F3D:0753
#undef arg_6
#define arg_6 0x0C
	// 101414 arg_6           = word ptr  0Ch ;~ 2F3D:0753
cs=0x2f3d;eip=0x000753; 	X(PUSH(bp));	// 101416 push    bp ;~ 2F3D:0753
cs=0x2f3d;eip=0x000754; 	T(MOV(bp, sp));	// 101417 mov     bp, sp ;~ 2F3D:0754
cs=0x2f3d;eip=0x000756; 	T(SUB(sp, 0x0A));	// 101418 sub     sp, 0Ah ;~ 2F3D:0756
cs=0x2f3d;eip=0x000759; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101419 mov     ax, [bp+arg_0] ;~ 2F3D:0759
cs=0x2f3d;eip=0x00075c; 	T(CWD);	// 101420 cwd ;~ 2F3D:075C
cs=0x2f3d;eip=0x00075d; 	T(MOV(dh, dl));	// 101421 mov     dh, dl ;~ 2F3D:075D
cs=0x2f3d;eip=0x00075f; 	T(MOV(dl, ah));	// 101422 mov     dl, ah ;~ 2F3D:075F
cs=0x2f3d;eip=0x000761; 	T(MOV(ah, al));	// 101423 mov     ah, al ;~ 2F3D:0761
cs=0x2f3d;eip=0x000763; 	T(SUB(al, al));	// 101424 sub     al, al ;~ 2F3D:0763
cs=0x2f3d;eip=0x000765; 	T(MOV(ax, dx));	// 101425 mov     ax, dx ;~ 2F3D:0765
cs=0x2f3d;eip=0x000767; 	X(MOV(*(dw*)((&unk_4e918)), ax));	// 101426 mov     word ptr unk_4E918, ax ;~ 2F3D:0767
cs=0x2f3d;eip=0x00076a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 101427 mov     ax, [bp+arg_6] ;~ 2F3D:076A
cs=0x2f3d;eip=0x00076d; 	T(CWD);	// 101428 cwd ;~ 2F3D:076D
cs=0x2f3d;eip=0x00076e; 	T(MOV(dh, dl));	// 101429 mov     dh, dl ;~ 2F3D:076E
cs=0x2f3d;eip=0x000770; 	T(MOV(dl, ah));	// 101430 mov     dl, ah ;~ 2F3D:0770
cs=0x2f3d;eip=0x000772; 	T(MOV(ah, al));	// 101431 mov     ah, al ;~ 2F3D:0772
cs=0x2f3d;eip=0x000774; 	T(SUB(al, al));	// 101432 sub     al, al ;~ 2F3D:0774
cs=0x2f3d;eip=0x000776; 	X(MOV(*(dw*)((&unk_54620)), ax));	// 101433 mov     word ptr unk_54620, ax ;~ 2F3D:0776
cs=0x2f3d;eip=0x000779; 	X(MOV(*(dw*)((&unk_54622)), dx));	// 101434 mov     word ptr unk_54622, dx ;~ 2F3D:0779
cs=0x2f3d;eip=0x00077d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 101435 mov     ax, [bp+arg_6] ;~ 2F3D:077D
cs=0x2f3d;eip=0x000780; 	T(DEC(ax));	// 101436 dec     ax ;~ 2F3D:0780
cs=0x2f3d;eip=0x000781; 	T(CWD);	// 101437 cwd ;~ 2F3D:0781
cs=0x2f3d;eip=0x000782; 	T(MOV(dh, dl));	// 101438 mov     dh, dl ;~ 2F3D:0782
cs=0x2f3d;eip=0x000784; 	T(MOV(dl, ah));	// 101439 mov     dl, ah ;~ 2F3D:0784
cs=0x2f3d;eip=0x000786; 	T(MOV(ah, al));	// 101440 mov     ah, al ;~ 2F3D:0786
cs=0x2f3d;eip=0x000788; 	T(MOV(al, 0x0FF));	// 101441 mov     al, 0FFh ;~ 2F3D:0788
cs=0x2f3d;eip=0x00078a; 	T(NOT(ax));	// 101442 not     ax ;~ 2F3D:078A
cs=0x2f3d;eip=0x00078c; 	T(NOT(dx));	// 101443 not     dx ;~ 2F3D:078C
cs=0x2f3d;eip=0x00078e; 	X(MOV(*(dw*)((&unk_5461c)), ax));	// 101444 mov     word ptr unk_5461C, ax ;~ 2F3D:078E
cs=0x2f3d;eip=0x000791; 	X(MOV(*(dw*)((&unk_5461e)), dx));	// 101445 mov     word ptr unk_5461E, dx ;~ 2F3D:0791
cs=0x2f3d;eip=0x000795; 	T(MOV(sp, bp));	// 101446 mov     sp, bp ;~ 2F3D:0795
cs=0x2f3d;eip=0x000797; 	X(POP(bp));	// 101447 pop     bp ;~ 2F3D:0797
cs=0x2f3d;eip=0x000798; 	R(RETF(0));	// 101448 retf ;~ 2F3D:0798
sub_3e149:
	// 101456 
#undef var_4
#define var_4 -4
	// 101459 var_4           = word ptr -4 ;~ 2F3D:0799
#undef var_2
#define var_2 -2
	// 101460 var_2           = word ptr -2 ;~ 2F3D:0799
#undef arg_0
#define arg_0 6
	// 101461 arg_0           = word ptr  6 ;~ 2F3D:0799
#undef arg_2
#define arg_2 8
	// 101462 arg_2           = word ptr  8 ;~ 2F3D:0799
#undef arg_8
#define arg_8 0x0E
	// 101463 arg_8           = word ptr  0Eh ;~ 2F3D:0799
#undef arg_a
#define arg_a 0x10
	// 101464 arg_A           = word ptr  10h ;~ 2F3D:0799
cs=0x2f3d;eip=0x000799; 	X(PUSH(bp));	// 101466 push    bp ;~ 2F3D:0799
cs=0x2f3d;eip=0x00079a; 	T(MOV(bp, sp));	// 101467 mov     bp, sp ;~ 2F3D:079A
cs=0x2f3d;eip=0x00079c; 	T(SUB(sp, 4));	// 101468 sub     sp, 4 ;~ 2F3D:079C
cs=0x2f3d;eip=0x00079f; 	T(MOV(ax, *(dw*)((&unk_54620))));	// 101469 mov     ax, word ptr unk_54620 ;~ 2F3D:079F
cs=0x2f3d;eip=0x0007a2; 	T(MOV(dx, *(dw*)((&unk_54622))));	// 101470 mov     dx, word ptr unk_54622 ;~ 2F3D:07A2
cs=0x2f3d;eip=0x0007a6; 	T(MOV(cl, 1));	// 101471 mov     cl, 1 ;~ 2F3D:07A6
cs=0x2f3d;eip=0x0007a8; 	T(SUB(cl, unk_4e916));	// 101472 sub     cl, byte ptr unk_4E916 ;~ 2F3D:07A8
cs=0x2f3d;eip=0x0007ac; 	R(CALLF(sub_10240,0));	// 101473 call    sub_10240 ;~ 2F3D:07AC
cs=0x2f3d;eip=0x0007b1; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 101474 mov     [bp+var_4], ax ;~ 2F3D:07B1
cs=0x2f3d;eip=0x0007b4; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 101475 mov     [bp+var_2], dx ;~ 2F3D:07B4
cs=0x2f3d;eip=0x0007b7; 	T(LES(bx, *(dd*)((&unk_4b072))));	// 101476 les     bx, dword ptr unk_4B072 ;~ 2F3D:07B7
cs=0x2f3d;eip=0x0007bb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101477 mov     ax, [bp+arg_0] ;~ 2F3D:07BB
cs=0x2f3d;eip=0x0007be; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 101478 mov     dx, [bp+arg_2] ;~ 2F3D:07BE
cs=0x2f3d;eip=0x0007c1; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 101479 add     ax, [bp+var_4] ;~ 2F3D:07C1
cs=0x2f3d;eip=0x0007c4; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_2))));	// 101480 adc     dx, [bp+var_2] ;~ 2F3D:07C4
cs=0x2f3d;eip=0x0007c7; 	T(AND(ax, *(dw*)((&unk_5461c))));	// 101481 and     ax, word ptr unk_5461C ;~ 2F3D:07C7
cs=0x2f3d;eip=0x0007cb; 	T(AND(dx, *(dw*)((&unk_5461e))));	// 101482 and     dx, word ptr unk_5461E ;~ 2F3D:07CB
cs=0x2f3d;eip=0x0007cf; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 101483 mov     es:[bx+6], ax ;~ 2F3D:07CF
cs=0x2f3d;eip=0x0007d3; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 101484 mov     es:[bx+8], dx ;~ 2F3D:07D3
cs=0x2f3d;eip=0x0007d7; 	T(SUB(ax, ax));	// 101485 sub     ax, ax ;~ 2F3D:07D7
cs=0x2f3d;eip=0x0007d9; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 101486 mov     es:[bx+0Ch], ax ;~ 2F3D:07D9
cs=0x2f3d;eip=0x0007dd; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 101487 mov     es:[bx+0Ah], ax ;~ 2F3D:07DD
cs=0x2f3d;eip=0x0007e1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 101488 mov     ax, [bp+arg_8] ;~ 2F3D:07E1
cs=0x2f3d;eip=0x0007e4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 101489 mov     dx, [bp+arg_A] ;~ 2F3D:07E4
cs=0x2f3d;eip=0x0007e7; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 101490 add     ax, [bp+var_4] ;~ 2F3D:07E7
cs=0x2f3d;eip=0x0007ea; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_2))));	// 101491 adc     dx, [bp+var_2] ;~ 2F3D:07EA
cs=0x2f3d;eip=0x0007ed; 	T(AND(ax, *(dw*)((&unk_5461c))));	// 101492 and     ax, word ptr unk_5461C ;~ 2F3D:07ED
cs=0x2f3d;eip=0x0007f1; 	T(AND(dx, *(dw*)((&unk_5461e))));	// 101493 and     dx, word ptr unk_5461E ;~ 2F3D:07F1
cs=0x2f3d;eip=0x0007f5; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 101494 mov     es:[bx+0Eh], ax ;~ 2F3D:07F5
cs=0x2f3d;eip=0x0007f9; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 101495 mov     es:[bx+10h], dx ;~ 2F3D:07F9
cs=0x2f3d;eip=0x0007fd; 	T(MOV(sp, bp));	// 101496 mov     sp, bp ;~ 2F3D:07FD
cs=0x2f3d;eip=0x0007ff; 	X(POP(bp));	// 101497 pop     bp ;~ 2F3D:07FF
cs=0x2f3d;eip=0x000800; 	R(RETF(0));	// 101498 retf ;~ 2F3D:0800
sub_3e1b1:
	// 101506 
#undef arg_0
#define arg_0 6
	// 101508 arg_0           = byte ptr  6 ;~ 2F3D:0801
cs=0x2f3d;eip=0x000801; 	X(PUSH(bp));	// 101510 push    bp ;~ 2F3D:0801
cs=0x2f3d;eip=0x000802; 	T(MOV(bp, sp));	// 101511 mov     bp, sp ;~ 2F3D:0802
cs=0x2f3d;eip=0x000804; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 101512 cmp     [bp+arg_0], 0 ;~ 2F3D:0804
cs=0x2f3d;eip=0x000808; 	R(JZ(loc_3e1c5));	// 101513 jz      short loc_3E1C5 ;~ 2F3D:0808
cs=0x2f3d;eip=0x00080a; 	T(LES(bx, *(dd*)((&unk_4b072))));	// 101514 les     bx, dword ptr unk_4B072 ;~ 2F3D:080A
cs=0x2f3d;eip=0x00080e; 	X(OR(*(raddr(es,bx+2)), 1));	// 101515 or      byte ptr es:[bx+2], 1 ;~ 2F3D:080E
cs=0x2f3d;eip=0x000813; 	R(JMP(loc_3e1ce));	// 101516 jmp     short loc_3E1CE ;~ 2F3D:0813
loc_3e1c5:
	// 10841 
cs=0x2f3d;eip=0x000815; 	T(LES(bx, *(dd*)((&unk_4b072))));	// 101520 les     bx, dword ptr unk_4B072 ;~ 2F3D:0815
cs=0x2f3d;eip=0x000819; 	X(AND(*(raddr(es,bx+2)), 0x0FE));	// 101521 and     byte ptr es:[bx+2], 0FEh ;~ 2F3D:0819
loc_3e1ce:
	// 10842 
cs=0x2f3d;eip=0x00081e; 	X(POP(bp));	// 101524 pop     bp ;~ 2F3D:081E
cs=0x2f3d;eip=0x00081f; 	R(RETF(0));	// 101525 retf ;~ 2F3D:081F
sub_3e1d3:
	// 101537 
#undef var_14
#define var_14 -0x14
	// 101540 var_14          = word ptr -14h ;~ 2F3D:0823
#undef var_12
#define var_12 -0x12
	// 101541 var_12          = word ptr -12h ;~ 2F3D:0823
#undef var_10
#define var_10 -0x10
	// 101542 var_10          = dword ptr -10h ;~ 2F3D:0823
#undef var_c
#define var_c -0x0C
	// 101543 var_C           = dword ptr -0Ch ;~ 2F3D:0823
#undef var_8
#define var_8 -8
	// 101544 var_8           = dword ptr -8 ;~ 2F3D:0823
#undef arg_0
#define arg_0 6
	// 101545 arg_0           = word ptr  6 ;~ 2F3D:0823
cs=0x2f3d;eip=0x000823; 	X(PUSH(bp));	// 101547 push    bp ;~ 2F3D:0823
cs=0x2f3d;eip=0x000824; 	T(MOV(bp, sp));	// 101548 mov     bp, sp ;~ 2F3D:0824
cs=0x2f3d;eip=0x000826; 	T(SUB(sp, 0x14));	// 101549 sub     sp, 14h ;~ 2F3D:0826
cs=0x2f3d;eip=0x000829; 	X(PUSH(di));	// 101550 push    di ;~ 2F3D:0829
cs=0x2f3d;eip=0x00082a; 	X(PUSH(si));	// 101551 push    si ;~ 2F3D:082A
cs=0x2f3d;eip=0x00082b; 	T(MOV(ax, *(dw*)((&unk_4b096))));	// 101552 mov     ax, word ptr unk_4B096 ;~ 2F3D:082B
cs=0x2f3d;eip=0x00082e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 101553 cmp     [bp+arg_0], ax ;~ 2F3D:082E
cs=0x2f3d;eip=0x000831; 	R(JNZ(loc_3e1e6));	// 101554 jnz     short loc_3E1E6 ;~ 2F3D:0831
cs=0x2f3d;eip=0x000833; 	R(JMP(loc_3e26e));	// 101555 jmp     loc_3E26E ;~ 2F3D:0833
loc_3e1e6:
	// 10843 
cs=0x2f3d;eip=0x000836; 	T(CMP(ax, 0x0FFFF));	// 101559 cmp     ax, 0FFFFh ;~ 2F3D:0836
cs=0x2f3d;eip=0x000839; 	R(JNZ(loc_3e1ee));	// 101560 jnz     short loc_3E1EE ;~ 2F3D:0839
cs=0x2f3d;eip=0x00083b; 	R(JMP(loc_3e26e));	// 101561 jmp     loc_3E26E ;~ 2F3D:083B
loc_3e1ee:
	// 10844 
cs=0x2f3d;eip=0x00083e; 	T(SUB(si, si));	// 101565 sub     si, si ;~ 2F3D:083E
cs=0x2f3d;eip=0x000840; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), si));	// 101566 mov     [bp+var_14], si ;~ 2F3D:0840
cs=0x2f3d;eip=0x000843; 	T(MOV(ax, si));	// 101567 mov     ax, si ;~ 2F3D:0843
cs=0x2f3d;eip=0x000845; 	T(ADD(ax, 0x132));	// 101568 add     ax, 132h ;~ 2F3D:0845
cs=0x2f3d;eip=0x000848; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 101569 mov     word ptr [bp+var_8], ax ;~ 2F3D:0848
cs=0x2f3d;eip=0x00084b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), seg_offset(seg042)));	// 101570 mov     word ptr [bp+var_8+2], seg seg042 ;~ 2F3D:084B
cs=0x2f3d;eip=0x000850; 	T(MOV(ax, si));	// 101571 mov     ax, si ;~ 2F3D:0850
cs=0x2f3d;eip=0x000852; 	T(ADD(ax, 0x0DA));	// 101572 add     ax, 0DAh ; 'Ú' ;~ 2F3D:0852
cs=0x2f3d;eip=0x000855; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c))), ax));	// 101573 mov     word ptr [bp+var_C], ax ;~ 2F3D:0855
cs=0x2f3d;eip=0x000858; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_c+2))), seg_offset(seg042)));	// 101574 mov     word ptr [bp+var_C+2], seg seg042 ;~ 2F3D:0858
cs=0x2f3d;eip=0x00085d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_c+2)))));	// 101575 mov     dx, word ptr [bp+var_C+2] ;~ 2F3D:085D
cs=0x2f3d;eip=0x000860; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 101576 mov     word ptr [bp+var_10], ax ;~ 2F3D:0860
cs=0x2f3d;eip=0x000863; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 101577 mov     word ptr [bp+var_10+2], dx ;~ 2F3D:0863
cs=0x2f3d;eip=0x000866; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), 0x2C));	// 101578 mov     [bp+var_12], 2Ch ; ',' ;~ 2F3D:0866
cs=0x2f3d;eip=0x00086b; 	T(ADD(si, 0x2C));	// 101579 add     si, 2Ch ; ',' ;~ 2F3D:086B
loc_3e21e:
	// 10845 
cs=0x2f3d;eip=0x00086e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 101582 les     bx, [bp+var_8] ;~ 2F3D:086E
cs=0x2f3d;eip=0x000871; 	T(MOV(di, *(dw*)(raddr(es,bx))));	// 101583 mov     di, es:[bx] ;~ 2F3D:0871
cs=0x2f3d;eip=0x000874; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 1));	// 101584 cmp     [bp+arg_0], 1 ;~ 2F3D:0874
cs=0x2f3d;eip=0x000878; 	R(JNZ(loc_3e235));	// 101585 jnz     short loc_3E235 ;~ 2F3D:0878
cs=0x2f3d;eip=0x00087a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_c))));	// 101586 les     bx, [bp+var_C] ;~ 2F3D:087A
cs=0x2f3d;eip=0x00087d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 101587 mov     ax, es:[bx] ;~ 2F3D:087D
cs=0x2f3d;eip=0x000880; 	X(MOV(*(dw*)(raddr(ds,di+0x48)), ax));	// 101588 mov     [di+48h], ax ;~ 2F3D:0880
cs=0x2f3d;eip=0x000883; 	R(JMP(loc_3e24e));	// 101589 jmp     short loc_3E24E ;~ 2F3D:0883
loc_3e235:
	// 10846 
cs=0x2f3d;eip=0x000885; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 101593 les     bx, [bp+var_10] ;~ 2F3D:0885
cs=0x2f3d;eip=0x000888; 	T(MOV(ax, *(dw*)(raddr(ds,di+0x48))));	// 101594 mov     ax, [di+48h] ;~ 2F3D:0888
cs=0x2f3d;eip=0x00088b; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 101595 mov     es:[bx], ax ;~ 2F3D:088B
cs=0x2f3d;eip=0x00088e; 	X(MOV(*(dw*)(raddr(ds,di+0x48)), 0));	// 101596 mov     word ptr [di+48h], 0 ;~ 2F3D:088E
cs=0x2f3d;eip=0x000893; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFFF));	// 101597 cmp     [bp+arg_0], 0FFFFh ;~ 2F3D:0893
cs=0x2f3d;eip=0x000897; 	R(JNZ(loc_3e24e));	// 101598 jnz     short loc_3E24E ;~ 2F3D:0897
cs=0x2f3d;eip=0x000899; 	X(MOV(*(dw*)(raddr(ds,di+0x14)), 0));	// 101599 mov     word ptr [di+14h], 0 ;~ 2F3D:0899
loc_3e24e:
	// 10847 
cs=0x2f3d;eip=0x00089e; 	X(PUSH(di));	// 101603 push    di ;~ 2F3D:089E
cs=0x2f3d;eip=0x00089f; 	R(CALLF(sub_25e68,0));	// 101604 call    sub_25E68 ;~ 2F3D:089F
cs=0x2f3d;eip=0x0008a4; 	T(ADD(sp, 2));	// 101605 add     sp, 2 ;~ 2F3D:08A4
cs=0x2f3d;eip=0x0008a7; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8))), 2));	// 101606 add     word ptr [bp+var_8], 2 ;~ 2F3D:08A7
cs=0x2f3d;eip=0x0008ab; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_c))), 2));	// 101607 add     word ptr [bp+var_C], 2 ;~ 2F3D:08AB
cs=0x2f3d;eip=0x0008af; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_10))), 2));	// 101608 add     word ptr [bp+var_10], 2 ;~ 2F3D:08AF
cs=0x2f3d;eip=0x0008b3; 	X(DEC(*(dw*)(raddr(ss,bp+var_12))));	// 101609 dec     [bp+var_12] ;~ 2F3D:08B3
cs=0x2f3d;eip=0x0008b6; 	R(JNZ(loc_3e21e));	// 101610 jnz     short loc_3E21E ;~ 2F3D:08B6
cs=0x2f3d;eip=0x0008b8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 101611 mov     ax, [bp+arg_0] ;~ 2F3D:08B8
cs=0x2f3d;eip=0x0008bb; 	X(MOV(*(dw*)((&unk_4b096)), ax));	// 101612 mov     word ptr unk_4B096, ax ;~ 2F3D:08BB
loc_3e26e:
	// 10848 
cs=0x2f3d;eip=0x0008be; 	X(POP(si));	// 101616 pop     si ;~ 2F3D:08BE
cs=0x2f3d;eip=0x0008bf; 	X(POP(di));	// 101617 pop     di ;~ 2F3D:08BF
cs=0x2f3d;eip=0x0008c0; 	T(MOV(sp, bp));	// 101618 mov     sp, bp ;~ 2F3D:08C0
cs=0x2f3d;eip=0x0008c2; 	X(POP(bp));	// 101619 pop     bp ;~ 2F3D:08C2
cs=0x2f3d;eip=0x0008c3; 	R(RETF(2));	// 101620 retf    2 ;~ 2F3D:08C3
sub_3e27a:
	// 101638 
#undef arg_0
#define arg_0 4
	// 101641 arg_0           = word ptr  4 ;~ 2F3D:08CA
cs=0x2f3d;eip=0x0008ca; 	X(PUSH(bp));	// 101643 push    bp ;~ 2F3D:08CA
cs=0x2f3d;eip=0x0008cb; 	T(MOV(bp, sp));	// 101644 mov     bp, sp ;~ 2F3D:08CB
cs=0x2f3d;eip=0x0008cd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 101645 mov     bx, [bp+arg_0] ;~ 2F3D:08CD
cs=0x2f3d;eip=0x0008d0; 	X(MOV(*(raddr(ds,bx)), 1));	// 101646 mov     byte ptr [bx], 1 ;~ 2F3D:08D0
cs=0x2f3d;eip=0x0008d3; 	T(LES(bx, *(dd*)((&unk_56bb1))));	// 101647 les     bx, dword ptr unk_56BB1 ;~ 2F3D:08D3
cs=0x2f3d;eip=0x0008d7; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), 0));	// 101648 cmp     word ptr es:[bx+0Ch], 0 ;~ 2F3D:08D7
cs=0x2f3d;eip=0x0008dc; 	R(JG(loc_3e2a5));	// 101649 jg      short loc_3E2A5 ;~ 2F3D:08DC
cs=0x2f3d;eip=0x0008de; 	R(JL(loc_3e298));	// 101650 jl      short loc_3E298 ;~ 2F3D:08DE
cs=0x2f3d;eip=0x0008e0; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), 0x6400));	// 101651 cmp     word ptr es:[bx+0Ah], 6400h ;~ 2F3D:08E0
cs=0x2f3d;eip=0x0008e6; 	R(JNC(loc_3e2a5));	// 101652 jnb     short loc_3E2A5 ;~ 2F3D:08E6
loc_3e298:
	// 10851 
cs=0x2f3d;eip=0x0008e8; 	T(CMP(*(raddr(es,bx+0x24)), 7));	// 101655 cmp     byte ptr es:[bx+24h], 7 ;~ 2F3D:08E8
cs=0x2f3d;eip=0x0008ed; 	R(JZ(loc_3e2a5));	// 101656 jz      short loc_3E2A5 ;~ 2F3D:08ED
cs=0x2f3d;eip=0x0008ef; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 101657 mov     bx, [bp+arg_0] ;~ 2F3D:08EF
cs=0x2f3d;eip=0x0008f2; 	X(MOV(*(raddr(ds,bx)), 3));	// 101658 mov     byte ptr [bx], 3 ;~ 2F3D:08F2
loc_3e2a5:
	// 10852 
cs=0x2f3d;eip=0x0008f5; 	X(POP(bp));	// 101662 pop     bp ;~ 2F3D:08F5
cs=0x2f3d;eip=0x0008f6; 	R(RETN(2));	// 101663 retn    2 ;~ 2F3D:08F6

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
        case m2c::kloc_3de16: 	goto loc_3de16;
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
      //  case m2c::kseg029_proc: 	goto seg029_proc;
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
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

