/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group29(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group29:
    _begin:
sub_3e446:
	// 101910 
#undef arg_0
#define arg_0 6
	// 101913 arg_0           = byte ptr  6 ;~ 2FE6:0006
cs=0x2fe6;eip=0x000006; 	X(PUSH(bp));	// 101915 push    bp ;~ 2FE6:0006
cs=0x2fe6;eip=0x000007; 	T(MOV(bp, sp));	// 101916 mov     bp, sp ;~ 2FE6:0007
cs=0x2fe6;eip=0x000009; 	X(PUSH(ds));	// 101917 push    ds ;~ 2FE6:0009
cs=0x2fe6;eip=0x00000a; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 101918 cmp     [bp+arg_0], 0 ;~ 2FE6:000A
cs=0x2fe6;eip=0x00000e; 	R(JZ(loc_3e47b));	// 101919 jz      short loc_3E47B ;~ 2FE6:000E
cs=0x2fe6;eip=0x000010; 	T(CMP(byte_4b09e, 0));	// 101920 cmp     byte_4B09E, 0 ;~ 2FE6:0010
cs=0x2fe6;eip=0x000015; 	R(JNZ(loc_3e496));	// 101921 jnz     short loc_3E496 ;~ 2FE6:0015
cs=0x2fe6;eip=0x000017; 	X(MOV(byte_4b09e, 1));	// 101922 mov     byte_4B09E, 1 ;~ 2FE6:0017
cs=0x2fe6;eip=0x00001c; 	T(MOV(ah, 0x35));	// 101923 mov     ah, 35h ; '5' ;~ 2FE6:001C
cs=0x2fe6;eip=0x00001e; 	T(MOV(al, 0x24));	// 101924 mov     al, 24h ; '$' ;~ 2FE6:001E
cs=0x2fe6;eip=0x000020; 	R(_INT(0x21));	// 101925 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 2FE6:0020
cs=0x2fe6;eip=0x000022; 	X(MOV(word_4b09a, es));	// 101928 mov     word_4B09A, es ;~ 2FE6:0022
cs=0x2fe6;eip=0x000026; 	X(MOV(word_4b09c, bx));	// 101929 mov     word_4B09C, bx ;~ 2FE6:0026
cs=0x2fe6;eip=0x00002a; 	T(MOV(dx, 0x5B));	// 101930 mov     dx, 5Bh ; '[' ;~ 2FE6:002A
cs=0x2fe6;eip=0x00002d; 	T(MOV(ax, seg_offset(seg031)));	// 101931 mov     ax, seg seg031 ;~ 2FE6:002D
cs=0x2fe6;eip=0x000030; 	T(MOV(ds, ax));	// 101932 mov     ds, ax ;~ 2FE6:0030
cs=0x2fe6;eip=0x000032; 	T(MOV(ah, 0x25));	// 101934 mov     ah, 25h ; '%' ;~ 2FE6:0032
cs=0x2fe6;eip=0x000034; 	T(MOV(al, 0x24));	// 101935 mov     al, 24h ; '$' ;~ 2FE6:0034
cs=0x2fe6;eip=0x000036; 	R(_INT(0x21));	// 101936 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 2FE6:0036
cs=0x2fe6;eip=0x000038; 	R(JMP(loc_3e496));	// 101939 jmp     short loc_3E496 ;~ 2FE6:0038
loc_3e47b:
	// 10862 
cs=0x2fe6;eip=0x00003b; 	T(CMP(byte_4b09e, 0));	// 101946 cmp     byte_4B09E, 0 ;~ 2FE6:003B
cs=0x2fe6;eip=0x000040; 	R(JZ(loc_3e496));	// 101947 jz      short loc_3E496 ;~ 2FE6:0040
cs=0x2fe6;eip=0x000042; 	X(MOV(byte_4b09e, 0));	// 101948 mov     byte_4B09E, 0 ;~ 2FE6:0042
cs=0x2fe6;eip=0x000047; 	T(MOV(dx, word_4b09c));	// 101949 mov     dx, word_4B09C ;~ 2FE6:0047
cs=0x2fe6;eip=0x00004b; 	T(MOV(ax, word_4b09a));	// 101950 mov     ax, word_4B09A ;~ 2FE6:004B
cs=0x2fe6;eip=0x00004e; 	T(MOV(ds, ax));	// 101951 mov     ds, ax ;~ 2FE6:004E
cs=0x2fe6;eip=0x000050; 	T(MOV(ah, 0x25));	// 101952 mov     ah, 25h ; '%' ;~ 2FE6:0050
cs=0x2fe6;eip=0x000052; 	T(MOV(al, 0x24));	// 101953 mov     al, 24h ; '$' ;~ 2FE6:0052
cs=0x2fe6;eip=0x000054; 	R(_INT(0x21));	// 101954 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 2FE6:0054
loc_3e496:
	// 10863 
cs=0x2fe6;eip=0x000056; 	X(POP(ds));	// 101960 pop     ds ;~ 2FE6:0056
cs=0x2fe6;eip=0x000057; 	X(POP(bp));	// 101961 pop     bp ;~ 2FE6:0057
cs=0x2fe6;eip=0x000058; 	R(RETF(2));	// 101962 retf    2 ;~ 2FE6:0058
seg031_proc:
	// 101966 
cs=0x2fe6;eip=0x00005b; 	X(PUSH(ax));	// 101966 push    ax ;~ 2FE6:005B
cs=0x2fe6;eip=0x00005c; 	X(PUSH(ds));	// 101967 push    ds ;~ 2FE6:005C
cs=0x2fe6;eip=0x00005d; 	T(MOV(ax, seg_offset(dseg)));	// 101968 mov     ax, seg dseg ;~ 2FE6:005D
cs=0x2fe6;eip=0x000060; 	T(MOV(ds, ax));	// 101969 mov     ds, ax ;~ 2FE6:0060
cs=0x2fe6;eip=0x000062; 	T(MOV(ax, di));	// 101970 mov     ax, di ;~ 2FE6:0062
cs=0x2fe6;eip=0x000064; 	T(INC(ax));	// 101971 inc     ax ;~ 2FE6:0064
cs=0x2fe6;eip=0x000065; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 101972 mov     word ptr unk_571E7, ax ;~ 2FE6:0065
cs=0x2fe6;eip=0x000068; 	X(POP(ds));	// 101973 pop     ds ;~ 2FE6:0068
cs=0x2fe6;eip=0x000069; 	X(POP(ax));	// 101974 pop     ax ;~ 2FE6:0069
cs=0x2fe6;eip=0x00006a; 	T(XOR(al, al));	// 101975 xor     al, al ;~ 2FE6:006A
cs=0x2fe6;eip=0x00006c; 	R(IRET);	// 101976 iret ;~ 2FE6:006C
cs=0x2fe6;eip=0x000bbb; 	X(PUSH(bp));	// 103521 push    bp ;~ 2FE6:0BBB
cs=0x2fe6;eip=0x000bbc; 	T(MOV(bp, sp));	// 103522 mov     bp, sp ;~ 2FE6:0BBC
cs=0x2fe6;eip=0x000bbe; 	T(SUB(sp, 0x0A));	// 103523 sub     sp, 0Ah ;~ 2FE6:0BBE
cs=0x2fe6;eip=0x000bc1; 	X(PUSH(di));	// 103524 push    di ;~ 2FE6:0BC1
cs=0x2fe6;eip=0x000bc2; 	X(PUSH(si));	// 103525 push    si ;~ 2FE6:0BC2
cs=0x2fe6;eip=0x000bc3; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 103526 mov     si, [bp+8] ;~ 2FE6:0BC3
cs=0x2fe6;eip=0x000bc6; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 103527 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0BC6
cs=0x2fe6;eip=0x000bcb; 	R(JNZ(loc_3f012));	// 103528 jnz     short loc_3F012 ;~ 2FE6:0BCB
loc_3f00d:
	// 10970 
cs=0x2fe6;eip=0x000bcd; 	T(SUB(ax, ax));	// 103532 sub     ax, ax ;~ 2FE6:0BCD
cs=0x2fe6;eip=0x000bcf; 	R(JMP(loc_3f09d));	// 103533 jmp     loc_3F09D ;~ 2FE6:0BCF
loc_3f012:
	// 10971 
cs=0x2fe6;eip=0x000bd2; 	X(MOV(unk_571e9, 0));	// 103537 mov     byte ptr unk_571E9, 0 ;~ 2FE6:0BD2
cs=0x2fe6;eip=0x000bd7; 	T(CMP(*(dw*)((&unk_571e5)), 0));	// 103538 cmp     word ptr unk_571E5, 0 ;~ 2FE6:0BD7
cs=0x2fe6;eip=0x000bdc; 	R(JZ(loc_3f00d));	// 103539 jz      short loc_3F00D ;~ 2FE6:0BDC
cs=0x2fe6;eip=0x000bde; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 103540 mov     ax, [bp+6] ;~ 2FE6:0BDE
cs=0x2fe6;eip=0x000be1; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 103541 mov     [bp-6], ax ;~ 2FE6:0BE1
cs=0x2fe6;eip=0x000be4; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ds));	// 103542 mov     word ptr [bp-4], ds ;~ 2FE6:0BE4
loc_3f027:
	// 10972 
cs=0x2fe6;eip=0x000be7; 	T(MOV(al, 0x12));	// 103545 mov     al, 12h ;~ 2FE6:0BE7
cs=0x2fe6;eip=0x000be9; 	X(MUL1_1(unk_571e9));	// 103546 mul     byte ptr unk_571E9 ;~ 2FE6:0BE9
cs=0x2fe6;eip=0x000bed; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 103547 add     ax, word ptr unk_571C6 ;~ 2FE6:0BED
cs=0x2fe6;eip=0x000bf1; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 103548 mov     dx, word ptr unk_571C8 ;~ 2FE6:0BF1
cs=0x2fe6;eip=0x000bf5; 	X(PUSH(dx));	// 103549 push    dx ;~ 2FE6:0BF5
cs=0x2fe6;eip=0x000bf6; 	X(PUSH(ax));	// 103550 push    ax ;~ 2FE6:0BF6
cs=0x2fe6;eip=0x000bf7; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 103551 push    word ptr [bp-4] ;~ 2FE6:0BF7
cs=0x2fe6;eip=0x000bfa; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 103552 push    word ptr [bp-6] ;~ 2FE6:0BFA
cs=0x2fe6;eip=0x000bfd; 	R(CALL(sub_3f14e,0));	// 103553 call    sub_3F14E ;~ 2FE6:0BFD
cs=0x2fe6;eip=0x000c00; 	T(MOV(di, ax));	// 103554 mov     di, ax ;~ 2FE6:0C00
cs=0x2fe6;eip=0x000c02; 	T(OR(di, di));	// 103555 or      di, di ;~ 2FE6:0C02
cs=0x2fe6;eip=0x000c04; 	R(JNZ(loc_3f089));	// 103556 jnz     short loc_3F089 ;~ 2FE6:0C04
cs=0x2fe6;eip=0x000c06; 	T(MOV(al, 0x12));	// 103557 mov     al, 12h ;~ 2FE6:0C06
cs=0x2fe6;eip=0x000c08; 	X(MUL1_1(unk_571e9));	// 103558 mul     byte ptr unk_571E9 ;~ 2FE6:0C08
cs=0x2fe6;eip=0x000c0c; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 103559 add     ax, word ptr unk_571C6 ;~ 2FE6:0C0C
cs=0x2fe6;eip=0x000c10; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 103560 mov     dx, word ptr unk_571C8 ;~ 2FE6:0C10
cs=0x2fe6;eip=0x000c14; 	T(MOV(bx, ax));	// 103561 mov     bx, ax ;~ 2FE6:0C14
cs=0x2fe6;eip=0x000c16; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), bx));	// 103562 mov     [bp-0Ah], bx ;~ 2FE6:0C16
cs=0x2fe6;eip=0x000c19; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 103563 mov     [bp-8], dx ;~ 2FE6:0C19
cs=0x2fe6;eip=0x000c1c; 	X(PUSH(di));	// 103564 push    di ;~ 2FE6:0C1C
cs=0x2fe6;eip=0x000c1d; 	X(PUSH(si));	// 103565 push    si ;~ 2FE6:0C1D
cs=0x2fe6;eip=0x000c1e; 	T(LES(di, *(dw*)(raddr(ss,bp-0x0A))));	// 103566 les     di, [bp-0Ah] ;~ 2FE6:0C1E
cs=0x2fe6;eip=0x000c21; 	T(MOV(cx, 0x0FFFF));	// 103567 mov     cx, 0FFFFh ;~ 2FE6:0C21
cs=0x2fe6;eip=0x000c24; 	T(XOR(ax, ax));	// 103568 xor     ax, ax ;~ 2FE6:0C24
	// 103569 repne scasb ;~ 2FE6:0C26
cs=0x2fe6;eip=0x000c26; 	T(	REPNE SCASB);	// 103569 repne scasb ;~ 2FE6:0C26
cs=0x2fe6;eip=0x000c28; 	T(NOT(cx));	// 103570 not     cx ;~ 2FE6:0C28
cs=0x2fe6;eip=0x000c2a; 	T(SUB(di, cx));	// 103571 sub     di, cx ;~ 2FE6:0C2A
cs=0x2fe6;eip=0x000c2c; 	T(XCHG(di, si));	// 103572 xchg    di, si ;~ 2FE6:0C2C
cs=0x2fe6;eip=0x000c2e; 	T(MOV(dx, ds));	// 103573 mov     dx, ds ;~ 2FE6:0C2E
cs=0x2fe6;eip=0x000c30; 	X(PUSH(es));	// 103574 push    es ;~ 2FE6:0C30
cs=0x2fe6;eip=0x000c31; 	T(MOV(es, dx));	// 103575 mov     es, dx ;~ 2FE6:0C31
cs=0x2fe6;eip=0x000c33; 	X(POP(ds));	// 103577 pop     ds ;~ 2FE6:0C33
cs=0x2fe6;eip=0x000c34; 	T(SHR(cx, 1));	// 103578 shr     cx, 1 ;~ 2FE6:0C34
	// 103579 repne movsw ;~ 2FE6:0C36
cs=0x2fe6;eip=0x000c36; 	X(	REPNE MOVSW);	// 103579 repne movsw ;~ 2FE6:0C36
cs=0x2fe6;eip=0x000c38; 	T(ADC(cx, cx));	// 103580 adc     cx, cx ;~ 2FE6:0C38
	// 103581 repne movsb ;~ 2FE6:0C3A
cs=0x2fe6;eip=0x000c3a; 	X(	REPNE MOVSB);	// 103581 repne movsb ;~ 2FE6:0C3A
cs=0x2fe6;eip=0x000c3c; 	T(MOV(ds, dx));	// 103582 mov     ds, dx ;~ 2FE6:0C3C
cs=0x2fe6;eip=0x000c3e; 	X(POP(si));	// 103583 pop     si ;~ 2FE6:0C3E
cs=0x2fe6;eip=0x000c3f; 	X(POP(di));	// 103584 pop     di ;~ 2FE6:0C3F
cs=0x2fe6;eip=0x000c40; 	X(INC(unk_571e9));	// 103585 inc     byte ptr unk_571E9 ;~ 2FE6:0C40
cs=0x2fe6;eip=0x000c44; 	T(MOV(ax, 1));	// 103586 mov     ax, 1 ;~ 2FE6:0C44
cs=0x2fe6;eip=0x000c47; 	R(JMP(loc_3f09d));	// 103587 jmp     short loc_3F09D ;~ 2FE6:0C47
loc_3f089:
	// 10973 
cs=0x2fe6;eip=0x000c49; 	X(INC(unk_571e9));	// 103591 inc     byte ptr unk_571E9 ;~ 2FE6:0C49
cs=0x2fe6;eip=0x000c4d; 	T(MOV(al, unk_571e9));	// 103592 mov     al, byte ptr unk_571E9 ;~ 2FE6:0C4D
cs=0x2fe6;eip=0x000c50; 	T(SUB(ah, ah));	// 103593 sub     ah, ah ;~ 2FE6:0C50
cs=0x2fe6;eip=0x000c52; 	T(CMP(ax, *(dw*)((&unk_571e5))));	// 103594 cmp     ax, word ptr unk_571E5 ;~ 2FE6:0C52
cs=0x2fe6;eip=0x000c56; 	R(JC(loc_3f09b));	// 103595 jb      short loc_3F09B ;~ 2FE6:0C56
cs=0x2fe6;eip=0x000c58; 	R(JMP(loc_3f00d));	// 103596 jmp     loc_3F00D ;~ 2FE6:0C58
loc_3f09b:
	// 10974 
cs=0x2fe6;eip=0x000c5b; 	R(JMP(loc_3f027));	// 103600 jmp     short loc_3F027 ;~ 2FE6:0C5B
loc_3f09d:
	// 10975 
cs=0x2fe6;eip=0x000c5d; 	X(POP(si));	// 103605 pop     si ;~ 2FE6:0C5D
cs=0x2fe6;eip=0x000c5e; 	X(POP(di));	// 103606 pop     di ;~ 2FE6:0C5E
cs=0x2fe6;eip=0x000c5f; 	T(MOV(sp, bp));	// 103607 mov     sp, bp ;~ 2FE6:0C5F
cs=0x2fe6;eip=0x000c61; 	X(POP(bp));	// 103608 pop     bp ;~ 2FE6:0C61
cs=0x2fe6;eip=0x000c62; 	R(RETF(4));	// 103609 retf    4 ;~ 2FE6:0C62
ret_2fe6_c65:
	// 10976 
cs=0x2fe6;eip=0x000c65; 	X(PUSH(bp));	// 103611 push    bp ;~ 2FE6:0C65
cs=0x2fe6;eip=0x000c66; 	T(MOV(bp, sp));	// 103612 mov     bp, sp ;~ 2FE6:0C66
cs=0x2fe6;eip=0x000c68; 	T(SUB(sp, 0x0A));	// 103613 sub     sp, 0Ah ;~ 2FE6:0C68
cs=0x2fe6;eip=0x000c6b; 	X(PUSH(di));	// 103614 push    di ;~ 2FE6:0C6B
cs=0x2fe6;eip=0x000c6c; 	X(PUSH(si));	// 103615 push    si ;~ 2FE6:0C6C
cs=0x2fe6;eip=0x000c6d; 	T(MOV(si, *(dw*)(raddr(ss,bp+8))));	// 103616 mov     si, [bp+8] ;~ 2FE6:0C6D
cs=0x2fe6;eip=0x000c70; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 103617 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0C70
cs=0x2fe6;eip=0x000c75; 	R(JNZ(loc_3f0bc));	// 103618 jnz     short loc_3F0BC ;~ 2FE6:0C75
loc_3f0b7:
	// 10977 
cs=0x2fe6;eip=0x000c77; 	T(SUB(ax, ax));	// 103622 sub     ax, ax ;~ 2FE6:0C77
cs=0x2fe6;eip=0x000c79; 	R(JMP(loc_3f146));	// 103623 jmp     loc_3F146 ;~ 2FE6:0C79
loc_3f0bc:
	// 10978 
cs=0x2fe6;eip=0x000c7c; 	T(MOV(al, unk_571e9));	// 103627 mov     al, byte ptr unk_571E9 ;~ 2FE6:0C7C
cs=0x2fe6;eip=0x000c7f; 	T(SUB(ah, ah));	// 103628 sub     ah, ah ;~ 2FE6:0C7F
cs=0x2fe6;eip=0x000c81; 	T(CMP(ax, *(dw*)((&unk_571e5))));	// 103629 cmp     ax, word ptr unk_571E5 ;~ 2FE6:0C81
cs=0x2fe6;eip=0x000c85; 	R(JNC(loc_3f0b7));	// 103630 jnb     short loc_3F0B7 ;~ 2FE6:0C85
cs=0x2fe6;eip=0x000c87; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 103631 mov     ax, [bp+6] ;~ 2FE6:0C87
cs=0x2fe6;eip=0x000c8a; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 103632 mov     [bp-6], ax ;~ 2FE6:0C8A
cs=0x2fe6;eip=0x000c8d; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ds));	// 103633 mov     word ptr [bp-4], ds ;~ 2FE6:0C8D
loc_3f0d0:
	// 10979 
cs=0x2fe6;eip=0x000c90; 	T(MOV(al, 0x12));	// 103636 mov     al, 12h ;~ 2FE6:0C90
cs=0x2fe6;eip=0x000c92; 	X(MUL1_1(unk_571e9));	// 103637 mul     byte ptr unk_571E9 ;~ 2FE6:0C92
cs=0x2fe6;eip=0x000c96; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 103638 add     ax, word ptr unk_571C6 ;~ 2FE6:0C96
cs=0x2fe6;eip=0x000c9a; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 103639 mov     dx, word ptr unk_571C8 ;~ 2FE6:0C9A
cs=0x2fe6;eip=0x000c9e; 	X(PUSH(dx));	// 103640 push    dx ;~ 2FE6:0C9E
cs=0x2fe6;eip=0x000c9f; 	X(PUSH(ax));	// 103641 push    ax ;~ 2FE6:0C9F
cs=0x2fe6;eip=0x000ca0; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 103642 push    word ptr [bp-4] ;~ 2FE6:0CA0
cs=0x2fe6;eip=0x000ca3; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 103643 push    word ptr [bp-6] ;~ 2FE6:0CA3
cs=0x2fe6;eip=0x000ca6; 	R(CALL(sub_3f14e,0));	// 103644 call    sub_3F14E ;~ 2FE6:0CA6
cs=0x2fe6;eip=0x000ca9; 	T(MOV(di, ax));	// 103645 mov     di, ax ;~ 2FE6:0CA9
cs=0x2fe6;eip=0x000cab; 	T(OR(di, di));	// 103646 or      di, di ;~ 2FE6:0CAB
cs=0x2fe6;eip=0x000cad; 	R(JNZ(loc_3f132));	// 103647 jnz     short loc_3F132 ;~ 2FE6:0CAD
cs=0x2fe6;eip=0x000caf; 	T(MOV(al, 0x12));	// 103648 mov     al, 12h ;~ 2FE6:0CAF
cs=0x2fe6;eip=0x000cb1; 	X(MUL1_1(unk_571e9));	// 103649 mul     byte ptr unk_571E9 ;~ 2FE6:0CB1
cs=0x2fe6;eip=0x000cb5; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 103650 add     ax, word ptr unk_571C6 ;~ 2FE6:0CB5
cs=0x2fe6;eip=0x000cb9; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 103651 mov     dx, word ptr unk_571C8 ;~ 2FE6:0CB9
cs=0x2fe6;eip=0x000cbd; 	T(MOV(bx, ax));	// 103652 mov     bx, ax ;~ 2FE6:0CBD
cs=0x2fe6;eip=0x000cbf; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), bx));	// 103653 mov     [bp-0Ah], bx ;~ 2FE6:0CBF
cs=0x2fe6;eip=0x000cc2; 	X(MOV(*(dw*)(raddr(ss,bp-8)), dx));	// 103654 mov     [bp-8], dx ;~ 2FE6:0CC2
cs=0x2fe6;eip=0x000cc5; 	X(PUSH(di));	// 103655 push    di ;~ 2FE6:0CC5
cs=0x2fe6;eip=0x000cc6; 	X(PUSH(si));	// 103656 push    si ;~ 2FE6:0CC6
cs=0x2fe6;eip=0x000cc7; 	T(LES(di, *(dw*)(raddr(ss,bp-0x0A))));	// 103657 les     di, [bp-0Ah] ;~ 2FE6:0CC7
cs=0x2fe6;eip=0x000cca; 	T(MOV(cx, 0x0FFFF));	// 103659 mov     cx, 0FFFFh ;~ 2FE6:0CCA
cs=0x2fe6;eip=0x000ccd; 	T(XOR(ax, ax));	// 103660 xor     ax, ax ;~ 2FE6:0CCD
	// 103661 repne scasb ;~ 2FE6:0CCF
cs=0x2fe6;eip=0x000ccf; 	T(	REPNE SCASB);	// 103661 repne scasb ;~ 2FE6:0CCF
cs=0x2fe6;eip=0x000cd1; 	T(NOT(cx));	// 103662 not     cx ;~ 2FE6:0CD1
cs=0x2fe6;eip=0x000cd3; 	T(SUB(di, cx));	// 103663 sub     di, cx ;~ 2FE6:0CD3
cs=0x2fe6;eip=0x000cd5; 	T(XCHG(di, si));	// 103664 xchg    di, si ;~ 2FE6:0CD5
cs=0x2fe6;eip=0x000cd7; 	T(MOV(dx, ds));	// 103665 mov     dx, ds ;~ 2FE6:0CD7
cs=0x2fe6;eip=0x000cd9; 	X(PUSH(es));	// 103666 push    es ;~ 2FE6:0CD9
cs=0x2fe6;eip=0x000cda; 	T(MOV(es, dx));	// 103667 mov     es, dx ;~ 2FE6:0CDA
cs=0x2fe6;eip=0x000cdc; 	X(POP(ds));	// 103669 pop     ds ;~ 2FE6:0CDC
cs=0x2fe6;eip=0x000cdd; 	T(SHR(cx, 1));	// 103670 shr     cx, 1 ;~ 2FE6:0CDD
	// 103671 repne movsw ;~ 2FE6:0CDF
cs=0x2fe6;eip=0x000cdf; 	X(	REPNE MOVSW);	// 103671 repne movsw ;~ 2FE6:0CDF
cs=0x2fe6;eip=0x000ce1; 	T(ADC(cx, cx));	// 103672 adc     cx, cx ;~ 2FE6:0CE1
	// 103673 repne movsb ;~ 2FE6:0CE3
cs=0x2fe6;eip=0x000ce3; 	X(	REPNE MOVSB);	// 103673 repne movsb ;~ 2FE6:0CE3
cs=0x2fe6;eip=0x000ce5; 	T(MOV(ds, dx));	// 103674 mov     ds, dx ;~ 2FE6:0CE5
cs=0x2fe6;eip=0x000ce7; 	X(POP(si));	// 103675 pop     si ;~ 2FE6:0CE7
cs=0x2fe6;eip=0x000ce8; 	X(POP(di));	// 103676 pop     di ;~ 2FE6:0CE8
cs=0x2fe6;eip=0x000ce9; 	X(INC(unk_571e9));	// 103677 inc     byte ptr unk_571E9 ;~ 2FE6:0CE9
cs=0x2fe6;eip=0x000ced; 	T(MOV(ax, 1));	// 103678 mov     ax, 1 ;~ 2FE6:0CED
cs=0x2fe6;eip=0x000cf0; 	R(JMP(loc_3f146));	// 103679 jmp     short loc_3F146 ;~ 2FE6:0CF0
loc_3f132:
	// 10980 
cs=0x2fe6;eip=0x000cf2; 	X(INC(unk_571e9));	// 103683 inc     byte ptr unk_571E9 ;~ 2FE6:0CF2
cs=0x2fe6;eip=0x000cf6; 	T(MOV(al, unk_571e9));	// 103684 mov     al, byte ptr unk_571E9 ;~ 2FE6:0CF6
cs=0x2fe6;eip=0x000cf9; 	T(SUB(ah, ah));	// 103685 sub     ah, ah ;~ 2FE6:0CF9
cs=0x2fe6;eip=0x000cfb; 	T(CMP(ax, *(dw*)((&unk_571e5))));	// 103686 cmp     ax, word ptr unk_571E5 ;~ 2FE6:0CFB
cs=0x2fe6;eip=0x000cff; 	R(JC(loc_3f144));	// 103687 jb      short loc_3F144 ;~ 2FE6:0CFF
cs=0x2fe6;eip=0x000d01; 	R(JMP(loc_3f0b7));	// 103688 jmp     loc_3F0B7 ;~ 2FE6:0D01
loc_3f144:
	// 10981 
cs=0x2fe6;eip=0x000d04; 	R(JMP(loc_3f0d0));	// 103692 jmp     short loc_3F0D0 ;~ 2FE6:0D04
loc_3f146:
	// 10982 
cs=0x2fe6;eip=0x000d06; 	X(POP(si));	// 103697 pop     si ;~ 2FE6:0D06
cs=0x2fe6;eip=0x000d07; 	X(POP(di));	// 103698 pop     di ;~ 2FE6:0D07
cs=0x2fe6;eip=0x000d08; 	T(MOV(sp, bp));	// 103699 mov     sp, bp ;~ 2FE6:0D08
cs=0x2fe6;eip=0x000d0a; 	X(POP(bp));	// 103700 pop     bp ;~ 2FE6:0D0A
cs=0x2fe6;eip=0x000d0b; 	R(RETF(4));	// 103701 retf    4 ;~ 2FE6:0D0B
loc_3f295:
	// 10990 
cs=0x2fe6;eip=0x000e55; 	X(PUSH(bp));	// 103947 push    bp ;~ 2FE6:0E55
cs=0x2fe6;eip=0x000e56; 	T(MOV(bp, sp));	// 103948 mov     bp, sp ;~ 2FE6:0E56
cs=0x2fe6;eip=0x000e58; 	X(PUSH(si));	// 103949 push    si ;~ 2FE6:0E58
cs=0x2fe6;eip=0x000e59; 	X(PUSH(di));	// 103950 push    di ;~ 2FE6:0E59
cs=0x2fe6;eip=0x000e5a; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 103951 mov     ax, word ptr unk_5717B ;~ 2FE6:0E5A
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x000e5d; 	X(MOV(*(dw*)(((db*)&word_3f307)), ax));	// 103952 mov     cs:word_3F307, ax ;~ 2FE6:0E5D
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x000e61; 	X(MOV(*(dw*)(((db*)&word_3f33a)), ax));	// 103953 mov     cs:word_3F33A, ax ;~ 2FE6:0E61
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x000e65; 	X(MOV(*(dw*)(((db*)&word_3f33f)), ax));	// 103954 mov     cs:word_3F33F, ax ;~ 2FE6:0E65
cs=0x2fe6;eip=0x000e69; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 103955 mov     ax, [bp+8] ;~ 2FE6:0E69
cs=0x2fe6;eip=0x000e6c; 	X(MOV(*(dw*)((&unk_4b0b6)), ax));	// 103956 mov     word ptr unk_4B0B6, ax ;~ 2FE6:0E6C
cs=0x2fe6;eip=0x000e6f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 103957 mov     ax, [bp+0Ah] ;~ 2FE6:0E6F
cs=0x2fe6;eip=0x000e72; 	X(MOV(*(dw*)((&unk_4b0b8)), ax));	// 103958 mov     word ptr unk_4B0B8, ax ;~ 2FE6:0E72
cs=0x2fe6;eip=0x000e75; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 103959 mov     ax, [bp+6] ;~ 2FE6:0E75
cs=0x2fe6;eip=0x000e78; 	X(MOV(*(dw*)((&unk_4b0ae)), ax));	// 103960 mov     word ptr unk_4B0AE, ax ;~ 2FE6:0E78
cs=0x2fe6;eip=0x000e7b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 103961 mov     ax, [bp+4] ;~ 2FE6:0E7B
cs=0x2fe6;eip=0x000e7e; 	X(MOV(*(dw*)((&unk_4b0ac)), ax));	// 103962 mov     word ptr unk_4B0AC, ax ;~ 2FE6:0E7E
cs=0x2fe6;eip=0x000e81; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 103963 mov     bx, [bp+0Ch] ;~ 2FE6:0E81
cs=0x2fe6;eip=0x000e84; 	X(MOV(*(dw*)((&unk_4b0b0)), bx));	// 103964 mov     word ptr unk_4B0B0, bx ;~ 2FE6:0E84
cs=0x2fe6;eip=0x000e88; 	R(CALL(sub_3f382,0));	// 103965 call    sub_3F382 ;~ 2FE6:0E88
cs=0x2fe6;eip=0x000e8b; 	X(DEC(*(dw*)((&unk_4b0b2))));	// 103966 dec     word ptr unk_4B0B2 ;~ 2FE6:0E8B
cs=0x2fe6;eip=0x000e8f; 	T(LES(di, *(dd*)((&unk_5717b))));	// 103967 les     di, dword ptr unk_5717B ;~ 2FE6:0E8F
cs=0x2fe6;eip=0x000e93; 	T(MOV(cx, 0x0FEE));	// 103969 mov     cx, 0FEEh ;~ 2FE6:0E93
cs=0x2fe6;eip=0x000e96; 	T(SHR(cx, 1));	// 103970 shr     cx, 1 ;~ 2FE6:0E96
cs=0x2fe6;eip=0x000e98; 	T(MOV(ax, 0x2020));	// 103971 mov     ax, 2020h ;~ 2FE6:0E98
	// 103972 rep stosw ;~ 2FE6:0E9B
cs=0x2fe6;eip=0x000e9b; 	X(	REP STOSW);	// 103972 rep stosw ;~ 2FE6:0E9B
cs=0x2fe6;eip=0x000e9d; 	T(MOV(si, 0x0FEE));	// 103973 mov     si, 0FEEh ;~ 2FE6:0E9D
cs=0x2fe6;eip=0x000ea0; 	T(XOR(dx, dx));	// 103974 xor     dx, dx ;~ 2FE6:0EA0
loc_3f2e2:
	// 10991 
cs=0x2fe6;eip=0x000ea2; 	T(SHR(dx, 1));	// 103978 shr     dx, 1 ;~ 2FE6:0EA2
cs=0x2fe6;eip=0x000ea4; 	T(TEST(dx, 0x100));	// 103979 test    dx, 100h ;~ 2FE6:0EA4
cs=0x2fe6;eip=0x000ea8; 	R(JNZ(loc_3f2f4));	// 103980 jnz     short loc_3F2F4 ;~ 2FE6:0EA8
cs=0x2fe6;eip=0x000eaa; 	R(CALL(sub_3f356,0));	// 103981 call    sub_3F356 ;~ 2FE6:0EAA
cs=0x2fe6;eip=0x000ead; 	R(JC(loc_3f31a));	// 103982 jb      short loc_3F31A ;~ 2FE6:0EAD
cs=0x2fe6;eip=0x000eaf; 	T(OR(ah, 0x0FF));	// 103983 or      ah, 0FFh ;~ 2FE6:0EAF
cs=0x2fe6;eip=0x000eb2; 	T(MOV(dx, ax));	// 103984 mov     dx, ax ;~ 2FE6:0EB2
loc_3f2f4:
	// 10992 
cs=0x2fe6;eip=0x000eb4; 	T(TEST(dx, 1));	// 103987 test    dx, 1 ;~ 2FE6:0EB4
cs=0x2fe6;eip=0x000eb8; 	R(JZ(loc_3f310));	// 103988 jz      short loc_3F310 ;~ 2FE6:0EB8
cs=0x2fe6;eip=0x000eba; 	R(CALL(sub_3f356,0));	// 103989 call    sub_3F356 ;~ 2FE6:0EBA
cs=0x2fe6;eip=0x000ebd; 	R(JC(loc_3f31a));	// 103990 jb      short loc_3F31A ;~ 2FE6:0EBD
cs=0x2fe6;eip=0x000ebf; 	R(CALL(sub_3f3ce,0));	// 103991 call    sub_3F3CE ;~ 2FE6:0EBF
cs=0x2fe6;eip=0x000ec2; 	R(JC(loc_3f350));	// 103992 jb      short loc_3F350 ;~ 2FE6:0EC2
cs=0x2fe6;eip=0x000ec9; 	T(INC(si));	// 103997 inc     si ;~ 2FE6:0EC9
cs=0x2fe6;eip=0x000eca; 	T(AND(si, 0x0FFF));	// 103998 and     si, 0FFFh ;~ 2FE6:0ECA
cs=0x2fe6;eip=0x000ece; 	R(JMP(loc_3f2e2));	// 103999 jmp     short loc_3F2E2 ;~ 2FE6:0ECE
loc_3f310:
	// 10993 
cs=0x2fe6;eip=0x000ed0; 	R(CALL(sub_3f356,0));	// 104003 call    sub_3F356 ;~ 2FE6:0ED0
cs=0x2fe6;eip=0x000ed3; 	R(JC(loc_3f31a));	// 104004 jb      short loc_3F31A ;~ 2FE6:0ED3
cs=0x2fe6;eip=0x000ed5; 	T(MOV(di, ax));	// 104005 mov     di, ax ;~ 2FE6:0ED5
cs=0x2fe6;eip=0x000ed7; 	R(CALL(sub_3f356,0));	// 104006 call    sub_3F356 ;~ 2FE6:0ED7
loc_3f31a:
	// 10994 
cs=0x2fe6;eip=0x000eda; 	R(JC(loc_3f350));	// 104010 jb      short loc_3F350 ;~ 2FE6:0EDA
cs=0x2fe6;eip=0x000edc; 	T(MOV(cx, ax));	// 104011 mov     cx, ax ;~ 2FE6:0EDC
cs=0x2fe6;eip=0x000ede; 	T(AND(ax, 0x0F0));	// 104012 and     ax, 0F0h ;~ 2FE6:0EDE
cs=0x2fe6;eip=0x000ee1; 	T(SHL(ax, 1));	// 104013 shl     ax, 1 ;~ 2FE6:0EE1
cs=0x2fe6;eip=0x000ee3; 	T(SHL(ax, 1));	// 104014 shl     ax, 1 ;~ 2FE6:0EE3
cs=0x2fe6;eip=0x000ee5; 	T(SHL(ax, 1));	// 104015 shl     ax, 1 ;~ 2FE6:0EE5
cs=0x2fe6;eip=0x000ee7; 	T(SHL(ax, 1));	// 104016 shl     ax, 1 ;~ 2FE6:0EE7
cs=0x2fe6;eip=0x000ee9; 	T(OR(di, ax));	// 104017 or      di, ax ;~ 2FE6:0EE9
cs=0x2fe6;eip=0x000eeb; 	T(AND(cx, 0x0F));	// 104018 and     cx, 0Fh ;~ 2FE6:0EEB
cs=0x2fe6;eip=0x000eee; 	T(ADD(cx, 3));	// 104019 add     cx, 3 ;~ 2FE6:0EEE
loc_3f331:
	// 10995 
cs=0x2fe6;eip=0x000ef1; 	T(MOV(bx, di));	// 104022 mov     bx, di ;~ 2FE6:0EF1
cs=0x2fe6;eip=0x000ef3; 	T(AND(bx, 0x0FFF));	// 104023 and     bx, 0FFFh ;~ 2FE6:0EF3
cs=0x2fe6;eip=0x000f01; 	T(INC(si));	// 104030 inc     si ;~ 2FE6:0F01
cs=0x2fe6;eip=0x000f02; 	T(AND(si, 0x0FFF));	// 104031 and     si, 0FFFh ;~ 2FE6:0F02
cs=0x2fe6;eip=0x000f06; 	R(CALL(sub_3f3ce,0));	// 104032 call    sub_3F3CE ;~ 2FE6:0F06
cs=0x2fe6;eip=0x000f09; 	R(JC(loc_3f350));	// 104033 jb      short loc_3F350 ;~ 2FE6:0F09
cs=0x2fe6;eip=0x000f0b; 	T(INC(di));	// 104034 inc     di ;~ 2FE6:0F0B
cs=0x2fe6;eip=0x000f0c; 	R(LOOP(loc_3f331));	// 104035 loop    loc_3F331 ;~ 2FE6:0F0C
cs=0x2fe6;eip=0x000f0e; 	R(JMP(loc_3f2e2));	// 104036 jmp     short loc_3F2E2 ;~ 2FE6:0F0E
loc_3f350:
	// 10996 
cs=0x2fe6;eip=0x000f10; 	X(POP(di));	// 104041 pop     di ;~ 2FE6:0F10
cs=0x2fe6;eip=0x000f11; 	X(POP(si));	// 104042 pop     si ;~ 2FE6:0F11
cs=0x2fe6;eip=0x000f12; 	X(POP(bp));	// 104043 pop     bp ;~ 2FE6:0F12
cs=0x2fe6;eip=0x000f13; 	R(RETN(0x0A));	// 104044 retn    0Ah ;~ 2FE6:0F13
loc_3f405:
	// 11004 
cs=0x2fe6;eip=0x000fc5; 	X(PUSH(bp));	// 104176 push    bp ;~ 2FE6:0FC5
cs=0x2fe6;eip=0x000fc6; 	T(MOV(bp, sp));	// 104177 mov     bp, sp ;~ 2FE6:0FC6
cs=0x2fe6;eip=0x000fc8; 	X(PUSH(si));	// 104178 push    si ;~ 2FE6:0FC8
cs=0x2fe6;eip=0x000fc9; 	X(PUSH(di));	// 104179 push    di ;~ 2FE6:0FC9
cs=0x2fe6;eip=0x000fca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 104180 mov     ax, [bp+4] ;~ 2FE6:0FCA
cs=0x2fe6;eip=0x000fcd; 	X(MOV(*(dw*)((&unk_4b0c9)), ax));	// 104181 mov     word ptr unk_4B0C9, ax ;~ 2FE6:0FCD
cs=0x2fe6;eip=0x000fd0; 	T(CMP(ax, 0x1172));	// 104182 cmp     ax, 1172h ;~ 2FE6:0FD0
cs=0x2fe6;eip=0x000fd3; 	R(JNZ(loc_3f43f));	// 104183 jnz     short loc_3F43F ;~ 2FE6:0FD3
cs=0x2fe6;eip=0x000fd5; 	T(MOV(dx, 0x3CE));	// 104184 mov     dx, 3CEh ;~ 2FE6:0FD5
cs=0x2fe6;eip=0x000fd8; 	T(MOV(ax, 0x0FF08));	// 104185 mov     ax, 0FF08h ;~ 2FE6:0FD8
cs=0x2fe6;eip=0x000fdb; 	R(OUT(dx, ax));	// 104186 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FDB
cs=0x2fe6;eip=0x000fdc; 	T(MOV(ax, 0x0F02));	// 104188 mov     ax, 0F02h ;~ 2FE6:0FDC
cs=0x2fe6;eip=0x000fdf; 	R(OUT(dx, ax));	// 104189 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FDF
cs=0x2fe6;eip=0x000fe0; 	T(MOV(ax, 3));	// 104191 mov     ax, 3 ;~ 2FE6:0FE0
cs=0x2fe6;eip=0x000fe3; 	R(OUT(dx, ax));	// 104192 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FE3
cs=0x2fe6;eip=0x000fe4; 	T(MOV(ax, 0x0F07));	// 104197 mov     ax, 0F07h ;~ 2FE6:0FE4
cs=0x2fe6;eip=0x000fe7; 	R(OUT(dx, ax));	// 104198 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FE7
cs=0x2fe6;eip=0x000fe8; 	T(MOV(ax, 5));	// 104200 mov     ax, 5 ;~ 2FE6:0FE8
cs=0x2fe6;eip=0x000feb; 	R(OUT(dx, ax));	// 104201 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:0FEB
cs=0x2fe6;eip=0x000fec; 	T(MOV(dx, 0x3C4));	// 104208 mov     dx, 3C4h ;~ 2FE6:0FEC
cs=0x2fe6;eip=0x000fef; 	T(MOV(ax, 0x0F02));	// 104209 mov     ax, 0F02h ;~ 2FE6:0FEF
cs=0x2fe6;eip=0x000ff2; 	R(OUT(dx, ax));	// 104210 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:0FF2
cs=0x2fe6;eip=0x000ff3; 	T(SUB(sp, 0x100));	// 104212 sub     sp, 100h ;~ 2FE6:0FF3
cs=0x2fe6;eip=0x000ff7; 	T(MOV(ax, sp));	// 104213 mov     ax, sp ;~ 2FE6:0FF7
cs=0x2fe6;eip=0x000ff9; 	X(MOV(*(dw*)((&unk_4b0db)), ax));	// 104214 mov     word ptr unk_4B0DB, ax ;~ 2FE6:0FF9
cs=0x2fe6;eip=0x000ffc; 	R(CALL(sub_3f7da,0));	// 104215 call    sub_3F7DA ;~ 2FE6:0FFC
loc_3f43f:
	// 11005 
cs=0x2fe6;eip=0x000fff; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 104218 mov     ax, word ptr unk_5717B ;~ 2FE6:0FFF
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x001002; 	X(MOV(*(dw*)(((db*)&word_3f4e4)), ax));	// 104219 mov     cs:word_3F4E4, ax ;~ 2FE6:1002
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x001006; 	X(MOV(*(dw*)(((db*)&word_3f517)), ax));	// 104220 mov     cs:word_3F517, ax ;~ 2FE6:1006
	cs=seg_offset(seg031);
cs=0x2fe6;eip=0x00100a; 	X(MOV(*(dw*)(((db*)&word_3f51c)), ax));	// 104221 mov     cs:word_3F51C, ax ;~ 2FE6:100A
cs=0x2fe6;eip=0x00100e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+8))));	// 104222 mov     ax, [bp+8] ;~ 2FE6:100E
cs=0x2fe6;eip=0x001011; 	X(MOV(*(dw*)((&unk_4b0b6)), ax));	// 104223 mov     word ptr unk_4B0B6, ax ;~ 2FE6:1011
cs=0x2fe6;eip=0x001014; 	T(MOV(ax, *(dw*)(raddr(ss,bp+0x0A))));	// 104224 mov     ax, [bp+0Ah] ;~ 2FE6:1014
cs=0x2fe6;eip=0x001017; 	X(MOV(*(dw*)((&unk_4b0b8)), ax));	// 104225 mov     word ptr unk_4B0B8, ax ;~ 2FE6:1017
cs=0x2fe6;eip=0x00101a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+6))));	// 104226 mov     ax, [bp+6] ;~ 2FE6:101A
cs=0x2fe6;eip=0x00101d; 	T(MOV(si, ax));	// 104227 mov     si, ax ;~ 2FE6:101D
cs=0x2fe6;eip=0x00101f; 	T(MOV(al, *(raddr(ds,si))));	// 104228 mov     al, [si] ;~ 2FE6:101F
cs=0x2fe6;eip=0x001021; 	T(AND(al, 1));	// 104229 and     al, 1 ;~ 2FE6:1021
cs=0x2fe6;eip=0x001023; 	X(MOV(unk_4b0ba, al));	// 104230 mov     byte ptr unk_4B0BA, al ;~ 2FE6:1023
cs=0x2fe6;eip=0x001026; 	T(MOV(ax, *(dw*)(raddr(ds,si+2))));	// 104231 mov     ax, [si+2] ;~ 2FE6:1026
cs=0x2fe6;eip=0x001029; 	X(MOV(*(dw*)((&unk_4b0bb)), ax));	// 104232 mov     word ptr unk_4B0BB, ax ;~ 2FE6:1029
cs=0x2fe6;eip=0x00102c; 	T(MOV(ax, *(dw*)(raddr(ds,si+4))));	// 104233 mov     ax, [si+4] ;~ 2FE6:102C
cs=0x2fe6;eip=0x00102f; 	X(MOV(*(dw*)((&unk_4b0bd)), ax));	// 104234 mov     word ptr unk_4B0BD, ax ;~ 2FE6:102F
cs=0x2fe6;eip=0x001032; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 104235 mov     ax, [si+6] ;~ 2FE6:1032
cs=0x2fe6;eip=0x001035; 	X(MOV(*(dw*)((&unk_4b0c1)), ax));	// 104236 mov     word ptr unk_4B0C1, ax ;~ 2FE6:1035
cs=0x2fe6;eip=0x001038; 	X(MOV(*(dw*)((&unk_4b0c3)), ax));	// 104237 mov     word ptr unk_4B0C3, ax ;~ 2FE6:1038
cs=0x2fe6;eip=0x00103b; 	T(MOV(ax, *(dw*)(raddr(ds,si+8))));	// 104238 mov     ax, [si+8] ;~ 2FE6:103B
cs=0x2fe6;eip=0x00103e; 	X(MOV(*(dw*)((&unk_4b0c5)), ax));	// 104239 mov     word ptr unk_4B0C5, ax ;~ 2FE6:103E
cs=0x2fe6;eip=0x001041; 	T(XOR(ax, ax));	// 104240 xor     ax, ax ;~ 2FE6:1041
cs=0x2fe6;eip=0x001043; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 104241 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1043
cs=0x2fe6;eip=0x001046; 	X(MOV(*(dw*)((&unk_4b0bf)), ax));	// 104242 mov     word ptr unk_4B0BF, ax ;~ 2FE6:1046
cs=0x2fe6;eip=0x001049; 	X(MOV(*(dw*)((&unk_4b0ae)), ax));	// 104243 mov     word ptr unk_4B0AE, ax ;~ 2FE6:1049
cs=0x2fe6;eip=0x00104c; 	T(XOR(ax, ax));	// 104244 xor     ax, ax ;~ 2FE6:104C
cs=0x2fe6;eip=0x00104e; 	X(MOV(*(dw*)((&unk_4b0ac)), ax));	// 104245 mov     word ptr unk_4B0AC, ax ;~ 2FE6:104E
cs=0x2fe6;eip=0x001051; 	T(MOV(ax, *(dw*)(raddr(ds,si+6))));	// 104246 mov     ax, [si+6] ;~ 2FE6:1051
cs=0x2fe6;eip=0x001054; 	T(SUB(sp, ax));	// 104247 sub     sp, ax ;~ 2FE6:1054
cs=0x2fe6;eip=0x001056; 	T(MOV(ax, sp));	// 104248 mov     ax, sp ;~ 2FE6:1056
cs=0x2fe6;eip=0x001058; 	X(MOV(*(dw*)((&unk_4b0dd)), ax));	// 104249 mov     word ptr unk_4B0DD, ax ;~ 2FE6:1058
cs=0x2fe6;eip=0x00105b; 	X(MOV(*(dw*)((&unk_4b0df)), ax));	// 104250 mov     word ptr unk_4B0DF, ax ;~ 2FE6:105B
cs=0x2fe6;eip=0x00105e; 	T(MOV(bx, *(dw*)(raddr(ss,bp+0x0C))));	// 104251 mov     bx, [bp+0Ch] ;~ 2FE6:105E
cs=0x2fe6;eip=0x001061; 	X(MOV(*(dw*)((&unk_4b0b0)), bx));	// 104252 mov     word ptr unk_4B0B0, bx ;~ 2FE6:1061
cs=0x2fe6;eip=0x001065; 	R(CALL(sub_3f382,0));	// 104253 call    sub_3F382 ;~ 2FE6:1065
cs=0x2fe6;eip=0x001068; 	X(DEC(*(dw*)((&unk_4b0b2))));	// 104254 dec     word ptr unk_4B0B2 ;~ 2FE6:1068
cs=0x2fe6;eip=0x00106c; 	T(LES(di, *(dd*)((&unk_5717b))));	// 104255 les     di, dword ptr unk_5717B ;~ 2FE6:106C
cs=0x2fe6;eip=0x001070; 	T(MOV(cx, 0x0FEE));	// 104256 mov     cx, 0FEEh ;~ 2FE6:1070
cs=0x2fe6;eip=0x001073; 	T(SHR(cx, 1));	// 104257 shr     cx, 1 ;~ 2FE6:1073
cs=0x2fe6;eip=0x001075; 	T(MOV(ax, 0x2020));	// 104258 mov     ax, 2020h ;~ 2FE6:1075
	// 104259 rep stosw ;~ 2FE6:1078
cs=0x2fe6;eip=0x001078; 	X(	REP STOSW);	// 104259 rep stosw ;~ 2FE6:1078
cs=0x2fe6;eip=0x00107a; 	T(MOV(si, 0x0FEE));	// 104260 mov     si, 0FEEh ;~ 2FE6:107A
cs=0x2fe6;eip=0x00107d; 	T(XOR(dx, dx));	// 104261 xor     dx, dx ;~ 2FE6:107D
loc_3f4bf:
	// 11006 
cs=0x2fe6;eip=0x00107f; 	T(SHR(dx, 1));	// 104265 shr     dx, 1 ;~ 2FE6:107F
cs=0x2fe6;eip=0x001081; 	T(TEST(dx, 0x100));	// 104266 test    dx, 100h ;~ 2FE6:1081
cs=0x2fe6;eip=0x001085; 	R(JNZ(loc_3f4d1));	// 104267 jnz     short loc_3F4D1 ;~ 2FE6:1085
cs=0x2fe6;eip=0x001087; 	R(CALL(sub_3f356,0));	// 104268 call    sub_3F356 ;~ 2FE6:1087
cs=0x2fe6;eip=0x00108a; 	R(JC(loc_3f4f7));	// 104269 jb      short loc_3F4F7 ;~ 2FE6:108A
cs=0x2fe6;eip=0x00108c; 	T(OR(ah, 0x0FF));	// 104270 or      ah, 0FFh ;~ 2FE6:108C
cs=0x2fe6;eip=0x00108f; 	T(MOV(dx, ax));	// 104271 mov     dx, ax ;~ 2FE6:108F
loc_3f4d1:
	// 11007 
cs=0x2fe6;eip=0x001091; 	T(TEST(dx, 1));	// 104274 test    dx, 1 ;~ 2FE6:1091
cs=0x2fe6;eip=0x001095; 	R(JZ(loc_3f4ed));	// 104275 jz      short loc_3F4ED ;~ 2FE6:1095
cs=0x2fe6;eip=0x001097; 	R(CALL(sub_3f356,0));	// 104276 call    sub_3F356 ;~ 2FE6:1097
cs=0x2fe6;eip=0x00109a; 	R(JC(loc_3f4f7));	// 104277 jb      short loc_3F4F7 ;~ 2FE6:109A
cs=0x2fe6;eip=0x00109c; 	R(CALL(sub_3f563,0));	// 104278 call    sub_3F563 ;~ 2FE6:109C
cs=0x2fe6;eip=0x00109f; 	R(JC(loc_3f52d));	// 104279 jb      short loc_3F52D ;~ 2FE6:109F
cs=0x2fe6;eip=0x0010a6; 	T(INC(si));	// 104284 inc     si ;~ 2FE6:10A6
cs=0x2fe6;eip=0x0010a7; 	T(AND(si, 0x0FFF));	// 104285 and     si, 0FFFh ;~ 2FE6:10A7
cs=0x2fe6;eip=0x0010ab; 	R(JMP(loc_3f4bf));	// 104286 jmp     short loc_3F4BF ;~ 2FE6:10AB
loc_3f4ed:
	// 11008 
cs=0x2fe6;eip=0x0010ad; 	R(CALL(sub_3f356,0));	// 104290 call    sub_3F356 ;~ 2FE6:10AD
cs=0x2fe6;eip=0x0010b0; 	R(JC(loc_3f4f7));	// 104291 jb      short loc_3F4F7 ;~ 2FE6:10B0
cs=0x2fe6;eip=0x0010b2; 	T(MOV(di, ax));	// 104292 mov     di, ax ;~ 2FE6:10B2
cs=0x2fe6;eip=0x0010b4; 	R(CALL(sub_3f356,0));	// 104293 call    sub_3F356 ;~ 2FE6:10B4
loc_3f4f7:
	// 11009 
cs=0x2fe6;eip=0x0010b7; 	R(JC(loc_3f52d));	// 104297 jb      short loc_3F52D ;~ 2FE6:10B7
cs=0x2fe6;eip=0x0010b9; 	T(MOV(cx, ax));	// 104298 mov     cx, ax ;~ 2FE6:10B9
cs=0x2fe6;eip=0x0010bb; 	T(AND(ax, 0x0F0));	// 104299 and     ax, 0F0h ;~ 2FE6:10BB
cs=0x2fe6;eip=0x0010be; 	T(SHL(ax, 1));	// 104300 shl     ax, 1 ;~ 2FE6:10BE
cs=0x2fe6;eip=0x0010c0; 	T(SHL(ax, 1));	// 104301 shl     ax, 1 ;~ 2FE6:10C0
cs=0x2fe6;eip=0x0010c2; 	T(SHL(ax, 1));	// 104302 shl     ax, 1 ;~ 2FE6:10C2
cs=0x2fe6;eip=0x0010c4; 	T(SHL(ax, 1));	// 104303 shl     ax, 1 ;~ 2FE6:10C4
cs=0x2fe6;eip=0x0010c6; 	T(OR(di, ax));	// 104304 or      di, ax ;~ 2FE6:10C6
cs=0x2fe6;eip=0x0010c8; 	T(AND(cx, 0x0F));	// 104305 and     cx, 0Fh ;~ 2FE6:10C8
cs=0x2fe6;eip=0x0010cb; 	T(ADD(cx, 3));	// 104306 add     cx, 3 ;~ 2FE6:10CB
loc_3f50e:
	// 11010 
cs=0x2fe6;eip=0x0010ce; 	T(MOV(bx, di));	// 104309 mov     bx, di ;~ 2FE6:10CE
cs=0x2fe6;eip=0x0010d0; 	T(AND(bx, 0x0FFF));	// 104310 and     bx, 0FFFh ;~ 2FE6:10D0
cs=0x2fe6;eip=0x0010de; 	T(INC(si));	// 104317 inc     si ;~ 2FE6:10DE
cs=0x2fe6;eip=0x0010df; 	T(AND(si, 0x0FFF));	// 104318 and     si, 0FFFh ;~ 2FE6:10DF
cs=0x2fe6;eip=0x0010e3; 	R(CALL(sub_3f563,0));	// 104319 call    sub_3F563 ;~ 2FE6:10E3
cs=0x2fe6;eip=0x0010e6; 	R(JC(loc_3f52d));	// 104320 jb      short loc_3F52D ;~ 2FE6:10E6
cs=0x2fe6;eip=0x0010e8; 	T(INC(di));	// 104321 inc     di ;~ 2FE6:10E8
cs=0x2fe6;eip=0x0010e9; 	R(LOOP(loc_3f50e));	// 104322 loop    loc_3F50E ;~ 2FE6:10E9
cs=0x2fe6;eip=0x0010eb; 	R(JMP(loc_3f4bf));	// 104323 jmp     short loc_3F4BF ;~ 2FE6:10EB
loc_3f52d:
	// 11011 
cs=0x2fe6;eip=0x0010ed; 	T(MOV(bx, *(dw*)((&unk_4b0c1))));	// 104328 mov     bx, word ptr unk_4B0C1 ;~ 2FE6:10ED
cs=0x2fe6;eip=0x0010f1; 	T(CMP(*(dw*)((&unk_4b0c9)), 0x1172));	// 104329 cmp     word ptr unk_4B0C9, 1172h ;~ 2FE6:10F1
cs=0x2fe6;eip=0x0010f7; 	R(JNZ(loc_3f55b));	// 104330 jnz     short loc_3F55B ;~ 2FE6:10F7
cs=0x2fe6;eip=0x0010f9; 	T(MOV(dx, 0x3CE));	// 104331 mov     dx, 3CEh ;~ 2FE6:10F9
cs=0x2fe6;eip=0x0010fc; 	T(MOV(ax, 0x0FF08));	// 104332 mov     ax, 0FF08h ;~ 2FE6:10FC
cs=0x2fe6;eip=0x0010ff; 	R(OUT(dx, ax));	// 104333 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:10FF
cs=0x2fe6;eip=0x001100; 	T(MOV(ax, 0x0F02));	// 104335 mov     ax, 0F02h ;~ 2FE6:1100
cs=0x2fe6;eip=0x001103; 	R(OUT(dx, ax));	// 104336 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:1103
cs=0x2fe6;eip=0x001104; 	T(MOV(ax, 3));	// 104338 mov     ax, 3 ;~ 2FE6:1104
cs=0x2fe6;eip=0x001107; 	R(OUT(dx, ax));	// 104339 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:1107
cs=0x2fe6;eip=0x001108; 	T(MOV(ax, 0x0F07));	// 104344 mov     ax, 0F07h ;~ 2FE6:1108
cs=0x2fe6;eip=0x00110b; 	R(OUT(dx, ax));	// 104345 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:110B
cs=0x2fe6;eip=0x00110c; 	T(MOV(ax, 5));	// 104347 mov     ax, 5 ;~ 2FE6:110C
cs=0x2fe6;eip=0x00110f; 	R(OUT(dx, ax));	// 104348 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 2FE6:110F
cs=0x2fe6;eip=0x001110; 	T(MOV(dx, 0x3C4));	// 104355 mov     dx, 3C4h ;~ 2FE6:1110
cs=0x2fe6;eip=0x001113; 	T(MOV(ax, 0x0F02));	// 104356 mov     ax, 0F02h ;~ 2FE6:1113
cs=0x2fe6;eip=0x001116; 	R(OUT(dx, ax));	// 104357 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:1116
cs=0x2fe6;eip=0x001117; 	T(ADD(bx, 0x100));	// 104359 add     bx, 100h ;~ 2FE6:1117
loc_3f55b:
	// 11012 
cs=0x2fe6;eip=0x00111b; 	T(ADD(sp, bx));	// 104362 add     sp, bx ;~ 2FE6:111B
cs=0x2fe6;eip=0x00111d; 	X(POP(di));	// 104363 pop     di ;~ 2FE6:111D
cs=0x2fe6;eip=0x00111e; 	X(POP(si));	// 104364 pop     si ;~ 2FE6:111E
cs=0x2fe6;eip=0x00111f; 	X(POP(bp));	// 104365 pop     bp ;~ 2FE6:111F
cs=0x2fe6;eip=0x001120; 	R(RETN(0x0A));	// 104366 retn    0Ah ;~ 2FE6:1120
cs=0x2fe6;eip=0x001172; 	X(PUSH(dx));	// 104419 push    dx ;~ 2FE6:1172
cs=0x2fe6;eip=0x001173; 	X(PUSH(ds));	// 104420 push    ds ;~ 2FE6:1173
cs=0x2fe6;eip=0x001174; 	X(PUSH(di));	// 104421 push    di ;~ 2FE6:1174
cs=0x2fe6;eip=0x001175; 	X(PUSH(bp));	// 104422 push    bp ;~ 2FE6:1175
cs=0x2fe6;eip=0x001176; 	T(CLD);	// 104423 cld ;~ 2FE6:1176
cs=0x2fe6;eip=0x001177; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 104424 mov     ax, word ptr unk_4B0DD ;~ 2FE6:1177
cs=0x2fe6;eip=0x00117a; 	T(MOV(si, ax));	// 104425 mov     si, ax ;~ 2FE6:117A
cs=0x2fe6;eip=0x00117c; 	T(MOV(ax, *(dw*)((&unk_4b0c5))));	// 104426 mov     ax, word ptr unk_4B0C5 ;~ 2FE6:117C
cs=0x2fe6;eip=0x00117f; 	T(MOV(es, ax));	// 104427 mov     es, ax ;~ 2FE6:117F
cs=0x2fe6;eip=0x001181; 	T(MOV(ax, *(dw*)((&unk_4b0c7))));	// 104428 mov     ax, word ptr unk_4B0C7 ;~ 2FE6:1181
cs=0x2fe6;eip=0x001184; 	T(MOV(di, ax));	// 104429 mov     di, ax ;~ 2FE6:1184
cs=0x2fe6;eip=0x001186; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 104430 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:1186
cs=0x2fe6;eip=0x001189; 	T(SHR(ax, 1));	// 104431 shr     ax, 1 ;~ 2FE6:1189
cs=0x2fe6;eip=0x00118b; 	T(SHR(ax, 1));	// 104432 shr     ax, 1 ;~ 2FE6:118B
cs=0x2fe6;eip=0x00118d; 	T(MOV(bp, ax));	// 104433 mov     bp, ax ;~ 2FE6:118D
cs=0x2fe6;eip=0x00118f; 	T(MOV(bx, *(dw*)((&unk_4b0db))));	// 104434 mov     bx, word ptr unk_4B0DB ;~ 2FE6:118F
loc_3f5d3:
	// 11015 
cs=0x2fe6;eip=0x001193; 	T(LODSW);	// 104437 lodsw ;~ 2FE6:1193
cs=0x2fe6;eip=0x001194; 	T(XLAT);	// 104438 xlat ;~ 2FE6:1194
cs=0x2fe6;eip=0x001195; 	T(XCHG(ah, al));	// 104439 xchg    ah, al ;~ 2FE6:1195
cs=0x2fe6;eip=0x001197; 	T(XLAT);	// 104440 xlat ;~ 2FE6:1197
cs=0x2fe6;eip=0x001198; 	T(MOV(cx, ax));	// 104441 mov     cx, ax ;~ 2FE6:1198
cs=0x2fe6;eip=0x00119a; 	T(LODSW);	// 104442 lodsw ;~ 2FE6:119A
cs=0x2fe6;eip=0x00119b; 	T(XLAT);	// 104443 xlat ;~ 2FE6:119B
cs=0x2fe6;eip=0x00119c; 	T(XCHG(ah, al));	// 104444 xchg    ah, al ;~ 2FE6:119C
cs=0x2fe6;eip=0x00119e; 	T(XLAT);	// 104445 xlat ;~ 2FE6:119E
cs=0x2fe6;eip=0x00119f; 	T(ROL(ch, 1));	// 104446 rol     ch, 1 ;~ 2FE6:119F
cs=0x2fe6;eip=0x0011a1; 	T(ROL(ch, 1));	// 104447 rol     ch, 1 ;~ 2FE6:11A1
cs=0x2fe6;eip=0x0011a3; 	T(ROL(cx, 1));	// 104448 rol     cx, 1 ;~ 2FE6:11A3
cs=0x2fe6;eip=0x0011a5; 	T(ROL(cx, 1));	// 104449 rol     cx, 1 ;~ 2FE6:11A5
cs=0x2fe6;eip=0x0011a7; 	T(ROL(cl, 1));	// 104450 rol     cl, 1 ;~ 2FE6:11A7
cs=0x2fe6;eip=0x0011a9; 	T(ROL(cl, 1));	// 104451 rol     cl, 1 ;~ 2FE6:11A9
cs=0x2fe6;eip=0x0011ab; 	T(XCHG(cl, ah));	// 104452 xchg    cl, ah ;~ 2FE6:11AB
cs=0x2fe6;eip=0x0011ad; 	T(ROL(cx, 1));	// 104453 rol     cx, 1 ;~ 2FE6:11AD
cs=0x2fe6;eip=0x0011af; 	T(ROL(cx, 1));	// 104454 rol     cx, 1 ;~ 2FE6:11AF
cs=0x2fe6;eip=0x0011b1; 	T(XCHG(ch, ah));	// 104455 xchg    ch, ah ;~ 2FE6:11B1
cs=0x2fe6;eip=0x0011b3; 	T(ROL(cx, 1));	// 104456 rol     cx, 1 ;~ 2FE6:11B3
cs=0x2fe6;eip=0x0011b5; 	T(ROL(cx, 1));	// 104457 rol     cx, 1 ;~ 2FE6:11B5
cs=0x2fe6;eip=0x0011b7; 	T(ROL(cl, 1));	// 104458 rol     cl, 1 ;~ 2FE6:11B7
cs=0x2fe6;eip=0x0011b9; 	T(ROL(cl, 1));	// 104459 rol     cl, 1 ;~ 2FE6:11B9
cs=0x2fe6;eip=0x0011bb; 	T(ROL(ax, 1));	// 104460 rol     ax, 1 ;~ 2FE6:11BB
cs=0x2fe6;eip=0x0011bd; 	T(ROL(ax, 1));	// 104461 rol     ax, 1 ;~ 2FE6:11BD
cs=0x2fe6;eip=0x0011bf; 	T(XCHG(ah, ch));	// 104462 xchg    ah, ch ;~ 2FE6:11BF
cs=0x2fe6;eip=0x0011c1; 	T(ROL(ax, 1));	// 104463 rol     ax, 1 ;~ 2FE6:11C1
cs=0x2fe6;eip=0x0011c3; 	T(ROL(ax, 1));	// 104464 rol     ax, 1 ;~ 2FE6:11C3
cs=0x2fe6;eip=0x0011c5; 	T(XCHG(ah, cl));	// 104465 xchg    ah, cl ;~ 2FE6:11C5
cs=0x2fe6;eip=0x0011c7; 	T(ROL(ax, 1));	// 104466 rol     ax, 1 ;~ 2FE6:11C7
cs=0x2fe6;eip=0x0011c9; 	T(ROL(ax, 1));	// 104467 rol     ax, 1 ;~ 2FE6:11C9
cs=0x2fe6;eip=0x0011cb; 	T(ROL(al, 1));	// 104468 rol     al, 1 ;~ 2FE6:11CB
cs=0x2fe6;eip=0x0011cd; 	T(ROL(al, 1));	// 104469 rol     al, 1 ;~ 2FE6:11CD
cs=0x2fe6;eip=0x0011cf; 	X(PUSH(bx));	// 104470 push    bx ;~ 2FE6:11CF
cs=0x2fe6;eip=0x0011d0; 	T(MOV(bx, ax));	// 104471 mov     bx, ax ;~ 2FE6:11D0
cs=0x2fe6;eip=0x0011d2; 	T(MOV(ax, 0x102));	// 104472 mov     ax, 102h ;~ 2FE6:11D2
cs=0x2fe6;eip=0x0011d5; 	T(MOV(dx, 0x3C4));	// 104473 mov     dx, 3C4h ;~ 2FE6:11D5
cs=0x2fe6;eip=0x0011d8; 	R(OUT(dx, ax));	// 104474 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:11D8
cs=0x2fe6;eip=0x0011d9; 	X(MOV(*(raddr(es,di)), ch));	// 104476 mov     es:[di], ch ;~ 2FE6:11D9
cs=0x2fe6;eip=0x0011dc; 	T(SHL(ah, 1));	// 104477 shl     ah, 1 ;~ 2FE6:11DC
cs=0x2fe6;eip=0x0011de; 	R(OUT(dx, ax));	// 104478 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:11DE
cs=0x2fe6;eip=0x0011df; 	X(MOV(*(raddr(es,di)), cl));	// 104480 mov     es:[di], cl ;~ 2FE6:11DF
cs=0x2fe6;eip=0x0011e2; 	T(SHL(ah, 1));	// 104481 shl     ah, 1 ;~ 2FE6:11E2
cs=0x2fe6;eip=0x0011e4; 	R(OUT(dx, ax));	// 104482 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:11E4
cs=0x2fe6;eip=0x0011e5; 	X(MOV(*(raddr(es,di)), bh));	// 104484 mov     es:[di], bh ;~ 2FE6:11E5
cs=0x2fe6;eip=0x0011e8; 	T(SHL(ah, 1));	// 104485 shl     ah, 1 ;~ 2FE6:11E8
cs=0x2fe6;eip=0x0011ea; 	R(OUT(dx, ax));	// 104486 out     dx, ax          ; EGA: sequencer address reg ;~ 2FE6:11EA
cs=0x2fe6;eip=0x0011eb; 	X(MOV(*(raddr(es,di)), bl));	// 104488 mov     es:[di], bl ;~ 2FE6:11EB
cs=0x2fe6;eip=0x0011ee; 	X(POP(bx));	// 104489 pop     bx ;~ 2FE6:11EE
cs=0x2fe6;eip=0x0011ef; 	T(INC(di));	// 104490 inc     di ;~ 2FE6:11EF
cs=0x2fe6;eip=0x0011f0; 	T(DEC(bp));	// 104491 dec     bp ;~ 2FE6:11F0
cs=0x2fe6;eip=0x0011f1; 	R(JZ(loc_3f635));	// 104492 jz      short loc_3F635 ;~ 2FE6:11F1
cs=0x2fe6;eip=0x0011f3; 	R(JMP(loc_3f5d3));	// 104493 jmp     short loc_3F5D3 ;~ 2FE6:11F3
loc_3f635:
	// 11016 
cs=0x2fe6;eip=0x0011f5; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 104497 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:11F5
cs=0x2fe6;eip=0x0011f8; 	T(CMP(unk_4b0ba, 1));	// 104498 cmp     byte ptr unk_4B0BA, 1 ;~ 2FE6:11F8
cs=0x2fe6;eip=0x0011fd; 	R(JZ(loc_3f64a));	// 104499 jz      short loc_3F64A ;~ 2FE6:11FD
cs=0x2fe6;eip=0x0011ff; 	T(SHR(ax, 1));	// 104500 shr     ax, 1 ;~ 2FE6:11FF
cs=0x2fe6;eip=0x001201; 	T(SHR(ax, 1));	// 104501 shr     ax, 1 ;~ 2FE6:1201
cs=0x2fe6;eip=0x001203; 	X(ADD(*(dw*)((&unk_4b0c7)), ax));	// 104502 add     word ptr unk_4B0C7, ax ;~ 2FE6:1203
cs=0x2fe6;eip=0x001207; 	R(JMP(loc_3f65c));	// 104503 jmp     short loc_3F65C ;~ 2FE6:1207
loc_3f64a:
	// 11017 
cs=0x2fe6;eip=0x00120a; 	X(INC(*(dw*)((&unk_4b0bf))));	// 104508 inc     word ptr unk_4B0BF ;~ 2FE6:120A
cs=0x2fe6;eip=0x00120e; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 104509 mov     ax, word ptr unk_4B0BF ;~ 2FE6:120E
cs=0x2fe6;eip=0x001211; 	T(SHL(ax, 1));	// 104510 shl     ax, 1 ;~ 2FE6:1211
cs=0x2fe6;eip=0x001213; 	T(MOV(si, ax));	// 104511 mov     si, ax ;~ 2FE6:1213
cs=0x2fe6;eip=0x001215; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x1492))));	// 104512 mov     ax, [si-1492h] ;~ 2FE6:1215
cs=0x2fe6;eip=0x001219; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 104513 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1219
loc_3f65c:
	// 11018 
cs=0x2fe6;eip=0x00121c; 	X(POP(bp));	// 104516 pop     bp ;~ 2FE6:121C
cs=0x2fe6;eip=0x00121d; 	X(POP(di));	// 104517 pop     di ;~ 2FE6:121D
cs=0x2fe6;eip=0x00121e; 	X(POP(ds));	// 104518 pop     ds ;~ 2FE6:121E
cs=0x2fe6;eip=0x00121f; 	X(POP(dx));	// 104519 pop     dx ;~ 2FE6:121F
cs=0x2fe6;eip=0x001220; 	R(RETN(0));	// 104520 retn ;~ 2FE6:1220
ret_2fe6_1221:
	// 11019 
cs=0x2fe6;eip=0x001221; 	X(PUSH(dx));	// 104522 push    dx ;~ 2FE6:1221
cs=0x2fe6;eip=0x001222; 	X(PUSH(di));	// 104523 push    di ;~ 2FE6:1222
cs=0x2fe6;eip=0x001223; 	T(CLD);	// 104524 cld ;~ 2FE6:1223
cs=0x2fe6;eip=0x001224; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 104525 mov     ax, word ptr unk_4B0DD ;~ 2FE6:1224
cs=0x2fe6;eip=0x001227; 	T(MOV(si, ax));	// 104526 mov     si, ax ;~ 2FE6:1227
cs=0x2fe6;eip=0x001229; 	T(MOV(ax, *(dw*)((&unk_4b0c5))));	// 104527 mov     ax, word ptr unk_4B0C5 ;~ 2FE6:1229
cs=0x2fe6;eip=0x00122c; 	T(MOV(es, ax));	// 104528 mov     es, ax ;~ 2FE6:122C
cs=0x2fe6;eip=0x00122e; 	T(MOV(ax, *(dw*)((&unk_4b0c7))));	// 104529 mov     ax, word ptr unk_4B0C7 ;~ 2FE6:122E
cs=0x2fe6;eip=0x001231; 	T(MOV(di, ax));	// 104530 mov     di, ax ;~ 2FE6:1231
cs=0x2fe6;eip=0x001233; 	T(MOV(cx, *(dw*)((&unk_4b0c1))));	// 104531 mov     cx, word ptr unk_4B0C1 ;~ 2FE6:1233
cs=0x2fe6;eip=0x001237; 	T(SHR(cx, 1));	// 104532 shr     cx, 1 ;~ 2FE6:1237
cs=0x2fe6;eip=0x001239; 	T(XOR(bh, bh));	// 104533 xor     bh, bh ;~ 2FE6:1239
cs=0x2fe6;eip=0x00123b; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 104534 mov     ax, word ptr unk_4B0BF ;~ 2FE6:123B
cs=0x2fe6;eip=0x00123e; 	T(SHR(ax, 1));	// 104535 shr     ax, 1 ;~ 2FE6:123E
cs=0x2fe6;eip=0x001240; 	R(JC(loc_3f6d6));	// 104536 jb      short loc_3F6D6 ;~ 2FE6:1240
loc_3f682:
	// 11020 
cs=0x2fe6;eip=0x001242; 	T(LODSB);	// 104539 lodsb ;~ 2FE6:1242
cs=0x2fe6;eip=0x001243; 	T(MOV(ah, al));	// 104540 mov     ah, al ;~ 2FE6:1243
cs=0x2fe6;eip=0x001245; 	T(SHR(al, 1));	// 104541 shr     al, 1 ;~ 2FE6:1245
cs=0x2fe6;eip=0x001247; 	T(SHR(al, 1));	// 104542 shr     al, 1 ;~ 2FE6:1247
cs=0x2fe6;eip=0x001249; 	T(SHR(al, 1));	// 104543 shr     al, 1 ;~ 2FE6:1249
cs=0x2fe6;eip=0x00124b; 	T(SHR(al, 1));	// 104544 shr     al, 1 ;~ 2FE6:124B
cs=0x2fe6;eip=0x00124d; 	T(SHL(al, 1));	// 104545 shl     al, 1 ;~ 2FE6:124D
cs=0x2fe6;eip=0x00124f; 	T(MOV(bl, al));	// 104546 mov     bl, al ;~ 2FE6:124F
cs=0x2fe6;eip=0x001251; 	T(MOV(al, *(raddr(ds,bx+0x388))));	// 104547 mov     al, [bx+388h] ;~ 2FE6:1251
cs=0x2fe6;eip=0x001255; 	T(AND(al, 0x0C0));	// 104548 and     al, 0C0h ;~ 2FE6:1255
cs=0x2fe6;eip=0x001257; 	T(AND(ah, 0x0F));	// 104549 and     ah, 0Fh ;~ 2FE6:1257
cs=0x2fe6;eip=0x00125a; 	T(SHL(ah, 1));	// 104550 shl     ah, 1 ;~ 2FE6:125A
cs=0x2fe6;eip=0x00125c; 	T(MOV(bl, ah));	// 104551 mov     bl, ah ;~ 2FE6:125C
cs=0x2fe6;eip=0x00125e; 	T(MOV(ah, *(raddr(ds,bx+0x388))));	// 104552 mov     ah, [bx+388h] ;~ 2FE6:125E
cs=0x2fe6;eip=0x001262; 	T(AND(ah, 0x30));	// 104553 and     ah, 30h ;~ 2FE6:1262
cs=0x2fe6;eip=0x001265; 	T(OR(al, ah));	// 104554 or      al, ah ;~ 2FE6:1265
cs=0x2fe6;eip=0x001267; 	T(MOV(dl, al));	// 104555 mov     dl, al ;~ 2FE6:1267
cs=0x2fe6;eip=0x001269; 	T(LODSB);	// 104556 lodsb ;~ 2FE6:1269
cs=0x2fe6;eip=0x00126a; 	T(MOV(ah, al));	// 104557 mov     ah, al ;~ 2FE6:126A
cs=0x2fe6;eip=0x00126c; 	T(SHR(al, 1));	// 104558 shr     al, 1 ;~ 2FE6:126C
cs=0x2fe6;eip=0x00126e; 	T(SHR(al, 1));	// 104559 shr     al, 1 ;~ 2FE6:126E
cs=0x2fe6;eip=0x001270; 	T(SHR(al, 1));	// 104560 shr     al, 1 ;~ 2FE6:1270
cs=0x2fe6;eip=0x001272; 	T(SHR(al, 1));	// 104561 shr     al, 1 ;~ 2FE6:1272
cs=0x2fe6;eip=0x001274; 	T(SHL(al, 1));	// 104562 shl     al, 1 ;~ 2FE6:1274
cs=0x2fe6;eip=0x001276; 	T(MOV(bl, al));	// 104563 mov     bl, al ;~ 2FE6:1276
cs=0x2fe6;eip=0x001278; 	T(MOV(al, *(raddr(ds,bx+0x388))));	// 104564 mov     al, [bx+388h] ;~ 2FE6:1278
cs=0x2fe6;eip=0x00127c; 	T(AND(al, 0x0C));	// 104565 and     al, 0Ch ;~ 2FE6:127C
cs=0x2fe6;eip=0x00127e; 	T(AND(ah, 0x0F));	// 104566 and     ah, 0Fh ;~ 2FE6:127E
cs=0x2fe6;eip=0x001281; 	T(SHL(ah, 1));	// 104567 shl     ah, 1 ;~ 2FE6:1281
cs=0x2fe6;eip=0x001283; 	T(MOV(bl, ah));	// 104568 mov     bl, ah ;~ 2FE6:1283
cs=0x2fe6;eip=0x001285; 	T(MOV(ah, *(raddr(ds,bx+0x388))));	// 104569 mov     ah, [bx+388h] ;~ 2FE6:1285
cs=0x2fe6;eip=0x001289; 	T(AND(ah, 3));	// 104570 and     ah, 3 ;~ 2FE6:1289
cs=0x2fe6;eip=0x00128c; 	T(OR(al, ah));	// 104571 or      al, ah ;~ 2FE6:128C
cs=0x2fe6;eip=0x00128e; 	T(OR(al, dl));	// 104572 or      al, dl ;~ 2FE6:128E
cs=0x2fe6;eip=0x001290; 	X(STOSB);	// 104573 stosb ;~ 2FE6:1290
cs=0x2fe6;eip=0x001291; 	R(LOOP(loc_3f682));	// 104574 loop    loc_3F682 ;~ 2FE6:1291
cs=0x2fe6;eip=0x001293; 	R(JMP(loc_3f727));	// 104575 jmp     short loc_3F727 ;~ 2FE6:1293
loc_3f6d6:
	// 11021 
cs=0x2fe6;eip=0x001296; 	T(LODSB);	// 104581 lodsb ;~ 2FE6:1296
cs=0x2fe6;eip=0x001297; 	T(MOV(ah, al));	// 104582 mov     ah, al ;~ 2FE6:1297
cs=0x2fe6;eip=0x001299; 	T(SHR(al, 1));	// 104583 shr     al, 1 ;~ 2FE6:1299
cs=0x2fe6;eip=0x00129b; 	T(SHR(al, 1));	// 104584 shr     al, 1 ;~ 2FE6:129B
cs=0x2fe6;eip=0x00129d; 	T(SHR(al, 1));	// 104585 shr     al, 1 ;~ 2FE6:129D
cs=0x2fe6;eip=0x00129f; 	T(SHR(al, 1));	// 104586 shr     al, 1 ;~ 2FE6:129F
cs=0x2fe6;eip=0x0012a1; 	T(SHL(al, 1));	// 104587 shl     al, 1 ;~ 2FE6:12A1
cs=0x2fe6;eip=0x0012a3; 	T(MOV(bl, al));	// 104588 mov     bl, al ;~ 2FE6:12A3
cs=0x2fe6;eip=0x0012a5; 	T(MOV(al, *(raddr(ds,bx+0x389))));	// 104589 mov     al, [bx+389h] ;~ 2FE6:12A5
cs=0x2fe6;eip=0x0012a9; 	T(AND(al, 0x0C0));	// 104590 and     al, 0C0h ;~ 2FE6:12A9
cs=0x2fe6;eip=0x0012ab; 	T(AND(ah, 0x0F));	// 104591 and     ah, 0Fh ;~ 2FE6:12AB
cs=0x2fe6;eip=0x0012ae; 	T(SHL(ah, 1));	// 104592 shl     ah, 1 ;~ 2FE6:12AE
cs=0x2fe6;eip=0x0012b0; 	T(MOV(bl, ah));	// 104593 mov     bl, ah ;~ 2FE6:12B0
cs=0x2fe6;eip=0x0012b2; 	T(MOV(ah, *(raddr(ds,bx+0x389))));	// 104594 mov     ah, [bx+389h] ;~ 2FE6:12B2
cs=0x2fe6;eip=0x0012b6; 	T(AND(ah, 0x30));	// 104595 and     ah, 30h ;~ 2FE6:12B6
cs=0x2fe6;eip=0x0012b9; 	T(OR(al, ah));	// 104596 or      al, ah ;~ 2FE6:12B9
cs=0x2fe6;eip=0x0012bb; 	T(MOV(dl, al));	// 104597 mov     dl, al ;~ 2FE6:12BB
cs=0x2fe6;eip=0x0012bd; 	T(LODSB);	// 104598 lodsb ;~ 2FE6:12BD
cs=0x2fe6;eip=0x0012be; 	T(MOV(ah, al));	// 104599 mov     ah, al ;~ 2FE6:12BE
cs=0x2fe6;eip=0x0012c0; 	T(SHR(al, 1));	// 104600 shr     al, 1 ;~ 2FE6:12C0
cs=0x2fe6;eip=0x0012c2; 	T(SHR(al, 1));	// 104601 shr     al, 1 ;~ 2FE6:12C2
cs=0x2fe6;eip=0x0012c4; 	T(SHR(al, 1));	// 104602 shr     al, 1 ;~ 2FE6:12C4
cs=0x2fe6;eip=0x0012c6; 	T(SHR(al, 1));	// 104603 shr     al, 1 ;~ 2FE6:12C6
cs=0x2fe6;eip=0x0012c8; 	T(SHL(al, 1));	// 104604 shl     al, 1 ;~ 2FE6:12C8
cs=0x2fe6;eip=0x0012ca; 	T(MOV(bl, al));	// 104605 mov     bl, al ;~ 2FE6:12CA
cs=0x2fe6;eip=0x0012cc; 	T(MOV(al, *(raddr(ds,bx+0x389))));	// 104606 mov     al, [bx+389h] ;~ 2FE6:12CC
cs=0x2fe6;eip=0x0012d0; 	T(AND(al, 0x0C));	// 104607 and     al, 0Ch ;~ 2FE6:12D0
cs=0x2fe6;eip=0x0012d2; 	T(AND(ah, 0x0F));	// 104608 and     ah, 0Fh ;~ 2FE6:12D2
cs=0x2fe6;eip=0x0012d5; 	T(SHL(ah, 1));	// 104609 shl     ah, 1 ;~ 2FE6:12D5
cs=0x2fe6;eip=0x0012d7; 	T(MOV(bl, ah));	// 104610 mov     bl, ah ;~ 2FE6:12D7
cs=0x2fe6;eip=0x0012d9; 	T(MOV(ah, *(raddr(ds,bx+0x389))));	// 104611 mov     ah, [bx+389h] ;~ 2FE6:12D9
cs=0x2fe6;eip=0x0012dd; 	T(AND(ah, 3));	// 104612 and     ah, 3 ;~ 2FE6:12DD
cs=0x2fe6;eip=0x0012e0; 	T(OR(al, ah));	// 104613 or      al, ah ;~ 2FE6:12E0
cs=0x2fe6;eip=0x0012e2; 	T(OR(al, dl));	// 104614 or      al, dl ;~ 2FE6:12E2
cs=0x2fe6;eip=0x0012e4; 	X(STOSB);	// 104615 stosb ;~ 2FE6:12E4
cs=0x2fe6;eip=0x0012e5; 	R(LOOP(loc_3f6d6));	// 104616 loop    loc_3F6D6 ;~ 2FE6:12E5
loc_3f727:
	// 11022 
cs=0x2fe6;eip=0x0012e7; 	X(INC(*(dw*)((&unk_4b0bf))));	// 104619 inc     word ptr unk_4B0BF ;~ 2FE6:12E7
cs=0x2fe6;eip=0x0012eb; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 104620 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:12EB
cs=0x2fe6;eip=0x0012ee; 	T(CMP(unk_4b0ba, 1));	// 104621 cmp     byte ptr unk_4B0BA, 1 ;~ 2FE6:12EE
cs=0x2fe6;eip=0x0012f3; 	R(JZ(loc_3f73e));	// 104622 jz      short loc_3F73E ;~ 2FE6:12F3
cs=0x2fe6;eip=0x0012f5; 	T(SHR(ax, 1));	// 104623 shr     ax, 1 ;~ 2FE6:12F5
cs=0x2fe6;eip=0x0012f7; 	X(ADD(*(dw*)((&unk_4b0c7)), ax));	// 104624 add     word ptr unk_4B0C7, ax ;~ 2FE6:12F7
cs=0x2fe6;eip=0x0012fb; 	R(JMP(loc_3f74c));	// 104625 jmp     short loc_3F74C ;~ 2FE6:12FB
loc_3f73e:
	// 11023 
cs=0x2fe6;eip=0x0012fe; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 104630 mov     ax, word ptr unk_4B0BF ;~ 2FE6:12FE
cs=0x2fe6;eip=0x001301; 	T(SHL(ax, 1));	// 104631 shl     ax, 1 ;~ 2FE6:1301
cs=0x2fe6;eip=0x001303; 	T(MOV(si, ax));	// 104632 mov     si, ax ;~ 2FE6:1303
cs=0x2fe6;eip=0x001305; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x1492))));	// 104633 mov     ax, [si-1492h] ;~ 2FE6:1305
cs=0x2fe6;eip=0x001309; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 104634 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1309
loc_3f74c:
	// 11024 
cs=0x2fe6;eip=0x00130c; 	X(POP(di));	// 104637 pop     di ;~ 2FE6:130C
cs=0x2fe6;eip=0x00130d; 	X(POP(dx));	// 104638 pop     dx ;~ 2FE6:130D
cs=0x2fe6;eip=0x00130e; 	R(RETN(0));	// 104639 retn ;~ 2FE6:130E
ret_2fe6_130f:
	// 11025 
cs=0x2fe6;eip=0x00130f; 	X(PUSH(di));	// 104641 push    di ;~ 2FE6:130F
cs=0x2fe6;eip=0x001310; 	T(CLD);	// 104642 cld ;~ 2FE6:1310
cs=0x2fe6;eip=0x001311; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 104643 mov     ax, word ptr unk_4B0DD ;~ 2FE6:1311
cs=0x2fe6;eip=0x001314; 	T(MOV(si, ax));	// 104644 mov     si, ax ;~ 2FE6:1314
cs=0x2fe6;eip=0x001316; 	T(MOV(ax, *(dw*)((&unk_4b0c5))));	// 104645 mov     ax, word ptr unk_4B0C5 ;~ 2FE6:1316
cs=0x2fe6;eip=0x001319; 	T(MOV(es, ax));	// 104646 mov     es, ax ;~ 2FE6:1319
cs=0x2fe6;eip=0x00131b; 	T(MOV(ax, *(dw*)((&unk_4b0c7))));	// 104647 mov     ax, word ptr unk_4B0C7 ;~ 2FE6:131B
cs=0x2fe6;eip=0x00131e; 	T(MOV(di, ax));	// 104648 mov     di, ax ;~ 2FE6:131E
cs=0x2fe6;eip=0x001320; 	T(MOV(cx, *(dw*)((&unk_4b0c1))));	// 104649 mov     cx, word ptr unk_4B0C1 ;~ 2FE6:1320
loc_3f764:
	// 11026 
cs=0x2fe6;eip=0x001324; 	T(LODSB);	// 104652 lodsb ;~ 2FE6:1324
cs=0x2fe6;eip=0x001325; 	T(MOV(ah, al));	// 104653 mov     ah, al ;~ 2FE6:1325
cs=0x2fe6;eip=0x001327; 	T(SHR(al, 1));	// 104654 shr     al, 1 ;~ 2FE6:1327
cs=0x2fe6;eip=0x001329; 	T(SHR(al, 1));	// 104655 shr     al, 1 ;~ 2FE6:1329
cs=0x2fe6;eip=0x00132b; 	T(SHR(al, 1));	// 104656 shr     al, 1 ;~ 2FE6:132B
cs=0x2fe6;eip=0x00132d; 	T(SHR(al, 1));	// 104657 shr     al, 1 ;~ 2FE6:132D
cs=0x2fe6;eip=0x00132f; 	T(AND(ah, 0x0F));	// 104658 and     ah, 0Fh ;~ 2FE6:132F
cs=0x2fe6;eip=0x001332; 	X(STOSW);	// 104659 stosw ;~ 2FE6:1332
cs=0x2fe6;eip=0x001333; 	R(LOOP(loc_3f764));	// 104660 loop    loc_3F764 ;~ 2FE6:1333
cs=0x2fe6;eip=0x001335; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 104661 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:1335
cs=0x2fe6;eip=0x001338; 	T(CMP(unk_4b0ba, 1));	// 104662 cmp     byte ptr unk_4B0BA, 1 ;~ 2FE6:1338
cs=0x2fe6;eip=0x00133d; 	R(JZ(loc_3f788));	// 104663 jz      short loc_3F788 ;~ 2FE6:133D
cs=0x2fe6;eip=0x00133f; 	T(SHL(ax, 1));	// 104664 shl     ax, 1 ;~ 2FE6:133F
cs=0x2fe6;eip=0x001341; 	X(ADD(*(dw*)((&unk_4b0c7)), ax));	// 104665 add     word ptr unk_4B0C7, ax ;~ 2FE6:1341
cs=0x2fe6;eip=0x001345; 	R(JMP(loc_3f79a));	// 104666 jmp     short loc_3F79A ;~ 2FE6:1345
loc_3f788:
	// 11027 
cs=0x2fe6;eip=0x001348; 	X(INC(*(dw*)((&unk_4b0bf))));	// 104671 inc     word ptr unk_4B0BF ;~ 2FE6:1348
cs=0x2fe6;eip=0x00134c; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 104672 mov     ax, word ptr unk_4B0BF ;~ 2FE6:134C
cs=0x2fe6;eip=0x00134f; 	T(SHL(ax, 1));	// 104673 shl     ax, 1 ;~ 2FE6:134F
cs=0x2fe6;eip=0x001351; 	T(MOV(si, ax));	// 104674 mov     si, ax ;~ 2FE6:1351
cs=0x2fe6;eip=0x001353; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x1492))));	// 104675 mov     ax, [si-1492h] ;~ 2FE6:1353
cs=0x2fe6;eip=0x001357; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 104676 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1357
loc_3f79a:
	// 11028 
cs=0x2fe6;eip=0x00135a; 	X(POP(di));	// 104679 pop     di ;~ 2FE6:135A
cs=0x2fe6;eip=0x00135b; 	R(RETN(0));	// 104680 retn ;~ 2FE6:135B
ret_2fe6_135c:
	// 11029 
cs=0x2fe6;eip=0x00135c; 	X(PUSH(di));	// 104682 push    di ;~ 2FE6:135C
cs=0x2fe6;eip=0x00135d; 	T(CLD);	// 104683 cld ;~ 2FE6:135D
cs=0x2fe6;eip=0x00135e; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 104684 mov     ax, word ptr unk_4B0DD ;~ 2FE6:135E
cs=0x2fe6;eip=0x001361; 	T(MOV(si, ax));	// 104685 mov     si, ax ;~ 2FE6:1361
cs=0x2fe6;eip=0x001363; 	T(MOV(ax, *(dw*)((&unk_4b0c5))));	// 104686 mov     ax, word ptr unk_4B0C5 ;~ 2FE6:1363
cs=0x2fe6;eip=0x001366; 	T(MOV(es, ax));	// 104687 mov     es, ax ;~ 2FE6:1366
cs=0x2fe6;eip=0x001368; 	T(MOV(ax, *(dw*)((&unk_4b0c7))));	// 104688 mov     ax, word ptr unk_4B0C7 ;~ 2FE6:1368
cs=0x2fe6;eip=0x00136b; 	T(MOV(di, ax));	// 104689 mov     di, ax ;~ 2FE6:136B
cs=0x2fe6;eip=0x00136d; 	T(MOV(cx, *(dw*)((&unk_4b0c1))));	// 104690 mov     cx, word ptr unk_4B0C1 ;~ 2FE6:136D
cs=0x2fe6;eip=0x001371; 	T(SHR(cx, 1));	// 104691 shr     cx, 1 ;~ 2FE6:1371
	// 104692 rep movsw ;~ 2FE6:1373
cs=0x2fe6;eip=0x001373; 	X(	REP MOVSW);	// 104692 rep movsw ;~ 2FE6:1373
cs=0x2fe6;eip=0x001375; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 104693 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:1375
cs=0x2fe6;eip=0x001378; 	T(CMP(unk_4b0ba, 1));	// 104694 cmp     byte ptr unk_4B0BA, 1 ;~ 2FE6:1378
cs=0x2fe6;eip=0x00137d; 	R(JZ(loc_3f7c6));	// 104695 jz      short loc_3F7C6 ;~ 2FE6:137D
cs=0x2fe6;eip=0x00137f; 	X(ADD(*(dw*)((&unk_4b0c7)), ax));	// 104696 add     word ptr unk_4B0C7, ax ;~ 2FE6:137F
cs=0x2fe6;eip=0x001383; 	R(JMP(loc_3f7d8));	// 104697 jmp     short loc_3F7D8 ;~ 2FE6:1383
loc_3f7c6:
	// 11030 
cs=0x2fe6;eip=0x001386; 	X(INC(*(dw*)((&unk_4b0bf))));	// 104702 inc     word ptr unk_4B0BF ;~ 2FE6:1386
cs=0x2fe6;eip=0x00138a; 	T(MOV(ax, *(dw*)((&unk_4b0bf))));	// 104703 mov     ax, word ptr unk_4B0BF ;~ 2FE6:138A
cs=0x2fe6;eip=0x00138d; 	T(SHL(ax, 1));	// 104704 shl     ax, 1 ;~ 2FE6:138D
cs=0x2fe6;eip=0x00138f; 	T(MOV(si, ax));	// 104705 mov     si, ax ;~ 2FE6:138F
cs=0x2fe6;eip=0x001391; 	T(MOV(ax, *(dw*)(raddr(ds,si-0x1492))));	// 104706 mov     ax, [si-1492h] ;~ 2FE6:1391
cs=0x2fe6;eip=0x001395; 	X(MOV(*(dw*)((&unk_4b0c7)), ax));	// 104707 mov     word ptr unk_4B0C7, ax ;~ 2FE6:1395
loc_3f7d8:
	// 11031 
cs=0x2fe6;eip=0x001398; 	X(POP(di));	// 104710 pop     di ;~ 2FE6:1398
cs=0x2fe6;eip=0x001399; 	R(RETN(0));	// 104711 retn ;~ 2FE6:1399
sub_3e4ae:
	// 101984 
#undef arg_0
#define arg_0 4
	// 101987 arg_0           = word ptr  4 ;~ 2FE6:006E
cs=0x2fe6;eip=0x00006e; 	X(PUSH(bp));	// 101989 push    bp ;~ 2FE6:006E
cs=0x2fe6;eip=0x00006f; 	T(MOV(bp, sp));	// 101990 mov     bp, sp ;~ 2FE6:006F
cs=0x2fe6;eip=0x000071; 	T(SUB(sp, 2));	// 101991 sub     sp, 2 ;~ 2FE6:0071
cs=0x2fe6;eip=0x000074; 	X(PUSH(si));	// 101992 push    si ;~ 2FE6:0074
cs=0x2fe6;eip=0x000075; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 101993 push    [bp+arg_0] ;~ 2FE6:0075
cs=0x2fe6;eip=0x000078; 	R(CALLF(sub_23961,0));	// 101994 call    sub_23961 ;~ 2FE6:0078
cs=0x2fe6;eip=0x00007d; 	T(MOV(si, ax));	// 101995 mov     si, ax ;~ 2FE6:007D
cs=0x2fe6;eip=0x00007f; 	T(OR(si, si));	// 101996 or      si, si ;~ 2FE6:007F
cs=0x2fe6;eip=0x000081; 	R(JNZ(loc_3e4c8));	// 101997 jnz     short loc_3E4C8 ;~ 2FE6:0081
cs=0x2fe6;eip=0x000083; 	R(CALLF(sub_315c9,0));	// 101998 call    sub_315C9 ;~ 2FE6:0083
loc_3e4c8:
	// 10864 
cs=0x2fe6;eip=0x000088; 	T(MOV(ax, si));	// 102002 mov     ax, si ;~ 2FE6:0088
cs=0x2fe6;eip=0x00008a; 	X(POP(si));	// 102003 pop     si ;~ 2FE6:008A
cs=0x2fe6;eip=0x00008b; 	T(MOV(sp, bp));	// 102004 mov     sp, bp ;~ 2FE6:008B
cs=0x2fe6;eip=0x00008d; 	X(POP(bp));	// 102005 pop     bp ;~ 2FE6:008D
cs=0x2fe6;eip=0x00008e; 	R(RETN(2));	// 102006 retn    2 ;~ 2FE6:008E
sub_3e4d1:
	// 102014 
#undef arg_0
#define arg_0 4
	// 102016 arg_0           = word ptr  4 ;~ 2FE6:0091
cs=0x2fe6;eip=0x000091; 	X(PUSH(bp));	// 102018 push    bp ;~ 2FE6:0091
cs=0x2fe6;eip=0x000092; 	T(MOV(bp, sp));	// 102019 mov     bp, sp ;~ 2FE6:0092
cs=0x2fe6;eip=0x000094; 	T(SUB(sp, 2));	// 102020 sub     sp, 2 ;~ 2FE6:0094
cs=0x2fe6;eip=0x000097; 	X(PUSH(si));	// 102021 push    si ;~ 2FE6:0097
cs=0x2fe6;eip=0x000098; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 102022 push    [bp+arg_0] ;~ 2FE6:0098
cs=0x2fe6;eip=0x00009b; 	R(CALLF(sub_239ff,0));	// 102023 call    sub_239FF ;~ 2FE6:009B
cs=0x2fe6;eip=0x0000a0; 	T(MOV(si, ax));	// 102024 mov     si, ax ;~ 2FE6:00A0
cs=0x2fe6;eip=0x0000a2; 	T(OR(si, si));	// 102025 or      si, si ;~ 2FE6:00A2
cs=0x2fe6;eip=0x0000a4; 	R(JNZ(loc_3e4eb));	// 102026 jnz     short loc_3E4EB ;~ 2FE6:00A4
cs=0x2fe6;eip=0x0000a6; 	R(CALLF(sub_315c9,0));	// 102027 call    sub_315C9 ;~ 2FE6:00A6
loc_3e4eb:
	// 10865 
cs=0x2fe6;eip=0x0000ab; 	T(MOV(ax, si));	// 102031 mov     ax, si ;~ 2FE6:00AB
cs=0x2fe6;eip=0x0000ad; 	X(POP(si));	// 102032 pop     si ;~ 2FE6:00AD
cs=0x2fe6;eip=0x0000ae; 	T(MOV(sp, bp));	// 102033 mov     sp, bp ;~ 2FE6:00AE
cs=0x2fe6;eip=0x0000b0; 	X(POP(bp));	// 102034 pop     bp ;~ 2FE6:00B0
cs=0x2fe6;eip=0x0000b1; 	R(RETN(2));	// 102035 retn    2 ;~ 2FE6:00B1
sub_3e4f4:
	// 102043 
#undef arg_0
#define arg_0 6
	// 102045 arg_0           = word ptr  6 ;~ 2FE6:00B4
#undef arg_2
#define arg_2 8
	// 102046 arg_2           = word ptr  8 ;~ 2FE6:00B4
#undef arg_4
#define arg_4 0x0A
	// 102047 arg_4           = word ptr  0Ah ;~ 2FE6:00B4
#undef arg_6
#define arg_6 0x0C
	// 102048 arg_6           = word ptr  0Ch ;~ 2FE6:00B4
#undef arg_8
#define arg_8 0x0E
	// 102049 arg_8           = word ptr  0Eh ;~ 2FE6:00B4
#undef arg_a
#define arg_a 0x10
	// 102050 arg_A           = word ptr  10h ;~ 2FE6:00B4
#undef arg_c
#define arg_c 0x12
	// 102051 arg_C           = word ptr  12h ;~ 2FE6:00B4
cs=0x2fe6;eip=0x0000b4; 	X(PUSH(bp));	// 102053 push    bp ;~ 2FE6:00B4
cs=0x2fe6;eip=0x0000b5; 	T(MOV(bp, sp));	// 102054 mov     bp, sp ;~ 2FE6:00B5
cs=0x2fe6;eip=0x0000b7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 102055 mov     ax, [bp+arg_8] ;~ 2FE6:00B7
cs=0x2fe6;eip=0x0000ba; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_a))));	// 102056 mov     dx, [bp+arg_A] ;~ 2FE6:00BA
cs=0x2fe6;eip=0x0000bd; 	X(MOV(*(dw*)((&unk_571d0)), ax));	// 102057 mov     word ptr unk_571D0, ax ;~ 2FE6:00BD
cs=0x2fe6;eip=0x0000c0; 	X(MOV(*(dw*)((&unk_571d2)), dx));	// 102058 mov     word ptr unk_571D2, dx ;~ 2FE6:00C0
cs=0x2fe6;eip=0x0000c4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 102059 mov     ax, [bp+arg_6] ;~ 2FE6:00C4
cs=0x2fe6;eip=0x0000c7; 	X(MOV(*(dw*)((&unk_571d4)), ax));	// 102060 mov     word ptr unk_571D4, ax ;~ 2FE6:00C7
cs=0x2fe6;eip=0x0000ca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 102061 mov     ax, [bp+arg_2] ;~ 2FE6:00CA
cs=0x2fe6;eip=0x0000cd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 102062 mov     dx, [bp+arg_4] ;~ 2FE6:00CD
cs=0x2fe6;eip=0x0000d0; 	X(MOV(*(dw*)((&unk_571ca)), ax));	// 102063 mov     word ptr unk_571CA, ax ;~ 2FE6:00D0
cs=0x2fe6;eip=0x0000d3; 	X(MOV(*(dw*)((&unk_571cc)), dx));	// 102064 mov     word ptr unk_571CC, dx ;~ 2FE6:00D3
cs=0x2fe6;eip=0x0000d7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 102065 mov     ax, [bp+arg_0] ;~ 2FE6:00D7
cs=0x2fe6;eip=0x0000da; 	X(MOV(*(dw*)((&unk_571ce)), ax));	// 102066 mov     word ptr unk_571CE, ax ;~ 2FE6:00DA
cs=0x2fe6;eip=0x0000dd; 	X(MOV(*(dw*)((&unk_571e5)), 0));	// 102067 mov     word ptr unk_571E5, 0 ;~ 2FE6:00DD
cs=0x2fe6;eip=0x0000e3; 	X(MOV(unk_571d6, 0));	// 102068 mov     byte ptr unk_571D6, 0 ;~ 2FE6:00E3
cs=0x2fe6;eip=0x0000e8; 	X(MOV(*(dw*)((&unk_571e3)), 0));	// 102069 mov     word ptr unk_571E3, 0 ;~ 2FE6:00E8
cs=0x2fe6;eip=0x0000ee; 	X(MOV(unk_571e9, 0));	// 102070 mov     byte ptr unk_571E9, 0 ;~ 2FE6:00EE
cs=0x2fe6;eip=0x0000f3; 	T(MOV(ax, 0x0F7CF));	// 102071 mov     ax, 0F7CFh ;~ 2FE6:00F3
cs=0x2fe6;eip=0x0000f6; 	X(PUSH(ax));	// 102072 push    ax ;~ 2FE6:00F6
cs=0x2fe6;eip=0x0000f7; 	R(CALLF(sub_3f24b,0));	// 102073 call    far ptr sub_3F24B ;~ 2FE6:00F7
cs=0x2fe6;eip=0x0000fc; 	R(CALLF(sub_3f234,0));	// 102074 call    far ptr sub_3F234 ;~ 2FE6:00FC
cs=0x2fe6;eip=0x000101; 	X(MOV(unk_571c5, al));	// 102075 mov     byte ptr unk_571C5, al ;~ 2FE6:0101
cs=0x2fe6;eip=0x000104; 	T(MOV(ax, 0x12));	// 102076 mov     ax, 12h ;~ 2FE6:0104
cs=0x2fe6;eip=0x000107; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_c))));	// 102077 mul     [bp+arg_C] ;~ 2FE6:0107
cs=0x2fe6;eip=0x00010a; 	T(ADD(ax, 0x12));	// 102078 add     ax, 12h ;~ 2FE6:010A
cs=0x2fe6;eip=0x00010d; 	X(PUSH(ax));	// 102079 push    ax ;~ 2FE6:010D
cs=0x2fe6;eip=0x00010e; 	R(CALL(sub_3e4ae,0));	// 102080 call    sub_3E4AE ;~ 2FE6:010E
cs=0x2fe6;eip=0x000111; 	T(MOV(dx, ax));	// 102081 mov     dx, ax ;~ 2FE6:0111
cs=0x2fe6;eip=0x000113; 	T(SUB(ax, ax));	// 102082 sub     ax, ax ;~ 2FE6:0113
cs=0x2fe6;eip=0x000115; 	X(MOV(*(dw*)((&unk_571c6)), ax));	// 102083 mov     word ptr unk_571C6, ax ;~ 2FE6:0115
cs=0x2fe6;eip=0x000118; 	X(MOV(*(dw*)((&unk_571c8)), dx));	// 102084 mov     word ptr unk_571C8, dx ;~ 2FE6:0118
cs=0x2fe6;eip=0x00011c; 	T(OR(ax, dx));	// 102085 or      ax, dx ;~ 2FE6:011C
cs=0x2fe6;eip=0x00011e; 	R(JNZ(loc_3e564));	// 102086 jnz     short loc_3E564 ;~ 2FE6:011E
cs=0x2fe6;eip=0x000120; 	T(SUB(ax, ax));	// 102087 sub     ax, ax ;~ 2FE6:0120
cs=0x2fe6;eip=0x000122; 	R(JMP(loc_3e567));	// 102088 jmp     short loc_3E567 ;~ 2FE6:0122
loc_3e564:
	// 10866 
cs=0x2fe6;eip=0x000124; 	T(MOV(ax, 1));	// 102092 mov     ax, 1 ;~ 2FE6:0124
loc_3e567:
	// 10867 
cs=0x2fe6;eip=0x000127; 	X(POP(bp));	// 102095 pop     bp ;~ 2FE6:0127
cs=0x2fe6;eip=0x000128; 	R(RETF(0x0E));	// 102096 retf    0Eh ;~ 2FE6:0128
sub_3e56b:
	// 102103 
cs=0x2fe6;eip=0x00012b; 	X(MOV(unk_5717f, 0));	// 102104 mov     byte ptr unk_5717F, 0 ;~ 2FE6:012B
cs=0x2fe6;eip=0x000130; 	X(MOV(unk_571c5, 0));	// 102105 mov     byte ptr unk_571C5, 0 ;~ 2FE6:0130
cs=0x2fe6;eip=0x000135; 	X(PUSH(*(dw*)((&unk_571c8))));	// 102106 push    word ptr unk_571C8 ;~ 2FE6:0135
cs=0x2fe6;eip=0x000139; 	R(CALLF(sub_2397c,0));	// 102107 call    sub_2397C ;~ 2FE6:0139
cs=0x2fe6;eip=0x00013e; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 102108 cmp     word ptr unk_571E3, 0 ;~ 2FE6:013E
cs=0x2fe6;eip=0x000143; 	R(JZ(locret_3e594));	// 102109 jz      short locret_3E594 ;~ 2FE6:0143
cs=0x2fe6;eip=0x000145; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102110 push    word ptr unk_571E3 ;~ 2FE6:0145
cs=0x2fe6;eip=0x000149; 	R(CALLF(sub_30b72,0));	// 102111 call    sub_30B72 ;~ 2FE6:0149
cs=0x2fe6;eip=0x00014e; 	X(MOV(*(dw*)((&unk_571e3)), 0));	// 102112 mov     word ptr unk_571E3, 0 ;~ 2FE6:014E
locret_3e594:
	// 10868 
cs=0x2fe6;eip=0x000154; 	R(RETF(0));	// 102115 retf ;~ 2FE6:0154
sub_3e595:
	// 102123 
#undef arg_0
#define arg_0 6
	// 102125 arg_0           = word ptr  6 ;~ 2FE6:0155
#undef arg_2
#define arg_2 8
	// 102126 arg_2           = word ptr  8 ;~ 2FE6:0155
cs=0x2fe6;eip=0x000155; 	X(PUSH(bp));	// 102128 push    bp ;~ 2FE6:0155
cs=0x2fe6;eip=0x000156; 	T(MOV(bp, sp));	// 102129 mov     bp, sp ;~ 2FE6:0156
cs=0x2fe6;eip=0x000158; 	X(PUSH(di));	// 102130 push    di ;~ 2FE6:0158
cs=0x2fe6;eip=0x000159; 	X(PUSH(si));	// 102131 push    si ;~ 2FE6:0159
cs=0x2fe6;eip=0x00015a; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 102132 mov     si, [bp+arg_2] ;~ 2FE6:015A
cs=0x2fe6;eip=0x00015d; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 102133 mov     di, [bp+arg_0] ;~ 2FE6:015D
cs=0x2fe6;eip=0x000160; 	X(PUSH(si));	// 102134 push    si ;~ 2FE6:0160
cs=0x2fe6;eip=0x000161; 	X(PUSH(di));	// 102135 push    di ;~ 2FE6:0161
cs=0x2fe6;eip=0x000162; 	T(MOV(ax, 1));	// 102136 mov     ax, 1 ;~ 2FE6:0162
cs=0x2fe6;eip=0x000165; 	X(PUSH(ax));	// 102137 push    ax ;~ 2FE6:0165
cs=0x2fe6;eip=0x000166; 	R(CALL(sub_3e5af,0));	// 102138 call    sub_3E5AF ;~ 2FE6:0166
cs=0x2fe6;eip=0x000169; 	X(POP(si));	// 102139 pop     si ;~ 2FE6:0169
cs=0x2fe6;eip=0x00016a; 	X(POP(di));	// 102140 pop     di ;~ 2FE6:016A
cs=0x2fe6;eip=0x00016b; 	X(POP(bp));	// 102141 pop     bp ;~ 2FE6:016B
cs=0x2fe6;eip=0x00016c; 	R(RETF(4));	// 102142 retf    4 ;~ 2FE6:016C
sub_3e5af:
	// 102150 
#undef var_e
#define var_e -0x0E
	// 102152 var_E           = dword ptr -0Eh ;~ 2FE6:016F
#undef var_a
#define var_a -0x0A
	// 102153 var_A           = word ptr -0Ah ;~ 2FE6:016F
#undef var_8
#define var_8 -8
	// 102154 var_8           = word ptr -8 ;~ 2FE6:016F
#undef var_6
#define var_6 -6
	// 102155 var_6           = word ptr -6 ;~ 2FE6:016F
#undef var_4
#define var_4 -4
	// 102156 var_4           = word ptr -4 ;~ 2FE6:016F
#undef var_2
#define var_2 -2
	// 102157 var_2           = word ptr -2 ;~ 2FE6:016F
#undef arg_0
#define arg_0 4
	// 102158 arg_0           = byte ptr  4 ;~ 2FE6:016F
#undef arg_2
#define arg_2 6
	// 102159 arg_2           = word ptr  6 ;~ 2FE6:016F
#undef arg_4
#define arg_4 8
	// 102160 arg_4           = word ptr  8 ;~ 2FE6:016F
cs=0x2fe6;eip=0x00016f; 	X(PUSH(bp));	// 102162 push    bp ;~ 2FE6:016F
cs=0x2fe6;eip=0x000170; 	T(MOV(bp, sp));	// 102163 mov     bp, sp ;~ 2FE6:0170
cs=0x2fe6;eip=0x000172; 	T(SUB(sp, 0x0E));	// 102164 sub     sp, 0Eh ;~ 2FE6:0172
cs=0x2fe6;eip=0x000175; 	X(PUSH(di));	// 102165 push    di ;~ 2FE6:0175
cs=0x2fe6;eip=0x000176; 	X(PUSH(si));	// 102166 push    si ;~ 2FE6:0176
cs=0x2fe6;eip=0x000177; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 102167 mov     si, [bp+arg_4] ;~ 2FE6:0177
cs=0x2fe6;eip=0x00017a; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_2))));	// 102168 mov     di, [bp+arg_2] ;~ 2FE6:017A
cs=0x2fe6;eip=0x00017d; 	T(SUB(ax, ax));	// 102169 sub     ax, ax ;~ 2FE6:017D
cs=0x2fe6;eip=0x00017f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 102170 mov     [bp+var_8], ax ;~ 2FE6:017F
cs=0x2fe6;eip=0x000182; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 102171 mov     [bp+var_A], ax ;~ 2FE6:0182
cs=0x2fe6;eip=0x000185; 	X(MOV(*(dw*)((&unk_57179)), ax));	// 102172 mov     word ptr unk_57179, ax ;~ 2FE6:0185
cs=0x2fe6;eip=0x000188; 	X(MOV(*(dw*)((&unk_57177)), ax));	// 102173 mov     word ptr unk_57177, ax ;~ 2FE6:0188
cs=0x2fe6;eip=0x00018b; 	X(MOV(*(dw*)((&unk_5717d)), ax));	// 102174 mov     word ptr unk_5717D, ax ;~ 2FE6:018B
cs=0x2fe6;eip=0x00018e; 	X(MOV(*(dw*)((&unk_5717b)), ax));	// 102175 mov     word ptr unk_5717B, ax ;~ 2FE6:018E
cs=0x2fe6;eip=0x000191; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 102176 mov     word ptr unk_571E7, ax ;~ 2FE6:0191
cs=0x2fe6;eip=0x000194; 	X(PUSH(si));	// 102177 push    si ;~ 2FE6:0194
cs=0x2fe6;eip=0x000195; 	R(CALL(sub_3eab6,0));	// 102178 call    sub_3EAB6 ;~ 2FE6:0195
cs=0x2fe6;eip=0x000198; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 102179 mov     [bp+var_2], ax ;~ 2FE6:0198
cs=0x2fe6;eip=0x00019b; 	T(CMP(ax, 0x0FFFF));	// 102180 cmp     ax, 0FFFFh ;~ 2FE6:019B
cs=0x2fe6;eip=0x00019e; 	R(JNZ(loc_3e5ff));	// 102181 jnz     short loc_3E5FF ;~ 2FE6:019E
loc_3e5e0:
	// 10869 
cs=0x2fe6;eip=0x0001a0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 102185 mov     ax, [bp+var_A] ;~ 2FE6:01A0
cs=0x2fe6;eip=0x0001a3; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_8))));	// 102186 or      ax, [bp+var_8] ;~ 2FE6:01A3
cs=0x2fe6;eip=0x0001a6; 	R(JNZ(loc_3e5eb));	// 102187 jnz     short loc_3E5EB ;~ 2FE6:01A6
cs=0x2fe6;eip=0x0001a8; 	R(JMP(loc_3e78d));	// 102188 jmp     loc_3E78D ;~ 2FE6:01A8
loc_3e5eb:
	// 10870 
cs=0x2fe6;eip=0x0001ab; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 102192 cmp     [bp+arg_0], 0 ;~ 2FE6:01AB
cs=0x2fe6;eip=0x0001af; 	R(JNZ(loc_3e5f4));	// 102193 jnz     short loc_3E5F4 ;~ 2FE6:01AF
cs=0x2fe6;eip=0x0001b1; 	R(JMP(loc_3e785));	// 102194 jmp     loc_3E785 ;~ 2FE6:01B1
loc_3e5f4:
	// 10871 
cs=0x2fe6;eip=0x0001b4; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 102198 push    [bp+var_8] ;~ 2FE6:01B4
cs=0x2fe6;eip=0x0001b7; 	R(CALLF(sub_2397c,0));	// 102199 call    sub_2397C ;~ 2FE6:01B7
cs=0x2fe6;eip=0x0001bc; 	R(JMP(loc_3e78d));	// 102200 jmp     loc_3E78D ;~ 2FE6:01BC
loc_3e5ff:
	// 10872 
cs=0x2fe6;eip=0x0001bf; 	T(MOV(ax, 0x12));	// 102204 mov     ax, 12h ;~ 2FE6:01BF
cs=0x2fe6;eip=0x0001c2; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102205 mul     [bp+var_2] ;~ 2FE6:01C2
cs=0x2fe6;eip=0x0001c5; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 102206 add     ax, word ptr unk_571C6 ;~ 2FE6:01C5
cs=0x2fe6;eip=0x0001c9; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 102207 mov     dx, word ptr unk_571C8 ;~ 2FE6:01C9
cs=0x2fe6;eip=0x0001cd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 102208 mov     word ptr [bp+var_E], ax ;~ 2FE6:01CD
cs=0x2fe6;eip=0x0001d0; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 102209 mov     word ptr [bp+var_E+2], dx ;~ 2FE6:01D0
cs=0x2fe6;eip=0x0001d3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 102210 les     bx, [bp+var_E] ;~ 2FE6:01D3
cs=0x2fe6;eip=0x0001d6; 	T(CMP(*(raddr(es,bx+0x0D)), 1));	// 102211 cmp     byte ptr es:[bx+0Dh], 1 ;~ 2FE6:01D6
cs=0x2fe6;eip=0x0001db; 	R(JNZ(loc_3e64f));	// 102212 jnz     short loc_3E64F ;~ 2FE6:01DB
cs=0x2fe6;eip=0x0001dd; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102213 push    word ptr unk_571E3 ;~ 2FE6:01DD
cs=0x2fe6;eip=0x0001e1; 	T(SUB(ax, ax));	// 102214 sub     ax, ax ;~ 2FE6:01E1
cs=0x2fe6;eip=0x0001e3; 	X(PUSH(ax));	// 102215 push    ax ;~ 2FE6:01E3
cs=0x2fe6;eip=0x0001e4; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 102216 push    word ptr es:[bx+10h] ;~ 2FE6:01E4
cs=0x2fe6;eip=0x0001e8; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 102217 push    word ptr es:[bx+0Eh] ;~ 2FE6:01E8
cs=0x2fe6;eip=0x0001ec; 	R(CALLF(sub_30bca,0));	// 102218 call    sub_30BCA ;~ 2FE6:01EC
cs=0x2fe6;eip=0x0001f1; 	T(CMP(ax, 0x0FFFF));	// 102219 cmp     ax, 0FFFFh ;~ 2FE6:01F1
cs=0x2fe6;eip=0x0001f4; 	R(JZ(loc_3e5e0));	// 102220 jz      short loc_3E5E0 ;~ 2FE6:01F4
cs=0x2fe6;eip=0x0001f6; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102221 push    word ptr unk_571E3 ;~ 2FE6:01F6
cs=0x2fe6;eip=0x0001fa; 	T(ax = bp+var_6);	// 102222 lea     ax, [bp+var_6] ;~ 2FE6:01FA
cs=0x2fe6;eip=0x0001fd; 	X(PUSH(ss));	// 102223 push    ss ;~ 2FE6:01FD
cs=0x2fe6;eip=0x0001fe; 	X(PUSH(ax));	// 102224 push    ax ;~ 2FE6:01FE
cs=0x2fe6;eip=0x0001ff; 	T(MOV(ax, 4));	// 102225 mov     ax, 4 ;~ 2FE6:01FF
cs=0x2fe6;eip=0x000202; 	X(PUSH(ax));	// 102226 push    ax ;~ 2FE6:0202
cs=0x2fe6;eip=0x000203; 	R(CALLF(sub_30b8e,0));	// 102227 call    sub_30B8E ;~ 2FE6:0203
cs=0x2fe6;eip=0x000208; 	T(CMP(ax, 0x0FFFF));	// 102228 cmp     ax, 0FFFFh ;~ 2FE6:0208
cs=0x2fe6;eip=0x00020b; 	R(JNZ(loc_3e67c));	// 102229 jnz     short loc_3E67C ;~ 2FE6:020B
cs=0x2fe6;eip=0x00020d; 	R(JMP(loc_3e5e0));	// 102230 jmp     short loc_3E5E0 ;~ 2FE6:020D
loc_3e64f:
	// 10873 
cs=0x2fe6;eip=0x00020f; 	T(MOV(ax, 0x12));	// 102234 mov     ax, 12h ;~ 2FE6:020F
cs=0x2fe6;eip=0x000212; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102235 mul     [bp+var_2] ;~ 2FE6:0212
cs=0x2fe6;eip=0x000215; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 102236 add     ax, word ptr unk_571C6 ;~ 2FE6:0215
cs=0x2fe6;eip=0x000219; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 102237 mov     dx, word ptr unk_571C8 ;~ 2FE6:0219
cs=0x2fe6;eip=0x00021d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e))), ax));	// 102238 mov     word ptr [bp+var_E], ax ;~ 2FE6:021D
cs=0x2fe6;eip=0x000220; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_e +2))), dx));	// 102239 mov     word ptr [bp+var_E+2], dx ;~ 2FE6:0220
cs=0x2fe6;eip=0x000223; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_e))));	// 102240 les     bx, [bp+var_E] ;~ 2FE6:0223
cs=0x2fe6;eip=0x000226; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 102241 mov     ax, es:[bx+20h] ;~ 2FE6:0226
cs=0x2fe6;eip=0x00022a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 102242 mov     dx, es:[bx+22h] ;~ 2FE6:022A
cs=0x2fe6;eip=0x00022e; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0E))));	// 102243 sub     ax, es:[bx+0Eh] ;~ 2FE6:022E
cs=0x2fe6;eip=0x000232; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x10))));	// 102244 sbb     dx, es:[bx+10h] ;~ 2FE6:0232
cs=0x2fe6;eip=0x000236; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 102245 mov     [bp+var_6], ax ;~ 2FE6:0236
cs=0x2fe6;eip=0x000239; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 102246 mov     [bp+var_4], dx ;~ 2FE6:0239
loc_3e67c:
	// 10874 
cs=0x2fe6;eip=0x00023c; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 1));	// 102249 cmp     [bp+var_4], 1 ;~ 2FE6:023C
cs=0x2fe6;eip=0x000240; 	R(JC(loc_3e685));	// 102250 jb      short loc_3E685 ;~ 2FE6:0240
cs=0x2fe6;eip=0x000242; 	R(JMP(loc_3e5e0));	// 102251 jmp     loc_3E5E0 ;~ 2FE6:0242
loc_3e685:
	// 10875 
cs=0x2fe6;eip=0x000245; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 102255 mov     ax, [bp+var_6] ;~ 2FE6:0245
cs=0x2fe6;eip=0x000248; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 102256 mov     [di], ax ;~ 2FE6:0248
cs=0x2fe6;eip=0x00024a; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 102257 cmp     [bp+arg_0], 0 ;~ 2FE6:024A
cs=0x2fe6;eip=0x00024e; 	R(JZ(loc_3e6a5));	// 102258 jz      short loc_3E6A5 ;~ 2FE6:024E
cs=0x2fe6;eip=0x000250; 	X(PUSH(ax));	// 102259 push    ax ;~ 2FE6:0250
cs=0x2fe6;eip=0x000251; 	R(CALL(sub_3e4ae,0));	// 102260 call    sub_3E4AE ;~ 2FE6:0251
cs=0x2fe6;eip=0x000254; 	T(MOV(dx, ax));	// 102261 mov     dx, ax ;~ 2FE6:0254
cs=0x2fe6;eip=0x000256; 	T(SUB(ax, ax));	// 102262 sub     ax, ax ;~ 2FE6:0256
cs=0x2fe6;eip=0x000258; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 102263 mov     [bp+var_A], ax ;~ 2FE6:0258
cs=0x2fe6;eip=0x00025b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 102264 mov     [bp+var_8], dx ;~ 2FE6:025B
cs=0x2fe6;eip=0x00025e; 	T(CMP(dx, ax));	// 102265 cmp     dx, ax ;~ 2FE6:025E
cs=0x2fe6;eip=0x000260; 	R(JNZ(loc_3e6b8));	// 102266 jnz     short loc_3E6B8 ;~ 2FE6:0260
cs=0x2fe6;eip=0x000262; 	R(JMP(loc_3e5e0));	// 102267 jmp     loc_3E5E0 ;~ 2FE6:0262
loc_3e6a5:
	// 10876 
cs=0x2fe6;eip=0x000265; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 102271 push    [bp+var_6] ;~ 2FE6:0265
cs=0x2fe6;eip=0x000268; 	R(CALL(sub_3e4d1,0));	// 102272 call    sub_3E4D1 ;~ 2FE6:0268
cs=0x2fe6;eip=0x00026b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 102273 mov     [bp+var_A], ax ;~ 2FE6:026B
cs=0x2fe6;eip=0x00026e; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ds));	// 102274 mov     [bp+var_8], ds ;~ 2FE6:026E
cs=0x2fe6;eip=0x000271; 	T(OR(ax, ax));	// 102275 or      ax, ax ;~ 2FE6:0271
cs=0x2fe6;eip=0x000273; 	R(JNZ(loc_3e6b8));	// 102276 jnz     short loc_3E6B8 ;~ 2FE6:0273
cs=0x2fe6;eip=0x000275; 	R(JMP(loc_3e5e0));	// 102277 jmp     loc_3E5E0 ;~ 2FE6:0275
loc_3e6b8:
	// 10877 
cs=0x2fe6;eip=0x000278; 	T(MOV(ax, 0x12));	// 102282 mov     ax, 12h ;~ 2FE6:0278
cs=0x2fe6;eip=0x00027b; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102283 mul     [bp+var_2] ;~ 2FE6:027B
cs=0x2fe6;eip=0x00027e; 	T(MOV(bx, ax));	// 102284 mov     bx, ax ;~ 2FE6:027E
cs=0x2fe6;eip=0x000280; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 102285 add     bx, word ptr unk_571C6 ;~ 2FE6:0280
cs=0x2fe6;eip=0x000284; 	T(MOV(es, *(dw*)((&unk_571c8))));	// 102286 mov     es, word ptr unk_571C8 ;~ 2FE6:0284
cs=0x2fe6;eip=0x000288; 	T(CMP(*(raddr(es,bx+0x0D)), 1));	// 102287 cmp     byte ptr es:[bx+0Dh], 1 ;~ 2FE6:0288
cs=0x2fe6;eip=0x00028d; 	R(JNZ(loc_3e737));	// 102288 jnz     short loc_3E737 ;~ 2FE6:028D
cs=0x2fe6;eip=0x00028f; 	T(MOV(ax, 0x400));	// 102289 mov     ax, 400h ;~ 2FE6:028F
cs=0x2fe6;eip=0x000292; 	X(PUSH(ax));	// 102290 push    ax ;~ 2FE6:0292
cs=0x2fe6;eip=0x000293; 	R(CALL(sub_3e4ae,0));	// 102291 call    sub_3E4AE ;~ 2FE6:0293
cs=0x2fe6;eip=0x000296; 	T(MOV(dx, ax));	// 102292 mov     dx, ax ;~ 2FE6:0296
cs=0x2fe6;eip=0x000298; 	T(SUB(ax, ax));	// 102293 sub     ax, ax ;~ 2FE6:0298
cs=0x2fe6;eip=0x00029a; 	X(MOV(*(dw*)((&unk_57177)), ax));	// 102294 mov     word ptr unk_57177, ax ;~ 2FE6:029A
cs=0x2fe6;eip=0x00029d; 	X(MOV(*(dw*)((&unk_57179)), dx));	// 102295 mov     word ptr unk_57179, dx ;~ 2FE6:029D
cs=0x2fe6;eip=0x0002a1; 	T(MOV(ax, 0x1011));	// 102296 mov     ax, 1011h ;~ 2FE6:02A1
cs=0x2fe6;eip=0x0002a4; 	X(PUSH(ax));	// 102297 push    ax ;~ 2FE6:02A4
cs=0x2fe6;eip=0x0002a5; 	R(CALL(sub_3e4ae,0));	// 102298 call    sub_3E4AE ;~ 2FE6:02A5
cs=0x2fe6;eip=0x0002a8; 	T(MOV(dx, ax));	// 102299 mov     dx, ax ;~ 2FE6:02A8
cs=0x2fe6;eip=0x0002aa; 	T(SUB(ax, ax));	// 102300 sub     ax, ax ;~ 2FE6:02AA
cs=0x2fe6;eip=0x0002ac; 	X(MOV(*(dw*)((&unk_5717b)), ax));	// 102301 mov     word ptr unk_5717B, ax ;~ 2FE6:02AC
cs=0x2fe6;eip=0x0002af; 	X(MOV(*(dw*)((&unk_5717d)), dx));	// 102302 mov     word ptr unk_5717D, dx ;~ 2FE6:02AF
cs=0x2fe6;eip=0x0002b3; 	T(MOV(ax, *(dw*)((&unk_57177))));	// 102303 mov     ax, word ptr unk_57177 ;~ 2FE6:02B3
cs=0x2fe6;eip=0x0002b6; 	T(OR(ax, *(dw*)((&unk_57179))));	// 102304 or      ax, word ptr unk_57179 ;~ 2FE6:02B6
cs=0x2fe6;eip=0x0002ba; 	R(JNZ(loc_3e6ff));	// 102305 jnz     short loc_3E6FF ;~ 2FE6:02BA
cs=0x2fe6;eip=0x0002bc; 	R(JMP(loc_3e5e0));	// 102306 jmp     loc_3E5E0 ;~ 2FE6:02BC
loc_3e6ff:
	// 10878 
cs=0x2fe6;eip=0x0002bf; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 102310 mov     ax, word ptr unk_5717B ;~ 2FE6:02BF
cs=0x2fe6;eip=0x0002c2; 	T(OR(ax, dx));	// 102311 or      ax, dx ;~ 2FE6:02C2
cs=0x2fe6;eip=0x0002c4; 	R(JNZ(loc_3e709));	// 102312 jnz     short loc_3E709 ;~ 2FE6:02C4
cs=0x2fe6;eip=0x0002c6; 	R(JMP(loc_3e5e0));	// 102313 jmp     loc_3E5E0 ;~ 2FE6:02C6
loc_3e709:
	// 10879 
cs=0x2fe6;eip=0x0002c9; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102317 push    word ptr unk_571E3 ;~ 2FE6:02C9
cs=0x2fe6;eip=0x0002cd; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 102318 push    [bp+var_4] ;~ 2FE6:02CD
cs=0x2fe6;eip=0x0002d0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 102319 push    [bp+var_6] ;~ 2FE6:02D0
cs=0x2fe6;eip=0x0002d3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 102320 push    [bp+var_8] ;~ 2FE6:02D3
cs=0x2fe6;eip=0x0002d6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 102321 push    [bp+var_A] ;~ 2FE6:02D6
cs=0x2fe6;eip=0x0002d9; 	R(CALL(seg031_proc,m2c::kloc_3f295));	// 102322 call    loc_3F295 ;~ 2FE6:02D9
cs=0x2fe6;eip=0x0002dc; 	T(OR(al, al));	// 102323 or      al, al ;~ 2FE6:02DC
cs=0x2fe6;eip=0x0002de; 	R(JNZ(loc_3e723));	// 102324 jnz     short loc_3E723 ;~ 2FE6:02DE
cs=0x2fe6;eip=0x0002e0; 	R(JMP(loc_3e5e0));	// 102325 jmp     loc_3E5E0 ;~ 2FE6:02E0
loc_3e723:
	// 10880 
cs=0x2fe6;eip=0x0002e3; 	X(PUSH(*(dw*)((&unk_57179))));	// 102329 push    word ptr unk_57179 ;~ 2FE6:02E3
cs=0x2fe6;eip=0x0002e7; 	R(CALLF(sub_2397c,0));	// 102330 call    sub_2397C ;~ 2FE6:02E7
cs=0x2fe6;eip=0x0002ec; 	X(PUSH(*(dw*)((&unk_5717d))));	// 102331 push    word ptr unk_5717D ;~ 2FE6:02EC
cs=0x2fe6;eip=0x0002f0; 	R(CALLF(sub_2397c,0));	// 102332 call    sub_2397C ;~ 2FE6:02F0
cs=0x2fe6;eip=0x0002f5; 	R(JMP(loc_3e77d));	// 102333 jmp     short loc_3E77D ;~ 2FE6:02F5
loc_3e737:
	// 10881 
cs=0x2fe6;eip=0x0002f7; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102337 push    word ptr unk_571E3 ;~ 2FE6:02F7
cs=0x2fe6;eip=0x0002fb; 	T(SUB(ax, ax));	// 102338 sub     ax, ax ;~ 2FE6:02FB
cs=0x2fe6;eip=0x0002fd; 	X(PUSH(ax));	// 102339 push    ax ;~ 2FE6:02FD
cs=0x2fe6;eip=0x0002fe; 	T(MOV(ax, 0x12));	// 102340 mov     ax, 12h ;~ 2FE6:02FE
cs=0x2fe6;eip=0x000301; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102341 mul     [bp+var_2] ;~ 2FE6:0301
cs=0x2fe6;eip=0x000304; 	T(MOV(bx, ax));	// 102342 mov     bx, ax ;~ 2FE6:0304
cs=0x2fe6;eip=0x000306; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 102343 add     bx, word ptr unk_571C6 ;~ 2FE6:0306
cs=0x2fe6;eip=0x00030a; 	T(MOV(es, *(dw*)((&unk_571c8))));	// 102344 mov     es, word ptr unk_571C8 ;~ 2FE6:030A
cs=0x2fe6;eip=0x00030e; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 102345 push    word ptr es:[bx+10h] ;~ 2FE6:030E
cs=0x2fe6;eip=0x000312; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 102346 push    word ptr es:[bx+0Eh] ;~ 2FE6:0312
cs=0x2fe6;eip=0x000316; 	R(CALLF(sub_30bca,0));	// 102347 call    sub_30BCA ;~ 2FE6:0316
cs=0x2fe6;eip=0x00031b; 	T(CMP(ax, 0x0FFFF));	// 102348 cmp     ax, 0FFFFh ;~ 2FE6:031B
cs=0x2fe6;eip=0x00031e; 	R(JNZ(loc_3e763));	// 102349 jnz     short loc_3E763 ;~ 2FE6:031E
cs=0x2fe6;eip=0x000320; 	R(JMP(loc_3e5e0));	// 102350 jmp     loc_3E5E0 ;~ 2FE6:0320
loc_3e763:
	// 10882 
cs=0x2fe6;eip=0x000323; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102354 push    word ptr unk_571E3 ;~ 2FE6:0323
cs=0x2fe6;eip=0x000327; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 102355 push    [bp+var_8] ;~ 2FE6:0327
cs=0x2fe6;eip=0x00032a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 102356 push    [bp+var_A] ;~ 2FE6:032A
cs=0x2fe6;eip=0x00032d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 102357 push    [bp+var_6] ;~ 2FE6:032D
cs=0x2fe6;eip=0x000330; 	R(CALLF(sub_30b8e,0));	// 102358 call    sub_30B8E ;~ 2FE6:0330
cs=0x2fe6;eip=0x000335; 	T(CMP(ax, 0x0FFFF));	// 102359 cmp     ax, 0FFFFh ;~ 2FE6:0335
cs=0x2fe6;eip=0x000338; 	R(JNZ(loc_3e77d));	// 102360 jnz     short loc_3E77D ;~ 2FE6:0338
cs=0x2fe6;eip=0x00033a; 	R(JMP(loc_3e5e0));	// 102361 jmp     loc_3E5E0 ;~ 2FE6:033A
loc_3e77d:
	// 10883 
cs=0x2fe6;eip=0x00033d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 102366 mov     ax, [bp+var_A] ;~ 2FE6:033D
cs=0x2fe6;eip=0x000340; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 102367 mov     dx, [bp+var_8] ;~ 2FE6:0340
cs=0x2fe6;eip=0x000343; 	R(JMP(loc_3e7cb));	// 102368 jmp     short loc_3E7CB ;~ 2FE6:0343
loc_3e785:
	// 10884 
cs=0x2fe6;eip=0x000345; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 102372 push    [bp+var_A] ;~ 2FE6:0345
cs=0x2fe6;eip=0x000348; 	R(CALLF(sub_23a33,0));	// 102373 call    sub_23A33 ;~ 2FE6:0348
loc_3e78d:
	// 10885 
cs=0x2fe6;eip=0x00034d; 	T(MOV(ax, 0x12));	// 102377 mov     ax, 12h ;~ 2FE6:034D
cs=0x2fe6;eip=0x000350; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102378 mul     [bp+var_2] ;~ 2FE6:0350
cs=0x2fe6;eip=0x000353; 	T(MOV(bx, ax));	// 102379 mov     bx, ax ;~ 2FE6:0353
cs=0x2fe6;eip=0x000355; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 102380 add     bx, word ptr unk_571C6 ;~ 2FE6:0355
cs=0x2fe6;eip=0x000359; 	T(MOV(es, *(dw*)((&unk_571c8))));	// 102381 mov     es, word ptr unk_571C8 ;~ 2FE6:0359
cs=0x2fe6;eip=0x00035d; 	T(CMP(*(raddr(es,bx+0x0D)), 1));	// 102382 cmp     byte ptr es:[bx+0Dh], 1 ;~ 2FE6:035D
cs=0x2fe6;eip=0x000362; 	R(JNZ(loc_3e7c8));	// 102383 jnz     short loc_3E7C8 ;~ 2FE6:0362
cs=0x2fe6;eip=0x000364; 	T(MOV(ax, *(dw*)((&unk_57177))));	// 102384 mov     ax, word ptr unk_57177 ;~ 2FE6:0364
cs=0x2fe6;eip=0x000367; 	T(OR(ax, *(dw*)((&unk_57179))));	// 102385 or      ax, word ptr unk_57179 ;~ 2FE6:0367
cs=0x2fe6;eip=0x00036b; 	R(JZ(loc_3e7b6));	// 102386 jz      short loc_3E7B6 ;~ 2FE6:036B
cs=0x2fe6;eip=0x00036d; 	X(PUSH(*(dw*)((&unk_57179))));	// 102387 push    word ptr unk_57179 ;~ 2FE6:036D
cs=0x2fe6;eip=0x000371; 	R(CALLF(sub_2397c,0));	// 102388 call    sub_2397C ;~ 2FE6:0371
loc_3e7b6:
	// 10886 
cs=0x2fe6;eip=0x000376; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 102391 mov     ax, word ptr unk_5717B ;~ 2FE6:0376
cs=0x2fe6;eip=0x000379; 	T(OR(ax, *(dw*)((&unk_5717d))));	// 102392 or      ax, word ptr unk_5717D ;~ 2FE6:0379
cs=0x2fe6;eip=0x00037d; 	R(JZ(loc_3e7c8));	// 102393 jz      short loc_3E7C8 ;~ 2FE6:037D
cs=0x2fe6;eip=0x00037f; 	X(PUSH(*(dw*)((&unk_5717d))));	// 102394 push    word ptr unk_5717D ;~ 2FE6:037F
cs=0x2fe6;eip=0x000383; 	R(CALLF(sub_2397c,0));	// 102395 call    sub_2397C ;~ 2FE6:0383
loc_3e7c8:
	// 10887 
cs=0x2fe6;eip=0x000388; 	T(SUB(ax, ax));	// 102399 sub     ax, ax ;~ 2FE6:0388
cs=0x2fe6;eip=0x00038a; 	T(CWD);	// 102400 cwd ;~ 2FE6:038A
loc_3e7cb:
	// 10888 
cs=0x2fe6;eip=0x00038b; 	X(POP(si));	// 102403 pop     si ;~ 2FE6:038B
cs=0x2fe6;eip=0x00038c; 	X(POP(di));	// 102404 pop     di ;~ 2FE6:038C
cs=0x2fe6;eip=0x00038d; 	T(MOV(sp, bp));	// 102405 mov     sp, bp ;~ 2FE6:038D
cs=0x2fe6;eip=0x00038f; 	X(POP(bp));	// 102406 pop     bp ;~ 2FE6:038F
cs=0x2fe6;eip=0x000390; 	R(RETN(6));	// 102407 retn    6 ;~ 2FE6:0390
sub_3e7d3:
	// 102415 
#undef var_1a
#define var_1a -0x1A
	// 102418 var_1A          = word ptr -1Ah ;~ 2FE6:0393
#undef var_18
#define var_18 -0x18
	// 102419 var_18          = word ptr -18h ;~ 2FE6:0393
#undef var_16
#define var_16 -0x16
	// 102420 var_16          = word ptr -16h ;~ 2FE6:0393
#undef var_14
#define var_14 -0x14
	// 102421 var_14          = word ptr -14h ;~ 2FE6:0393
#undef var_12
#define var_12 -0x12
	// 102422 var_12          = word ptr -12h ;~ 2FE6:0393
#undef var_10
#define var_10 -0x10
	// 102423 var_10          = word ptr -10h ;~ 2FE6:0393
#undef var_e
#define var_e -0x0E
	// 102424 var_E           = word ptr -0Eh ;~ 2FE6:0393
#undef var_c
#define var_c -0x0C
	// 102425 var_C           = byte ptr -0Ch ;~ 2FE6:0393
#undef var_8
#define var_8 -8
	// 102426 var_8           = byte ptr -8 ;~ 2FE6:0393
#undef var_6
#define var_6 -6
	// 102427 var_6           = word ptr -6 ;~ 2FE6:0393
#undef var_4
#define var_4 -4
	// 102428 var_4           = word ptr -4 ;~ 2FE6:0393
#undef var_2
#define var_2 -2
	// 102429 var_2           = word ptr -2 ;~ 2FE6:0393
#undef arg_0
#define arg_0 6
	// 102430 arg_0           = word ptr  6 ;~ 2FE6:0393
#undef arg_2
#define arg_2 8
	// 102431 arg_2           = word ptr  8 ;~ 2FE6:0393
cs=0x2fe6;eip=0x000393; 	X(PUSH(bp));	// 102433 push    bp ;~ 2FE6:0393
cs=0x2fe6;eip=0x000394; 	T(MOV(bp, sp));	// 102434 mov     bp, sp ;~ 2FE6:0394
cs=0x2fe6;eip=0x000396; 	T(SUB(sp, 0x1A));	// 102435 sub     sp, 1Ah ;~ 2FE6:0396
cs=0x2fe6;eip=0x000399; 	X(PUSH(di));	// 102436 push    di ;~ 2FE6:0399
cs=0x2fe6;eip=0x00039a; 	X(PUSH(si));	// 102437 push    si ;~ 2FE6:039A
cs=0x2fe6;eip=0x00039b; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 102438 mov     si, [bp+arg_2] ;~ 2FE6:039B
cs=0x2fe6;eip=0x00039e; 	T(MOV(di, *(dw*)(raddr(ss,bp+arg_0))));	// 102439 mov     di, [bp+arg_0] ;~ 2FE6:039E
cs=0x2fe6;eip=0x0003a1; 	T(SUB(ax, ax));	// 102440 sub     ax, ax ;~ 2FE6:03A1
cs=0x2fe6;eip=0x0003a3; 	X(MOV(*(dw*)((&unk_57179)), ax));	// 102441 mov     word ptr unk_57179, ax ;~ 2FE6:03A3
cs=0x2fe6;eip=0x0003a6; 	X(MOV(*(dw*)((&unk_57177)), ax));	// 102442 mov     word ptr unk_57177, ax ;~ 2FE6:03A6
cs=0x2fe6;eip=0x0003a9; 	X(MOV(*(dw*)((&unk_5717d)), ax));	// 102443 mov     word ptr unk_5717D, ax ;~ 2FE6:03A9
cs=0x2fe6;eip=0x0003ac; 	X(MOV(*(dw*)((&unk_5717b)), ax));	// 102444 mov     word ptr unk_5717B, ax ;~ 2FE6:03AC
cs=0x2fe6;eip=0x0003af; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 102445 mov     word ptr unk_571E7, ax ;~ 2FE6:03AF
cs=0x2fe6;eip=0x0003b2; 	T(CMP(*(dw*)((&unk_571e3)), ax));	// 102446 cmp     word ptr unk_571E3, ax ;~ 2FE6:03B2
cs=0x2fe6;eip=0x0003b6; 	R(JZ(loc_3e7fc));	// 102447 jz      short loc_3E7FC ;~ 2FE6:03B6
cs=0x2fe6;eip=0x0003b8; 	X(PUSH(cs));	// 102448 push    cs ;~ 2FE6:03B8
cs=0x2fe6;eip=0x0003b9; 	R(CALL(sub_3ee5b,0));	// 102449 call    near ptr sub_3EE5B ;~ 2FE6:03B9
loc_3e7fc:
	// 10889 
cs=0x2fe6;eip=0x0003bc; 	X(PUSH(si));	// 102452 push    si ;~ 2FE6:03BC
cs=0x2fe6;eip=0x0003bd; 	R(CALL(sub_3eab6,0));	// 102453 call    sub_3EAB6 ;~ 2FE6:03BD
cs=0x2fe6;eip=0x0003c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 102454 mov     [bp+var_2], ax ;~ 2FE6:03C0
cs=0x2fe6;eip=0x0003c3; 	T(CMP(ax, 0x0FFFF));	// 102455 cmp     ax, 0FFFFh ;~ 2FE6:03C3
cs=0x2fe6;eip=0x0003c6; 	R(JNZ(loc_3e831));	// 102456 jnz     short loc_3E831 ;~ 2FE6:03C6
loc_3e808:
	// 10890 
cs=0x2fe6;eip=0x0003c8; 	T(MOV(ax, *(dw*)((&unk_57177))));	// 102460 mov     ax, word ptr unk_57177 ;~ 2FE6:03C8
cs=0x2fe6;eip=0x0003cb; 	T(OR(ax, *(dw*)((&unk_57179))));	// 102461 or      ax, word ptr unk_57179 ;~ 2FE6:03CB
cs=0x2fe6;eip=0x0003cf; 	R(JZ(loc_3e81a));	// 102462 jz      short loc_3E81A ;~ 2FE6:03CF
cs=0x2fe6;eip=0x0003d1; 	X(PUSH(*(dw*)((&unk_57179))));	// 102463 push    word ptr unk_57179 ;~ 2FE6:03D1
cs=0x2fe6;eip=0x0003d5; 	R(CALLF(sub_2397c,0));	// 102464 call    sub_2397C ;~ 2FE6:03D5
loc_3e81a:
	// 10891 
cs=0x2fe6;eip=0x0003da; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 102467 mov     ax, word ptr unk_5717B ;~ 2FE6:03DA
cs=0x2fe6;eip=0x0003dd; 	T(OR(ax, *(dw*)((&unk_5717d))));	// 102468 or      ax, word ptr unk_5717D ;~ 2FE6:03DD
cs=0x2fe6;eip=0x0003e1; 	R(JZ(loc_3e82c));	// 102469 jz      short loc_3E82C ;~ 2FE6:03E1
cs=0x2fe6;eip=0x0003e3; 	X(PUSH(*(dw*)((&unk_5717d))));	// 102470 push    word ptr unk_5717D ;~ 2FE6:03E3
cs=0x2fe6;eip=0x0003e7; 	R(CALLF(sub_2397c,0));	// 102471 call    sub_2397C ;~ 2FE6:03E7
loc_3e82c:
	// 10892 
cs=0x2fe6;eip=0x0003ec; 	T(SUB(ax, ax));	// 102474 sub     ax, ax ;~ 2FE6:03EC
cs=0x2fe6;eip=0x0003ee; 	R(JMP(loc_3eaae));	// 102475 jmp     loc_3EAAE ;~ 2FE6:03EE
loc_3e831:
	// 10893 
cs=0x2fe6;eip=0x0003f1; 	T(MOV(ax, 0x12));	// 102479 mov     ax, 12h ;~ 2FE6:03F1
cs=0x2fe6;eip=0x0003f4; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102480 mul     [bp+var_2] ;~ 2FE6:03F4
cs=0x2fe6;eip=0x0003f7; 	T(MOV(bx, ax));	// 102481 mov     bx, ax ;~ 2FE6:03F7
cs=0x2fe6;eip=0x0003f9; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 102482 add     bx, word ptr unk_571C6 ;~ 2FE6:03F9
cs=0x2fe6;eip=0x0003fd; 	T(MOV(es, *(dw*)((&unk_571c8))));	// 102483 mov     es, word ptr unk_571C8 ;~ 2FE6:03FD
cs=0x2fe6;eip=0x000401; 	T(CMP(*(raddr(es,bx+0x0D)), 3));	// 102484 cmp     byte ptr es:[bx+0Dh], 3 ;~ 2FE6:0401
cs=0x2fe6;eip=0x000406; 	R(JNZ(loc_3e808));	// 102485 jnz     short loc_3E808 ;~ 2FE6:0406
cs=0x2fe6;eip=0x000408; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102486 push    word ptr unk_571E3 ;~ 2FE6:0408
cs=0x2fe6;eip=0x00040c; 	T(SUB(ax, ax));	// 102487 sub     ax, ax ;~ 2FE6:040C
cs=0x2fe6;eip=0x00040e; 	X(PUSH(ax));	// 102488 push    ax ;~ 2FE6:040E
cs=0x2fe6;eip=0x00040f; 	T(MOV(ax, 0x12));	// 102489 mov     ax, 12h ;~ 2FE6:040F
cs=0x2fe6;eip=0x000412; 	X(MUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 102490 mul     [bp+var_2] ;~ 2FE6:0412
cs=0x2fe6;eip=0x000415; 	T(MOV(bx, ax));	// 102491 mov     bx, ax ;~ 2FE6:0415
cs=0x2fe6;eip=0x000417; 	T(ADD(bx, *(dw*)((&unk_571c6))));	// 102492 add     bx, word ptr unk_571C6 ;~ 2FE6:0417
cs=0x2fe6;eip=0x00041b; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 102493 push    word ptr es:[bx+10h] ;~ 2FE6:041B
cs=0x2fe6;eip=0x00041f; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 102494 push    word ptr es:[bx+0Eh] ;~ 2FE6:041F
cs=0x2fe6;eip=0x000423; 	R(CALLF(sub_30bca,0));	// 102495 call    sub_30BCA ;~ 2FE6:0423
cs=0x2fe6;eip=0x000428; 	T(CMP(ax, 0x0FFFF));	// 102496 cmp     ax, 0FFFFh ;~ 2FE6:0428
cs=0x2fe6;eip=0x00042b; 	R(JZ(loc_3e808));	// 102497 jz      short loc_3E808 ;~ 2FE6:042B
cs=0x2fe6;eip=0x00042d; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102498 push    word ptr unk_571E3 ;~ 2FE6:042D
cs=0x2fe6;eip=0x000431; 	T(ax = bp+var_c);	// 102499 lea     ax, [bp+var_C] ;~ 2FE6:0431
cs=0x2fe6;eip=0x000434; 	X(PUSH(ss));	// 102500 push    ss ;~ 2FE6:0434
cs=0x2fe6;eip=0x000435; 	X(PUSH(ax));	// 102501 push    ax ;~ 2FE6:0435
cs=0x2fe6;eip=0x000436; 	T(MOV(ax, 4));	// 102502 mov     ax, 4 ;~ 2FE6:0436
cs=0x2fe6;eip=0x000439; 	X(PUSH(ax));	// 102503 push    ax ;~ 2FE6:0439
cs=0x2fe6;eip=0x00043a; 	R(CALLF(sub_30b8e,0));	// 102504 call    sub_30B8E ;~ 2FE6:043A
cs=0x2fe6;eip=0x00043f; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 102505 mov     [bp+var_18], ax ;~ 2FE6:043F
cs=0x2fe6;eip=0x000442; 	X(MOV(*(raddr(ss,bp+var_8)), 0));	// 102506 mov     [bp+var_8], 0 ;~ 2FE6:0442
cs=0x2fe6;eip=0x000446; 	T(ax = bp+var_c);	// 102507 lea     ax, [bp+var_C] ;~ 2FE6:0446
cs=0x2fe6;eip=0x000449; 	X(PUSH(ss));	// 102508 push    ss ;~ 2FE6:0449
cs=0x2fe6;eip=0x00044a; 	X(PUSH(ax));	// 102509 push    ax ;~ 2FE6:044A
cs=0x2fe6;eip=0x00044b; 	T(MOV(ax, 0x36F0));	// 102510 mov     ax, 36F0h ;~ 2FE6:044B
cs=0x2fe6;eip=0x00044e; 	X(PUSH(ds));	// 102511 push    ds ;~ 2FE6:044E
cs=0x2fe6;eip=0x00044f; 	X(PUSH(ax));	// 102512 push    ax ;~ 2FE6:044F
cs=0x2fe6;eip=0x000450; 	R(CALLF(sub_3f1c0,0));	// 102513 call    sub_3F1C0 ;~ 2FE6:0450
cs=0x2fe6;eip=0x000455; 	T(OR(ax, ax));	// 102514 or      ax, ax ;~ 2FE6:0455
cs=0x2fe6;eip=0x000457; 	R(JZ(loc_3e89c));	// 102515 jz      short loc_3E89C ;~ 2FE6:0457
cs=0x2fe6;eip=0x000459; 	R(JMP(loc_3e808));	// 102516 jmp     loc_3E808 ;~ 2FE6:0459
loc_3e89c:
	// 10894 
cs=0x2fe6;eip=0x00045c; 	T(CMP(*(dw*)(raddr(ss,bp+var_18)), 0x0FFFF));	// 102520 cmp     [bp+var_18], 0FFFFh ;~ 2FE6:045C
cs=0x2fe6;eip=0x000460; 	R(JNZ(loc_3e8a5));	// 102521 jnz     short loc_3E8A5 ;~ 2FE6:0460
cs=0x2fe6;eip=0x000462; 	R(JMP(loc_3e808));	// 102522 jmp     loc_3E808 ;~ 2FE6:0462
loc_3e8a5:
	// 10895 
cs=0x2fe6;eip=0x000465; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102526 push    word ptr unk_571E3 ;~ 2FE6:0465
cs=0x2fe6;eip=0x000469; 	T(ax = bp+var_16);	// 102527 lea     ax, [bp+var_16] ;~ 2FE6:0469
cs=0x2fe6;eip=0x00046c; 	X(PUSH(ss));	// 102528 push    ss ;~ 2FE6:046C
cs=0x2fe6;eip=0x00046d; 	X(PUSH(ax));	// 102529 push    ax ;~ 2FE6:046D
cs=0x2fe6;eip=0x00046e; 	T(MOV(ax, 2));	// 102530 mov     ax, 2 ;~ 2FE6:046E
cs=0x2fe6;eip=0x000471; 	X(PUSH(ax));	// 102531 push    ax ;~ 2FE6:0471
cs=0x2fe6;eip=0x000472; 	R(CALLF(sub_30b8e,0));	// 102532 call    sub_30B8E ;~ 2FE6:0472
cs=0x2fe6;eip=0x000477; 	T(CMP(ax, 0x0FFFF));	// 102533 cmp     ax, 0FFFFh ;~ 2FE6:0477
cs=0x2fe6;eip=0x00047a; 	R(JNZ(loc_3e8bf));	// 102534 jnz     short loc_3E8BF ;~ 2FE6:047A
cs=0x2fe6;eip=0x00047c; 	R(JMP(loc_3e808));	// 102535 jmp     loc_3E808 ;~ 2FE6:047C
loc_3e8bf:
	// 10896 
cs=0x2fe6;eip=0x00047f; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102539 push    word ptr unk_571E3 ;~ 2FE6:047F
cs=0x2fe6;eip=0x000483; 	T(ax = bp+var_4);	// 102540 lea     ax, [bp+var_4] ;~ 2FE6:0483
cs=0x2fe6;eip=0x000486; 	X(PUSH(ss));	// 102541 push    ss ;~ 2FE6:0486
cs=0x2fe6;eip=0x000487; 	X(PUSH(ax));	// 102542 push    ax ;~ 2FE6:0487
cs=0x2fe6;eip=0x000488; 	T(MOV(ax, 2));	// 102543 mov     ax, 2 ;~ 2FE6:0488
cs=0x2fe6;eip=0x00048b; 	X(PUSH(ax));	// 102544 push    ax ;~ 2FE6:048B
cs=0x2fe6;eip=0x00048c; 	R(CALLF(sub_30b8e,0));	// 102545 call    sub_30B8E ;~ 2FE6:048C
cs=0x2fe6;eip=0x000491; 	T(CMP(ax, 0x0FFFF));	// 102546 cmp     ax, 0FFFFh ;~ 2FE6:0491
cs=0x2fe6;eip=0x000494; 	R(JNZ(loc_3e8d9));	// 102547 jnz     short loc_3E8D9 ;~ 2FE6:0494
cs=0x2fe6;eip=0x000496; 	R(JMP(loc_3e808));	// 102548 jmp     loc_3E808 ;~ 2FE6:0496
loc_3e8d9:
	// 10897 
cs=0x2fe6;eip=0x000499; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102552 push    word ptr unk_571E3 ;~ 2FE6:0499
cs=0x2fe6;eip=0x00049d; 	T(ax = bp+var_1a);	// 102553 lea     ax, [bp+var_1A] ;~ 2FE6:049D
cs=0x2fe6;eip=0x0004a0; 	X(PUSH(ss));	// 102554 push    ss ;~ 2FE6:04A0
cs=0x2fe6;eip=0x0004a1; 	X(PUSH(ax));	// 102555 push    ax ;~ 2FE6:04A1
cs=0x2fe6;eip=0x0004a2; 	T(MOV(ax, 2));	// 102556 mov     ax, 2 ;~ 2FE6:04A2
cs=0x2fe6;eip=0x0004a5; 	X(PUSH(ax));	// 102557 push    ax ;~ 2FE6:04A5
cs=0x2fe6;eip=0x0004a6; 	R(CALLF(sub_30b8e,0));	// 102558 call    sub_30B8E ;~ 2FE6:04A6
cs=0x2fe6;eip=0x0004ab; 	T(CMP(ax, 0x0FFFF));	// 102559 cmp     ax, 0FFFFh ;~ 2FE6:04AB
cs=0x2fe6;eip=0x0004ae; 	R(JNZ(loc_3e8f3));	// 102560 jnz     short loc_3E8F3 ;~ 2FE6:04AE
cs=0x2fe6;eip=0x0004b0; 	R(JMP(loc_3e808));	// 102561 jmp     loc_3E808 ;~ 2FE6:04B0
loc_3e8f3:
	// 10898 
cs=0x2fe6;eip=0x0004b3; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102565 push    word ptr unk_571E3 ;~ 2FE6:04B3
cs=0x2fe6;eip=0x0004b7; 	T(ax = bp+var_10);	// 102566 lea     ax, [bp+var_10] ;~ 2FE6:04B7
cs=0x2fe6;eip=0x0004ba; 	X(PUSH(ss));	// 102567 push    ss ;~ 2FE6:04BA
cs=0x2fe6;eip=0x0004bb; 	X(PUSH(ax));	// 102568 push    ax ;~ 2FE6:04BB
cs=0x2fe6;eip=0x0004bc; 	T(MOV(ax, 2));	// 102569 mov     ax, 2 ;~ 2FE6:04BC
cs=0x2fe6;eip=0x0004bf; 	X(PUSH(ax));	// 102570 push    ax ;~ 2FE6:04BF
cs=0x2fe6;eip=0x0004c0; 	R(CALLF(sub_30b8e,0));	// 102571 call    sub_30B8E ;~ 2FE6:04C0
cs=0x2fe6;eip=0x0004c5; 	T(CMP(ax, 0x0FFFF));	// 102572 cmp     ax, 0FFFFh ;~ 2FE6:04C5
cs=0x2fe6;eip=0x0004c8; 	R(JNZ(loc_3e90d));	// 102573 jnz     short loc_3E90D ;~ 2FE6:04C8
cs=0x2fe6;eip=0x0004ca; 	R(JMP(loc_3e808));	// 102574 jmp     loc_3E808 ;~ 2FE6:04CA
loc_3e90d:
	// 10899 
cs=0x2fe6;eip=0x0004cd; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102578 push    word ptr unk_571E3 ;~ 2FE6:04CD
cs=0x2fe6;eip=0x0004d1; 	T(MOV(ax, 1));	// 102579 mov     ax, 1 ;~ 2FE6:04D1
cs=0x2fe6;eip=0x0004d4; 	X(PUSH(ax));	// 102580 push    ax ;~ 2FE6:04D4
cs=0x2fe6;eip=0x0004d5; 	T(MOV(ax, 4));	// 102581 mov     ax, 4 ;~ 2FE6:04D5
cs=0x2fe6;eip=0x0004d8; 	T(CWD);	// 102582 cwd ;~ 2FE6:04D8
cs=0x2fe6;eip=0x0004d9; 	X(PUSH(dx));	// 102583 push    dx ;~ 2FE6:04D9
cs=0x2fe6;eip=0x0004da; 	X(PUSH(ax));	// 102584 push    ax ;~ 2FE6:04DA
cs=0x2fe6;eip=0x0004db; 	R(CALLF(sub_30bca,0));	// 102585 call    sub_30BCA ;~ 2FE6:04DB
cs=0x2fe6;eip=0x0004e0; 	T(CMP(ax, 0x0FFFF));	// 102586 cmp     ax, 0FFFFh ;~ 2FE6:04E0
cs=0x2fe6;eip=0x0004e3; 	R(JNZ(loc_3e928));	// 102587 jnz     short loc_3E928 ;~ 2FE6:04E3
cs=0x2fe6;eip=0x0004e5; 	R(JMP(loc_3e808));	// 102588 jmp     loc_3E808 ;~ 2FE6:04E5
loc_3e928:
	// 10900 
cs=0x2fe6;eip=0x0004e8; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102592 push    word ptr unk_571E3 ;~ 2FE6:04E8
cs=0x2fe6;eip=0x0004ec; 	T(ax = bp+var_14);	// 102593 lea     ax, [bp+var_14] ;~ 2FE6:04EC
cs=0x2fe6;eip=0x0004ef; 	X(PUSH(ss));	// 102594 push    ss ;~ 2FE6:04EF
cs=0x2fe6;eip=0x0004f0; 	X(PUSH(ax));	// 102595 push    ax ;~ 2FE6:04F0
cs=0x2fe6;eip=0x0004f1; 	T(MOV(ax, 4));	// 102596 mov     ax, 4 ;~ 2FE6:04F1
cs=0x2fe6;eip=0x0004f4; 	X(PUSH(ax));	// 102597 push    ax ;~ 2FE6:04F4
cs=0x2fe6;eip=0x0004f5; 	R(CALLF(sub_30b8e,0));	// 102598 call    sub_30B8E ;~ 2FE6:04F5
cs=0x2fe6;eip=0x0004fa; 	T(CMP(ax, 0x0FFFF));	// 102599 cmp     ax, 0FFFFh ;~ 2FE6:04FA
cs=0x2fe6;eip=0x0004fd; 	R(JNZ(loc_3e942));	// 102600 jnz     short loc_3E942 ;~ 2FE6:04FD
cs=0x2fe6;eip=0x0004ff; 	R(JMP(loc_3e808));	// 102601 jmp     loc_3E808 ;~ 2FE6:04FF
loc_3e942:
	// 10901 
cs=0x2fe6;eip=0x000502; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), 1));	// 102605 cmp     [bp+var_12], 1 ;~ 2FE6:0502
cs=0x2fe6;eip=0x000506; 	R(JC(loc_3e94b));	// 102606 jb      short loc_3E94B ;~ 2FE6:0506
cs=0x2fe6;eip=0x000508; 	R(JMP(loc_3e808));	// 102607 jmp     loc_3E808 ;~ 2FE6:0508
loc_3e94b:
	// 10902 
cs=0x2fe6;eip=0x00050b; 	T(CMP(*(dw*)(raddr(ds,di+8)), 0));	// 102611 cmp     word ptr [di+8], 0 ;~ 2FE6:050B
cs=0x2fe6;eip=0x00050f; 	R(JNZ(loc_3e997));	// 102612 jnz     short loc_3E997 ;~ 2FE6:050F
cs=0x2fe6;eip=0x000511; 	X(PUSH(di));	// 102613 push    di ;~ 2FE6:0511
cs=0x2fe6;eip=0x000512; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 102614 push    [bp+var_4] ;~ 2FE6:0512
cs=0x2fe6;eip=0x000515; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 102615 push    [bp+var_10] ;~ 2FE6:0515
cs=0x2fe6;eip=0x000518; 	R(CALLF(sub_31695,0));	// 102616 call    sub_31695 ;~ 2FE6:0518
loc_3e95d:
	// 10903 
cs=0x2fe6;eip=0x00051d; 	T(MOV(ax, 0x400));	// 102619 mov     ax, 400h ;~ 2FE6:051D
cs=0x2fe6;eip=0x000520; 	X(PUSH(ax));	// 102620 push    ax ;~ 2FE6:0520
cs=0x2fe6;eip=0x000521; 	R(CALL(sub_3e4ae,0));	// 102621 call    sub_3E4AE ;~ 2FE6:0521
cs=0x2fe6;eip=0x000524; 	T(MOV(dx, ax));	// 102622 mov     dx, ax ;~ 2FE6:0524
cs=0x2fe6;eip=0x000526; 	T(SUB(ax, ax));	// 102623 sub     ax, ax ;~ 2FE6:0526
cs=0x2fe6;eip=0x000528; 	X(MOV(*(dw*)((&unk_57177)), ax));	// 102624 mov     word ptr unk_57177, ax ;~ 2FE6:0528
cs=0x2fe6;eip=0x00052b; 	X(MOV(*(dw*)((&unk_57179)), dx));	// 102625 mov     word ptr unk_57179, dx ;~ 2FE6:052B
cs=0x2fe6;eip=0x00052f; 	T(MOV(ax, 0x1011));	// 102626 mov     ax, 1011h ;~ 2FE6:052F
cs=0x2fe6;eip=0x000532; 	X(PUSH(ax));	// 102627 push    ax ;~ 2FE6:0532
cs=0x2fe6;eip=0x000533; 	R(CALL(sub_3e4ae,0));	// 102628 call    sub_3E4AE ;~ 2FE6:0533
cs=0x2fe6;eip=0x000536; 	T(MOV(dx, ax));	// 102629 mov     dx, ax ;~ 2FE6:0536
cs=0x2fe6;eip=0x000538; 	T(SUB(ax, ax));	// 102630 sub     ax, ax ;~ 2FE6:0538
cs=0x2fe6;eip=0x00053a; 	X(MOV(*(dw*)((&unk_5717b)), ax));	// 102631 mov     word ptr unk_5717B, ax ;~ 2FE6:053A
cs=0x2fe6;eip=0x00053d; 	X(MOV(*(dw*)((&unk_5717d)), dx));	// 102632 mov     word ptr unk_5717D, dx ;~ 2FE6:053D
cs=0x2fe6;eip=0x000541; 	T(MOV(ax, *(dw*)((&unk_57177))));	// 102633 mov     ax, word ptr unk_57177 ;~ 2FE6:0541
cs=0x2fe6;eip=0x000544; 	T(OR(ax, *(dw*)((&unk_57179))));	// 102634 or      ax, word ptr unk_57179 ;~ 2FE6:0544
cs=0x2fe6;eip=0x000548; 	R(JNZ(loc_3e98d));	// 102635 jnz     short loc_3E98D ;~ 2FE6:0548
cs=0x2fe6;eip=0x00054a; 	R(JMP(loc_3e808));	// 102636 jmp     loc_3E808 ;~ 2FE6:054A
loc_3e98d:
	// 10904 
cs=0x2fe6;eip=0x00054d; 	T(MOV(ax, *(dw*)((&unk_5717b))));	// 102640 mov     ax, word ptr unk_5717B ;~ 2FE6:054D
cs=0x2fe6;eip=0x000550; 	T(OR(ax, dx));	// 102641 or      ax, dx ;~ 2FE6:0550
cs=0x2fe6;eip=0x000552; 	R(JNZ(loc_3e9ad));	// 102642 jnz     short loc_3E9AD ;~ 2FE6:0552
cs=0x2fe6;eip=0x000554; 	R(JMP(loc_3e808));	// 102643 jmp     loc_3E808 ;~ 2FE6:0554
loc_3e997:
	// 10905 
cs=0x2fe6;eip=0x000557; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 102647 mov     ax, [bp+var_4] ;~ 2FE6:0557
cs=0x2fe6;eip=0x00055a; 	T(CMP(*(dw*)(raddr(ds,di+2)), ax));	// 102648 cmp     [di+2], ax ;~ 2FE6:055A
cs=0x2fe6;eip=0x00055d; 	R(JZ(loc_3e9a2));	// 102649 jz      short loc_3E9A2 ;~ 2FE6:055D
cs=0x2fe6;eip=0x00055f; 	R(JMP(loc_3e808));	// 102650 jmp     loc_3E808 ;~ 2FE6:055F
loc_3e9a2:
	// 10906 
cs=0x2fe6;eip=0x000562; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 102654 mov     ax, [bp+var_10] ;~ 2FE6:0562
cs=0x2fe6;eip=0x000565; 	T(CMP(*(dw*)(raddr(ds,di+4)), ax));	// 102655 cmp     [di+4], ax ;~ 2FE6:0565
cs=0x2fe6;eip=0x000568; 	R(JZ(loc_3e95d));	// 102656 jz      short loc_3E95D ;~ 2FE6:0568
cs=0x2fe6;eip=0x00056a; 	R(JMP(loc_3e808));	// 102657 jmp     loc_3E808 ;~ 2FE6:056A
loc_3e9ad:
	// 10907 
cs=0x2fe6;eip=0x00056d; 	T(CMP(*(dw*)((&unk_47b2e)), 0));	// 102661 cmp     word ptr unk_47B2E, 0 ;~ 2FE6:056D
cs=0x2fe6;eip=0x000572; 	R(JNZ(loc_3e9e1));	// 102662 jnz     short loc_3E9E1 ;~ 2FE6:0572
cs=0x2fe6;eip=0x000574; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 4));	// 102663 cmp     [bp+var_16], 4 ;~ 2FE6:0574
cs=0x2fe6;eip=0x000578; 	R(JNZ(loc_3e9c3));	// 102664 jnz     short loc_3E9C3 ;~ 2FE6:0578
cs=0x2fe6;eip=0x00057a; 	T(MOV(ax, 0x135C));	// 102665 mov     ax, 135Ch ;~ 2FE6:057A
cs=0x2fe6;eip=0x00057d; 	T(MOV(dx, seg_offset(seg031)));	// 102666 mov     dx, seg seg031 ;~ 2FE6:057D
cs=0x2fe6;eip=0x000580; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 102667 mov     [bp+var_E], ax ;~ 2FE6:0580
loc_3e9c3:
	// 10908 
cs=0x2fe6;eip=0x000583; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 102670 cmp     [bp+var_16], 10h ;~ 2FE6:0583
cs=0x2fe6;eip=0x000587; 	R(JNZ(loc_3e9d2));	// 102671 jnz     short loc_3E9D2 ;~ 2FE6:0587
cs=0x2fe6;eip=0x000589; 	T(MOV(ax, 0x1221));	// 102672 mov     ax, 1221h ;~ 2FE6:0589
cs=0x2fe6;eip=0x00058c; 	T(MOV(dx, seg_offset(seg031)));	// 102673 mov     dx, seg seg031 ;~ 2FE6:058C
cs=0x2fe6;eip=0x00058f; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 102674 mov     [bp+var_E], ax ;~ 2FE6:058F
loc_3e9d2:
	// 10909 
cs=0x2fe6;eip=0x000592; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 4));	// 102677 cmp     [bp+var_16], 4 ;~ 2FE6:0592
cs=0x2fe6;eip=0x000596; 	R(JZ(loc_3e9e1));	// 102678 jz      short loc_3E9E1 ;~ 2FE6:0596
cs=0x2fe6;eip=0x000598; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 102679 cmp     [bp+var_16], 10h ;~ 2FE6:0598
cs=0x2fe6;eip=0x00059c; 	R(JZ(loc_3e9e1));	// 102680 jz      short loc_3E9E1 ;~ 2FE6:059C
cs=0x2fe6;eip=0x00059e; 	R(JMP(loc_3e808));	// 102681 jmp     loc_3E808 ;~ 2FE6:059E
loc_3e9e1:
	// 10910 
cs=0x2fe6;eip=0x0005a1; 	T(CMP(*(dw*)((&unk_47b2e)), 1));	// 102686 cmp     word ptr unk_47B2E, 1 ;~ 2FE6:05A1
cs=0x2fe6;eip=0x0005a6; 	R(JZ(loc_3e9f6));	// 102687 jz      short loc_3E9F6 ;~ 2FE6:05A6
cs=0x2fe6;eip=0x0005a8; 	T(CMP(*(dw*)((&unk_47b2e)), 2));	// 102688 cmp     word ptr unk_47B2E, 2 ;~ 2FE6:05A8
cs=0x2fe6;eip=0x0005ad; 	R(JZ(loc_3e9f6));	// 102689 jz      short loc_3E9F6 ;~ 2FE6:05AD
cs=0x2fe6;eip=0x0005af; 	T(CMP(*(dw*)((&unk_47b2e)), 3));	// 102690 cmp     word ptr unk_47B2E, 3 ;~ 2FE6:05AF
cs=0x2fe6;eip=0x0005b4; 	R(JNZ(loc_3ea08));	// 102691 jnz     short loc_3EA08 ;~ 2FE6:05B4
loc_3e9f6:
	// 10911 
cs=0x2fe6;eip=0x0005b6; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 102695 cmp     [bp+var_16], 10h ;~ 2FE6:05B6
cs=0x2fe6;eip=0x0005ba; 	R(JZ(loc_3e9ff));	// 102696 jz      short loc_3E9FF ;~ 2FE6:05BA
cs=0x2fe6;eip=0x0005bc; 	R(JMP(loc_3e808));	// 102697 jmp     loc_3E808 ;~ 2FE6:05BC
loc_3e9ff:
	// 10912 
cs=0x2fe6;eip=0x0005bf; 	T(MOV(ax, 0x1172));	// 102701 mov     ax, 1172h ;~ 2FE6:05BF
cs=0x2fe6;eip=0x0005c2; 	T(MOV(dx, seg_offset(seg031)));	// 102702 mov     dx, seg seg031 ;~ 2FE6:05C2
cs=0x2fe6;eip=0x0005c5; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 102703 mov     [bp+var_E], ax ;~ 2FE6:05C5
loc_3ea08:
	// 10913 
cs=0x2fe6;eip=0x0005c8; 	T(CMP(*(dw*)((&unk_47b2e)), 5));	// 102706 cmp     word ptr unk_47B2E, 5 ;~ 2FE6:05C8
cs=0x2fe6;eip=0x0005cd; 	R(JNZ(loc_3ea21));	// 102707 jnz     short loc_3EA21 ;~ 2FE6:05CD
cs=0x2fe6;eip=0x0005cf; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 102708 cmp     [bp+var_16], 10h ;~ 2FE6:05CF
cs=0x2fe6;eip=0x0005d3; 	R(JZ(loc_3ea18));	// 102709 jz      short loc_3EA18 ;~ 2FE6:05D3
cs=0x2fe6;eip=0x0005d5; 	R(JMP(loc_3e808));	// 102710 jmp     loc_3E808 ;~ 2FE6:05D5
loc_3ea18:
	// 10914 
cs=0x2fe6;eip=0x0005d8; 	T(MOV(ax, 0x135C));	// 102714 mov     ax, 135Ch ;~ 2FE6:05D8
cs=0x2fe6;eip=0x0005db; 	T(MOV(dx, seg_offset(seg031)));	// 102715 mov     dx, seg seg031 ;~ 2FE6:05DB
cs=0x2fe6;eip=0x0005de; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 102716 mov     [bp+var_E], ax ;~ 2FE6:05DE
loc_3ea21:
	// 10915 
cs=0x2fe6;eip=0x0005e1; 	T(CMP(*(dw*)((&unk_47b2e)), 4));	// 102719 cmp     word ptr unk_47B2E, 4 ;~ 2FE6:05E1
cs=0x2fe6;eip=0x0005e6; 	R(JNZ(loc_3ea57));	// 102720 jnz     short loc_3EA57 ;~ 2FE6:05E6
cs=0x2fe6;eip=0x0005e8; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x100));	// 102721 cmp     [bp+var_16], 100h ;~ 2FE6:05E8
cs=0x2fe6;eip=0x0005ed; 	R(JNZ(loc_3ea38));	// 102722 jnz     short loc_3EA38 ;~ 2FE6:05ED
cs=0x2fe6;eip=0x0005ef; 	T(MOV(ax, 0x135C));	// 102723 mov     ax, 135Ch ;~ 2FE6:05EF
cs=0x2fe6;eip=0x0005f2; 	T(MOV(dx, seg_offset(seg031)));	// 102724 mov     dx, seg seg031 ;~ 2FE6:05F2
cs=0x2fe6;eip=0x0005f5; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 102725 mov     [bp+var_E], ax ;~ 2FE6:05F5
loc_3ea38:
	// 10916 
cs=0x2fe6;eip=0x0005f8; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 102728 cmp     [bp+var_16], 10h ;~ 2FE6:05F8
cs=0x2fe6;eip=0x0005fc; 	R(JNZ(loc_3ea47));	// 102729 jnz     short loc_3EA47 ;~ 2FE6:05FC
cs=0x2fe6;eip=0x0005fe; 	T(MOV(ax, 0x130F));	// 102730 mov     ax, 130Fh ;~ 2FE6:05FE
cs=0x2fe6;eip=0x000601; 	T(MOV(dx, seg_offset(seg031)));	// 102731 mov     dx, seg seg031 ;~ 2FE6:0601
cs=0x2fe6;eip=0x000604; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 102732 mov     [bp+var_E], ax ;~ 2FE6:0604
loc_3ea47:
	// 10917 
cs=0x2fe6;eip=0x000607; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x10));	// 102735 cmp     [bp+var_16], 10h ;~ 2FE6:0607
cs=0x2fe6;eip=0x00060b; 	R(JZ(loc_3ea57));	// 102736 jz      short loc_3EA57 ;~ 2FE6:060B
cs=0x2fe6;eip=0x00060d; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0x100));	// 102737 cmp     [bp+var_16], 100h ;~ 2FE6:060D
cs=0x2fe6;eip=0x000612; 	R(JZ(loc_3ea57));	// 102738 jz      short loc_3EA57 ;~ 2FE6:0612
cs=0x2fe6;eip=0x000614; 	R(JMP(loc_3e808));	// 102739 jmp     loc_3E808 ;~ 2FE6:0614
loc_3ea57:
	// 10918 
cs=0x2fe6;eip=0x000617; 	T(MOV(ax, *(dw*)(raddr(ds,di+6))));	// 102744 mov     ax, [di+6] ;~ 2FE6:0617
cs=0x2fe6;eip=0x00061a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 102745 mov     [bp+var_6], ax ;~ 2FE6:061A
cs=0x2fe6;eip=0x00061d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 102746 mov     ax, [bp+var_1A] ;~ 2FE6:061D
cs=0x2fe6;eip=0x000620; 	T(SHL(ax, 1));	// 102747 shl     ax, 1 ;~ 2FE6:0620
cs=0x2fe6;eip=0x000622; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 102748 mov     [di+6], ax ;~ 2FE6:0622
cs=0x2fe6;eip=0x000625; 	X(PUSH(*(dw*)((&unk_571e3))));	// 102749 push    word ptr unk_571E3 ;~ 2FE6:0625
cs=0x2fe6;eip=0x000629; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 102750 push    [bp+var_12] ;~ 2FE6:0629
cs=0x2fe6;eip=0x00062c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_14))));	// 102751 push    [bp+var_14] ;~ 2FE6:062C
cs=0x2fe6;eip=0x00062f; 	X(PUSH(di));	// 102752 push    di ;~ 2FE6:062F
cs=0x2fe6;eip=0x000630; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 102753 push    [bp+var_E] ;~ 2FE6:0630
cs=0x2fe6;eip=0x000633; 	R(CALL(seg031_proc,m2c::kloc_3f405));	// 102754 call    loc_3F405 ;~ 2FE6:0633
cs=0x2fe6;eip=0x000636; 	T(OR(al, al));	// 102755 or      al, al ;~ 2FE6:0636
cs=0x2fe6;eip=0x000638; 	R(JNZ(loc_3ea7d));	// 102756 jnz     short loc_3EA7D ;~ 2FE6:0638
cs=0x2fe6;eip=0x00063a; 	R(JMP(loc_3e808));	// 102757 jmp     loc_3E808 ;~ 2FE6:063A
loc_3ea7d:
	// 10919 
cs=0x2fe6;eip=0x00063d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 102761 mov     ax, [bp+var_6] ;~ 2FE6:063D
cs=0x2fe6;eip=0x000640; 	X(MOV(*(dw*)(raddr(ds,di+6)), ax));	// 102762 mov     [di+6], ax ;~ 2FE6:0640
cs=0x2fe6;eip=0x000643; 	T(MOV(ax, 0x1172));	// 102763 mov     ax, 1172h ;~ 2FE6:0643
cs=0x2fe6;eip=0x000646; 	T(MOV(dx, seg_offset(seg031)));	// 102764 mov     dx, seg seg031 ;~ 2FE6:0646
cs=0x2fe6;eip=0x000649; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), ax));	// 102765 cmp     [bp+var_E], ax ;~ 2FE6:0649
cs=0x2fe6;eip=0x00064c; 	R(JNZ(loc_3ea99));	// 102766 jnz     short loc_3EA99 ;~ 2FE6:064C
cs=0x2fe6;eip=0x00064e; 	T(SUB(ax, ax));	// 102767 sub     ax, ax ;~ 2FE6:064E
cs=0x2fe6;eip=0x000650; 	X(PUSH(ax));	// 102768 push    ax ;~ 2FE6:0650
cs=0x2fe6;eip=0x000651; 	R(CALLF(sub_2064a,0));	// 102769 call    sub_2064A ;~ 2FE6:0651
cs=0x2fe6;eip=0x000656; 	T(ADD(sp, 2));	// 102770 add     sp, 2 ;~ 2FE6:0656
loc_3ea99:
	// 10920 
cs=0x2fe6;eip=0x000659; 	X(PUSH(*(dw*)((&unk_57179))));	// 102773 push    word ptr unk_57179 ;~ 2FE6:0659
cs=0x2fe6;eip=0x00065d; 	R(CALLF(sub_2397c,0));	// 102774 call    sub_2397C ;~ 2FE6:065D
cs=0x2fe6;eip=0x000662; 	X(PUSH(*(dw*)((&unk_5717d))));	// 102775 push    word ptr unk_5717D ;~ 2FE6:0662
cs=0x2fe6;eip=0x000666; 	R(CALLF(sub_2397c,0));	// 102776 call    sub_2397C ;~ 2FE6:0666
cs=0x2fe6;eip=0x00066b; 	T(MOV(ax, 1));	// 102777 mov     ax, 1 ;~ 2FE6:066B
loc_3eaae:
	// 10921 
cs=0x2fe6;eip=0x00066e; 	X(POP(si));	// 102780 pop     si ;~ 2FE6:066E
cs=0x2fe6;eip=0x00066f; 	X(POP(di));	// 102781 pop     di ;~ 2FE6:066F
cs=0x2fe6;eip=0x000670; 	T(MOV(sp, bp));	// 102782 mov     sp, bp ;~ 2FE6:0670
cs=0x2fe6;eip=0x000672; 	X(POP(bp));	// 102783 pop     bp ;~ 2FE6:0672
cs=0x2fe6;eip=0x000673; 	R(RETF(4));	// 102784 retf    4 ;~ 2FE6:0673
sub_3eab6:
	// 102792 
#undef var_a
#define var_a -0x0A
	// 102795 var_A           = word ptr -0Ah ;~ 2FE6:0676
#undef var_8
#define var_8 -8
	// 102796 var_8           = dword ptr -8 ;~ 2FE6:0676
#undef arg_0
#define arg_0 4
	// 102797 arg_0           = word ptr  4 ;~ 2FE6:0676
cs=0x2fe6;eip=0x000676; 	X(PUSH(bp));	// 102799 push    bp ;~ 2FE6:0676
cs=0x2fe6;eip=0x000677; 	T(MOV(bp, sp));	// 102800 mov     bp, sp ;~ 2FE6:0677
cs=0x2fe6;eip=0x000679; 	T(SUB(sp, 0x0A));	// 102801 sub     sp, 0Ah ;~ 2FE6:0679
cs=0x2fe6;eip=0x00067c; 	X(PUSH(di));	// 102802 push    di ;~ 2FE6:067C
cs=0x2fe6;eip=0x00067d; 	X(PUSH(si));	// 102803 push    si ;~ 2FE6:067D
cs=0x2fe6;eip=0x00067e; 	T(SUB(si, si));	// 102804 sub     si, si ;~ 2FE6:067E
cs=0x2fe6;eip=0x000680; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 102805 cmp     word ptr unk_571D4, si ;~ 2FE6:0680
cs=0x2fe6;eip=0x000684; 	R(JZ(loc_3eaef));	// 102806 jz      short loc_3EAEF ;~ 2FE6:0684
cs=0x2fe6;eip=0x000686; 	T(MOV(ax, 0x1C));	// 102807 mov     ax, 1Ch ;~ 2FE6:0686
cs=0x2fe6;eip=0x000689; 	T(MUL1_2(si));	// 102808 mul     si ;~ 2FE6:0689
cs=0x2fe6;eip=0x00068b; 	T(ADD(ax, *(dw*)((&unk_571d0))));	// 102809 add     ax, word ptr unk_571D0 ;~ 2FE6:068B
cs=0x2fe6;eip=0x00068f; 	T(MOV(dx, *(dw*)((&unk_571d2))));	// 102810 mov     dx, word ptr unk_571D2 ;~ 2FE6:068F
cs=0x2fe6;eip=0x000693; 	T(ADD(ax, 0x1A));	// 102811 add     ax, 1Ah ;~ 2FE6:0693
cs=0x2fe6;eip=0x000696; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 102812 mov     word ptr [bp+var_8], ax ;~ 2FE6:0696
cs=0x2fe6;eip=0x000699; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 102813 mov     word ptr [bp+var_8+2], dx ;~ 2FE6:0699
cs=0x2fe6;eip=0x00069c; 	T(MOV(cx, *(dw*)((&unk_571d4))));	// 102814 mov     cx, word ptr unk_571D4 ;~ 2FE6:069C
cs=0x2fe6;eip=0x0006a0; 	T(ADD(si, cx));	// 102815 add     si, cx ;~ 2FE6:06A0
loc_3eae2:
	// 10922 
cs=0x2fe6;eip=0x0006a2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 102818 les     bx, [bp+var_8] ;~ 2FE6:06A2
cs=0x2fe6;eip=0x0006a5; 	X(MOV(*(raddr(es,bx)), 0));	// 102819 mov     byte ptr es:[bx], 0 ;~ 2FE6:06A5
cs=0x2fe6;eip=0x0006a9; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+var_8))), 0x1C));	// 102820 add     word ptr [bp+var_8], 1Ch ;~ 2FE6:06A9
cs=0x2fe6;eip=0x0006ad; 	R(LOOP(loc_3eae2));	// 102821 loop    loc_3EAE2 ;~ 2FE6:06AD
loc_3eaef:
	// 10923 
cs=0x2fe6;eip=0x0006af; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 102824 cmp     word ptr unk_571E3, 0 ;~ 2FE6:06AF
cs=0x2fe6;eip=0x0006b4; 	R(JZ(loc_3eb2e));	// 102825 jz      short loc_3EB2E ;~ 2FE6:06B4
cs=0x2fe6;eip=0x0006b6; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 102826 push    [bp+arg_0] ;~ 2FE6:06B6
cs=0x2fe6;eip=0x0006b9; 	R(CALL(sub_3ee91,0));	// 102827 call    sub_3EE91 ;~ 2FE6:06B9
cs=0x2fe6;eip=0x0006bc; 	T(MOV(di, ax));	// 102828 mov     di, ax ;~ 2FE6:06BC
cs=0x2fe6;eip=0x0006be; 	T(CMP(di, 0x0FFFF));	// 102829 cmp     di, 0FFFFh ;~ 2FE6:06BE
cs=0x2fe6;eip=0x0006c1; 	R(JZ(loc_3eb08));	// 102830 jz      short loc_3EB08 ;~ 2FE6:06C1
loc_3eb03:
	// 10924 
cs=0x2fe6;eip=0x0006c3; 	T(MOV(ax, di));	// 102834 mov     ax, di ;~ 2FE6:06C3
cs=0x2fe6;eip=0x0006c5; 	R(JMP(loc_3ebc4));	// 102835 jmp     loc_3EBC4 ;~ 2FE6:06C5
loc_3eb08:
	// 10925 
cs=0x2fe6;eip=0x0006c8; 	T(MOV(ax, 0x0F826));	// 102839 mov     ax, 0F826h ;~ 2FE6:06C8
cs=0x2fe6;eip=0x0006cb; 	X(PUSH(ax));	// 102840 push    ax ;~ 2FE6:06CB
cs=0x2fe6;eip=0x0006cc; 	R(CALL(sub_3efa2,0));	// 102841 call    sub_3EFA2 ;~ 2FE6:06CC
cs=0x2fe6;eip=0x0006cf; 	T(MOV(di, ax));	// 102842 mov     di, ax ;~ 2FE6:06CF
cs=0x2fe6;eip=0x0006d1; 	T(CMP(di, 0x0FFFF));	// 102843 cmp     di, 0FFFFh ;~ 2FE6:06D1
cs=0x2fe6;eip=0x0006d4; 	R(JZ(loc_3eb2a));	// 102844 jz      short loc_3EB2A ;~ 2FE6:06D4
cs=0x2fe6;eip=0x0006d6; 	T(MOV(ax, 0x1C));	// 102845 mov     ax, 1Ch ;~ 2FE6:06D6
cs=0x2fe6;eip=0x0006d9; 	T(MUL1_2(di));	// 102846 mul     di ;~ 2FE6:06D9
cs=0x2fe6;eip=0x0006db; 	T(MOV(bx, ax));	// 102847 mov     bx, ax ;~ 2FE6:06DB
cs=0x2fe6;eip=0x0006dd; 	T(ADD(bx, *(dw*)((&unk_571d0))));	// 102848 add     bx, word ptr unk_571D0 ;~ 2FE6:06DD
cs=0x2fe6;eip=0x0006e1; 	T(MOV(es, *(dw*)((&unk_571d2))));	// 102849 mov     es, word ptr unk_571D2 ;~ 2FE6:06E1
cs=0x2fe6;eip=0x0006e5; 	X(MOV(*(raddr(es,bx+0x1A)), 1));	// 102850 mov     byte ptr es:[bx+1Ah], 1 ;~ 2FE6:06E5
loc_3eb2a:
	// 10926 
cs=0x2fe6;eip=0x0006ea; 	X(PUSH(cs));	// 102853 push    cs ;~ 2FE6:06EA
cs=0x2fe6;eip=0x0006eb; 	R(CALL(sub_3ee5b,0));	// 102854 call    near ptr sub_3EE5B ;~ 2FE6:06EB
loc_3eb2e:
	// 10927 
cs=0x2fe6;eip=0x0006ee; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 102857 push    [bp+arg_0] ;~ 2FE6:06EE
cs=0x2fe6;eip=0x0006f1; 	R(CALL(sub_3eeea,0));	// 102858 call    sub_3EEEA ;~ 2FE6:06F1
cs=0x2fe6;eip=0x0006f4; 	T(MOV(si, ax));	// 102859 mov     si, ax ;~ 2FE6:06F4
cs=0x2fe6;eip=0x0006f6; 	T(CMP(si, 0x0FFFF));	// 102860 cmp     si, 0FFFFh ;~ 2FE6:06F6
cs=0x2fe6;eip=0x0006f9; 	R(JZ(loc_3eb59));	// 102861 jz      short loc_3EB59 ;~ 2FE6:06F9
cs=0x2fe6;eip=0x0006fb; 	X(PUSH(si));	// 102862 push    si ;~ 2FE6:06FB
cs=0x2fe6;eip=0x0006fc; 	X(PUSH(cs));	// 102863 push    cs ;~ 2FE6:06FC
cs=0x2fe6;eip=0x0006fd; 	R(CALL(sub_3ebcc,0));	// 102864 call    near ptr sub_3EBCC ;~ 2FE6:06FD
cs=0x2fe6;eip=0x000700; 	T(MOV(di, ax));	// 102865 mov     di, ax ;~ 2FE6:0700
cs=0x2fe6;eip=0x000702; 	T(CMP(di, 0x0FFFF));	// 102866 cmp     di, 0FFFFh ;~ 2FE6:0702
cs=0x2fe6;eip=0x000705; 	R(JZ(loc_3eb59));	// 102867 jz      short loc_3EB59 ;~ 2FE6:0705
cs=0x2fe6;eip=0x000707; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 102868 push    [bp+arg_0] ;~ 2FE6:0707
cs=0x2fe6;eip=0x00070a; 	R(CALL(sub_3ee91,0));	// 102869 call    sub_3EE91 ;~ 2FE6:070A
cs=0x2fe6;eip=0x00070d; 	T(MOV(di, ax));	// 102870 mov     di, ax ;~ 2FE6:070D
cs=0x2fe6;eip=0x00070f; 	T(CMP(di, 0x0FFFF));	// 102871 cmp     di, 0FFFFh ;~ 2FE6:070F
cs=0x2fe6;eip=0x000712; 	R(JNZ(loc_3eb03));	// 102872 jnz     short loc_3EB03 ;~ 2FE6:0712
loc_3eb54:
	// 10928 
cs=0x2fe6;eip=0x000714; 	T(MOV(ax, 0x0FFFF));	// 102876 mov     ax, 0FFFFh ;~ 2FE6:0714
cs=0x2fe6;eip=0x000717; 	R(JMP(loc_3ebc4));	// 102877 jmp     short loc_3EBC4 ;~ 2FE6:0717
loc_3eb59:
	// 10929 
cs=0x2fe6;eip=0x000719; 	T(SUB(si, si));	// 102882 sub     si, si ;~ 2FE6:0719
cs=0x2fe6;eip=0x00071b; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 102883 cmp     word ptr unk_571D4, si ;~ 2FE6:071B
cs=0x2fe6;eip=0x00071f; 	R(JZ(loc_3eb54));	// 102884 jz      short loc_3EB54 ;~ 2FE6:071F
cs=0x2fe6;eip=0x000721; 	T(MOV(ax, 0x1C));	// 102885 mov     ax, 1Ch ;~ 2FE6:0721
cs=0x2fe6;eip=0x000724; 	T(MUL1_2(si));	// 102886 mul     si ;~ 2FE6:0724
cs=0x2fe6;eip=0x000726; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 102887 mov     [bp+var_A], ax ;~ 2FE6:0726
loc_3eb69:
	// 10930 
cs=0x2fe6;eip=0x000729; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 102890 mov     bx, [bp+var_A] ;~ 2FE6:0729
cs=0x2fe6;eip=0x00072c; 	T(ADD(bx, *(dw*)((&unk_571d0))));	// 102891 add     bx, word ptr unk_571D0 ;~ 2FE6:072C
cs=0x2fe6;eip=0x000730; 	T(MOV(es, *(dw*)((&unk_571d2))));	// 102892 mov     es, word ptr unk_571D2 ;~ 2FE6:0730
cs=0x2fe6;eip=0x000734; 	T(CMP(*(raddr(es,bx+0x1A)), 0));	// 102893 cmp     byte ptr es:[bx+1Ah], 0 ;~ 2FE6:0734
cs=0x2fe6;eip=0x000739; 	R(JNZ(loc_3ebb7));	// 102894 jnz     short loc_3EBB7 ;~ 2FE6:0739
cs=0x2fe6;eip=0x00073b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a))));	// 102895 mov     bx, [bp+var_A] ;~ 2FE6:073B
cs=0x2fe6;eip=0x00073e; 	T(ADD(bx, *(dw*)((&unk_571d0))));	// 102896 add     bx, word ptr unk_571D0 ;~ 2FE6:073E
cs=0x2fe6;eip=0x000742; 	T(CMP(*(raddr(es,bx+0x1A)), 1));	// 102897 cmp     byte ptr es:[bx+1Ah], 1 ;~ 2FE6:0742
cs=0x2fe6;eip=0x000747; 	R(JNZ(loc_3eb8e));	// 102898 jnz     short loc_3EB8E ;~ 2FE6:0747
cs=0x2fe6;eip=0x000749; 	T(MOV(ax, 1));	// 102899 mov     ax, 1 ;~ 2FE6:0749
cs=0x2fe6;eip=0x00074c; 	R(JMP(loc_3eb90));	// 102900 jmp     short loc_3EB90 ;~ 2FE6:074C
loc_3eb8e:
	// 10931 
cs=0x2fe6;eip=0x00074e; 	T(SUB(ax, ax));	// 102904 sub     ax, ax ;~ 2FE6:074E
loc_3eb90:
	// 10932 
cs=0x2fe6;eip=0x000750; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 102907 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0750
cs=0x2fe6;eip=0x000755; 	R(JZ(loc_3eb9b));	// 102908 jz      short loc_3EB9B ;~ 2FE6:0755
cs=0x2fe6;eip=0x000757; 	X(PUSH(cs));	// 102909 push    cs ;~ 2FE6:0757
cs=0x2fe6;eip=0x000758; 	R(CALL(sub_3ee5b,0));	// 102910 call    near ptr sub_3EE5B ;~ 2FE6:0758
loc_3eb9b:
	// 10933 
cs=0x2fe6;eip=0x00075b; 	X(PUSH(si));	// 102913 push    si ;~ 2FE6:075B
cs=0x2fe6;eip=0x00075c; 	X(PUSH(cs));	// 102914 push    cs ;~ 2FE6:075C
cs=0x2fe6;eip=0x00075d; 	R(CALL(sub_3ebcc,0));	// 102915 call    near ptr sub_3EBCC ;~ 2FE6:075D
cs=0x2fe6;eip=0x000760; 	T(MOV(di, ax));	// 102916 mov     di, ax ;~ 2FE6:0760
cs=0x2fe6;eip=0x000762; 	T(CMP(di, 0x0FFFF));	// 102917 cmp     di, 0FFFFh ;~ 2FE6:0762
cs=0x2fe6;eip=0x000765; 	R(JZ(loc_3ebb7));	// 102918 jz      short loc_3EBB7 ;~ 2FE6:0765
cs=0x2fe6;eip=0x000767; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 102919 push    [bp+arg_0] ;~ 2FE6:0767
cs=0x2fe6;eip=0x00076a; 	R(CALL(sub_3ee91,0));	// 102920 call    sub_3EE91 ;~ 2FE6:076A
cs=0x2fe6;eip=0x00076d; 	T(MOV(di, ax));	// 102921 mov     di, ax ;~ 2FE6:076D
cs=0x2fe6;eip=0x00076f; 	T(CMP(di, 0x0FFFF));	// 102922 cmp     di, 0FFFFh ;~ 2FE6:076F
cs=0x2fe6;eip=0x000772; 	R(JZ(loc_3ebb7));	// 102923 jz      short loc_3EBB7 ;~ 2FE6:0772
cs=0x2fe6;eip=0x000774; 	R(JMP(loc_3eb03));	// 102924 jmp     loc_3EB03 ;~ 2FE6:0774
loc_3ebb7:
	// 10934 
cs=0x2fe6;eip=0x000777; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x1C));	// 102929 add     [bp+var_A], 1Ch ;~ 2FE6:0777
cs=0x2fe6;eip=0x00077b; 	T(INC(si));	// 102930 inc     si ;~ 2FE6:077B
cs=0x2fe6;eip=0x00077c; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 102931 cmp     word ptr unk_571D4, si ;~ 2FE6:077C
cs=0x2fe6;eip=0x000780; 	R(JBE(loc_3eb54));	// 102932 jbe     short loc_3EB54 ;~ 2FE6:0780
cs=0x2fe6;eip=0x000782; 	R(JMP(loc_3eb69));	// 102933 jmp     short loc_3EB69 ;~ 2FE6:0782
loc_3ebc4:
	// 10935 
cs=0x2fe6;eip=0x000784; 	X(POP(si));	// 102938 pop     si ;~ 2FE6:0784
cs=0x2fe6;eip=0x000785; 	X(POP(di));	// 102939 pop     di ;~ 2FE6:0785
cs=0x2fe6;eip=0x000786; 	T(MOV(sp, bp));	// 102940 mov     sp, bp ;~ 2FE6:0786
cs=0x2fe6;eip=0x000788; 	X(POP(bp));	// 102941 pop     bp ;~ 2FE6:0788
cs=0x2fe6;eip=0x000789; 	R(RETN(2));	// 102942 retn    2 ;~ 2FE6:0789
sub_3ebcc:
	// 102950 
#undef var_28
#define var_28 -0x28
	// 102953 var_28          = dword ptr -28h ;~ 2FE6:078C
#undef var_24
#define var_24 -0x24
	// 102954 var_24          = word ptr -24h ;~ 2FE6:078C
#undef var_22
#define var_22 -0x22
	// 102955 var_22          = word ptr -22h ;~ 2FE6:078C
#undef var_20
#define var_20 -0x20
	// 102956 var_20          = word ptr -20h ;~ 2FE6:078C
#undef var_1c
#define var_1c -0x1C
	// 102957 var_1C          = byte ptr -1Ch ;~ 2FE6:078C
#undef var_1a
#define var_1a -0x1A
	// 102958 var_1A          = word ptr -1Ah ;~ 2FE6:078C
#undef var_18
#define var_18 -0x18
	// 102959 var_18          = byte ptr -18h ;~ 2FE6:078C
#undef var_16
#define var_16 -0x16
	// 102960 var_16          = byte ptr -16h ;~ 2FE6:078C
#undef var_15
#define var_15 -0x15
	// 102961 var_15          = byte ptr -15h ;~ 2FE6:078C
#undef var_14
#define var_14 -0x14
	// 102962 var_14          = byte ptr -14h ;~ 2FE6:078C
#undef var_6
#define var_6 -6
	// 102963 var_6           = byte ptr -6 ;~ 2FE6:078C
#undef var_1
#define var_1 -1
	// 102964 var_1           = byte ptr -1 ;~ 2FE6:078C
#undef arg_0
#define arg_0 6
	// 102965 arg_0           = word ptr  6 ;~ 2FE6:078C
cs=0x2fe6;eip=0x00078c; 	X(PUSH(bp));	// 102967 push    bp ;~ 2FE6:078C
cs=0x2fe6;eip=0x00078d; 	T(MOV(bp, sp));	// 102968 mov     bp, sp ;~ 2FE6:078D
cs=0x2fe6;eip=0x00078f; 	T(SUB(sp, 0x28));	// 102969 sub     sp, 28h ;~ 2FE6:078F
cs=0x2fe6;eip=0x000792; 	X(PUSH(di));	// 102970 push    di ;~ 2FE6:0792
cs=0x2fe6;eip=0x000793; 	X(PUSH(si));	// 102971 push    si ;~ 2FE6:0793
cs=0x2fe6;eip=0x000794; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 102972 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0794
cs=0x2fe6;eip=0x000799; 	R(JZ(loc_3ebdf));	// 102973 jz      short loc_3EBDF ;~ 2FE6:0799
cs=0x2fe6;eip=0x00079b; 	X(PUSH(cs));	// 102974 push    cs ;~ 2FE6:079B
cs=0x2fe6;eip=0x00079c; 	R(CALL(sub_3ee5b,0));	// 102975 call    near ptr sub_3EE5B ;~ 2FE6:079C
loc_3ebdf:
	// 10936 
cs=0x2fe6;eip=0x00079f; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 102978 mov     word ptr unk_571E7, 0 ;~ 2FE6:079F
cs=0x2fe6;eip=0x0007a5; 	T(MOV(ax, 0x1C));	// 102979 mov     ax, 1Ch ;~ 2FE6:07A5
cs=0x2fe6;eip=0x0007a8; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 102980 mul     [bp+arg_0] ;~ 2FE6:07A8
cs=0x2fe6;eip=0x0007ab; 	T(MOV(si, ax));	// 102981 mov     si, ax ;~ 2FE6:07AB
cs=0x2fe6;eip=0x0007ad; 	T(LES(bx, *(dd*)((&unk_571d0))));	// 102982 les     bx, dword ptr unk_571D0 ;~ 2FE6:07AD
cs=0x2fe6;eip=0x0007b1; 	T(MOV(al, *(raddr(es,bx+si+0x1B))));	// 102983 mov     al, es:[bx+si+1Bh] ;~ 2FE6:07B1
cs=0x2fe6;eip=0x0007b5; 	X(MOV(*(raddr(ss,bp+var_1c)), al));	// 102984 mov     [bp+var_1C], al ;~ 2FE6:07B5
cs=0x2fe6;eip=0x0007b8; 	T(OR(al, al));	// 102985 or      al, al ;~ 2FE6:07B8
cs=0x2fe6;eip=0x0007ba; 	R(JZ(loc_3ec09));	// 102986 jz      short loc_3EC09 ;~ 2FE6:07BA
cs=0x2fe6;eip=0x0007bc; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 102987 mov     [bp+var_16], al ;~ 2FE6:07BC
cs=0x2fe6;eip=0x0007bf; 	X(MOV(*(raddr(ss,bp+var_15)), 0x3A));	// 102988 mov     [bp+var_15], 3Ah ; ':' ;~ 2FE6:07BF
cs=0x2fe6;eip=0x0007c3; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 102989 mov     [bp+var_14], 0 ;~ 2FE6:07C3
cs=0x2fe6;eip=0x0007c7; 	R(JMP(loc_3ec0d));	// 102990 jmp     short loc_3EC0D ;~ 2FE6:07C7
loc_3ec09:
	// 10937 
cs=0x2fe6;eip=0x0007c9; 	X(MOV(*(raddr(ss,bp+var_16)), 0));	// 102994 mov     [bp+var_16], 0 ;~ 2FE6:07C9
loc_3ec0d:
	// 10938 
cs=0x2fe6;eip=0x0007cd; 	T(MOV(ax, 0x1C));	// 102997 mov     ax, 1Ch ;~ 2FE6:07CD
cs=0x2fe6;eip=0x0007d0; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 102998 mul     [bp+arg_0] ;~ 2FE6:07D0
cs=0x2fe6;eip=0x0007d3; 	X(MOV(*(dw*)(raddr(ss,bp+var_20)), ax));	// 102999 mov     [bp+var_20], ax ;~ 2FE6:07D3
cs=0x2fe6;eip=0x0007d6; 	X(MOV(*(dw*)(raddr(ss,bp+var_22)), ax));	// 103000 mov     [bp+var_22], ax ;~ 2FE6:07D6
cs=0x2fe6;eip=0x0007d9; 	X(MOV(*(dw*)(raddr(ss,bp+var_24)), ax));	// 103001 mov     [bp+var_24], ax ;~ 2FE6:07D9
loc_3ec1c:
	// 10939 
cs=0x2fe6;eip=0x0007dc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_24))));	// 103005 mov     bx, [bp+var_24] ;~ 2FE6:07DC
cs=0x2fe6;eip=0x0007df; 	T(ADD(bx, *(dw*)((&unk_571d0))));	// 103006 add     bx, word ptr unk_571D0 ;~ 2FE6:07DF
cs=0x2fe6;eip=0x0007e3; 	T(MOV(cx, *(dw*)((&unk_571d2))));	// 103007 mov     cx, word ptr unk_571D2 ;~ 2FE6:07E3
cs=0x2fe6;eip=0x0007e7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28))), bx));	// 103008 mov     word ptr [bp+var_28], bx ;~ 2FE6:07E7
cs=0x2fe6;eip=0x0007ea; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28+2))), cx));	// 103009 mov     word ptr [bp+var_28+2], cx ;~ 2FE6:07EA
cs=0x2fe6;eip=0x0007ed; 	X(PUSH(si));	// 103010 push    si ;~ 2FE6:07ED
cs=0x2fe6;eip=0x0007ee; 	T(si = bp+var_16);	// 103011 lea     si, [bp+var_16] ;~ 2FE6:07EE
cs=0x2fe6;eip=0x0007f1; 	T(LES(di, *(dd*)(raddr(ss,bp+var_28))));	// 103012 les     di, [bp+var_28] ;~ 2FE6:07F1
cs=0x2fe6;eip=0x0007f4; 	T(MOV(cx, 0x0FFFF));	// 103013 mov     cx, 0FFFFh ;~ 2FE6:07F4
cs=0x2fe6;eip=0x0007f7; 	T(XOR(ax, ax));	// 103014 xor     ax, ax ;~ 2FE6:07F7
	// 103015 repne scasb ;~ 2FE6:07F9
cs=0x2fe6;eip=0x0007f9; 	T(	REPNE SCASB);	// 103015 repne scasb ;~ 2FE6:07F9
cs=0x2fe6;eip=0x0007fb; 	T(NOT(cx));	// 103016 not     cx ;~ 2FE6:07FB
cs=0x2fe6;eip=0x0007fd; 	T(SUB(di, cx));	// 103017 sub     di, cx ;~ 2FE6:07FD
cs=0x2fe6;eip=0x0007ff; 	T(MOV(bx, cx));	// 103018 mov     bx, cx ;~ 2FE6:07FF
cs=0x2fe6;eip=0x000801; 	T(XCHG(di, si));	// 103019 xchg    di, si ;~ 2FE6:0801
cs=0x2fe6;eip=0x000803; 	T(MOV(dx, ds));	// 103020 mov     dx, ds ;~ 2FE6:0803
cs=0x2fe6;eip=0x000805; 	X(PUSH(es));	// 103021 push    es ;~ 2FE6:0805
cs=0x2fe6;eip=0x000806; 	T(MOV(es, dx));	// 103022 mov     es, dx ;~ 2FE6:0806
cs=0x2fe6;eip=0x000808; 	X(POP(ds));	// 103024 pop     ds ;~ 2FE6:0808
cs=0x2fe6;eip=0x000809; 	T(MOV(cx, 0x0FFFF));	// 103025 mov     cx, 0FFFFh ;~ 2FE6:0809
	// 103026 repne scasb ;~ 2FE6:080C
cs=0x2fe6;eip=0x00080c; 	T(	REPNE SCASB);	// 103026 repne scasb ;~ 2FE6:080C
cs=0x2fe6;eip=0x00080e; 	T(DEC(di));	// 103027 dec     di ;~ 2FE6:080E
cs=0x2fe6;eip=0x00080f; 	T(MOV(cx, bx));	// 103028 mov     cx, bx ;~ 2FE6:080F
cs=0x2fe6;eip=0x000811; 	T(SHR(cx, 1));	// 103029 shr     cx, 1 ;~ 2FE6:0811
	// 103030 repne movsw ;~ 2FE6:0813
cs=0x2fe6;eip=0x000813; 	X(	REPNE MOVSW);	// 103030 repne movsw ;~ 2FE6:0813
cs=0x2fe6;eip=0x000815; 	T(ADC(cx, cx));	// 103031 adc     cx, cx ;~ 2FE6:0815
	// 103032 repne movsb ;~ 2FE6:0817
cs=0x2fe6;eip=0x000817; 	X(	REPNE MOVSB);	// 103032 repne movsb ;~ 2FE6:0817
cs=0x2fe6;eip=0x000819; 	T(MOV(ds, dx));	// 103033 mov     ds, dx ;~ 2FE6:0819
cs=0x2fe6;eip=0x00081b; 	X(POP(si));	// 103034 pop     si ;~ 2FE6:081B
cs=0x2fe6;eip=0x00081c; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 103035 mov     word ptr unk_571E7, 0 ;~ 2FE6:081C
cs=0x2fe6;eip=0x000822; 	T(ax = bp+var_16);	// 103036 lea     ax, [bp+var_16] ;~ 2FE6:0822
cs=0x2fe6;eip=0x000825; 	X(PUSH(ax));	// 103037 push    ax ;~ 2FE6:0825
cs=0x2fe6;eip=0x000826; 	T(SUB(ax, ax));	// 103038 sub     ax, ax ;~ 2FE6:0826
cs=0x2fe6;eip=0x000828; 	X(PUSH(ax));	// 103039 push    ax ;~ 2FE6:0828
cs=0x2fe6;eip=0x000829; 	R(CALLF(sub_30b47,0));	// 103040 call    sub_30B47 ;~ 2FE6:0829
cs=0x2fe6;eip=0x00082e; 	T(MOV(si, ax));	// 103041 mov     si, ax ;~ 2FE6:082E
cs=0x2fe6;eip=0x000830; 	T(CMP(si, 0x0FFFF));	// 103042 cmp     si, 0FFFFh ;~ 2FE6:0830
cs=0x2fe6;eip=0x000833; 	R(JZ(loc_3ec7f));	// 103043 jz      short loc_3EC7F ;~ 2FE6:0833
cs=0x2fe6;eip=0x000835; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 103044 cmp     word ptr unk_571E7, 0 ;~ 2FE6:0835
cs=0x2fe6;eip=0x00083a; 	R(JNZ(loc_3ec7f));	// 103045 jnz     short loc_3EC7F ;~ 2FE6:083A
cs=0x2fe6;eip=0x00083c; 	R(JMP(loc_3ed0c));	// 103046 jmp     loc_3ED0C ;~ 2FE6:083C
loc_3ec7f:
	// 10940 
cs=0x2fe6;eip=0x00083f; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 103051 mov     word ptr unk_571E7, 0 ;~ 2FE6:083F
cs=0x2fe6;eip=0x000845; 	X(MOV(*(raddr(ss,bp+var_18)), 0x41));	// 103052 mov     [bp+var_18], 41h ; 'A' ;~ 2FE6:0845
cs=0x2fe6;eip=0x000849; 	T(MOV(al, unk_571c5));	// 103053 mov     al, byte ptr unk_571C5 ;~ 2FE6:0849
cs=0x2fe6;eip=0x00084c; 	T(SUB(ah, ah));	// 103054 sub     ah, ah ;~ 2FE6:084C
cs=0x2fe6;eip=0x00084e; 	T(ADD(ax, 0x41));	// 103055 add     ax, 41h ; 'A' ;~ 2FE6:084E
cs=0x2fe6;eip=0x000851; 	T(CMP(ax, 0x41));	// 103056 cmp     ax, 41h ; 'A' ;~ 2FE6:0851
cs=0x2fe6;eip=0x000854; 	R(JBE(loc_3ed0c));	// 103057 jbe     short loc_3ED0C ;~ 2FE6:0854
cs=0x2fe6;eip=0x000856; 	T(MOV(di, *(dw*)(raddr(ss,bp+var_22))));	// 103058 mov     di, [bp+var_22] ;~ 2FE6:0856
loc_3ec99:
	// 10941 
cs=0x2fe6;eip=0x000859; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 103061 mov     word ptr unk_571E7, 0 ;~ 2FE6:0859
cs=0x2fe6;eip=0x00085f; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 103062 mov     al, [bp+var_18] ;~ 2FE6:085F
cs=0x2fe6;eip=0x000862; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 103063 mov     [bp+var_16], al ;~ 2FE6:0862
cs=0x2fe6;eip=0x000865; 	X(MOV(*(raddr(ss,bp+var_15)), 0x3A));	// 103064 mov     [bp+var_15], 3Ah ; ':' ;~ 2FE6:0865
cs=0x2fe6;eip=0x000869; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 103065 mov     [bp+var_14], 0 ;~ 2FE6:0869
cs=0x2fe6;eip=0x00086d; 	T(MOV(bx, *(dw*)((&unk_571d0))));	// 103066 mov     bx, word ptr unk_571D0 ;~ 2FE6:086D
cs=0x2fe6;eip=0x000871; 	T(MOV(cx, *(dw*)((&unk_571d2))));	// 103067 mov     cx, word ptr unk_571D2 ;~ 2FE6:0871
cs=0x2fe6;eip=0x000875; 	T(ADD(bx, di));	// 103068 add     bx, di ;~ 2FE6:0875
cs=0x2fe6;eip=0x000877; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28))), bx));	// 103069 mov     word ptr [bp+var_28], bx ;~ 2FE6:0877
cs=0x2fe6;eip=0x00087a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28+2))), cx));	// 103070 mov     word ptr [bp+var_28+2], cx ;~ 2FE6:087A
cs=0x2fe6;eip=0x00087d; 	X(PUSH(di));	// 103071 push    di ;~ 2FE6:087D
cs=0x2fe6;eip=0x00087e; 	X(PUSH(si));	// 103072 push    si ;~ 2FE6:087E
cs=0x2fe6;eip=0x00087f; 	T(si = bp+var_16);	// 103073 lea     si, [bp+var_16] ;~ 2FE6:087F
cs=0x2fe6;eip=0x000882; 	T(LES(di, *(dd*)(raddr(ss,bp+var_28))));	// 103074 les     di, [bp+var_28] ;~ 2FE6:0882
cs=0x2fe6;eip=0x000885; 	T(MOV(cx, 0x0FFFF));	// 103076 mov     cx, 0FFFFh ;~ 2FE6:0885
cs=0x2fe6;eip=0x000888; 	T(XOR(ax, ax));	// 103077 xor     ax, ax ;~ 2FE6:0888
	// 103078 repne scasb ;~ 2FE6:088A
cs=0x2fe6;eip=0x00088a; 	T(	REPNE SCASB);	// 103078 repne scasb ;~ 2FE6:088A
cs=0x2fe6;eip=0x00088c; 	T(NOT(cx));	// 103079 not     cx ;~ 2FE6:088C
cs=0x2fe6;eip=0x00088e; 	T(SUB(di, cx));	// 103080 sub     di, cx ;~ 2FE6:088E
cs=0x2fe6;eip=0x000890; 	T(MOV(bx, cx));	// 103081 mov     bx, cx ;~ 2FE6:0890
cs=0x2fe6;eip=0x000892; 	T(XCHG(di, si));	// 103082 xchg    di, si ;~ 2FE6:0892
cs=0x2fe6;eip=0x000894; 	T(MOV(dx, ds));	// 103083 mov     dx, ds ;~ 2FE6:0894
cs=0x2fe6;eip=0x000896; 	X(PUSH(es));	// 103084 push    es ;~ 2FE6:0896
cs=0x2fe6;eip=0x000897; 	T(MOV(es, dx));	// 103085 mov     es, dx ;~ 2FE6:0897
cs=0x2fe6;eip=0x000899; 	X(POP(ds));	// 103087 pop     ds ;~ 2FE6:0899
cs=0x2fe6;eip=0x00089a; 	T(MOV(cx, 0x0FFFF));	// 103088 mov     cx, 0FFFFh ;~ 2FE6:089A
	// 103089 repne scasb ;~ 2FE6:089D
cs=0x2fe6;eip=0x00089d; 	T(	REPNE SCASB);	// 103089 repne scasb ;~ 2FE6:089D
cs=0x2fe6;eip=0x00089f; 	T(DEC(di));	// 103090 dec     di ;~ 2FE6:089F
cs=0x2fe6;eip=0x0008a0; 	T(MOV(cx, bx));	// 103091 mov     cx, bx ;~ 2FE6:08A0
cs=0x2fe6;eip=0x0008a2; 	T(SHR(cx, 1));	// 103092 shr     cx, 1 ;~ 2FE6:08A2
	// 103093 repne movsw ;~ 2FE6:08A4
cs=0x2fe6;eip=0x0008a4; 	X(	REPNE MOVSW);	// 103093 repne movsw ;~ 2FE6:08A4
cs=0x2fe6;eip=0x0008a6; 	T(ADC(cx, cx));	// 103094 adc     cx, cx ;~ 2FE6:08A6
	// 103095 repne movsb ;~ 2FE6:08A8
cs=0x2fe6;eip=0x0008a8; 	X(	REPNE MOVSB);	// 103095 repne movsb ;~ 2FE6:08A8
cs=0x2fe6;eip=0x0008aa; 	T(MOV(ds, dx));	// 103096 mov     ds, dx ;~ 2FE6:08AA
cs=0x2fe6;eip=0x0008ac; 	X(POP(si));	// 103097 pop     si ;~ 2FE6:08AC
cs=0x2fe6;eip=0x0008ad; 	X(POP(di));	// 103098 pop     di ;~ 2FE6:08AD
cs=0x2fe6;eip=0x0008ae; 	T(ax = bp+var_16);	// 103099 lea     ax, [bp+var_16] ;~ 2FE6:08AE
cs=0x2fe6;eip=0x0008b1; 	X(PUSH(ax));	// 103100 push    ax ;~ 2FE6:08B1
cs=0x2fe6;eip=0x0008b2; 	T(SUB(ax, ax));	// 103101 sub     ax, ax ;~ 2FE6:08B2
cs=0x2fe6;eip=0x0008b4; 	X(PUSH(ax));	// 103102 push    ax ;~ 2FE6:08B4
cs=0x2fe6;eip=0x0008b5; 	R(CALLF(sub_30b47,0));	// 103103 call    sub_30B47 ;~ 2FE6:08B5
cs=0x2fe6;eip=0x0008ba; 	T(MOV(si, ax));	// 103104 mov     si, ax ;~ 2FE6:08BA
cs=0x2fe6;eip=0x0008bc; 	T(CMP(si, 0x0FFFF));	// 103105 cmp     si, 0FFFFh ;~ 2FE6:08BC
cs=0x2fe6;eip=0x0008bf; 	R(JZ(loc_3ed3d));	// 103106 jz      short loc_3ED3D ;~ 2FE6:08BF
cs=0x2fe6;eip=0x0008c1; 	T(LES(bx, *(dd*)((&unk_571d0))));	// 103107 les     bx, dword ptr unk_571D0 ;~ 2FE6:08C1
cs=0x2fe6;eip=0x0008c5; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 103109 mov     al, [bp+var_18] ;~ 2FE6:08C5
cs=0x2fe6;eip=0x0008c8; 	X(MOV(*(raddr(es,bx+di+0x1B)), al));	// 103110 mov     es:[bx+di+1Bh], al ;~ 2FE6:08C8
loc_3ed0c:
	// 10942 
cs=0x2fe6;eip=0x0008cc; 	T(CMP(si, 0x0FFFF));	// 103114 cmp     si, 0FFFFh ;~ 2FE6:08CC
cs=0x2fe6;eip=0x0008cf; 	R(JZ(loc_3ed18));	// 103115 jz      short loc_3ED18 ;~ 2FE6:08CF
cs=0x2fe6;eip=0x0008d1; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 103116 cmp     word ptr unk_571E7, 0 ;~ 2FE6:08D1
cs=0x2fe6;eip=0x0008d6; 	R(JZ(loc_3ed68));	// 103117 jz      short loc_3ED68 ;~ 2FE6:08D6
loc_3ed18:
	// 10943 
cs=0x2fe6;eip=0x0008d8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_20))));	// 103120 mov     ax, [bp+var_20] ;~ 2FE6:08D8
cs=0x2fe6;eip=0x0008db; 	T(ADD(ax, *(dw*)((&unk_571d0))));	// 103121 add     ax, word ptr unk_571D0 ;~ 2FE6:08DB
cs=0x2fe6;eip=0x0008df; 	T(MOV(dx, *(dw*)((&unk_571d2))));	// 103122 mov     dx, word ptr unk_571D2 ;~ 2FE6:08DF
cs=0x2fe6;eip=0x0008e3; 	T(ADD(ax, 0x0D));	// 103123 add     ax, 0Dh ;~ 2FE6:08E3
cs=0x2fe6;eip=0x0008e6; 	X(PUSH(dx));	// 103124 push    dx ;~ 2FE6:08E6
cs=0x2fe6;eip=0x0008e7; 	X(PUSH(ax));	// 103125 push    ax ;~ 2FE6:08E7
cs=0x2fe6;eip=0x0008e8; 	R(CALLF(sub_314f5,0));	// 103126 call    sub_314F5 ;~ 2FE6:08E8
cs=0x2fe6;eip=0x0008ed; 	X(MOV(*(raddr(ss,bp+var_16)), al));	// 103127 mov     [bp+var_16], al ;~ 2FE6:08ED
cs=0x2fe6;eip=0x0008f0; 	T(CMP(al, 0x0FF));	// 103128 cmp     al, 0FFh ;~ 2FE6:08F0
cs=0x2fe6;eip=0x0008f2; 	R(JNZ(loc_3ed54));	// 103129 jnz     short loc_3ED54 ;~ 2FE6:08F2
cs=0x2fe6;eip=0x0008f4; 	T(MOV(ax, 0x0FFFF));	// 103130 mov     ax, 0FFFFh ;~ 2FE6:08F4
cs=0x2fe6;eip=0x0008f7; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), si));	// 103131 mov     [bp+var_1A], si ;~ 2FE6:08F7
cs=0x2fe6;eip=0x0008fa; 	R(JMP(loc_3ee53));	// 103132 jmp     loc_3EE53 ;~ 2FE6:08FA
loc_3ed3d:
	// 10944 
cs=0x2fe6;eip=0x0008fd; 	X(INC(*(raddr(ss,bp+var_18))));	// 103136 inc     [bp+var_18] ;~ 2FE6:08FD
cs=0x2fe6;eip=0x000900; 	T(MOV(al, *(raddr(ss,bp+var_18))));	// 103137 mov     al, [bp+var_18] ;~ 2FE6:0900
cs=0x2fe6;eip=0x000903; 	T(CBW);	// 103138 cbw ;~ 2FE6:0903
cs=0x2fe6;eip=0x000904; 	T(MOV(cl, unk_571c5));	// 103139 mov     cl, byte ptr unk_571C5 ;~ 2FE6:0904
cs=0x2fe6;eip=0x000908; 	T(SUB(ch, ch));	// 103140 sub     ch, ch ;~ 2FE6:0908
cs=0x2fe6;eip=0x00090a; 	T(ADD(cx, 0x41));	// 103141 add     cx, 41h ; 'A' ;~ 2FE6:090A
cs=0x2fe6;eip=0x00090d; 	T(CMP(ax, cx));	// 103142 cmp     ax, cx ;~ 2FE6:090D
cs=0x2fe6;eip=0x00090f; 	R(JNC(loc_3ed0c));	// 103143 jnb     short loc_3ED0C ;~ 2FE6:090F
cs=0x2fe6;eip=0x000911; 	R(JMP(loc_3ec99));	// 103144 jmp     loc_3EC99 ;~ 2FE6:0911
loc_3ed54:
	// 10945 
cs=0x2fe6;eip=0x000914; 	T(CMP(*(raddr(ss,bp+var_16)), 0));	// 103148 cmp     [bp+var_16], 0 ;~ 2FE6:0914
cs=0x2fe6;eip=0x000918; 	R(JNZ(loc_3ed5d));	// 103149 jnz     short loc_3ED5D ;~ 2FE6:0918
cs=0x2fe6;eip=0x00091a; 	R(JMP(loc_3ec1c));	// 103150 jmp     loc_3EC1C ;~ 2FE6:091A
loc_3ed5d:
	// 10946 
cs=0x2fe6;eip=0x00091d; 	X(MOV(*(raddr(ss,bp+var_15)), 0x3A));	// 103154 mov     [bp+var_15], 3Ah ; ':' ;~ 2FE6:091D
cs=0x2fe6;eip=0x000921; 	X(MOV(*(raddr(ss,bp+var_14)), 0));	// 103155 mov     [bp+var_14], 0 ;~ 2FE6:0921
cs=0x2fe6;eip=0x000925; 	R(JMP(loc_3ec1c));	// 103156 jmp     loc_3EC1C ;~ 2FE6:0925
loc_3ed68:
	// 10947 
cs=0x2fe6;eip=0x000928; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), si));	// 103160 mov     [bp+var_1A], si ;~ 2FE6:0928
cs=0x2fe6;eip=0x00092b; 	T(CMP(*(raddr(ss,bp+var_15)), 0x3A));	// 103161 cmp     [bp+var_15], 3Ah ; ':' ;~ 2FE6:092B
cs=0x2fe6;eip=0x00092f; 	R(JNZ(loc_3ed84));	// 103162 jnz     short loc_3ED84 ;~ 2FE6:092F
cs=0x2fe6;eip=0x000931; 	T(MOV(ax, 0x1C));	// 103163 mov     ax, 1Ch ;~ 2FE6:0931
cs=0x2fe6;eip=0x000934; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 103164 mul     [bp+arg_0] ;~ 2FE6:0934
cs=0x2fe6;eip=0x000937; 	T(MOV(si, ax));	// 103165 mov     si, ax ;~ 2FE6:0937
cs=0x2fe6;eip=0x000939; 	T(LES(bx, *(dd*)((&unk_571d0))));	// 103166 les     bx, dword ptr unk_571D0 ;~ 2FE6:0939
cs=0x2fe6;eip=0x00093d; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 103167 mov     al, [bp+var_16] ;~ 2FE6:093D
cs=0x2fe6;eip=0x000940; 	X(MOV(*(raddr(es,bx+si+0x1B)), al));	// 103168 mov     es:[bx+si+1Bh], al ;~ 2FE6:0940
loc_3ed84:
	// 10948 
cs=0x2fe6;eip=0x000944; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 103171 mov     ax, [bp+var_1A] ;~ 2FE6:0944
cs=0x2fe6;eip=0x000947; 	X(MOV(*(dw*)((&unk_571e3)), ax));	// 103172 mov     word ptr unk_571E3, ax ;~ 2FE6:0947
cs=0x2fe6;eip=0x00094a; 	X(PUSH(ax));	// 103173 push    ax ;~ 2FE6:094A
cs=0x2fe6;eip=0x00094b; 	T(ax = bp+var_6);	// 103174 lea     ax, [bp+var_6] ;~ 2FE6:094B
cs=0x2fe6;eip=0x00094e; 	X(PUSH(ss));	// 103175 push    ss ;~ 2FE6:094E
cs=0x2fe6;eip=0x00094f; 	X(PUSH(ax));	// 103176 push    ax ;~ 2FE6:094F
cs=0x2fe6;eip=0x000950; 	T(MOV(ax, 5));	// 103177 mov     ax, 5 ;~ 2FE6:0950
cs=0x2fe6;eip=0x000953; 	X(PUSH(ax));	// 103178 push    ax ;~ 2FE6:0953
cs=0x2fe6;eip=0x000954; 	R(CALLF(sub_30b8e,0));	// 103179 call    sub_30B8E ;~ 2FE6:0954
cs=0x2fe6;eip=0x000959; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 103180 mov     [bp+var_1A], ax ;~ 2FE6:0959
cs=0x2fe6;eip=0x00095c; 	X(MOV(*(raddr(ss,bp+var_1)), 0));	// 103181 mov     [bp+var_1], 0 ;~ 2FE6:095C
cs=0x2fe6;eip=0x000960; 	T(ax = bp+var_6);	// 103182 lea     ax, [bp+var_6] ;~ 2FE6:0960
cs=0x2fe6;eip=0x000963; 	X(PUSH(ss));	// 103183 push    ss ;~ 2FE6:0963
cs=0x2fe6;eip=0x000964; 	X(PUSH(ax));	// 103184 push    ax ;~ 2FE6:0964
cs=0x2fe6;eip=0x000965; 	T(MOV(ax, 0x36F5));	// 103185 mov     ax, 36F5h ;~ 2FE6:0965
cs=0x2fe6;eip=0x000968; 	X(PUSH(ds));	// 103186 push    ds ;~ 2FE6:0968
cs=0x2fe6;eip=0x000969; 	X(PUSH(ax));	// 103187 push    ax ;~ 2FE6:0969
cs=0x2fe6;eip=0x00096a; 	R(CALLF(sub_3f1c0,0));	// 103188 call    sub_3F1C0 ;~ 2FE6:096A
cs=0x2fe6;eip=0x00096f; 	T(OR(ax, ax));	// 103189 or      ax, ax ;~ 2FE6:096F
cs=0x2fe6;eip=0x000971; 	R(JNZ(loc_3edb9));	// 103190 jnz     short loc_3EDB9 ;~ 2FE6:0971
cs=0x2fe6;eip=0x000973; 	T(CMP(*(dw*)(raddr(ss,bp+var_1a)), 0x0FFFF));	// 103191 cmp     [bp+var_1A], 0FFFFh ;~ 2FE6:0973
cs=0x2fe6;eip=0x000977; 	R(JNZ(loc_3edce));	// 103192 jnz     short loc_3EDCE ;~ 2FE6:0977
loc_3edb9:
	// 10949 
cs=0x2fe6;eip=0x000979; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103196 push    word ptr unk_571E3 ;~ 2FE6:0979
cs=0x2fe6;eip=0x00097d; 	R(CALLF(sub_30b72,0));	// 103197 call    sub_30B72 ;~ 2FE6:097D
cs=0x2fe6;eip=0x000982; 	X(MOV(*(dw*)((&unk_571e3)), 0));	// 103198 mov     word ptr unk_571E3, 0 ;~ 2FE6:0982
cs=0x2fe6;eip=0x000988; 	T(MOV(ax, 0x0FFFF));	// 103199 mov     ax, 0FFFFh ;~ 2FE6:0988
cs=0x2fe6;eip=0x00098b; 	R(JMP(loc_3ee53));	// 103200 jmp     loc_3EE53 ;~ 2FE6:098B
loc_3edce:
	// 10950 
cs=0x2fe6;eip=0x00098e; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103204 push    word ptr unk_571E3 ;~ 2FE6:098E
cs=0x2fe6;eip=0x000992; 	T(MOV(ax, 0x0F835));	// 103205 mov     ax, 0F835h ;~ 2FE6:0992
cs=0x2fe6;eip=0x000995; 	X(PUSH(ds));	// 103206 push    ds ;~ 2FE6:0995
cs=0x2fe6;eip=0x000996; 	X(PUSH(ax));	// 103207 push    ax ;~ 2FE6:0996
cs=0x2fe6;eip=0x000997; 	T(MOV(ax, 2));	// 103208 mov     ax, 2 ;~ 2FE6:0997
cs=0x2fe6;eip=0x00099a; 	X(PUSH(ax));	// 103209 push    ax ;~ 2FE6:099A
cs=0x2fe6;eip=0x00099b; 	R(CALLF(sub_30b8e,0));	// 103210 call    sub_30B8E ;~ 2FE6:099B
cs=0x2fe6;eip=0x0009a0; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 103211 mov     [bp+var_1A], ax ;~ 2FE6:09A0
cs=0x2fe6;eip=0x0009a3; 	T(CMP(ax, 0x0FFFF));	// 103212 cmp     ax, 0FFFFh ;~ 2FE6:09A3
cs=0x2fe6;eip=0x0009a6; 	R(JZ(loc_3edb9));	// 103213 jz      short loc_3EDB9 ;~ 2FE6:09A6
cs=0x2fe6;eip=0x0009a8; 	T(CMP(*(dw*)((&unk_571e5)), 0));	// 103214 cmp     word ptr unk_571E5, 0 ;~ 2FE6:09A8
cs=0x2fe6;eip=0x0009ad; 	R(JZ(loc_3edb9));	// 103215 jz      short loc_3EDB9 ;~ 2FE6:09AD
cs=0x2fe6;eip=0x0009af; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103216 push    word ptr unk_571E3 ;~ 2FE6:09AF
cs=0x2fe6;eip=0x0009b3; 	X(PUSH(*(dw*)((&unk_571c8))));	// 103217 push    word ptr unk_571C8 ;~ 2FE6:09B3
cs=0x2fe6;eip=0x0009b7; 	X(PUSH(*(dw*)((&unk_571c6))));	// 103218 push    word ptr unk_571C6 ;~ 2FE6:09B7
cs=0x2fe6;eip=0x0009bb; 	T(MOV(ax, 0x12));	// 103219 mov     ax, 12h ;~ 2FE6:09BB
cs=0x2fe6;eip=0x0009be; 	X(MUL1_2(*(dw*)((&unk_571e5))));	// 103220 mul     word ptr unk_571E5 ;~ 2FE6:09BE
cs=0x2fe6;eip=0x0009c2; 	T(ADD(ax, 0x12));	// 103221 add     ax, 12h ;~ 2FE6:09C2
cs=0x2fe6;eip=0x0009c5; 	X(PUSH(ax));	// 103222 push    ax ;~ 2FE6:09C5
cs=0x2fe6;eip=0x0009c6; 	R(CALLF(sub_30b8e,0));	// 103223 call    sub_30B8E ;~ 2FE6:09C6
cs=0x2fe6;eip=0x0009cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 103224 mov     [bp+var_1A], ax ;~ 2FE6:09CB
cs=0x2fe6;eip=0x0009ce; 	T(CMP(ax, 0x0FFFF));	// 103225 cmp     ax, 0FFFFh ;~ 2FE6:09CE
cs=0x2fe6;eip=0x0009d1; 	R(JZ(loc_3edb9));	// 103226 jz      short loc_3EDB9 ;~ 2FE6:09D1
cs=0x2fe6;eip=0x0009d3; 	T(MOV(ax, 0x1C));	// 103227 mov     ax, 1Ch ;~ 2FE6:09D3
cs=0x2fe6;eip=0x0009d6; 	X(MUL1_2(*(dw*)(raddr(ss,bp+arg_0))));	// 103228 mul     [bp+arg_0] ;~ 2FE6:09D6
cs=0x2fe6;eip=0x0009d9; 	T(ADD(ax, *(dw*)((&unk_571d0))));	// 103229 add     ax, word ptr unk_571D0 ;~ 2FE6:09D9
cs=0x2fe6;eip=0x0009dd; 	T(MOV(dx, *(dw*)((&unk_571d2))));	// 103230 mov     dx, word ptr unk_571D2 ;~ 2FE6:09DD
cs=0x2fe6;eip=0x0009e1; 	T(MOV(bx, ax));	// 103231 mov     bx, ax ;~ 2FE6:09E1
cs=0x2fe6;eip=0x0009e3; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28))), bx));	// 103232 mov     word ptr [bp+var_28], bx ;~ 2FE6:09E3
cs=0x2fe6;eip=0x0009e6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_28+2))), dx));	// 103233 mov     word ptr [bp+var_28+2], dx ;~ 2FE6:09E6
cs=0x2fe6;eip=0x0009e9; 	T(MOV(si, 0x0F826));	// 103234 mov     si, 0F826h ;~ 2FE6:09E9
cs=0x2fe6;eip=0x0009ec; 	T(LES(di, *(dd*)(raddr(ss,bp+var_28))));	// 103235 les     di, [bp+var_28] ;~ 2FE6:09EC
cs=0x2fe6;eip=0x0009ef; 	T(MOV(cx, 0x0FFFF));	// 103236 mov     cx, 0FFFFh ;~ 2FE6:09EF
cs=0x2fe6;eip=0x0009f2; 	T(XOR(ax, ax));	// 103237 xor     ax, ax ;~ 2FE6:09F2
	// 103238 repne scasb ;~ 2FE6:09F4
cs=0x2fe6;eip=0x0009f4; 	T(	REPNE SCASB);	// 103238 repne scasb ;~ 2FE6:09F4
cs=0x2fe6;eip=0x0009f6; 	T(NOT(cx));	// 103239 not     cx ;~ 2FE6:09F6
cs=0x2fe6;eip=0x0009f8; 	T(SUB(di, cx));	// 103240 sub     di, cx ;~ 2FE6:09F8
cs=0x2fe6;eip=0x0009fa; 	T(XCHG(di, si));	// 103241 xchg    di, si ;~ 2FE6:09FA
cs=0x2fe6;eip=0x0009fc; 	T(MOV(dx, ds));	// 103242 mov     dx, ds ;~ 2FE6:09FC
cs=0x2fe6;eip=0x0009fe; 	X(PUSH(es));	// 103243 push    es ;~ 2FE6:09FE
cs=0x2fe6;eip=0x0009ff; 	T(MOV(es, dx));	// 103244 mov     es, dx ;~ 2FE6:09FF
cs=0x2fe6;eip=0x000a01; 	X(POP(ds));	// 103246 pop     ds ;~ 2FE6:0A01
cs=0x2fe6;eip=0x000a02; 	T(SHR(cx, 1));	// 103247 shr     cx, 1 ;~ 2FE6:0A02
	// 103248 repne movsw ;~ 2FE6:0A04
cs=0x2fe6;eip=0x000a04; 	X(	REPNE MOVSW);	// 103248 repne movsw ;~ 2FE6:0A04
cs=0x2fe6;eip=0x000a06; 	T(ADC(cx, cx));	// 103249 adc     cx, cx ;~ 2FE6:0A06
	// 103250 repne movsb ;~ 2FE6:0A08
cs=0x2fe6;eip=0x000a08; 	X(	REPNE MOVSB);	// 103250 repne movsb ;~ 2FE6:0A08
cs=0x2fe6;eip=0x000a0a; 	T(MOV(ds, dx));	// 103251 mov     ds, dx ;~ 2FE6:0A0A
cs=0x2fe6;eip=0x000a0c; 	X(MOV(unk_571e9, 0));	// 103252 mov     byte ptr unk_571E9, 0 ;~ 2FE6:0A0C
cs=0x2fe6;eip=0x000a11; 	T(SUB(ax, ax));	// 103253 sub     ax, ax ;~ 2FE6:0A11
loc_3ee53:
	// 10951 
cs=0x2fe6;eip=0x000a13; 	X(POP(si));	// 103257 pop     si ;~ 2FE6:0A13
cs=0x2fe6;eip=0x000a14; 	X(POP(di));	// 103258 pop     di ;~ 2FE6:0A14
cs=0x2fe6;eip=0x000a15; 	T(MOV(sp, bp));	// 103259 mov     sp, bp ;~ 2FE6:0A15
cs=0x2fe6;eip=0x000a17; 	X(POP(bp));	// 103260 pop     bp ;~ 2FE6:0A17
cs=0x2fe6;eip=0x000a18; 	R(RETF(2));	// 103261 retf    2 ;~ 2FE6:0A18
sub_3ee5b:
	// 103268 
cs=0x2fe6;eip=0x000a1b; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 103270 mov     word ptr unk_571E7, 0 ;~ 2FE6:0A1B
cs=0x2fe6;eip=0x000a21; 	T(CMP(*(dw*)((&unk_571e3)), 0));	// 103271 cmp     word ptr unk_571E3, 0 ;~ 2FE6:0A21
cs=0x2fe6;eip=0x000a26; 	R(JZ(loc_3ee71));	// 103272 jz      short loc_3EE71 ;~ 2FE6:0A26
cs=0x2fe6;eip=0x000a28; 	X(PUSH(*(dw*)((&unk_571e3))));	// 103273 push    word ptr unk_571E3 ;~ 2FE6:0A28
cs=0x2fe6;eip=0x000a2c; 	R(CALLF(sub_30b72,0));	// 103274 call    sub_30B72 ;~ 2FE6:0A2C
loc_3ee71:
	// 10952 
cs=0x2fe6;eip=0x000a31; 	X(MOV(*(dw*)((&unk_571e3)), 0));	// 103277 mov     word ptr unk_571E3, 0 ;~ 2FE6:0A31
cs=0x2fe6;eip=0x000a37; 	X(MOV(*(dw*)((&unk_571e5)), 0));	// 103278 mov     word ptr unk_571E5, 0 ;~ 2FE6:0A37
cs=0x2fe6;eip=0x000a3d; 	X(MOV(unk_571d6, 0));	// 103279 mov     byte ptr unk_571D6, 0 ;~ 2FE6:0A3D
cs=0x2fe6;eip=0x000a42; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 103280 cmp     word ptr unk_571E7, 0 ;~ 2FE6:0A42
cs=0x2fe6;eip=0x000a47; 	R(JZ(loc_3ee8e));	// 103281 jz      short loc_3EE8E ;~ 2FE6:0A47
cs=0x2fe6;eip=0x000a49; 	T(MOV(ax, 0x0FFFF));	// 103282 mov     ax, 0FFFFh ;~ 2FE6:0A49
cs=0x2fe6;eip=0x000a4c; 	R(JMP(locret_3ee90));	// 103283 jmp     short locret_3EE90 ;~ 2FE6:0A4C
loc_3ee8e:
	// 10953 
cs=0x2fe6;eip=0x000a4e; 	T(SUB(ax, ax));	// 103287 sub     ax, ax ;~ 2FE6:0A4E
locret_3ee90:
	// 10954 
cs=0x2fe6;eip=0x000a50; 	R(RETF(0));	// 103290 retf ;~ 2FE6:0A50
sub_3ee91:
	// 103298 
#undef var_a
#define var_a -0x0A
	// 103301 var_A           = word ptr -0Ah ;~ 2FE6:0A51
#undef var_8
#define var_8 -8
	// 103302 var_8           = word ptr -8 ;~ 2FE6:0A51
#undef var_6
#define var_6 -6
	// 103303 var_6           = word ptr -6 ;~ 2FE6:0A51
#undef arg_0
#define arg_0 4
	// 103304 arg_0           = word ptr  4 ;~ 2FE6:0A51
cs=0x2fe6;eip=0x000a51; 	X(PUSH(bp));	// 103306 push    bp ;~ 2FE6:0A51
cs=0x2fe6;eip=0x000a52; 	T(MOV(bp, sp));	// 103307 mov     bp, sp ;~ 2FE6:0A52
cs=0x2fe6;eip=0x000a54; 	T(SUB(sp, 0x0A));	// 103308 sub     sp, 0Ah ;~ 2FE6:0A54
cs=0x2fe6;eip=0x000a57; 	X(PUSH(di));	// 103309 push    di ;~ 2FE6:0A57
cs=0x2fe6;eip=0x000a58; 	X(PUSH(si));	// 103310 push    si ;~ 2FE6:0A58
cs=0x2fe6;eip=0x000a59; 	T(SUB(si, si));	// 103311 sub     si, si ;~ 2FE6:0A59
cs=0x2fe6;eip=0x000a5b; 	T(CMP(*(dw*)((&unk_571e5)), si));	// 103312 cmp     word ptr unk_571E5, si ;~ 2FE6:0A5B
cs=0x2fe6;eip=0x000a5f; 	R(JZ(loc_3eedf));	// 103313 jz      short loc_3EEDF ;~ 2FE6:0A5F
cs=0x2fe6;eip=0x000a61; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 103314 mov     ax, [bp+arg_0] ;~ 2FE6:0A61
cs=0x2fe6;eip=0x000a64; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 103315 mov     [bp+var_8], ax ;~ 2FE6:0A64
cs=0x2fe6;eip=0x000a67; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 103316 mov     [bp+var_6], ds ;~ 2FE6:0A67
cs=0x2fe6;eip=0x000a6a; 	T(MOV(ax, 0x12));	// 103317 mov     ax, 12h ;~ 2FE6:0A6A
cs=0x2fe6;eip=0x000a6d; 	T(MUL1_2(si));	// 103318 mul     si ;~ 2FE6:0A6D
cs=0x2fe6;eip=0x000a6f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 103319 mov     [bp+var_A], ax ;~ 2FE6:0A6F
loc_3eeb2:
	// 10955 
cs=0x2fe6;eip=0x000a72; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 103322 push    [bp+var_6] ;~ 2FE6:0A72
cs=0x2fe6;eip=0x000a75; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 103323 push    [bp+var_8] ;~ 2FE6:0A75
cs=0x2fe6;eip=0x000a78; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 103324 mov     ax, [bp+var_A] ;~ 2FE6:0A78
cs=0x2fe6;eip=0x000a7b; 	T(ADD(ax, *(dw*)((&unk_571c6))));	// 103325 add     ax, word ptr unk_571C6 ;~ 2FE6:0A7B
cs=0x2fe6;eip=0x000a7f; 	T(MOV(dx, *(dw*)((&unk_571c8))));	// 103326 mov     dx, word ptr unk_571C8 ;~ 2FE6:0A7F
cs=0x2fe6;eip=0x000a83; 	X(PUSH(dx));	// 103327 push    dx ;~ 2FE6:0A83
cs=0x2fe6;eip=0x000a84; 	X(PUSH(ax));	// 103328 push    ax ;~ 2FE6:0A84
cs=0x2fe6;eip=0x000a85; 	R(CALLF(sub_3f1ec,0));	// 103329 call    sub_3F1EC ;~ 2FE6:0A85
cs=0x2fe6;eip=0x000a8a; 	T(MOV(di, ax));	// 103330 mov     di, ax ;~ 2FE6:0A8A
cs=0x2fe6;eip=0x000a8c; 	T(OR(di, di));	// 103331 or      di, di ;~ 2FE6:0A8C
cs=0x2fe6;eip=0x000a8e; 	R(JNZ(loc_3eed4));	// 103332 jnz     short loc_3EED4 ;~ 2FE6:0A8E
cs=0x2fe6;eip=0x000a90; 	T(MOV(ax, si));	// 103333 mov     ax, si ;~ 2FE6:0A90
cs=0x2fe6;eip=0x000a92; 	R(JMP(loc_3eee2));	// 103334 jmp     short loc_3EEE2 ;~ 2FE6:0A92
loc_3eed4:
	// 10956 
cs=0x2fe6;eip=0x000a94; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x12));	// 103338 add     [bp+var_A], 12h ;~ 2FE6:0A94
cs=0x2fe6;eip=0x000a98; 	T(INC(si));	// 103339 inc     si ;~ 2FE6:0A98
cs=0x2fe6;eip=0x000a99; 	T(CMP(*(dw*)((&unk_571e5)), si));	// 103340 cmp     word ptr unk_571E5, si ;~ 2FE6:0A99
cs=0x2fe6;eip=0x000a9d; 	R(JA(loc_3eeb2));	// 103341 ja      short loc_3EEB2 ;~ 2FE6:0A9D
loc_3eedf:
	// 10957 
cs=0x2fe6;eip=0x000a9f; 	T(MOV(ax, 0x0FFFF));	// 103344 mov     ax, 0FFFFh ;~ 2FE6:0A9F
loc_3eee2:
	// 10958 
cs=0x2fe6;eip=0x000aa2; 	X(POP(si));	// 103347 pop     si ;~ 2FE6:0AA2
cs=0x2fe6;eip=0x000aa3; 	X(POP(di));	// 103348 pop     di ;~ 2FE6:0AA3
cs=0x2fe6;eip=0x000aa4; 	T(MOV(sp, bp));	// 103349 mov     sp, bp ;~ 2FE6:0AA4
cs=0x2fe6;eip=0x000aa6; 	X(POP(bp));	// 103350 pop     bp ;~ 2FE6:0AA6
cs=0x2fe6;eip=0x000aa7; 	R(RETN(2));	// 103351 retn    2 ;~ 2FE6:0AA7
sub_3eeea:
	// 103359 
#undef var_12
#define var_12 -0x12
	// 103361 var_12          = word ptr -12h ;~ 2FE6:0AAA
#undef var_10
#define var_10 -0x10
	// 103362 var_10          = word ptr -10h ;~ 2FE6:0AAA
#undef var_e
#define var_e -0x0E
	// 103363 var_E           = word ptr -0Eh ;~ 2FE6:0AAA
#undef var_c
#define var_c -0x0C
	// 103364 var_C           = word ptr -0Ch ;~ 2FE6:0AAA
#undef var_a
#define var_a -0x0A
	// 103365 var_A           = word ptr -0Ah ;~ 2FE6:0AAA
#undef var_8
#define var_8 -8
	// 103366 var_8           = word ptr -8 ;~ 2FE6:0AAA
#undef var_6
#define var_6 -6
	// 103367 var_6           = word ptr -6 ;~ 2FE6:0AAA
#undef arg_0
#define arg_0 4
	// 103368 arg_0           = word ptr  4 ;~ 2FE6:0AAA
cs=0x2fe6;eip=0x000aaa; 	X(PUSH(bp));	// 103370 push    bp ;~ 2FE6:0AAA
cs=0x2fe6;eip=0x000aab; 	T(MOV(bp, sp));	// 103371 mov     bp, sp ;~ 2FE6:0AAB
cs=0x2fe6;eip=0x000aad; 	T(SUB(sp, 0x12));	// 103372 sub     sp, 12h ;~ 2FE6:0AAD
cs=0x2fe6;eip=0x000ab0; 	X(PUSH(di));	// 103373 push    di ;~ 2FE6:0AB0
cs=0x2fe6;eip=0x000ab1; 	X(PUSH(si));	// 103374 push    si ;~ 2FE6:0AB1
cs=0x2fe6;eip=0x000ab2; 	T(SUB(si, si));	// 103375 sub     si, si ;~ 2FE6:0AB2
cs=0x2fe6;eip=0x000ab4; 	T(CMP(*(dw*)((&unk_571ce)), si));	// 103376 cmp     word ptr unk_571CE, si ;~ 2FE6:0AB4
cs=0x2fe6;eip=0x000ab8; 	R(JNZ(loc_3eefd));	// 103377 jnz     short loc_3EEFD ;~ 2FE6:0AB8
cs=0x2fe6;eip=0x000aba; 	R(JMP(loc_3ef97));	// 103378 jmp     loc_3EF97 ;~ 2FE6:0ABA
loc_3eefd:
	// 10959 
cs=0x2fe6;eip=0x000abd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 103382 mov     ax, [bp+arg_0] ;~ 2FE6:0ABD
cs=0x2fe6;eip=0x000ac0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 103383 mov     [bp+var_8], ax ;~ 2FE6:0AC0
cs=0x2fe6;eip=0x000ac3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 103384 mov     [bp+var_6], ds ;~ 2FE6:0AC3
cs=0x2fe6;eip=0x000ac6; 	T(MOV(dx, ds));	// 103385 mov     dx, ds ;~ 2FE6:0AC6
cs=0x2fe6;eip=0x000ac8; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 103386 mov     [bp+var_C], ax ;~ 2FE6:0AC8
cs=0x2fe6;eip=0x000acb; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 103387 mov     [bp+var_A], dx ;~ 2FE6:0ACB
cs=0x2fe6;eip=0x000ace; 	T(MOV(ax, 0x0E));	// 103388 mov     ax, 0Eh ;~ 2FE6:0ACE
cs=0x2fe6;eip=0x000ad1; 	T(MUL1_2(si));	// 103389 mul     si ;~ 2FE6:0AD1
cs=0x2fe6;eip=0x000ad3; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 103390 mov     [bp+var_E], ax ;~ 2FE6:0AD3
cs=0x2fe6;eip=0x000ad6; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 103391 mov     [bp+var_10], ax ;~ 2FE6:0AD6
cs=0x2fe6;eip=0x000ad9; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 103392 mov     [bp+var_12], ax ;~ 2FE6:0AD9
loc_3ef1c:
	// 10960 
cs=0x2fe6;eip=0x000adc; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_e))));	// 103395 mov     bx, [bp+var_E] ;~ 2FE6:0ADC
cs=0x2fe6;eip=0x000adf; 	T(ADD(bx, *(dw*)((&unk_571ca))));	// 103396 add     bx, word ptr unk_571CA ;~ 2FE6:0ADF
cs=0x2fe6;eip=0x000ae3; 	T(MOV(es, *(dw*)((&unk_571cc))));	// 103397 mov     es, word ptr unk_571CC ;~ 2FE6:0AE3
cs=0x2fe6;eip=0x000ae7; 	T(CMP(*(raddr(es,bx+1)), 0x2A));	// 103399 cmp     byte ptr es:[bx+1], 2Ah ; '*' ;~ 2FE6:0AE7
cs=0x2fe6;eip=0x000aec; 	R(JNZ(loc_3ef53));	// 103400 jnz     short loc_3EF53 ;~ 2FE6:0AEC
cs=0x2fe6;eip=0x000aee; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_e))));	// 103401 mov     bx, [bp+var_E] ;~ 2FE6:0AEE
cs=0x2fe6;eip=0x000af1; 	T(ADD(bx, *(dw*)((&unk_571ca))));	// 103402 add     bx, word ptr unk_571CA ;~ 2FE6:0AF1
cs=0x2fe6;eip=0x000af5; 	T(CMP(*(raddr(es,bx+2)), 0x2E));	// 103403 cmp     byte ptr es:[bx+2], 2Eh ; '.' ;~ 2FE6:0AF5
cs=0x2fe6;eip=0x000afa; 	R(JNZ(loc_3ef53));	// 103404 jnz     short loc_3EF53 ;~ 2FE6:0AFA
cs=0x2fe6;eip=0x000afc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 103405 push    [bp+var_A] ;~ 2FE6:0AFC
cs=0x2fe6;eip=0x000aff; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 103406 push    [bp+var_C] ;~ 2FE6:0AFF
cs=0x2fe6;eip=0x000b02; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 103407 mov     ax, [bp+var_E] ;~ 2FE6:0B02
cs=0x2fe6;eip=0x000b05; 	T(ADD(ax, *(dw*)((&unk_571ca))));	// 103408 add     ax, word ptr unk_571CA ;~ 2FE6:0B05
cs=0x2fe6;eip=0x000b09; 	T(MOV(dx, es));	// 103409 mov     dx, es ;~ 2FE6:0B09
cs=0x2fe6;eip=0x000b0b; 	T(INC(ax));	// 103410 inc     ax ;~ 2FE6:0B0B
cs=0x2fe6;eip=0x000b0c; 	X(PUSH(dx));	// 103411 push    dx ;~ 2FE6:0B0C
cs=0x2fe6;eip=0x000b0d; 	X(PUSH(ax));	// 103412 push    ax ;~ 2FE6:0B0D
cs=0x2fe6;eip=0x000b0e; 	R(CALL(sub_3f14e,0));	// 103413 call    sub_3F14E ;~ 2FE6:0B0E
cs=0x2fe6;eip=0x000b11; 	R(JMP(loc_3ef6c));	// 103414 jmp     short loc_3EF6C ;~ 2FE6:0B11
loc_3ef53:
	// 10961 
cs=0x2fe6;eip=0x000b13; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 103419 push    [bp+var_6] ;~ 2FE6:0B13
cs=0x2fe6;eip=0x000b16; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 103420 push    [bp+var_8] ;~ 2FE6:0B16
cs=0x2fe6;eip=0x000b19; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 103421 mov     ax, [bp+var_10] ;~ 2FE6:0B19
cs=0x2fe6;eip=0x000b1c; 	T(ADD(ax, *(dw*)((&unk_571ca))));	// 103422 add     ax, word ptr unk_571CA ;~ 2FE6:0B1C
cs=0x2fe6;eip=0x000b20; 	T(MOV(dx, *(dw*)((&unk_571cc))));	// 103423 mov     dx, word ptr unk_571CC ;~ 2FE6:0B20
cs=0x2fe6;eip=0x000b24; 	T(INC(ax));	// 103424 inc     ax ;~ 2FE6:0B24
cs=0x2fe6;eip=0x000b25; 	X(PUSH(dx));	// 103425 push    dx ;~ 2FE6:0B25
cs=0x2fe6;eip=0x000b26; 	X(PUSH(ax));	// 103426 push    ax ;~ 2FE6:0B26
cs=0x2fe6;eip=0x000b27; 	R(CALLF(sub_3f1ec,0));	// 103427 call    sub_3F1EC ;~ 2FE6:0B27
loc_3ef6c:
	// 10962 
cs=0x2fe6;eip=0x000b2c; 	T(MOV(di, ax));	// 103430 mov     di, ax ;~ 2FE6:0B2C
cs=0x2fe6;eip=0x000b2e; 	T(OR(di, di));	// 103431 or      di, di ;~ 2FE6:0B2E
cs=0x2fe6;eip=0x000b30; 	R(JNZ(loc_3ef84));	// 103432 jnz     short loc_3EF84 ;~ 2FE6:0B30
cs=0x2fe6;eip=0x000b32; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_12))));	// 103433 mov     bx, [bp+var_12] ;~ 2FE6:0B32
cs=0x2fe6;eip=0x000b35; 	T(ADD(bx, *(dw*)((&unk_571ca))));	// 103434 add     bx, word ptr unk_571CA ;~ 2FE6:0B35
cs=0x2fe6;eip=0x000b39; 	T(MOV(es, *(dw*)((&unk_571cc))));	// 103435 mov     es, word ptr unk_571CC ;~ 2FE6:0B39
cs=0x2fe6;eip=0x000b3d; 	T(MOV(al, *(raddr(es,bx))));	// 103436 mov     al, es:[bx] ;~ 2FE6:0B3D
cs=0x2fe6;eip=0x000b40; 	T(SUB(ah, ah));	// 103437 sub     ah, ah ;~ 2FE6:0B40
cs=0x2fe6;eip=0x000b42; 	R(JMP(loc_3ef9a));	// 103438 jmp     short loc_3EF9A ;~ 2FE6:0B42
loc_3ef84:
	// 10963 
cs=0x2fe6;eip=0x000b44; 	X(ADD(*(dw*)(raddr(ss,bp+var_e)), 0x0E));	// 103442 add     [bp+var_E], 0Eh ;~ 2FE6:0B44
cs=0x2fe6;eip=0x000b48; 	X(ADD(*(dw*)(raddr(ss,bp+var_10)), 0x0E));	// 103443 add     [bp+var_10], 0Eh ;~ 2FE6:0B48
cs=0x2fe6;eip=0x000b4c; 	X(ADD(*(dw*)(raddr(ss,bp+var_12)), 0x0E));	// 103444 add     [bp+var_12], 0Eh ;~ 2FE6:0B4C
cs=0x2fe6;eip=0x000b50; 	T(INC(si));	// 103445 inc     si ;~ 2FE6:0B50
cs=0x2fe6;eip=0x000b51; 	T(CMP(*(dw*)((&unk_571ce)), si));	// 103446 cmp     word ptr unk_571CE, si ;~ 2FE6:0B51
cs=0x2fe6;eip=0x000b55; 	R(JA(loc_3ef1c));	// 103447 ja      short loc_3EF1C ;~ 2FE6:0B55
loc_3ef97:
	// 10964 
cs=0x2fe6;eip=0x000b57; 	T(MOV(ax, 0x0FFFF));	// 103450 mov     ax, 0FFFFh ;~ 2FE6:0B57
loc_3ef9a:
	// 10965 
cs=0x2fe6;eip=0x000b5a; 	X(POP(si));	// 103453 pop     si ;~ 2FE6:0B5A
cs=0x2fe6;eip=0x000b5b; 	X(POP(di));	// 103454 pop     di ;~ 2FE6:0B5B
cs=0x2fe6;eip=0x000b5c; 	T(MOV(sp, bp));	// 103455 mov     sp, bp ;~ 2FE6:0B5C
cs=0x2fe6;eip=0x000b5e; 	X(POP(bp));	// 103456 pop     bp ;~ 2FE6:0B5E
cs=0x2fe6;eip=0x000b5f; 	R(RETN(2));	// 103457 retn    2 ;~ 2FE6:0B5F
sub_3efa2:
	// 103465 
#undef var_a
#define var_a -0x0A
	// 103467 var_A           = word ptr -0Ah ;~ 2FE6:0B62
#undef var_8
#define var_8 -8
	// 103468 var_8           = word ptr -8 ;~ 2FE6:0B62
#undef var_6
#define var_6 -6
	// 103469 var_6           = word ptr -6 ;~ 2FE6:0B62
#undef arg_0
#define arg_0 4
	// 103470 arg_0           = word ptr  4 ;~ 2FE6:0B62
cs=0x2fe6;eip=0x000b62; 	X(PUSH(bp));	// 103472 push    bp ;~ 2FE6:0B62
cs=0x2fe6;eip=0x000b63; 	T(MOV(bp, sp));	// 103473 mov     bp, sp ;~ 2FE6:0B63
cs=0x2fe6;eip=0x000b65; 	T(SUB(sp, 0x0A));	// 103474 sub     sp, 0Ah ;~ 2FE6:0B65
cs=0x2fe6;eip=0x000b68; 	X(PUSH(di));	// 103475 push    di ;~ 2FE6:0B68
cs=0x2fe6;eip=0x000b69; 	X(PUSH(si));	// 103476 push    si ;~ 2FE6:0B69
cs=0x2fe6;eip=0x000b6a; 	T(SUB(si, si));	// 103477 sub     si, si ;~ 2FE6:0B6A
cs=0x2fe6;eip=0x000b6c; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 103478 cmp     word ptr unk_571D4, si ;~ 2FE6:0B6C
cs=0x2fe6;eip=0x000b70; 	R(JZ(loc_3eff0));	// 103479 jz      short loc_3EFF0 ;~ 2FE6:0B70
cs=0x2fe6;eip=0x000b72; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 103480 mov     ax, [bp+arg_0] ;~ 2FE6:0B72
cs=0x2fe6;eip=0x000b75; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 103481 mov     [bp+var_8], ax ;~ 2FE6:0B75
cs=0x2fe6;eip=0x000b78; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 103482 mov     [bp+var_6], ds ;~ 2FE6:0B78
cs=0x2fe6;eip=0x000b7b; 	T(MOV(ax, 0x1C));	// 103483 mov     ax, 1Ch ;~ 2FE6:0B7B
cs=0x2fe6;eip=0x000b7e; 	T(MUL1_2(si));	// 103484 mul     si ;~ 2FE6:0B7E
cs=0x2fe6;eip=0x000b80; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 103485 mov     [bp+var_A], ax ;~ 2FE6:0B80
loc_3efc3:
	// 10966 
cs=0x2fe6;eip=0x000b83; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 103488 push    [bp+var_6] ;~ 2FE6:0B83
cs=0x2fe6;eip=0x000b86; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 103489 push    [bp+var_8] ;~ 2FE6:0B86
cs=0x2fe6;eip=0x000b89; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 103490 mov     ax, [bp+var_A] ;~ 2FE6:0B89
cs=0x2fe6;eip=0x000b8c; 	T(ADD(ax, *(dw*)((&unk_571d0))));	// 103491 add     ax, word ptr unk_571D0 ;~ 2FE6:0B8C
cs=0x2fe6;eip=0x000b90; 	T(MOV(dx, *(dw*)((&unk_571d2))));	// 103492 mov     dx, word ptr unk_571D2 ;~ 2FE6:0B90
cs=0x2fe6;eip=0x000b94; 	X(PUSH(dx));	// 103493 push    dx ;~ 2FE6:0B94
cs=0x2fe6;eip=0x000b95; 	X(PUSH(ax));	// 103494 push    ax ;~ 2FE6:0B95
cs=0x2fe6;eip=0x000b96; 	R(CALLF(sub_3f1ec,0));	// 103495 call    sub_3F1EC ;~ 2FE6:0B96
cs=0x2fe6;eip=0x000b9b; 	T(MOV(di, ax));	// 103496 mov     di, ax ;~ 2FE6:0B9B
cs=0x2fe6;eip=0x000b9d; 	T(OR(di, di));	// 103497 or      di, di ;~ 2FE6:0B9D
cs=0x2fe6;eip=0x000b9f; 	R(JNZ(loc_3efe5));	// 103498 jnz     short loc_3EFE5 ;~ 2FE6:0B9F
cs=0x2fe6;eip=0x000ba1; 	T(MOV(ax, si));	// 103499 mov     ax, si ;~ 2FE6:0BA1
cs=0x2fe6;eip=0x000ba3; 	R(JMP(loc_3eff3));	// 103500 jmp     short loc_3EFF3 ;~ 2FE6:0BA3
loc_3efe5:
	// 10967 
cs=0x2fe6;eip=0x000ba5; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x1C));	// 103504 add     [bp+var_A], 1Ch ;~ 2FE6:0BA5
cs=0x2fe6;eip=0x000ba9; 	T(INC(si));	// 103505 inc     si ;~ 2FE6:0BA9
cs=0x2fe6;eip=0x000baa; 	T(CMP(*(dw*)((&unk_571d4)), si));	// 103506 cmp     word ptr unk_571D4, si ;~ 2FE6:0BAA
cs=0x2fe6;eip=0x000bae; 	R(JA(loc_3efc3));	// 103507 ja      short loc_3EFC3 ;~ 2FE6:0BAE
loc_3eff0:
	// 10968 
cs=0x2fe6;eip=0x000bb0; 	T(MOV(ax, 0x0FFFF));	// 103510 mov     ax, 0FFFFh ;~ 2FE6:0BB0
loc_3eff3:
	// 10969 
cs=0x2fe6;eip=0x000bb3; 	X(POP(si));	// 103513 pop     si ;~ 2FE6:0BB3
cs=0x2fe6;eip=0x000bb4; 	X(POP(di));	// 103514 pop     di ;~ 2FE6:0BB4
cs=0x2fe6;eip=0x000bb5; 	T(MOV(sp, bp));	// 103515 mov     sp, bp ;~ 2FE6:0BB5
cs=0x2fe6;eip=0x000bb7; 	X(POP(bp));	// 103516 pop     bp ;~ 2FE6:0BB7
cs=0x2fe6;eip=0x000bb8; 	R(RETN(2));	// 103517 retn    2 ;~ 2FE6:0BB8
sub_3f14e:
	// 103707 
#undef arg_0
#define arg_0 4
	// 103710 arg_0           = dword ptr  4 ;~ 2FE6:0D0E
#undef arg_4
#define arg_4 8
	// 103711 arg_4           = dword ptr  8 ;~ 2FE6:0D0E
cs=0x2fe6;eip=0x000d0e; 	X(PUSH(bp));	// 103713 push    bp ;~ 2FE6:0D0E
cs=0x2fe6;eip=0x000d0f; 	T(MOV(bp, sp));	// 103714 mov     bp, sp ;~ 2FE6:0D0F
cs=0x2fe6;eip=0x000d11; 	T(SUB(sp, 4));	// 103715 sub     sp, 4 ;~ 2FE6:0D11
cs=0x2fe6;eip=0x000d14; 	X(PUSH(di));	// 103716 push    di ;~ 2FE6:0D14
cs=0x2fe6;eip=0x000d15; 	X(PUSH(si));	// 103717 push    si ;~ 2FE6:0D15
cs=0x2fe6;eip=0x000d16; 	X(PUSH(di));	// 103718 push    di ;~ 2FE6:0D16
cs=0x2fe6;eip=0x000d17; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_0))));	// 103719 les     di, [bp+arg_0] ;~ 2FE6:0D17
cs=0x2fe6;eip=0x000d1a; 	T(MOV(cx, 0x0FFFF));	// 103721 mov     cx, 0FFFFh ;~ 2FE6:0D1A
cs=0x2fe6;eip=0x000d1d; 	T(XOR(ax, ax));	// 103722 xor     ax, ax ;~ 2FE6:0D1D
	// 103723 repne scasb ;~ 2FE6:0D1F
cs=0x2fe6;eip=0x000d1f; 	T(	REPNE SCASB);	// 103723 repne scasb ;~ 2FE6:0D1F
cs=0x2fe6;eip=0x000d21; 	T(NOT(cx));	// 103724 not     cx ;~ 2FE6:0D21
cs=0x2fe6;eip=0x000d23; 	T(DEC(cx));	// 103725 dec     cx ;~ 2FE6:0D23
cs=0x2fe6;eip=0x000d24; 	X(POP(di));	// 103726 pop     di ;~ 2FE6:0D24
cs=0x2fe6;eip=0x000d25; 	T(MOV(ax, cx));	// 103727 mov     ax, cx ;~ 2FE6:0D25
cs=0x2fe6;eip=0x000d27; 	T(MOV(dx, ax));	// 103728 mov     dx, ax ;~ 2FE6:0D27
cs=0x2fe6;eip=0x000d29; 	X(PUSH(di));	// 103729 push    di ;~ 2FE6:0D29
cs=0x2fe6;eip=0x000d2a; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_4))));	// 103730 les     di, [bp+arg_4] ;~ 2FE6:0D2A
cs=0x2fe6;eip=0x000d2d; 	T(MOV(cx, 0x0FFFF));	// 103731 mov     cx, 0FFFFh ;~ 2FE6:0D2D
cs=0x2fe6;eip=0x000d30; 	T(XOR(ax, ax));	// 103732 xor     ax, ax ;~ 2FE6:0D30
	// 103733 repne scasb ;~ 2FE6:0D32
cs=0x2fe6;eip=0x000d32; 	T(	REPNE SCASB);	// 103733 repne scasb ;~ 2FE6:0D32
cs=0x2fe6;eip=0x000d34; 	T(NOT(cx));	// 103734 not     cx ;~ 2FE6:0D34
cs=0x2fe6;eip=0x000d36; 	T(DEC(cx));	// 103735 dec     cx ;~ 2FE6:0D36
cs=0x2fe6;eip=0x000d37; 	X(POP(di));	// 103736 pop     di ;~ 2FE6:0D37
cs=0x2fe6;eip=0x000d38; 	T(SUB(cx, dx));	// 103737 sub     cx, dx ;~ 2FE6:0D38
cs=0x2fe6;eip=0x000d3a; 	T(INC(cx));	// 103738 inc     cx ;~ 2FE6:0D3A
cs=0x2fe6;eip=0x000d3b; 	X(ADD(*(dw*)((dw*)(raddr(ss,bp+arg_4))), cx));	// 103739 add     word ptr [bp+arg_4], cx ;~ 2FE6:0D3B
cs=0x2fe6;eip=0x000d3e; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 103740 inc     word ptr [bp+arg_0] ;~ 2FE6:0D3E
loc_3f181:
	// 10983 
cs=0x2fe6;eip=0x000d41; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 103743 les     bx, [bp+arg_0] ;~ 2FE6:0D41
cs=0x2fe6;eip=0x000d44; 	T(MOV(al, *(raddr(es,bx))));	// 103744 mov     al, es:[bx] ;~ 2FE6:0D44
cs=0x2fe6;eip=0x000d47; 	T(CBW);	// 103745 cbw ;~ 2FE6:0D47
cs=0x2fe6;eip=0x000d48; 	X(PUSH(ax));	// 103746 push    ax ;~ 2FE6:0D48
cs=0x2fe6;eip=0x000d49; 	R(CALLF(sub_102f4,0));	// 103747 call    sub_102F4 ;~ 2FE6:0D49
cs=0x2fe6;eip=0x000d4e; 	T(ADD(sp, 2));	// 103748 add     sp, 2 ;~ 2FE6:0D4E
cs=0x2fe6;eip=0x000d51; 	T(MOV(si, ax));	// 103749 mov     si, ax ;~ 2FE6:0D51
cs=0x2fe6;eip=0x000d53; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 103750 les     bx, [bp+arg_4] ;~ 2FE6:0D53
cs=0x2fe6;eip=0x000d56; 	T(MOV(al, *(raddr(es,bx))));	// 103751 mov     al, es:[bx] ;~ 2FE6:0D56
cs=0x2fe6;eip=0x000d59; 	T(CBW);	// 103752 cbw ;~ 2FE6:0D59
cs=0x2fe6;eip=0x000d5a; 	X(PUSH(ax));	// 103753 push    ax ;~ 2FE6:0D5A
cs=0x2fe6;eip=0x000d5b; 	R(CALLF(sub_102f4,0));	// 103754 call    sub_102F4 ;~ 2FE6:0D5B
cs=0x2fe6;eip=0x000d60; 	T(ADD(sp, 2));	// 103755 add     sp, 2 ;~ 2FE6:0D60
cs=0x2fe6;eip=0x000d63; 	T(MOV(di, ax));	// 103756 mov     di, ax ;~ 2FE6:0D63
cs=0x2fe6;eip=0x000d65; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 103757 inc     word ptr [bp+arg_0] ;~ 2FE6:0D65
cs=0x2fe6;eip=0x000d68; 	X(INC(*(dw*)((dw*)(raddr(ss,bp+arg_4)))));	// 103758 inc     word ptr [bp+arg_4] ;~ 2FE6:0D68
cs=0x2fe6;eip=0x000d6b; 	T(OR(si, si));	// 103759 or      si, si ;~ 2FE6:0D6B
cs=0x2fe6;eip=0x000d6d; 	R(JZ(loc_3f1b3));	// 103760 jz      short loc_3F1B3 ;~ 2FE6:0D6D
cs=0x2fe6;eip=0x000d6f; 	T(CMP(si, di));	// 103761 cmp     si, di ;~ 2FE6:0D6F
cs=0x2fe6;eip=0x000d71; 	R(JZ(loc_3f181));	// 103762 jz      short loc_3F181 ;~ 2FE6:0D71
loc_3f1b3:
	// 10984 
cs=0x2fe6;eip=0x000d73; 	T(MOV(ax, si));	// 103765 mov     ax, si ;~ 2FE6:0D73
cs=0x2fe6;eip=0x000d75; 	T(SUB(ax, di));	// 103766 sub     ax, di ;~ 2FE6:0D75
cs=0x2fe6;eip=0x000d77; 	X(POP(si));	// 103767 pop     si ;~ 2FE6:0D77
cs=0x2fe6;eip=0x000d78; 	X(POP(di));	// 103768 pop     di ;~ 2FE6:0D78
cs=0x2fe6;eip=0x000d79; 	T(MOV(sp, bp));	// 103769 mov     sp, bp ;~ 2FE6:0D79
cs=0x2fe6;eip=0x000d7b; 	X(POP(bp));	// 103770 pop     bp ;~ 2FE6:0D7B
cs=0x2fe6;eip=0x000d7c; 	R(RETN(8));	// 103771 retn    8 ;~ 2FE6:0D7C
sub_3f1c0:
	// 103781 
#undef arg_0
#define arg_0 6
	// 103784 arg_0           = dword ptr  6 ;~ 2FE6:0D80
#undef arg_4
#define arg_4 0x0A
	// 103785 arg_4           = dword ptr  0Ah ;~ 2FE6:0D80
cs=0x2fe6;eip=0x000d80; 	X(PUSH(bp));	// 103787 push    bp ;~ 2FE6:0D80
cs=0x2fe6;eip=0x000d81; 	T(MOV(bp, sp));	// 103788 mov     bp, sp ;~ 2FE6:0D81
cs=0x2fe6;eip=0x000d83; 	T(MOV(dx, di));	// 103789 mov     dx, di ;~ 2FE6:0D83
cs=0x2fe6;eip=0x000d85; 	T(MOV(bx, si));	// 103790 mov     bx, si ;~ 2FE6:0D85
cs=0x2fe6;eip=0x000d87; 	X(PUSH(ds));	// 103791 push    ds ;~ 2FE6:0D87
cs=0x2fe6;eip=0x000d88; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_4))));	// 103792 lds     si, [bp+arg_4] ;~ 2FE6:0D88
cs=0x2fe6;eip=0x000d8b; 	T(LES(di, *(dd*)(raddr(ss,bp+arg_0))));	// 103793 les     di, [bp+arg_0] ;~ 2FE6:0D8B
cs=0x2fe6;eip=0x000d8e; 	T(XOR(ax, ax));	// 103794 xor     ax, ax ;~ 2FE6:0D8E
cs=0x2fe6;eip=0x000d90; 	T(MOV(cx, 0x0FFFF));	// 103795 mov     cx, 0FFFFh ;~ 2FE6:0D90
cs=0x2fe6;eip=0x000d93; 	T(CLD);	// 103796 cld ;~ 2FE6:0D93
	// 103797 repne scasb ;~ 2FE6:0D94
cs=0x2fe6;eip=0x000d94; 	T(	REPNE SCASB);	// 103797 repne scasb ;~ 2FE6:0D94
cs=0x2fe6;eip=0x000d96; 	T(NOT(cx));	// 103798 not     cx ;~ 2FE6:0D96
cs=0x2fe6;eip=0x000d98; 	T(SUB(di, cx));	// 103799 sub     di, cx ;~ 2FE6:0D98
	// 103800 repe cmpsb ;~ 2FE6:0D9A
cs=0x2fe6;eip=0x000d9a; 	T(	REPE CMPSB);	// 103800 repe cmpsb ;~ 2FE6:0D9A
cs=0x2fe6;eip=0x000d9c; 	R(JZ(loc_3f1e3));	// 103801 jz      short loc_3F1E3 ;~ 2FE6:0D9C
cs=0x2fe6;eip=0x000d9e; 	T(SBB(ax, ax));	// 103802 sbb     ax, ax ;~ 2FE6:0D9E
cs=0x2fe6;eip=0x000da0; 	T(SBB(ax, 0x0FFFF));	// 103803 sbb     ax, 0FFFFh ;~ 2FE6:0DA0
loc_3f1e3:
	// 10985 
cs=0x2fe6;eip=0x000da3; 	X(POP(ds));	// 103806 pop     ds ;~ 2FE6:0DA3
cs=0x2fe6;eip=0x000da4; 	T(MOV(si, bx));	// 103807 mov     si, bx ;~ 2FE6:0DA4
cs=0x2fe6;eip=0x000da6; 	T(MOV(di, dx));	// 103808 mov     di, dx ;~ 2FE6:0DA6
cs=0x2fe6;eip=0x000da8; 	X(POP(bp));	// 103809 pop     bp ;~ 2FE6:0DA8
cs=0x2fe6;eip=0x000da9; 	R(RETF(8));	// 103810 retf    8 ;~ 2FE6:0DA9
sub_3f1ec:
	// 103818 
#undef arg_0
#define arg_0 6
	// 103821 arg_0           = dword ptr  6 ;~ 2FE6:0DAC
#undef arg_4
#define arg_4 0x0A
	// 103822 arg_4           = dword ptr  0Ah ;~ 2FE6:0DAC
cs=0x2fe6;eip=0x000dac; 	X(PUSH(bp));	// 103824 push    bp ;~ 2FE6:0DAC
cs=0x2fe6;eip=0x000dad; 	T(MOV(bp, sp));	// 103825 mov     bp, sp ;~ 2FE6:0DAD
cs=0x2fe6;eip=0x000daf; 	T(MOV(dx, si));	// 103826 mov     dx, si ;~ 2FE6:0DAF
cs=0x2fe6;eip=0x000db1; 	X(PUSH(ds));	// 103827 push    ds ;~ 2FE6:0DB1
cs=0x2fe6;eip=0x000db2; 	T(LDS(si, *(dd*)(raddr(ss,bp+arg_4))));	// 103828 lds     si, [bp+arg_4] ;~ 2FE6:0DB2
cs=0x2fe6;eip=0x000db5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 103829 les     bx, [bp+arg_0] ;~ 2FE6:0DB5
cs=0x2fe6;eip=0x000db8; 	T(MOV(al, 0x0FF));	// 103830 mov     al, 0FFh ;~ 2FE6:0DB8
cs=0x2fe6;eip=0x000dba; 	T(CLD);	// 103831 cld ;~ 2FE6:0DBA
loc_3f1fb:
	// 10986 
cs=0x2fe6;eip=0x000dbb; 	T(OR(al, al));	// 103835 or      al, al ;~ 2FE6:0DBB
cs=0x2fe6;eip=0x000dbd; 	R(JZ(loc_3f22c));	// 103836 jz      short loc_3F22C ;~ 2FE6:0DBD
cs=0x2fe6;eip=0x000dbf; 	T(LODSB);	// 103837 lodsb ;~ 2FE6:0DBF
cs=0x2fe6;eip=0x000dc0; 	T(MOV(ah, *(raddr(es,bx))));	// 103838 mov     ah, es:[bx] ;~ 2FE6:0DC0
cs=0x2fe6;eip=0x000dc3; 	T(INC(bx));	// 103839 inc     bx ;~ 2FE6:0DC3
cs=0x2fe6;eip=0x000dc4; 	T(CMP(ah, al));	// 103840 cmp     ah, al ;~ 2FE6:0DC4
cs=0x2fe6;eip=0x000dc6; 	R(JZ(loc_3f1fb));	// 103841 jz      short loc_3F1FB ;~ 2FE6:0DC6
cs=0x2fe6;eip=0x000dc8; 	T(SUB(al, 0x41));	// 103842 sub     al, 41h ; 'A' ;~ 2FE6:0DC8
cs=0x2fe6;eip=0x000dca; 	T(CMP(al, 0x1A));	// 103843 cmp     al, 1Ah ;~ 2FE6:0DCA
cs=0x2fe6;eip=0x000dcc; 	T(SBB(cl, cl));	// 103844 sbb     cl, cl ;~ 2FE6:0DCC
cs=0x2fe6;eip=0x000dce; 	T(AND(cl, 0x20));	// 103845 and     cl, 20h ;~ 2FE6:0DCE
cs=0x2fe6;eip=0x000dd1; 	T(ADD(al, cl));	// 103846 add     al, cl ;~ 2FE6:0DD1
cs=0x2fe6;eip=0x000dd3; 	T(ADD(al, 0x41));	// 103847 add     al, 41h ; 'A' ;~ 2FE6:0DD3
cs=0x2fe6;eip=0x000dd5; 	T(XCHG(ah, al));	// 103848 xchg    ah, al ;~ 2FE6:0DD5
cs=0x2fe6;eip=0x000dd7; 	T(SUB(al, 0x41));	// 103849 sub     al, 41h ; 'A' ;~ 2FE6:0DD7
cs=0x2fe6;eip=0x000dd9; 	T(CMP(al, 0x1A));	// 103850 cmp     al, 1Ah ;~ 2FE6:0DD9
cs=0x2fe6;eip=0x000ddb; 	T(SBB(cl, cl));	// 103851 sbb     cl, cl ;~ 2FE6:0DDB
cs=0x2fe6;eip=0x000ddd; 	T(AND(cl, 0x20));	// 103852 and     cl, 20h ;~ 2FE6:0DDD
cs=0x2fe6;eip=0x000de0; 	T(ADD(al, cl));	// 103853 add     al, cl ;~ 2FE6:0DE0
cs=0x2fe6;eip=0x000de2; 	T(ADD(al, 0x41));	// 103854 add     al, 41h ; 'A' ;~ 2FE6:0DE2
cs=0x2fe6;eip=0x000de4; 	T(CMP(al, ah));	// 103855 cmp     al, ah ;~ 2FE6:0DE4
cs=0x2fe6;eip=0x000de6; 	R(JZ(loc_3f1fb));	// 103856 jz      short loc_3F1FB ;~ 2FE6:0DE6
cs=0x2fe6;eip=0x000de8; 	T(SBB(al, al));	// 103857 sbb     al, al ;~ 2FE6:0DE8
cs=0x2fe6;eip=0x000dea; 	T(SBB(al, 0x0FF));	// 103858 sbb     al, 0FFh ;~ 2FE6:0DEA
loc_3f22c:
	// 10987 
cs=0x2fe6;eip=0x000dec; 	T(CBW);	// 103861 cbw ;~ 2FE6:0DEC
cs=0x2fe6;eip=0x000ded; 	X(POP(ds));	// 103862 pop     ds ;~ 2FE6:0DED
cs=0x2fe6;eip=0x000dee; 	T(MOV(si, dx));	// 103863 mov     si, dx ;~ 2FE6:0DEE
cs=0x2fe6;eip=0x000df0; 	X(POP(bp));	// 103864 pop     bp ;~ 2FE6:0DF0
cs=0x2fe6;eip=0x000df1; 	R(RETF(8));	// 103865 retf    8 ;~ 2FE6:0DF1
sub_3f234:
	// 103872 
cs=0x2fe6;eip=0x000df4; 	R(_INT(0x11));	// 103873 int     11h             ; EQUIPMENT DETERMINATION ;~ 2FE6:0DF4
cs=0x2fe6;eip=0x000df6; 	T(TEST(ax, 1));	// 103875 test    ax, 1 ;~ 2FE6:0DF6
cs=0x2fe6;eip=0x000df9; 	R(JNZ(loc_3f240));	// 103876 jnz     short loc_3F240 ;~ 2FE6:0DF9
cs=0x2fe6;eip=0x000dfb; 	T(XOR(ax, ax));	// 103877 xor     ax, ax ;~ 2FE6:0DFB
cs=0x2fe6;eip=0x000dfd; 	R(RETN(2));	// 103878 retn    2 ;~ 2FE6:0DFD
loc_3f240:
	// 10988 
cs=0x2fe6;eip=0x000e00; 	T(MOV(cl, 6));	// 103882 mov     cl, 6 ;~ 2FE6:0E00
cs=0x2fe6;eip=0x000e02; 	T(SHR(ax, cl));	// 103883 shr     ax, cl ;~ 2FE6:0E02
cs=0x2fe6;eip=0x000e04; 	T(AND(ax, 3));	// 103884 and     ax, 3 ;~ 2FE6:0E04
cs=0x2fe6;eip=0x000e07; 	T(INC(ax));	// 103885 inc     ax ;~ 2FE6:0E07
cs=0x2fe6;eip=0x000e08; 	R(RETN(2));	// 103886 retn    2 ;~ 2FE6:0E08
sub_3f24b:
	// 103894 
#undef arg_2
#define arg_2 6
	// 103896 arg_2           = word ptr  6 ;~ 2FE6:0E0B
cs=0x2fe6;eip=0x000e0b; 	X(PUSH(bp));	// 103898 push    bp ;~ 2FE6:0E0B
cs=0x2fe6;eip=0x000e0c; 	T(MOV(bp, sp));	// 103899 mov     bp, sp ;~ 2FE6:0E0C
cs=0x2fe6;eip=0x000e0e; 	T(MOV(bx, si));	// 103900 mov     bx, si ;~ 2FE6:0E0E
cs=0x2fe6;eip=0x000e10; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_2))));	// 103901 mov     si, [bp+arg_2] ;~ 2FE6:0E10
cs=0x2fe6;eip=0x000e13; 	T(MOV(ah, 0x19));	// 103902 mov     ah, 19h ;~ 2FE6:0E13
cs=0x2fe6;eip=0x000e15; 	R(_INT(0x21));	// 103903 int     21h             ; DOS - GET DEFAULT DISK NUMBER ;~ 2FE6:0E15
cs=0x2fe6;eip=0x000e17; 	T(ADD(al, 0x41));	// 103904 add     al, 41h ; 'A' ;~ 2FE6:0E17
cs=0x2fe6;eip=0x000e19; 	X(MOV(*(raddr(ds,si)), al));	// 103905 mov     [si], al ;~ 2FE6:0E19
cs=0x2fe6;eip=0x000e1b; 	T(INC(si));	// 103906 inc     si ;~ 2FE6:0E1B
cs=0x2fe6;eip=0x000e1c; 	X(MOV(*(raddr(ds,si)), 0x3A));	// 103907 mov     byte ptr [si], 3Ah ; ':' ;~ 2FE6:0E1C
cs=0x2fe6;eip=0x000e1f; 	T(INC(si));	// 103908 inc     si ;~ 2FE6:0E1F
cs=0x2fe6;eip=0x000e20; 	X(MOV(*(raddr(ds,si)), 0x5C));	// 103909 mov     byte ptr [si], 5Ch ; '\' ;~ 2FE6:0E20
cs=0x2fe6;eip=0x000e23; 	T(INC(si));	// 103910 inc     si ;~ 2FE6:0E23
cs=0x2fe6;eip=0x000e24; 	T(MOV(ah, 0x47));	// 103911 mov     ah, 47h ; 'G' ;~ 2FE6:0E24
cs=0x2fe6;eip=0x000e26; 	T(XOR(dl, dl));	// 103912 xor     dl, dl ;~ 2FE6:0E26
cs=0x2fe6;eip=0x000e28; 	R(_INT(0x21));	// 103913 int     21h             ; DOS - 2+ - GET CURRENT DIRECTORY ;~ 2FE6:0E28
cs=0x2fe6;eip=0x000e2a; 	R(JC(loc_3f28c));	// 103916 jb      short loc_3F28C ;~ 2FE6:0E2A
cs=0x2fe6;eip=0x000e2c; 	T(MOV(dx, di));	// 103917 mov     dx, di ;~ 2FE6:0E2C
cs=0x2fe6;eip=0x000e2e; 	T(MOV(di, si));	// 103918 mov     di, si ;~ 2FE6:0E2E
cs=0x2fe6;eip=0x000e30; 	X(PUSH(ds));	// 103919 push    ds ;~ 2FE6:0E30
cs=0x2fe6;eip=0x000e31; 	X(POP(es));	// 103920 pop     es ;~ 2FE6:0E31
cs=0x2fe6;eip=0x000e32; 	T(XOR(ax, ax));	// 103922 xor     ax, ax ;~ 2FE6:0E32
cs=0x2fe6;eip=0x000e34; 	T(MOV(cx, 0x43));	// 103923 mov     cx, 43h ; 'C' ;~ 2FE6:0E34
cs=0x2fe6;eip=0x000e37; 	T(CLD);	// 103924 cld ;~ 2FE6:0E37
	// 103925 repne scasb ;~ 2FE6:0E38
cs=0x2fe6;eip=0x000e38; 	T(	REPNE SCASB);	// 103925 repne scasb ;~ 2FE6:0E38
cs=0x2fe6;eip=0x000e3a; 	T(MOV(si, di));	// 103926 mov     si, di ;~ 2FE6:0E3A
cs=0x2fe6;eip=0x000e3c; 	T(DEC(si));	// 103927 dec     si ;~ 2FE6:0E3C
cs=0x2fe6;eip=0x000e3d; 	X(MOV(*(raddr(ds,si)), 0x5C));	// 103928 mov     byte ptr [si], 5Ch ; '\' ;~ 2FE6:0E3D
cs=0x2fe6;eip=0x000e40; 	T(INC(si));	// 103929 inc     si ;~ 2FE6:0E40
cs=0x2fe6;eip=0x000e41; 	X(MOV(*(raddr(ds,si)), 0));	// 103930 mov     byte ptr [si], 0 ;~ 2FE6:0E41
cs=0x2fe6;eip=0x000e44; 	T(MOV(si, bx));	// 103931 mov     si, bx ;~ 2FE6:0E44
cs=0x2fe6;eip=0x000e46; 	T(MOV(di, dx));	// 103932 mov     di, dx ;~ 2FE6:0E46
cs=0x2fe6;eip=0x000e48; 	X(POP(bp));	// 103933 pop     bp ;~ 2FE6:0E48
cs=0x2fe6;eip=0x000e49; 	R(RETN(4));	// 103934 retn    4 ;~ 2FE6:0E49
loc_3f28c:
	// 10989 
cs=0x2fe6;eip=0x000e4c; 	T(MOV(ax, 0x0FFFF));	// 103938 mov     ax, 0FFFFh ;~ 2FE6:0E4C
cs=0x2fe6;eip=0x000e4f; 	T(MOV(si, bx));	// 103939 mov     si, bx ;~ 2FE6:0E4F
cs=0x2fe6;eip=0x000e51; 	X(POP(bp));	// 103940 pop     bp ;~ 2FE6:0E51
cs=0x2fe6;eip=0x000e52; 	R(RETN(4));	// 103941 retn    4 ;~ 2FE6:0E52
sub_3f356:
	// 104049 
cs=0x2fe6;eip=0x000f16; 	X(PUSH(si));	// 104051 push    si ;~ 2FE6:0F16
cs=0x2fe6;eip=0x000f17; 	X(PUSH(es));	// 104052 push    es ;~ 2FE6:0F17
cs=0x2fe6;eip=0x000f18; 	X(PUSH(cx));	// 104053 push    cx ;~ 2FE6:0F18
cs=0x2fe6;eip=0x000f19; 	X(PUSH(dx));	// 104054 push    dx ;~ 2FE6:0F19
cs=0x2fe6;eip=0x000f1a; 	T(MOV(si, *(dw*)((&unk_4b0b2))));	// 104055 mov     si, word ptr unk_4B0B2 ;~ 2FE6:0F1A
cs=0x2fe6;eip=0x000f1e; 	T(INC(si));	// 104056 inc     si ;~ 2FE6:0F1E
cs=0x2fe6;eip=0x000f1f; 	X(MOV(*(dw*)((&unk_4b0b2)), si));	// 104057 mov     word ptr unk_4B0B2, si ;~ 2FE6:0F1F
cs=0x2fe6;eip=0x000f23; 	T(CMP(si, *(dw*)((&unk_4b0b4))));	// 104058 cmp     si, word ptr unk_4B0B4 ;~ 2FE6:0F23
cs=0x2fe6;eip=0x000f27; 	R(JNC(loc_3f386));	// 104059 jnb     short loc_3F386 ;~ 2FE6:0F27
cs=0x2fe6;eip=0x000f29; 	T(MOV(ax, *(dw*)((&unk_57179))));	// 104060 mov     ax, word ptr unk_57179 ;~ 2FE6:0F29
cs=0x2fe6;eip=0x000f2c; 	T(ADD(si, *(dw*)((&unk_57177))));	// 104061 add     si, word ptr unk_57177 ;~ 2FE6:0F2C
cs=0x2fe6;eip=0x000f30; 	R(JNC(loc_3f375));	// 104062 jnb     short loc_3F375 ;~ 2FE6:0F30
cs=0x2fe6;eip=0x000f32; 	T(ADD(ax, 0x1000));	// 104063 add     ax, 1000h ;~ 2FE6:0F32
loc_3f375:
	// 10997 
cs=0x2fe6;eip=0x000f35; 	T(MOV(es, ax));	// 104066 mov     es, ax ;~ 2FE6:0F35
cs=0x2fe6;eip=0x000f37; 	T(MOV(al, *(raddr(es,si))));	// 104067 mov     al, es:[si] ;~ 2FE6:0F37
cs=0x2fe6;eip=0x000f3a; 	T(XOR(ah, ah));	// 104068 xor     ah, ah ;~ 2FE6:0F3A
cs=0x2fe6;eip=0x000f3c; 	T(CLC);	// 104069 clc ;~ 2FE6:0F3C
cs=0x2fe6;eip=0x000f3d; 	X(POP(dx));	// 104070 pop     dx ;~ 2FE6:0F3D
cs=0x2fe6;eip=0x000f3e; 	X(POP(cx));	// 104071 pop     cx ;~ 2FE6:0F3E
cs=0x2fe6;eip=0x000f3f; 	X(POP(es));	// 104072 pop     es ;~ 2FE6:0F3F
cs=0x2fe6;eip=0x000f40; 	X(POP(si));	// 104073 pop     si ;~ 2FE6:0F40
cs=0x2fe6;eip=0x000f41; 	R(RETN(0));	// 104074 retn ;~ 2FE6:0F41
sub_3f382:
	// 104081 
cs=0x2fe6;eip=0x000f42; 	X(PUSH(si));	// 104083 push    si ;~ 2FE6:0F42
cs=0x2fe6;eip=0x000f43; 	X(PUSH(es));	// 104084 push    es ;~ 2FE6:0F43
cs=0x2fe6;eip=0x000f44; 	X(PUSH(cx));	// 104085 push    cx ;~ 2FE6:0F44
cs=0x2fe6;eip=0x000f45; 	X(PUSH(dx));	// 104086 push    dx ;~ 2FE6:0F45
loc_3f386:
	// 10998 
cs=0x2fe6;eip=0x000f46; 	T(MOV(bx, *(dw*)((&unk_4b0b0))));	// 104089 mov     bx, word ptr unk_4B0B0 ;~ 2FE6:0F46
cs=0x2fe6;eip=0x000f4a; 	T(MOV(cx, 0x400));	// 104090 mov     cx, 400h ;~ 2FE6:0F4A
cs=0x2fe6;eip=0x000f4d; 	T(MOV(si, ds));	// 104091 mov     si, ds ;~ 2FE6:0F4D
cs=0x2fe6;eip=0x000f4f; 	T(LDS(dx, *(dd*)((&unk_57177))));	// 104092 lds     dx, dword ptr unk_57177 ;~ 2FE6:0F4F
cs=0x2fe6;eip=0x000f53; 	T(MOV(ah, 0x3F));	// 104093 mov     ah, 3Fh ;~ 2FE6:0F53
cs=0x2fe6;eip=0x000f55; 	R(_INT(0x21));	// 104094 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 2FE6:0F55
cs=0x2fe6;eip=0x000f57; 	T(MOV(bx, dx));	// 104097 mov     bx, dx ;~ 2FE6:0F57
cs=0x2fe6;eip=0x000f59; 	T(MOV(cl, *(raddr(ds,bx))));	// 104098 mov     cl, [bx] ;~ 2FE6:0F59
cs=0x2fe6;eip=0x000f5b; 	R(JNC(loc_3f3ad));	// 104099 jnb     short loc_3F3AD ;~ 2FE6:0F5B
cs=0x2fe6;eip=0x000f5d; 	T(ADD(ax, 0x0D));	// 104100 add     ax, 0Dh ;~ 2FE6:0F5D
cs=0x2fe6;eip=0x000f60; 	T(MOV(dx, seg_offset(dseg)));	// 104101 mov     dx, seg dseg ;~ 2FE6:0F60
cs=0x2fe6;eip=0x000f63; 	T(MOV(ds, dx));	// 104102 mov     ds, dx ;~ 2FE6:0F63
cs=0x2fe6;eip=0x000f65; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 104103 mov     word ptr unk_571E7, ax ;~ 2FE6:0F65
cs=0x2fe6;eip=0x000f68; 	T(MOV(ds, si));	// 104104 mov     ds, si ;~ 2FE6:0F68
cs=0x2fe6;eip=0x000f6a; 	R(JMP(loc_3f3c0));	// 104105 jmp     short loc_3F3C0 ;~ 2FE6:0F6A
loc_3f3ad:
	// 10999 
cs=0x2fe6;eip=0x000f6d; 	T(MOV(ds, si));	// 104111 mov     ds, si ;~ 2FE6:0F6D
cs=0x2fe6;eip=0x000f6f; 	T(CMP(ax, 0));	// 104112 cmp     ax, 0 ;~ 2FE6:0F6F
cs=0x2fe6;eip=0x000f72; 	R(JZ(loc_3f3c7));	// 104113 jz      short loc_3F3C7 ;~ 2FE6:0F72
cs=0x2fe6;eip=0x000f74; 	X(MOV(*(dw*)((&unk_4b0b4)), ax));	// 104114 mov     word ptr unk_4B0B4, ax ;~ 2FE6:0F74
cs=0x2fe6;eip=0x000f77; 	X(MOV(*(dw*)((&unk_4b0b2)), 0));	// 104115 mov     word ptr unk_4B0B2, 0 ;~ 2FE6:0F77
cs=0x2fe6;eip=0x000f7d; 	T(MOV(al, cl));	// 104116 mov     al, cl ;~ 2FE6:0F7D
cs=0x2fe6;eip=0x000f7f; 	T(CLC);	// 104117 clc ;~ 2FE6:0F7F
loc_3f3c0:
	// 11000 
cs=0x2fe6;eip=0x000f80; 	T(XOR(ah, ah));	// 104120 xor     ah, ah ;~ 2FE6:0F80
cs=0x2fe6;eip=0x000f82; 	X(POP(dx));	// 104121 pop     dx ;~ 2FE6:0F82
cs=0x2fe6;eip=0x000f83; 	X(POP(cx));	// 104122 pop     cx ;~ 2FE6:0F83
cs=0x2fe6;eip=0x000f84; 	X(POP(es));	// 104123 pop     es ;~ 2FE6:0F84
cs=0x2fe6;eip=0x000f85; 	X(POP(si));	// 104124 pop     si ;~ 2FE6:0F85
cs=0x2fe6;eip=0x000f86; 	R(RETN(0));	// 104125 retn ;~ 2FE6:0F86
loc_3f3c7:
	// 11001 
cs=0x2fe6;eip=0x000f87; 	T(DEC(ax));	// 104129 dec     ax ;~ 2FE6:0F87
cs=0x2fe6;eip=0x000f88; 	T(STC);	// 104130 stc ;~ 2FE6:0F88
cs=0x2fe6;eip=0x000f89; 	X(POP(dx));	// 104131 pop     dx ;~ 2FE6:0F89
cs=0x2fe6;eip=0x000f8a; 	X(POP(cx));	// 104132 pop     cx ;~ 2FE6:0F8A
cs=0x2fe6;eip=0x000f8b; 	X(POP(es));	// 104133 pop     es ;~ 2FE6:0F8B
cs=0x2fe6;eip=0x000f8c; 	X(POP(si));	// 104134 pop     si ;~ 2FE6:0F8C
cs=0x2fe6;eip=0x000f8d; 	R(RETN(0));	// 104135 retn ;~ 2FE6:0F8D
sub_3f3ce:
	// 104142 
cs=0x2fe6;eip=0x000f8e; 	X(PUSH(es));	// 104144 push    es ;~ 2FE6:0F8E
cs=0x2fe6;eip=0x000f8f; 	X(PUSH(si));	// 104145 push    si ;~ 2FE6:0F8F
cs=0x2fe6;eip=0x000f90; 	T(LES(si, *(dd*)((&unk_4b0ac))));	// 104146 les     si, dword ptr unk_4B0AC ;~ 2FE6:0F90
cs=0x2fe6;eip=0x000f94; 	X(MOV(*(raddr(es,si)), al));	// 104147 mov     es:[si], al ;~ 2FE6:0F94
cs=0x2fe6;eip=0x000f97; 	T(ADD(si, 1));	// 104148 add     si, 1 ;~ 2FE6:0F97
cs=0x2fe6;eip=0x000f9a; 	R(JNC(loc_3f3e2));	// 104149 jnb     short loc_3F3E2 ;~ 2FE6:0F9A
cs=0x2fe6;eip=0x000f9c; 	X(ADD(*(dw*)((&unk_4b0ae)), 0x1000));	// 104150 add     word ptr unk_4B0AE, 1000h ;~ 2FE6:0F9C
loc_3f3e2:
	// 11002 
cs=0x2fe6;eip=0x000fa2; 	X(MOV(*(dw*)((&unk_4b0ac)), si));	// 104153 mov     word ptr unk_4B0AC, si ;~ 2FE6:0FA2
cs=0x2fe6;eip=0x000fa6; 	X(SUB(*(dw*)((&unk_4b0b6)), 1));	// 104154 sub     word ptr unk_4B0B6, 1 ;~ 2FE6:0FA6
cs=0x2fe6;eip=0x000fab; 	X(SBB(*(dw*)((&unk_4b0b8)), 0));	// 104155 sbb     word ptr unk_4B0B8, 0 ;~ 2FE6:0FAB
cs=0x2fe6;eip=0x000fb0; 	T(MOV(si, *(dw*)((&unk_4b0b6))));	// 104156 mov     si, word ptr unk_4B0B6 ;~ 2FE6:0FB0
cs=0x2fe6;eip=0x000fb4; 	T(OR(si, *(dw*)((&unk_4b0b8))));	// 104157 or      si, word ptr unk_4B0B8 ;~ 2FE6:0FB4
cs=0x2fe6;eip=0x000fb8; 	R(JNZ(loc_3f401));	// 104158 jnz     short loc_3F401 ;~ 2FE6:0FB8
cs=0x2fe6;eip=0x000fba; 	T(STC);	// 104159 stc ;~ 2FE6:0FBA
cs=0x2fe6;eip=0x000fbb; 	T(MOV(ax, 0x0FFFF));	// 104160 mov     ax, 0FFFFh ;~ 2FE6:0FBB
cs=0x2fe6;eip=0x000fbe; 	X(POP(si));	// 104161 pop     si ;~ 2FE6:0FBE
cs=0x2fe6;eip=0x000fbf; 	X(POP(es));	// 104162 pop     es ;~ 2FE6:0FBF
cs=0x2fe6;eip=0x000fc0; 	R(RETN(0));	// 104163 retn ;~ 2FE6:0FC0
loc_3f401:
	// 11003 
cs=0x2fe6;eip=0x000fc1; 	T(CLC);	// 104167 clc ;~ 2FE6:0FC1
cs=0x2fe6;eip=0x000fc2; 	X(POP(si));	// 104168 pop     si ;~ 2FE6:0FC2
cs=0x2fe6;eip=0x000fc3; 	X(POP(es));	// 104169 pop     es ;~ 2FE6:0FC3
cs=0x2fe6;eip=0x000fc4; 	R(RETN(0));	// 104170 retn ;~ 2FE6:0FC4
sub_3f563:
	// 104371 
cs=0x2fe6;eip=0x001123; 	X(PUSH(es));	// 104373 push    es ;~ 2FE6:1123
cs=0x2fe6;eip=0x001124; 	X(PUSH(si));	// 104374 push    si ;~ 2FE6:1124
cs=0x2fe6;eip=0x001125; 	X(PUSH(cx));	// 104375 push    cx ;~ 2FE6:1125
cs=0x2fe6;eip=0x001126; 	X(PUSH(bx));	// 104376 push    bx ;~ 2FE6:1126
cs=0x2fe6;eip=0x001127; 	X(PUSH(ax));	// 104377 push    ax ;~ 2FE6:1127
cs=0x2fe6;eip=0x001128; 	T(MOV(bx, *(dw*)((&unk_4b0df))));	// 104378 mov     bx, word ptr unk_4B0DF ;~ 2FE6:1128
cs=0x2fe6;eip=0x00112c; 	T(MOV(si, bx));	// 104379 mov     si, bx ;~ 2FE6:112C
cs=0x2fe6;eip=0x00112e; 	X(MOV(*(raddr(ss,si)), al));	// 104380 mov     ss:[si], al ;~ 2FE6:112E
cs=0x2fe6;eip=0x001131; 	X(INC(*(dw*)((&unk_4b0df))));	// 104381 inc     word ptr unk_4B0DF ;~ 2FE6:1131
cs=0x2fe6;eip=0x001135; 	X(SUB(*(dw*)((&unk_4b0b6)), 1));	// 104382 sub     word ptr unk_4B0B6, 1 ;~ 2FE6:1135
cs=0x2fe6;eip=0x00113a; 	X(SBB(*(dw*)((&unk_4b0b8)), 0));	// 104383 sbb     word ptr unk_4B0B8, 0 ;~ 2FE6:113A
cs=0x2fe6;eip=0x00113f; 	T(CLC);	// 104384 clc ;~ 2FE6:113F
cs=0x2fe6;eip=0x001140; 	X(DEC(*(dw*)((&unk_4b0c3))));	// 104385 dec     word ptr unk_4B0C3 ;~ 2FE6:1140
cs=0x2fe6;eip=0x001144; 	R(JNZ(loc_3f597));	// 104386 jnz     short loc_3F597 ;~ 2FE6:1144
cs=0x2fe6;eip=0x001146; 	T(MOV(ax, *(dw*)((&unk_4b0c9))));	// 104387 mov     ax, word ptr unk_4B0C9 ;~ 2FE6:1146
cs=0x2fe6;eip=0x001149; 	R(CALL(__dispatch_call,ax));	// 104388 call    ax ; unk_4B0C9 ;~ 2FE6:1149
cs=0x2fe6;eip=0x00114b; 	T(MOV(ax, *(dw*)((&unk_4b0dd))));	// 104389 mov     ax, word ptr unk_4B0DD ;~ 2FE6:114B
cs=0x2fe6;eip=0x00114e; 	X(MOV(*(dw*)((&unk_4b0df)), ax));	// 104390 mov     word ptr unk_4B0DF, ax ;~ 2FE6:114E
cs=0x2fe6;eip=0x001151; 	T(MOV(ax, *(dw*)((&unk_4b0c1))));	// 104391 mov     ax, word ptr unk_4B0C1 ;~ 2FE6:1151
cs=0x2fe6;eip=0x001154; 	X(MOV(*(dw*)((&unk_4b0c3)), ax));	// 104392 mov     word ptr unk_4B0C3, ax ;~ 2FE6:1154
loc_3f597:
	// 11013 
cs=0x2fe6;eip=0x001157; 	T(MOV(si, *(dw*)((&unk_4b0b6))));	// 104395 mov     si, word ptr unk_4B0B6 ;~ 2FE6:1157
cs=0x2fe6;eip=0x00115b; 	T(OR(si, *(dw*)((&unk_4b0b8))));	// 104396 or      si, word ptr unk_4B0B8 ;~ 2FE6:115B
cs=0x2fe6;eip=0x00115f; 	R(JNZ(loc_3f5ab));	// 104397 jnz     short loc_3F5AB ;~ 2FE6:115F
cs=0x2fe6;eip=0x001161; 	T(STC);	// 104398 stc ;~ 2FE6:1161
cs=0x2fe6;eip=0x001162; 	X(POP(ax));	// 104399 pop     ax ;~ 2FE6:1162
cs=0x2fe6;eip=0x001163; 	T(MOV(ax, 0x0FFFF));	// 104400 mov     ax, 0FFFFh ;~ 2FE6:1163
cs=0x2fe6;eip=0x001166; 	X(POP(bx));	// 104401 pop     bx ;~ 2FE6:1166
cs=0x2fe6;eip=0x001167; 	X(POP(cx));	// 104402 pop     cx ;~ 2FE6:1167
cs=0x2fe6;eip=0x001168; 	X(POP(si));	// 104403 pop     si ;~ 2FE6:1168
cs=0x2fe6;eip=0x001169; 	X(POP(es));	// 104404 pop     es ;~ 2FE6:1169
cs=0x2fe6;eip=0x00116a; 	R(RETN(0));	// 104405 retn ;~ 2FE6:116A
loc_3f5ab:
	// 11014 
cs=0x2fe6;eip=0x00116b; 	T(CLC);	// 104409 clc ;~ 2FE6:116B
cs=0x2fe6;eip=0x00116c; 	X(POP(ax));	// 104410 pop     ax ;~ 2FE6:116C
cs=0x2fe6;eip=0x00116d; 	X(POP(bx));	// 104411 pop     bx ;~ 2FE6:116D
cs=0x2fe6;eip=0x00116e; 	X(POP(cx));	// 104412 pop     cx ;~ 2FE6:116E
cs=0x2fe6;eip=0x00116f; 	X(POP(si));	// 104413 pop     si ;~ 2FE6:116F
cs=0x2fe6;eip=0x001170; 	X(POP(es));	// 104414 pop     es ;~ 2FE6:1170
cs=0x2fe6;eip=0x001171; 	R(RETN(0));	// 104415 retn ;~ 2FE6:1171
sub_3f7da:
	// 104716 
cs=0x2fe6;eip=0x00139a; 	X(PUSH(ax));	// 104717 push    ax ;~ 2FE6:139A
cs=0x2fe6;eip=0x00139b; 	X(PUSH(cx));	// 104718 push    cx ;~ 2FE6:139B
cs=0x2fe6;eip=0x00139c; 	X(PUSH(bx));	// 104719 push    bx ;~ 2FE6:139C
cs=0x2fe6;eip=0x00139d; 	X(PUSH(dx));	// 104720 push    dx ;~ 2FE6:139D
cs=0x2fe6;eip=0x00139e; 	X(PUSH(di));	// 104721 push    di ;~ 2FE6:139E
cs=0x2fe6;eip=0x00139f; 	T(MOV(ax, *(dw*)((&unk_4b0db))));	// 104722 mov     ax, word ptr unk_4B0DB ;~ 2FE6:139F
cs=0x2fe6;eip=0x0013a2; 	T(MOV(di, ax));	// 104723 mov     di, ax ;~ 2FE6:13A2
cs=0x2fe6;eip=0x0013a4; 	T(MOV(cx, 0x0FF));	// 104724 mov     cx, 0FFh ;~ 2FE6:13A4
loc_3f7e7:
	// 11032 
cs=0x2fe6;eip=0x0013a7; 	T(MOV(bx, cx));	// 104727 mov     bx, cx ;~ 2FE6:13A7
cs=0x2fe6;eip=0x0013a9; 	T(AND(bl, 0x0F));	// 104728 and     bl, 0Fh ;~ 2FE6:13A9
cs=0x2fe6;eip=0x0013ac; 	T(MOV(dl, *(raddr(ds,bx+0x371B))));	// 104729 mov     dl, [bx+371Bh] ;~ 2FE6:13AC
cs=0x2fe6;eip=0x0013b0; 	T(SHR(dl, 1));	// 104730 shr     dl, 1 ;~ 2FE6:13B0
cs=0x2fe6;eip=0x0013b2; 	T(MOV(bx, cx));	// 104731 mov     bx, cx ;~ 2FE6:13B2
cs=0x2fe6;eip=0x0013b4; 	T(SHR(bl, 1));	// 104732 shr     bl, 1 ;~ 2FE6:13B4
cs=0x2fe6;eip=0x0013b6; 	T(SHR(bl, 1));	// 104733 shr     bl, 1 ;~ 2FE6:13B6
cs=0x2fe6;eip=0x0013b8; 	T(SHR(bl, 1));	// 104734 shr     bl, 1 ;~ 2FE6:13B8
cs=0x2fe6;eip=0x0013ba; 	T(SHR(bl, 1));	// 104735 shr     bl, 1 ;~ 2FE6:13BA
cs=0x2fe6;eip=0x0013bc; 	T(OR(dl, *(raddr(ds,bx+0x371B))));	// 104736 or      dl, [bx+371Bh] ;~ 2FE6:13BC
cs=0x2fe6;eip=0x0013c0; 	T(MOV(bx, cx));	// 104737 mov     bx, cx ;~ 2FE6:13C0
cs=0x2fe6;eip=0x0013c2; 	X(MOV(*(raddr(ds,bx+di)), dl));	// 104738 mov     [bx+di], dl ;~ 2FE6:13C2
cs=0x2fe6;eip=0x0013c4; 	R(LOOP(loc_3f7e7));	// 104739 loop    loc_3F7E7 ;~ 2FE6:13C4
cs=0x2fe6;eip=0x0013c6; 	X(MOV(*(raddr(ds,di)), cl));	// 104740 mov     [di], cl ;~ 2FE6:13C6
cs=0x2fe6;eip=0x0013c8; 	X(POP(di));	// 104741 pop     di ;~ 2FE6:13C8
cs=0x2fe6;eip=0x0013c9; 	X(POP(dx));	// 104742 pop     dx ;~ 2FE6:13C9
cs=0x2fe6;eip=0x0013ca; 	X(POP(bx));	// 104743 pop     bx ;~ 2FE6:13CA
cs=0x2fe6;eip=0x0013cb; 	X(POP(cx));	// 104744 pop     cx ;~ 2FE6:13CB
cs=0x2fe6;eip=0x0013cc; 	X(POP(ax));	// 104745 pop     ax ;~ 2FE6:13CC
cs=0x2fe6;eip=0x0013cd; 	R(RETN(0));	// 104746 retn ;~ 2FE6:13CD

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3e47b: 	goto loc_3e47b;
        case m2c::kloc_3e496: 	goto loc_3e496;
        case m2c::kloc_3e4c8: 	goto loc_3e4c8;
        case m2c::kloc_3e4eb: 	goto loc_3e4eb;
        case m2c::kloc_3e564: 	goto loc_3e564;
        case m2c::kloc_3e567: 	goto loc_3e567;
        case m2c::kloc_3e5e0: 	goto loc_3e5e0;
        case m2c::kloc_3e5eb: 	goto loc_3e5eb;
        case m2c::kloc_3e5f4: 	goto loc_3e5f4;
        case m2c::kloc_3e5ff: 	goto loc_3e5ff;
        case m2c::kloc_3e64f: 	goto loc_3e64f;
        case m2c::kloc_3e67c: 	goto loc_3e67c;
        case m2c::kloc_3e685: 	goto loc_3e685;
        case m2c::kloc_3e6a5: 	goto loc_3e6a5;
        case m2c::kloc_3e6b8: 	goto loc_3e6b8;
        case m2c::kloc_3e6ff: 	goto loc_3e6ff;
        case m2c::kloc_3e709: 	goto loc_3e709;
        case m2c::kloc_3e723: 	goto loc_3e723;
        case m2c::kloc_3e737: 	goto loc_3e737;
        case m2c::kloc_3e763: 	goto loc_3e763;
        case m2c::kloc_3e77d: 	goto loc_3e77d;
        case m2c::kloc_3e785: 	goto loc_3e785;
        case m2c::kloc_3e78d: 	goto loc_3e78d;
        case m2c::kloc_3e7b6: 	goto loc_3e7b6;
        case m2c::kloc_3e7c8: 	goto loc_3e7c8;
        case m2c::kloc_3e7cb: 	goto loc_3e7cb;
        case m2c::kloc_3e7fc: 	goto loc_3e7fc;
        case m2c::kloc_3e808: 	goto loc_3e808;
        case m2c::kloc_3e81a: 	goto loc_3e81a;
        case m2c::kloc_3e82c: 	goto loc_3e82c;
        case m2c::kloc_3e831: 	goto loc_3e831;
        case m2c::kloc_3e89c: 	goto loc_3e89c;
        case m2c::kloc_3e8a5: 	goto loc_3e8a5;
        case m2c::kloc_3e8bf: 	goto loc_3e8bf;
        case m2c::kloc_3e8d9: 	goto loc_3e8d9;
        case m2c::kloc_3e8f3: 	goto loc_3e8f3;
        case m2c::kloc_3e90d: 	goto loc_3e90d;
        case m2c::kloc_3e928: 	goto loc_3e928;
        case m2c::kloc_3e942: 	goto loc_3e942;
        case m2c::kloc_3e94b: 	goto loc_3e94b;
        case m2c::kloc_3e95d: 	goto loc_3e95d;
        case m2c::kloc_3e98d: 	goto loc_3e98d;
        case m2c::kloc_3e997: 	goto loc_3e997;
        case m2c::kloc_3e9a2: 	goto loc_3e9a2;
        case m2c::kloc_3e9ad: 	goto loc_3e9ad;
        case m2c::kloc_3e9c3: 	goto loc_3e9c3;
        case m2c::kloc_3e9d2: 	goto loc_3e9d2;
        case m2c::kloc_3e9e1: 	goto loc_3e9e1;
        case m2c::kloc_3e9f6: 	goto loc_3e9f6;
        case m2c::kloc_3e9ff: 	goto loc_3e9ff;
        case m2c::kloc_3ea08: 	goto loc_3ea08;
        case m2c::kloc_3ea18: 	goto loc_3ea18;
        case m2c::kloc_3ea21: 	goto loc_3ea21;
        case m2c::kloc_3ea38: 	goto loc_3ea38;
        case m2c::kloc_3ea47: 	goto loc_3ea47;
        case m2c::kloc_3ea57: 	goto loc_3ea57;
        case m2c::kloc_3ea7d: 	goto loc_3ea7d;
        case m2c::kloc_3ea99: 	goto loc_3ea99;
        case m2c::kloc_3eaae: 	goto loc_3eaae;
        case m2c::kloc_3eae2: 	goto loc_3eae2;
        case m2c::kloc_3eaef: 	goto loc_3eaef;
        case m2c::kloc_3eb03: 	goto loc_3eb03;
        case m2c::kloc_3eb08: 	goto loc_3eb08;
        case m2c::kloc_3eb2a: 	goto loc_3eb2a;
        case m2c::kloc_3eb2e: 	goto loc_3eb2e;
        case m2c::kloc_3eb54: 	goto loc_3eb54;
        case m2c::kloc_3eb59: 	goto loc_3eb59;
        case m2c::kloc_3eb69: 	goto loc_3eb69;
        case m2c::kloc_3eb8e: 	goto loc_3eb8e;
        case m2c::kloc_3eb90: 	goto loc_3eb90;
        case m2c::kloc_3eb9b: 	goto loc_3eb9b;
        case m2c::kloc_3ebb7: 	goto loc_3ebb7;
        case m2c::kloc_3ebc4: 	goto loc_3ebc4;
        case m2c::kloc_3ebdf: 	goto loc_3ebdf;
        case m2c::kloc_3ec09: 	goto loc_3ec09;
        case m2c::kloc_3ec0d: 	goto loc_3ec0d;
        case m2c::kloc_3ec1c: 	goto loc_3ec1c;
        case m2c::kloc_3ec7f: 	goto loc_3ec7f;
        case m2c::kloc_3ec99: 	goto loc_3ec99;
        case m2c::kloc_3ed0c: 	goto loc_3ed0c;
        case m2c::kloc_3ed18: 	goto loc_3ed18;
        case m2c::kloc_3ed3d: 	goto loc_3ed3d;
        case m2c::kloc_3ed54: 	goto loc_3ed54;
        case m2c::kloc_3ed5d: 	goto loc_3ed5d;
        case m2c::kloc_3ed68: 	goto loc_3ed68;
        case m2c::kloc_3ed84: 	goto loc_3ed84;
        case m2c::kloc_3edb9: 	goto loc_3edb9;
        case m2c::kloc_3edce: 	goto loc_3edce;
        case m2c::kloc_3ee53: 	goto loc_3ee53;
        case m2c::kloc_3ee71: 	goto loc_3ee71;
        case m2c::kloc_3ee8e: 	goto loc_3ee8e;
        case m2c::kloc_3eeb2: 	goto loc_3eeb2;
        case m2c::kloc_3eed4: 	goto loc_3eed4;
        case m2c::kloc_3eedf: 	goto loc_3eedf;
        case m2c::kloc_3eee2: 	goto loc_3eee2;
        case m2c::kloc_3eefd: 	goto loc_3eefd;
        case m2c::kloc_3ef1c: 	goto loc_3ef1c;
        case m2c::kloc_3ef53: 	goto loc_3ef53;
        case m2c::kloc_3ef6c: 	goto loc_3ef6c;
        case m2c::kloc_3ef84: 	goto loc_3ef84;
        case m2c::kloc_3ef97: 	goto loc_3ef97;
        case m2c::kloc_3ef9a: 	goto loc_3ef9a;
        case m2c::kloc_3efc3: 	goto loc_3efc3;
        case m2c::kloc_3efe5: 	goto loc_3efe5;
        case m2c::kloc_3eff0: 	goto loc_3eff0;
        case m2c::kloc_3eff3: 	goto loc_3eff3;
        case m2c::kloc_3f00d: 	goto loc_3f00d;
        case m2c::kloc_3f012: 	goto loc_3f012;
        case m2c::kloc_3f027: 	goto loc_3f027;
        case m2c::kloc_3f089: 	goto loc_3f089;
        case m2c::kloc_3f09b: 	goto loc_3f09b;
        case m2c::kloc_3f09d: 	goto loc_3f09d;
        case m2c::kloc_3f0b7: 	goto loc_3f0b7;
        case m2c::kloc_3f0bc: 	goto loc_3f0bc;
        case m2c::kloc_3f0d0: 	goto loc_3f0d0;
        case m2c::kloc_3f132: 	goto loc_3f132;
        case m2c::kloc_3f144: 	goto loc_3f144;
        case m2c::kloc_3f146: 	goto loc_3f146;
        case m2c::kloc_3f181: 	goto loc_3f181;
        case m2c::kloc_3f1b3: 	goto loc_3f1b3;
        case m2c::kloc_3f1e3: 	goto loc_3f1e3;
        case m2c::kloc_3f1fb: 	goto loc_3f1fb;
        case m2c::kloc_3f22c: 	goto loc_3f22c;
        case m2c::kloc_3f240: 	goto loc_3f240;
        case m2c::kloc_3f28c: 	goto loc_3f28c;
        case m2c::kloc_3f295: 	goto loc_3f295;
        case m2c::kloc_3f2e2: 	goto loc_3f2e2;
        case m2c::kloc_3f2f4: 	goto loc_3f2f4;
        case m2c::kloc_3f310: 	goto loc_3f310;
        case m2c::kloc_3f31a: 	goto loc_3f31a;
        case m2c::kloc_3f331: 	goto loc_3f331;
        case m2c::kloc_3f350: 	goto loc_3f350;
        case m2c::kloc_3f375: 	goto loc_3f375;
        case m2c::kloc_3f386: 	goto loc_3f386;
        case m2c::kloc_3f3ad: 	goto loc_3f3ad;
        case m2c::kloc_3f3c0: 	goto loc_3f3c0;
        case m2c::kloc_3f3c7: 	goto loc_3f3c7;
        case m2c::kloc_3f3e2: 	goto loc_3f3e2;
        case m2c::kloc_3f401: 	goto loc_3f401;
        case m2c::kloc_3f405: 	goto loc_3f405;
        case m2c::kloc_3f43f: 	goto loc_3f43f;
        case m2c::kloc_3f4bf: 	goto loc_3f4bf;
        case m2c::kloc_3f4d1: 	goto loc_3f4d1;
        case m2c::kloc_3f4ed: 	goto loc_3f4ed;
        case m2c::kloc_3f4f7: 	goto loc_3f4f7;
        case m2c::kloc_3f50e: 	goto loc_3f50e;
        case m2c::kloc_3f52d: 	goto loc_3f52d;
        case m2c::kloc_3f55b: 	goto loc_3f55b;
        case m2c::kloc_3f597: 	goto loc_3f597;
        case m2c::kloc_3f5ab: 	goto loc_3f5ab;
        case m2c::kloc_3f5d3: 	goto loc_3f5d3;
        case m2c::kloc_3f635: 	goto loc_3f635;
        case m2c::kloc_3f64a: 	goto loc_3f64a;
        case m2c::kloc_3f65c: 	goto loc_3f65c;
        case m2c::kloc_3f682: 	goto loc_3f682;
        case m2c::kloc_3f6d6: 	goto loc_3f6d6;
        case m2c::kloc_3f727: 	goto loc_3f727;
        case m2c::kloc_3f73e: 	goto loc_3f73e;
        case m2c::kloc_3f74c: 	goto loc_3f74c;
        case m2c::kloc_3f764: 	goto loc_3f764;
        case m2c::kloc_3f788: 	goto loc_3f788;
        case m2c::kloc_3f79a: 	goto loc_3f79a;
        case m2c::kloc_3f7c6: 	goto loc_3f7c6;
        case m2c::kloc_3f7d8: 	goto loc_3f7d8;
        case m2c::kloc_3f7e7: 	goto loc_3f7e7;
        case m2c::klocret_3e594: 	goto locret_3e594;
        case m2c::klocret_3ee90: 	goto locret_3ee90;
        case m2c::kret_2fe6_1221: 	goto ret_2fe6_1221;
        case m2c::kret_2fe6_130f: 	goto ret_2fe6_130f;
        case m2c::kret_2fe6_135c: 	goto ret_2fe6_135c;
        case m2c::kret_2fe6_c65: 	goto ret_2fe6_c65;
        case m2c::kseg031_proc: 	goto seg031_proc;
        case m2c::ksub_3e446: 	goto sub_3e446;
        case m2c::ksub_3e4ae: 	goto sub_3e4ae;
        case m2c::ksub_3e4d1: 	goto sub_3e4d1;
        case m2c::ksub_3e4f4: 	goto sub_3e4f4;
        case m2c::ksub_3e56b: 	goto sub_3e56b;
        case m2c::ksub_3e595: 	goto sub_3e595;
        case m2c::ksub_3e5af: 	goto sub_3e5af;
        case m2c::ksub_3e7d3: 	goto sub_3e7d3;
        case m2c::ksub_3eab6: 	goto sub_3eab6;
        case m2c::ksub_3ebcc: 	goto sub_3ebcc;
        case m2c::ksub_3ee5b: 	goto sub_3ee5b;
        case m2c::ksub_3ee91: 	goto sub_3ee91;
        case m2c::ksub_3eeea: 	goto sub_3eeea;
        case m2c::ksub_3efa2: 	goto sub_3efa2;
        case m2c::ksub_3f14e: 	goto sub_3f14e;
        case m2c::ksub_3f1c0: 	goto sub_3f1c0;
        case m2c::ksub_3f1ec: 	goto sub_3f1ec;
        case m2c::ksub_3f234: 	goto sub_3f234;
        case m2c::ksub_3f24b: 	goto sub_3f24b;
        case m2c::ksub_3f356: 	goto sub_3f356;
        case m2c::ksub_3f382: 	goto sub_3f382;
        case m2c::ksub_3f3ce: 	goto sub_3f3ce;
        case m2c::ksub_3f563: 	goto sub_3f563;
        case m2c::ksub_3f7da: 	goto sub_3f7da;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

