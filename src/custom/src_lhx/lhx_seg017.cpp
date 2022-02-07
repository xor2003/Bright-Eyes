/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group15(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group15:
    _begin:
seg017_proc:
	// 73507 
cs=0x2243;eip=0x000000; 	R(RETF(0));	// 73507 retf ;~ 2243:0000
ret_2243_2:
	// 9140 
cs=0x2243;eip=0x000002; 	R(RETF(0));	// 73510 retf ;~ 2243:0002
sub_30a14:
	// 73518 
#undef arg_0
#define arg_0 6
	// 73521 arg_0           = word ptr  6 ;~ 2243:0004
#undef arg_2
#define arg_2 8
	// 73522 arg_2           = word ptr  8 ;~ 2243:0004
cs=0x2243;eip=0x000004; 	X(PUSH(bp));	// 73524 push    bp ;~ 2243:0004
cs=0x2243;eip=0x000005; 	T(MOV(bp, sp));	// 73525 mov     bp, sp ;~ 2243:0005
cs=0x2243;eip=0x000007; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 73526 push    [bp+arg_2] ;~ 2243:0007
cs=0x2243;eip=0x00000a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 73527 push    [bp+arg_0] ;~ 2243:000A
cs=0x2243;eip=0x00000d; 	T(MOV(ax, 1));	// 73528 mov     ax, 1 ;~ 2243:000D
cs=0x2243;eip=0x000010; 	X(PUSH(ax));	// 73529 push    ax ;~ 2243:0010
cs=0x2243;eip=0x000011; 	R(CALL(sub_30a28,0));	// 73530 call    sub_30A28 ;~ 2243:0011
cs=0x2243;eip=0x000014; 	X(POP(bp));	// 73531 pop     bp ;~ 2243:0014
cs=0x2243;eip=0x000015; 	R(RETF(4));	// 73532 retf    4 ;~ 2243:0015
sub_30a28:
	// 73540 
#undef var_a
#define var_a -0x0A
	// 73542 var_A           = word ptr -0Ah ;~ 2243:0018
#undef var_8
#define var_8 -8
	// 73543 var_8           = word ptr -8 ;~ 2243:0018
#undef var_6
#define var_6 -6
	// 73544 var_6           = word ptr -6 ;~ 2243:0018
#undef var_4
#define var_4 -4
	// 73545 var_4           = word ptr -4 ;~ 2243:0018
#undef var_2
#define var_2 -2
	// 73546 var_2           = word ptr -2 ;~ 2243:0018
#undef arg_0
#define arg_0 4
	// 73547 arg_0           = byte ptr  4 ;~ 2243:0018
#undef arg_2
#define arg_2 6
	// 73548 arg_2           = word ptr  6 ;~ 2243:0018
#undef arg_4
#define arg_4 8
	// 73549 arg_4           = word ptr  8 ;~ 2243:0018
cs=0x2243;eip=0x000018; 	X(PUSH(bp));	// 73551 push    bp ;~ 2243:0018
cs=0x2243;eip=0x000019; 	T(MOV(bp, sp));	// 73552 mov     bp, sp ;~ 2243:0019
cs=0x2243;eip=0x00001b; 	T(SUB(sp, 0x0A));	// 73553 sub     sp, 0Ah ;~ 2243:001B
cs=0x2243;eip=0x00001e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 73554 mov     [bp+var_A], 0FFFFh ;~ 2243:001E
cs=0x2243;eip=0x000023; 	T(SUB(ax, ax));	// 73555 sub     ax, ax ;~ 2243:0023
cs=0x2243;eip=0x000025; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 73556 mov     [bp+var_6], ax ;~ 2243:0025
cs=0x2243;eip=0x000028; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 73557 mov     [bp+var_8], ax ;~ 2243:0028
cs=0x2243;eip=0x00002b; 	X(MOV(*(dw*)((&unk_571e7)), ax));	// 73558 mov     word ptr unk_571E7, ax ;~ 2243:002B
cs=0x2243;eip=0x00002e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 73559 push    [bp+arg_4] ;~ 2243:002E
cs=0x2243;eip=0x000031; 	R(CALLF(sub_30b18,0));	// 73560 call    sub_30B18 ;~ 2243:0031
cs=0x2243;eip=0x000036; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 73561 mov     [bp+var_4], ax ;~ 2243:0036
cs=0x2243;eip=0x000039; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 73562 mov     [bp+var_2], dx ;~ 2243:0039
cs=0x2243;eip=0x00003c; 	T(CMP(dx, 1));	// 73563 cmp     dx, 1 ;~ 2243:003C
cs=0x2243;eip=0x00003f; 	R(JL(loc_30a7e));	// 73564 jl      short loc_30A7E ;~ 2243:003F
loc_30a51:
	// 9141 
cs=0x2243;eip=0x000041; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 73568 cmp     [bp+var_A], 0FFFFh ;~ 2243:0041
cs=0x2243;eip=0x000045; 	R(JZ(loc_30a5f));	// 73569 jz      short loc_30A5F ;~ 2243:0045
cs=0x2243;eip=0x000047; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 73570 push    [bp+var_A] ;~ 2243:0047
cs=0x2243;eip=0x00004a; 	R(CALLF(sub_30b72,0));	// 73571 call    sub_30B72 ;~ 2243:004A
loc_30a5f:
	// 9142 
cs=0x2243;eip=0x00004f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 73574 mov     ax, [bp+var_8] ;~ 2243:004F
cs=0x2243;eip=0x000052; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_6))));	// 73575 or      ax, [bp+var_6] ;~ 2243:0052
cs=0x2243;eip=0x000055; 	R(JNZ(loc_30a6a));	// 73576 jnz     short loc_30A6A ;~ 2243:0055
cs=0x2243;eip=0x000057; 	R(JMP(loc_30b09));	// 73577 jmp     loc_30B09 ;~ 2243:0057
loc_30a6a:
	// 9143 
cs=0x2243;eip=0x00005a; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 73581 cmp     [bp+arg_0], 0 ;~ 2243:005A
cs=0x2243;eip=0x00005e; 	R(JNZ(loc_30a73));	// 73582 jnz     short loc_30A73 ;~ 2243:005E
cs=0x2243;eip=0x000060; 	R(JMP(loc_30b01));	// 73583 jmp     loc_30B01 ;~ 2243:0060
loc_30a73:
	// 9144 
cs=0x2243;eip=0x000063; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 73587 push    [bp+var_6] ;~ 2243:0063
cs=0x2243;eip=0x000066; 	R(CALLF(sub_2397c,0));	// 73588 call    sub_2397C ;~ 2243:0066
cs=0x2243;eip=0x00006b; 	R(JMP(loc_30b09));	// 73589 jmp     loc_30B09 ;~ 2243:006B
loc_30a7e:
	// 9145 
cs=0x2243;eip=0x00006e; 	T(CMP(*(raddr(ss,bp+arg_0)), 0));	// 73593 cmp     [bp+arg_0], 0 ;~ 2243:006E
cs=0x2243;eip=0x000072; 	R(JZ(loc_30a9c));	// 73594 jz      short loc_30A9C ;~ 2243:0072
cs=0x2243;eip=0x000074; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 73595 push    [bp+var_4] ;~ 2243:0074
cs=0x2243;eip=0x000077; 	R(CALLF(sub_23961,0));	// 73596 call    sub_23961 ;~ 2243:0077
cs=0x2243;eip=0x00007c; 	T(MOV(dx, ax));	// 73597 mov     dx, ax ;~ 2243:007C
cs=0x2243;eip=0x00007e; 	T(SUB(ax, ax));	// 73598 sub     ax, ax ;~ 2243:007E
cs=0x2243;eip=0x000080; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 73599 mov     [bp+var_8], ax ;~ 2243:0080
cs=0x2243;eip=0x000083; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 73600 mov     [bp+var_6], dx ;~ 2243:0083
cs=0x2243;eip=0x000086; 	T(CMP(dx, ax));	// 73601 cmp     dx, ax ;~ 2243:0086
cs=0x2243;eip=0x000088; 	R(JNZ(loc_30aae));	// 73602 jnz     short loc_30AAE ;~ 2243:0088
cs=0x2243;eip=0x00008a; 	R(JMP(loc_30a51));	// 73603 jmp     short loc_30A51 ;~ 2243:008A
loc_30a9c:
	// 9146 
cs=0x2243;eip=0x00008c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 73607 push    [bp+var_4] ;~ 2243:008C
cs=0x2243;eip=0x00008f; 	R(CALLF(sub_239ff,0));	// 73608 call    sub_239FF ;~ 2243:008F
cs=0x2243;eip=0x000094; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 73609 mov     [bp+var_8], ax ;~ 2243:0094
cs=0x2243;eip=0x000097; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ds));	// 73610 mov     [bp+var_6], ds ;~ 2243:0097
cs=0x2243;eip=0x00009a; 	T(OR(ax, ax));	// 73611 or      ax, ax ;~ 2243:009A
cs=0x2243;eip=0x00009c; 	R(JZ(loc_30a51));	// 73612 jz      short loc_30A51 ;~ 2243:009C
loc_30aae:
	// 9147 
cs=0x2243;eip=0x00009e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 73615 push    [bp+arg_4] ;~ 2243:009E
cs=0x2243;eip=0x0000a1; 	T(SUB(ax, ax));	// 73616 sub     ax, ax ;~ 2243:00A1
cs=0x2243;eip=0x0000a3; 	X(PUSH(ax));	// 73617 push    ax ;~ 2243:00A3
cs=0x2243;eip=0x0000a4; 	R(CALLF(sub_30b47,0));	// 73618 call    sub_30B47 ;~ 2243:00A4
cs=0x2243;eip=0x0000a9; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 73619 mov     [bp+var_A], ax ;~ 2243:00A9
cs=0x2243;eip=0x0000ac; 	T(INC(ax));	// 73620 inc     ax ;~ 2243:00AC
cs=0x2243;eip=0x0000ad; 	R(JZ(loc_30a51));	// 73621 jz      short loc_30A51 ;~ 2243:00AD
cs=0x2243;eip=0x0000af; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 73622 cmp     word ptr unk_571E7, 0 ;~ 2243:00AF
cs=0x2243;eip=0x0000b4; 	R(JNZ(loc_30a51));	// 73623 jnz     short loc_30A51 ;~ 2243:00B4
cs=0x2243;eip=0x0000b6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 73624 push    [bp+var_A] ;~ 2243:00B6
cs=0x2243;eip=0x0000b9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 73625 push    [bp+var_6] ;~ 2243:00B9
cs=0x2243;eip=0x0000bc; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 73626 push    [bp+var_8] ;~ 2243:00BC
cs=0x2243;eip=0x0000bf; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 73627 push    [bp+var_4] ;~ 2243:00BF
cs=0x2243;eip=0x0000c2; 	R(CALLF(sub_30b8e,0));	// 73628 call    sub_30B8E ;~ 2243:00C2
cs=0x2243;eip=0x0000c7; 	T(CMP(ax, 0x0FFFF));	// 73629 cmp     ax, 0FFFFh ;~ 2243:00C7
cs=0x2243;eip=0x0000ca; 	R(JNZ(loc_30adf));	// 73630 jnz     short loc_30ADF ;~ 2243:00CA
cs=0x2243;eip=0x0000cc; 	R(JMP(loc_30a51));	// 73631 jmp     loc_30A51 ;~ 2243:00CC
loc_30adf:
	// 9148 
cs=0x2243;eip=0x0000cf; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 73635 cmp     word ptr unk_571E7, 0 ;~ 2243:00CF
cs=0x2243;eip=0x0000d4; 	R(JZ(loc_30ae9));	// 73636 jz      short loc_30AE9 ;~ 2243:00D4
cs=0x2243;eip=0x0000d6; 	R(JMP(loc_30a51));	// 73637 jmp     loc_30A51 ;~ 2243:00D6
loc_30ae9:
	// 9149 
cs=0x2243;eip=0x0000d9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 73641 push    [bp+var_A] ;~ 2243:00D9
cs=0x2243;eip=0x0000dc; 	R(CALLF(sub_30b72,0));	// 73642 call    sub_30B72 ;~ 2243:00DC
cs=0x2243;eip=0x0000e1; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 73643 mov     bx, [bp+arg_2] ;~ 2243:00E1
cs=0x2243;eip=0x0000e4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 73644 mov     ax, [bp+var_4] ;~ 2243:00E4
cs=0x2243;eip=0x0000e7; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 73645 mov     [bx], ax ;~ 2243:00E7
cs=0x2243;eip=0x0000e9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 73646 mov     ax, [bp+var_8] ;~ 2243:00E9
cs=0x2243;eip=0x0000ec; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 73647 mov     dx, [bp+var_6] ;~ 2243:00EC
cs=0x2243;eip=0x0000ef; 	R(JMP(loc_30b12));	// 73648 jmp     short loc_30B12 ;~ 2243:00EF
loc_30b01:
	// 9150 
cs=0x2243;eip=0x0000f1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 73652 push    [bp+var_8] ;~ 2243:00F1
cs=0x2243;eip=0x0000f4; 	R(CALLF(sub_23a33,0));	// 73653 call    sub_23A33 ;~ 2243:00F4
loc_30b09:
	// 9151 
cs=0x2243;eip=0x0000f9; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 73657 mov     word ptr unk_571E7, 0 ;~ 2243:00F9
cs=0x2243;eip=0x0000ff; 	T(SUB(ax, ax));	// 73658 sub     ax, ax ;~ 2243:00FF
cs=0x2243;eip=0x000101; 	T(CWD);	// 73659 cwd ;~ 2243:0101
loc_30b12:
	// 9152 
cs=0x2243;eip=0x000102; 	T(MOV(sp, bp));	// 73662 mov     sp, bp ;~ 2243:0102
cs=0x2243;eip=0x000104; 	X(POP(bp));	// 73663 pop     bp ;~ 2243:0104
cs=0x2243;eip=0x000105; 	R(RETN(6));	// 73664 retn    6 ;~ 2243:0105

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_30a51: 	goto loc_30a51;
        case m2c::kloc_30a5f: 	goto loc_30a5f;
        case m2c::kloc_30a6a: 	goto loc_30a6a;
        case m2c::kloc_30a73: 	goto loc_30a73;
        case m2c::kloc_30a7e: 	goto loc_30a7e;
        case m2c::kloc_30a9c: 	goto loc_30a9c;
        case m2c::kloc_30aae: 	goto loc_30aae;
        case m2c::kloc_30adf: 	goto loc_30adf;
        case m2c::kloc_30ae9: 	goto loc_30ae9;
        case m2c::kloc_30b01: 	goto loc_30b01;
        case m2c::kloc_30b09: 	goto loc_30b09;
        case m2c::kloc_30b12: 	goto loc_30b12;
        case m2c::kret_2243_2: 	goto ret_2243_2;
        case m2c::kseg017_proc: 	goto seg017_proc;
        case m2c::ksub_30a14: 	goto sub_30a14;
        case m2c::ksub_30a28: 	goto sub_30a28;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

