/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group24(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group24:
    _begin:
sub_374e6:
	// 88478 
#undef var_6
#define var_6 -6
	// 88480 var_6           = dword ptr -6 ;~ 28F0:0006
#undef var_2
#define var_2 -2
	// 88481 var_2           = byte ptr -2 ;~ 28F0:0006
#undef arg_0
#define arg_0 4
	// 88482 arg_0           = word ptr  4 ;~ 28F0:0006
cs=0x28f0;eip=0x000006; 	X(PUSH(bp));	// 88484 push    bp ;~ 28F0:0006
cs=0x28f0;eip=0x000007; 	T(MOV(bp, sp));	// 88485 mov     bp, sp ;~ 28F0:0007
cs=0x28f0;eip=0x000009; 	T(SUB(sp, 6));	// 88486 sub     sp, 6 ;~ 28F0:0009
cs=0x28f0;eip=0x00000c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 88487 push    [bp+arg_0] ;~ 28F0:000C
cs=0x28f0;eip=0x00000f; 	T(ax = bp+var_2);	// 88488 lea     ax, [bp+var_2] ;~ 28F0:000F
cs=0x28f0;eip=0x000012; 	X(PUSH(ax));	// 88489 push    ax ;~ 28F0:0012
cs=0x28f0;eip=0x000013; 	R(CALLF(sub_30a14,0));	// 88490 call    sub_30A14 ;~ 28F0:0013
cs=0x28f0;eip=0x000018; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 88491 mov     word ptr [bp+var_6], ax ;~ 28F0:0018
cs=0x28f0;eip=0x00001b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 88492 mov     word ptr [bp+var_6+2], dx ;~ 28F0:001B
cs=0x28f0;eip=0x00001e; 	T(OR(dx, ax));	// 88493 or      dx, ax ;~ 28F0:001E
cs=0x28f0;eip=0x000020; 	R(JNZ(loc_37514));	// 88494 jnz     short loc_37514 ;~ 28F0:0020
cs=0x28f0;eip=0x000022; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 88495 push    [bp+arg_0] ;~ 28F0:0022
cs=0x28f0;eip=0x000025; 	T(ax = bp+var_2);	// 88496 lea     ax, [bp+var_2] ;~ 28F0:0025
cs=0x28f0;eip=0x000028; 	X(PUSH(ax));	// 88497 push    ax ;~ 28F0:0028
cs=0x28f0;eip=0x000029; 	R(CALLF(sub_31643,0));	// 88498 call    sub_31643 ;~ 28F0:0029
cs=0x28f0;eip=0x00002e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 88499 mov     word ptr [bp+var_6], ax ;~ 28F0:002E
cs=0x28f0;eip=0x000031; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 88500 mov     word ptr [bp+var_6+2], dx ;~ 28F0:0031
loc_37514:
	// 10033 
cs=0x28f0;eip=0x000034; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 88503 mov     ax, word ptr [bp+var_6] ;~ 28F0:0034
cs=0x28f0;eip=0x000037; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 88504 or      ax, word ptr [bp+var_6+2] ;~ 28F0:0037
cs=0x28f0;eip=0x00003a; 	R(JZ(loc_37544));	// 88505 jz      short loc_37544 ;~ 28F0:003A
cs=0x28f0;eip=0x00003c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 88506 les     bx, [bp+var_6] ;~ 28F0:003C
cs=0x28f0;eip=0x00003f; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 3));	// 88507 cmp     word ptr es:[bx+306h], 3 ;~ 28F0:003F
cs=0x28f0;eip=0x000045; 	R(JNZ(loc_37544));	// 88508 jnz     short loc_37544 ;~ 28F0:0045
cs=0x28f0;eip=0x000047; 	T(MOV(ax, bx));	// 88509 mov     ax, bx ;~ 28F0:0047
cs=0x28f0;eip=0x000049; 	T(MOV(dx, es));	// 88510 mov     dx, es ;~ 28F0:0049
cs=0x28f0;eip=0x00004b; 	T(ADD(ax, 0x344));	// 88511 add     ax, 344h ;~ 28F0:004B
cs=0x28f0;eip=0x00004e; 	X(MOV(*(dw*)(raddr(es,bx+0x326)), ax));	// 88512 mov     es:[bx+326h], ax ;~ 28F0:004E
cs=0x28f0;eip=0x000053; 	X(MOV(*(dw*)(raddr(es,bx+0x328)), dx));	// 88513 mov     es:[bx+328h], dx ;~ 28F0:0053
cs=0x28f0;eip=0x000058; 	T(SUB(ax, ax));	// 88514 sub     ax, ax ;~ 28F0:0058
cs=0x28f0;eip=0x00005a; 	X(MOV(*(dw*)(raddr(es,bx+0x66C)), ax));	// 88515 mov     es:[bx+66Ch], ax ;~ 28F0:005A
cs=0x28f0;eip=0x00005f; 	X(MOV(*(dw*)(raddr(es,bx+0x66A)), ax));	// 88516 mov     es:[bx+66Ah], ax ;~ 28F0:005F
loc_37544:
	// 10034 
cs=0x28f0;eip=0x000064; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_6)))));	// 88520 mov     ax, word ptr [bp+var_6] ;~ 28F0:0064
cs=0x28f0;eip=0x000067; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_6+2)))));	// 88521 mov     dx, word ptr [bp+var_6+2] ;~ 28F0:0067
cs=0x28f0;eip=0x00006a; 	T(MOV(sp, bp));	// 88522 mov     sp, bp ;~ 28F0:006A
cs=0x28f0;eip=0x00006c; 	X(POP(bp));	// 88523 pop     bp ;~ 28F0:006C
cs=0x28f0;eip=0x00006d; 	R(RETN(2));	// 88524 retn    2 ;~ 28F0:006D
sub_37550:
	// 88532 
#undef var_4
#define var_4 -4
	// 88534 var_4           = dword ptr -4 ;~ 28F0:0070
#undef arg_0
#define arg_0 6
	// 88535 arg_0           = word ptr  6 ;~ 28F0:0070
#undef arg_2
#define arg_2 8
	// 88536 arg_2           = word ptr  8 ;~ 28F0:0070
#undef arg_4
#define arg_4 0x0A
	// 88537 arg_4           = word ptr  0Ah ;~ 28F0:0070
cs=0x28f0;eip=0x000070; 	X(PUSH(bp));	// 88539 push    bp ;~ 28F0:0070
cs=0x28f0;eip=0x000071; 	T(MOV(bp, sp));	// 88540 mov     bp, sp ;~ 28F0:0071
cs=0x28f0;eip=0x000073; 	T(SUB(sp, 4));	// 88541 sub     sp, 4 ;~ 28F0:0073
cs=0x28f0;eip=0x000076; 	X(PUSH(si));	// 88542 push    si ;~ 28F0:0076
cs=0x28f0;eip=0x000077; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 88543 push    [bp+arg_0] ;~ 28F0:0077
cs=0x28f0;eip=0x00007a; 	R(CALL(sub_374e6,0));	// 88544 call    sub_374E6 ;~ 28F0:007A
cs=0x28f0;eip=0x00007d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 88545 mov     word ptr [bp+var_4], ax ;~ 28F0:007D
cs=0x28f0;eip=0x000080; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 88546 mov     word ptr [bp+var_4+2], dx ;~ 28F0:0080
cs=0x28f0;eip=0x000083; 	T(OR(ax, dx));	// 88547 or      ax, dx ;~ 28F0:0083
cs=0x28f0;eip=0x000085; 	R(JNZ(loc_3756a));	// 88548 jnz     short loc_3756A ;~ 28F0:0085
cs=0x28f0;eip=0x000087; 	R(JMP(loc_376d6));	// 88549 jmp     loc_376D6 ;~ 28F0:0087
loc_3756a:
	// 10035 
cs=0x28f0;eip=0x00008a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88553 les     bx, [bp+var_4] ;~ 28F0:008A
cs=0x28f0;eip=0x00008d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 88554 mov     ax, [bp+arg_2] ;~ 28F0:008D
cs=0x28f0;eip=0x000090; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 88555 mov     dx, [bp+arg_4] ;~ 28F0:0090
cs=0x28f0;eip=0x000093; 	X(MOV(*(dw*)(raddr(es,bx+0x31C)), ax));	// 88556 mov     es:[bx+31Ch], ax ;~ 28F0:0093
cs=0x28f0;eip=0x000098; 	X(MOV(*(dw*)(raddr(es,bx+0x31E)), dx));	// 88557 mov     es:[bx+31Eh], dx ;~ 28F0:0098
cs=0x28f0;eip=0x00009d; 	T(MOV(si, *(dw*)((&unk_47ab2))));	// 88558 mov     si, word ptr unk_47AB2 ;~ 28F0:009D
cs=0x28f0;eip=0x0000a1; 	T(SHL(si, 1));	// 88559 shl     si, 1 ;~ 28F0:00A1
cs=0x28f0;eip=0x0000a3; 	T(SHL(si, 1));	// 88560 shl     si, 1 ;~ 28F0:00A3
cs=0x28f0;eip=0x0000a5; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2B0E))));	// 88561 mov     ax, [si+2B0Eh] ;~ 28F0:00A5
cs=0x28f0;eip=0x0000a9; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x2B10))));	// 88562 mov     dx, [si+2B10h] ;~ 28F0:00A9
cs=0x28f0;eip=0x0000ad; 	X(MOV(*(dw*)(raddr(es,bx+0x302)), ax));	// 88563 mov     es:[bx+302h], ax ;~ 28F0:00AD
cs=0x28f0;eip=0x0000b2; 	X(MOV(*(dw*)(raddr(es,bx+0x304)), dx));	// 88564 mov     es:[bx+304h], dx ;~ 28F0:00B2
cs=0x28f0;eip=0x0000b7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x27E))));	// 88565 mov     ax, es:[bx+27Eh] ;~ 28F0:00B7
cs=0x28f0;eip=0x0000bc; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x280))));	// 88566 mov     dx, es:[bx+280h] ;~ 28F0:00BC
cs=0x28f0;eip=0x0000c1; 	X(MOV(*(dw*)(raddr(es,bx+0x276)), ax));	// 88567 mov     es:[bx+276h], ax ;~ 28F0:00C1
cs=0x28f0;eip=0x0000c6; 	X(MOV(*(dw*)(raddr(es,bx+0x278)), dx));	// 88568 mov     es:[bx+278h], dx ;~ 28F0:00C6
cs=0x28f0;eip=0x0000cb; 	T(CMP(*(dw*)(raddr(es,bx+0x20C)), 0));	// 88569 cmp     word ptr es:[bx+20Ch], 0 ;~ 28F0:00CB
cs=0x28f0;eip=0x0000d1; 	R(JLE(loc_375bb));	// 88570 jle     short loc_375BB ;~ 28F0:00D1
cs=0x28f0;eip=0x0000d3; 	T(CMP(*(raddr(es,bx+0x214)), 0));	// 88571 cmp     byte ptr es:[bx+214h], 0 ;~ 28F0:00D3
cs=0x28f0;eip=0x0000d9; 	R(JL(loc_375cb));	// 88572 jl      short loc_375CB ;~ 28F0:00D9
loc_375bb:
	// 10036 
cs=0x28f0;eip=0x0000db; 	T(CMP(*(dw*)(raddr(es,bx+0x20C)), 0));	// 88575 cmp     word ptr es:[bx+20Ch], 0 ;~ 28F0:00DB
cs=0x28f0;eip=0x0000e1; 	R(JGE(loc_375d8));	// 88576 jge     short loc_375D8 ;~ 28F0:00E1
cs=0x28f0;eip=0x0000e3; 	T(CMP(*(raddr(es,bx+0x214)), 0));	// 88577 cmp     byte ptr es:[bx+214h], 0 ;~ 28F0:00E3
cs=0x28f0;eip=0x0000e9; 	R(JLE(loc_375d8));	// 88578 jle     short loc_375D8 ;~ 28F0:00E9
loc_375cb:
	// 10037 
cs=0x28f0;eip=0x0000eb; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 88581 mov     al, es:[bx+214h] ;~ 28F0:00EB
cs=0x28f0;eip=0x0000f0; 	T(CBW);	// 88582 cbw ;~ 28F0:00F0
cs=0x28f0;eip=0x0000f1; 	T(NEG(ax));	// 88583 neg     ax ;~ 28F0:00F1
cs=0x28f0;eip=0x0000f3; 	X(ADD(*(dw*)(raddr(es,bx+0x20C)), ax));	// 88584 add     es:[bx+20Ch], ax ;~ 28F0:00F3
loc_375d8:
	// 10038 
cs=0x28f0;eip=0x0000f8; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 88588 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:00F8
cs=0x28f0;eip=0x0000fe; 	R(JNZ(loc_375e7));	// 88589 jnz     short loc_375E7 ;~ 28F0:00FE
cs=0x28f0;eip=0x000100; 	X(PUSH(es));	// 88590 push    es ;~ 28F0:0100
cs=0x28f0;eip=0x000101; 	X(PUSH(bx));	// 88591 push    bx ;~ 28F0:0101
cs=0x28f0;eip=0x000102; 	R(CALL(sub_3a624,0));	// 88592 call    sub_3A624 ;~ 28F0:0102
cs=0x28f0;eip=0x000105; 	R(JMP(loc_375f6));	// 88593 jmp     short loc_375F6 ;~ 28F0:0105
loc_375e7:
	// 10039 
cs=0x28f0;eip=0x000107; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88597 les     bx, [bp+var_4] ;~ 28F0:0107
cs=0x28f0;eip=0x00010a; 	T(SUB(ax, ax));	// 88598 sub     ax, ax ;~ 28F0:010A
cs=0x28f0;eip=0x00010c; 	X(MOV(*(dw*)(raddr(es,bx+0x324)), ax));	// 88599 mov     es:[bx+324h], ax ;~ 28F0:010C
cs=0x28f0;eip=0x000111; 	X(MOV(*(dw*)(raddr(es,bx+0x322)), ax));	// 88600 mov     es:[bx+322h], ax ;~ 28F0:0111
loc_375f6:
	// 10040 
cs=0x28f0;eip=0x000116; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 88603 push    word ptr [bp+var_4+2] ;~ 28F0:0116
cs=0x28f0;eip=0x000119; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 88604 push    word ptr [bp+var_4] ;~ 28F0:0119
cs=0x28f0;eip=0x00011c; 	R(CALL(sub_37e25,0));	// 88605 call    sub_37E25 ;~ 28F0:011C
cs=0x28f0;eip=0x00011f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88606 les     bx, [bp+var_4] ;~ 28F0:011F
cs=0x28f0;eip=0x000122; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 88607 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0122
cs=0x28f0;eip=0x000128; 	R(JNZ(loc_3761a));	// 88608 jnz     short loc_3761A ;~ 28F0:0128
cs=0x28f0;eip=0x00012a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24))));	// 88609 mov     ax, es:[bx+24h] ;~ 28F0:012A
cs=0x28f0;eip=0x00012e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x26))));	// 88610 mov     dx, es:[bx+26h] ;~ 28F0:012E
cs=0x28f0;eip=0x000132; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 88611 mov     es:[bx+20h], ax ;~ 28F0:0132
cs=0x28f0;eip=0x000136; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 88612 mov     es:[bx+22h], dx ;~ 28F0:0136
loc_3761a:
	// 10041 
cs=0x28f0;eip=0x00013a; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 3));	// 88615 cmp     word ptr es:[bx+306h], 3 ;~ 28F0:013A
cs=0x28f0;eip=0x000140; 	R(JZ(loc_37625));	// 88616 jz      short loc_37625 ;~ 28F0:0140
cs=0x28f0;eip=0x000142; 	R(JMP(loc_376d6));	// 88617 jmp     loc_376D6 ;~ 28F0:0142
loc_37625:
	// 10042 
cs=0x28f0;eip=0x000145; 	X(MOV(*(dw*)(raddr(es,bx+0x306)), 1));	// 88621 mov     word ptr es:[bx+306h], 1 ;~ 28F0:0145
cs=0x28f0;eip=0x00014c; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 88622 les     bx, es:[bx+326h] ;~ 28F0:014C
cs=0x28f0;eip=0x000151; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 88623 mov     ax, [bp+arg_2] ;~ 28F0:0151
cs=0x28f0;eip=0x000154; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_4))));	// 88624 mov     dx, [bp+arg_4] ;~ 28F0:0154
cs=0x28f0;eip=0x000157; 	X(MOV(*(dw*)(raddr(es,bx+0x31C)), ax));	// 88625 mov     es:[bx+31Ch], ax ;~ 28F0:0157
cs=0x28f0;eip=0x00015c; 	X(MOV(*(dw*)(raddr(es,bx+0x31E)), dx));	// 88626 mov     es:[bx+31Eh], dx ;~ 28F0:015C
cs=0x28f0;eip=0x000161; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88627 les     bx, [bp+var_4] ;~ 28F0:0161
cs=0x28f0;eip=0x000164; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 88628 les     bx, es:[bx+326h] ;~ 28F0:0164
cs=0x28f0;eip=0x000169; 	T(MOV(si, *(dw*)((&unk_47ab2))));	// 88629 mov     si, word ptr unk_47AB2 ;~ 28F0:0169
cs=0x28f0;eip=0x00016d; 	T(SHL(si, 1));	// 88630 shl     si, 1 ;~ 28F0:016D
cs=0x28f0;eip=0x00016f; 	T(SHL(si, 1));	// 88631 shl     si, 1 ;~ 28F0:016F
cs=0x28f0;eip=0x000171; 	T(MOV(ax, *(dw*)(raddr(ds,si+0x2B0E))));	// 88632 mov     ax, [si+2B0Eh] ;~ 28F0:0171
cs=0x28f0;eip=0x000175; 	T(MOV(dx, *(dw*)(raddr(ds,si+0x2B10))));	// 88633 mov     dx, [si+2B10h] ;~ 28F0:0175
cs=0x28f0;eip=0x000179; 	X(MOV(*(dw*)(raddr(es,bx+0x302)), ax));	// 88634 mov     es:[bx+302h], ax ;~ 28F0:0179
cs=0x28f0;eip=0x00017e; 	X(MOV(*(dw*)(raddr(es,bx+0x304)), dx));	// 88635 mov     es:[bx+304h], dx ;~ 28F0:017E
cs=0x28f0;eip=0x000183; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88636 les     bx, [bp+var_4] ;~ 28F0:0183
cs=0x28f0;eip=0x000186; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 88637 les     bx, es:[bx+326h] ;~ 28F0:0186
cs=0x28f0;eip=0x00018b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x27E))));	// 88638 mov     ax, es:[bx+27Eh] ;~ 28F0:018B
cs=0x28f0;eip=0x000190; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x280))));	// 88639 mov     dx, es:[bx+280h] ;~ 28F0:0190
cs=0x28f0;eip=0x000195; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88640 les     bx, [bp+var_4] ;~ 28F0:0195
cs=0x28f0;eip=0x000198; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 88641 les     bx, es:[bx+326h] ;~ 28F0:0198
cs=0x28f0;eip=0x00019d; 	X(MOV(*(dw*)(raddr(es,bx+0x276)), ax));	// 88642 mov     es:[bx+276h], ax ;~ 28F0:019D
cs=0x28f0;eip=0x0001a2; 	X(MOV(*(dw*)(raddr(es,bx+0x278)), dx));	// 88643 mov     es:[bx+278h], dx ;~ 28F0:01A2
cs=0x28f0;eip=0x0001a7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88644 les     bx, [bp+var_4] ;~ 28F0:01A7
cs=0x28f0;eip=0x0001aa; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 88645 les     bx, es:[bx+326h] ;~ 28F0:01AA
cs=0x28f0;eip=0x0001af; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 88646 mov     al, es:[bx+214h] ;~ 28F0:01AF
cs=0x28f0;eip=0x0001b4; 	T(CBW);	// 88647 cbw ;~ 28F0:01B4
cs=0x28f0;eip=0x0001b5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88648 les     bx, [bp+var_4] ;~ 28F0:01B5
cs=0x28f0;eip=0x0001b8; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 88649 les     bx, es:[bx+326h] ;~ 28F0:01B8
cs=0x28f0;eip=0x0001bd; 	X(SUB(*(dw*)(raddr(es,bx+0x20C)), ax));	// 88650 sub     es:[bx+20Ch], ax ;~ 28F0:01BD
cs=0x28f0;eip=0x0001c2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88651 les     bx, [bp+var_4] ;~ 28F0:01C2
cs=0x28f0;eip=0x0001c5; 	X(PUSH(*(dw*)(raddr(es,bx+0x328))));	// 88652 push    word ptr es:[bx+328h] ;~ 28F0:01C5
cs=0x28f0;eip=0x0001ca; 	X(PUSH(*(dw*)(raddr(es,bx+0x326))));	// 88653 push    word ptr es:[bx+326h] ;~ 28F0:01CA
cs=0x28f0;eip=0x0001cf; 	R(CALL(sub_3a624,0));	// 88654 call    sub_3A624 ;~ 28F0:01CF
cs=0x28f0;eip=0x0001d2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 88655 push    word ptr [bp+var_4+2] ;~ 28F0:01D2
cs=0x28f0;eip=0x0001d5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 88656 push    word ptr [bp+var_4] ;~ 28F0:01D5
cs=0x28f0;eip=0x0001d8; 	R(CALL(sub_37e25,0));	// 88657 call    sub_37E25 ;~ 28F0:01D8
cs=0x28f0;eip=0x0001db; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88658 les     bx, [bp+var_4] ;~ 28F0:01DB
cs=0x28f0;eip=0x0001de; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 88659 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:01DE
cs=0x28f0;eip=0x0001e4; 	R(JNZ(loc_376d6));	// 88660 jnz     short loc_376D6 ;~ 28F0:01E4
cs=0x28f0;eip=0x0001e6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24))));	// 88661 mov     ax, es:[bx+24h] ;~ 28F0:01E6
cs=0x28f0;eip=0x0001ea; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x26))));	// 88662 mov     dx, es:[bx+26h] ;~ 28F0:01EA
cs=0x28f0;eip=0x0001ee; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 88663 mov     es:[bx+20h], ax ;~ 28F0:01EE
cs=0x28f0;eip=0x0001f2; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 88664 mov     es:[bx+22h], dx ;~ 28F0:01F2
loc_376d6:
	// 10043 
cs=0x28f0;eip=0x0001f6; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 88668 mov     ax, word ptr [bp+var_4] ;~ 28F0:01F6
cs=0x28f0;eip=0x0001f9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 88669 mov     dx, word ptr [bp+var_4+2] ;~ 28F0:01F9
cs=0x28f0;eip=0x0001fc; 	X(POP(si));	// 88670 pop     si ;~ 28F0:01FC
cs=0x28f0;eip=0x0001fd; 	T(MOV(sp, bp));	// 88671 mov     sp, bp ;~ 28F0:01FD
cs=0x28f0;eip=0x0001ff; 	X(POP(bp));	// 88672 pop     bp ;~ 28F0:01FF
cs=0x28f0;eip=0x000200; 	R(RETF(0));	// 88673 retf ;~ 28F0:0200
sub_376e1:
	// 88681 
#undef arg_0
#define arg_0 6
	// 88684 arg_0           = dword ptr  6 ;~ 28F0:0201
#undef arg_4
#define arg_4 0x0A
	// 88685 arg_4           = word ptr  0Ah ;~ 28F0:0201
cs=0x28f0;eip=0x000201; 	X(PUSH(bp));	// 88687 push    bp ;~ 28F0:0201
cs=0x28f0;eip=0x000202; 	T(MOV(bp, sp));	// 88688 mov     bp, sp ;~ 28F0:0202
cs=0x28f0;eip=0x000204; 	X(PUSH(si));	// 88689 push    si ;~ 28F0:0204
cs=0x28f0;eip=0x000205; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 88690 les     bx, [bp+arg_0] ;~ 28F0:0205
cs=0x28f0;eip=0x000208; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 88691 mov     ax, es:[bx+276h] ;~ 28F0:0208
cs=0x28f0;eip=0x00020d; 	T(OR(ax, *(dw*)(raddr(es,bx+0x278))));	// 88692 or      ax, es:[bx+278h] ;~ 28F0:020D
cs=0x28f0;eip=0x000212; 	R(JNZ(loc_376f7));	// 88693 jnz     short loc_376F7 ;~ 28F0:0212
cs=0x28f0;eip=0x000214; 	R(JMP(loc_37784));	// 88694 jmp     loc_37784 ;~ 28F0:0214
loc_376f7:
	// 10044 
cs=0x28f0;eip=0x000217; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x31));	// 88698 cmp     [bp+arg_4], 31h ; '1' ;~ 28F0:0217
cs=0x28f0;eip=0x00021b; 	R(JGE(loc_37700));	// 88699 jge     short loc_37700 ;~ 28F0:021B
cs=0x28f0;eip=0x00021d; 	R(JMP(loc_37784));	// 88700 jmp     loc_37784 ;~ 28F0:021D
loc_37700:
	// 10045 
cs=0x28f0;eip=0x000220; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x35));	// 88704 cmp     [bp+arg_4], 35h ; '5' ;~ 28F0:0220
cs=0x28f0;eip=0x000224; 	R(JG(loc_37784));	// 88705 jg      short loc_37784 ;~ 28F0:0224
cs=0x28f0;eip=0x000226; 	T(SUB(ax, ax));	// 88706 sub     ax, ax ;~ 28F0:0226
cs=0x28f0;eip=0x000228; 	X(MOV(*(dw*)(raddr(es,bx+0x244)), ax));	// 88707 mov     es:[bx+244h], ax ;~ 28F0:0228
cs=0x28f0;eip=0x00022d; 	X(MOV(*(dw*)(raddr(es,bx+0x242)), ax));	// 88708 mov     es:[bx+242h], ax ;~ 28F0:022D
cs=0x28f0;eip=0x000232; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_4))));	// 88709 mov     si, [bp+arg_4] ;~ 28F0:0232
cs=0x28f0;eip=0x000235; 	T(SHL(si, 1));	// 88710 shl     si, 1 ;~ 28F0:0235
cs=0x28f0;eip=0x000237; 	T(MOV(ax, *(dw*)(raddr(es,bx+si+0x1D6))));	// 88711 mov     ax, es:[bx+si+1D6h] ;~ 28F0:0237
cs=0x28f0;eip=0x00023c; 	T(CWD);	// 88712 cwd ;~ 28F0:023C
cs=0x28f0;eip=0x00023d; 	T(MOV(dh, dl));	// 88713 mov     dh, dl ;~ 28F0:023D
cs=0x28f0;eip=0x00023f; 	T(MOV(dl, ah));	// 88714 mov     dl, ah ;~ 28F0:023F
cs=0x28f0;eip=0x000241; 	T(MOV(ah, al));	// 88715 mov     ah, al ;~ 28F0:0241
cs=0x28f0;eip=0x000243; 	T(SUB(al, al));	// 88716 sub     al, al ;~ 28F0:0243
cs=0x28f0;eip=0x000245; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 88717 mov     es:[bx+21Ch], ax ;~ 28F0:0245
cs=0x28f0;eip=0x00024a; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 88718 mov     es:[bx+21Eh], dx ;~ 28F0:024A
cs=0x28f0;eip=0x00024f; 	T(TEST(*(raddr(es,bx+0x340)), 1));	// 88719 test    byte ptr es:[bx+340h], 1 ;~ 28F0:024F
cs=0x28f0;eip=0x000255; 	R(JZ(loc_3775e));	// 88720 jz      short loc_3775E ;~ 28F0:0255
cs=0x28f0;eip=0x000257; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x236))));	// 88721 cmp     dx, es:[bx+236h] ;~ 28F0:0257
cs=0x28f0;eip=0x00025c; 	R(JL(loc_37751));	// 88722 jl      short loc_37751 ;~ 28F0:025C
cs=0x28f0;eip=0x00025e; 	R(JG(loc_37747));	// 88723 jg      short loc_37747 ;~ 28F0:025E
cs=0x28f0;eip=0x000260; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x234))));	// 88724 cmp     ax, es:[bx+234h] ;~ 28F0:0260
cs=0x28f0;eip=0x000265; 	R(JBE(loc_37751));	// 88725 jbe     short loc_37751 ;~ 28F0:0265
loc_37747:
	// 10046 
cs=0x28f0;eip=0x000267; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x236))));	// 88728 mov     dx, es:[bx+236h] ;~ 28F0:0267
cs=0x28f0;eip=0x00026c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x234))));	// 88729 mov     ax, es:[bx+234h] ;~ 28F0:026C
loc_37751:
	// 10047 
cs=0x28f0;eip=0x000271; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 88733 mov     es:[bx+21Ch], ax ;~ 28F0:0271
cs=0x28f0;eip=0x000276; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 88734 mov     es:[bx+21Eh], dx ;~ 28F0:0276
cs=0x28f0;eip=0x00027b; 	R(JMP(loc_37a17));	// 88735 jmp     loc_37A17 ;~ 28F0:027B
loc_3775e:
	// 10048 
cs=0x28f0;eip=0x00027e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 88739 mov     ax, es:[bx+21Ch] ;~ 28F0:027E
cs=0x28f0;eip=0x000283; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 88740 mov     dx, es:[bx+21Eh] ;~ 28F0:0283
cs=0x28f0;eip=0x000288; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x222))));	// 88741 cmp     dx, es:[bx+222h] ;~ 28F0:0288
cs=0x28f0;eip=0x00028d; 	R(JL(loc_37751));	// 88742 jl      short loc_37751 ;~ 28F0:028D
cs=0x28f0;eip=0x00028f; 	R(JG(loc_37778));	// 88743 jg      short loc_37778 ;~ 28F0:028F
cs=0x28f0;eip=0x000291; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x220))));	// 88744 cmp     ax, es:[bx+220h] ;~ 28F0:0291
cs=0x28f0;eip=0x000296; 	R(JBE(loc_37751));	// 88745 jbe     short loc_37751 ;~ 28F0:0296
loc_37778:
	// 10049 
cs=0x28f0;eip=0x000298; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x222))));	// 88748 mov     dx, es:[bx+222h] ;~ 28F0:0298
cs=0x28f0;eip=0x00029d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x220))));	// 88749 mov     ax, es:[bx+220h] ;~ 28F0:029D
cs=0x28f0;eip=0x0002a2; 	R(JMP(loc_37751));	// 88750 jmp     short loc_37751 ;~ 28F0:02A2
loc_37784:
	// 10050 
cs=0x28f0;eip=0x0002a4; 	X(OR(*(db*)(raddr(ss,bp+arg_4)), 0x20));	// 88755 or      byte ptr [bp+arg_4], 20h ;~ 28F0:02A4
cs=0x28f0;eip=0x0002a8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 88756 mov     ax, es:[bx+276h] ;~ 28F0:02A8
cs=0x28f0;eip=0x0002ad; 	T(OR(ax, *(dw*)(raddr(es,bx+0x278))));	// 88757 or      ax, es:[bx+278h] ;~ 28F0:02AD
cs=0x28f0;eip=0x0002b2; 	R(JZ(loc_37812));	// 88758 jz      short loc_37812 ;~ 28F0:02B2
cs=0x28f0;eip=0x0002b4; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x37));	// 88759 cmp     [bp+arg_4], 37h ; '7' ;~ 28F0:02B4
cs=0x28f0;eip=0x0002b8; 	R(JNZ(loc_37812));	// 88760 jnz     short loc_37812 ;~ 28F0:02B8
cs=0x28f0;eip=0x0002ba; 	T(SUB(ax, ax));	// 88761 sub     ax, ax ;~ 28F0:02BA
cs=0x28f0;eip=0x0002bc; 	X(MOV(*(dw*)(raddr(es,bx+0x244)), ax));	// 88762 mov     es:[bx+244h], ax ;~ 28F0:02BC
cs=0x28f0;eip=0x0002c1; 	X(MOV(*(dw*)(raddr(es,bx+0x242)), ax));	// 88763 mov     es:[bx+242h], ax ;~ 28F0:02C1
cs=0x28f0;eip=0x0002c6; 	X(ADD(*(dw*)(raddr(es,bx+0x21C)), 0x0A00));	// 88764 add     word ptr es:[bx+21Ch], 0A00h ;~ 28F0:02C6
cs=0x28f0;eip=0x0002cd; 	X(ADC(*(dw*)(raddr(es,bx+0x21E)), 0));	// 88765 adc     word ptr es:[bx+21Eh], 0 ;~ 28F0:02CD
cs=0x28f0;eip=0x0002d3; 	T(TEST(*(raddr(es,bx+0x340)), 1));	// 88766 test    byte ptr es:[bx+340h], 1 ;~ 28F0:02D3
cs=0x28f0;eip=0x0002d9; 	R(JZ(loc_377ec));	// 88767 jz      short loc_377EC ;~ 28F0:02D9
cs=0x28f0;eip=0x0002db; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 88768 mov     ax, es:[bx+21Ch] ;~ 28F0:02DB
cs=0x28f0;eip=0x0002e0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 88769 mov     dx, es:[bx+21Eh] ;~ 28F0:02E0
cs=0x28f0;eip=0x0002e5; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x236))));	// 88770 cmp     dx, es:[bx+236h] ;~ 28F0:02E5
cs=0x28f0;eip=0x0002ea; 	R(JL(loc_377df));	// 88771 jl      short loc_377DF ;~ 28F0:02EA
cs=0x28f0;eip=0x0002ec; 	R(JG(loc_377d5));	// 88772 jg      short loc_377D5 ;~ 28F0:02EC
cs=0x28f0;eip=0x0002ee; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x234))));	// 88773 cmp     ax, es:[bx+234h] ;~ 28F0:02EE
cs=0x28f0;eip=0x0002f3; 	R(JBE(loc_377df));	// 88774 jbe     short loc_377DF ;~ 28F0:02F3
loc_377d5:
	// 10051 
cs=0x28f0;eip=0x0002f5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x236))));	// 88777 mov     dx, es:[bx+236h] ;~ 28F0:02F5
cs=0x28f0;eip=0x0002fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x234))));	// 88778 mov     ax, es:[bx+234h] ;~ 28F0:02FA
loc_377df:
	// 10052 
cs=0x28f0;eip=0x0002ff; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 88782 mov     es:[bx+21Ch], ax ;~ 28F0:02FF
cs=0x28f0;eip=0x000304; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 88783 mov     es:[bx+21Eh], dx ;~ 28F0:0304
cs=0x28f0;eip=0x000309; 	R(JMP(loc_3793f));	// 88784 jmp     loc_3793F ;~ 28F0:0309
loc_377ec:
	// 10053 
cs=0x28f0;eip=0x00030c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 88788 mov     ax, es:[bx+21Ch] ;~ 28F0:030C
cs=0x28f0;eip=0x000311; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 88789 mov     dx, es:[bx+21Eh] ;~ 28F0:0311
cs=0x28f0;eip=0x000316; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x222))));	// 88790 cmp     dx, es:[bx+222h] ;~ 28F0:0316
cs=0x28f0;eip=0x00031b; 	R(JL(loc_377df));	// 88791 jl      short loc_377DF ;~ 28F0:031B
cs=0x28f0;eip=0x00031d; 	R(JG(loc_37806));	// 88792 jg      short loc_37806 ;~ 28F0:031D
cs=0x28f0;eip=0x00031f; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x220))));	// 88793 cmp     ax, es:[bx+220h] ;~ 28F0:031F
cs=0x28f0;eip=0x000324; 	R(JBE(loc_377df));	// 88794 jbe     short loc_377DF ;~ 28F0:0324
loc_37806:
	// 10054 
cs=0x28f0;eip=0x000326; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x222))));	// 88797 mov     dx, es:[bx+222h] ;~ 28F0:0326
cs=0x28f0;eip=0x00032b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x220))));	// 88798 mov     ax, es:[bx+220h] ;~ 28F0:032B
cs=0x28f0;eip=0x000330; 	R(JMP(loc_377df));	// 88799 jmp     short loc_377DF ;~ 28F0:0330
loc_37812:
	// 10055 
cs=0x28f0;eip=0x000332; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x36));	// 88804 cmp     [bp+arg_4], 36h ; '6' ;~ 28F0:0332
cs=0x28f0;eip=0x000336; 	R(JNZ(loc_37857));	// 88805 jnz     short loc_37857 ;~ 28F0:0336
cs=0x28f0;eip=0x000338; 	T(SUB(ax, ax));	// 88806 sub     ax, ax ;~ 28F0:0338
cs=0x28f0;eip=0x00033a; 	X(MOV(*(dw*)(raddr(es,bx+0x244)), ax));	// 88807 mov     es:[bx+244h], ax ;~ 28F0:033A
cs=0x28f0;eip=0x00033f; 	X(MOV(*(dw*)(raddr(es,bx+0x242)), ax));	// 88808 mov     es:[bx+242h], ax ;~ 28F0:033F
cs=0x28f0;eip=0x000344; 	X(SUB(*(dw*)(raddr(es,bx+0x21C)), 0x0A00));	// 88809 sub     word ptr es:[bx+21Ch], 0A00h ;~ 28F0:0344
cs=0x28f0;eip=0x00034b; 	X(SBB(*(dw*)(raddr(es,bx+0x21E)), 0));	// 88810 sbb     word ptr es:[bx+21Eh], 0 ;~ 28F0:034B
cs=0x28f0;eip=0x000351; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 88811 mov     ax, es:[bx+21Ch] ;~ 28F0:0351
cs=0x28f0;eip=0x000356; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 88812 mov     dx, es:[bx+21Eh] ;~ 28F0:0356
cs=0x28f0;eip=0x00035b; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x226))));	// 88813 cmp     dx, es:[bx+226h] ;~ 28F0:035B
cs=0x28f0;eip=0x000360; 	R(JG(loc_377df));	// 88814 jg      short loc_377DF ;~ 28F0:0360
cs=0x28f0;eip=0x000362; 	R(JL(loc_3784b));	// 88815 jl      short loc_3784B ;~ 28F0:0362
cs=0x28f0;eip=0x000364; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x224))));	// 88816 cmp     ax, es:[bx+224h] ;~ 28F0:0364
cs=0x28f0;eip=0x000369; 	R(JNC(loc_377df));	// 88817 jnb     short loc_377DF ;~ 28F0:0369
loc_3784b:
	// 10056 
cs=0x28f0;eip=0x00036b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x226))));	// 88820 mov     dx, es:[bx+226h] ;~ 28F0:036B
cs=0x28f0;eip=0x000370; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x224))));	// 88821 mov     ax, es:[bx+224h] ;~ 28F0:0370
cs=0x28f0;eip=0x000375; 	R(JMP(loc_377df));	// 88822 jmp     short loc_377DF ;~ 28F0:0375
loc_37857:
	// 10057 
cs=0x28f0;eip=0x000377; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x67));	// 88826 cmp     [bp+arg_4], 67h ; 'g' ;~ 28F0:0377
cs=0x28f0;eip=0x00037b; 	R(JNZ(loc_378ba));	// 88827 jnz     short loc_378BA ;~ 28F0:037B
cs=0x28f0;eip=0x00037d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 88828 les     bx, [bp+arg_0] ;~ 28F0:037D
cs=0x28f0;eip=0x000380; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 88829 mov     ax, es:[bx+2FAh] ;~ 28F0:0380
cs=0x28f0;eip=0x000385; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 88830 mov     dx, es:[bx+2FCh] ;~ 28F0:0385
cs=0x28f0;eip=0x00038a; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 88831 add     ax, es:[bx+302h] ;~ 28F0:038A
cs=0x28f0;eip=0x00038f; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 88832 adc     dx, es:[bx+304h] ;~ 28F0:038F
cs=0x28f0;eip=0x000394; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 88833 les     bx, es:[bx+31Ch] ;~ 28F0:0394
cs=0x28f0;eip=0x000399; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 88834 cmp     dx, es:[bx+0Ch] ;~ 28F0:0399
cs=0x28f0;eip=0x00039d; 	R(JG(loc_378ba));	// 88835 jg      short loc_378BA ;~ 28F0:039D
cs=0x28f0;eip=0x00039f; 	R(JL(loc_37887));	// 88836 jl      short loc_37887 ;~ 28F0:039F
cs=0x28f0;eip=0x0003a1; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 88837 cmp     ax, es:[bx+0Ah] ;~ 28F0:03A1
cs=0x28f0;eip=0x0003a5; 	R(JNC(loc_378ba));	// 88838 jnb     short loc_378BA ;~ 28F0:03A5
loc_37887:
	// 10058 
cs=0x28f0;eip=0x0003a7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 88841 les     bx, [bp+arg_0] ;~ 28F0:03A7
cs=0x28f0;eip=0x0003aa; 	T(TEST(*(raddr(es,bx+0x340)), 8));	// 88842 test    byte ptr es:[bx+340h], 8 ;~ 28F0:03AA
cs=0x28f0;eip=0x0003b0; 	R(JNZ(loc_378ba));	// 88843 jnz     short loc_378BA ;~ 28F0:03B0
cs=0x28f0;eip=0x0003b2; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 88844 cmp     word ptr unk_47AB2, 3 ;~ 28F0:03B2
cs=0x28f0;eip=0x0003b7; 	R(JZ(loc_378a3));	// 88845 jz      short loc_378A3 ;~ 28F0:03B7
cs=0x28f0;eip=0x0003b9; 	T(CMP(*(dw*)((&unk_47ab2)), 2));	// 88846 cmp     word ptr unk_47AB2, 2 ;~ 28F0:03B9
cs=0x28f0;eip=0x0003be; 	R(JZ(loc_378a3));	// 88847 jz      short loc_378A3 ;~ 28F0:03BE
cs=0x28f0;eip=0x0003c0; 	R(JMP(loc_3793f));	// 88848 jmp     loc_3793F ;~ 28F0:03C0
loc_378a3:
	// 10059 
cs=0x28f0;eip=0x0003c3; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 1));	// 88853 cmp     word ptr es:[bx+212h], 1 ;~ 28F0:03C3
cs=0x28f0;eip=0x0003c9; 	T(SBB(ax, ax));	// 88854 sbb     ax, ax ;~ 28F0:03C9
cs=0x28f0;eip=0x0003cb; 	T(NEG(ax));	// 88855 neg     ax ;~ 28F0:03CB
cs=0x28f0;eip=0x0003cd; 	X(MOV(*(dw*)(raddr(es,bx+0x212)), ax));	// 88856 mov     es:[bx+212h], ax ;~ 28F0:03CD
cs=0x28f0;eip=0x0003d2; 	R(CALLF(sub_36f51,0));	// 88857 call    sub_36F51 ;~ 28F0:03D2
cs=0x28f0;eip=0x0003d7; 	R(JMP(loc_3793f));	// 88858 jmp     loc_3793F ;~ 28F0:03D7
loc_378ba:
	// 10060 
cs=0x28f0;eip=0x0003da; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x76));	// 88863 cmp     [bp+arg_4], 76h ; 'v' ;~ 28F0:03DA
cs=0x28f0;eip=0x0003de; 	R(JNZ(loc_3793f));	// 88864 jnz     short loc_3793F ;~ 28F0:03DE
cs=0x28f0;eip=0x0003e0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 88865 les     bx, [bp+arg_0] ;~ 28F0:03E0
cs=0x28f0;eip=0x0003e3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 88866 mov     ax, es:[bx+326h] ;~ 28F0:03E3
cs=0x28f0;eip=0x0003e8; 	T(OR(ax, *(dw*)(raddr(es,bx+0x328))));	// 88867 or      ax, es:[bx+328h] ;~ 28F0:03E8
cs=0x28f0;eip=0x0003ed; 	R(JZ(loc_3793f));	// 88868 jz      short loc_3793F ;~ 28F0:03ED
cs=0x28f0;eip=0x0003ef; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 88869 mov     ax, es:[bx+32Ch] ;~ 28F0:03EF
cs=0x28f0;eip=0x0003f4; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 88870 or      ax, es:[bx+32Eh] ;~ 28F0:03F4
cs=0x28f0;eip=0x0003f9; 	R(JNZ(loc_3793f));	// 88871 jnz     short loc_3793F ;~ 28F0:03F9
cs=0x28f0;eip=0x0003fb; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 88872 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:03FB
cs=0x28f0;eip=0x000401; 	R(JNZ(loc_378fd));	// 88873 jnz     short loc_378FD ;~ 28F0:0401
loc_378e3:
	// 10061 
cs=0x28f0;eip=0x000403; 	R(CALLF(sub_36f51,0));	// 88876 call    sub_36F51 ;~ 28F0:0403
cs=0x28f0;eip=0x000408; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 88877 les     bx, [bp+arg_0] ;~ 28F0:0408
cs=0x28f0;eip=0x00040b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32A))));	// 88878 mov     ax, es:[bx+32Ah] ;~ 28F0:040B
cs=0x28f0;eip=0x000410; 	T(CWD);	// 88879 cwd ;~ 28F0:0410
cs=0x28f0;eip=0x000411; 	X(MOV(*(dw*)(raddr(es,bx+0x32C)), ax));	// 88880 mov     es:[bx+32Ch], ax ;~ 28F0:0411
cs=0x28f0;eip=0x000416; 	X(MOV(*(dw*)(raddr(es,bx+0x32E)), dx));	// 88881 mov     es:[bx+32Eh], dx ;~ 28F0:0416
cs=0x28f0;eip=0x00041b; 	R(JMP(loc_3793f));	// 88882 jmp     short loc_3793F ;~ 28F0:041B
loc_378fd:
	// 10062 
cs=0x28f0;eip=0x00041d; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 88886 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:041D
cs=0x28f0;eip=0x000423; 	R(JNZ(loc_3793f));	// 88887 jnz     short loc_3793F ;~ 28F0:0423
cs=0x28f0;eip=0x000425; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 88888 mov     ax, es:[bx+120h] ;~ 28F0:0425
cs=0x28f0;eip=0x00042a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 88889 mov     dx, es:[bx+122h] ;~ 28F0:042A
cs=0x28f0;eip=0x00042f; 	T(LES(bx, *(dw*)(raddr(es,bx+0x326))));	// 88890 les     bx, es:[bx+326h] ;~ 28F0:042F
cs=0x28f0;eip=0x000434; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 88891 mov     es:[bx+120h], ax ;~ 28F0:0434
cs=0x28f0;eip=0x000439; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 88892 mov     es:[bx+122h], dx ;~ 28F0:0439
cs=0x28f0;eip=0x00043e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 88893 les     bx, [bp+arg_0] ;~ 28F0:043E
cs=0x28f0;eip=0x000441; 	X(PUSH(*(dw*)(raddr(es,bx+0x328))));	// 88894 push    word ptr es:[bx+328h] ;~ 28F0:0441
cs=0x28f0;eip=0x000446; 	X(PUSH(*(dw*)(raddr(es,bx+0x326))));	// 88895 push    word ptr es:[bx+326h] ;~ 28F0:0446
cs=0x28f0;eip=0x00044b; 	R(CALL(sub_3a769,0));	// 88896 call    sub_3A769 ;~ 28F0:044B
cs=0x28f0;eip=0x00044e; 	T(OR(ax, ax));	// 88897 or      ax, ax ;~ 28F0:044E
cs=0x28f0;eip=0x000450; 	R(JZ(loc_378e3));	// 88898 jz      short loc_378E3 ;~ 28F0:0450
cs=0x28f0;eip=0x000452; 	T(MOV(ax, 0x288));	// 88899 mov     ax, 288h ;~ 28F0:0452
cs=0x28f0;eip=0x000455; 	T(MOV(dx, seg_offset(seg041)));	// 88900 mov     dx, seg seg041 ;~ 28F0:0455
cs=0x28f0;eip=0x000458; 	X(PUSH(dx));	// 88901 push    dx ;~ 28F0:0458
cs=0x28f0;eip=0x000459; 	X(PUSH(ax));	// 88902 push    ax ;~ 28F0:0459
cs=0x28f0;eip=0x00045a; 	R(CALLF(sub_1c5f1,0));	// 88903 call    sub_1C5F1 ;~ 28F0:045A
loc_3793f:
	// 10063 
cs=0x28f0;eip=0x00045f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 88907 les     bx, [bp+arg_0] ;~ 28F0:045F
cs=0x28f0;eip=0x000462; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 88908 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0462
cs=0x28f0;eip=0x000468; 	R(JZ(loc_3794d));	// 88909 jz      short loc_3794D ;~ 28F0:0468
cs=0x28f0;eip=0x00046a; 	R(JMP(loc_37a17));	// 88910 jmp     loc_37A17 ;~ 28F0:046A
loc_3794d:
	// 10064 
cs=0x28f0;eip=0x00046d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x39));	// 88914 cmp     [bp+arg_4], 39h ; '9' ;~ 28F0:046D
cs=0x28f0;eip=0x000471; 	R(JNZ(loc_3798c));	// 88915 jnz     short loc_3798C ;~ 28F0:0471
cs=0x28f0;eip=0x000473; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x48))));	// 88916 mov     ax, es:[bx+48h] ;~ 28F0:0473
cs=0x28f0;eip=0x000477; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x4A))));	// 88917 mov     dx, es:[bx+4Ah] ;~ 28F0:0477
cs=0x28f0;eip=0x00047b; 	X(ADD(*(dw*)(raddr(es,bx+0x44)), ax));	// 88918 add     es:[bx+44h], ax ;~ 28F0:047B
cs=0x28f0;eip=0x00047f; 	X(ADC(*(dw*)(raddr(es,bx+0x46)), dx));	// 88919 adc     es:[bx+46h], dx ;~ 28F0:047F
cs=0x28f0;eip=0x000483; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x44))));	// 88920 mov     ax, es:[bx+44h] ;~ 28F0:0483
cs=0x28f0;eip=0x000487; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x46))));	// 88921 mov     dx, es:[bx+46h] ;~ 28F0:0487
cs=0x28f0;eip=0x00048b; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x4A))));	// 88922 cmp     dx, es:[bx+4Ah] ;~ 28F0:048B
cs=0x28f0;eip=0x00048f; 	R(JL(loc_37981));	// 88923 jl      short loc_37981 ;~ 28F0:048F
cs=0x28f0;eip=0x000491; 	R(JG(loc_37979));	// 88924 jg      short loc_37979 ;~ 28F0:0491
cs=0x28f0;eip=0x000493; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x48))));	// 88925 cmp     ax, es:[bx+48h] ;~ 28F0:0493
cs=0x28f0;eip=0x000497; 	R(JBE(loc_37981));	// 88926 jbe     short loc_37981 ;~ 28F0:0497
loc_37979:
	// 10065 
cs=0x28f0;eip=0x000499; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x4A))));	// 88929 mov     dx, es:[bx+4Ah] ;~ 28F0:0499
cs=0x28f0;eip=0x00049d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x48))));	// 88930 mov     ax, es:[bx+48h] ;~ 28F0:049D
loc_37981:
	// 10066 
cs=0x28f0;eip=0x0004a1; 	X(MOV(*(dw*)(raddr(es,bx+0x44)), ax));	// 88934 mov     es:[bx+44h], ax ;~ 28F0:04A1
cs=0x28f0;eip=0x0004a5; 	X(MOV(*(dw*)(raddr(es,bx+0x46)), dx));	// 88935 mov     es:[bx+46h], dx ;~ 28F0:04A5
cs=0x28f0;eip=0x0004a9; 	R(JMP(loc_37a17));	// 88936 jmp     loc_37A17 ;~ 28F0:04A9
loc_3798c:
	// 10067 
cs=0x28f0;eip=0x0004ac; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x30));	// 88940 cmp     [bp+arg_4], 30h ; '0' ;~ 28F0:04AC
cs=0x28f0;eip=0x0004b0; 	R(JNZ(loc_379c2));	// 88941 jnz     short loc_379C2 ;~ 28F0:04B0
cs=0x28f0;eip=0x0004b2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x4C))));	// 88942 mov     ax, es:[bx+4Ch] ;~ 28F0:04B2
cs=0x28f0;eip=0x0004b6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x4E))));	// 88943 mov     dx, es:[bx+4Eh] ;~ 28F0:04B6
cs=0x28f0;eip=0x0004ba; 	X(ADD(*(dw*)(raddr(es,bx+0x44)), ax));	// 88944 add     es:[bx+44h], ax ;~ 28F0:04BA
cs=0x28f0;eip=0x0004be; 	X(ADC(*(dw*)(raddr(es,bx+0x46)), dx));	// 88945 adc     es:[bx+46h], dx ;~ 28F0:04BE
cs=0x28f0;eip=0x0004c2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x44))));	// 88946 mov     ax, es:[bx+44h] ;~ 28F0:04C2
cs=0x28f0;eip=0x0004c6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x46))));	// 88947 mov     dx, es:[bx+46h] ;~ 28F0:04C6
cs=0x28f0;eip=0x0004ca; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x4E))));	// 88948 cmp     dx, es:[bx+4Eh] ;~ 28F0:04CA
cs=0x28f0;eip=0x0004ce; 	R(JG(loc_37981));	// 88949 jg      short loc_37981 ;~ 28F0:04CE
cs=0x28f0;eip=0x0004d0; 	R(JL(loc_379b8));	// 88950 jl      short loc_379B8 ;~ 28F0:04D0
cs=0x28f0;eip=0x0004d2; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x4C))));	// 88951 cmp     ax, es:[bx+4Ch] ;~ 28F0:04D2
cs=0x28f0;eip=0x0004d6; 	R(JNC(loc_37981));	// 88952 jnb     short loc_37981 ;~ 28F0:04D6
loc_379b8:
	// 10068 
cs=0x28f0;eip=0x0004d8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x4E))));	// 88955 mov     dx, es:[bx+4Eh] ;~ 28F0:04D8
cs=0x28f0;eip=0x0004dc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x4C))));	// 88956 mov     ax, es:[bx+4Ch] ;~ 28F0:04DC
cs=0x28f0;eip=0x0004e0; 	R(JMP(loc_37981));	// 88957 jmp     short loc_37981 ;~ 28F0:04E0
loc_379c2:
	// 10069 
cs=0x28f0;eip=0x0004e2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0x60));	// 88961 cmp     [bp+arg_4], 60h ; '`' ;~ 28F0:04E2
cs=0x28f0;eip=0x0004e6; 	R(JNZ(loc_37a17));	// 88962 jnz     short loc_37A17 ;~ 28F0:04E6
cs=0x28f0;eip=0x0004e8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 88963 les     bx, [bp+arg_0] ;~ 28F0:04E8
cs=0x28f0;eip=0x0004eb; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 88964 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:04EB
cs=0x28f0;eip=0x0004f1; 	R(JNZ(loc_379f0));	// 88965 jnz     short loc_379F0 ;~ 28F0:04F1
cs=0x28f0;eip=0x0004f3; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 5));	// 88966 mov     word ptr es:[bx+332h], 5 ;~ 28F0:04F3
cs=0x28f0;eip=0x0004fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x160))));	// 88967 mov     ax, es:[bx+160h] ;~ 28F0:04FA
cs=0x28f0;eip=0x0004ff; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x162))));	// 88968 mov     dx, es:[bx+162h] ;~ 28F0:04FF
cs=0x28f0;eip=0x000504; 	X(MOV(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 88969 mov     es:[bx+1C0h], ax ;~ 28F0:0504
cs=0x28f0;eip=0x000509; 	X(MOV(*(dw*)(raddr(es,bx+0x1C2)), dx));	// 88970 mov     es:[bx+1C2h], dx ;~ 28F0:0509
cs=0x28f0;eip=0x00050e; 	R(JMP(loc_37a17));	// 88971 jmp     short loc_37A17 ;~ 28F0:050E
loc_379f0:
	// 10070 
cs=0x28f0;eip=0x000510; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 8));	// 88975 mov     word ptr es:[bx+332h], 8 ;~ 28F0:0510
cs=0x28f0;eip=0x000517; 	T(SUB(ax, ax));	// 88976 sub     ax, ax ;~ 28F0:0517
cs=0x28f0;eip=0x000519; 	X(MOV(*(dw*)(raddr(es,bx+0x21A)), ax));	// 88977 mov     es:[bx+21Ah], ax ;~ 28F0:0519
cs=0x28f0;eip=0x00051e; 	X(MOV(*(dw*)(raddr(es,bx+0x218)), ax));	// 88978 mov     es:[bx+218h], ax ;~ 28F0:051E
cs=0x28f0;eip=0x000523; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C0))));	// 88979 mov     ax, es:[bx+1C0h] ;~ 28F0:0523
cs=0x28f0;eip=0x000528; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C2))));	// 88980 mov     dx, es:[bx+1C2h] ;~ 28F0:0528
cs=0x28f0;eip=0x00052d; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 88981 mov     es:[bx+160h], ax ;~ 28F0:052D
cs=0x28f0;eip=0x000532; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 88982 mov     es:[bx+162h], dx ;~ 28F0:0532
loc_37a17:
	// 10071 
cs=0x28f0;eip=0x000537; 	X(POP(si));	// 88986 pop     si ;~ 28F0:0537
cs=0x28f0;eip=0x000538; 	X(POP(bp));	// 88987 pop     bp ;~ 28F0:0538
cs=0x28f0;eip=0x000539; 	R(RETF(0));	// 88988 retf ;~ 28F0:0539
sub_37a1a:
	// 88996 
#undef arg_0
#define arg_0 4
	// 88999 arg_0           = dword ptr  4 ;~ 28F0:053A
cs=0x28f0;eip=0x00053a; 	X(PUSH(bp));	// 89001 push    bp ;~ 28F0:053A
cs=0x28f0;eip=0x00053b; 	T(MOV(bp, sp));	// 89002 mov     bp, sp ;~ 28F0:053B
cs=0x28f0;eip=0x00053d; 	T(CMP(unk_55206, 0));	// 89003 cmp     byte ptr unk_55206, 0 ;~ 28F0:053D
cs=0x28f0;eip=0x000542; 	R(JZ(loc_37a29));	// 89004 jz      short loc_37A29 ;~ 28F0:0542
loc_37a24:
	// 10072 
cs=0x28f0;eip=0x000544; 	T(SUB(ax, ax));	// 89008 sub     ax, ax ;~ 28F0:0544
cs=0x28f0;eip=0x000546; 	R(JMP(loc_37bb9));	// 89009 jmp     loc_37BB9 ;~ 28F0:0546
loc_37a29:
	// 10073 
cs=0x28f0;eip=0x000549; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 89013 cmp     word ptr unk_47AB2, 3 ;~ 28F0:0549
cs=0x28f0;eip=0x00054e; 	R(JZ(loc_37a37));	// 89014 jz      short loc_37A37 ;~ 28F0:054E
cs=0x28f0;eip=0x000550; 	T(CMP(*(dw*)((&unk_47ab2)), 2));	// 89015 cmp     word ptr unk_47AB2, 2 ;~ 28F0:0550
cs=0x28f0;eip=0x000555; 	R(JNZ(loc_37a48));	// 89016 jnz     short loc_37A48 ;~ 28F0:0555
loc_37a37:
	// 10074 
cs=0x28f0;eip=0x000557; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89019 les     bx, [bp+arg_0] ;~ 28F0:0557
cs=0x28f0;eip=0x00055a; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 89020 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:055A
cs=0x28f0;eip=0x000560; 	R(JNZ(loc_37a48));	// 89021 jnz     short loc_37A48 ;~ 28F0:0560
loc_37a42:
	// 10075 
cs=0x28f0;eip=0x000562; 	T(MOV(ax, 1));	// 89025 mov     ax, 1 ;~ 28F0:0562
cs=0x28f0;eip=0x000565; 	R(JMP(loc_37bb9));	// 89026 jmp     loc_37BB9 ;~ 28F0:0565
loc_37a48:
	// 10076 
cs=0x28f0;eip=0x000568; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89031 les     bx, [bp+arg_0] ;~ 28F0:0568
cs=0x28f0;eip=0x00056b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 89032 mov     ax, es:[bx+0C0h] ;~ 28F0:056B
cs=0x28f0;eip=0x000570; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 89033 mov     dx, es:[bx+0C2h] ;~ 28F0:0570
cs=0x28f0;eip=0x000575; 	T(OR(dx, dx));	// 89034 or      dx, dx ;~ 28F0:0575
cs=0x28f0;eip=0x000577; 	R(JGE(loc_37a60));	// 89035 jge     short loc_37A60 ;~ 28F0:0577
cs=0x28f0;eip=0x000579; 	T(NEG(ax));	// 89036 neg     ax ;~ 28F0:0579
cs=0x28f0;eip=0x00057b; 	T(ADC(dx, 0));	// 89037 adc     dx, 0 ;~ 28F0:057B
cs=0x28f0;eip=0x00057e; 	T(NEG(dx));	// 89038 neg     dx ;~ 28F0:057E
loc_37a60:
	// 10077 
cs=0x28f0;eip=0x000580; 	T(MOV(cx, ax));	// 89041 mov     cx, ax ;~ 28F0:0580
cs=0x28f0;eip=0x000582; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x208))));	// 89042 mov     ax, es:[bx+208h] ;~ 28F0:0582
cs=0x28f0;eip=0x000587; 	T(MOV(bx, dx));	// 89043 mov     bx, dx ;~ 28F0:0587
cs=0x28f0;eip=0x000589; 	T(CWD);	// 89044 cwd ;~ 28F0:0589
cs=0x28f0;eip=0x00058a; 	T(MOV(dh, dl));	// 89045 mov     dh, dl ;~ 28F0:058A
cs=0x28f0;eip=0x00058c; 	T(MOV(dl, ah));	// 89046 mov     dl, ah ;~ 28F0:058C
cs=0x28f0;eip=0x00058e; 	T(MOV(ah, al));	// 89047 mov     ah, al ;~ 28F0:058E
cs=0x28f0;eip=0x000590; 	T(SUB(al, al));	// 89048 sub     al, al ;~ 28F0:0590
cs=0x28f0;eip=0x000592; 	T(CMP(dx, bx));	// 89049 cmp     dx, bx ;~ 28F0:0592
cs=0x28f0;eip=0x000594; 	R(JL(loc_37a42));	// 89050 jl      short loc_37A42 ;~ 28F0:0594
cs=0x28f0;eip=0x000596; 	R(JG(loc_37a7c));	// 89051 jg      short loc_37A7C ;~ 28F0:0596
cs=0x28f0;eip=0x000598; 	T(CMP(ax, cx));	// 89052 cmp     ax, cx ;~ 28F0:0598
cs=0x28f0;eip=0x00059a; 	R(JBE(loc_37a42));	// 89053 jbe     short loc_37A42 ;~ 28F0:059A
loc_37a7c:
	// 10078 
cs=0x28f0;eip=0x00059c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89056 mov     bx, word ptr [bp+arg_0] ;~ 28F0:059C
cs=0x28f0;eip=0x00059f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 89057 mov     ax, es:[bx+0E0h] ;~ 28F0:059F
cs=0x28f0;eip=0x0005a4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 89058 mov     dx, es:[bx+0E2h] ;~ 28F0:05A4
cs=0x28f0;eip=0x0005a9; 	T(OR(dx, dx));	// 89059 or      dx, dx ;~ 28F0:05A9
cs=0x28f0;eip=0x0005ab; 	R(JGE(loc_37a94));	// 89060 jge     short loc_37A94 ;~ 28F0:05AB
cs=0x28f0;eip=0x0005ad; 	T(NEG(ax));	// 89061 neg     ax ;~ 28F0:05AD
cs=0x28f0;eip=0x0005af; 	T(ADC(dx, 0));	// 89062 adc     dx, 0 ;~ 28F0:05AF
cs=0x28f0;eip=0x0005b2; 	T(NEG(dx));	// 89063 neg     dx ;~ 28F0:05B2
loc_37a94:
	// 10079 
cs=0x28f0;eip=0x0005b4; 	T(MOV(cx, ax));	// 89066 mov     cx, ax ;~ 28F0:05B4
cs=0x28f0;eip=0x0005b6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x206))));	// 89067 mov     ax, es:[bx+206h] ;~ 28F0:05B6
cs=0x28f0;eip=0x0005bb; 	T(MOV(bx, dx));	// 89068 mov     bx, dx ;~ 28F0:05BB
cs=0x28f0;eip=0x0005bd; 	T(CWD);	// 89069 cwd ;~ 28F0:05BD
cs=0x28f0;eip=0x0005be; 	T(MOV(dh, dl));	// 89070 mov     dh, dl ;~ 28F0:05BE
cs=0x28f0;eip=0x0005c0; 	T(MOV(dl, ah));	// 89071 mov     dl, ah ;~ 28F0:05C0
cs=0x28f0;eip=0x0005c2; 	T(MOV(ah, al));	// 89072 mov     ah, al ;~ 28F0:05C2
cs=0x28f0;eip=0x0005c4; 	T(SUB(al, al));	// 89073 sub     al, al ;~ 28F0:05C4
cs=0x28f0;eip=0x0005c6; 	T(CMP(dx, bx));	// 89074 cmp     dx, bx ;~ 28F0:05C6
cs=0x28f0;eip=0x0005c8; 	R(JL(loc_37a42));	// 89075 jl      short loc_37A42 ;~ 28F0:05C8
cs=0x28f0;eip=0x0005ca; 	R(JG(loc_37ab0));	// 89076 jg      short loc_37AB0 ;~ 28F0:05CA
cs=0x28f0;eip=0x0005cc; 	T(CMP(ax, cx));	// 89077 cmp     ax, cx ;~ 28F0:05CC
cs=0x28f0;eip=0x0005ce; 	R(JBE(loc_37a42));	// 89078 jbe     short loc_37A42 ;~ 28F0:05CE
loc_37ab0:
	// 10080 
cs=0x28f0;eip=0x0005d0; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89081 mov     bx, word ptr [bp+arg_0] ;~ 28F0:05D0
cs=0x28f0;eip=0x0005d3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 89082 mov     ax, es:[bx+120h] ;~ 28F0:05D3
cs=0x28f0;eip=0x0005d8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 89083 mov     dx, es:[bx+122h] ;~ 28F0:05D8
cs=0x28f0;eip=0x0005dd; 	T(OR(dx, dx));	// 89084 or      dx, dx ;~ 28F0:05DD
cs=0x28f0;eip=0x0005df; 	R(JGE(loc_37ac8));	// 89085 jge     short loc_37AC8 ;~ 28F0:05DF
cs=0x28f0;eip=0x0005e1; 	T(NEG(ax));	// 89086 neg     ax ;~ 28F0:05E1
cs=0x28f0;eip=0x0005e3; 	T(ADC(dx, 0));	// 89087 adc     dx, 0 ;~ 28F0:05E3
cs=0x28f0;eip=0x0005e6; 	T(NEG(dx));	// 89088 neg     dx ;~ 28F0:05E6
loc_37ac8:
	// 10081 
cs=0x28f0;eip=0x0005e8; 	T(MOV(cx, ax));	// 89091 mov     cx, ax ;~ 28F0:05E8
cs=0x28f0;eip=0x0005ea; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x200))));	// 89092 mov     ax, es:[bx+200h] ;~ 28F0:05EA
cs=0x28f0;eip=0x0005ef; 	T(MOV(bx, dx));	// 89093 mov     bx, dx ;~ 28F0:05EF
cs=0x28f0;eip=0x0005f1; 	T(CWD);	// 89094 cwd ;~ 28F0:05F1
cs=0x28f0;eip=0x0005f2; 	T(MOV(dh, dl));	// 89095 mov     dh, dl ;~ 28F0:05F2
cs=0x28f0;eip=0x0005f4; 	T(MOV(dl, ah));	// 89096 mov     dl, ah ;~ 28F0:05F4
cs=0x28f0;eip=0x0005f6; 	T(MOV(ah, al));	// 89097 mov     ah, al ;~ 28F0:05F6
cs=0x28f0;eip=0x0005f8; 	T(SUB(al, al));	// 89098 sub     al, al ;~ 28F0:05F8
cs=0x28f0;eip=0x0005fa; 	T(CMP(dx, bx));	// 89099 cmp     dx, bx ;~ 28F0:05FA
cs=0x28f0;eip=0x0005fc; 	R(JGE(loc_37ae1));	// 89100 jge     short loc_37AE1 ;~ 28F0:05FC
cs=0x28f0;eip=0x0005fe; 	R(JMP(loc_37a42));	// 89101 jmp     loc_37A42 ;~ 28F0:05FE
loc_37ae1:
	// 10082 
cs=0x28f0;eip=0x000601; 	R(JG(loc_37aea));	// 89105 jg      short loc_37AEA ;~ 28F0:0601
cs=0x28f0;eip=0x000603; 	T(CMP(ax, cx));	// 89106 cmp     ax, cx ;~ 28F0:0603
cs=0x28f0;eip=0x000605; 	R(JA(loc_37aea));	// 89107 ja      short loc_37AEA ;~ 28F0:0605
cs=0x28f0;eip=0x000607; 	R(JMP(loc_37a42));	// 89108 jmp     loc_37A42 ;~ 28F0:0607
loc_37aea:
	// 10083 
cs=0x28f0;eip=0x00060a; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89113 mov     bx, word ptr [bp+arg_0] ;~ 28F0:060A
cs=0x28f0;eip=0x00060d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 89114 mov     ax, es:[bx+140h] ;~ 28F0:060D
cs=0x28f0;eip=0x000612; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 89115 mov     dx, es:[bx+142h] ;~ 28F0:0612
cs=0x28f0;eip=0x000617; 	T(OR(dx, dx));	// 89116 or      dx, dx ;~ 28F0:0617
cs=0x28f0;eip=0x000619; 	R(JGE(loc_37b02));	// 89117 jge     short loc_37B02 ;~ 28F0:0619
cs=0x28f0;eip=0x00061b; 	T(NEG(ax));	// 89118 neg     ax ;~ 28F0:061B
cs=0x28f0;eip=0x00061d; 	T(ADC(dx, 0));	// 89119 adc     dx, 0 ;~ 28F0:061D
cs=0x28f0;eip=0x000620; 	T(NEG(dx));	// 89120 neg     dx ;~ 28F0:0620
loc_37b02:
	// 10084 
cs=0x28f0;eip=0x000622; 	T(MOV(cx, ax));	// 89123 mov     cx, ax ;~ 28F0:0622
cs=0x28f0;eip=0x000624; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x202))));	// 89124 mov     ax, es:[bx+202h] ;~ 28F0:0624
cs=0x28f0;eip=0x000629; 	T(MOV(bx, dx));	// 89125 mov     bx, dx ;~ 28F0:0629
cs=0x28f0;eip=0x00062b; 	T(CWD);	// 89126 cwd ;~ 28F0:062B
cs=0x28f0;eip=0x00062c; 	T(MOV(dh, dl));	// 89127 mov     dh, dl ;~ 28F0:062C
cs=0x28f0;eip=0x00062e; 	T(MOV(dl, ah));	// 89128 mov     dl, ah ;~ 28F0:062E
cs=0x28f0;eip=0x000630; 	T(MOV(ah, al));	// 89129 mov     ah, al ;~ 28F0:0630
cs=0x28f0;eip=0x000632; 	T(SUB(al, al));	// 89130 sub     al, al ;~ 28F0:0632
cs=0x28f0;eip=0x000634; 	T(CMP(dx, bx));	// 89131 cmp     dx, bx ;~ 28F0:0634
cs=0x28f0;eip=0x000636; 	R(JGE(loc_37b1b));	// 89132 jge     short loc_37B1B ;~ 28F0:0636
cs=0x28f0;eip=0x000638; 	R(JMP(loc_37a42));	// 89133 jmp     loc_37A42 ;~ 28F0:0638
loc_37b1b:
	// 10085 
cs=0x28f0;eip=0x00063b; 	R(JG(loc_37b24));	// 89137 jg      short loc_37B24 ;~ 28F0:063B
cs=0x28f0;eip=0x00063d; 	T(CMP(ax, cx));	// 89138 cmp     ax, cx ;~ 28F0:063D
cs=0x28f0;eip=0x00063f; 	R(JA(loc_37b24));	// 89139 ja      short loc_37B24 ;~ 28F0:063F
cs=0x28f0;eip=0x000641; 	R(JMP(loc_37a42));	// 89140 jmp     loc_37A42 ;~ 28F0:0641
loc_37b24:
	// 10086 
cs=0x28f0;eip=0x000644; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89145 mov     bx, word ptr [bp+arg_0] ;~ 28F0:0644
cs=0x28f0;eip=0x000647; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 89146 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0647
cs=0x28f0;eip=0x00064d; 	R(JNZ(loc_37b66));	// 89147 jnz     short loc_37B66 ;~ 28F0:064D
cs=0x28f0;eip=0x00064f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C0))));	// 89148 mov     ax, es:[bx+1C0h] ;~ 28F0:064F
cs=0x28f0;eip=0x000654; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C2))));	// 89149 mov     dx, es:[bx+1C2h] ;~ 28F0:0654
cs=0x28f0;eip=0x000659; 	T(OR(dx, dx));	// 89150 or      dx, dx ;~ 28F0:0659
cs=0x28f0;eip=0x00065b; 	R(JGE(loc_37b44));	// 89151 jge     short loc_37B44 ;~ 28F0:065B
cs=0x28f0;eip=0x00065d; 	T(NEG(ax));	// 89152 neg     ax ;~ 28F0:065D
cs=0x28f0;eip=0x00065f; 	T(ADC(dx, 0));	// 89153 adc     dx, 0 ;~ 28F0:065F
cs=0x28f0;eip=0x000662; 	T(NEG(dx));	// 89154 neg     dx ;~ 28F0:0662
loc_37b44:
	// 10087 
cs=0x28f0;eip=0x000664; 	T(MOV(cx, ax));	// 89157 mov     cx, ax ;~ 28F0:0664
cs=0x28f0;eip=0x000666; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x204))));	// 89158 mov     ax, es:[bx+204h] ;~ 28F0:0666
cs=0x28f0;eip=0x00066b; 	T(MOV(bx, dx));	// 89159 mov     bx, dx ;~ 28F0:066B
cs=0x28f0;eip=0x00066d; 	T(CWD);	// 89160 cwd ;~ 28F0:066D
cs=0x28f0;eip=0x00066e; 	T(MOV(dh, dl));	// 89161 mov     dh, dl ;~ 28F0:066E
cs=0x28f0;eip=0x000670; 	T(MOV(dl, ah));	// 89162 mov     dl, ah ;~ 28F0:0670
cs=0x28f0;eip=0x000672; 	T(MOV(ah, al));	// 89163 mov     ah, al ;~ 28F0:0672
cs=0x28f0;eip=0x000674; 	T(SUB(al, al));	// 89164 sub     al, al ;~ 28F0:0674
cs=0x28f0;eip=0x000676; 	T(CMP(dx, bx));	// 89165 cmp     dx, bx ;~ 28F0:0676
cs=0x28f0;eip=0x000678; 	R(JLE(loc_37b5d));	// 89166 jle     short loc_37B5D ;~ 28F0:0678
cs=0x28f0;eip=0x00067a; 	R(JMP(loc_37a24));	// 89167 jmp     loc_37A24 ;~ 28F0:067A
loc_37b5d:
	// 10088 
cs=0x28f0;eip=0x00067d; 	R(JL(loc_37b66));	// 89171 jl      short loc_37B66 ;~ 28F0:067D
cs=0x28f0;eip=0x00067f; 	T(CMP(ax, cx));	// 89172 cmp     ax, cx ;~ 28F0:067F
cs=0x28f0;eip=0x000681; 	R(JBE(loc_37b66));	// 89173 jbe     short loc_37B66 ;~ 28F0:0681
cs=0x28f0;eip=0x000683; 	R(JMP(loc_37a24));	// 89174 jmp     loc_37A24 ;~ 28F0:0683
loc_37b66:
	// 10089 
cs=0x28f0;eip=0x000686; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89179 mov     bx, word ptr [bp+arg_0] ;~ 28F0:0686
cs=0x28f0;eip=0x000689; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 89180 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0689
cs=0x28f0;eip=0x00068f; 	R(JZ(loc_37b7c));	// 89181 jz      short loc_37B7C ;~ 28F0:068F
cs=0x28f0;eip=0x000691; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 89182 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:0691
cs=0x28f0;eip=0x000697; 	R(JZ(loc_37b7c));	// 89183 jz      short loc_37B7C ;~ 28F0:0697
cs=0x28f0;eip=0x000699; 	R(JMP(loc_37a42));	// 89184 jmp     loc_37A42 ;~ 28F0:0699
loc_37b7c:
	// 10090 
cs=0x28f0;eip=0x00069c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x160))));	// 89189 mov     ax, es:[bx+160h] ;~ 28F0:069C
cs=0x28f0;eip=0x0006a1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x162))));	// 89190 mov     dx, es:[bx+162h] ;~ 28F0:06A1
cs=0x28f0;eip=0x0006a6; 	T(OR(dx, dx));	// 89191 or      dx, dx ;~ 28F0:06A6
cs=0x28f0;eip=0x0006a8; 	R(JGE(loc_37b91));	// 89192 jge     short loc_37B91 ;~ 28F0:06A8
cs=0x28f0;eip=0x0006aa; 	T(NEG(ax));	// 89193 neg     ax ;~ 28F0:06AA
cs=0x28f0;eip=0x0006ac; 	T(ADC(dx, 0));	// 89194 adc     dx, 0 ;~ 28F0:06AC
cs=0x28f0;eip=0x0006af; 	T(NEG(dx));	// 89195 neg     dx ;~ 28F0:06AF
loc_37b91:
	// 10091 
cs=0x28f0;eip=0x0006b1; 	T(MOV(cx, ax));	// 89198 mov     cx, ax ;~ 28F0:06B1
cs=0x28f0;eip=0x0006b3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x204))));	// 89199 mov     ax, es:[bx+204h] ;~ 28F0:06B3
cs=0x28f0;eip=0x0006b8; 	T(MOV(bx, dx));	// 89200 mov     bx, dx ;~ 28F0:06B8
cs=0x28f0;eip=0x0006ba; 	T(CWD);	// 89201 cwd ;~ 28F0:06BA
cs=0x28f0;eip=0x0006bb; 	T(MOV(dh, dl));	// 89202 mov     dh, dl ;~ 28F0:06BB
cs=0x28f0;eip=0x0006bd; 	T(MOV(dl, ah));	// 89203 mov     dl, ah ;~ 28F0:06BD
cs=0x28f0;eip=0x0006bf; 	T(MOV(ah, al));	// 89204 mov     ah, al ;~ 28F0:06BF
cs=0x28f0;eip=0x0006c1; 	T(SUB(al, al));	// 89205 sub     al, al ;~ 28F0:06C1
cs=0x28f0;eip=0x0006c3; 	T(CMP(dx, bx));	// 89206 cmp     dx, bx ;~ 28F0:06C3
cs=0x28f0;eip=0x0006c5; 	R(JGE(loc_37baa));	// 89207 jge     short loc_37BAA ;~ 28F0:06C5
cs=0x28f0;eip=0x0006c7; 	R(JMP(loc_37a42));	// 89208 jmp     loc_37A42 ;~ 28F0:06C7
loc_37baa:
	// 10092 
cs=0x28f0;eip=0x0006ca; 	R(JLE(loc_37baf));	// 89212 jle     short loc_37BAF ;~ 28F0:06CA
cs=0x28f0;eip=0x0006cc; 	R(JMP(loc_37a24));	// 89213 jmp     loc_37A24 ;~ 28F0:06CC
loc_37baf:
	// 10093 
cs=0x28f0;eip=0x0006cf; 	T(CMP(ax, cx));	// 89217 cmp     ax, cx ;~ 28F0:06CF
cs=0x28f0;eip=0x0006d1; 	R(JA(loc_37bb6));	// 89218 ja      short loc_37BB6 ;~ 28F0:06D1
cs=0x28f0;eip=0x0006d3; 	R(JMP(loc_37a42));	// 89219 jmp     loc_37A42 ;~ 28F0:06D3
loc_37bb6:
	// 10094 
cs=0x28f0;eip=0x0006d6; 	R(JMP(loc_37a24));	// 89223 jmp     loc_37A24 ;~ 28F0:06D6
loc_37bb9:
	// 10095 
cs=0x28f0;eip=0x0006d9; 	X(POP(bp));	// 89228 pop     bp ;~ 28F0:06D9
cs=0x28f0;eip=0x0006da; 	R(RETN(4));	// 89229 retn    4 ;~ 28F0:06DA
sub_37bbd:
	// 89237 
#undef var_8
#define var_8 -8
	// 89239 var_8           = word ptr -8 ;~ 28F0:06DD
#undef var_6
#define var_6 -6
	// 89240 var_6           = word ptr -6 ;~ 28F0:06DD
#undef var_4
#define var_4 -4
	// 89241 var_4           = word ptr -4 ;~ 28F0:06DD
#undef var_2
#define var_2 -2
	// 89242 var_2           = word ptr -2 ;~ 28F0:06DD
cs=0x28f0;eip=0x0006dd; 	X(PUSH(bp));	// 89244 push    bp ;~ 28F0:06DD
cs=0x28f0;eip=0x0006de; 	T(MOV(bp, sp));	// 89245 mov     bp, sp ;~ 28F0:06DE
cs=0x28f0;eip=0x0006e0; 	T(SUB(sp, 8));	// 89246 sub     sp, 8 ;~ 28F0:06E0
cs=0x28f0;eip=0x0006e3; 	R(CALLF(sub_182cf,0));	// 89247 call    sub_182CF ;~ 28F0:06E3
cs=0x28f0;eip=0x0006e8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 89248 mov     [bp+var_4], ax ;~ 28F0:06E8
cs=0x28f0;eip=0x0006eb; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 89249 mov     [bp+var_2], dx ;~ 28F0:06EB
cs=0x28f0;eip=0x0006ee; 	R(CALLF(sub_181a3,0));	// 89250 call    sub_181A3 ;~ 28F0:06EE
cs=0x28f0;eip=0x0006f3; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 89251 mov     [bp+var_8], ax ;~ 28F0:06F3
cs=0x28f0;eip=0x0006f6; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 89252 mov     [bp+var_6], dx ;~ 28F0:06F6
cs=0x28f0;eip=0x0006f9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 89253 mov     ax, [bp+var_4] ;~ 28F0:06F9
cs=0x28f0;eip=0x0006fc; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 89254 mov     dx, [bp+var_2] ;~ 28F0:06FC
cs=0x28f0;eip=0x0006ff; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_6))));	// 89255 cmp     dx, [bp+var_6] ;~ 28F0:06FF
cs=0x28f0;eip=0x000702; 	R(JL(loc_37bf1));	// 89256 jl      short loc_37BF1 ;~ 28F0:0702
cs=0x28f0;eip=0x000704; 	R(JG(loc_37beb));	// 89257 jg      short loc_37BEB ;~ 28F0:0704
cs=0x28f0;eip=0x000706; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 89258 cmp     ax, [bp+var_8] ;~ 28F0:0706
cs=0x28f0;eip=0x000709; 	R(JBE(loc_37bf1));	// 89259 jbe     short loc_37BF1 ;~ 28F0:0709
loc_37beb:
	// 10096 
cs=0x28f0;eip=0x00070b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 89262 mov     dx, [bp+var_6] ;~ 28F0:070B
cs=0x28f0;eip=0x00070e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 89263 mov     ax, [bp+var_8] ;~ 28F0:070E
loc_37bf1:
	// 10097 
cs=0x28f0;eip=0x000711; 	T(OR(dx, dx));	// 89267 or      dx, dx ;~ 28F0:0711
cs=0x28f0;eip=0x000713; 	R(JG(loc_37c00));	// 89268 jg      short loc_37C00 ;~ 28F0:0713
cs=0x28f0;eip=0x000715; 	R(JL(loc_37bfb));	// 89269 jl      short loc_37BFB ;~ 28F0:0715
cs=0x28f0;eip=0x000717; 	T(OR(ax, ax));	// 89270 or      ax, ax ;~ 28F0:0717
cs=0x28f0;eip=0x000719; 	R(JNZ(loc_37c00));	// 89271 jnz     short loc_37C00 ;~ 28F0:0719
loc_37bfb:
	// 10098 
cs=0x28f0;eip=0x00071b; 	T(MOV(ax, 1));	// 89274 mov     ax, 1 ;~ 28F0:071B
cs=0x28f0;eip=0x00071e; 	R(JMP(loc_37c02));	// 89275 jmp     short loc_37C02 ;~ 28F0:071E
loc_37c00:
	// 10099 
cs=0x28f0;eip=0x000720; 	T(SUB(ax, ax));	// 89280 sub     ax, ax ;~ 28F0:0720
loc_37c02:
	// 10100 
cs=0x28f0;eip=0x000722; 	T(MOV(sp, bp));	// 89283 mov     sp, bp ;~ 28F0:0722
cs=0x28f0;eip=0x000724; 	X(POP(bp));	// 89284 pop     bp ;~ 28F0:0724
cs=0x28f0;eip=0x000725; 	R(RETN(4));	// 89285 retn    4 ;~ 28F0:0725
sub_37c08:
	// 89293 
#undef var_8
#define var_8 -8
	// 89296 var_8           = dword ptr -8 ;~ 28F0:0728
#undef arg_0
#define arg_0 4
	// 89297 arg_0           = dword ptr  4 ;~ 28F0:0728
cs=0x28f0;eip=0x000728; 	X(PUSH(bp));	// 89299 push    bp ;~ 28F0:0728
cs=0x28f0;eip=0x000729; 	T(MOV(bp, sp));	// 89300 mov     bp, sp ;~ 28F0:0729
cs=0x28f0;eip=0x00072b; 	T(SUB(sp, 8));	// 89301 sub     sp, 8 ;~ 28F0:072B
cs=0x28f0;eip=0x00072e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89302 les     bx, [bp+arg_0] ;~ 28F0:072E
cs=0x28f0;eip=0x000731; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 89303 mov     ax, es:[bx+31Ch] ;~ 28F0:0731
cs=0x28f0;eip=0x000736; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 89304 mov     dx, es:[bx+31Eh] ;~ 28F0:0736
cs=0x28f0;eip=0x00073b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 89305 mov     word ptr [bp+var_8], ax ;~ 28F0:073B
cs=0x28f0;eip=0x00073e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 89306 mov     word ptr [bp+var_8+2], dx ;~ 28F0:073E
cs=0x28f0;eip=0x000741; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89307 mov     ax, es:[bx+2FAh] ;~ 28F0:0741
cs=0x28f0;eip=0x000746; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89308 mov     dx, es:[bx+2FCh] ;~ 28F0:0746
cs=0x28f0;eip=0x00074b; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89309 add     ax, es:[bx+302h] ;~ 28F0:074B
cs=0x28f0;eip=0x000750; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89310 adc     dx, es:[bx+304h] ;~ 28F0:0750
cs=0x28f0;eip=0x000755; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89311 add     ax, es:[bx+20Eh] ;~ 28F0:0755
cs=0x28f0;eip=0x00075a; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 89312 adc     dx, es:[bx+210h] ;~ 28F0:075A
cs=0x28f0;eip=0x00075f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89313 les     bx, [bp+var_8] ;~ 28F0:075F
cs=0x28f0;eip=0x000762; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89314 cmp     dx, es:[bx+0Ch] ;~ 28F0:0762
cs=0x28f0;eip=0x000766; 	R(JGE(loc_37c4b));	// 89315 jge     short loc_37C4B ;~ 28F0:0766
cs=0x28f0;eip=0x000768; 	R(JMP(loc_37dec));	// 89316 jmp     loc_37DEC ;~ 28F0:0768
loc_37c4b:
	// 10101 
cs=0x28f0;eip=0x00076b; 	R(JG(loc_37c56));	// 89320 jg      short loc_37C56 ;~ 28F0:076B
cs=0x28f0;eip=0x00076d; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89321 cmp     ax, es:[bx+0Ah] ;~ 28F0:076D
cs=0x28f0;eip=0x000771; 	R(JA(loc_37c56));	// 89322 ja      short loc_37C56 ;~ 28F0:0771
cs=0x28f0;eip=0x000773; 	R(JMP(loc_37dec));	// 89323 jmp     loc_37DEC ;~ 28F0:0773
loc_37c56:
	// 10102 
cs=0x28f0;eip=0x000776; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89328 les     bx, [bp+arg_0] ;~ 28F0:0776
cs=0x28f0;eip=0x000779; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 89329 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:0779
cs=0x28f0;eip=0x00077f; 	R(JGE(loc_37cc2));	// 89330 jge     short loc_37CC2 ;~ 28F0:077F
cs=0x28f0;eip=0x000781; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89331 mov     ax, es:[bx+2FAh] ;~ 28F0:0781
cs=0x28f0;eip=0x000786; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89332 mov     dx, es:[bx+2FCh] ;~ 28F0:0786
cs=0x28f0;eip=0x00078b; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89333 add     ax, es:[bx+302h] ;~ 28F0:078B
cs=0x28f0;eip=0x000790; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89334 adc     dx, es:[bx+304h] ;~ 28F0:0790
cs=0x28f0;eip=0x000795; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89335 les     bx, [bp+var_8] ;~ 28F0:0795
cs=0x28f0;eip=0x000798; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89336 cmp     dx, es:[bx+0Ch] ;~ 28F0:0798
cs=0x28f0;eip=0x00079c; 	R(JG(loc_37c8e));	// 89337 jg      short loc_37C8E ;~ 28F0:079C
cs=0x28f0;eip=0x00079e; 	R(JL(loc_37c86));	// 89338 jl      short loc_37C86 ;~ 28F0:079E
cs=0x28f0;eip=0x0007a0; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89339 cmp     ax, es:[bx+0Ah] ;~ 28F0:07A0
cs=0x28f0;eip=0x0007a4; 	R(JNC(loc_37c8e));	// 89340 jnb     short loc_37C8E ;~ 28F0:07A4
loc_37c86:
	// 10103 
cs=0x28f0;eip=0x0007a6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89343 mov     dx, es:[bx+0Ch] ;~ 28F0:07A6
cs=0x28f0;eip=0x0007aa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89344 mov     ax, es:[bx+0Ah] ;~ 28F0:07AA
loc_37c8e:
	// 10104 
cs=0x28f0;eip=0x0007ae; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 89348 mov     es:[bx+0Ah], ax ;~ 28F0:07AE
cs=0x28f0;eip=0x0007b2; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 89349 mov     es:[bx+0Ch], dx ;~ 28F0:07B2
cs=0x28f0;eip=0x0007b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89350 les     bx, [bp+arg_0] ;~ 28F0:07B6
cs=0x28f0;eip=0x0007b9; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 89351 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:07B9
cs=0x28f0;eip=0x0007bf; 	R(JNZ(loc_37cb5));	// 89352 jnz     short loc_37CB5 ;~ 28F0:07BF
cs=0x28f0;eip=0x0007c1; 	X(PUSH(es));	// 89353 push    es ;~ 28F0:07C1
cs=0x28f0;eip=0x0007c2; 	X(PUSH(bx));	// 89354 push    bx ;~ 28F0:07C2
cs=0x28f0;eip=0x0007c3; 	T(MOV(ax, 2));	// 89355 mov     ax, 2 ;~ 28F0:07C3
cs=0x28f0;eip=0x0007c6; 	X(PUSH(ax));	// 89356 push    ax ;~ 28F0:07C6
cs=0x28f0;eip=0x0007c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89357 les     bx, [bp+var_8] ;~ 28F0:07C7
cs=0x28f0;eip=0x0007ca; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 89358 push    word ptr es:[bx+0Ch] ;~ 28F0:07CA
cs=0x28f0;eip=0x0007ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 89359 push    word ptr es:[bx+0Ah] ;~ 28F0:07CE
cs=0x28f0;eip=0x0007d2; 	R(CALL(sub_3842f,0));	// 89360 call    sub_3842F ;~ 28F0:07D2
loc_37cb5:
	// 10105 
cs=0x28f0;eip=0x0007d5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89363 les     bx, [bp+arg_0] ;~ 28F0:07D5
cs=0x28f0;eip=0x0007d8; 	X(MOV(*(dw*)(raddr(es,bx+0x320)), 0x0FFFF));	// 89364 mov     word ptr es:[bx+320h], 0FFFFh ;~ 28F0:07D8
cs=0x28f0;eip=0x0007df; 	R(JMP(loc_37dec));	// 89365 jmp     loc_37DEC ;~ 28F0:07DF
loc_37cc2:
	// 10106 
cs=0x28f0;eip=0x0007e2; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 89369 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:07E2
cs=0x28f0;eip=0x0007e8; 	R(JNZ(loc_37d2f));	// 89370 jnz     short loc_37D2F ;~ 28F0:07E8
cs=0x28f0;eip=0x0007ea; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89371 mov     ax, es:[bx+2FAh] ;~ 28F0:07EA
cs=0x28f0;eip=0x0007ef; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89372 mov     dx, es:[bx+2FCh] ;~ 28F0:07EF
cs=0x28f0;eip=0x0007f4; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89373 add     ax, es:[bx+302h] ;~ 28F0:07F4
cs=0x28f0;eip=0x0007f9; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89374 adc     dx, es:[bx+304h] ;~ 28F0:07F9
cs=0x28f0;eip=0x0007fe; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89375 add     ax, es:[bx+20Eh] ;~ 28F0:07FE
cs=0x28f0;eip=0x000803; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 89376 adc     dx, es:[bx+210h] ;~ 28F0:0803
cs=0x28f0;eip=0x000808; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89377 les     bx, [bp+var_8] ;~ 28F0:0808
cs=0x28f0;eip=0x00080b; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 89378 mov     es:[bx+0Ah], ax ;~ 28F0:080B
cs=0x28f0;eip=0x00080f; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 89379 mov     es:[bx+0Ch], dx ;~ 28F0:080F
cs=0x28f0;eip=0x000813; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 89380 push    word ptr [bp+arg_0+2] ;~ 28F0:0813
cs=0x28f0;eip=0x000816; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89381 push    word ptr [bp+arg_0] ;~ 28F0:0816
cs=0x28f0;eip=0x000819; 	R(CALL(sub_37a1a,0));	// 89382 call    sub_37A1A ;~ 28F0:0819
cs=0x28f0;eip=0x00081c; 	T(OR(ax, ax));	// 89383 or      ax, ax ;~ 28F0:081C
cs=0x28f0;eip=0x00081e; 	R(JZ(loc_37d14));	// 89384 jz      short loc_37D14 ;~ 28F0:081E
cs=0x28f0;eip=0x000820; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 89385 push    word ptr [bp+arg_0+2] ;~ 28F0:0820
cs=0x28f0;eip=0x000823; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89386 push    word ptr [bp+arg_0] ;~ 28F0:0823
cs=0x28f0;eip=0x000826; 	T(MOV(ax, 2));	// 89387 mov     ax, 2 ;~ 28F0:0826
cs=0x28f0;eip=0x000829; 	X(PUSH(ax));	// 89388 push    ax ;~ 28F0:0829
cs=0x28f0;eip=0x00082a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89389 les     bx, [bp+var_8] ;~ 28F0:082A
cs=0x28f0;eip=0x00082d; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 89390 push    word ptr es:[bx+0Ch] ;~ 28F0:082D
cs=0x28f0;eip=0x000831; 	R(JMP(loc_37dc3));	// 89391 jmp     loc_37DC3 ;~ 28F0:0831
loc_37d14:
	// 10107 
cs=0x28f0;eip=0x000834; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 89395 push    word ptr [bp+arg_0+2] ;~ 28F0:0834
cs=0x28f0;eip=0x000837; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89396 push    word ptr [bp+arg_0] ;~ 28F0:0837
cs=0x28f0;eip=0x00083a; 	T(MOV(ax, 1));	// 89397 mov     ax, 1 ;~ 28F0:083A
cs=0x28f0;eip=0x00083d; 	X(PUSH(ax));	// 89398 push    ax ;~ 28F0:083D
cs=0x28f0;eip=0x00083e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89399 les     bx, [bp+var_8] ;~ 28F0:083E
cs=0x28f0;eip=0x000841; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 89400 push    word ptr es:[bx+0Ch] ;~ 28F0:0841
cs=0x28f0;eip=0x000845; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 89401 push    word ptr es:[bx+0Ah] ;~ 28F0:0845
cs=0x28f0;eip=0x000849; 	R(CALL(sub_3842f,0));	// 89402 call    sub_3842F ;~ 28F0:0849
cs=0x28f0;eip=0x00084c; 	R(JMP(loc_37dd4));	// 89403 jmp     loc_37DD4 ;~ 28F0:084C
loc_37d2f:
	// 10108 
cs=0x28f0;eip=0x00084f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89407 les     bx, [bp+arg_0] ;~ 28F0:084F
cs=0x28f0;eip=0x000852; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 89408 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:0852
cs=0x28f0;eip=0x000858; 	R(JNZ(loc_37d3d));	// 89409 jnz     short loc_37D3D ;~ 28F0:0858
cs=0x28f0;eip=0x00085a; 	R(JMP(loc_37dd4));	// 89410 jmp     loc_37DD4 ;~ 28F0:085A
loc_37d3d:
	// 10109 
cs=0x28f0;eip=0x00085d; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 89414 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:085D
cs=0x28f0;eip=0x000863; 	R(JGE(loc_37d51));	// 89415 jge     short loc_37D51 ;~ 28F0:0863
cs=0x28f0;eip=0x000865; 	T(SUB(ax, ax));	// 89416 sub     ax, ax ;~ 28F0:0865
cs=0x28f0;eip=0x000867; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), ax));	// 89417 mov     es:[bx+122h], ax ;~ 28F0:0867
cs=0x28f0;eip=0x00086c; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 89418 mov     es:[bx+120h], ax ;~ 28F0:086C
loc_37d51:
	// 10110 
cs=0x28f0;eip=0x000871; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 89421 cmp     word ptr unk_47AB2, 3 ;~ 28F0:0871
cs=0x28f0;eip=0x000876; 	R(JNZ(loc_37d5f));	// 89422 jnz     short loc_37D5F ;~ 28F0:0876
cs=0x28f0;eip=0x000878; 	T(CMP(unk_55206, 0));	// 89423 cmp     byte ptr unk_55206, 0 ;~ 28F0:0878
cs=0x28f0;eip=0x00087d; 	R(JMP(loc_37d77));	// 89424 jmp     short loc_37D77 ;~ 28F0:087D
loc_37d5f:
	// 10111 
cs=0x28f0;eip=0x00087f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 89428 push    word ptr [bp+arg_0+2] ;~ 28F0:087F
cs=0x28f0;eip=0x000882; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89429 push    word ptr [bp+arg_0] ;~ 28F0:0882
cs=0x28f0;eip=0x000885; 	R(CALL(sub_37a1a,0));	// 89430 call    sub_37A1A ;~ 28F0:0885
cs=0x28f0;eip=0x000888; 	T(OR(ax, ax));	// 89431 or      ax, ax ;~ 28F0:0888
cs=0x28f0;eip=0x00088a; 	R(JNZ(loc_37d96));	// 89432 jnz     short loc_37D96 ;~ 28F0:088A
cs=0x28f0;eip=0x00088c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 89433 push    word ptr [bp+arg_0+2] ;~ 28F0:088C
cs=0x28f0;eip=0x00088f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89434 push    word ptr [bp+arg_0] ;~ 28F0:088F
cs=0x28f0;eip=0x000892; 	R(CALL(sub_37bbd,0));	// 89435 call    sub_37BBD ;~ 28F0:0892
cs=0x28f0;eip=0x000895; 	T(OR(ax, ax));	// 89436 or      ax, ax ;~ 28F0:0895
loc_37d77:
	// 10112 
cs=0x28f0;eip=0x000897; 	R(JZ(loc_37d96));	// 89439 jz      short loc_37D96 ;~ 28F0:0897
cs=0x28f0;eip=0x000899; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89440 les     bx, [bp+arg_0] ;~ 28F0:0899
cs=0x28f0;eip=0x00089c; 	T(SUB(ax, ax));	// 89441 sub     ax, ax ;~ 28F0:089C
cs=0x28f0;eip=0x00089e; 	X(MOV(*(dw*)(raddr(es,bx+0x0C2)), ax));	// 89442 mov     es:[bx+0C2h], ax ;~ 28F0:089E
cs=0x28f0;eip=0x0008a3; 	X(MOV(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 89443 mov     es:[bx+0C0h], ax ;~ 28F0:08A3
cs=0x28f0;eip=0x0008a8; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 1));	// 89444 mov     word ptr es:[bx+332h], 1 ;~ 28F0:08A8
cs=0x28f0;eip=0x0008af; 	R(CALLF(sub_36f79,0));	// 89445 call    sub_36F79 ;~ 28F0:08AF
cs=0x28f0;eip=0x0008b4; 	R(JMP(loc_37dd4));	// 89446 jmp     short loc_37DD4 ;~ 28F0:08B4
loc_37d96:
	// 10113 
cs=0x28f0;eip=0x0008b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89451 les     bx, [bp+arg_0] ;~ 28F0:08B6
cs=0x28f0;eip=0x0008b9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89452 mov     ax, es:[bx+2FAh] ;~ 28F0:08B9
cs=0x28f0;eip=0x0008be; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89453 mov     dx, es:[bx+2FCh] ;~ 28F0:08BE
cs=0x28f0;eip=0x0008c3; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89454 add     ax, es:[bx+302h] ;~ 28F0:08C3
cs=0x28f0;eip=0x0008c8; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89455 adc     dx, es:[bx+304h] ;~ 28F0:08C8
cs=0x28f0;eip=0x0008cd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 89456 les     bx, [bp+var_8] ;~ 28F0:08CD
cs=0x28f0;eip=0x0008d0; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 89457 mov     es:[bx+0Ah], ax ;~ 28F0:08D0
cs=0x28f0;eip=0x0008d4; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 89458 mov     es:[bx+0Ch], dx ;~ 28F0:08D4
cs=0x28f0;eip=0x0008d8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 89459 push    word ptr [bp+arg_0+2] ;~ 28F0:08D8
cs=0x28f0;eip=0x0008db; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 89460 push    word ptr [bp+arg_0] ;~ 28F0:08DB
cs=0x28f0;eip=0x0008de; 	T(MOV(ax, 2));	// 89461 mov     ax, 2 ;~ 28F0:08DE
cs=0x28f0;eip=0x0008e1; 	X(PUSH(ax));	// 89462 push    ax ;~ 28F0:08E1
cs=0x28f0;eip=0x0008e2; 	X(PUSH(dx));	// 89463 push    dx ;~ 28F0:08E2
loc_37dc3:
	// 10114 
cs=0x28f0;eip=0x0008e3; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 89466 push    word ptr es:[bx+0Ah] ;~ 28F0:08E3
cs=0x28f0;eip=0x0008e7; 	R(CALL(sub_3842f,0));	// 89467 call    sub_3842F ;~ 28F0:08E7
cs=0x28f0;eip=0x0008ea; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89468 les     bx, [bp+arg_0] ;~ 28F0:08EA
cs=0x28f0;eip=0x0008ed; 	X(MOV(*(dw*)(raddr(es,bx+0x320)), 0x0FFFF));	// 89469 mov     word ptr es:[bx+320h], 0FFFFh ;~ 28F0:08ED
loc_37dd4:
	// 10115 
cs=0x28f0;eip=0x0008f4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89473 les     bx, [bp+arg_0] ;~ 28F0:08F4
cs=0x28f0;eip=0x0008f7; 	T(SUB(ax, ax));	// 89474 sub     ax, ax ;~ 28F0:08F7
cs=0x28f0;eip=0x0008f9; 	T(CWD);	// 89475 cwd ;~ 28F0:08F9
cs=0x28f0;eip=0x0008fa; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 89476 mov     es:[bx+0A0h], ax ;~ 28F0:08FA
cs=0x28f0;eip=0x0008ff; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), dx));	// 89477 mov     es:[bx+0A2h], dx ;~ 28F0:08FF
cs=0x28f0;eip=0x000904; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 89478 mov     es:[bx+40h], ax ;~ 28F0:0904
cs=0x28f0;eip=0x000908; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 89479 mov     es:[bx+42h], dx ;~ 28F0:0908
loc_37dec:
	// 10116 
cs=0x28f0;eip=0x00090c; 	T(MOV(sp, bp));	// 89483 mov     sp, bp ;~ 28F0:090C
cs=0x28f0;eip=0x00090e; 	X(POP(bp));	// 89484 pop     bp ;~ 28F0:090E
cs=0x28f0;eip=0x00090f; 	R(RETN(4));	// 89485 retn    4 ;~ 28F0:090F
sub_37df2:
	// 89493 
#undef arg_0
#define arg_0 4
	// 89495 arg_0           = dword ptr  4 ;~ 28F0:0912
cs=0x28f0;eip=0x000912; 	X(PUSH(bp));	// 89497 push    bp ;~ 28F0:0912
cs=0x28f0;eip=0x000913; 	T(MOV(bp, sp));	// 89498 mov     bp, sp ;~ 28F0:0913
cs=0x28f0;eip=0x000915; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89499 les     bx, [bp+arg_0] ;~ 28F0:0915
cs=0x28f0;eip=0x000918; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x334))));	// 89500 mov     ax, es:[bx+334h] ;~ 28F0:0918
cs=0x28f0;eip=0x00091d; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), ax));	// 89501 cmp     es:[bx+332h], ax ;~ 28F0:091D
cs=0x28f0;eip=0x000922; 	R(JZ(loc_37e1b));	// 89502 jz      short loc_37E1B ;~ 28F0:0922
cs=0x28f0;eip=0x000924; 	X(MOV(*(raddr(es,bx+0x33C)), 1));	// 89503 mov     byte ptr es:[bx+33Ch], 1 ;~ 28F0:0924
cs=0x28f0;eip=0x00092a; 	X(MOV(*(dw*)(raddr(es,bx+0x336)), ax));	// 89504 mov     es:[bx+336h], ax ;~ 28F0:092A
cs=0x28f0;eip=0x00092f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x332))));	// 89505 mov     ax, es:[bx+332h] ;~ 28F0:092F
cs=0x28f0;eip=0x000934; 	X(MOV(*(dw*)(raddr(es,bx+0x334)), ax));	// 89506 mov     es:[bx+334h], ax ;~ 28F0:0934
cs=0x28f0;eip=0x000939; 	R(JMP(loc_37e21));	// 89507 jmp     short loc_37E21 ;~ 28F0:0939
loc_37e1b:
	// 10117 
cs=0x28f0;eip=0x00093b; 	X(MOV(*(raddr(es,bx+0x33C)), 0));	// 89511 mov     byte ptr es:[bx+33Ch], 0 ;~ 28F0:093B
loc_37e21:
	// 10118 
cs=0x28f0;eip=0x000941; 	X(POP(bp));	// 89514 pop     bp ;~ 28F0:0941
cs=0x28f0;eip=0x000942; 	R(RETN(4));	// 89515 retn    4 ;~ 28F0:0942
sub_37e25:
	// 89523 
#undef var_58
#define var_58 -0x58
	// 89526 var_58          = word ptr -58h ;~ 28F0:0945
#undef var_56
#define var_56 -0x56
	// 89527 var_56          = word ptr -56h ;~ 28F0:0945
#undef arg_0
#define arg_0 4
	// 89528 arg_0           = dword ptr  4 ;~ 28F0:0945
cs=0x28f0;eip=0x000945; 	X(PUSH(bp));	// 89530 push    bp ;~ 28F0:0945
cs=0x28f0;eip=0x000946; 	T(MOV(bp, sp));	// 89531 mov     bp, sp ;~ 28F0:0946
cs=0x28f0;eip=0x000948; 	T(SUB(sp, 0x5C));	// 89532 sub     sp, 5Ch ;~ 28F0:0948
cs=0x28f0;eip=0x00094b; 	X(PUSH(si));	// 89533 push    si ;~ 28F0:094B
cs=0x28f0;eip=0x00094c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89534 les     bx, [bp+arg_0] ;~ 28F0:094C
cs=0x28f0;eip=0x00094f; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 89535 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:094F
cs=0x28f0;eip=0x000955; 	R(JZ(loc_37e84));	// 89536 jz      short loc_37E84 ;~ 28F0:0955
cs=0x28f0;eip=0x000957; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 89537 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0957
cs=0x28f0;eip=0x00095d; 	R(JZ(loc_37e42));	// 89538 jz      short loc_37E42 ;~ 28F0:095D
cs=0x28f0;eip=0x00095f; 	R(JMP(loc_380bb));	// 89539 jmp     loc_380BB ;~ 28F0:095F
loc_37e42:
	// 10119 
cs=0x28f0;eip=0x000962; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 89543 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:0962
cs=0x28f0;eip=0x000968; 	R(JZ(loc_37e4d));	// 89544 jz      short loc_37E4D ;~ 28F0:0968
cs=0x28f0;eip=0x00096a; 	R(JMP(loc_380bb));	// 89545 jmp     loc_380BB ;~ 28F0:096A
loc_37e4d:
	// 10120 
cs=0x28f0;eip=0x00096d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89549 mov     ax, es:[bx+2FAh] ;~ 28F0:096D
cs=0x28f0;eip=0x000972; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89550 mov     dx, es:[bx+2FCh] ;~ 28F0:0972
cs=0x28f0;eip=0x000977; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89551 add     ax, es:[bx+302h] ;~ 28F0:0977
cs=0x28f0;eip=0x00097c; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89552 adc     dx, es:[bx+304h] ;~ 28F0:097C
cs=0x28f0;eip=0x000981; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89553 add     ax, es:[bx+20Eh] ;~ 28F0:0981
cs=0x28f0;eip=0x000986; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 89554 adc     dx, es:[bx+210h] ;~ 28F0:0986
cs=0x28f0;eip=0x00098b; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89555 les     bx, es:[bx+31Ch] ;~ 28F0:098B
cs=0x28f0;eip=0x000990; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89556 cmp     dx, es:[bx+0Ch] ;~ 28F0:0990
cs=0x28f0;eip=0x000994; 	R(JGE(loc_37e79));	// 89557 jge     short loc_37E79 ;~ 28F0:0994
cs=0x28f0;eip=0x000996; 	R(JMP(loc_380bb));	// 89558 jmp     loc_380BB ;~ 28F0:0996
loc_37e79:
	// 10121 
cs=0x28f0;eip=0x000999; 	R(JG(loc_37e84));	// 89562 jg      short loc_37E84 ;~ 28F0:0999
cs=0x28f0;eip=0x00099b; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89563 cmp     ax, es:[bx+0Ah] ;~ 28F0:099B
cs=0x28f0;eip=0x00099f; 	R(JA(loc_37e84));	// 89564 ja      short loc_37E84 ;~ 28F0:099F
cs=0x28f0;eip=0x0009a1; 	R(JMP(loc_380bb));	// 89565 jmp     loc_380BB ;~ 28F0:09A1
loc_37e84:
	// 10122 
cs=0x28f0;eip=0x0009a4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89570 les     bx, [bp+arg_0] ;~ 28F0:09A4
cs=0x28f0;eip=0x0009a7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89571 mov     ax, es:[bx+2FAh] ;~ 28F0:09A7
cs=0x28f0;eip=0x0009ac; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89572 mov     dx, es:[bx+2FCh] ;~ 28F0:09AC
cs=0x28f0;eip=0x0009b1; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89573 add     ax, es:[bx+302h] ;~ 28F0:09B1
cs=0x28f0;eip=0x0009b6; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89574 adc     dx, es:[bx+304h] ;~ 28F0:09B6
cs=0x28f0;eip=0x0009bb; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89575 les     bx, es:[bx+31Ch] ;~ 28F0:09BB
cs=0x28f0;eip=0x0009c0; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89576 cmp     dx, es:[bx+0Ch] ;~ 28F0:09C0
cs=0x28f0;eip=0x0009c4; 	R(JG(loc_37eb6));	// 89577 jg      short loc_37EB6 ;~ 28F0:09C4
cs=0x28f0;eip=0x0009c6; 	R(JL(loc_37eae));	// 89578 jl      short loc_37EAE ;~ 28F0:09C6
cs=0x28f0;eip=0x0009c8; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89579 cmp     ax, es:[bx+0Ah] ;~ 28F0:09C8
cs=0x28f0;eip=0x0009cc; 	R(JNC(loc_37eb6));	// 89580 jnb     short loc_37EB6 ;~ 28F0:09CC
loc_37eae:
	// 10123 
cs=0x28f0;eip=0x0009ce; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89583 mov     dx, es:[bx+0Ch] ;~ 28F0:09CE
cs=0x28f0;eip=0x0009d2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89584 mov     ax, es:[bx+0Ah] ;~ 28F0:09D2
loc_37eb6:
	// 10124 
cs=0x28f0;eip=0x0009d6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89588 les     bx, [bp+arg_0] ;~ 28F0:09D6
cs=0x28f0;eip=0x0009d9; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89589 les     bx, es:[bx+31Ch] ;~ 28F0:09D9
cs=0x28f0;eip=0x0009de; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 89590 mov     es:[bx+0Ah], ax ;~ 28F0:09DE
cs=0x28f0;eip=0x0009e2; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 89591 mov     es:[bx+0Ch], dx ;~ 28F0:09E2
cs=0x28f0;eip=0x0009e6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89592 les     bx, [bp+arg_0] ;~ 28F0:09E6
cs=0x28f0;eip=0x0009e9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89593 mov     ax, es:[bx+2FAh] ;~ 28F0:09E9
cs=0x28f0;eip=0x0009ee; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89594 mov     dx, es:[bx+2FCh] ;~ 28F0:09EE
cs=0x28f0;eip=0x0009f3; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89595 add     ax, es:[bx+302h] ;~ 28F0:09F3
cs=0x28f0;eip=0x0009f8; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89596 adc     dx, es:[bx+304h] ;~ 28F0:09F8
cs=0x28f0;eip=0x0009fd; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89597 add     ax, es:[bx+20Eh] ;~ 28F0:09FD
cs=0x28f0;eip=0x000a02; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 89598 adc     dx, es:[bx+210h] ;~ 28F0:0A02
cs=0x28f0;eip=0x000a07; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89599 les     bx, es:[bx+31Ch] ;~ 28F0:0A07
cs=0x28f0;eip=0x000a0c; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89600 cmp     dx, es:[bx+0Ch] ;~ 28F0:0A0C
cs=0x28f0;eip=0x000a10; 	R(JL(loc_37f67));	// 89601 jl      short loc_37F67 ;~ 28F0:0A10
cs=0x28f0;eip=0x000a12; 	R(JG(loc_37efa));	// 89602 jg      short loc_37EFA ;~ 28F0:0A12
cs=0x28f0;eip=0x000a14; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89603 cmp     ax, es:[bx+0Ah] ;~ 28F0:0A14
cs=0x28f0;eip=0x000a18; 	R(JC(loc_37f67));	// 89604 jb      short loc_37F67 ;~ 28F0:0A18
loc_37efa:
	// 10125 
cs=0x28f0;eip=0x000a1a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89607 les     bx, [bp+arg_0] ;~ 28F0:0A1A
cs=0x28f0;eip=0x000a1d; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 89608 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:0A1D
cs=0x28f0;eip=0x000a23; 	R(JZ(loc_37f67));	// 89609 jz      short loc_37F67 ;~ 28F0:0A23
cs=0x28f0;eip=0x000a25; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89610 mov     ax, es:[bx+20Eh] ;~ 28F0:0A25
cs=0x28f0;eip=0x000a2a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x210))));	// 89611 mov     dx, es:[bx+210h] ;~ 28F0:0A2A
cs=0x28f0;eip=0x000a2f; 	T(MOV(cl, 8));	// 89612 mov     cl, 8 ;~ 28F0:0A2F
cs=0x28f0;eip=0x000a31; 	R(CALLF(sub_10240,0));	// 89613 call    sub_10240 ;~ 28F0:0A31
cs=0x28f0;eip=0x000a36; 	X(PUSH(dx));	// 89614 push    dx ;~ 28F0:0A36
cs=0x28f0;eip=0x000a37; 	X(PUSH(ax));	// 89615 push    ax ;~ 28F0:0A37
cs=0x28f0;eip=0x000a38; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89616 les     bx, [bp+arg_0] ;~ 28F0:0A38
cs=0x28f0;eip=0x000a3b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20C))));	// 89617 mov     ax, es:[bx+20Ch] ;~ 28F0:0A3B
cs=0x28f0;eip=0x000a40; 	T(CWD);	// 89618 cwd ;~ 28F0:0A40
cs=0x28f0;eip=0x000a41; 	X(PUSH(dx));	// 89619 push    dx ;~ 28F0:0A41
cs=0x28f0;eip=0x000a42; 	X(PUSH(ax));	// 89620 push    ax ;~ 28F0:0A42
cs=0x28f0;eip=0x000a43; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89621 mov     ax, es:[bx+2FAh] ;~ 28F0:0A43
cs=0x28f0;eip=0x000a48; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89622 mov     dx, es:[bx+2FCh] ;~ 28F0:0A48
cs=0x28f0;eip=0x000a4d; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89623 les     bx, es:[bx+31Ch] ;~ 28F0:0A4D
cs=0x28f0;eip=0x000a52; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89624 sub     ax, es:[bx+0Ah] ;~ 28F0:0A52
cs=0x28f0;eip=0x000a56; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89625 sbb     dx, es:[bx+0Ch] ;~ 28F0:0A56
cs=0x28f0;eip=0x000a5a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89626 les     bx, [bp+arg_0] ;~ 28F0:0A5A
cs=0x28f0;eip=0x000a5d; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89627 add     ax, es:[bx+302h] ;~ 28F0:0A5D
cs=0x28f0;eip=0x000a62; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89628 adc     dx, es:[bx+304h] ;~ 28F0:0A62
cs=0x28f0;eip=0x000a67; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89629 add     ax, es:[bx+20Eh] ;~ 28F0:0A67
cs=0x28f0;eip=0x000a6c; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 89630 adc     dx, es:[bx+210h] ;~ 28F0:0A6C
cs=0x28f0;eip=0x000a71; 	X(PUSH(dx));	// 89631 push    dx ;~ 28F0:0A71
cs=0x28f0;eip=0x000a72; 	X(PUSH(ax));	// 89632 push    ax ;~ 28F0:0A72
cs=0x28f0;eip=0x000a73; 	R(CALLF(sub_105c2,0));	// 89633 call    sub_105C2 ;~ 28F0:0A73
cs=0x28f0;eip=0x000a78; 	X(PUSH(dx));	// 89634 push    dx ;~ 28F0:0A78
cs=0x28f0;eip=0x000a79; 	X(PUSH(ax));	// 89635 push    ax ;~ 28F0:0A79
cs=0x28f0;eip=0x000a7a; 	R(CALLF(sub_10526,0));	// 89636 call    sub_10526 ;~ 28F0:0A7A
cs=0x28f0;eip=0x000a7f; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 89637 mov     [bp+var_58], ax ;~ 28F0:0A7F
cs=0x28f0;eip=0x000a82; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), dx));	// 89638 mov     [bp+var_56], dx ;~ 28F0:0A82
cs=0x28f0;eip=0x000a85; 	R(JMP(loc_37f6f));	// 89639 jmp     short loc_37F6F ;~ 28F0:0A85
loc_37f67:
	// 10126 
cs=0x28f0;eip=0x000a87; 	T(SUB(ax, ax));	// 89644 sub     ax, ax ;~ 28F0:0A87
cs=0x28f0;eip=0x000a89; 	X(MOV(*(dw*)(raddr(ss,bp+var_56)), ax));	// 89645 mov     [bp+var_56], ax ;~ 28F0:0A89
cs=0x28f0;eip=0x000a8c; 	X(MOV(*(dw*)(raddr(ss,bp+var_58)), ax));	// 89646 mov     [bp+var_58], ax ;~ 28F0:0A8C
loc_37f6f:
	// 10127 
cs=0x28f0;eip=0x000a8f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89649 les     bx, [bp+arg_0] ;~ 28F0:0A8F
cs=0x28f0;eip=0x000a92; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 89650 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0A92
cs=0x28f0;eip=0x000a98; 	R(JZ(loc_37f7d));	// 89651 jz      short loc_37F7D ;~ 28F0:0A98
cs=0x28f0;eip=0x000a9a; 	R(JMP(loc_3800a));	// 89652 jmp     loc_3800A ;~ 28F0:0A9A
loc_37f7d:
	// 10128 
cs=0x28f0;eip=0x000a9d; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 89656 cmp     word ptr unk_57116, 0 ;~ 28F0:0A9D
cs=0x28f0;eip=0x000aa2; 	R(JZ(loc_37fc5));	// 89657 jz      short loc_37FC5 ;~ 28F0:0AA2
cs=0x28f0;eip=0x000aa4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 89658 mov     ax, [bp+var_58] ;~ 28F0:0AA4
cs=0x28f0;eip=0x000aa7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_56))));	// 89659 mov     dx, [bp+var_56] ;~ 28F0:0AA7
cs=0x28f0;eip=0x000aaa; 	T(CMP(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 89660 cmp     es:[bx+0E2h], dx ;~ 28F0:0AAA
cs=0x28f0;eip=0x000aaf; 	R(JL(loc_37fc5));	// 89661 jl      short loc_37FC5 ;~ 28F0:0AAF
cs=0x28f0;eip=0x000ab1; 	R(JG(loc_37f9a));	// 89662 jg      short loc_37F9A ;~ 28F0:0AB1
cs=0x28f0;eip=0x000ab3; 	T(CMP(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 89663 cmp     es:[bx+0E0h], ax ;~ 28F0:0AB3
cs=0x28f0;eip=0x000ab8; 	R(JBE(loc_37fc5));	// 89664 jbe     short loc_37FC5 ;~ 28F0:0AB8
loc_37f9a:
	// 10129 
cs=0x28f0;eip=0x000aba; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89667 mov     ax, es:[bx+2FAh] ;~ 28F0:0ABA
cs=0x28f0;eip=0x000abf; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89668 mov     dx, es:[bx+2FCh] ;~ 28F0:0ABF
cs=0x28f0;eip=0x000ac4; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89669 add     ax, es:[bx+302h] ;~ 28F0:0AC4
cs=0x28f0;eip=0x000ac9; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89670 adc     dx, es:[bx+304h] ;~ 28F0:0AC9
cs=0x28f0;eip=0x000ace; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89671 les     bx, es:[bx+31Ch] ;~ 28F0:0ACE
cs=0x28f0;eip=0x000ad3; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89672 cmp     ax, es:[bx+0Ah] ;~ 28F0:0AD3
cs=0x28f0;eip=0x000ad7; 	R(JZ(loc_37fbc));	// 89673 jz      short loc_37FBC ;~ 28F0:0AD7
cs=0x28f0;eip=0x000ad9; 	R(JMP(loc_380bb));	// 89674 jmp     loc_380BB ;~ 28F0:0AD9
loc_37fbc:
	// 10130 
cs=0x28f0;eip=0x000adc; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89678 cmp     dx, es:[bx+0Ch] ;~ 28F0:0ADC
cs=0x28f0;eip=0x000ae0; 	R(JZ(loc_37fc5));	// 89679 jz      short loc_37FC5 ;~ 28F0:0AE0
cs=0x28f0;eip=0x000ae2; 	R(JMP(loc_380bb));	// 89680 jmp     loc_380BB ;~ 28F0:0AE2
loc_37fc5:
	// 10131 
cs=0x28f0;eip=0x000ae5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89685 les     bx, [bp+arg_0] ;~ 28F0:0AE5
cs=0x28f0;eip=0x000ae8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 89686 mov     ax, es:[bx+0E0h] ;~ 28F0:0AE8
cs=0x28f0;eip=0x000aed; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 89687 mov     dx, es:[bx+0E2h] ;~ 28F0:0AED
cs=0x28f0;eip=0x000af2; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_56))));	// 89688 cmp     dx, [bp+var_56] ;~ 28F0:0AF2
cs=0x28f0;eip=0x000af5; 	R(JL(loc_37fe4));	// 89689 jl      short loc_37FE4 ;~ 28F0:0AF5
cs=0x28f0;eip=0x000af7; 	R(JG(loc_37fde));	// 89690 jg      short loc_37FDE ;~ 28F0:0AF7
cs=0x28f0;eip=0x000af9; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_58))));	// 89691 cmp     ax, [bp+var_58] ;~ 28F0:0AF9
cs=0x28f0;eip=0x000afc; 	R(JBE(loc_37fe4));	// 89692 jbe     short loc_37FE4 ;~ 28F0:0AFC
loc_37fde:
	// 10132 
cs=0x28f0;eip=0x000afe; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_56))));	// 89695 mov     dx, [bp+var_56] ;~ 28F0:0AFE
cs=0x28f0;eip=0x000b01; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 89696 mov     ax, [bp+var_58] ;~ 28F0:0B01
loc_37fe4:
	// 10133 
cs=0x28f0;eip=0x000b04; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 89700 mov     es:[bx+0E0h], ax ;~ 28F0:0B04
cs=0x28f0;eip=0x000b09; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 89701 mov     es:[bx+0E2h], dx ;~ 28F0:0B09
cs=0x28f0;eip=0x000b0e; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 89702 mov     al, es:[bx+214h] ;~ 28F0:0B0E
cs=0x28f0;eip=0x000b13; 	T(CBW);	// 89703 cbw ;~ 28F0:0B13
cs=0x28f0;eip=0x000b14; 	T(CWD);	// 89704 cwd ;~ 28F0:0B14
cs=0x28f0;eip=0x000b15; 	T(MOV(dh, dl));	// 89705 mov     dh, dl ;~ 28F0:0B15
cs=0x28f0;eip=0x000b17; 	T(MOV(dl, ah));	// 89706 mov     dl, ah ;~ 28F0:0B17
cs=0x28f0;eip=0x000b19; 	T(MOV(ah, al));	// 89707 mov     ah, al ;~ 28F0:0B19
cs=0x28f0;eip=0x000b1b; 	T(SUB(al, al));	// 89708 sub     al, al ;~ 28F0:0B1B
cs=0x28f0;eip=0x000b1d; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 89709 add     ax, es:[bx+0E0h] ;~ 28F0:0B1D
cs=0x28f0;eip=0x000b22; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 89710 adc     dx, es:[bx+0E2h] ;~ 28F0:0B22
cs=0x28f0;eip=0x000b27; 	R(JMP(loc_380a2));	// 89711 jmp     loc_380A2 ;~ 28F0:0B27
loc_3800a:
	// 10134 
cs=0x28f0;eip=0x000b2a; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 89715 cmp     word ptr unk_57116, 0 ;~ 28F0:0B2A
cs=0x28f0;eip=0x000b2f; 	R(JZ(loc_38051));	// 89716 jz      short loc_38051 ;~ 28F0:0B2F
cs=0x28f0;eip=0x000b31; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 89717 mov     ax, [bp+var_58] ;~ 28F0:0B31
cs=0x28f0;eip=0x000b34; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_56))));	// 89718 mov     dx, [bp+var_56] ;~ 28F0:0B34
cs=0x28f0;eip=0x000b37; 	T(NEG(ax));	// 89719 neg     ax ;~ 28F0:0B37
cs=0x28f0;eip=0x000b39; 	T(ADC(dx, 0));	// 89720 adc     dx, 0 ;~ 28F0:0B39
cs=0x28f0;eip=0x000b3c; 	T(NEG(dx));	// 89721 neg     dx ;~ 28F0:0B3C
cs=0x28f0;eip=0x000b3e; 	T(CMP(*(dw*)(raddr(es,bx+0x22)), dx));	// 89722 cmp     es:[bx+22h], dx ;~ 28F0:0B3E
cs=0x28f0;eip=0x000b42; 	R(JL(loc_38051));	// 89723 jl      short loc_38051 ;~ 28F0:0B42
cs=0x28f0;eip=0x000b44; 	R(JG(loc_3802c));	// 89724 jg      short loc_3802C ;~ 28F0:0B44
cs=0x28f0;eip=0x000b46; 	T(CMP(*(dw*)(raddr(es,bx+0x20)), ax));	// 89725 cmp     es:[bx+20h], ax ;~ 28F0:0B46
cs=0x28f0;eip=0x000b4a; 	R(JBE(loc_38051));	// 89726 jbe     short loc_38051 ;~ 28F0:0B4A
loc_3802c:
	// 10135 
cs=0x28f0;eip=0x000b4c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89729 mov     ax, es:[bx+2FAh] ;~ 28F0:0B4C
cs=0x28f0;eip=0x000b51; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89730 mov     dx, es:[bx+2FCh] ;~ 28F0:0B51
cs=0x28f0;eip=0x000b56; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89731 add     ax, es:[bx+302h] ;~ 28F0:0B56
cs=0x28f0;eip=0x000b5b; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89732 adc     dx, es:[bx+304h] ;~ 28F0:0B5B
cs=0x28f0;eip=0x000b60; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89733 les     bx, es:[bx+31Ch] ;~ 28F0:0B60
cs=0x28f0;eip=0x000b65; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89734 cmp     ax, es:[bx+0Ah] ;~ 28F0:0B65
cs=0x28f0;eip=0x000b69; 	R(JNZ(loc_380bb));	// 89735 jnz     short loc_380BB ;~ 28F0:0B69
cs=0x28f0;eip=0x000b6b; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89736 cmp     dx, es:[bx+0Ch] ;~ 28F0:0B6B
cs=0x28f0;eip=0x000b6f; 	R(JNZ(loc_380bb));	// 89737 jnz     short loc_380BB ;~ 28F0:0B6F
loc_38051:
	// 10136 
cs=0x28f0;eip=0x000b71; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89741 les     bx, [bp+arg_0] ;~ 28F0:0B71
cs=0x28f0;eip=0x000b74; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_58))));	// 89742 mov     ax, [bp+var_58] ;~ 28F0:0B74
cs=0x28f0;eip=0x000b77; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_56))));	// 89743 mov     dx, [bp+var_56] ;~ 28F0:0B77
cs=0x28f0;eip=0x000b7a; 	T(NEG(ax));	// 89744 neg     ax ;~ 28F0:0B7A
cs=0x28f0;eip=0x000b7c; 	T(ADC(dx, 0));	// 89745 adc     dx, 0 ;~ 28F0:0B7C
cs=0x28f0;eip=0x000b7f; 	T(NEG(dx));	// 89746 neg     dx ;~ 28F0:0B7F
cs=0x28f0;eip=0x000b81; 	X(MOV(*(dw*)(raddr(es,bx+0x24)), ax));	// 89747 mov     es:[bx+24h], ax ;~ 28F0:0B81
cs=0x28f0;eip=0x000b85; 	X(MOV(*(dw*)(raddr(es,bx+0x26)), dx));	// 89748 mov     es:[bx+26h], dx ;~ 28F0:0B85
cs=0x28f0;eip=0x000b89; 	T(MOV(ax, bx));	// 89749 mov     ax, bx ;~ 28F0:0B89
cs=0x28f0;eip=0x000b8b; 	T(MOV(dx, es));	// 89750 mov     dx, es ;~ 28F0:0B8B
cs=0x28f0;eip=0x000b8d; 	T(ADD(ax, 0x20));	// 89751 add     ax, 20h ; ' ' ;~ 28F0:0B8D
cs=0x28f0;eip=0x000b90; 	X(PUSH(dx));	// 89752 push    dx ;~ 28F0:0B90
cs=0x28f0;eip=0x000b91; 	X(PUSH(ax));	// 89753 push    ax ;~ 28F0:0B91
cs=0x28f0;eip=0x000b92; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 89754 push    word ptr es:[bx+36h] ;~ 28F0:0B92
cs=0x28f0;eip=0x000b96; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 89755 push    word ptr es:[bx+34h] ;~ 28F0:0B96
cs=0x28f0;eip=0x000b9a; 	R(CALL(sub_3b9eb,0));	// 89756 call    sub_3B9EB ;~ 28F0:0B9A
cs=0x28f0;eip=0x000b9d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89757 les     bx, [bp+arg_0] ;~ 28F0:0B9D
cs=0x28f0;eip=0x000ba0; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 89758 mov     al, es:[bx+214h] ;~ 28F0:0BA0
cs=0x28f0;eip=0x000ba5; 	T(CBW);	// 89759 cbw ;~ 28F0:0BA5
cs=0x28f0;eip=0x000ba6; 	T(CWD);	// 89760 cwd ;~ 28F0:0BA6
cs=0x28f0;eip=0x000ba7; 	T(MOV(dh, dl));	// 89761 mov     dh, dl ;~ 28F0:0BA7
cs=0x28f0;eip=0x000ba9; 	T(MOV(dl, ah));	// 89762 mov     dl, ah ;~ 28F0:0BA9
cs=0x28f0;eip=0x000bab; 	T(MOV(ah, al));	// 89763 mov     ah, al ;~ 28F0:0BAB
cs=0x28f0;eip=0x000bad; 	T(SUB(al, al));	// 89764 sub     al, al ;~ 28F0:0BAD
cs=0x28f0;eip=0x000baf; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x20))));	// 89765 mov     cx, es:[bx+20h] ;~ 28F0:0BAF
cs=0x28f0;eip=0x000bb3; 	T(MOV(si, *(dw*)(raddr(es,bx+0x22))));	// 89766 mov     si, es:[bx+22h] ;~ 28F0:0BB3
cs=0x28f0;eip=0x000bb7; 	T(NEG(cx));	// 89767 neg     cx ;~ 28F0:0BB7
cs=0x28f0;eip=0x000bb9; 	T(ADC(si, 0));	// 89768 adc     si, 0 ;~ 28F0:0BB9
cs=0x28f0;eip=0x000bbc; 	T(NEG(si));	// 89769 neg     si ;~ 28F0:0BBC
cs=0x28f0;eip=0x000bbe; 	T(ADD(ax, cx));	// 89770 add     ax, cx ;~ 28F0:0BBE
cs=0x28f0;eip=0x000bc0; 	T(ADC(dx, si));	// 89771 adc     dx, si ;~ 28F0:0BC0
loc_380a2:
	// 10137 
cs=0x28f0;eip=0x000bc2; 	T(MOV(cl, 5));	// 89774 mov     cl, 5 ;~ 28F0:0BC2
cs=0x28f0;eip=0x000bc4; 	R(CALLF(sub_10240,0));	// 89775 call    sub_10240 ;~ 28F0:0BC4
cs=0x28f0;eip=0x000bc9; 	X(PUSH(ax));	// 89776 push    ax ;~ 28F0:0BC9
cs=0x28f0;eip=0x000bca; 	R(CALLF(sub_24cf8,0));	// 89777 call    sub_24CF8 ;~ 28F0:0BCA
cs=0x28f0;eip=0x000bcf; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89778 les     bx, [bp+arg_0] ;~ 28F0:0BCF
cs=0x28f0;eip=0x000bd2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89779 les     bx, es:[bx+31Ch] ;~ 28F0:0BD2
cs=0x28f0;eip=0x000bd7; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), ax));	// 89780 mov     es:[bx+14h], ax ;~ 28F0:0BD7
loc_380bb:
	// 10138 
cs=0x28f0;eip=0x000bdb; 	X(POP(si));	// 89784 pop     si ;~ 28F0:0BDB
cs=0x28f0;eip=0x000bdc; 	T(MOV(sp, bp));	// 89785 mov     sp, bp ;~ 28F0:0BDC
cs=0x28f0;eip=0x000bde; 	X(POP(bp));	// 89786 pop     bp ;~ 28F0:0BDE
cs=0x28f0;eip=0x000bdf; 	R(RETN(4));	// 89787 retn    4 ;~ 28F0:0BDF
seg026_proc:
	// 89791 
cs=0x28f0;eip=0x000be2; 	X(PUSH(bp));	// 89791 push    bp ;~ 28F0:0BE2
cs=0x28f0;eip=0x000be3; 	T(MOV(bp, sp));	// 89792 mov     bp, sp ;~ 28F0:0BE3
cs=0x28f0;eip=0x000be5; 	T(SUB(sp, 8));	// 89793 sub     sp, 8 ;~ 28F0:0BE5
cs=0x28f0;eip=0x000be8; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 89794 les     bx, [bp+4] ;~ 28F0:0BE8
cs=0x28f0;eip=0x000beb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89795 mov     ax, es:[bx+2FAh] ;~ 28F0:0BEB
cs=0x28f0;eip=0x000bf0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89796 mov     dx, es:[bx+2FCh] ;~ 28F0:0BF0
cs=0x28f0;eip=0x000bf5; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89797 add     ax, es:[bx+302h] ;~ 28F0:0BF5
cs=0x28f0;eip=0x000bfa; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89798 adc     dx, es:[bx+304h] ;~ 28F0:0BFA
cs=0x28f0;eip=0x000bff; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89799 les     bx, es:[bx+31Ch] ;~ 28F0:0BFF
cs=0x28f0;eip=0x000c04; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89800 cmp     dx, es:[bx+0Ch] ;~ 28F0:0C04
cs=0x28f0;eip=0x000c08; 	R(JG(loc_380fa));	// 89801 jg      short loc_380FA ;~ 28F0:0C08
cs=0x28f0;eip=0x000c0a; 	R(JL(loc_380f2));	// 89802 jl      short loc_380F2 ;~ 28F0:0C0A
cs=0x28f0;eip=0x000c0c; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89803 cmp     ax, es:[bx+0Ah] ;~ 28F0:0C0C
cs=0x28f0;eip=0x000c10; 	R(JNC(loc_380fa));	// 89804 jnb     short loc_380FA ;~ 28F0:0C10
loc_380f2:
	// 10139 
cs=0x28f0;eip=0x000c12; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89807 mov     dx, es:[bx+0Ch] ;~ 28F0:0C12
cs=0x28f0;eip=0x000c16; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89808 mov     ax, es:[bx+0Ah] ;~ 28F0:0C16
loc_380fa:
	// 10140 
cs=0x28f0;eip=0x000c1a; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 89812 les     bx, [bp+4] ;~ 28F0:0C1A
cs=0x28f0;eip=0x000c1d; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89813 les     bx, es:[bx+31Ch] ;~ 28F0:0C1D
cs=0x28f0;eip=0x000c22; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 89814 mov     es:[bx+0Ah], ax ;~ 28F0:0C22
cs=0x28f0;eip=0x000c26; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 89815 mov     es:[bx+0Ch], dx ;~ 28F0:0C26
cs=0x28f0;eip=0x000c2a; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 89816 les     bx, [bp+4] ;~ 28F0:0C2A
cs=0x28f0;eip=0x000c2d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89817 mov     ax, es:[bx+2FAh] ;~ 28F0:0C2D
cs=0x28f0;eip=0x000c32; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89818 mov     dx, es:[bx+2FCh] ;~ 28F0:0C32
cs=0x28f0;eip=0x000c37; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89819 add     ax, es:[bx+302h] ;~ 28F0:0C37
cs=0x28f0;eip=0x000c3c; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89820 adc     dx, es:[bx+304h] ;~ 28F0:0C3C
cs=0x28f0;eip=0x000c41; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89821 add     ax, es:[bx+20Eh] ;~ 28F0:0C41
cs=0x28f0;eip=0x000c46; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 89822 adc     dx, es:[bx+210h] ;~ 28F0:0C46
cs=0x28f0;eip=0x000c4b; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89823 les     bx, es:[bx+31Ch] ;~ 28F0:0C4B
cs=0x28f0;eip=0x000c50; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89824 cmp     dx, es:[bx+0Ch] ;~ 28F0:0C50
cs=0x28f0;eip=0x000c54; 	R(JL(loc_381ab));	// 89825 jl      short loc_381AB ;~ 28F0:0C54
cs=0x28f0;eip=0x000c56; 	R(JG(loc_3813e));	// 89826 jg      short loc_3813E ;~ 28F0:0C56
cs=0x28f0;eip=0x000c58; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89827 cmp     ax, es:[bx+0Ah] ;~ 28F0:0C58
cs=0x28f0;eip=0x000c5c; 	R(JBE(loc_381ab));	// 89828 jbe     short loc_381AB ;~ 28F0:0C5C
loc_3813e:
	// 10141 
cs=0x28f0;eip=0x000c5e; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 89831 les     bx, [bp+4] ;~ 28F0:0C5E
cs=0x28f0;eip=0x000c61; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 89832 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:0C61
cs=0x28f0;eip=0x000c67; 	R(JZ(loc_381ab));	// 89833 jz      short loc_381AB ;~ 28F0:0C67
cs=0x28f0;eip=0x000c69; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89834 mov     ax, es:[bx+20Eh] ;~ 28F0:0C69
cs=0x28f0;eip=0x000c6e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x210))));	// 89835 mov     dx, es:[bx+210h] ;~ 28F0:0C6E
cs=0x28f0;eip=0x000c73; 	T(MOV(cl, 8));	// 89836 mov     cl, 8 ;~ 28F0:0C73
cs=0x28f0;eip=0x000c75; 	R(CALLF(sub_10240,0));	// 89837 call    sub_10240 ;~ 28F0:0C75
cs=0x28f0;eip=0x000c7a; 	X(PUSH(dx));	// 89838 push    dx ;~ 28F0:0C7A
cs=0x28f0;eip=0x000c7b; 	X(PUSH(ax));	// 89839 push    ax ;~ 28F0:0C7B
cs=0x28f0;eip=0x000c7c; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 89840 les     bx, [bp+4] ;~ 28F0:0C7C
cs=0x28f0;eip=0x000c7f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20C))));	// 89841 mov     ax, es:[bx+20Ch] ;~ 28F0:0C7F
cs=0x28f0;eip=0x000c84; 	T(CWD);	// 89842 cwd ;~ 28F0:0C84
cs=0x28f0;eip=0x000c85; 	X(PUSH(dx));	// 89843 push    dx ;~ 28F0:0C85
cs=0x28f0;eip=0x000c86; 	X(PUSH(ax));	// 89844 push    ax ;~ 28F0:0C86
cs=0x28f0;eip=0x000c87; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 89845 mov     ax, es:[bx+2FAh] ;~ 28F0:0C87
cs=0x28f0;eip=0x000c8c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 89846 mov     dx, es:[bx+2FCh] ;~ 28F0:0C8C
cs=0x28f0;eip=0x000c91; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89847 les     bx, es:[bx+31Ch] ;~ 28F0:0C91
cs=0x28f0;eip=0x000c96; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0A))));	// 89848 sub     ax, es:[bx+0Ah] ;~ 28F0:0C96
cs=0x28f0;eip=0x000c9a; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x0C))));	// 89849 sbb     dx, es:[bx+0Ch] ;~ 28F0:0C9A
cs=0x28f0;eip=0x000c9e; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 89850 les     bx, [bp+4] ;~ 28F0:0C9E
cs=0x28f0;eip=0x000ca1; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 89851 add     ax, es:[bx+302h] ;~ 28F0:0CA1
cs=0x28f0;eip=0x000ca6; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 89852 adc     dx, es:[bx+304h] ;~ 28F0:0CA6
cs=0x28f0;eip=0x000cab; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 89853 add     ax, es:[bx+20Eh] ;~ 28F0:0CAB
cs=0x28f0;eip=0x000cb0; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 89854 adc     dx, es:[bx+210h] ;~ 28F0:0CB0
cs=0x28f0;eip=0x000cb5; 	X(PUSH(dx));	// 89855 push    dx ;~ 28F0:0CB5
cs=0x28f0;eip=0x000cb6; 	X(PUSH(ax));	// 89856 push    ax ;~ 28F0:0CB6
cs=0x28f0;eip=0x000cb7; 	R(CALLF(sub_105c2,0));	// 89857 call    sub_105C2 ;~ 28F0:0CB7
cs=0x28f0;eip=0x000cbc; 	X(PUSH(dx));	// 89858 push    dx ;~ 28F0:0CBC
cs=0x28f0;eip=0x000cbd; 	X(PUSH(ax));	// 89859 push    ax ;~ 28F0:0CBD
cs=0x28f0;eip=0x000cbe; 	R(CALLF(sub_10526,0));	// 89860 call    sub_10526 ;~ 28F0:0CBE
cs=0x28f0;eip=0x000cc3; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 89861 mov     [bp-4], ax ;~ 28F0:0CC3
cs=0x28f0;eip=0x000cc6; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 89862 mov     [bp-2], dx ;~ 28F0:0CC6
cs=0x28f0;eip=0x000cc9; 	R(JMP(loc_381b3));	// 89863 jmp     short loc_381B3 ;~ 28F0:0CC9
loc_381ab:
	// 10142 
cs=0x28f0;eip=0x000ccb; 	T(SUB(ax, ax));	// 89868 sub     ax, ax ;~ 28F0:0CCB
cs=0x28f0;eip=0x000ccd; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 89869 mov     [bp-2], ax ;~ 28F0:0CCD
cs=0x28f0;eip=0x000cd0; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 89870 mov     [bp-4], ax ;~ 28F0:0CD0
loc_381b3:
	// 10143 
cs=0x28f0;eip=0x000cd3; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 89873 les     bx, [bp+4] ;~ 28F0:0CD3
cs=0x28f0;eip=0x000cd6; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 89874 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0CD6
cs=0x28f0;eip=0x000cdc; 	R(JNZ(loc_381e6));	// 89875 jnz     short loc_381E6 ;~ 28F0:0CDC
cs=0x28f0;eip=0x000cde; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 89876 mov     ax, es:[bx+0E0h] ;~ 28F0:0CDE
cs=0x28f0;eip=0x000ce3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 89877 mov     dx, es:[bx+0E2h] ;~ 28F0:0CE3
cs=0x28f0;eip=0x000ce8; 	T(CMP(dx, *(dw*)(raddr(ss,bp-2))));	// 89878 cmp     dx, [bp-2] ;~ 28F0:0CE8
cs=0x28f0;eip=0x000ceb; 	R(JL(loc_381da));	// 89879 jl      short loc_381DA ;~ 28F0:0CEB
cs=0x28f0;eip=0x000ced; 	R(JG(loc_381d4));	// 89880 jg      short loc_381D4 ;~ 28F0:0CED
cs=0x28f0;eip=0x000cef; 	T(CMP(ax, *(dw*)(raddr(ss,bp-4))));	// 89881 cmp     ax, [bp-4] ;~ 28F0:0CEF
cs=0x28f0;eip=0x000cf2; 	R(JBE(loc_381da));	// 89882 jbe     short loc_381DA ;~ 28F0:0CF2
loc_381d4:
	// 10144 
cs=0x28f0;eip=0x000cf4; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 89885 mov     dx, [bp-2] ;~ 28F0:0CF4
cs=0x28f0;eip=0x000cf7; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 89886 mov     ax, [bp-4] ;~ 28F0:0CF7
loc_381da:
	// 10145 
cs=0x28f0;eip=0x000cfa; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 89890 mov     es:[bx+0E0h], ax ;~ 28F0:0CFA
cs=0x28f0;eip=0x000cff; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 89891 mov     es:[bx+0E2h], dx ;~ 28F0:0CFF
cs=0x28f0;eip=0x000d04; 	R(JMP(loc_3820a));	// 89892 jmp     short loc_3820A ;~ 28F0:0D04
loc_381e6:
	// 10146 
cs=0x28f0;eip=0x000d06; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 89896 mov     ax, [bp-4] ;~ 28F0:0D06
cs=0x28f0;eip=0x000d09; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 89897 mov     dx, [bp-2] ;~ 28F0:0D09
cs=0x28f0;eip=0x000d0c; 	T(NEG(ax));	// 89898 neg     ax ;~ 28F0:0D0C
cs=0x28f0;eip=0x000d0e; 	T(ADC(dx, 0));	// 89899 adc     dx, 0 ;~ 28F0:0D0E
cs=0x28f0;eip=0x000d11; 	T(NEG(dx));	// 89900 neg     dx ;~ 28F0:0D11
cs=0x28f0;eip=0x000d13; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 89901 mov     es:[bx+20h], ax ;~ 28F0:0D13
cs=0x28f0;eip=0x000d17; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 89902 mov     es:[bx+22h], dx ;~ 28F0:0D17
cs=0x28f0;eip=0x000d1b; 	X(MOV(*(dw*)(raddr(es,bx+0x24)), ax));	// 89903 mov     es:[bx+24h], ax ;~ 28F0:0D1B
cs=0x28f0;eip=0x000d1f; 	X(MOV(*(dw*)(raddr(es,bx+0x26)), dx));	// 89904 mov     es:[bx+26h], dx ;~ 28F0:0D1F
cs=0x28f0;eip=0x000d23; 	T(NEG(ax));	// 89905 neg     ax ;~ 28F0:0D23
cs=0x28f0;eip=0x000d25; 	T(ADC(dx, 0));	// 89906 adc     dx, 0 ;~ 28F0:0D25
cs=0x28f0;eip=0x000d28; 	T(NEG(dx));	// 89907 neg     dx ;~ 28F0:0D28
loc_3820a:
	// 10147 
cs=0x28f0;eip=0x000d2a; 	T(MOV(cl, 5));	// 89910 mov     cl, 5 ;~ 28F0:0D2A
cs=0x28f0;eip=0x000d2c; 	R(CALLF(sub_10240,0));	// 89911 call    sub_10240 ;~ 28F0:0D2C
cs=0x28f0;eip=0x000d31; 	X(PUSH(ax));	// 89912 push    ax ;~ 28F0:0D31
cs=0x28f0;eip=0x000d32; 	R(CALLF(sub_24cf8,0));	// 89913 call    sub_24CF8 ;~ 28F0:0D32
cs=0x28f0;eip=0x000d37; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 89914 les     bx, [bp+4] ;~ 28F0:0D37
cs=0x28f0;eip=0x000d3a; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 89915 les     bx, es:[bx+31Ch] ;~ 28F0:0D3A
cs=0x28f0;eip=0x000d3f; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), ax));	// 89916 mov     es:[bx+14h], ax ;~ 28F0:0D3F
cs=0x28f0;eip=0x000d43; 	T(MOV(sp, bp));	// 89917 mov     sp, bp ;~ 28F0:0D43
cs=0x28f0;eip=0x000d45; 	X(POP(bp));	// 89918 pop     bp ;~ 28F0:0D45
cs=0x28f0;eip=0x000d46; 	R(RETN(4));	// 89919 retn    4 ;~ 28F0:0D46
cs=0x28f0;eip=0x0023c1; 	X(PUSH(bp));	// 92509 push    bp ;~ 28F0:23C1
cs=0x28f0;eip=0x0023c2; 	T(MOV(bp, sp));	// 92510 mov     bp, sp ;~ 28F0:23C2
cs=0x28f0;eip=0x0023c4; 	T(SUB(sp, 0x12));	// 92511 sub     sp, 12h ;~ 28F0:23C4
cs=0x28f0;eip=0x0023c7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 92512 mov     ax, [bp+4] ;~ 28F0:23C7
cs=0x28f0;eip=0x0023ca; 	T(MOV(dx, *(dw*)(raddr(ss,bp+6))));	// 92513 mov     dx, [bp+6] ;~ 28F0:23CA
cs=0x28f0;eip=0x0023cd; 	T(ADD(ax, 0x0A0));	// 92514 add     ax, 0A0h ; ' ' ;~ 28F0:23CD
cs=0x28f0;eip=0x0023d0; 	X(MOV(*(dw*)(raddr(ss,bp-0x10)), ax));	// 92515 mov     [bp-10h], ax ;~ 28F0:23D0
cs=0x28f0;eip=0x0023d3; 	X(MOV(*(dw*)(raddr(ss,bp-0x0E)), dx));	// 92516 mov     [bp-0Eh], dx ;~ 28F0:23D3
cs=0x28f0;eip=0x0023d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 92517 mov     ax, [bp+4] ;~ 28F0:23D6
cs=0x28f0;eip=0x0023d9; 	T(ADD(ax, 0x120));	// 92518 add     ax, 120h ;~ 28F0:23D9
cs=0x28f0;eip=0x0023dc; 	X(MOV(*(dw*)(raddr(ss,bp-0x0C)), ax));	// 92519 mov     [bp-0Ch], ax ;~ 28F0:23DC
cs=0x28f0;eip=0x0023df; 	X(MOV(*(dw*)(raddr(ss,bp-0x0A)), dx));	// 92520 mov     [bp-0Ah], dx ;~ 28F0:23DF
cs=0x28f0;eip=0x0023e2; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 92521 les     bx, [bp+4] ;~ 28F0:23E2
cs=0x28f0;eip=0x0023e5; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92522 mov     ax, es:[bx] ;~ 28F0:23E5
cs=0x28f0;eip=0x0023e8; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92523 mov     dx, es:[bx+2] ;~ 28F0:23E8
cs=0x28f0;eip=0x0023ec; 	T(MOV(cl, 5));	// 92524 mov     cl, 5 ;~ 28F0:23EC
cs=0x28f0;eip=0x0023ee; 	R(CALLF(sub_10240,0));	// 92525 call    sub_10240 ;~ 28F0:23EE
cs=0x28f0;eip=0x0023f3; 	X(PUSH(ax));	// 92526 push    ax ;~ 28F0:23F3
cs=0x28f0;eip=0x0023f4; 	R(CALLF(sub_24cf8,0));	// 92527 call    sub_24CF8 ;~ 28F0:23F4
cs=0x28f0;eip=0x0023f9; 	X(MOV(*(dw*)(raddr(ss,bp-0x12)), ax));	// 92528 mov     [bp-12h], ax ;~ 28F0:23F9
cs=0x28f0;eip=0x0023fc; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 92529 les     bx, [bp+4] ;~ 28F0:23FC
cs=0x28f0;eip=0x0023ff; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 92530 mov     ax, es:[bx+120h] ;~ 28F0:23FF
cs=0x28f0;eip=0x002404; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 92531 mov     dx, es:[bx+122h] ;~ 28F0:2404
cs=0x28f0;eip=0x002409; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 92532 mov     [bp-4], ax ;~ 28F0:2409
cs=0x28f0;eip=0x00240c; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 92533 mov     [bp-2], dx ;~ 28F0:240C
cs=0x28f0;eip=0x00240f; 	X(PUSH(*(dw*)(raddr(ss,bp-0x12))));	// 92534 push    word ptr [bp-12h] ;~ 28F0:240F
cs=0x28f0;eip=0x002412; 	R(CALLF(sub_27cb4,0));	// 92535 call    sub_27CB4 ;~ 28F0:2412
cs=0x28f0;eip=0x002417; 	X(PUSH(dx));	// 92536 push    dx ;~ 28F0:2417
cs=0x28f0;eip=0x002418; 	X(PUSH(ax));	// 92537 push    ax ;~ 28F0:2418
cs=0x28f0;eip=0x002419; 	T(MOV(ax, *(dw*)(raddr(ss,bp-4))));	// 92538 mov     ax, [bp-4] ;~ 28F0:2419
cs=0x28f0;eip=0x00241c; 	T(MOV(dx, *(dw*)(raddr(ss,bp-2))));	// 92539 mov     dx, [bp-2] ;~ 28F0:241C
cs=0x28f0;eip=0x00241f; 	T(MOV(cl, 8));	// 92540 mov     cl, 8 ;~ 28F0:241F
cs=0x28f0;eip=0x002421; 	R(CALLF(sub_10240,0));	// 92541 call    sub_10240 ;~ 28F0:2421
cs=0x28f0;eip=0x002426; 	X(PUSH(dx));	// 92542 push    dx ;~ 28F0:2426
cs=0x28f0;eip=0x002427; 	X(PUSH(ax));	// 92543 push    ax ;~ 28F0:2427
cs=0x28f0;eip=0x002428; 	R(CALLF(sub_105c2,0));	// 92544 call    sub_105C2 ;~ 28F0:2428
cs=0x28f0;eip=0x00242d; 	T(MOV(cl, 8));	// 92545 mov     cl, 8 ;~ 28F0:242D
cs=0x28f0;eip=0x00242f; 	R(CALLF(sub_10240,0));	// 92546 call    sub_10240 ;~ 28F0:242F
cs=0x28f0;eip=0x002434; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 92547 mov     [bp-8], ax ;~ 28F0:2434
cs=0x28f0;eip=0x002437; 	X(MOV(*(dw*)(raddr(ss,bp-6)), dx));	// 92548 mov     [bp-6], dx ;~ 28F0:2437
cs=0x28f0;eip=0x00243a; 	T(LES(bx, *(dw*)(raddr(ss,bp-0x0C))));	// 92549 les     bx, [bp-0Ch] ;~ 28F0:243A
cs=0x28f0;eip=0x00243d; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 92550 mov     ax, es:[bx+8] ;~ 28F0:243D
cs=0x28f0;eip=0x002441; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 92551 mov     dx, es:[bx+0Ah] ;~ 28F0:2441
cs=0x28f0;eip=0x002445; 	T(MOV(cl, 2));	// 92552 mov     cl, 2 ;~ 28F0:2445
cs=0x28f0;eip=0x002447; 	R(CALLF(sub_10240,0));	// 92553 call    sub_10240 ;~ 28F0:2447
cs=0x28f0;eip=0x00244c; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 92554 les     bx, [bp+4] ;~ 28F0:244C
cs=0x28f0;eip=0x00244f; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x122))));	// 92555 cmp     dx, es:[bx+122h] ;~ 28F0:244F
cs=0x28f0;eip=0x002454; 	R(JL(loc_39949));	// 92556 jl      short loc_39949 ;~ 28F0:2454
cs=0x28f0;eip=0x002456; 	R(JG(loc_3993f));	// 92557 jg      short loc_3993F ;~ 28F0:2456
cs=0x28f0;eip=0x002458; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x120))));	// 92558 cmp     ax, es:[bx+120h] ;~ 28F0:2458
cs=0x28f0;eip=0x00245d; 	R(JBE(loc_39949));	// 92559 jbe     short loc_39949 ;~ 28F0:245D
loc_3993f:
	// 10315 
cs=0x28f0;eip=0x00245f; 	T(SUB(ax, ax));	// 92562 sub     ax, ax ;~ 28F0:245F
cs=0x28f0;eip=0x002461; 	X(MOV(*(dw*)(raddr(ss,bp-6)), ax));	// 92563 mov     [bp-6], ax ;~ 28F0:2461
cs=0x28f0;eip=0x002464; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 92564 mov     [bp-8], ax ;~ 28F0:2464
cs=0x28f0;eip=0x002467; 	R(JMP(loc_399b5));	// 92565 jmp     short loc_399B5 ;~ 28F0:2467
loc_39949:
	// 10316 
cs=0x28f0;eip=0x002469; 	T(MOV(ax, *(dw*)(raddr(ss,bp-8))));	// 92570 mov     ax, [bp-8] ;~ 28F0:2469
cs=0x28f0;eip=0x00246c; 	T(OR(ax, *(dw*)(raddr(ss,bp-6))));	// 92571 or      ax, [bp-6] ;~ 28F0:246C
cs=0x28f0;eip=0x00246f; 	R(JNZ(loc_39972));	// 92572 jnz     short loc_39972 ;~ 28F0:246F
cs=0x28f0;eip=0x002471; 	T(CMP(*(dw*)(raddr(ss,bp-0x12)), 0x5A0));	// 92573 cmp     word ptr [bp-12h], 5A0h ;~ 28F0:2471
cs=0x28f0;eip=0x002476; 	R(JG(loc_39965));	// 92574 jg      short loc_39965 ;~ 28F0:2476
cs=0x28f0;eip=0x002478; 	T(LES(bx, *(dw*)(raddr(ss,bp-0x10))));	// 92575 les     bx, [bp-10h] ;~ 28F0:2478
cs=0x28f0;eip=0x00247b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 92576 mov     ax, es:[bx+0Ch] ;~ 28F0:247B
cs=0x28f0;eip=0x00247f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 92577 mov     dx, es:[bx+0Eh] ;~ 28F0:247F
cs=0x28f0;eip=0x002483; 	R(JMP(loc_399af));	// 92578 jmp     short loc_399AF ;~ 28F0:2483
loc_39965:
	// 10317 
cs=0x28f0;eip=0x002485; 	T(LES(bx, *(dw*)(raddr(ss,bp-0x10))));	// 92582 les     bx, [bp-10h] ;~ 28F0:2485
cs=0x28f0;eip=0x002488; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 92583 mov     ax, es:[bx+8] ;~ 28F0:2488
cs=0x28f0;eip=0x00248c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 92584 mov     dx, es:[bx+0Ah] ;~ 28F0:248C
cs=0x28f0;eip=0x002490; 	R(JMP(loc_399af));	// 92585 jmp     short loc_399AF ;~ 28F0:2490
loc_39972:
	// 10318 
cs=0x28f0;eip=0x002492; 	X(PUSH(*(dw*)(raddr(ss,bp-6))));	// 92589 push    word ptr [bp-6] ;~ 28F0:2492
cs=0x28f0;eip=0x002495; 	X(PUSH(*(dw*)(raddr(ss,bp-8))));	// 92590 push    word ptr [bp-8] ;~ 28F0:2495
cs=0x28f0;eip=0x002498; 	T(MOV(ax, 0x0CFA0));	// 92591 mov     ax, 0CFA0h ;~ 28F0:2498
cs=0x28f0;eip=0x00249b; 	T(CWD);	// 92592 cwd ;~ 28F0:249B
cs=0x28f0;eip=0x00249c; 	X(PUSH(dx));	// 92593 push    dx ;~ 28F0:249C
cs=0x28f0;eip=0x00249d; 	X(PUSH(ax));	// 92594 push    ax ;~ 28F0:249D
cs=0x28f0;eip=0x00249e; 	X(PUSH(*(dw*)(raddr(ss,bp-0x12))));	// 92595 push    word ptr [bp-12h] ;~ 28F0:249E
cs=0x28f0;eip=0x0024a1; 	R(CALLF(sub_27c9e,0));	// 92596 call    sub_27C9E ;~ 28F0:24A1
cs=0x28f0;eip=0x0024a6; 	X(PUSH(dx));	// 92597 push    dx ;~ 28F0:24A6
cs=0x28f0;eip=0x0024a7; 	X(PUSH(ax));	// 92598 push    ax ;~ 28F0:24A7
cs=0x28f0;eip=0x0024a8; 	R(CALLF(sub_105c2,0));	// 92599 call    sub_105C2 ;~ 28F0:24A8
cs=0x28f0;eip=0x0024ad; 	X(PUSH(dx));	// 92600 push    dx ;~ 28F0:24AD
cs=0x28f0;eip=0x0024ae; 	X(PUSH(ax));	// 92601 push    ax ;~ 28F0:24AE
cs=0x28f0;eip=0x0024af; 	R(CALLF(sub_10526,0));	// 92602 call    sub_10526 ;~ 28F0:24AF
cs=0x28f0;eip=0x0024b4; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 92603 mov     [bp-8], ax ;~ 28F0:24B4
cs=0x28f0;eip=0x0024b7; 	X(MOV(*(dw*)(raddr(ss,bp-6)), dx));	// 92604 mov     [bp-6], dx ;~ 28F0:24B7
cs=0x28f0;eip=0x0024ba; 	T(CMP(*(dw*)(raddr(ss,bp-0x12)), 0x2D0));	// 92605 cmp     word ptr [bp-12h], 2D0h ;~ 28F0:24BA
cs=0x28f0;eip=0x0024bf; 	R(JLE(loc_399b5));	// 92606 jle     short loc_399B5 ;~ 28F0:24BF
cs=0x28f0;eip=0x0024c1; 	T(CMP(*(dw*)(raddr(ss,bp-0x12)), 0x870));	// 92607 cmp     word ptr [bp-12h], 870h ;~ 28F0:24C1
cs=0x28f0;eip=0x0024c6; 	R(JGE(loc_399b5));	// 92608 jge     short loc_399B5 ;~ 28F0:24C6
cs=0x28f0;eip=0x0024c8; 	T(NEG(ax));	// 92609 neg     ax ;~ 28F0:24C8
cs=0x28f0;eip=0x0024ca; 	T(ADC(dx, 0));	// 92610 adc     dx, 0 ;~ 28F0:24CA
cs=0x28f0;eip=0x0024cd; 	T(NEG(dx));	// 92611 neg     dx ;~ 28F0:24CD
loc_399af:
	// 10319 
cs=0x28f0;eip=0x0024cf; 	X(MOV(*(dw*)(raddr(ss,bp-8)), ax));	// 92615 mov     [bp-8], ax ;~ 28F0:24CF
cs=0x28f0;eip=0x0024d2; 	X(MOV(*(dw*)(raddr(ss,bp-6)), dx));	// 92616 mov     [bp-6], dx ;~ 28F0:24D2
loc_399b5:
	// 10320 
cs=0x28f0;eip=0x0024d5; 	T(LES(bx, *(dw*)(raddr(ss,bp-0x10))));	// 92620 les     bx, [bp-10h] ;~ 28F0:24D5
cs=0x28f0;eip=0x0024d8; 	T(MOV(ax, *(dw*)(raddr(ss,bp-8))));	// 92621 mov     ax, [bp-8] ;~ 28F0:24D8
cs=0x28f0;eip=0x0024db; 	T(MOV(dx, *(dw*)(raddr(ss,bp-6))));	// 92622 mov     dx, [bp-6] ;~ 28F0:24DB
cs=0x28f0;eip=0x0024de; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 92623 mov     es:[bx], ax ;~ 28F0:24DE
cs=0x28f0;eip=0x0024e1; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 92624 mov     es:[bx+2], dx ;~ 28F0:24E1
cs=0x28f0;eip=0x0024e5; 	X(PUSH(es));	// 92625 push    es ;~ 28F0:24E5
cs=0x28f0;eip=0x0024e6; 	X(PUSH(bx));	// 92626 push    bx ;~ 28F0:24E6
cs=0x28f0;eip=0x0024e7; 	R(CALL(sub_3bb03,0));	// 92627 call    sub_3BB03 ;~ 28F0:24E7
cs=0x28f0;eip=0x0024ea; 	T(MOV(sp, bp));	// 92628 mov     sp, bp ;~ 28F0:24EA
cs=0x28f0;eip=0x0024ec; 	X(POP(bp));	// 92629 pop     bp ;~ 28F0:24EC
cs=0x28f0;eip=0x0024ed; 	R(RETN(4));	// 92630 retn    4 ;~ 28F0:24ED
cs=0x28f0;eip=0x004670; 	X(PUSH(bp));	// 96605 push    bp ;~ 28F0:4670
cs=0x28f0;eip=0x004671; 	T(MOV(bp, sp));	// 96606 mov     bp, sp ;~ 28F0:4671
cs=0x28f0;eip=0x004673; 	T(LES(bx, *(dw*)(raddr(ss,bp+4))));	// 96607 les     bx, [bp+4] ;~ 28F0:4673
cs=0x28f0;eip=0x004676; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 96608 mov     ax, es:[bx] ;~ 28F0:4676
cs=0x28f0;eip=0x004679; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 96609 mov     dx, es:[bx+2] ;~ 28F0:4679
cs=0x28f0;eip=0x00467d; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), dx));	// 96610 cmp     es:[bx+1Ah], dx ;~ 28F0:467D
cs=0x28f0;eip=0x004681; 	R(JG(loc_3bb75));	// 96611 jg      short loc_3BB75 ;~ 28F0:4681
cs=0x28f0;eip=0x004683; 	R(JL(loc_3bb6b));	// 96612 jl      short loc_3BB6B ;~ 28F0:4683
cs=0x28f0;eip=0x004685; 	T(CMP(*(dw*)(raddr(es,bx+0x18)), ax));	// 96613 cmp     es:[bx+18h], ax ;~ 28F0:4685
cs=0x28f0;eip=0x004689; 	R(JNC(loc_3bb75));	// 96614 jnb     short loc_3BB75 ;~ 28F0:4689
loc_3bb6b:
	// 10554 
cs=0x28f0;eip=0x00468b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 96617 mov     ax, es:[bx+18h] ;~ 28F0:468B
cs=0x28f0;eip=0x00468f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 96618 mov     dx, es:[bx+1Ah] ;~ 28F0:468F
cs=0x28f0;eip=0x004693; 	R(JMP(loc_3bb92));	// 96619 jmp     short loc_3BB92 ;~ 28F0:4693
loc_3bb75:
	// 10555 
cs=0x28f0;eip=0x004695; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 96624 mov     ax, es:[bx] ;~ 28F0:4695
cs=0x28f0;eip=0x004698; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 96625 mov     dx, es:[bx+2] ;~ 28F0:4698
cs=0x28f0;eip=0x00469c; 	T(CMP(*(dw*)(raddr(es,bx+0x1E)), dx));	// 96626 cmp     es:[bx+1Eh], dx ;~ 28F0:469C
cs=0x28f0;eip=0x0046a0; 	R(JL(loc_3bb99));	// 96627 jl      short loc_3BB99 ;~ 28F0:46A0
cs=0x28f0;eip=0x0046a2; 	R(JG(loc_3bb8a));	// 96628 jg      short loc_3BB8A ;~ 28F0:46A2
cs=0x28f0;eip=0x0046a4; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), ax));	// 96629 cmp     es:[bx+1Ch], ax ;~ 28F0:46A4
cs=0x28f0;eip=0x0046a8; 	R(JBE(loc_3bb99));	// 96630 jbe     short loc_3BB99 ;~ 28F0:46A8
loc_3bb8a:
	// 10556 
cs=0x28f0;eip=0x0046aa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C))));	// 96633 mov     ax, es:[bx+1Ch] ;~ 28F0:46AA
cs=0x28f0;eip=0x0046ae; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E))));	// 96634 mov     dx, es:[bx+1Eh] ;~ 28F0:46AE
loc_3bb92:
	// 10557 
cs=0x28f0;eip=0x0046b2; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 96637 mov     es:[bx], ax ;~ 28F0:46B2
cs=0x28f0;eip=0x0046b5; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 96638 mov     es:[bx+2], dx ;~ 28F0:46B5
loc_3bb99:
	// 10558 
cs=0x28f0;eip=0x0046b9; 	X(POP(bp));	// 96642 pop     bp ;~ 28F0:46B9
cs=0x28f0;eip=0x0046ba; 	R(RETN(4));	// 96643 retn    4 ;~ 28F0:46BA
cs=0x28f0;eip=0x004a32; 	X(PUSH(bp));	// 97171 push    bp ;~ 28F0:4A32
cs=0x28f0;eip=0x004a33; 	T(MOV(bp, sp));	// 97172 mov     bp, sp ;~ 28F0:4A33
cs=0x28f0;eip=0x004a35; 	T(SUB(sp, 4));	// 97173 sub     sp, 4 ;~ 28F0:4A35
cs=0x28f0;eip=0x004a38; 	T(SUB(ax, ax));	// 97174 sub     ax, ax ;~ 28F0:4A38
cs=0x28f0;eip=0x004a3a; 	X(MOV(*(dw*)(raddr(ss,bp-2)), ax));	// 97175 mov     [bp-2], ax ;~ 28F0:4A3A
cs=0x28f0;eip=0x004a3d; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 97176 mov     [bp-4], ax ;~ 28F0:4A3D
cs=0x28f0;eip=0x004a40; 	T(CMP(*(dw*)(raddr(ss,bp+4)), ax));	// 97177 cmp     [bp+4], ax ;~ 28F0:4A40
cs=0x28f0;eip=0x004a43; 	R(JLE(loc_3bf74));	// 97178 jle     short loc_3BF74 ;~ 28F0:4A43
cs=0x28f0;eip=0x004a45; 	T(CMP(*(dw*)(raddr(ss,bp+4)), 0x64));	// 97179 cmp     word ptr [bp+4], 64h ; 'd' ;~ 28F0:4A45
cs=0x28f0;eip=0x004a49; 	R(JL(loc_3bf38));	// 97180 jl      short loc_3BF38 ;~ 28F0:4A49
cs=0x28f0;eip=0x004a4b; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 97181 les     bx, [bp+6] ;~ 28F0:4A4B
cs=0x28f0;eip=0x004a4e; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 97182 mov     ax, es:[bx+8] ;~ 28F0:4A4E
cs=0x28f0;eip=0x004a52; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 97183 mov     dx, es:[bx+0Ah] ;~ 28F0:4A52
cs=0x28f0;eip=0x004a56; 	R(JMP(loc_3bf5b));	// 97184 jmp     short loc_3BF5B ;~ 28F0:4A56
loc_3bf38:
	// 10591 
cs=0x28f0;eip=0x004a58; 	T(MOV(ax, 0x64));	// 97188 mov     ax, 64h ; 'd' ;~ 28F0:4A58
cs=0x28f0;eip=0x004a5b; 	T(CWD);	// 97189 cwd ;~ 28F0:4A5B
cs=0x28f0;eip=0x004a5c; 	X(PUSH(dx));	// 97190 push    dx ;~ 28F0:4A5C
cs=0x28f0;eip=0x004a5d; 	X(PUSH(ax));	// 97191 push    ax ;~ 28F0:4A5D
cs=0x28f0;eip=0x004a5e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 97192 mov     ax, [bp+4] ;~ 28F0:4A5E
cs=0x28f0;eip=0x004a61; 	T(CWD);	// 97193 cwd ;~ 28F0:4A61
cs=0x28f0;eip=0x004a62; 	X(PUSH(dx));	// 97194 push    dx ;~ 28F0:4A62
cs=0x28f0;eip=0x004a63; 	X(PUSH(ax));	// 97195 push    ax ;~ 28F0:4A63
cs=0x28f0;eip=0x004a64; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 97196 les     bx, [bp+6] ;~ 28F0:4A64
cs=0x28f0;eip=0x004a67; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 97197 push    word ptr es:[bx+0Ah] ;~ 28F0:4A67
cs=0x28f0;eip=0x004a6b; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 97198 push    word ptr es:[bx+8] ;~ 28F0:4A6B
cs=0x28f0;eip=0x004a6f; 	R(CALLF(sub_105c2,0));	// 97199 call    sub_105C2 ;~ 28F0:4A6F
cs=0x28f0;eip=0x004a74; 	X(PUSH(dx));	// 97200 push    dx ;~ 28F0:4A74
cs=0x28f0;eip=0x004a75; 	X(PUSH(ax));	// 97201 push    ax ;~ 28F0:4A75
cs=0x28f0;eip=0x004a76; 	R(CALLF(sub_10526,0));	// 97202 call    sub_10526 ;~ 28F0:4A76
loc_3bf5b:
	// 10592 
cs=0x28f0;eip=0x004a7b; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 97205 mov     [bp-4], ax ;~ 28F0:4A7B
cs=0x28f0;eip=0x004a7e; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 97206 mov     [bp-2], dx ;~ 28F0:4A7E
cs=0x28f0;eip=0x004a81; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 97207 push    word ptr [bp+8] ;~ 28F0:4A81
cs=0x28f0;eip=0x004a84; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 97208 push    word ptr [bp+6] ;~ 28F0:4A84
cs=0x28f0;eip=0x004a87; 	X(PUSH(dx));	// 97209 push    dx ;~ 28F0:4A87
cs=0x28f0;eip=0x004a88; 	X(PUSH(ax));	// 97210 push    ax ;~ 28F0:4A88
cs=0x28f0;eip=0x004a89; 	T(NEG(ax));	// 97211 neg     ax ;~ 28F0:4A89
cs=0x28f0;eip=0x004a8b; 	T(ADC(dx, 0));	// 97212 adc     dx, 0 ;~ 28F0:4A8B
cs=0x28f0;eip=0x004a8e; 	T(NEG(dx));	// 97213 neg     dx ;~ 28F0:4A8E
cs=0x28f0;eip=0x004a90; 	X(PUSH(dx));	// 97214 push    dx ;~ 28F0:4A90
cs=0x28f0;eip=0x004a91; 	X(PUSH(ax));	// 97215 push    ax ;~ 28F0:4A91
cs=0x28f0;eip=0x004a92; 	R(JMP(loc_3bfc5));	// 97216 jmp     short loc_3BFC5 ;~ 28F0:4A92
loc_3bf74:
	// 10593 
cs=0x28f0;eip=0x004a94; 	T(CMP(*(dw*)(raddr(ss,bp+4)), 0x0FF9C));	// 97220 cmp     word ptr [bp+4], 0FF9Ch ;~ 28F0:4A94
cs=0x28f0;eip=0x004a98; 	R(JG(loc_3bf87));	// 97221 jg      short loc_3BF87 ;~ 28F0:4A98
cs=0x28f0;eip=0x004a9a; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 97222 les     bx, [bp+6] ;~ 28F0:4A9A
cs=0x28f0;eip=0x004a9d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 97223 mov     ax, es:[bx+0Ch] ;~ 28F0:4A9D
cs=0x28f0;eip=0x004aa1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 97224 mov     dx, es:[bx+0Eh] ;~ 28F0:4AA1
cs=0x28f0;eip=0x004aa5; 	R(JMP(loc_3bfaa));	// 97225 jmp     short loc_3BFAA ;~ 28F0:4AA5
loc_3bf87:
	// 10594 
cs=0x28f0;eip=0x004aa7; 	T(MOV(ax, 0x0FF9C));	// 97229 mov     ax, 0FF9Ch ;~ 28F0:4AA7
cs=0x28f0;eip=0x004aaa; 	T(CWD);	// 97230 cwd ;~ 28F0:4AAA
cs=0x28f0;eip=0x004aab; 	X(PUSH(dx));	// 97231 push    dx ;~ 28F0:4AAB
cs=0x28f0;eip=0x004aac; 	X(PUSH(ax));	// 97232 push    ax ;~ 28F0:4AAC
cs=0x28f0;eip=0x004aad; 	T(MOV(ax, *(dw*)(raddr(ss,bp+4))));	// 97233 mov     ax, [bp+4] ;~ 28F0:4AAD
cs=0x28f0;eip=0x004ab0; 	T(CWD);	// 97234 cwd ;~ 28F0:4AB0
cs=0x28f0;eip=0x004ab1; 	X(PUSH(dx));	// 97235 push    dx ;~ 28F0:4AB1
cs=0x28f0;eip=0x004ab2; 	X(PUSH(ax));	// 97236 push    ax ;~ 28F0:4AB2
cs=0x28f0;eip=0x004ab3; 	T(LES(bx, *(dw*)(raddr(ss,bp+6))));	// 97237 les     bx, [bp+6] ;~ 28F0:4AB3
cs=0x28f0;eip=0x004ab6; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 97238 push    word ptr es:[bx+0Eh] ;~ 28F0:4AB6
cs=0x28f0;eip=0x004aba; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 97239 push    word ptr es:[bx+0Ch] ;~ 28F0:4ABA
cs=0x28f0;eip=0x004abe; 	R(CALLF(sub_105c2,0));	// 97240 call    sub_105C2 ;~ 28F0:4ABE
cs=0x28f0;eip=0x004ac3; 	X(PUSH(dx));	// 97241 push    dx ;~ 28F0:4AC3
cs=0x28f0;eip=0x004ac4; 	X(PUSH(ax));	// 97242 push    ax ;~ 28F0:4AC4
cs=0x28f0;eip=0x004ac5; 	R(CALLF(sub_10526,0));	// 97243 call    sub_10526 ;~ 28F0:4AC5
loc_3bfaa:
	// 10595 
cs=0x28f0;eip=0x004aca; 	X(MOV(*(dw*)(raddr(ss,bp-4)), ax));	// 97246 mov     [bp-4], ax ;~ 28F0:4ACA
cs=0x28f0;eip=0x004acd; 	X(MOV(*(dw*)(raddr(ss,bp-2)), dx));	// 97247 mov     [bp-2], dx ;~ 28F0:4ACD
cs=0x28f0;eip=0x004ad0; 	X(PUSH(*(dw*)(raddr(ss,bp+8))));	// 97248 push    word ptr [bp+8] ;~ 28F0:4AD0
cs=0x28f0;eip=0x004ad3; 	X(PUSH(*(dw*)(raddr(ss,bp+6))));	// 97249 push    word ptr [bp+6] ;~ 28F0:4AD3
cs=0x28f0;eip=0x004ad6; 	T(NEG(ax));	// 97250 neg     ax ;~ 28F0:4AD6
cs=0x28f0;eip=0x004ad8; 	T(ADC(dx, 0));	// 97251 adc     dx, 0 ;~ 28F0:4AD8
cs=0x28f0;eip=0x004adb; 	T(NEG(dx));	// 97252 neg     dx ;~ 28F0:4ADB
cs=0x28f0;eip=0x004add; 	X(PUSH(dx));	// 97253 push    dx ;~ 28F0:4ADD
cs=0x28f0;eip=0x004ade; 	X(PUSH(ax));	// 97254 push    ax ;~ 28F0:4ADE
cs=0x28f0;eip=0x004adf; 	X(PUSH(*(dw*)(raddr(ss,bp-2))));	// 97255 push    word ptr [bp-2] ;~ 28F0:4ADF
cs=0x28f0;eip=0x004ae2; 	X(PUSH(*(dw*)(raddr(ss,bp-4))));	// 97256 push    word ptr [bp-4] ;~ 28F0:4AE2
loc_3bfc5:
	// 10596 
cs=0x28f0;eip=0x004ae5; 	R(CALL(sub_3bb9d,0));	// 97259 call    sub_3BB9D ;~ 28F0:4AE5
cs=0x28f0;eip=0x004ae8; 	T(MOV(sp, bp));	// 97260 mov     sp, bp ;~ 28F0:4AE8
cs=0x28f0;eip=0x004aea; 	X(POP(bp));	// 97261 pop     bp ;~ 28F0:4AEA
cs=0x28f0;eip=0x004aeb; 	R(RETN(6));	// 97262 retn    6 ;~ 28F0:4AEB
sub_38229:
	// 89925 
#undef arg_0
#define arg_0 4
	// 89927 arg_0           = dword ptr  4 ;~ 28F0:0D49
cs=0x28f0;eip=0x000d49; 	X(PUSH(bp));	// 89929 push    bp ;~ 28F0:0D49
cs=0x28f0;eip=0x000d4a; 	T(MOV(bp, sp));	// 89930 mov     bp, sp ;~ 28F0:0D4A
cs=0x28f0;eip=0x000d4c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89931 les     bx, [bp+arg_0] ;~ 28F0:0D4C
cs=0x28f0;eip=0x000d4f; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 89932 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0D4F
cs=0x28f0;eip=0x000d55; 	R(JNZ(loc_38243));	// 89933 jnz     short loc_38243 ;~ 28F0:0D55
cs=0x28f0;eip=0x000d57; 	T(SUB(ax, ax));	// 89934 sub     ax, ax ;~ 28F0:0D57
cs=0x28f0;eip=0x000d59; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), ax));	// 89935 mov     es:[bx+0E2h], ax ;~ 28F0:0D59
cs=0x28f0;eip=0x000d5e; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 89936 mov     es:[bx+0E0h], ax ;~ 28F0:0D5E
loc_38243:
	// 10148 
cs=0x28f0;eip=0x000d63; 	X(POP(bp));	// 89939 pop     bp ;~ 28F0:0D63
cs=0x28f0;eip=0x000d64; 	R(RETN(4));	// 89940 retn    4 ;~ 28F0:0D64
sub_38247:
	// 89948 
#undef arg_0
#define arg_0 6
	// 89951 arg_0           = dword ptr  6 ;~ 28F0:0D67
#undef arg_4
#define arg_4 0x0A
	// 89952 arg_4           = word ptr  0Ah ;~ 28F0:0D67
#undef arg_6
#define arg_6 0x0C
	// 89953 arg_6           = word ptr  0Ch ;~ 28F0:0D67
cs=0x28f0;eip=0x000d67; 	X(PUSH(bp));	// 89955 push    bp ;~ 28F0:0D67
cs=0x28f0;eip=0x000d68; 	T(MOV(bp, sp));	// 89956 mov     bp, sp ;~ 28F0:0D68
cs=0x28f0;eip=0x000d6a; 	X(PUSH(si));	// 89957 push    si ;~ 28F0:0D6A
cs=0x28f0;eip=0x000d6b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0));	// 89958 cmp     [bp+arg_6], 0 ;~ 28F0:0D6B
cs=0x28f0;eip=0x000d6f; 	R(JLE(loc_38257));	// 89959 jle     short loc_38257 ;~ 28F0:0D6F
cs=0x28f0;eip=0x000d71; 	T(CMP(*(dw*)(raddr(ss,bp+arg_6)), 0x64));	// 89960 cmp     [bp+arg_6], 64h ; 'd' ;~ 28F0:0D71
cs=0x28f0;eip=0x000d75; 	R(JLE(loc_3825c));	// 89961 jle     short loc_3825C ;~ 28F0:0D75
loc_38257:
	// 10149 
cs=0x28f0;eip=0x000d77; 	T(SUB(ax, ax));	// 89964 sub     ax, ax ;~ 28F0:0D77
cs=0x28f0;eip=0x000d79; 	R(JMP(loc_3842c));	// 89965 jmp     loc_3842C ;~ 28F0:0D79
loc_3825c:
	// 10150 
cs=0x28f0;eip=0x000d7c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 89969 mov     ax, [bp+arg_4] ;~ 28F0:0D7C
cs=0x28f0;eip=0x000d7f; 	T(CWD);	// 89970 cwd ;~ 28F0:0D7F
cs=0x28f0;eip=0x000d80; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 89971 les     bx, [bp+arg_0] ;~ 28F0:0D80
cs=0x28f0;eip=0x000d83; 	X(OR(*(dw*)(raddr(es,bx+0x340)), ax));	// 89972 or      es:[bx+340h], ax ;~ 28F0:0D83
cs=0x28f0;eip=0x000d88; 	X(OR(*(dw*)(raddr(es,bx+0x342)), dx));	// 89973 or      es:[bx+342h], dx ;~ 28F0:0D88
cs=0x28f0;eip=0x000d8d; 	T(CMP(ax, 1));	// 89974 cmp     ax, 1 ;~ 28F0:0D8D
cs=0x28f0;eip=0x000d90; 	R(JNZ(loc_38275));	// 89975 jnz     short loc_38275 ;~ 28F0:0D90
cs=0x28f0;eip=0x000d92; 	R(JMP(loc_3832f));	// 89976 jmp     loc_3832F ;~ 28F0:0D92
loc_38275:
	// 10151 
cs=0x28f0;eip=0x000d95; 	T(CMP(ax, 2));	// 89980 cmp     ax, 2 ;~ 28F0:0D95
cs=0x28f0;eip=0x000d98; 	R(JZ(loc_3829d));	// 89981 jz      short loc_3829D ;~ 28F0:0D98
cs=0x28f0;eip=0x000d9a; 	T(CMP(ax, 4));	// 89982 cmp     ax, 4 ;~ 28F0:0D9A
cs=0x28f0;eip=0x000d9d; 	R(JNZ(loc_38282));	// 89983 jnz     short loc_38282 ;~ 28F0:0D9D
cs=0x28f0;eip=0x000d9f; 	R(JMP(loc_3838a));	// 89984 jmp     loc_3838A ;~ 28F0:0D9F
loc_38282:
	// 10152 
cs=0x28f0;eip=0x000da2; 	T(CMP(ax, 8));	// 89988 cmp     ax, 8 ;~ 28F0:0DA2
cs=0x28f0;eip=0x000da5; 	R(JNZ(loc_3828a));	// 89989 jnz     short loc_3828A ;~ 28F0:0DA5
cs=0x28f0;eip=0x000da7; 	R(JMP(loc_38329));	// 89990 jmp     loc_38329 ;~ 28F0:0DA7
loc_3828a:
	// 10153 
cs=0x28f0;eip=0x000daa; 	T(CMP(ax, 0x10));	// 89994 cmp     ax, 10h ;~ 28F0:0DAA
cs=0x28f0;eip=0x000dad; 	R(JNZ(loc_38292));	// 89995 jnz     short loc_38292 ;~ 28F0:0DAD
cs=0x28f0;eip=0x000daf; 	R(JMP(loc_38329));	// 89996 jmp     loc_38329 ;~ 28F0:0DAF
loc_38292:
	// 10154 
cs=0x28f0;eip=0x000db2; 	T(CMP(ax, 0x20));	// 90000 cmp     ax, 20h ; ' ' ;~ 28F0:0DB2
cs=0x28f0;eip=0x000db5; 	R(JNZ(loc_3829a));	// 90001 jnz     short loc_3829A ;~ 28F0:0DB5
cs=0x28f0;eip=0x000db7; 	R(JMP(loc_383ef));	// 90002 jmp     loc_383EF ;~ 28F0:0DB7
loc_3829a:
	// 10155 
cs=0x28f0;eip=0x000dba; 	R(JMP(loc_38329));	// 90006 jmp     loc_38329 ;~ 28F0:0DBA
loc_3829d:
	// 10156 
cs=0x28f0;eip=0x000dbd; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90010 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:0DBD
cs=0x28f0;eip=0x000dc3; 	R(JNZ(loc_382fa));	// 90011 jnz     short loc_382FA ;~ 28F0:0DC3
cs=0x28f0;eip=0x000dc5; 	T(MOV(ax, 0x64));	// 90012 mov     ax, 64h ; 'd' ;~ 28F0:0DC5
cs=0x28f0;eip=0x000dc8; 	T(CWD);	// 90013 cwd ;~ 28F0:0DC8
cs=0x28f0;eip=0x000dc9; 	X(PUSH(dx));	// 90014 push    dx ;~ 28F0:0DC9
cs=0x28f0;eip=0x000dca; 	X(PUSH(ax));	// 90015 push    ax ;~ 28F0:0DCA
cs=0x28f0;eip=0x000dcb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90016 mov     ax, [bp+arg_6] ;~ 28F0:0DCB
cs=0x28f0;eip=0x000dce; 	T(CWD);	// 90017 cwd ;~ 28F0:0DCE
cs=0x28f0;eip=0x000dcf; 	X(PUSH(dx));	// 90018 push    dx ;~ 28F0:0DCF
cs=0x28f0;eip=0x000dd0; 	X(PUSH(ax));	// 90019 push    ax ;~ 28F0:0DD0
cs=0x28f0;eip=0x000dd1; 	X(PUSH(*(dw*)(raddr(es,bx+0x12A))));	// 90020 push    word ptr es:[bx+12Ah] ;~ 28F0:0DD1
cs=0x28f0;eip=0x000dd6; 	X(PUSH(*(dw*)(raddr(es,bx+0x128))));	// 90021 push    word ptr es:[bx+128h] ;~ 28F0:0DD6
cs=0x28f0;eip=0x000ddb; 	R(CALLF(sub_105c2,0));	// 90022 call    sub_105C2 ;~ 28F0:0DDB
cs=0x28f0;eip=0x000de0; 	X(PUSH(dx));	// 90023 push    dx ;~ 28F0:0DE0
cs=0x28f0;eip=0x000de1; 	X(PUSH(ax));	// 90024 push    ax ;~ 28F0:0DE1
cs=0x28f0;eip=0x000de2; 	R(CALLF(sub_10526,0));	// 90025 call    sub_10526 ;~ 28F0:0DE2
cs=0x28f0;eip=0x000de7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90026 les     bx, [bp+arg_0] ;~ 28F0:0DE7
cs=0x28f0;eip=0x000dea; 	X(SUB(*(dw*)(raddr(es,bx+0x128)), ax));	// 90027 sub     es:[bx+128h], ax ;~ 28F0:0DEA
cs=0x28f0;eip=0x000def; 	X(SBB(*(dw*)(raddr(es,bx+0x12A)), dx));	// 90028 sbb     es:[bx+12Ah], dx ;~ 28F0:0DEF
cs=0x28f0;eip=0x000df4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 90029 mov     ax, es:[bx+128h] ;~ 28F0:0DF4
cs=0x28f0;eip=0x000df9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 90030 mov     dx, es:[bx+12Ah] ;~ 28F0:0DF9
cs=0x28f0;eip=0x000dfe; 	T(OR(dx, dx));	// 90031 or      dx, dx ;~ 28F0:0DFE
cs=0x28f0;eip=0x000e00; 	R(JG(loc_382ee));	// 90032 jg      short loc_382EE ;~ 28F0:0E00
cs=0x28f0;eip=0x000e02; 	R(JL(loc_382e9));	// 90033 jl      short loc_382E9 ;~ 28F0:0E02
cs=0x28f0;eip=0x000e04; 	T(CMP(ax, 0x6400));	// 90034 cmp     ax, 6400h ;~ 28F0:0E04
cs=0x28f0;eip=0x000e07; 	R(JNC(loc_382ee));	// 90035 jnb     short loc_382EE ;~ 28F0:0E07
loc_382e9:
	// 10157 
cs=0x28f0;eip=0x000e09; 	T(SUB(dx, dx));	// 90038 sub     dx, dx ;~ 28F0:0E09
cs=0x28f0;eip=0x000e0b; 	T(MOV(ax, 0x6400));	// 90039 mov     ax, 6400h ;~ 28F0:0E0B
loc_382ee:
	// 10158 
cs=0x28f0;eip=0x000e0e; 	X(MOV(*(dw*)(raddr(es,bx+0x128)), ax));	// 90043 mov     es:[bx+128h], ax ;~ 28F0:0E0E
cs=0x28f0;eip=0x000e13; 	X(MOV(*(dw*)(raddr(es,bx+0x12A)), dx));	// 90044 mov     es:[bx+12Ah], dx ;~ 28F0:0E13
cs=0x28f0;eip=0x000e18; 	R(JMP(loc_38329));	// 90045 jmp     short loc_38329 ;~ 28F0:0E18
loc_382fa:
	// 10159 
cs=0x28f0;eip=0x000e1a; 	T(MOV(ax, 0x64));	// 90049 mov     ax, 64h ; 'd' ;~ 28F0:0E1A
cs=0x28f0;eip=0x000e1d; 	T(CWD);	// 90050 cwd ;~ 28F0:0E1D
cs=0x28f0;eip=0x000e1e; 	X(PUSH(dx));	// 90051 push    dx ;~ 28F0:0E1E
cs=0x28f0;eip=0x000e1f; 	X(PUSH(ax));	// 90052 push    ax ;~ 28F0:0E1F
cs=0x28f0;eip=0x000e20; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90053 mov     ax, [bp+arg_6] ;~ 28F0:0E20
cs=0x28f0;eip=0x000e23; 	T(CWD);	// 90054 cwd ;~ 28F0:0E23
cs=0x28f0;eip=0x000e24; 	X(PUSH(dx));	// 90055 push    dx ;~ 28F0:0E24
cs=0x28f0;eip=0x000e25; 	X(PUSH(ax));	// 90056 push    ax ;~ 28F0:0E25
cs=0x28f0;eip=0x000e26; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E8))));	// 90057 push    word ptr es:[bx+2E8h] ;~ 28F0:0E26
cs=0x28f0;eip=0x000e2b; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E6))));	// 90058 push    word ptr es:[bx+2E6h] ;~ 28F0:0E2B
cs=0x28f0;eip=0x000e30; 	R(CALLF(sub_105c2,0));	// 90059 call    sub_105C2 ;~ 28F0:0E30
cs=0x28f0;eip=0x000e35; 	X(PUSH(dx));	// 90060 push    dx ;~ 28F0:0E35
cs=0x28f0;eip=0x000e36; 	X(PUSH(ax));	// 90061 push    ax ;~ 28F0:0E36
cs=0x28f0;eip=0x000e37; 	R(CALLF(sub_10526,0));	// 90062 call    sub_10526 ;~ 28F0:0E37
cs=0x28f0;eip=0x000e3c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90063 les     bx, [bp+arg_0] ;~ 28F0:0E3C
cs=0x28f0;eip=0x000e3f; 	X(ADD(*(dw*)(raddr(es,bx+0x2E6)), ax));	// 90064 add     es:[bx+2E6h], ax ;~ 28F0:0E3F
cs=0x28f0;eip=0x000e44; 	X(ADC(*(dw*)(raddr(es,bx+0x2E8)), dx));	// 90065 adc     es:[bx+2E8h], dx ;~ 28F0:0E44
loc_38329:
	// 10160 
cs=0x28f0;eip=0x000e49; 	T(MOV(ax, 1));	// 90069 mov     ax, 1 ;~ 28F0:0E49
cs=0x28f0;eip=0x000e4c; 	R(JMP(loc_3842c));	// 90070 jmp     loc_3842C ;~ 28F0:0E4C
loc_3832f:
	// 10161 
cs=0x28f0;eip=0x000e4f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90074 mov     ax, [bp+arg_6] ;~ 28F0:0E4F
cs=0x28f0;eip=0x000e52; 	T(CWD);	// 90075 cwd ;~ 28F0:0E52
cs=0x28f0;eip=0x000e53; 	T(MOV(dh, dl));	// 90076 mov     dh, dl ;~ 28F0:0E53
cs=0x28f0;eip=0x000e55; 	T(MOV(dl, ah));	// 90077 mov     dl, ah ;~ 28F0:0E55
cs=0x28f0;eip=0x000e57; 	T(MOV(ah, al));	// 90078 mov     ah, al ;~ 28F0:0E57
cs=0x28f0;eip=0x000e59; 	T(SUB(al, al));	// 90079 sub     al, al ;~ 28F0:0E59
cs=0x28f0;eip=0x000e5b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90080 les     bx, [bp+arg_0] ;~ 28F0:0E5B
cs=0x28f0;eip=0x000e5e; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x234))));	// 90081 mov     cx, es:[bx+234h] ;~ 28F0:0E5E
cs=0x28f0;eip=0x000e63; 	T(MOV(si, *(dw*)(raddr(es,bx+0x236))));	// 90082 mov     si, es:[bx+236h] ;~ 28F0:0E63
cs=0x28f0;eip=0x000e68; 	T(SUB(cx, ax));	// 90083 sub     cx, ax ;~ 28F0:0E68
cs=0x28f0;eip=0x000e6a; 	T(SBB(si, dx));	// 90084 sbb     si, dx ;~ 28F0:0E6A
cs=0x28f0;eip=0x000e6c; 	T(OR(si, si));	// 90085 or      si, si ;~ 28F0:0E6C
cs=0x28f0;eip=0x000e6e; 	R(JG(loc_38356));	// 90086 jg      short loc_38356 ;~ 28F0:0E6E
cs=0x28f0;eip=0x000e70; 	R(JGE(loc_38356));	// 90087 jge     short loc_38356 ;~ 28F0:0E70
cs=0x28f0;eip=0x000e72; 	T(SUB(si, si));	// 90088 sub     si, si ;~ 28F0:0E72
cs=0x28f0;eip=0x000e74; 	T(SUB(cx, cx));	// 90089 sub     cx, cx ;~ 28F0:0E74
loc_38356:
	// 10162 
cs=0x28f0;eip=0x000e76; 	X(MOV(*(dw*)(raddr(es,bx+0x234)), cx));	// 90093 mov     es:[bx+234h], cx ;~ 28F0:0E76
cs=0x28f0;eip=0x000e7b; 	X(MOV(*(dw*)(raddr(es,bx+0x236)), si));	// 90094 mov     es:[bx+236h], si ;~ 28F0:0E7B
cs=0x28f0;eip=0x000e80; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 90095 mov     ax, es:[bx+21Ch] ;~ 28F0:0E80
cs=0x28f0;eip=0x000e85; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 90096 mov     dx, es:[bx+21Eh] ;~ 28F0:0E85
cs=0x28f0;eip=0x000e8a; 	T(CMP(dx, si));	// 90097 cmp     dx, si ;~ 28F0:0E8A
cs=0x28f0;eip=0x000e8c; 	R(JL(loc_3837e));	// 90098 jl      short loc_3837E ;~ 28F0:0E8C
cs=0x28f0;eip=0x000e8e; 	R(JG(loc_38374));	// 90099 jg      short loc_38374 ;~ 28F0:0E8E
cs=0x28f0;eip=0x000e90; 	T(CMP(ax, cx));	// 90100 cmp     ax, cx ;~ 28F0:0E90
cs=0x28f0;eip=0x000e92; 	R(JBE(loc_3837e));	// 90101 jbe     short loc_3837E ;~ 28F0:0E92
loc_38374:
	// 10163 
cs=0x28f0;eip=0x000e94; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x236))));	// 90104 mov     dx, es:[bx+236h] ;~ 28F0:0E94
cs=0x28f0;eip=0x000e99; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x234))));	// 90105 mov     ax, es:[bx+234h] ;~ 28F0:0E99
loc_3837e:
	// 10164 
cs=0x28f0;eip=0x000e9e; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 90109 mov     es:[bx+21Ch], ax ;~ 28F0:0E9E
cs=0x28f0;eip=0x000ea3; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 90110 mov     es:[bx+21Eh], dx ;~ 28F0:0EA3
cs=0x28f0;eip=0x000ea8; 	R(JMP(loc_38329));	// 90111 jmp     short loc_38329 ;~ 28F0:0EA8
loc_3838a:
	// 10165 
cs=0x28f0;eip=0x000eaa; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90115 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0EAA
cs=0x28f0;eip=0x000eb0; 	R(JNZ(loc_38329));	// 90116 jnz     short loc_38329 ;~ 28F0:0EB0
cs=0x28f0;eip=0x000eb2; 	T(MOV(ax, 0x64));	// 90117 mov     ax, 64h ; 'd' ;~ 28F0:0EB2
cs=0x28f0;eip=0x000eb5; 	T(CWD);	// 90118 cwd ;~ 28F0:0EB5
cs=0x28f0;eip=0x000eb6; 	X(PUSH(dx));	// 90119 push    dx ;~ 28F0:0EB6
cs=0x28f0;eip=0x000eb7; 	X(PUSH(ax));	// 90120 push    ax ;~ 28F0:0EB7
cs=0x28f0;eip=0x000eb8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90121 mov     ax, [bp+arg_6] ;~ 28F0:0EB8
cs=0x28f0;eip=0x000ebb; 	T(CWD);	// 90122 cwd ;~ 28F0:0EBB
cs=0x28f0;eip=0x000ebc; 	X(PUSH(dx));	// 90123 push    dx ;~ 28F0:0EBC
cs=0x28f0;eip=0x000ebd; 	X(PUSH(ax));	// 90124 push    ax ;~ 28F0:0EBD
cs=0x28f0;eip=0x000ebe; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 90125 push    word ptr es:[bx+0Ah] ;~ 28F0:0EBE
cs=0x28f0;eip=0x000ec2; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 90126 push    word ptr es:[bx+8] ;~ 28F0:0EC2
cs=0x28f0;eip=0x000ec6; 	R(CALLF(sub_105c2,0));	// 90127 call    sub_105C2 ;~ 28F0:0EC6
cs=0x28f0;eip=0x000ecb; 	X(PUSH(dx));	// 90128 push    dx ;~ 28F0:0ECB
cs=0x28f0;eip=0x000ecc; 	X(PUSH(ax));	// 90129 push    ax ;~ 28F0:0ECC
cs=0x28f0;eip=0x000ecd; 	R(CALLF(sub_10526,0));	// 90130 call    sub_10526 ;~ 28F0:0ECD
cs=0x28f0;eip=0x000ed2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90131 les     bx, [bp+arg_0] ;~ 28F0:0ED2
cs=0x28f0;eip=0x000ed5; 	X(SUB(*(dw*)(raddr(es,bx+8)), ax));	// 90132 sub     es:[bx+8], ax ;~ 28F0:0ED5
cs=0x28f0;eip=0x000ed9; 	X(SBB(*(dw*)(raddr(es,bx+0x0A)), dx));	// 90133 sbb     es:[bx+0Ah], dx ;~ 28F0:0ED9
cs=0x28f0;eip=0x000edd; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 90134 mov     ax, es:[bx+8] ;~ 28F0:0EDD
cs=0x28f0;eip=0x000ee1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 90135 mov     dx, es:[bx+0Ah] ;~ 28F0:0EE1
cs=0x28f0;eip=0x000ee5; 	T(OR(dx, dx));	// 90136 or      dx, dx ;~ 28F0:0EE5
cs=0x28f0;eip=0x000ee7; 	R(JG(loc_383d5));	// 90137 jg      short loc_383D5 ;~ 28F0:0EE7
cs=0x28f0;eip=0x000ee9; 	R(JL(loc_383d0));	// 90138 jl      short loc_383D0 ;~ 28F0:0EE9
cs=0x28f0;eip=0x000eeb; 	T(CMP(ax, 0x0A00));	// 90139 cmp     ax, 0A00h ;~ 28F0:0EEB
cs=0x28f0;eip=0x000eee; 	R(JNC(loc_383d5));	// 90140 jnb     short loc_383D5 ;~ 28F0:0EEE
loc_383d0:
	// 10166 
cs=0x28f0;eip=0x000ef0; 	T(SUB(dx, dx));	// 90143 sub     dx, dx ;~ 28F0:0EF0
cs=0x28f0;eip=0x000ef2; 	T(MOV(ax, 0x0A00));	// 90144 mov     ax, 0A00h ;~ 28F0:0EF2
loc_383d5:
	// 10167 
cs=0x28f0;eip=0x000ef5; 	X(MOV(*(dw*)(raddr(es,bx+8)), ax));	// 90148 mov     es:[bx+8], ax ;~ 28F0:0EF5
cs=0x28f0;eip=0x000ef9; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), dx));	// 90149 mov     es:[bx+0Ah], dx ;~ 28F0:0EF9
cs=0x28f0;eip=0x000efd; 	T(NEG(ax));	// 90150 neg     ax ;~ 28F0:0EFD
cs=0x28f0;eip=0x000eff; 	T(ADC(dx, 0));	// 90151 adc     dx, 0 ;~ 28F0:0EFF
cs=0x28f0;eip=0x000f02; 	T(NEG(dx));	// 90152 neg     dx ;~ 28F0:0F02
cs=0x28f0;eip=0x000f04; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), ax));	// 90153 mov     es:[bx+0Ch], ax ;~ 28F0:0F04
cs=0x28f0;eip=0x000f08; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), dx));	// 90154 mov     es:[bx+0Eh], dx ;~ 28F0:0F08
cs=0x28f0;eip=0x000f0c; 	R(JMP(loc_38329));	// 90155 jmp     loc_38329 ;~ 28F0:0F0C
loc_383ef:
	// 10168 
cs=0x28f0;eip=0x000f0f; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90159 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:0F0F
cs=0x28f0;eip=0x000f15; 	R(JZ(loc_383fa));	// 90160 jz      short loc_383FA ;~ 28F0:0F15
cs=0x28f0;eip=0x000f17; 	R(JMP(loc_38329));	// 90161 jmp     loc_38329 ;~ 28F0:0F17
loc_383fa:
	// 10169 
cs=0x28f0;eip=0x000f1a; 	T(MOV(ax, 0x64));	// 90165 mov     ax, 64h ; 'd' ;~ 28F0:0F1A
cs=0x28f0;eip=0x000f1d; 	T(CWD);	// 90166 cwd ;~ 28F0:0F1D
cs=0x28f0;eip=0x000f1e; 	X(PUSH(dx));	// 90167 push    dx ;~ 28F0:0F1E
cs=0x28f0;eip=0x000f1f; 	X(PUSH(ax));	// 90168 push    ax ;~ 28F0:0F1F
cs=0x28f0;eip=0x000f20; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 90169 mov     ax, [bp+arg_6] ;~ 28F0:0F20
cs=0x28f0;eip=0x000f23; 	T(CWD);	// 90170 cwd ;~ 28F0:0F23
cs=0x28f0;eip=0x000f24; 	X(PUSH(dx));	// 90171 push    dx ;~ 28F0:0F24
cs=0x28f0;eip=0x000f25; 	X(PUSH(ax));	// 90172 push    ax ;~ 28F0:0F25
cs=0x28f0;eip=0x000f26; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E4))));	// 90173 push    word ptr es:[bx+2E4h] ;~ 28F0:0F26
cs=0x28f0;eip=0x000f2b; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E2))));	// 90174 push    word ptr es:[bx+2E2h] ;~ 28F0:0F2B
cs=0x28f0;eip=0x000f30; 	R(CALLF(sub_105c2,0));	// 90175 call    sub_105C2 ;~ 28F0:0F30
cs=0x28f0;eip=0x000f35; 	X(PUSH(dx));	// 90176 push    dx ;~ 28F0:0F35
cs=0x28f0;eip=0x000f36; 	X(PUSH(ax));	// 90177 push    ax ;~ 28F0:0F36
cs=0x28f0;eip=0x000f37; 	R(CALLF(sub_10526,0));	// 90178 call    sub_10526 ;~ 28F0:0F37
cs=0x28f0;eip=0x000f3c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90179 les     bx, [bp+arg_0] ;~ 28F0:0F3C
cs=0x28f0;eip=0x000f3f; 	X(SUB(*(dw*)(raddr(es,bx+0x2E2)), ax));	// 90180 sub     es:[bx+2E2h], ax ;~ 28F0:0F3F
cs=0x28f0;eip=0x000f44; 	X(SBB(*(dw*)(raddr(es,bx+0x2E4)), dx));	// 90181 sbb     es:[bx+2E4h], dx ;~ 28F0:0F44
cs=0x28f0;eip=0x000f49; 	R(JMP(loc_38329));	// 90182 jmp     loc_38329 ;~ 28F0:0F49
loc_3842c:
	// 10170 
cs=0x28f0;eip=0x000f4c; 	X(POP(si));	// 90187 pop     si ;~ 28F0:0F4C
cs=0x28f0;eip=0x000f4d; 	X(POP(bp));	// 90188 pop     bp ;~ 28F0:0F4D
cs=0x28f0;eip=0x000f4e; 	R(RETF(0));	// 90189 retf ;~ 28F0:0F4E
sub_3842f:
	// 90197 
#undef var_2
#define var_2 -2
	// 90200 var_2           = word ptr -2 ;~ 28F0:0F4F
#undef arg_0
#define arg_0 4
	// 90201 arg_0           = word ptr  4 ;~ 28F0:0F4F
#undef arg_2
#define arg_2 6
	// 90202 arg_2           = word ptr  6 ;~ 28F0:0F4F
#undef arg_4
#define arg_4 8
	// 90203 arg_4           = word ptr  8 ;~ 28F0:0F4F
#undef arg_6
#define arg_6 0x0A
	// 90204 arg_6           = dword ptr  0Ah ;~ 28F0:0F4F
cs=0x28f0;eip=0x000f4f; 	X(PUSH(bp));	// 90206 push    bp ;~ 28F0:0F4F
cs=0x28f0;eip=0x000f50; 	T(MOV(bp, sp));	// 90207 mov     bp, sp ;~ 28F0:0F50
cs=0x28f0;eip=0x000f52; 	T(SUB(sp, 2));	// 90208 sub     sp, 2 ;~ 28F0:0F52
cs=0x28f0;eip=0x000f55; 	X(PUSH(di));	// 90209 push    di ;~ 28F0:0F55
cs=0x28f0;eip=0x000f56; 	X(PUSH(si));	// 90210 push    si ;~ 28F0:0F56
cs=0x28f0;eip=0x000f57; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 0));	// 90211 mov     [bp+var_2], 0 ;~ 28F0:0F57
cs=0x28f0;eip=0x000f5c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 90212 mov     ax, word ptr [bp+arg_6] ;~ 28F0:0F5C
cs=0x28f0;eip=0x000f5f; 	T(OR(ax, *(dw*)((dw*)(raddr(ss,bp+arg_6+2)))));	// 90213 or      ax, word ptr [bp+arg_6+2] ;~ 28F0:0F5F
cs=0x28f0;eip=0x000f62; 	R(JNZ(loc_38447));	// 90214 jnz     short loc_38447 ;~ 28F0:0F62
cs=0x28f0;eip=0x000f64; 	R(JMP(loc_3855c));	// 90215 jmp     loc_3855C ;~ 28F0:0F64
loc_38447:
	// 10171 
cs=0x28f0;eip=0x000f67; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 0));	// 90219 cmp     [bp+arg_4], 0 ;~ 28F0:0F67
cs=0x28f0;eip=0x000f6b; 	R(JGE(loc_38450));	// 90220 jge     short loc_38450 ;~ 28F0:0F6B
cs=0x28f0;eip=0x000f6d; 	R(JMP(loc_3855c));	// 90221 jmp     loc_3855C ;~ 28F0:0F6D
loc_38450:
	// 10172 
cs=0x28f0;eip=0x000f70; 	T(CMP(*(dw*)(raddr(ss,bp+arg_4)), 7));	// 90225 cmp     [bp+arg_4], 7 ;~ 28F0:0F70
cs=0x28f0;eip=0x000f74; 	R(JLE(loc_38459));	// 90226 jle     short loc_38459 ;~ 28F0:0F74
cs=0x28f0;eip=0x000f76; 	R(JMP(loc_3855c));	// 90227 jmp     loc_3855C ;~ 28F0:0F76
loc_38459:
	// 10173 
cs=0x28f0;eip=0x000f79; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90231 mov     ax, [bp+arg_4] ;~ 28F0:0F79
cs=0x28f0;eip=0x000f7c; 	T(CMP(ax, 1));	// 90232 cmp     ax, 1 ;~ 28F0:0F7C
cs=0x28f0;eip=0x000f7f; 	R(JZ(loc_38484));	// 90233 jz      short loc_38484 ;~ 28F0:0F7F
cs=0x28f0;eip=0x000f81; 	T(CMP(ax, 2));	// 90234 cmp     ax, 2 ;~ 28F0:0F81
cs=0x28f0;eip=0x000f84; 	R(JNZ(loc_38469));	// 90235 jnz     short loc_38469 ;~ 28F0:0F84
cs=0x28f0;eip=0x000f86; 	R(JMP(loc_38562));	// 90236 jmp     loc_38562 ;~ 28F0:0F86
loc_38469:
	// 10174 
cs=0x28f0;eip=0x000f89; 	T(CMP(ax, 5));	// 90240 cmp     ax, 5 ;~ 28F0:0F89
cs=0x28f0;eip=0x000f8c; 	R(JNZ(loc_38471));	// 90241 jnz     short loc_38471 ;~ 28F0:0F8C
cs=0x28f0;eip=0x000f8e; 	R(JMP(loc_3871a));	// 90242 jmp     loc_3871A ;~ 28F0:0F8E
loc_38471:
	// 10175 
cs=0x28f0;eip=0x000f91; 	T(CMP(ax, 6));	// 90246 cmp     ax, 6 ;~ 28F0:0F91
cs=0x28f0;eip=0x000f94; 	R(JNZ(loc_38479));	// 90247 jnz     short loc_38479 ;~ 28F0:0F94
cs=0x28f0;eip=0x000f96; 	R(JMP(loc_38749));	// 90248 jmp     loc_38749 ;~ 28F0:0F96
loc_38479:
	// 10176 
cs=0x28f0;eip=0x000f99; 	T(CMP(ax, 7));	// 90252 cmp     ax, 7 ;~ 28F0:0F99
cs=0x28f0;eip=0x000f9c; 	R(JNZ(loc_38481));	// 90253 jnz     short loc_38481 ;~ 28F0:0F9C
cs=0x28f0;eip=0x000f9e; 	R(JMP(loc_3880a));	// 90254 jmp     loc_3880A ;~ 28F0:0F9E
loc_38481:
	// 10177 
cs=0x28f0;eip=0x000fa1; 	R(JMP(loc_38557));	// 90258 jmp     loc_38557 ;~ 28F0:0FA1
loc_38484:
	// 10178 
cs=0x28f0;eip=0x000fa4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90262 les     bx, [bp+arg_6] ;~ 28F0:0FA4
cs=0x28f0;eip=0x000fa7; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 90263 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:0FA7
cs=0x28f0;eip=0x000fad; 	R(JNZ(loc_3849b));	// 90264 jnz     short loc_3849B ;~ 28F0:0FAD
cs=0x28f0;eip=0x000faf; 	T(SUB(ax, ax));	// 90265 sub     ax, ax ;~ 28F0:0FAF
cs=0x28f0;eip=0x000fb1; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), ax));	// 90266 mov     es:[bx+21Eh], ax ;~ 28F0:0FB1
cs=0x28f0;eip=0x000fb6; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 90267 mov     es:[bx+21Ch], ax ;~ 28F0:0FB6
loc_3849b:
	// 10179 
cs=0x28f0;eip=0x000fbb; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90270 les     bx, es:[bx+31Ch] ;~ 28F0:0FBB
cs=0x28f0;eip=0x000fc0; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 90271 mov     ax, [bp+arg_0] ;~ 28F0:0FC0
cs=0x28f0;eip=0x000fc3; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 90272 mov     dx, [bp+arg_2] ;~ 28F0:0FC3
cs=0x28f0;eip=0x000fc6; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 90273 mov     es:[bx+0Ah], ax ;~ 28F0:0FC6
cs=0x28f0;eip=0x000fca; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 90274 mov     es:[bx+0Ch], dx ;~ 28F0:0FCA
cs=0x28f0;eip=0x000fce; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90275 les     bx, [bp+arg_6] ;~ 28F0:0FCE
cs=0x28f0;eip=0x000fd1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90276 mov     ax, [bp+arg_4] ;~ 28F0:0FD1
cs=0x28f0;eip=0x000fd4; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 90277 mov     es:[bx+332h], ax ;~ 28F0:0FD4
cs=0x28f0;eip=0x000fd9; 	T(SUB(ax, ax));	// 90278 sub     ax, ax ;~ 28F0:0FD9
cs=0x28f0;eip=0x000fdb; 	T(CWD);	// 90279 cwd ;~ 28F0:0FDB
cs=0x28f0;eip=0x000fdc; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 90280 mov     es:[bx+160h], ax ;~ 28F0:0FDC
cs=0x28f0;eip=0x000fe1; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 90281 mov     es:[bx+162h], dx ;~ 28F0:0FE1
cs=0x28f0;eip=0x000fe6; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 90282 mov     es:[bx+140h], ax ;~ 28F0:0FE6
cs=0x28f0;eip=0x000feb; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 90283 mov     es:[bx+142h], dx ;~ 28F0:0FEB
cs=0x28f0;eip=0x000ff0; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 90284 mov     es:[bx+120h], ax ;~ 28F0:0FF0
cs=0x28f0;eip=0x000ff5; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 90285 mov     es:[bx+122h], dx ;~ 28F0:0FF5
cs=0x28f0;eip=0x000ffa; 	T(CWD);	// 90286 cwd ;~ 28F0:0FFA
cs=0x28f0;eip=0x000ffb; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 90287 mov     es:[bx+20h], ax ;~ 28F0:0FFB
cs=0x28f0;eip=0x000fff; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 90288 mov     es:[bx+22h], dx ;~ 28F0:0FFF
cs=0x28f0;eip=0x001003; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 90289 mov     es:[bx], ax ;~ 28F0:1003
cs=0x28f0;eip=0x001006; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 90290 mov     es:[bx+2], dx ;~ 28F0:1006
cs=0x28f0;eip=0x00100a; 	T(CWD);	// 90291 cwd ;~ 28F0:100A
cs=0x28f0;eip=0x00100b; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 90292 mov     es:[bx+0A0h], ax ;~ 28F0:100B
cs=0x28f0;eip=0x001010; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), dx));	// 90293 mov     es:[bx+0A2h], dx ;~ 28F0:1010
cs=0x28f0;eip=0x001015; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 90294 mov     es:[bx+40h], ax ;~ 28F0:1015
cs=0x28f0;eip=0x001019; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 90295 mov     es:[bx+42h], dx ;~ 28F0:1019
cs=0x28f0;eip=0x00101d; 	X(MOV(*(dw*)(raddr(es,bx+0x1C6)), ax));	// 90296 mov     es:[bx+1C6h], ax ;~ 28F0:101D
cs=0x28f0;eip=0x001022; 	X(MOV(*(dw*)(raddr(es,bx+0x1C4)), ax));	// 90297 mov     es:[bx+1C4h], ax ;~ 28F0:1022
cs=0x28f0;eip=0x001027; 	T(CWD);	// 90298 cwd ;~ 28F0:1027
cs=0x28f0;eip=0x001028; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 90299 mov     es:[bx+0E0h], ax ;~ 28F0:1028
cs=0x28f0;eip=0x00102d; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 90300 mov     es:[bx+0E2h], dx ;~ 28F0:102D
cs=0x28f0;eip=0x001032; 	X(MOV(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 90301 mov     es:[bx+0C0h], ax ;~ 28F0:1032
cs=0x28f0;eip=0x001037; 	X(MOV(*(dw*)(raddr(es,bx+0x0C2)), dx));	// 90302 mov     es:[bx+0C2h], dx ;~ 28F0:1037
cs=0x28f0;eip=0x00103c; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90303 les     bx, es:[bx+31Ch] ;~ 28F0:103C
cs=0x28f0;eip=0x001041; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), ax));	// 90304 mov     es:[bx+14h], ax ;~ 28F0:1041
cs=0x28f0;eip=0x001045; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90305 les     bx, [bp+arg_6] ;~ 28F0:1045
cs=0x28f0;eip=0x001048; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90306 les     bx, es:[bx+31Ch] ;~ 28F0:1048
cs=0x28f0;eip=0x00104d; 	X(MOV(*(dw*)(raddr(es,bx+0x16)), ax));	// 90307 mov     es:[bx+16h], ax ;~ 28F0:104D
cs=0x28f0;eip=0x001051; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90308 les     bx, [bp+arg_6] ;~ 28F0:1051
cs=0x28f0;eip=0x001054; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 90309 mov     ax, es:[bx+326h] ;~ 28F0:1054
cs=0x28f0;eip=0x001059; 	T(OR(ax, *(dw*)(raddr(es,bx+0x328))));	// 90310 or      ax, es:[bx+328h] ;~ 28F0:1059
cs=0x28f0;eip=0x00105e; 	R(JZ(loc_38557));	// 90311 jz      short loc_38557 ;~ 28F0:105E
cs=0x28f0;eip=0x001060; 	X(PUSH(*(dw*)(raddr(es,bx+0x328))));	// 90312 push    word ptr es:[bx+328h] ;~ 28F0:1060
cs=0x28f0;eip=0x001065; 	X(PUSH(*(dw*)(raddr(es,bx+0x326))));	// 90313 push    word ptr es:[bx+326h] ;~ 28F0:1065
cs=0x28f0;eip=0x00106a; 	T(MOV(ax, 1));	// 90314 mov     ax, 1 ;~ 28F0:106A
cs=0x28f0;eip=0x00106d; 	X(PUSH(ax));	// 90315 push    ax ;~ 28F0:106D
cs=0x28f0;eip=0x00106e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 90316 push    [bp+arg_2] ;~ 28F0:106E
cs=0x28f0;eip=0x001071; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 90317 push    [bp+arg_0] ;~ 28F0:1071
cs=0x28f0;eip=0x001074; 	R(CALL(sub_3842f,0));	// 90318 call    sub_3842F ;~ 28F0:1074
loc_38557:
	// 10180 
cs=0x28f0;eip=0x001077; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), 1));	// 90322 mov     [bp+var_2], 1 ;~ 28F0:1077
loc_3855c:
	// 10181 
cs=0x28f0;eip=0x00107c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 90326 mov     ax, [bp+var_2] ;~ 28F0:107C
cs=0x28f0;eip=0x00107f; 	R(JMP(loc_38845));	// 90327 jmp     loc_38845 ;~ 28F0:107F
loc_38562:
	// 10182 
cs=0x28f0;eip=0x001082; 	R(CALLF(nullsub_13,0));	// 90331 call    nullsub_13 ;~ 28F0:1082
cs=0x28f0;eip=0x001087; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90332 les     bx, [bp+arg_6] ;~ 28F0:1087
cs=0x28f0;eip=0x00108a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90333 mov     ax, [bp+arg_4] ;~ 28F0:108A
cs=0x28f0;eip=0x00108d; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 90334 mov     es:[bx+332h], ax ;~ 28F0:108D
cs=0x28f0;eip=0x001092; 	T(SUB(ax, ax));	// 90335 sub     ax, ax ;~ 28F0:1092
cs=0x28f0;eip=0x001094; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), ax));	// 90336 mov     es:[bx+21Eh], ax ;~ 28F0:1094
cs=0x28f0;eip=0x001099; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 90337 mov     es:[bx+21Ch], ax ;~ 28F0:1099
cs=0x28f0;eip=0x00109e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90338 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:109E
cs=0x28f0;eip=0x0010a4; 	R(JNZ(loc_38590));	// 90339 jnz     short loc_38590 ;~ 28F0:10A4
cs=0x28f0;eip=0x0010a6; 	X(MOV(*(dw*)(raddr(es,bx+0x222)), ax));	// 90340 mov     es:[bx+222h], ax ;~ 28F0:10A6
cs=0x28f0;eip=0x0010ab; 	X(MOV(*(dw*)(raddr(es,bx+0x220)), ax));	// 90341 mov     es:[bx+220h], ax ;~ 28F0:10AB
loc_38590:
	// 10183 
cs=0x28f0;eip=0x0010b0; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90344 mov     ax, es:[bx+2FAh] ;~ 28F0:10B0
cs=0x28f0;eip=0x0010b5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90345 mov     dx, es:[bx+2FCh] ;~ 28F0:10B5
cs=0x28f0;eip=0x0010ba; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90346 add     ax, es:[bx+302h] ;~ 28F0:10BA
cs=0x28f0;eip=0x0010bf; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90347 adc     dx, es:[bx+304h] ;~ 28F0:10BF
cs=0x28f0;eip=0x0010c4; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 90348 add     ax, es:[bx+20Eh] ;~ 28F0:10C4
cs=0x28f0;eip=0x0010c9; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 90349 adc     dx, es:[bx+210h] ;~ 28F0:10C9
cs=0x28f0;eip=0x0010ce; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90350 les     bx, es:[bx+31Ch] ;~ 28F0:10CE
cs=0x28f0;eip=0x0010d3; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90351 cmp     dx, es:[bx+0Ch] ;~ 28F0:10D3
cs=0x28f0;eip=0x0010d7; 	R(JGE(loc_385bc));	// 90352 jge     short loc_385BC ;~ 28F0:10D7
cs=0x28f0;eip=0x0010d9; 	R(JMP(loc_386fb));	// 90353 jmp     loc_386FB ;~ 28F0:10D9
loc_385bc:
	// 10184 
cs=0x28f0;eip=0x0010dc; 	R(JG(loc_385c7));	// 90357 jg      short loc_385C7 ;~ 28F0:10DC
cs=0x28f0;eip=0x0010de; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90358 cmp     ax, es:[bx+0Ah] ;~ 28F0:10DE
cs=0x28f0;eip=0x0010e2; 	R(JNC(loc_385c7));	// 90359 jnb     short loc_385C7 ;~ 28F0:10E2
cs=0x28f0;eip=0x0010e4; 	R(JMP(loc_386fb));	// 90360 jmp     loc_386FB ;~ 28F0:10E4
loc_385c7:
	// 10185 
cs=0x28f0;eip=0x0010e7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90365 les     bx, [bp+arg_6] ;~ 28F0:10E7
cs=0x28f0;eip=0x0010ea; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90366 mov     ax, es:[bx+2FAh] ;~ 28F0:10EA
cs=0x28f0;eip=0x0010ef; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90367 mov     dx, es:[bx+2FCh] ;~ 28F0:10EF
cs=0x28f0;eip=0x0010f4; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90368 add     ax, es:[bx+302h] ;~ 28F0:10F4
cs=0x28f0;eip=0x0010f9; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90369 adc     dx, es:[bx+304h] ;~ 28F0:10F9
cs=0x28f0;eip=0x0010fe; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90370 les     bx, es:[bx+31Ch] ;~ 28F0:10FE
cs=0x28f0;eip=0x001103; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 90371 cmp     dx, es:[bx+0Ch] ;~ 28F0:1103
cs=0x28f0;eip=0x001107; 	R(JL(loc_38615));	// 90372 jl      short loc_38615 ;~ 28F0:1107
cs=0x28f0;eip=0x001109; 	R(JG(loc_385f1));	// 90373 jg      short loc_385F1 ;~ 28F0:1109
cs=0x28f0;eip=0x00110b; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 90374 cmp     ax, es:[bx+0Ah] ;~ 28F0:110B
cs=0x28f0;eip=0x00110f; 	R(JBE(loc_38615));	// 90375 jbe     short loc_38615 ;~ 28F0:110F
loc_385f1:
	// 10186 
cs=0x28f0;eip=0x001111; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90378 les     bx, [bp+arg_6] ;~ 28F0:1111
cs=0x28f0;eip=0x001114; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 90379 mov     ax, es:[bx+2FAh] ;~ 28F0:1114
cs=0x28f0;eip=0x001119; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 90380 mov     dx, es:[bx+2FCh] ;~ 28F0:1119
cs=0x28f0;eip=0x00111e; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 90381 add     ax, es:[bx+302h] ;~ 28F0:111E
cs=0x28f0;eip=0x001123; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 90382 adc     dx, es:[bx+304h] ;~ 28F0:1123
cs=0x28f0;eip=0x001128; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90383 les     bx, es:[bx+31Ch] ;~ 28F0:1128
cs=0x28f0;eip=0x00112d; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 90384 mov     es:[bx+0Ah], ax ;~ 28F0:112D
cs=0x28f0;eip=0x001131; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 90385 mov     es:[bx+0Ch], dx ;~ 28F0:1131
loc_38615:
	// 10187 
cs=0x28f0;eip=0x001135; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90389 les     bx, [bp+arg_6] ;~ 28F0:1135
cs=0x28f0;eip=0x001138; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90390 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:1138
cs=0x28f0;eip=0x00113e; 	R(JNZ(loc_38657));	// 90391 jnz     short loc_38657 ;~ 28F0:113E
cs=0x28f0;eip=0x001140; 	T(SUB(ax, ax));	// 90392 sub     ax, ax ;~ 28F0:1140
cs=0x28f0;eip=0x001142; 	T(CWD);	// 90393 cwd ;~ 28F0:1142
cs=0x28f0;eip=0x001143; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 90394 mov     es:[bx+160h], ax ;~ 28F0:1143
cs=0x28f0;eip=0x001148; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 90395 mov     es:[bx+162h], dx ;~ 28F0:1148
cs=0x28f0;eip=0x00114d; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 90396 mov     es:[bx+140h], ax ;~ 28F0:114D
cs=0x28f0;eip=0x001152; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 90397 mov     es:[bx+142h], dx ;~ 28F0:1152
cs=0x28f0;eip=0x001157; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 90398 mov     es:[bx+120h], ax ;~ 28F0:1157
cs=0x28f0;eip=0x00115c; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 90399 mov     es:[bx+122h], dx ;~ 28F0:115C
cs=0x28f0;eip=0x001161; 	T(CWD);	// 90400 cwd ;~ 28F0:1161
cs=0x28f0;eip=0x001162; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 90401 mov     es:[bx+0A0h], ax ;~ 28F0:1162
cs=0x28f0;eip=0x001167; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), dx));	// 90402 mov     es:[bx+0A2h], dx ;~ 28F0:1167
cs=0x28f0;eip=0x00116c; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 90403 mov     es:[bx+40h], ax ;~ 28F0:116C
cs=0x28f0;eip=0x001170; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 90404 mov     es:[bx+42h], dx ;~ 28F0:1170
cs=0x28f0;eip=0x001174; 	R(JMP(loc_38557));	// 90405 jmp     loc_38557 ;~ 28F0:1174
loc_38657:
	// 10188 
cs=0x28f0;eip=0x001177; 	T(CMP(*(dw*)(raddr(es,bx+0x0C2)), 0));	// 90409 cmp     word ptr es:[bx+0C2h], 0 ;~ 28F0:1177
cs=0x28f0;eip=0x00117d; 	R(JL(loc_3867a));	// 90410 jl      short loc_3867A ;~ 28F0:117D
cs=0x28f0;eip=0x00117f; 	R(JG(loc_3866a));	// 90411 jg      short loc_3866A ;~ 28F0:117F
cs=0x28f0;eip=0x001181; 	T(CMP(*(dw*)(raddr(es,bx+0x0C0)), 0x5A00));	// 90412 cmp     word ptr es:[bx+0C0h], 5A00h ;~ 28F0:1181
cs=0x28f0;eip=0x001188; 	R(JBE(loc_3867a));	// 90413 jbe     short loc_3867A ;~ 28F0:1188
loc_3866a:
	// 10189 
cs=0x28f0;eip=0x00118a; 	X(MOV(*(dw*)(raddr(es,bx+0x0C4)), 0x0B400));	// 90416 mov     word ptr es:[bx+0C4h], 0B400h ;~ 28F0:118A
cs=0x28f0;eip=0x001191; 	X(MOV(*(dw*)(raddr(es,bx+0x0C6)), 0));	// 90417 mov     word ptr es:[bx+0C6h], 0 ;~ 28F0:1191
cs=0x28f0;eip=0x001198; 	R(JMP(loc_386a9));	// 90418 jmp     short loc_386A9 ;~ 28F0:1198
loc_3867a:
	// 10190 
cs=0x28f0;eip=0x00119a; 	T(CMP(*(dw*)(raddr(es,bx+0x0C2)), 0x0FFFF));	// 90423 cmp     word ptr es:[bx+0C2h], 0FFFFh ;~ 28F0:119A
cs=0x28f0;eip=0x0011a0; 	R(JG(loc_3869d));	// 90424 jg      short loc_3869D ;~ 28F0:11A0
cs=0x28f0;eip=0x0011a2; 	R(JL(loc_3868d));	// 90425 jl      short loc_3868D ;~ 28F0:11A2
cs=0x28f0;eip=0x0011a4; 	T(CMP(*(dw*)(raddr(es,bx+0x0C0)), 0x0A600));	// 90426 cmp     word ptr es:[bx+0C0h], 0A600h ;~ 28F0:11A4
cs=0x28f0;eip=0x0011ab; 	R(JNC(loc_3869d));	// 90427 jnb     short loc_3869D ;~ 28F0:11AB
loc_3868d:
	// 10191 
cs=0x28f0;eip=0x0011ad; 	X(MOV(*(dw*)(raddr(es,bx+0x0C4)), 0x4C00));	// 90430 mov     word ptr es:[bx+0C4h], 4C00h ;~ 28F0:11AD
cs=0x28f0;eip=0x0011b4; 	X(MOV(*(dw*)(raddr(es,bx+0x0C6)), 0x0FFFF));	// 90431 mov     word ptr es:[bx+0C6h], 0FFFFh ;~ 28F0:11B4
cs=0x28f0;eip=0x0011bb; 	R(JMP(loc_386a9));	// 90432 jmp     short loc_386A9 ;~ 28F0:11BB
loc_3869d:
	// 10192 
cs=0x28f0;eip=0x0011bd; 	T(SUB(ax, ax));	// 90437 sub     ax, ax ;~ 28F0:11BD
cs=0x28f0;eip=0x0011bf; 	X(MOV(*(dw*)(raddr(es,bx+0x0C6)), ax));	// 90438 mov     es:[bx+0C6h], ax ;~ 28F0:11BF
cs=0x28f0;eip=0x0011c4; 	X(MOV(*(dw*)(raddr(es,bx+0x0C4)), ax));	// 90439 mov     es:[bx+0C4h], ax ;~ 28F0:11C4
loc_386a9:
	// 10193 
cs=0x28f0;eip=0x0011c9; 	T(SUB(ax, ax));	// 90443 sub     ax, ax ;~ 28F0:11C9
cs=0x28f0;eip=0x0011cb; 	X(MOV(*(dw*)(raddr(es,bx+0x0E6)), ax));	// 90444 mov     es:[bx+0E6h], ax ;~ 28F0:11CB
cs=0x28f0;eip=0x0011d0; 	X(MOV(*(dw*)(raddr(es,bx+0x0E4)), ax));	// 90445 mov     es:[bx+0E4h], ax ;~ 28F0:11D0
cs=0x28f0;eip=0x0011d5; 	T(CWD);	// 90446 cwd ;~ 28F0:11D5
cs=0x28f0;eip=0x0011d6; 	X(MOV(*(dw*)(raddr(es,bx+0x144)), ax));	// 90447 mov     es:[bx+144h], ax ;~ 28F0:11D6
cs=0x28f0;eip=0x0011db; 	X(MOV(*(dw*)(raddr(es,bx+0x146)), dx));	// 90448 mov     es:[bx+146h], dx ;~ 28F0:11DB
cs=0x28f0;eip=0x0011e0; 	X(MOV(*(dw*)(raddr(es,bx+0x124)), ax));	// 90449 mov     es:[bx+124h], ax ;~ 28F0:11E0
cs=0x28f0;eip=0x0011e5; 	X(MOV(*(dw*)(raddr(es,bx+0x126)), dx));	// 90450 mov     es:[bx+126h], dx ;~ 28F0:11E5
cs=0x28f0;eip=0x0011ea; 	X(MOV(*(dw*)(raddr(es,bx+0x164)), 0x1400));	// 90451 mov     word ptr es:[bx+164h], 1400h ;~ 28F0:11EA
cs=0x28f0;eip=0x0011f1; 	X(MOV(*(dw*)(raddr(es,bx+0x166)), ax));	// 90452 mov     es:[bx+166h], ax ;~ 28F0:11F1
cs=0x28f0;eip=0x0011f6; 	T(CWD);	// 90453 cwd ;~ 28F0:11F6
cs=0x28f0;eip=0x0011f7; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 90454 mov     es:[bx+40h], ax ;~ 28F0:11F7
cs=0x28f0;eip=0x0011fb; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 90455 mov     es:[bx+42h], dx ;~ 28F0:11FB
cs=0x28f0;eip=0x0011ff; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 90456 mov     es:[bx+20h], ax ;~ 28F0:11FF
cs=0x28f0;eip=0x001203; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 90457 mov     es:[bx+22h], dx ;~ 28F0:1203
cs=0x28f0;eip=0x001207; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 90458 mov     es:[bx], ax ;~ 28F0:1207
cs=0x28f0;eip=0x00120a; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 90459 mov     es:[bx+2], dx ;~ 28F0:120A
cs=0x28f0;eip=0x00120e; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), ax));	// 90460 mov     es:[bx+0A2h], ax ;~ 28F0:120E
cs=0x28f0;eip=0x001213; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 90461 mov     es:[bx+0A0h], ax ;~ 28F0:1213
cs=0x28f0;eip=0x001218; 	R(JMP(loc_38557));	// 90462 jmp     loc_38557 ;~ 28F0:1218
loc_386fb:
	// 10194 
cs=0x28f0;eip=0x00121b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90467 les     bx, [bp+arg_6] ;~ 28F0:121B
cs=0x28f0;eip=0x00121e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90468 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:121E
cs=0x28f0;eip=0x001224; 	R(JNZ(loc_38709));	// 90469 jnz     short loc_38709 ;~ 28F0:1224
cs=0x28f0;eip=0x001226; 	R(JMP(loc_38557));	// 90470 jmp     loc_38557 ;~ 28F0:1226
loc_38709:
	// 10195 
cs=0x28f0;eip=0x001229; 	X(MOV(*(dw*)(raddr(es,bx+0x0E4)), 0x0C400));	// 90474 mov     word ptr es:[bx+0E4h], 0C400h ;~ 28F0:1229
cs=0x28f0;eip=0x001230; 	X(MOV(*(dw*)(raddr(es,bx+0x0E6)), 0x0FFFF));	// 90475 mov     word ptr es:[bx+0E6h], 0FFFFh ;~ 28F0:1230
cs=0x28f0;eip=0x001237; 	R(JMP(loc_38557));	// 90476 jmp     loc_38557 ;~ 28F0:1237
loc_3871a:
	// 10196 
cs=0x28f0;eip=0x00123a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90480 les     bx, [bp+arg_6] ;~ 28F0:123A
cs=0x28f0;eip=0x00123d; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90481 les     bx, es:[bx+31Ch] ;~ 28F0:123D
cs=0x28f0;eip=0x001242; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 90482 mov     ax, [bp+arg_0] ;~ 28F0:1242
cs=0x28f0;eip=0x001245; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 90483 mov     dx, [bp+arg_2] ;~ 28F0:1245
cs=0x28f0;eip=0x001248; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 90484 mov     es:[bx+0Ah], ax ;~ 28F0:1248
cs=0x28f0;eip=0x00124c; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 90485 mov     es:[bx+0Ch], dx ;~ 28F0:124C
cs=0x28f0;eip=0x001250; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90486 les     bx, [bp+arg_6] ;~ 28F0:1250
cs=0x28f0;eip=0x001253; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90487 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:1253
cs=0x28f0;eip=0x001259; 	R(JZ(loc_3873e));	// 90488 jz      short loc_3873E ;~ 28F0:1259
cs=0x28f0;eip=0x00125b; 	R(JMP(loc_38557));	// 90489 jmp     loc_38557 ;~ 28F0:125B
loc_3873e:
	// 10197 
cs=0x28f0;eip=0x00125e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90493 mov     ax, [bp+arg_4] ;~ 28F0:125E
cs=0x28f0;eip=0x001261; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 90494 mov     es:[bx+332h], ax ;~ 28F0:1261
cs=0x28f0;eip=0x001266; 	R(JMP(loc_38557));	// 90495 jmp     loc_38557 ;~ 28F0:1266
loc_38749:
	// 10198 
cs=0x28f0;eip=0x001269; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90499 les     bx, [bp+arg_6] ;~ 28F0:1269
cs=0x28f0;eip=0x00126c; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 90500 les     bx, es:[bx+31Ch] ;~ 28F0:126C
cs=0x28f0;eip=0x001271; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 90501 mov     ax, [bp+arg_0] ;~ 28F0:1271
cs=0x28f0;eip=0x001274; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 90502 mov     dx, [bp+arg_2] ;~ 28F0:1274
cs=0x28f0;eip=0x001277; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 90503 mov     es:[bx+0Ah], ax ;~ 28F0:1277
cs=0x28f0;eip=0x00127b; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 90504 mov     es:[bx+0Ch], dx ;~ 28F0:127B
cs=0x28f0;eip=0x00127f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90505 les     bx, [bp+arg_6] ;~ 28F0:127F
cs=0x28f0;eip=0x001282; 	T(SUB(ax, ax));	// 90506 sub     ax, ax ;~ 28F0:1282
cs=0x28f0;eip=0x001284; 	X(MOV(*(dw*)(raddr(es,bx+0x0E6)), ax));	// 90507 mov     es:[bx+0E6h], ax ;~ 28F0:1284
cs=0x28f0;eip=0x001289; 	X(MOV(*(dw*)(raddr(es,bx+0x0E4)), ax));	// 90508 mov     es:[bx+0E4h], ax ;~ 28F0:1289
cs=0x28f0;eip=0x00128e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90509 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:128E
cs=0x28f0;eip=0x001294; 	R(JZ(loc_38779));	// 90510 jz      short loc_38779 ;~ 28F0:1294
cs=0x28f0;eip=0x001296; 	R(JMP(loc_38557));	// 90511 jmp     loc_38557 ;~ 28F0:1296
loc_38779:
	// 10199 
cs=0x28f0;eip=0x001299; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90515 mov     ax, [bp+arg_4] ;~ 28F0:1299
cs=0x28f0;eip=0x00129c; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 90516 mov     es:[bx+332h], ax ;~ 28F0:129C
cs=0x28f0;eip=0x0012a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 90517 mov     ax, es:[bx+21Ch] ;~ 28F0:12A1
cs=0x28f0;eip=0x0012a6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 90518 mov     dx, es:[bx+21Eh] ;~ 28F0:12A6
cs=0x28f0;eip=0x0012ab; 	T(OR(dx, dx));	// 90519 or      dx, dx ;~ 28F0:12AB
cs=0x28f0;eip=0x0012ad; 	R(JG(loc_3879b));	// 90520 jg      short loc_3879B ;~ 28F0:12AD
cs=0x28f0;eip=0x0012af; 	R(JL(loc_38796));	// 90521 jl      short loc_38796 ;~ 28F0:12AF
cs=0x28f0;eip=0x0012b1; 	T(CMP(ax, 0x3200));	// 90522 cmp     ax, 3200h ;~ 28F0:12B1
cs=0x28f0;eip=0x0012b4; 	R(JNC(loc_3879b));	// 90523 jnb     short loc_3879B ;~ 28F0:12B4
loc_38796:
	// 10200 
cs=0x28f0;eip=0x0012b6; 	T(SUB(dx, dx));	// 90526 sub     dx, dx ;~ 28F0:12B6
cs=0x28f0;eip=0x0012b8; 	T(MOV(ax, 0x3200));	// 90527 mov     ax, 3200h ;~ 28F0:12B8
loc_3879b:
	// 10201 
cs=0x28f0;eip=0x0012bb; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 90531 mov     es:[bx+21Ch], ax ;~ 28F0:12BB
cs=0x28f0;eip=0x0012c0; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), dx));	// 90532 mov     es:[bx+21Eh], dx ;~ 28F0:12C0
cs=0x28f0;eip=0x0012c5; 	X(MOV(*(dw*)(raddr(es,bx+0x218)), ax));	// 90533 mov     es:[bx+218h], ax ;~ 28F0:12C5
cs=0x28f0;eip=0x0012ca; 	X(MOV(*(dw*)(raddr(es,bx+0x21A)), dx));	// 90534 mov     es:[bx+21Ah], dx ;~ 28F0:12CA
cs=0x28f0;eip=0x0012cf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 90535 mov     ax, es:[bx+128h] ;~ 28F0:12CF
cs=0x28f0;eip=0x0012d4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 90536 mov     dx, es:[bx+12Ah] ;~ 28F0:12D4
cs=0x28f0;eip=0x0012d9; 	T(MOV(cl, 3));	// 90537 mov     cl, 3 ;~ 28F0:12D9
cs=0x28f0;eip=0x0012db; 	R(CALLF(sub_10240,0));	// 90538 call    sub_10240 ;~ 28F0:12DB
cs=0x28f0;eip=0x0012e0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90539 les     bx, [bp+arg_6] ;~ 28F0:12E0
cs=0x28f0;eip=0x0012e3; 	T(MOV(cx, ax));	// 90540 mov     cx, ax ;~ 28F0:12E3
cs=0x28f0;eip=0x0012e5; 	T(MOV(si, dx));	// 90541 mov     si, dx ;~ 28F0:12E5
cs=0x28f0;eip=0x0012e7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 90542 mov     ax, es:[bx+128h] ;~ 28F0:12E7
cs=0x28f0;eip=0x0012ec; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 90543 mov     dx, es:[bx+12Ah] ;~ 28F0:12EC
cs=0x28f0;eip=0x0012f1; 	T(MOV(bx, cx));	// 90544 mov     bx, cx ;~ 28F0:12F1
cs=0x28f0;eip=0x0012f3; 	T(MOV(cl, 2));	// 90545 mov     cl, 2 ;~ 28F0:12F3
cs=0x28f0;eip=0x0012f5; 	T(MOV(di, bx));	// 90546 mov     di, bx ;~ 28F0:12F5
cs=0x28f0;eip=0x0012f7; 	R(CALLF(sub_10240,0));	// 90547 call    sub_10240 ;~ 28F0:12F7
cs=0x28f0;eip=0x0012fc; 	T(ADD(ax, di));	// 90548 add     ax, di ;~ 28F0:12FC
cs=0x28f0;eip=0x0012fe; 	T(ADC(dx, si));	// 90549 adc     dx, si ;~ 28F0:12FE
cs=0x28f0;eip=0x001300; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90550 les     bx, [bp+arg_6] ;~ 28F0:1300
cs=0x28f0;eip=0x001303; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x122))));	// 90551 cmp     dx, es:[bx+122h] ;~ 28F0:1303
cs=0x28f0;eip=0x001308; 	R(JG(loc_387fd));	// 90552 jg      short loc_387FD ;~ 28F0:1308
cs=0x28f0;eip=0x00130a; 	R(JL(loc_387f3));	// 90553 jl      short loc_387F3 ;~ 28F0:130A
cs=0x28f0;eip=0x00130c; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x120))));	// 90554 cmp     ax, es:[bx+120h] ;~ 28F0:130C
cs=0x28f0;eip=0x001311; 	R(JNC(loc_387fd));	// 90555 jnb     short loc_387FD ;~ 28F0:1311
loc_387f3:
	// 10202 
cs=0x28f0;eip=0x001313; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 90558 mov     dx, es:[bx+122h] ;~ 28F0:1313
cs=0x28f0;eip=0x001318; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 90559 mov     ax, es:[bx+120h] ;~ 28F0:1318
loc_387fd:
	// 10203 
cs=0x28f0;eip=0x00131d; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 90563 mov     es:[bx+120h], ax ;~ 28F0:131D
cs=0x28f0;eip=0x001322; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 90564 mov     es:[bx+122h], dx ;~ 28F0:1322
cs=0x28f0;eip=0x001327; 	R(JMP(loc_38557));	// 90565 jmp     loc_38557 ;~ 28F0:1327
loc_3880a:
	// 10204 
cs=0x28f0;eip=0x00132a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 90569 les     bx, [bp+arg_6] ;~ 28F0:132A
cs=0x28f0;eip=0x00132d; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90570 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:132D
cs=0x28f0;eip=0x001333; 	R(JZ(loc_38818));	// 90571 jz      short loc_38818 ;~ 28F0:1333
cs=0x28f0;eip=0x001335; 	R(JMP(loc_38557));	// 90572 jmp     loc_38557 ;~ 28F0:1335
loc_38818:
	// 10205 
cs=0x28f0;eip=0x001338; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 90576 mov     ax, [bp+arg_4] ;~ 28F0:1338
cs=0x28f0;eip=0x00133b; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 90577 mov     es:[bx+332h], ax ;~ 28F0:133B
cs=0x28f0;eip=0x001340; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2F2))));	// 90578 mov     ax, es:[bx+2F2h] ;~ 28F0:1340
cs=0x28f0;eip=0x001345; 	T(CWD);	// 90579 cwd ;~ 28F0:1345
cs=0x28f0;eip=0x001346; 	T(MOV(dh, dl));	// 90580 mov     dh, dl ;~ 28F0:1346
cs=0x28f0;eip=0x001348; 	T(MOV(dl, ah));	// 90581 mov     dl, ah ;~ 28F0:1348
cs=0x28f0;eip=0x00134a; 	T(MOV(ah, al));	// 90582 mov     ah, al ;~ 28F0:134A
cs=0x28f0;eip=0x00134c; 	T(SUB(al, al));	// 90583 sub     al, al ;~ 28F0:134C
cs=0x28f0;eip=0x00134e; 	X(MOV(*(dw*)(raddr(es,bx+0x0E4)), ax));	// 90584 mov     es:[bx+0E4h], ax ;~ 28F0:134E
cs=0x28f0;eip=0x001353; 	X(MOV(*(dw*)(raddr(es,bx+0x0E6)), dx));	// 90585 mov     es:[bx+0E6h], dx ;~ 28F0:1353
cs=0x28f0;eip=0x001358; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2F6))));	// 90586 mov     ax, es:[bx+2F6h] ;~ 28F0:1358
cs=0x28f0;eip=0x00135d; 	X(MOV(*(dw*)(raddr(es,bx+0x2F8)), ax));	// 90587 mov     es:[bx+2F8h], ax ;~ 28F0:135D
cs=0x28f0;eip=0x001362; 	R(JMP(loc_38557));	// 90588 jmp     loc_38557 ;~ 28F0:1362
loc_38845:
	// 10206 
cs=0x28f0;eip=0x001365; 	X(POP(si));	// 90592 pop     si ;~ 28F0:1365
cs=0x28f0;eip=0x001366; 	X(POP(di));	// 90593 pop     di ;~ 28F0:1366
cs=0x28f0;eip=0x001367; 	T(MOV(sp, bp));	// 90594 mov     sp, bp ;~ 28F0:1367
cs=0x28f0;eip=0x001369; 	X(POP(bp));	// 90595 pop     bp ;~ 28F0:1369
cs=0x28f0;eip=0x00136a; 	R(RETN(0x0A));	// 90596 retn    0Ah ;~ 28F0:136A
sub_3884d:
	// 90604 
#undef arg_0
#define arg_0 4
	// 90606 arg_0           = dword ptr  4 ;~ 28F0:136D
cs=0x28f0;eip=0x00136d; 	X(PUSH(bp));	// 90608 push    bp ;~ 28F0:136D
cs=0x28f0;eip=0x00136e; 	T(MOV(bp, sp));	// 90609 mov     bp, sp ;~ 28F0:136E
cs=0x28f0;eip=0x001370; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90610 push    word ptr [bp+arg_0+2] ;~ 28F0:1370
cs=0x28f0;eip=0x001373; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90611 push    word ptr [bp+arg_0] ;~ 28F0:1373
cs=0x28f0;eip=0x001376; 	R(CALL(sub_38229,0));	// 90612 call    sub_38229 ;~ 28F0:1376
cs=0x28f0;eip=0x001379; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90613 les     bx, [bp+arg_0] ;~ 28F0:1379
cs=0x28f0;eip=0x00137c; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 90614 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:137C
cs=0x28f0;eip=0x001382; 	R(JNZ(loc_3886b));	// 90615 jnz     short loc_3886B ;~ 28F0:1382
cs=0x28f0;eip=0x001384; 	X(PUSH(es));	// 90616 push    es ;~ 28F0:1384
cs=0x28f0;eip=0x001385; 	X(PUSH(bx));	// 90617 push    bx ;~ 28F0:1385
cs=0x28f0;eip=0x001386; 	R(CALL(sub_3b44e,0));	// 90618 call    sub_3B44E ;~ 28F0:1386
cs=0x28f0;eip=0x001389; 	R(JMP(loc_3887b));	// 90619 jmp     short loc_3887B ;~ 28F0:1389
loc_3886b:
	// 10207 
cs=0x28f0;eip=0x00138b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90623 les     bx, [bp+arg_0] ;~ 28F0:138B
cs=0x28f0;eip=0x00138e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 90624 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:138E
cs=0x28f0;eip=0x001394; 	R(JNZ(loc_3887b));	// 90625 jnz     short loc_3887B ;~ 28F0:1394
cs=0x28f0;eip=0x001396; 	X(PUSH(es));	// 90626 push    es ;~ 28F0:1396
cs=0x28f0;eip=0x001397; 	X(PUSH(bx));	// 90627 push    bx ;~ 28F0:1397
cs=0x28f0;eip=0x001398; 	R(CALL(sub_39c0c,0));	// 90628 call    sub_39C0C ;~ 28F0:1398
loc_3887b:
	// 10208 
cs=0x28f0;eip=0x00139b; 	X(POP(bp));	// 90632 pop     bp ;~ 28F0:139B
cs=0x28f0;eip=0x00139c; 	R(RETN(4));	// 90633 retn    4 ;~ 28F0:139C
sub_3887f:
	// 90641 
#undef arg_0
#define arg_0 4
	// 90643 arg_0           = dword ptr  4 ;~ 28F0:139F
cs=0x28f0;eip=0x00139f; 	X(PUSH(bp));	// 90645 push    bp ;~ 28F0:139F
cs=0x28f0;eip=0x0013a0; 	T(MOV(bp, sp));	// 90646 mov     bp, sp ;~ 28F0:13A0
cs=0x28f0;eip=0x0013a2; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90647 mov     ax, word ptr [bp+arg_0] ;~ 28F0:13A2
cs=0x28f0;eip=0x0013a5; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90648 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:13A5
cs=0x28f0;eip=0x0013a8; 	T(ADD(ax, 0x20));	// 90649 add     ax, 20h ; ' ' ;~ 28F0:13A8
cs=0x28f0;eip=0x0013ab; 	X(PUSH(dx));	// 90650 push    dx ;~ 28F0:13AB
cs=0x28f0;eip=0x0013ac; 	X(PUSH(ax));	// 90651 push    ax ;~ 28F0:13AC
cs=0x28f0;eip=0x0013ad; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90652 les     bx, [bp+arg_0] ;~ 28F0:13AD
cs=0x28f0;eip=0x0013b0; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 90653 push    word ptr es:[bx+36h] ;~ 28F0:13B0
cs=0x28f0;eip=0x0013b4; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 90654 push    word ptr es:[bx+34h] ;~ 28F0:13B4
cs=0x28f0;eip=0x0013b8; 	R(CALL(sub_3b9eb,0));	// 90655 call    sub_3B9EB ;~ 28F0:13B8
cs=0x28f0;eip=0x0013bb; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90656 mov     ax, word ptr [bp+arg_0] ;~ 28F0:13BB
cs=0x28f0;eip=0x0013be; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90657 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:13BE
cs=0x28f0;eip=0x0013c1; 	T(ADD(ax, 0x29C));	// 90658 add     ax, 29Ch ;~ 28F0:13C1
cs=0x28f0;eip=0x0013c4; 	X(PUSH(dx));	// 90659 push    dx ;~ 28F0:13C4
cs=0x28f0;eip=0x0013c5; 	X(PUSH(ax));	// 90660 push    ax ;~ 28F0:13C5
cs=0x28f0;eip=0x0013c6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90661 les     bx, [bp+arg_0] ;~ 28F0:13C6
cs=0x28f0;eip=0x0013c9; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B2))));	// 90662 push    word ptr es:[bx+2B2h] ;~ 28F0:13C9
cs=0x28f0;eip=0x0013ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B0))));	// 90663 push    word ptr es:[bx+2B0h] ;~ 28F0:13CE
cs=0x28f0;eip=0x0013d3; 	R(CALL(sub_3b9eb,0));	// 90664 call    sub_3B9EB ;~ 28F0:13D3
cs=0x28f0;eip=0x0013d6; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90665 mov     ax, word ptr [bp+arg_0] ;~ 28F0:13D6
cs=0x28f0;eip=0x0013d9; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90666 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:13D9
cs=0x28f0;eip=0x0013dc; 	T(ADD(ax, 0x2BC));	// 90667 add     ax, 2BCh ;~ 28F0:13DC
cs=0x28f0;eip=0x0013df; 	X(PUSH(dx));	// 90668 push    dx ;~ 28F0:13DF
cs=0x28f0;eip=0x0013e0; 	X(PUSH(ax));	// 90669 push    ax ;~ 28F0:13E0
cs=0x28f0;eip=0x0013e1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90670 les     bx, [bp+arg_0] ;~ 28F0:13E1
cs=0x28f0;eip=0x0013e4; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D2))));	// 90671 push    word ptr es:[bx+2D2h] ;~ 28F0:13E4
cs=0x28f0;eip=0x0013e9; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D0))));	// 90672 push    word ptr es:[bx+2D0h] ;~ 28F0:13E9
cs=0x28f0;eip=0x0013ee; 	R(CALL(sub_3b9eb,0));	// 90673 call    sub_3B9EB ;~ 28F0:13EE
cs=0x28f0;eip=0x0013f1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90674 push    word ptr [bp+arg_0+2] ;~ 28F0:13F1
cs=0x28f0;eip=0x0013f4; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90675 push    word ptr [bp+arg_0] ;~ 28F0:13F4
cs=0x28f0;eip=0x0013f7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90676 les     bx, [bp+arg_0] ;~ 28F0:13F7
cs=0x28f0;eip=0x0013fa; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 90677 push    word ptr es:[bx+16h] ;~ 28F0:13FA
cs=0x28f0;eip=0x0013fe; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 90678 push    word ptr es:[bx+14h] ;~ 28F0:13FE
cs=0x28f0;eip=0x001402; 	R(CALL(sub_3b9eb,0));	// 90679 call    sub_3B9EB ;~ 28F0:1402
cs=0x28f0;eip=0x001405; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90680 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1405
cs=0x28f0;eip=0x001408; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90681 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1408
cs=0x28f0;eip=0x00140b; 	T(ADD(ax, 0x40));	// 90682 add     ax, 40h ; '@' ;~ 28F0:140B
cs=0x28f0;eip=0x00140e; 	X(PUSH(dx));	// 90683 push    dx ;~ 28F0:140E
cs=0x28f0;eip=0x00140f; 	X(PUSH(ax));	// 90684 push    ax ;~ 28F0:140F
cs=0x28f0;eip=0x001410; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90685 les     bx, [bp+arg_0] ;~ 28F0:1410
cs=0x28f0;eip=0x001413; 	X(PUSH(*(dw*)(raddr(es,bx+0x56))));	// 90686 push    word ptr es:[bx+56h] ;~ 28F0:1413
cs=0x28f0;eip=0x001417; 	X(PUSH(*(dw*)(raddr(es,bx+0x54))));	// 90687 push    word ptr es:[bx+54h] ;~ 28F0:1417
cs=0x28f0;eip=0x00141b; 	R(CALL(sub_3b9eb,0));	// 90688 call    sub_3B9EB ;~ 28F0:141B
cs=0x28f0;eip=0x00141e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90689 push    word ptr [bp+arg_0+2] ;~ 28F0:141E
cs=0x28f0;eip=0x001421; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90690 push    word ptr [bp+arg_0] ;~ 28F0:1421
cs=0x28f0;eip=0x001424; 	R(CALL(sub_3a84e,0));	// 90691 call    sub_3A84E ;~ 28F0:1424
cs=0x28f0;eip=0x001427; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90692 push    word ptr [bp+arg_0+2] ;~ 28F0:1427
cs=0x28f0;eip=0x00142a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90693 push    word ptr [bp+arg_0] ;~ 28F0:142A
cs=0x28f0;eip=0x00142d; 	R(CALL(sub_3b300,0));	// 90694 call    sub_3B300 ;~ 28F0:142D
cs=0x28f0;eip=0x001430; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 90695 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1430
cs=0x28f0;eip=0x001433; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 90696 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1433
cs=0x28f0;eip=0x001436; 	T(ADD(ax, 0x0E0));	// 90697 add     ax, 0E0h ; 'à' ;~ 28F0:1436
cs=0x28f0;eip=0x001439; 	X(PUSH(dx));	// 90698 push    dx ;~ 28F0:1439
cs=0x28f0;eip=0x00143a; 	X(PUSH(ax));	// 90699 push    ax ;~ 28F0:143A
cs=0x28f0;eip=0x00143b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90700 les     bx, [bp+arg_0] ;~ 28F0:143B
cs=0x28f0;eip=0x00143e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2F4))));	// 90701 mov     ax, es:[bx+2F4h] ;~ 28F0:143E
cs=0x28f0;eip=0x001443; 	T(CWD);	// 90702 cwd ;~ 28F0:1443
cs=0x28f0;eip=0x001444; 	T(MOV(dh, dl));	// 90703 mov     dh, dl ;~ 28F0:1444
cs=0x28f0;eip=0x001446; 	T(MOV(dl, ah));	// 90704 mov     dl, ah ;~ 28F0:1446
cs=0x28f0;eip=0x001448; 	T(MOV(ah, al));	// 90705 mov     ah, al ;~ 28F0:1448
cs=0x28f0;eip=0x00144a; 	T(SUB(al, al));	// 90706 sub     al, al ;~ 28F0:144A
cs=0x28f0;eip=0x00144c; 	X(PUSH(dx));	// 90707 push    dx ;~ 28F0:144C
cs=0x28f0;eip=0x00144d; 	X(PUSH(ax));	// 90708 push    ax ;~ 28F0:144D
cs=0x28f0;eip=0x00144e; 	R(CALL(sub_3b9eb,0));	// 90709 call    sub_3B9EB ;~ 28F0:144E
cs=0x28f0;eip=0x001451; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90710 les     bx, [bp+arg_0] ;~ 28F0:1451
cs=0x28f0;eip=0x001454; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 90711 mov     ax, word ptr unk_57111 ;~ 28F0:1454
cs=0x28f0;eip=0x001457; 	X(SUB(*(dw*)(raddr(es,bx+0x2F8)), ax));	// 90712 sub     es:[bx+2F8h], ax ;~ 28F0:1457
cs=0x28f0;eip=0x00145c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2F8))));	// 90713 mov     ax, es:[bx+2F8h] ;~ 28F0:145C
cs=0x28f0;eip=0x001461; 	T(OR(ax, ax));	// 90714 or      ax, ax ;~ 28F0:1461
cs=0x28f0;eip=0x001463; 	R(JGE(loc_38947));	// 90715 jge     short loc_38947 ;~ 28F0:1463
cs=0x28f0;eip=0x001465; 	T(SUB(ax, ax));	// 90716 sub     ax, ax ;~ 28F0:1465
loc_38947:
	// 10209 
cs=0x28f0;eip=0x001467; 	X(MOV(*(dw*)(raddr(es,bx+0x2F8)), ax));	// 90719 mov     es:[bx+2F8h], ax ;~ 28F0:1467
cs=0x28f0;eip=0x00146c; 	T(OR(ax, ax));	// 90720 or      ax, ax ;~ 28F0:146C
cs=0x28f0;eip=0x00146e; 	R(JG(loc_38991));	// 90721 jg      short loc_38991 ;~ 28F0:146E
cs=0x28f0;eip=0x001470; 	X(PUSH(es));	// 90722 push    es ;~ 28F0:1470
cs=0x28f0;eip=0x001471; 	X(PUSH(bx));	// 90723 push    bx ;~ 28F0:1471
cs=0x28f0;eip=0x001472; 	R(CALL(sub_3a769,0));	// 90724 call    sub_3A769 ;~ 28F0:1472
cs=0x28f0;eip=0x001475; 	T(CMP(ax, 1));	// 90725 cmp     ax, 1 ;~ 28F0:1475
cs=0x28f0;eip=0x001478; 	R(JZ(loc_38964));	// 90726 jz      short loc_38964 ;~ 28F0:1478
cs=0x28f0;eip=0x00147a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90727 les     bx, [bp+arg_0] ;~ 28F0:147A
cs=0x28f0;eip=0x00147d; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 6));	// 90728 mov     word ptr es:[bx+332h], 6 ;~ 28F0:147D
loc_38964:
	// 10210 
cs=0x28f0;eip=0x001484; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90731 les     bx, [bp+arg_0] ;~ 28F0:1484
cs=0x28f0;eip=0x001487; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 90732 mov     ax, es:[bx+326h] ;~ 28F0:1487
cs=0x28f0;eip=0x00148c; 	T(OR(ax, *(dw*)(raddr(es,bx+0x328))));	// 90733 or      ax, es:[bx+328h] ;~ 28F0:148C
cs=0x28f0;eip=0x001491; 	R(JZ(loc_3899e));	// 90734 jz      short loc_3899E ;~ 28F0:1491
cs=0x28f0;eip=0x001493; 	T(CMP(*(raddr(es,bx+0x330)), 0));	// 90735 cmp     byte ptr es:[bx+330h], 0 ;~ 28F0:1493
cs=0x28f0;eip=0x001499; 	R(JZ(loc_3899e));	// 90736 jz      short loc_3899E ;~ 28F0:1499
cs=0x28f0;eip=0x00149b; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 6));	// 90737 mov     word ptr es:[bx+332h], 6 ;~ 28F0:149B
cs=0x28f0;eip=0x0014a2; 	T(MOV(ax, 0x76));	// 90738 mov     ax, 76h ; 'v' ;~ 28F0:14A2
cs=0x28f0;eip=0x0014a5; 	X(PUSH(ax));	// 90739 push    ax ;~ 28F0:14A5
cs=0x28f0;eip=0x0014a6; 	X(PUSH(es));	// 90740 push    es ;~ 28F0:14A6
cs=0x28f0;eip=0x0014a7; 	X(PUSH(bx));	// 90741 push    bx ;~ 28F0:14A7
cs=0x28f0;eip=0x0014a8; 	X(PUSH(cs));	// 90742 push    cs ;~ 28F0:14A8
cs=0x28f0;eip=0x0014a9; 	R(CALL(sub_376e1,0));	// 90743 call    near ptr sub_376E1 ;~ 28F0:14A9
cs=0x28f0;eip=0x0014ac; 	T(ADD(sp, 6));	// 90744 add     sp, 6 ;~ 28F0:14AC
cs=0x28f0;eip=0x0014af; 	R(JMP(loc_3899e));	// 90745 jmp     short loc_3899E ;~ 28F0:14AF
loc_38991:
	// 10211 
cs=0x28f0;eip=0x0014b1; 	T(MOV(ax, 0x1DB));	// 90749 mov     ax, 1DBh ;~ 28F0:14B1
cs=0x28f0;eip=0x0014b4; 	T(MOV(dx, seg_offset(seg041)));	// 90750 mov     dx, seg seg041 ;~ 28F0:14B4
cs=0x28f0;eip=0x0014b7; 	X(PUSH(dx));	// 90751 push    dx ;~ 28F0:14B7
cs=0x28f0;eip=0x0014b8; 	X(PUSH(ax));	// 90752 push    ax ;~ 28F0:14B8
cs=0x28f0;eip=0x0014b9; 	R(CALLF(sub_1c605,0));	// 90753 call    sub_1C605 ;~ 28F0:14B9
loc_3899e:
	// 10212 
cs=0x28f0;eip=0x0014be; 	X(POP(bp));	// 90757 pop     bp ;~ 28F0:14BE
cs=0x28f0;eip=0x0014bf; 	R(RETN(4));	// 90758 retn    4 ;~ 28F0:14BF
sub_389a2:
	// 90765 
cs=0x28f0;eip=0x0014c2; 	X(PUSH(bp));	// 90766 push    bp ;~ 28F0:14C2
cs=0x28f0;eip=0x0014c3; 	X(POP(bp));	// 90767 pop     bp ;~ 28F0:14C3
cs=0x28f0;eip=0x0014c4; 	R(RETN(4));	// 90768 retn    4 ;~ 28F0:14C4
sub_389a7:
	// 90776 
#undef arg_0
#define arg_0 4
	// 90778 arg_0           = dword ptr  4 ;~ 28F0:14C7
cs=0x28f0;eip=0x0014c7; 	X(PUSH(bp));	// 90780 push    bp ;~ 28F0:14C7
cs=0x28f0;eip=0x0014c8; 	T(MOV(bp, sp));	// 90781 mov     bp, sp ;~ 28F0:14C8
cs=0x28f0;eip=0x0014ca; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90782 les     bx, [bp+arg_0] ;~ 28F0:14CA
cs=0x28f0;eip=0x0014cd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 90783 mov     ax, es:[bx+21Ch] ;~ 28F0:14CD
cs=0x28f0;eip=0x0014d2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 90784 mov     dx, es:[bx+21Eh] ;~ 28F0:14D2
cs=0x28f0;eip=0x0014d7; 	T(CMP(*(dw*)(raddr(es,bx+0x218)), ax));	// 90785 cmp     es:[bx+218h], ax ;~ 28F0:14D7
cs=0x28f0;eip=0x0014dc; 	R(JNZ(loc_389c5));	// 90786 jnz     short loc_389C5 ;~ 28F0:14DC
cs=0x28f0;eip=0x0014de; 	T(CMP(*(dw*)(raddr(es,bx+0x21A)), dx));	// 90787 cmp     es:[bx+21Ah], dx ;~ 28F0:14DE
cs=0x28f0;eip=0x0014e3; 	R(JZ(loc_38a3a));	// 90788 jz      short loc_38A3A ;~ 28F0:14E3
loc_389c5:
	// 10213 
cs=0x28f0;eip=0x0014e5; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 90791 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:14E5
cs=0x28f0;eip=0x0014eb; 	R(JZ(loc_38a3a));	// 90792 jz      short loc_38A3A ;~ 28F0:14EB
cs=0x28f0;eip=0x0014ed; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 90793 mov     ax, word ptr unk_57111 ;~ 28F0:14ED
cs=0x28f0;eip=0x0014f0; 	T(CWD);	// 90794 cwd ;~ 28F0:14F0
cs=0x28f0;eip=0x0014f1; 	X(ADD(*(dw*)(raddr(es,bx+0x242)), ax));	// 90795 add     es:[bx+242h], ax ;~ 28F0:14F1
cs=0x28f0;eip=0x0014f6; 	X(ADC(*(dw*)(raddr(es,bx+0x244)), dx));	// 90796 adc     es:[bx+244h], dx ;~ 28F0:14F6
cs=0x28f0;eip=0x0014fb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x246))));	// 90797 mov     ax, es:[bx+246h] ;~ 28F0:14FB
cs=0x28f0;eip=0x001500; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x248))));	// 90798 mov     dx, es:[bx+248h] ;~ 28F0:1500
cs=0x28f0;eip=0x001505; 	T(CMP(*(dw*)(raddr(es,bx+0x244)), dx));	// 90799 cmp     es:[bx+244h], dx ;~ 28F0:1505
cs=0x28f0;eip=0x00150a; 	R(JL(loc_38a3a));	// 90800 jl      short loc_38A3A ;~ 28F0:150A
cs=0x28f0;eip=0x00150c; 	R(JG(loc_389f5));	// 90801 jg      short loc_389F5 ;~ 28F0:150C
cs=0x28f0;eip=0x00150e; 	T(CMP(*(dw*)(raddr(es,bx+0x242)), ax));	// 90802 cmp     es:[bx+242h], ax ;~ 28F0:150E
cs=0x28f0;eip=0x001513; 	R(JC(loc_38a3a));	// 90803 jb      short loc_38A3A ;~ 28F0:1513
loc_389f5:
	// 10214 
cs=0x28f0;eip=0x001515; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x21C))));	// 90806 mov     ax, es:[bx+21Ch] ;~ 28F0:1515
cs=0x28f0;eip=0x00151a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21E))));	// 90807 mov     dx, es:[bx+21Eh] ;~ 28F0:151A
cs=0x28f0;eip=0x00151f; 	T(CMP(*(dw*)(raddr(es,bx+0x21A)), dx));	// 90808 cmp     es:[bx+21Ah], dx ;~ 28F0:151F
cs=0x28f0;eip=0x001524; 	R(JG(loc_38a24));	// 90809 jg      short loc_38A24 ;~ 28F0:1524
cs=0x28f0;eip=0x001526; 	R(JL(loc_38a0f));	// 90810 jl      short loc_38A0F ;~ 28F0:1526
cs=0x28f0;eip=0x001528; 	T(CMP(*(dw*)(raddr(es,bx+0x218)), ax));	// 90811 cmp     es:[bx+218h], ax ;~ 28F0:1528
cs=0x28f0;eip=0x00152d; 	R(JNC(loc_38a24));	// 90812 jnb     short loc_38A24 ;~ 28F0:152D
loc_38a0f:
	// 10215 
cs=0x28f0;eip=0x00152f; 	T(MOV(ax, bx));	// 90815 mov     ax, bx ;~ 28F0:152F
cs=0x28f0;eip=0x001531; 	T(MOV(dx, es));	// 90816 mov     dx, es ;~ 28F0:1531
cs=0x28f0;eip=0x001533; 	T(ADD(ax, 0x218));	// 90817 add     ax, 218h ;~ 28F0:1533
cs=0x28f0;eip=0x001536; 	X(PUSH(dx));	// 90818 push    dx ;~ 28F0:1536
cs=0x28f0;eip=0x001537; 	X(PUSH(ax));	// 90819 push    ax ;~ 28F0:1537
cs=0x28f0;eip=0x001538; 	X(PUSH(*(dw*)(raddr(es,bx+0x22A))));	// 90820 push    word ptr es:[bx+22Ah] ;~ 28F0:1538
cs=0x28f0;eip=0x00153d; 	X(PUSH(*(dw*)(raddr(es,bx+0x228))));	// 90821 push    word ptr es:[bx+228h] ;~ 28F0:153D
cs=0x28f0;eip=0x001542; 	R(JMP(loc_38a37));	// 90822 jmp     short loc_38A37 ;~ 28F0:1542
loc_38a24:
	// 10216 
cs=0x28f0;eip=0x001544; 	T(MOV(ax, bx));	// 90827 mov     ax, bx ;~ 28F0:1544
cs=0x28f0;eip=0x001546; 	T(MOV(dx, es));	// 90828 mov     dx, es ;~ 28F0:1546
cs=0x28f0;eip=0x001548; 	T(ADD(ax, 0x218));	// 90829 add     ax, 218h ;~ 28F0:1548
cs=0x28f0;eip=0x00154b; 	X(PUSH(dx));	// 90830 push    dx ;~ 28F0:154B
cs=0x28f0;eip=0x00154c; 	X(PUSH(ax));	// 90831 push    ax ;~ 28F0:154C
cs=0x28f0;eip=0x00154d; 	X(PUSH(*(dw*)(raddr(es,bx+0x22E))));	// 90832 push    word ptr es:[bx+22Eh] ;~ 28F0:154D
cs=0x28f0;eip=0x001552; 	X(PUSH(*(dw*)(raddr(es,bx+0x22C))));	// 90833 push    word ptr es:[bx+22Ch] ;~ 28F0:1552
loc_38a37:
	// 10217 
cs=0x28f0;eip=0x001557; 	R(CALL(sub_3b9eb,0));	// 90836 call    sub_3B9EB ;~ 28F0:1557
loc_38a3a:
	// 10218 
cs=0x28f0;eip=0x00155a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90840 les     bx, [bp+arg_0] ;~ 28F0:155A
cs=0x28f0;eip=0x00155d; 	T(CMP(*(dw*)(raddr(es,bx+0x21E)), 0));	// 90841 cmp     word ptr es:[bx+21Eh], 0 ;~ 28F0:155D
cs=0x28f0;eip=0x001563; 	R(JGE(loc_38a48));	// 90842 jge     short loc_38A48 ;~ 28F0:1563
cs=0x28f0;eip=0x001565; 	R(JMP(loc_38b00));	// 90843 jmp     loc_38B00 ;~ 28F0:1565
loc_38a48:
	// 10219 
cs=0x28f0;eip=0x001568; 	R(JG(loc_38a55));	// 90847 jg      short loc_38A55 ;~ 28F0:1568
cs=0x28f0;eip=0x00156a; 	T(CMP(*(dw*)(raddr(es,bx+0x21C)), 0));	// 90848 cmp     word ptr es:[bx+21Ch], 0 ;~ 28F0:156A
cs=0x28f0;eip=0x001570; 	R(JNZ(loc_38a55));	// 90849 jnz     short loc_38A55 ;~ 28F0:1570
cs=0x28f0;eip=0x001572; 	R(JMP(loc_38b00));	// 90850 jmp     loc_38B00 ;~ 28F0:1572
loc_38a55:
	// 10220 
cs=0x28f0;eip=0x001575; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 90855 mov     ax, word ptr unk_57111 ;~ 28F0:1575
cs=0x28f0;eip=0x001578; 	T(CWD);	// 90856 cwd ;~ 28F0:1578
cs=0x28f0;eip=0x001579; 	X(ADD(*(dw*)(raddr(es,bx+0x27A)), ax));	// 90857 add     es:[bx+27Ah], ax ;~ 28F0:1579
cs=0x28f0;eip=0x00157e; 	X(ADC(*(dw*)(raddr(es,bx+0x27C)), dx));	// 90858 adc     es:[bx+27Ch], dx ;~ 28F0:157E
cs=0x28f0;eip=0x001583; 	T(CMP(*(dw*)(raddr(es,bx+0x27C)), 0));	// 90859 cmp     word ptr es:[bx+27Ch], 0 ;~ 28F0:1583
cs=0x28f0;eip=0x001589; 	R(JGE(loc_38a6e));	// 90860 jge     short loc_38A6E ;~ 28F0:1589
cs=0x28f0;eip=0x00158b; 	R(JMP(loc_38b00));	// 90861 jmp     loc_38B00 ;~ 28F0:158B
loc_38a6e:
	// 10221 
cs=0x28f0;eip=0x00158e; 	R(JG(loc_38a7c));	// 90865 jg      short loc_38A7C ;~ 28F0:158E
cs=0x28f0;eip=0x001590; 	T(CMP(*(dw*)(raddr(es,bx+0x27A)), 0x100));	// 90866 cmp     word ptr es:[bx+27Ah], 100h ;~ 28F0:1590
cs=0x28f0;eip=0x001597; 	R(JNC(loc_38a7c));	// 90867 jnb     short loc_38A7C ;~ 28F0:1597
cs=0x28f0;eip=0x001599; 	R(JMP(loc_38b00));	// 90868 jmp     loc_38B00 ;~ 28F0:1599
loc_38a7c:
	// 10222 
cs=0x28f0;eip=0x00159c; 	T(MOV(ax, 0x64));	// 90873 mov     ax, 64h ; 'd' ;~ 28F0:159C
cs=0x28f0;eip=0x00159f; 	T(CWD);	// 90874 cwd ;~ 28F0:159F
cs=0x28f0;eip=0x0015a0; 	X(PUSH(dx));	// 90875 push    dx ;~ 28F0:15A0
cs=0x28f0;eip=0x0015a1; 	X(PUSH(ax));	// 90876 push    ax ;~ 28F0:15A1
cs=0x28f0;eip=0x0015a2; 	X(PUSH(*(dw*)(raddr(es,bx+0x21A))));	// 90877 push    word ptr es:[bx+21Ah] ;~ 28F0:15A2
cs=0x28f0;eip=0x0015a7; 	X(PUSH(*(dw*)(raddr(es,bx+0x218))));	// 90878 push    word ptr es:[bx+218h] ;~ 28F0:15A7
cs=0x28f0;eip=0x0015ac; 	T(MOV(ax, 0x100));	// 90879 mov     ax, 100h ;~ 28F0:15AC
cs=0x28f0;eip=0x0015af; 	T(CWD);	// 90880 cwd ;~ 28F0:15AF
cs=0x28f0;eip=0x0015b0; 	X(PUSH(dx));	// 90881 push    dx ;~ 28F0:15B0
cs=0x28f0;eip=0x0015b1; 	X(PUSH(ax));	// 90882 push    ax ;~ 28F0:15B1
cs=0x28f0;eip=0x0015b2; 	X(PUSH(*(dw*)(raddr(es,bx+0x27C))));	// 90883 push    word ptr es:[bx+27Ch] ;~ 28F0:15B2
cs=0x28f0;eip=0x0015b7; 	X(PUSH(*(dw*)(raddr(es,bx+0x27A))));	// 90884 push    word ptr es:[bx+27Ah] ;~ 28F0:15B7
cs=0x28f0;eip=0x0015bc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x286))));	// 90885 mov     ax, es:[bx+286h] ;~ 28F0:15BC
cs=0x28f0;eip=0x0015c1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x288))));	// 90886 mov     dx, es:[bx+288h] ;~ 28F0:15C1
cs=0x28f0;eip=0x0015c6; 	T(MOV(cl, 8));	// 90887 mov     cl, 8 ;~ 28F0:15C6
cs=0x28f0;eip=0x0015c8; 	R(CALLF(sub_10240,0));	// 90888 call    sub_10240 ;~ 28F0:15C8
cs=0x28f0;eip=0x0015cd; 	X(PUSH(dx));	// 90889 push    dx ;~ 28F0:15CD
cs=0x28f0;eip=0x0015ce; 	X(PUSH(ax));	// 90890 push    ax ;~ 28F0:15CE
cs=0x28f0;eip=0x0015cf; 	R(CALLF(sub_105c2,0));	// 90891 call    sub_105C2 ;~ 28F0:15CF
cs=0x28f0;eip=0x0015d4; 	X(PUSH(dx));	// 90892 push    dx ;~ 28F0:15D4
cs=0x28f0;eip=0x0015d5; 	X(PUSH(ax));	// 90893 push    ax ;~ 28F0:15D5
cs=0x28f0;eip=0x0015d6; 	R(CALLF(sub_10526,0));	// 90894 call    sub_10526 ;~ 28F0:15D6
cs=0x28f0;eip=0x0015db; 	X(PUSH(dx));	// 90895 push    dx ;~ 28F0:15DB
cs=0x28f0;eip=0x0015dc; 	X(PUSH(ax));	// 90896 push    ax ;~ 28F0:15DC
cs=0x28f0;eip=0x0015dd; 	R(CALLF(sub_105c2,0));	// 90897 call    sub_105C2 ;~ 28F0:15DD
cs=0x28f0;eip=0x0015e2; 	X(PUSH(dx));	// 90898 push    dx ;~ 28F0:15E2
cs=0x28f0;eip=0x0015e3; 	X(PUSH(ax));	// 90899 push    ax ;~ 28F0:15E3
cs=0x28f0;eip=0x0015e4; 	R(CALLF(sub_10526,0));	// 90900 call    sub_10526 ;~ 28F0:15E4
cs=0x28f0;eip=0x0015e9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 90901 les     bx, [bp+arg_0] ;~ 28F0:15E9
cs=0x28f0;eip=0x0015ec; 	X(SUB(*(dw*)(raddr(es,bx+0x276)), ax));	// 90902 sub     es:[bx+276h], ax ;~ 28F0:15EC
cs=0x28f0;eip=0x0015f1; 	X(SBB(*(dw*)(raddr(es,bx+0x278)), dx));	// 90903 sbb     es:[bx+278h], dx ;~ 28F0:15F1
cs=0x28f0;eip=0x0015f6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 90904 mov     ax, es:[bx+276h] ;~ 28F0:15F6
cs=0x28f0;eip=0x0015fb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x278))));	// 90905 mov     dx, es:[bx+278h] ;~ 28F0:15FB
cs=0x28f0;eip=0x001600; 	T(OR(dx, dx));	// 90906 or      dx, dx ;~ 28F0:1600
cs=0x28f0;eip=0x001602; 	R(JG(loc_38aea));	// 90907 jg      short loc_38AEA ;~ 28F0:1602
cs=0x28f0;eip=0x001604; 	R(JGE(loc_38aea));	// 90908 jge     short loc_38AEA ;~ 28F0:1604
cs=0x28f0;eip=0x001606; 	T(SUB(dx, dx));	// 90909 sub     dx, dx ;~ 28F0:1606
cs=0x28f0;eip=0x001608; 	T(SUB(ax, ax));	// 90910 sub     ax, ax ;~ 28F0:1608
loc_38aea:
	// 10223 
cs=0x28f0;eip=0x00160a; 	X(MOV(*(dw*)(raddr(es,bx+0x276)), ax));	// 90914 mov     es:[bx+276h], ax ;~ 28F0:160A
cs=0x28f0;eip=0x00160f; 	X(MOV(*(dw*)(raddr(es,bx+0x278)), dx));	// 90915 mov     es:[bx+278h], dx ;~ 28F0:160F
cs=0x28f0;eip=0x001614; 	T(SUB(ax, ax));	// 90916 sub     ax, ax ;~ 28F0:1614
cs=0x28f0;eip=0x001616; 	X(MOV(*(dw*)(raddr(es,bx+0x27C)), ax));	// 90917 mov     es:[bx+27Ch], ax ;~ 28F0:1616
cs=0x28f0;eip=0x00161b; 	X(MOV(*(dw*)(raddr(es,bx+0x27A)), ax));	// 90918 mov     es:[bx+27Ah], ax ;~ 28F0:161B
loc_38b00:
	// 10224 
cs=0x28f0;eip=0x001620; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 90922 mov     ax, es:[bx+276h] ;~ 28F0:1620
cs=0x28f0;eip=0x001625; 	T(OR(ax, *(dw*)(raddr(es,bx+0x278))));	// 90923 or      ax, es:[bx+278h] ;~ 28F0:1625
cs=0x28f0;eip=0x00162a; 	R(JNZ(loc_38b18));	// 90924 jnz     short loc_38B18 ;~ 28F0:162A
cs=0x28f0;eip=0x00162c; 	T(SUB(ax, ax));	// 90925 sub     ax, ax ;~ 28F0:162C
cs=0x28f0;eip=0x00162e; 	X(MOV(*(dw*)(raddr(es,bx+0x21E)), ax));	// 90926 mov     es:[bx+21Eh], ax ;~ 28F0:162E
cs=0x28f0;eip=0x001633; 	X(MOV(*(dw*)(raddr(es,bx+0x21C)), ax));	// 90927 mov     es:[bx+21Ch], ax ;~ 28F0:1633
loc_38b18:
	// 10225 
cs=0x28f0;eip=0x001638; 	X(POP(bp));	// 90930 pop     bp ;~ 28F0:1638
cs=0x28f0;eip=0x001639; 	R(RETN(4));	// 90931 retn    4 ;~ 28F0:1639
sub_38b1c:
	// 90939 
#undef arg_0
#define arg_0 4
	// 90942 arg_0           = word ptr  4 ;~ 28F0:163C
cs=0x28f0;eip=0x00163c; 	X(PUSH(bp));	// 90944 push    bp ;~ 28F0:163C
cs=0x28f0;eip=0x00163d; 	T(MOV(bp, sp));	// 90945 mov     bp, sp ;~ 28F0:163D
cs=0x28f0;eip=0x00163f; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 90946 cmp     [bp+arg_0], 0 ;~ 28F0:163F
cs=0x28f0;eip=0x001643; 	R(JLE(loc_38b38));	// 90947 jle     short loc_38B38 ;~ 28F0:1643
cs=0x28f0;eip=0x001645; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x14));	// 90948 cmp     [bp+arg_0], 14h ;~ 28F0:1645
cs=0x28f0;eip=0x001649; 	R(JG(loc_38b32));	// 90949 jg      short loc_38B32 ;~ 28F0:1649
loc_38b2b:
	// 10226 
cs=0x28f0;eip=0x00164b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 90952 mov     [bp+arg_0], 0 ;~ 28F0:164B
cs=0x28f0;eip=0x001650; 	R(JMP(loc_38b48));	// 90953 jmp     short loc_38B48 ;~ 28F0:1650
loc_38b32:
	// 10227 
cs=0x28f0;eip=0x001652; 	X(SUB(*(dw*)(raddr(ss,bp+arg_0)), 0x14));	// 90957 sub     [bp+arg_0], 14h ;~ 28F0:1652
cs=0x28f0;eip=0x001656; 	R(JMP(loc_38b48));	// 90958 jmp     short loc_38B48 ;~ 28F0:1656
loc_38b38:
	// 10228 
cs=0x28f0;eip=0x001658; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 90962 cmp     [bp+arg_0], 0 ;~ 28F0:1658
cs=0x28f0;eip=0x00165c; 	R(JGE(loc_38b48));	// 90963 jge     short loc_38B48 ;~ 28F0:165C
cs=0x28f0;eip=0x00165e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FFEC));	// 90964 cmp     [bp+arg_0], 0FFECh ;~ 28F0:165E
cs=0x28f0;eip=0x001662; 	R(JGE(loc_38b2b));	// 90965 jge     short loc_38B2B ;~ 28F0:1662
cs=0x28f0;eip=0x001664; 	X(ADD(*(dw*)(raddr(ss,bp+arg_0)), 0x14));	// 90966 add     [bp+arg_0], 14h ;~ 28F0:1664
loc_38b48:
	// 10229 
cs=0x28f0;eip=0x001668; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 90970 mov     ax, [bp+arg_0] ;~ 28F0:1668
cs=0x28f0;eip=0x00166b; 	X(POP(bp));	// 90971 pop     bp ;~ 28F0:166B
cs=0x28f0;eip=0x00166c; 	R(RETN(2));	// 90972 retn    2 ;~ 28F0:166C
sub_38b4f:
	// 90980 
#undef arg_0
#define arg_0 6
	// 90982 arg_0           = dword ptr  6 ;~ 28F0:166F
cs=0x28f0;eip=0x00166f; 	X(PUSH(bp));	// 90984 push    bp ;~ 28F0:166F
cs=0x28f0;eip=0x001670; 	T(MOV(bp, sp));	// 90985 mov     bp, sp ;~ 28F0:1670
cs=0x28f0;eip=0x001672; 	R(CALLF(sub_2eef5,0));	// 90986 call    sub_2EEF5 ;~ 28F0:1672
cs=0x28f0;eip=0x001677; 	T(AND(al, 8));	// 90987 and     al, 8 ;~ 28F0:1677
cs=0x28f0;eip=0x001679; 	T(CMP(al, 1));	// 90988 cmp     al, 1 ;~ 28F0:1679
cs=0x28f0;eip=0x00167b; 	T(SBB(cx, cx));	// 90989 sbb     cx, cx ;~ 28F0:167B
cs=0x28f0;eip=0x00167d; 	T(INC(cx));	// 90990 inc     cx ;~ 28F0:167D
cs=0x28f0;eip=0x00167e; 	X(MOV(unk_57113, cl));	// 90991 mov     byte ptr unk_57113, cl ;~ 28F0:167E
cs=0x28f0;eip=0x001682; 	X(PUSH(*(dw*)((&unk_56486))));	// 90992 push    word ptr unk_56486 ;~ 28F0:1682
cs=0x28f0;eip=0x001686; 	R(CALL(sub_38b1c,0));	// 90993 call    sub_38B1C ;~ 28F0:1686
cs=0x28f0;eip=0x001689; 	X(MOV(*(dw*)((&unk_57114)), ax));	// 90994 mov     word ptr unk_57114, ax ;~ 28F0:1689
cs=0x28f0;eip=0x00168c; 	X(PUSH(*(dw*)((&unk_56488))));	// 90995 push    word ptr unk_56488 ;~ 28F0:168C
cs=0x28f0;eip=0x001690; 	R(CALL(sub_38b1c,0));	// 90996 call    sub_38B1C ;~ 28F0:1690
cs=0x28f0;eip=0x001693; 	X(MOV(*(dw*)((&unk_57116)), ax));	// 90997 mov     word ptr unk_57116, ax ;~ 28F0:1693
cs=0x28f0;eip=0x001696; 	T(MOV(ax, *(dw*)((&unk_57056))));	// 90998 mov     ax, word ptr unk_57056 ;~ 28F0:1696
cs=0x28f0;eip=0x001699; 	X(MOV(*(dw*)((&unk_57111)), ax));	// 90999 mov     word ptr unk_57111, ax ;~ 28F0:1699
cs=0x28f0;eip=0x00169c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91000 les     bx, [bp+arg_0] ;~ 28F0:169C
cs=0x28f0;eip=0x00169f; 	T(MOV(ax, word_5705a));	// 91001 mov     ax, word_5705A ;~ 28F0:169F
cs=0x28f0;eip=0x0016a2; 	T(MOV(dx, word_5705c));	// 91002 mov     dx, word_5705C ;~ 28F0:16A2
cs=0x28f0;eip=0x0016a6; 	X(MOV(*(dw*)(raddr(es,bx+0x318)), ax));	// 91003 mov     es:[bx+318h], ax ;~ 28F0:16A6
cs=0x28f0;eip=0x0016ab; 	X(MOV(*(dw*)(raddr(es,bx+0x31A)), dx));	// 91004 mov     es:[bx+31Ah], dx ;~ 28F0:16AB
cs=0x28f0;eip=0x0016b0; 	X(PUSH(es));	// 91005 push    es ;~ 28F0:16B0
cs=0x28f0;eip=0x0016b1; 	X(PUSH(bx));	// 91006 push    bx ;~ 28F0:16B1
cs=0x28f0;eip=0x0016b2; 	R(CALL(sub_389a7,0));	// 91007 call    sub_389A7 ;~ 28F0:16B2
cs=0x28f0;eip=0x0016b5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91008 les     bx, [bp+arg_0] ;~ 28F0:16B5
cs=0x28f0;eip=0x0016b8; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 91009 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:16B8
cs=0x28f0;eip=0x0016be; 	R(JNZ(loc_38ba7));	// 91010 jnz     short loc_38BA7 ;~ 28F0:16BE
cs=0x28f0;eip=0x0016c0; 	X(PUSH(es));	// 91011 push    es ;~ 28F0:16C0
cs=0x28f0;eip=0x0016c1; 	X(PUSH(bx));	// 91012 push    bx ;~ 28F0:16C1
cs=0x28f0;eip=0x0016c2; 	R(CALL(sub_39c0c,0));	// 91013 call    sub_39C0C ;~ 28F0:16C2
cs=0x28f0;eip=0x0016c5; 	R(JMP(loc_38bff));	// 91014 jmp     short loc_38BFF ;~ 28F0:16C5
loc_38ba7:
	// 10230 
cs=0x28f0;eip=0x0016c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91018 les     bx, [bp+arg_0] ;~ 28F0:16C7
cs=0x28f0;eip=0x0016ca; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 6));	// 91019 cmp     word ptr es:[bx+332h], 6 ;~ 28F0:16CA
cs=0x28f0;eip=0x0016d0; 	R(JNZ(loc_38bb9));	// 91020 jnz     short loc_38BB9 ;~ 28F0:16D0
cs=0x28f0;eip=0x0016d2; 	X(PUSH(es));	// 91021 push    es ;~ 28F0:16D2
cs=0x28f0;eip=0x0016d3; 	X(PUSH(bx));	// 91022 push    bx ;~ 28F0:16D3
cs=0x28f0;eip=0x0016d4; 	R(CALL(sub_3b608,0));	// 91023 call    sub_3B608 ;~ 28F0:16D4
cs=0x28f0;eip=0x0016d7; 	R(JMP(loc_38bff));	// 91024 jmp     short loc_38BFF ;~ 28F0:16D7
loc_38bb9:
	// 10231 
cs=0x28f0;eip=0x0016d9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91028 les     bx, [bp+arg_0] ;~ 28F0:16D9
cs=0x28f0;eip=0x0016dc; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 91029 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:16DC
cs=0x28f0;eip=0x0016e2; 	R(JNZ(loc_38bcb));	// 91030 jnz     short loc_38BCB ;~ 28F0:16E2
cs=0x28f0;eip=0x0016e4; 	X(PUSH(es));	// 91031 push    es ;~ 28F0:16E4
cs=0x28f0;eip=0x0016e5; 	X(PUSH(bx));	// 91032 push    bx ;~ 28F0:16E5
cs=0x28f0;eip=0x0016e6; 	R(CALL(sub_3884d,0));	// 91033 call    sub_3884D ;~ 28F0:16E6
cs=0x28f0;eip=0x0016e9; 	R(JMP(loc_38bff));	// 91034 jmp     short loc_38BFF ;~ 28F0:16E9
loc_38bcb:
	// 10232 
cs=0x28f0;eip=0x0016eb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91038 les     bx, [bp+arg_0] ;~ 28F0:16EB
cs=0x28f0;eip=0x0016ee; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 91039 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:16EE
cs=0x28f0;eip=0x0016f4; 	R(JNZ(loc_38bdd));	// 91040 jnz     short loc_38BDD ;~ 28F0:16F4
cs=0x28f0;eip=0x0016f6; 	X(PUSH(es));	// 91041 push    es ;~ 28F0:16F6
cs=0x28f0;eip=0x0016f7; 	X(PUSH(bx));	// 91042 push    bx ;~ 28F0:16F7
cs=0x28f0;eip=0x0016f8; 	R(CALL(sub_389a2,0));	// 91043 call    sub_389A2 ;~ 28F0:16F8
cs=0x28f0;eip=0x0016fb; 	R(JMP(loc_38bff));	// 91044 jmp     short loc_38BFF ;~ 28F0:16FB
loc_38bdd:
	// 10233 
cs=0x28f0;eip=0x0016fd; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91048 les     bx, [bp+arg_0] ;~ 28F0:16FD
cs=0x28f0;eip=0x001700; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 7));	// 91049 cmp     word ptr es:[bx+332h], 7 ;~ 28F0:1700
cs=0x28f0;eip=0x001706; 	R(JNZ(loc_38bef));	// 91050 jnz     short loc_38BEF ;~ 28F0:1706
cs=0x28f0;eip=0x001708; 	X(PUSH(es));	// 91051 push    es ;~ 28F0:1708
cs=0x28f0;eip=0x001709; 	X(PUSH(bx));	// 91052 push    bx ;~ 28F0:1709
cs=0x28f0;eip=0x00170a; 	R(CALL(sub_3887f,0));	// 91053 call    sub_3887F ;~ 28F0:170A
cs=0x28f0;eip=0x00170d; 	R(JMP(loc_38bff));	// 91054 jmp     short loc_38BFF ;~ 28F0:170D
loc_38bef:
	// 10234 
cs=0x28f0;eip=0x00170f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91058 les     bx, [bp+arg_0] ;~ 28F0:170F
cs=0x28f0;eip=0x001712; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 91059 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:1712
cs=0x28f0;eip=0x001718; 	R(JNZ(loc_38bff));	// 91060 jnz     short loc_38BFF ;~ 28F0:1718
cs=0x28f0;eip=0x00171a; 	X(PUSH(es));	// 91061 push    es ;~ 28F0:171A
cs=0x28f0;eip=0x00171b; 	X(PUSH(bx));	// 91062 push    bx ;~ 28F0:171B
cs=0x28f0;eip=0x00171c; 	R(CALL(sub_399d0,0));	// 91063 call    sub_399D0 ;~ 28F0:171C
loc_38bff:
	// 10235 
cs=0x28f0;eip=0x00171f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91067 les     bx, [bp+arg_0] ;~ 28F0:171F
cs=0x28f0;eip=0x001722; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 0));	// 91068 cmp     word ptr es:[bx+332h], 0 ;~ 28F0:1722
cs=0x28f0;eip=0x001728; 	R(JZ(loc_38c57));	// 91069 jz      short loc_38C57 ;~ 28F0:1728
cs=0x28f0;eip=0x00172a; 	X(PUSH(es));	// 91070 push    es ;~ 28F0:172A
cs=0x28f0;eip=0x00172b; 	X(PUSH(bx));	// 91071 push    bx ;~ 28F0:172B
cs=0x28f0;eip=0x00172c; 	R(CALL(sub_3c5a1,0));	// 91072 call    sub_3C5A1 ;~ 28F0:172C
cs=0x28f0;eip=0x00172f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91073 push    word ptr [bp+arg_0+2] ;~ 28F0:172F
cs=0x28f0;eip=0x001732; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91074 push    word ptr [bp+arg_0] ;~ 28F0:1732
cs=0x28f0;eip=0x001735; 	R(CALL(sub_3ccd7,0));	// 91075 call    sub_3CCD7 ;~ 28F0:1735
cs=0x28f0;eip=0x001738; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91076 push    word ptr [bp+arg_0+2] ;~ 28F0:1738
cs=0x28f0;eip=0x00173b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91077 push    word ptr [bp+arg_0] ;~ 28F0:173B
cs=0x28f0;eip=0x00173e; 	R(CALL(sub_3c71e,0));	// 91078 call    sub_3C71E ;~ 28F0:173E
cs=0x28f0;eip=0x001741; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91079 push    word ptr [bp+arg_0+2] ;~ 28F0:1741
cs=0x28f0;eip=0x001744; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91080 push    word ptr [bp+arg_0] ;~ 28F0:1744
cs=0x28f0;eip=0x001747; 	R(CALL(sub_3c974,0));	// 91081 call    sub_3C974 ;~ 28F0:1747
cs=0x28f0;eip=0x00174a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91082 push    word ptr [bp+arg_0+2] ;~ 28F0:174A
cs=0x28f0;eip=0x00174d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91083 push    word ptr [bp+arg_0] ;~ 28F0:174D
cs=0x28f0;eip=0x001750; 	R(CALL(sub_3cf1a,0));	// 91084 call    sub_3CF1A ;~ 28F0:1750
cs=0x28f0;eip=0x001753; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91085 push    word ptr [bp+arg_0+2] ;~ 28F0:1753
cs=0x28f0;eip=0x001756; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91086 push    word ptr [bp+arg_0] ;~ 28F0:1756
cs=0x28f0;eip=0x001759; 	R(CALL(sub_37c08,0));	// 91087 call    sub_37C08 ;~ 28F0:1759
cs=0x28f0;eip=0x00175c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91088 push    word ptr [bp+arg_0+2] ;~ 28F0:175C
cs=0x28f0;eip=0x00175f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91089 push    word ptr [bp+arg_0] ;~ 28F0:175F
cs=0x28f0;eip=0x001762; 	R(CALL(sub_37e25,0));	// 91090 call    sub_37E25 ;~ 28F0:1762
cs=0x28f0;eip=0x001765; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91091 push    word ptr [bp+arg_0+2] ;~ 28F0:1765
cs=0x28f0;eip=0x001768; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91092 push    word ptr [bp+arg_0] ;~ 28F0:1768
cs=0x28f0;eip=0x00176b; 	R(CALL(sub_3cc2d,0));	// 91093 call    sub_3CC2D ;~ 28F0:176B
cs=0x28f0;eip=0x00176e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91094 push    word ptr [bp+arg_0+2] ;~ 28F0:176E
cs=0x28f0;eip=0x001771; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91095 push    word ptr [bp+arg_0] ;~ 28F0:1771
cs=0x28f0;eip=0x001774; 	R(CALL(sub_37c08,0));	// 91096 call    sub_37C08 ;~ 28F0:1774
loc_38c57:
	// 10236 
cs=0x28f0;eip=0x001777; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91099 push    word ptr [bp+arg_0+2] ;~ 28F0:1777
cs=0x28f0;eip=0x00177a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91100 push    word ptr [bp+arg_0] ;~ 28F0:177A
cs=0x28f0;eip=0x00177d; 	R(CALL(sub_37df2,0));	// 91101 call    sub_37DF2 ;~ 28F0:177D
cs=0x28f0;eip=0x001780; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91102 les     bx, [bp+arg_0] ;~ 28F0:1780
cs=0x28f0;eip=0x001783; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 91103 mov     ax, es:[bx+120h] ;~ 28F0:1783
cs=0x28f0;eip=0x001788; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 91104 mov     dx, es:[bx+122h] ;~ 28F0:1788
cs=0x28f0;eip=0x00178d; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 91105 mov     bx, word ptr unk_47A9A ;~ 28F0:178D
cs=0x28f0;eip=0x001791; 	T(MOV(cx, *(dw*)((&unk_56fbf))));	// 91106 mov     cx, word ptr unk_56FBF ;~ 28F0:1791
cs=0x28f0;eip=0x001795; 	T(MOV(es, bx));	// 91107 mov     es, bx ;~ 28F0:1795
cs=0x28f0;eip=0x001797; 	T(MOV(bx, cx));	// 91109 mov     bx, cx ;~ 28F0:1797
cs=0x28f0;eip=0x001799; 	X(MOV(*(dw*)(raddr(es,bx+0x1A)), ax));	// 91110 mov     es:[bx+1Ah], ax ;~ 28F0:1799
cs=0x28f0;eip=0x00179d; 	X(MOV(*(dw*)(raddr(es,bx+0x1C)), dx));	// 91111 mov     es:[bx+1Ch], dx ;~ 28F0:179D
cs=0x28f0;eip=0x0017a1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91112 les     bx, [bp+arg_0] ;~ 28F0:17A1
cs=0x28f0;eip=0x0017a4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C0))));	// 91114 mov     ax, es:[bx+1C0h] ;~ 28F0:17A4
cs=0x28f0;eip=0x0017a9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C2))));	// 91115 mov     dx, es:[bx+1C2h] ;~ 28F0:17A9
cs=0x28f0;eip=0x0017ae; 	T(NEG(ax));	// 91116 neg     ax ;~ 28F0:17AE
cs=0x28f0;eip=0x0017b0; 	T(ADC(dx, 0));	// 91117 adc     dx, 0 ;~ 28F0:17B0
cs=0x28f0;eip=0x0017b3; 	T(NEG(dx));	// 91118 neg     dx ;~ 28F0:17B3
cs=0x28f0;eip=0x0017b5; 	X(MOV(*(dw*)((&unk_47aba)), ax));	// 91119 mov     word ptr unk_47ABA, ax ;~ 28F0:17B5
cs=0x28f0;eip=0x0017b8; 	X(MOV(*(dw*)((&unk_47abc)), dx));	// 91120 mov     word ptr unk_47ABC, dx ;~ 28F0:17B8
cs=0x28f0;eip=0x0017bc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x320))));	// 91121 mov     ax, es:[bx+320h] ;~ 28F0:17BC
cs=0x28f0;eip=0x0017c1; 	X(POP(bp));	// 91122 pop     bp ;~ 28F0:17C1
cs=0x28f0;eip=0x0017c2; 	R(RETF(0));	// 91123 retf ;~ 28F0:17C2
sub_38ca4:
	// 91133 
#undef var_4
#define var_4 -4
	// 91136 var_4           = dword ptr -4 ;~ 28F0:17C4
#undef arg_0
#define arg_0 4
	// 91137 arg_0           = dword ptr  4 ;~ 28F0:17C4
cs=0x28f0;eip=0x0017c4; 	X(PUSH(bp));	// 91139 push    bp ;~ 28F0:17C4
cs=0x28f0;eip=0x0017c5; 	T(MOV(bp, sp));	// 91140 mov     bp, sp ;~ 28F0:17C5
cs=0x28f0;eip=0x0017c7; 	T(SUB(sp, 4));	// 91141 sub     sp, 4 ;~ 28F0:17C7
cs=0x28f0;eip=0x0017ca; 	X(PUSH(di));	// 91142 push    di ;~ 28F0:17CA
cs=0x28f0;eip=0x0017cb; 	X(PUSH(si));	// 91143 push    si ;~ 28F0:17CB
cs=0x28f0;eip=0x0017cc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91144 les     bx, [bp+arg_0] ;~ 28F0:17CC
cs=0x28f0;eip=0x0017cf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 91145 mov     ax, es:[bx+326h] ;~ 28F0:17CF
cs=0x28f0;eip=0x0017d4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x328))));	// 91146 mov     dx, es:[bx+328h] ;~ 28F0:17D4
cs=0x28f0;eip=0x0017d9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 91147 mov     word ptr [bp+var_4], ax ;~ 28F0:17D9
cs=0x28f0;eip=0x0017dc; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 91148 mov     word ptr [bp+var_4+2], dx ;~ 28F0:17DC
cs=0x28f0;eip=0x0017df; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 91149 mov     ax, es:[bx+120h] ;~ 28F0:17DF
cs=0x28f0;eip=0x0017e4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 91150 mov     dx, es:[bx+122h] ;~ 28F0:17E4
cs=0x28f0;eip=0x0017e9; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91151 les     bx, [bp+var_4] ;~ 28F0:17E9
cs=0x28f0;eip=0x0017ec; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 91152 mov     es:[bx+120h], ax ;~ 28F0:17EC
cs=0x28f0;eip=0x0017f1; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 91153 mov     es:[bx+122h], dx ;~ 28F0:17F1
cs=0x28f0;eip=0x0017f6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91154 les     bx, [bp+arg_0] ;~ 28F0:17F6
cs=0x28f0;eip=0x0017f9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 91155 mov     ax, es:[bx+140h] ;~ 28F0:17F9
cs=0x28f0;eip=0x0017fe; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 91156 mov     dx, es:[bx+142h] ;~ 28F0:17FE
cs=0x28f0;eip=0x001803; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91157 les     bx, [bp+var_4] ;~ 28F0:1803
cs=0x28f0;eip=0x001806; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 91158 mov     es:[bx+140h], ax ;~ 28F0:1806
cs=0x28f0;eip=0x00180b; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 91159 mov     es:[bx+142h], dx ;~ 28F0:180B
cs=0x28f0;eip=0x001810; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91160 les     bx, [bp+arg_0] ;~ 28F0:1810
cs=0x28f0;eip=0x001813; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x160))));	// 91161 mov     ax, es:[bx+160h] ;~ 28F0:1813
cs=0x28f0;eip=0x001818; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x162))));	// 91162 mov     dx, es:[bx+162h] ;~ 28F0:1818
cs=0x28f0;eip=0x00181d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91163 les     bx, [bp+var_4] ;~ 28F0:181D
cs=0x28f0;eip=0x001820; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 91164 mov     es:[bx+160h], ax ;~ 28F0:1820
cs=0x28f0;eip=0x001825; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 91165 mov     es:[bx+162h], dx ;~ 28F0:1825
cs=0x28f0;eip=0x00182a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91166 les     bx, [bp+arg_0] ;~ 28F0:182A
cs=0x28f0;eip=0x00182d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C0))));	// 91167 mov     ax, es:[bx+1C0h] ;~ 28F0:182D
cs=0x28f0;eip=0x001832; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C2))));	// 91168 mov     dx, es:[bx+1C2h] ;~ 28F0:1832
cs=0x28f0;eip=0x001837; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91169 les     bx, [bp+var_4] ;~ 28F0:1837
cs=0x28f0;eip=0x00183a; 	X(MOV(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 91170 mov     es:[bx+1C0h], ax ;~ 28F0:183A
cs=0x28f0;eip=0x00183f; 	X(MOV(*(dw*)(raddr(es,bx+0x1C2)), dx));	// 91171 mov     es:[bx+1C2h], dx ;~ 28F0:183F
cs=0x28f0;eip=0x001844; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91172 les     bx, [bp+arg_0] ;~ 28F0:1844
cs=0x28f0;eip=0x001847; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 91173 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:1847
cs=0x28f0;eip=0x00184d; 	R(JNZ(loc_38d64));	// 91174 jnz     short loc_38D64 ;~ 28F0:184D
cs=0x28f0;eip=0x00184f; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 91175 mov     ax, es:[bx] ;~ 28F0:184F
cs=0x28f0;eip=0x001852; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 91176 mov     dx, es:[bx+2] ;~ 28F0:1852
cs=0x28f0;eip=0x001856; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91177 les     bx, [bp+var_4] ;~ 28F0:1856
cs=0x28f0;eip=0x001859; 	X(MOV(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 91178 mov     es:[bx+0C0h], ax ;~ 28F0:1859
cs=0x28f0;eip=0x00185e; 	X(MOV(*(dw*)(raddr(es,bx+0x0C2)), dx));	// 91179 mov     es:[bx+0C2h], dx ;~ 28F0:185E
cs=0x28f0;eip=0x001863; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91180 les     bx, [bp+arg_0] ;~ 28F0:1863
cs=0x28f0;eip=0x001866; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 91181 mov     ax, es:[bx+20h] ;~ 28F0:1866
cs=0x28f0;eip=0x00186a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 91182 mov     dx, es:[bx+22h] ;~ 28F0:186A
cs=0x28f0;eip=0x00186e; 	T(NEG(ax));	// 91183 neg     ax ;~ 28F0:186E
cs=0x28f0;eip=0x001870; 	T(ADC(dx, 0));	// 91184 adc     dx, 0 ;~ 28F0:1870
cs=0x28f0;eip=0x001873; 	T(NEG(dx));	// 91185 neg     dx ;~ 28F0:1873
cs=0x28f0;eip=0x001875; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91186 les     bx, [bp+var_4] ;~ 28F0:1875
cs=0x28f0;eip=0x001878; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 91187 mov     es:[bx+0E0h], ax ;~ 28F0:1878
cs=0x28f0;eip=0x00187d; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 91188 mov     es:[bx+0E2h], dx ;~ 28F0:187D
cs=0x28f0;eip=0x001882; 	R(JMP(loc_38d9a));	// 91189 jmp     short loc_38D9A ;~ 28F0:1882
loc_38d64:
	// 10237 
cs=0x28f0;eip=0x001884; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91193 les     bx, [bp+arg_0] ;~ 28F0:1884
cs=0x28f0;eip=0x001887; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 91194 mov     ax, es:[bx+0C0h] ;~ 28F0:1887
cs=0x28f0;eip=0x00188c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 91195 mov     dx, es:[bx+0C2h] ;~ 28F0:188C
cs=0x28f0;eip=0x001891; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91196 les     bx, [bp+var_4] ;~ 28F0:1891
cs=0x28f0;eip=0x001894; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 91197 mov     es:[bx], ax ;~ 28F0:1894
cs=0x28f0;eip=0x001897; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 91198 mov     es:[bx+2], dx ;~ 28F0:1897
cs=0x28f0;eip=0x00189b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91199 les     bx, [bp+arg_0] ;~ 28F0:189B
cs=0x28f0;eip=0x00189e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 91200 mov     ax, es:[bx+0E0h] ;~ 28F0:189E
cs=0x28f0;eip=0x0018a3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 91201 mov     dx, es:[bx+0E2h] ;~ 28F0:18A3
cs=0x28f0;eip=0x0018a8; 	T(NEG(ax));	// 91202 neg     ax ;~ 28F0:18A8
cs=0x28f0;eip=0x0018aa; 	T(ADC(dx, 0));	// 91203 adc     dx, 0 ;~ 28F0:18AA
cs=0x28f0;eip=0x0018ad; 	T(NEG(dx));	// 91204 neg     dx ;~ 28F0:18AD
cs=0x28f0;eip=0x0018af; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91205 les     bx, [bp+var_4] ;~ 28F0:18AF
cs=0x28f0;eip=0x0018b2; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 91206 mov     es:[bx+20h], ax ;~ 28F0:18B2
cs=0x28f0;eip=0x0018b6; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 91207 mov     es:[bx+22h], dx ;~ 28F0:18B6
loc_38d9a:
	// 10238 
cs=0x28f0;eip=0x0018ba; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91210 les     bx, [bp+arg_0] ;~ 28F0:18BA
cs=0x28f0;eip=0x0018bd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 91211 mov     ax, es:[bx+100h] ;~ 28F0:18BD
cs=0x28f0;eip=0x0018c2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 91212 mov     dx, es:[bx+102h] ;~ 28F0:18C2
cs=0x28f0;eip=0x0018c7; 	T(NEG(ax));	// 91213 neg     ax ;~ 28F0:18C7
cs=0x28f0;eip=0x0018c9; 	T(ADC(dx, 0));	// 91214 adc     dx, 0 ;~ 28F0:18C9
cs=0x28f0;eip=0x0018cc; 	T(NEG(dx));	// 91215 neg     dx ;~ 28F0:18CC
cs=0x28f0;eip=0x0018ce; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91216 les     bx, [bp+var_4] ;~ 28F0:18CE
cs=0x28f0;eip=0x0018d1; 	X(MOV(*(dw*)(raddr(es,bx+0x100)), ax));	// 91217 mov     es:[bx+100h], ax ;~ 28F0:18D1
cs=0x28f0;eip=0x0018d6; 	X(MOV(*(dw*)(raddr(es,bx+0x102)), dx));	// 91218 mov     es:[bx+102h], dx ;~ 28F0:18D6
cs=0x28f0;eip=0x0018db; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91219 mov     ax, word ptr [bp+arg_0] ;~ 28F0:18DB
cs=0x28f0;eip=0x0018de; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91220 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:18DE
cs=0x28f0;eip=0x0018e1; 	T(ADD(ax, 0x218));	// 91221 add     ax, 218h ;~ 28F0:18E1
cs=0x28f0;eip=0x0018e4; 	T(di = bx+0x218);	// 91222 lea     di, [bx+218h] ;~ 28F0:18E4
cs=0x28f0;eip=0x0018e8; 	T(MOV(si, ax));	// 91223 mov     si, ax ;~ 28F0:18E8
cs=0x28f0;eip=0x0018ea; 	X(PUSH(ds));	// 91224 push    ds ;~ 28F0:18EA
cs=0x28f0;eip=0x0018eb; 	T(MOV(ds, dx));	// 91225 mov     ds, dx ;~ 28F0:18EB
cs=0x28f0;eip=0x0018ed; 	T(MOV(cx, 0x10));	// 91226 mov     cx, 10h ;~ 28F0:18ED
	// 91227 repne movsw ;~ 28F0:18F0
cs=0x28f0;eip=0x0018f0; 	X(	REPNE MOVSW);	// 91227 repne movsw ;~ 28F0:18F0
cs=0x28f0;eip=0x0018f2; 	X(POP(ds));	// 91228 pop     ds ;~ 28F0:18F2
cs=0x28f0;eip=0x0018f3; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91229 mov     ax, word ptr [bp+arg_0] ;~ 28F0:18F3
cs=0x28f0;eip=0x0018f6; 	T(ADD(ax, 0x276));	// 91230 add     ax, 276h ;~ 28F0:18F6
cs=0x28f0;eip=0x0018f9; 	T(di = bx+0x276);	// 91231 lea     di, [bx+276h] ;~ 28F0:18F9
cs=0x28f0;eip=0x0018fd; 	T(MOV(si, ax));	// 91232 mov     si, ax ;~ 28F0:18FD
cs=0x28f0;eip=0x0018ff; 	X(PUSH(ds));	// 91233 push    ds ;~ 28F0:18FF
cs=0x28f0;eip=0x001900; 	T(MOV(ds, dx));	// 91234 mov     ds, dx ;~ 28F0:1900
cs=0x28f0;eip=0x001902; 	T(MOV(cx, 0x10));	// 91235 mov     cx, 10h ;~ 28F0:1902
	// 91236 repne movsw ;~ 28F0:1905
cs=0x28f0;eip=0x001905; 	X(	REPNE MOVSW);	// 91236 repne movsw ;~ 28F0:1905
cs=0x28f0;eip=0x001907; 	X(POP(ds));	// 91237 pop     ds ;~ 28F0:1907
cs=0x28f0;eip=0x001908; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91238 les     bx, [bp+arg_0] ;~ 28F0:1908
cs=0x28f0;eip=0x00190b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x242))));	// 91239 mov     ax, es:[bx+242h] ;~ 28F0:190B
cs=0x28f0;eip=0x001910; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x244))));	// 91240 mov     dx, es:[bx+244h] ;~ 28F0:1910
cs=0x28f0;eip=0x001915; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91241 les     bx, [bp+var_4] ;~ 28F0:1915
cs=0x28f0;eip=0x001918; 	X(MOV(*(dw*)(raddr(es,bx+0x242)), ax));	// 91242 mov     es:[bx+242h], ax ;~ 28F0:1918
cs=0x28f0;eip=0x00191d; 	X(MOV(*(dw*)(raddr(es,bx+0x244)), dx));	// 91243 mov     es:[bx+244h], dx ;~ 28F0:191D
cs=0x28f0;eip=0x001922; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91244 les     bx, [bp+arg_0] ;~ 28F0:1922
cs=0x28f0;eip=0x001925; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x212))));	// 91245 mov     ax, es:[bx+212h] ;~ 28F0:1925
cs=0x28f0;eip=0x00192a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91246 les     bx, [bp+var_4] ;~ 28F0:192A
cs=0x28f0;eip=0x00192d; 	X(MOV(*(dw*)(raddr(es,bx+0x212)), ax));	// 91247 mov     es:[bx+212h], ax ;~ 28F0:192D
cs=0x28f0;eip=0x001932; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91248 les     bx, [bp+arg_0] ;~ 28F0:1932
cs=0x28f0;eip=0x001935; 	T(MOV(al, *(raddr(es,bx+0x216))));	// 91249 mov     al, es:[bx+216h] ;~ 28F0:1935
cs=0x28f0;eip=0x00193a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91250 les     bx, [bp+var_4] ;~ 28F0:193A
cs=0x28f0;eip=0x00193d; 	X(MOV(*(raddr(es,bx+0x216)), al));	// 91251 mov     es:[bx+216h], al ;~ 28F0:193D
cs=0x28f0;eip=0x001942; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91252 les     bx, [bp+arg_0] ;~ 28F0:1942
cs=0x28f0;eip=0x001945; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x318))));	// 91253 mov     ax, es:[bx+318h] ;~ 28F0:1945
cs=0x28f0;eip=0x00194a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31A))));	// 91254 mov     dx, es:[bx+31Ah] ;~ 28F0:194A
cs=0x28f0;eip=0x00194f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91255 les     bx, [bp+var_4] ;~ 28F0:194F
cs=0x28f0;eip=0x001952; 	X(MOV(*(dw*)(raddr(es,bx+0x318)), ax));	// 91256 mov     es:[bx+318h], ax ;~ 28F0:1952
cs=0x28f0;eip=0x001957; 	X(MOV(*(dw*)(raddr(es,bx+0x31A)), dx));	// 91257 mov     es:[bx+31Ah], dx ;~ 28F0:1957
cs=0x28f0;eip=0x00195c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91258 les     bx, [bp+arg_0] ;~ 28F0:195C
cs=0x28f0;eip=0x00195f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 91259 mov     ax, es:[bx+31Ch] ;~ 28F0:195F
cs=0x28f0;eip=0x001964; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 91260 mov     dx, es:[bx+31Eh] ;~ 28F0:1964
cs=0x28f0;eip=0x001969; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91261 les     bx, [bp+var_4] ;~ 28F0:1969
cs=0x28f0;eip=0x00196c; 	X(MOV(*(dw*)(raddr(es,bx+0x31C)), ax));	// 91262 mov     es:[bx+31Ch], ax ;~ 28F0:196C
cs=0x28f0;eip=0x001971; 	X(MOV(*(dw*)(raddr(es,bx+0x31E)), dx));	// 91263 mov     es:[bx+31Eh], dx ;~ 28F0:1971
cs=0x28f0;eip=0x001976; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91264 les     bx, [bp+arg_0] ;~ 28F0:1976
cs=0x28f0;eip=0x001979; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 91265 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:1979
cs=0x28f0;eip=0x00197f; 	R(JNZ(loc_38e7f));	// 91266 jnz     short loc_38E7F ;~ 28F0:197F
cs=0x28f0;eip=0x001981; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 91267 push    word ptr [bp+var_4+2] ;~ 28F0:1981
cs=0x28f0;eip=0x001984; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 91268 push    word ptr [bp+var_4] ;~ 28F0:1984
cs=0x28f0;eip=0x001987; 	R(CALL(sub_3a769,0));	// 91269 call    sub_3A769 ;~ 28F0:1987
cs=0x28f0;eip=0x00198a; 	T(OR(ax, ax));	// 91270 or      ax, ax ;~ 28F0:198A
cs=0x28f0;eip=0x00198c; 	R(JZ(loc_38e73));	// 91271 jz      short loc_38E73 ;~ 28F0:198C
cs=0x28f0;eip=0x00198e; 	T(SUB(ax, ax));	// 91272 sub     ax, ax ;~ 28F0:198E
cs=0x28f0;eip=0x001990; 	R(JMP(loc_38ef7));	// 91273 jmp     loc_38EF7 ;~ 28F0:1990
loc_38e73:
	// 10239 
cs=0x28f0;eip=0x001993; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91277 les     bx, [bp+var_4] ;~ 28F0:1993
cs=0x28f0;eip=0x001996; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 6));	// 91278 mov     word ptr es:[bx+332h], 6 ;~ 28F0:1996
cs=0x28f0;eip=0x00199d; 	R(JMP(loc_38eba));	// 91279 jmp     short loc_38EBA ;~ 28F0:199D
loc_38e7f:
	// 10240 
cs=0x28f0;eip=0x00199f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91283 les     bx, [bp+arg_0] ;~ 28F0:199F
cs=0x28f0;eip=0x0019a2; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 6));	// 91284 cmp     word ptr es:[bx+332h], 6 ;~ 28F0:19A2
cs=0x28f0;eip=0x0019a8; 	R(JZ(loc_38e92));	// 91285 jz      short loc_38E92 ;~ 28F0:19A8
cs=0x28f0;eip=0x0019aa; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 7));	// 91286 cmp     word ptr es:[bx+332h], 7 ;~ 28F0:19AA
cs=0x28f0;eip=0x0019b0; 	R(JNZ(loc_38ead));	// 91287 jnz     short loc_38EAD ;~ 28F0:19B0
loc_38e92:
	// 10241 
cs=0x28f0;eip=0x0019b2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91290 les     bx, [bp+var_4] ;~ 28F0:19B2
cs=0x28f0;eip=0x0019b5; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 5));	// 91291 mov     word ptr es:[bx+332h], 5 ;~ 28F0:19B5
cs=0x28f0;eip=0x0019bc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91292 les     bx, [bp+arg_0] ;~ 28F0:19BC
cs=0x28f0;eip=0x0019bf; 	T(SUB(ax, ax));	// 91293 sub     ax, ax ;~ 28F0:19BF
cs=0x28f0;eip=0x0019c1; 	X(MOV(*(dw*)(raddr(es,bx+0x2BE)), ax));	// 91294 mov     es:[bx+2BEh], ax ;~ 28F0:19C1
cs=0x28f0;eip=0x0019c6; 	X(MOV(*(dw*)(raddr(es,bx+0x2BC)), ax));	// 91295 mov     es:[bx+2BCh], ax ;~ 28F0:19C6
cs=0x28f0;eip=0x0019cb; 	R(JMP(loc_38eba));	// 91296 jmp     short loc_38EBA ;~ 28F0:19CB
loc_38ead:
	// 10242 
cs=0x28f0;eip=0x0019cd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x332))));	// 91300 mov     ax, es:[bx+332h] ;~ 28F0:19CD
cs=0x28f0;eip=0x0019d2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91301 les     bx, [bp+var_4] ;~ 28F0:19D2
cs=0x28f0;eip=0x0019d5; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 91302 mov     es:[bx+332h], ax ;~ 28F0:19D5
loc_38eba:
	// 10243 
cs=0x28f0;eip=0x0019da; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91306 les     bx, [bp+arg_0] ;~ 28F0:19DA
cs=0x28f0;eip=0x0019dd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x326))));	// 91307 mov     ax, es:[bx+326h] ;~ 28F0:19DD
cs=0x28f0;eip=0x0019e2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x328))));	// 91308 mov     dx, es:[bx+328h] ;~ 28F0:19E2
cs=0x28f0;eip=0x0019e7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91309 les     bx, [bp+var_4] ;~ 28F0:19E7
cs=0x28f0;eip=0x0019ea; 	X(MOV(*(dw*)(raddr(es,bx+0x326)), ax));	// 91310 mov     es:[bx+326h], ax ;~ 28F0:19EA
cs=0x28f0;eip=0x0019ef; 	X(MOV(*(dw*)(raddr(es,bx+0x328)), dx));	// 91311 mov     es:[bx+328h], dx ;~ 28F0:19EF
cs=0x28f0;eip=0x0019f4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91312 les     bx, [bp+arg_0] ;~ 28F0:19F4
cs=0x28f0;eip=0x0019f7; 	T(SUB(ax, ax));	// 91313 sub     ax, ax ;~ 28F0:19F7
cs=0x28f0;eip=0x0019f9; 	X(MOV(*(dw*)(raddr(es,bx+0x328)), ax));	// 91314 mov     es:[bx+328h], ax ;~ 28F0:19F9
cs=0x28f0;eip=0x0019fe; 	X(MOV(*(dw*)(raddr(es,bx+0x326)), ax));	// 91315 mov     es:[bx+326h], ax ;~ 28F0:19FE
cs=0x28f0;eip=0x001a03; 	X(PUSH(es));	// 91316 push    es ;~ 28F0:1A03
cs=0x28f0;eip=0x001a04; 	X(PUSH(bx));	// 91317 push    bx ;~ 28F0:1A04
cs=0x28f0;eip=0x001a05; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 91318 push    word ptr [bp+var_4+2] ;~ 28F0:1A05
cs=0x28f0;eip=0x001a08; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 91319 push    word ptr [bp+var_4] ;~ 28F0:1A08
cs=0x28f0;eip=0x001a0b; 	T(MOV(ax, 0x344));	// 91320 mov     ax, 344h ;~ 28F0:1A0B
cs=0x28f0;eip=0x001a0e; 	X(PUSH(ax));	// 91321 push    ax ;~ 28F0:1A0E
cs=0x28f0;eip=0x001a0f; 	R(CALLF(sub_2113e,0));	// 91322 call    sub_2113E ;~ 28F0:1A0F
cs=0x28f0;eip=0x001a14; 	T(MOV(ax, 1));	// 91323 mov     ax, 1 ;~ 28F0:1A14
loc_38ef7:
	// 10244 
cs=0x28f0;eip=0x001a17; 	X(POP(si));	// 91326 pop     si ;~ 28F0:1A17
cs=0x28f0;eip=0x001a18; 	X(POP(di));	// 91327 pop     di ;~ 28F0:1A18
cs=0x28f0;eip=0x001a19; 	T(MOV(sp, bp));	// 91328 mov     sp, bp ;~ 28F0:1A19
cs=0x28f0;eip=0x001a1b; 	X(POP(bp));	// 91329 pop     bp ;~ 28F0:1A1B
cs=0x28f0;eip=0x001a1c; 	R(RETN(4));	// 91330 retn    4 ;~ 28F0:1A1C
sub_38eff:
	// 91338 
#undef var_8
#define var_8 -8
	// 91340 var_8           = word ptr -8 ;~ 28F0:1A1F
#undef var_6
#define var_6 -6
	// 91341 var_6           = word ptr -6 ;~ 28F0:1A1F
#undef arg_0
#define arg_0 4
	// 91342 arg_0           = word ptr  4 ;~ 28F0:1A1F
#undef arg_2
#define arg_2 6
	// 91343 arg_2           = dword ptr  6 ;~ 28F0:1A1F
cs=0x28f0;eip=0x001a1f; 	X(PUSH(bp));	// 91345 push    bp ;~ 28F0:1A1F
cs=0x28f0;eip=0x001a20; 	T(MOV(bp, sp));	// 91346 mov     bp, sp ;~ 28F0:1A20
cs=0x28f0;eip=0x001a22; 	T(SUB(sp, 8));	// 91347 sub     sp, 8 ;~ 28F0:1A22
cs=0x28f0;eip=0x001a25; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 91348 les     bx, [bp+arg_2] ;~ 28F0:1A25
cs=0x28f0;eip=0x001a28; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 91349 mov     ax, es:[bx+10h] ;~ 28F0:1A28
cs=0x28f0;eip=0x001a2c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 91350 mov     dx, es:[bx+12h] ;~ 28F0:1A2C
cs=0x28f0;eip=0x001a30; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 91351 mov     [bp+var_8], ax ;~ 28F0:1A30
cs=0x28f0;eip=0x001a33; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 91352 mov     [bp+var_6], dx ;~ 28F0:1A33
cs=0x28f0;eip=0x001a36; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 91353 cmp     [bp+arg_0], 0 ;~ 28F0:1A36
cs=0x28f0;eip=0x001a3a; 	R(JLE(loc_38f2b));	// 91354 jle     short loc_38F2B ;~ 28F0:1A3A
cs=0x28f0;eip=0x001a3c; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 91355 cmp     word ptr es:[bx+2], 0 ;~ 28F0:1A3C
cs=0x28f0;eip=0x001a41; 	R(JL(loc_38f2b));	// 91356 jl      short loc_38F2B ;~ 28F0:1A41
cs=0x28f0;eip=0x001a43; 	R(JG(loc_38f38));	// 91357 jg      short loc_38F38 ;~ 28F0:1A43
cs=0x28f0;eip=0x001a45; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 91358 cmp     word ptr es:[bx], 0 ;~ 28F0:1A45
cs=0x28f0;eip=0x001a49; 	R(JNZ(loc_38f38));	// 91359 jnz     short loc_38F38 ;~ 28F0:1A49
loc_38f2b:
	// 10245 
cs=0x28f0;eip=0x001a4b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 91363 cmp     [bp+arg_0], 0 ;~ 28F0:1A4B
cs=0x28f0;eip=0x001a4f; 	R(JGE(loc_38f48));	// 91364 jge     short loc_38F48 ;~ 28F0:1A4F
cs=0x28f0;eip=0x001a51; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 91365 cmp     word ptr es:[bx+2], 0 ;~ 28F0:1A51
cs=0x28f0;eip=0x001a56; 	R(JGE(loc_38f48));	// 91366 jge     short loc_38F48 ;~ 28F0:1A56
loc_38f38:
	// 10246 
cs=0x28f0;eip=0x001a58; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 91370 mov     ax, es:[bx+14h] ;~ 28F0:1A58
cs=0x28f0;eip=0x001a5c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 91371 mov     dx, es:[bx+16h] ;~ 28F0:1A5C
cs=0x28f0;eip=0x001a60; 	X(ADD(*(dw*)(raddr(es,bx+0x10)), ax));	// 91372 add     es:[bx+10h], ax ;~ 28F0:1A60
cs=0x28f0;eip=0x001a64; 	X(ADC(*(dw*)(raddr(es,bx+0x12)), dx));	// 91373 adc     es:[bx+12h], dx ;~ 28F0:1A64
loc_38f48:
	// 10247 
cs=0x28f0;eip=0x001a68; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 91377 push    word ptr [bp+arg_2+2] ;~ 28F0:1A68
cs=0x28f0;eip=0x001a6b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 91378 push    word ptr [bp+arg_2] ;~ 28F0:1A6B
cs=0x28f0;eip=0x001a6e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 91379 push    [bp+arg_0] ;~ 28F0:1A6E
cs=0x28f0;eip=0x001a71; 	R(CALL(sub_3be56,0));	// 91380 call    sub_3BE56 ;~ 28F0:1A71
cs=0x28f0;eip=0x001a74; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 91381 push    word ptr [bp+arg_2+2] ;~ 28F0:1A74
cs=0x28f0;eip=0x001a77; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 91382 push    word ptr [bp+arg_2] ;~ 28F0:1A77
cs=0x28f0;eip=0x001a7a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 91383 mov     ax, [bp+arg_0] ;~ 28F0:1A7A
cs=0x28f0;eip=0x001a7d; 	T(NEG(ax));	// 91384 neg     ax ;~ 28F0:1A7D
cs=0x28f0;eip=0x001a7f; 	X(PUSH(ax));	// 91385 push    ax ;~ 28F0:1A7F
cs=0x28f0;eip=0x001a80; 	R(CALL(sub_3bc2a,0));	// 91386 call    sub_3BC2A ;~ 28F0:1A80
cs=0x28f0;eip=0x001a83; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 91387 push    word ptr [bp+arg_2+2] ;~ 28F0:1A83
cs=0x28f0;eip=0x001a86; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 91388 push    word ptr [bp+arg_2] ;~ 28F0:1A86
cs=0x28f0;eip=0x001a89; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 91389 les     bx, [bp+arg_2] ;~ 28F0:1A89
cs=0x28f0;eip=0x001a8c; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 91390 push    word ptr es:[bx+12h] ;~ 28F0:1A8C
cs=0x28f0;eip=0x001a90; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 91391 push    word ptr es:[bx+10h] ;~ 28F0:1A90
cs=0x28f0;eip=0x001a94; 	R(CALL(sub_3b9eb,0));	// 91392 call    sub_3B9EB ;~ 28F0:1A94
cs=0x28f0;eip=0x001a97; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 91393 les     bx, [bp+arg_2] ;~ 28F0:1A97
cs=0x28f0;eip=0x001a9a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 91394 mov     ax, [bp+var_8] ;~ 28F0:1A9A
cs=0x28f0;eip=0x001a9d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 91395 mov     dx, [bp+var_6] ;~ 28F0:1A9D
cs=0x28f0;eip=0x001aa0; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), ax));	// 91396 mov     es:[bx+10h], ax ;~ 28F0:1AA0
cs=0x28f0;eip=0x001aa4; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), dx));	// 91397 mov     es:[bx+12h], dx ;~ 28F0:1AA4
cs=0x28f0;eip=0x001aa8; 	T(MOV(sp, bp));	// 91398 mov     sp, bp ;~ 28F0:1AA8
cs=0x28f0;eip=0x001aaa; 	X(POP(bp));	// 91399 pop     bp ;~ 28F0:1AAA
cs=0x28f0;eip=0x001aab; 	R(RETN(6));	// 91400 retn    6 ;~ 28F0:1AAB
sub_38f8e:
	// 91408 
#undef var_8
#define var_8 -8
	// 91410 var_8           = word ptr -8 ;~ 28F0:1AAE
#undef var_6
#define var_6 -6
	// 91411 var_6           = word ptr -6 ;~ 28F0:1AAE
#undef arg_0
#define arg_0 4
	// 91412 arg_0           = word ptr  4 ;~ 28F0:1AAE
#undef arg_2
#define arg_2 6
	// 91413 arg_2           = dword ptr  6 ;~ 28F0:1AAE
cs=0x28f0;eip=0x001aae; 	X(PUSH(bp));	// 91415 push    bp ;~ 28F0:1AAE
cs=0x28f0;eip=0x001aaf; 	T(MOV(bp, sp));	// 91416 mov     bp, sp ;~ 28F0:1AAF
cs=0x28f0;eip=0x001ab1; 	T(SUB(sp, 8));	// 91417 sub     sp, 8 ;~ 28F0:1AB1
cs=0x28f0;eip=0x001ab4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 91418 les     bx, [bp+arg_2] ;~ 28F0:1AB4
cs=0x28f0;eip=0x001ab7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 91419 mov     ax, es:[bx+10h] ;~ 28F0:1AB7
cs=0x28f0;eip=0x001abb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 91420 mov     dx, es:[bx+12h] ;~ 28F0:1ABB
cs=0x28f0;eip=0x001abf; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 91421 mov     [bp+var_8], ax ;~ 28F0:1ABF
cs=0x28f0;eip=0x001ac2; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 91422 mov     [bp+var_6], dx ;~ 28F0:1AC2
cs=0x28f0;eip=0x001ac5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 91423 cmp     [bp+arg_0], 0 ;~ 28F0:1AC5
cs=0x28f0;eip=0x001ac9; 	R(JLE(loc_38fb2));	// 91424 jle     short loc_38FB2 ;~ 28F0:1AC9
cs=0x28f0;eip=0x001acb; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 91425 cmp     word ptr es:[bx+2], 0 ;~ 28F0:1ACB
cs=0x28f0;eip=0x001ad0; 	R(JL(loc_38fc7));	// 91426 jl      short loc_38FC7 ;~ 28F0:1AD0
loc_38fb2:
	// 10248 
cs=0x28f0;eip=0x001ad2; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 91429 cmp     [bp+arg_0], 0 ;~ 28F0:1AD2
cs=0x28f0;eip=0x001ad6; 	R(JGE(loc_38fd7));	// 91430 jge     short loc_38FD7 ;~ 28F0:1AD6
cs=0x28f0;eip=0x001ad8; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 91431 cmp     word ptr es:[bx+2], 0 ;~ 28F0:1AD8
cs=0x28f0;eip=0x001add; 	R(JL(loc_38fd7));	// 91432 jl      short loc_38FD7 ;~ 28F0:1ADD
cs=0x28f0;eip=0x001adf; 	R(JG(loc_38fc7));	// 91433 jg      short loc_38FC7 ;~ 28F0:1ADF
cs=0x28f0;eip=0x001ae1; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 91434 cmp     word ptr es:[bx], 0 ;~ 28F0:1AE1
cs=0x28f0;eip=0x001ae5; 	R(JZ(loc_38fd7));	// 91435 jz      short loc_38FD7 ;~ 28F0:1AE5
loc_38fc7:
	// 10249 
cs=0x28f0;eip=0x001ae7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 91439 mov     ax, es:[bx+14h] ;~ 28F0:1AE7
cs=0x28f0;eip=0x001aeb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 91440 mov     dx, es:[bx+16h] ;~ 28F0:1AEB
cs=0x28f0;eip=0x001aef; 	X(ADD(*(dw*)(raddr(es,bx+0x10)), ax));	// 91441 add     es:[bx+10h], ax ;~ 28F0:1AEF
cs=0x28f0;eip=0x001af3; 	X(ADC(*(dw*)(raddr(es,bx+0x12)), dx));	// 91442 adc     es:[bx+12h], dx ;~ 28F0:1AF3
loc_38fd7:
	// 10250 
cs=0x28f0;eip=0x001af7; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 91446 push    word ptr [bp+arg_2+2] ;~ 28F0:1AF7
cs=0x28f0;eip=0x001afa; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 91447 push    word ptr [bp+arg_2] ;~ 28F0:1AFA
cs=0x28f0;eip=0x001afd; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 91448 push    [bp+arg_0] ;~ 28F0:1AFD
cs=0x28f0;eip=0x001b00; 	R(CALL(sub_3c1fa,0));	// 91449 call    sub_3C1FA ;~ 28F0:1B00
cs=0x28f0;eip=0x001b03; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 91450 push    word ptr [bp+arg_2+2] ;~ 28F0:1B03
cs=0x28f0;eip=0x001b06; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 91451 push    word ptr [bp+arg_2] ;~ 28F0:1B06
cs=0x28f0;eip=0x001b09; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 91452 push    [bp+arg_0] ;~ 28F0:1B09
cs=0x28f0;eip=0x001b0c; 	R(CALL(sub_3bfce,0));	// 91453 call    sub_3BFCE ;~ 28F0:1B0C
cs=0x28f0;eip=0x001b0f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 91454 push    word ptr [bp+arg_2+2] ;~ 28F0:1B0F
cs=0x28f0;eip=0x001b12; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 91455 push    word ptr [bp+arg_2] ;~ 28F0:1B12
cs=0x28f0;eip=0x001b15; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 91456 les     bx, [bp+arg_2] ;~ 28F0:1B15
cs=0x28f0;eip=0x001b18; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 91457 push    word ptr es:[bx+12h] ;~ 28F0:1B18
cs=0x28f0;eip=0x001b1c; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 91458 push    word ptr es:[bx+10h] ;~ 28F0:1B1C
cs=0x28f0;eip=0x001b20; 	R(CALL(sub_3b9eb,0));	// 91459 call    sub_3B9EB ;~ 28F0:1B20
cs=0x28f0;eip=0x001b23; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 91460 les     bx, [bp+arg_2] ;~ 28F0:1B23
cs=0x28f0;eip=0x001b26; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 91461 mov     ax, [bp+var_8] ;~ 28F0:1B26
cs=0x28f0;eip=0x001b29; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 91462 mov     dx, [bp+var_6] ;~ 28F0:1B29
cs=0x28f0;eip=0x001b2c; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), ax));	// 91463 mov     es:[bx+10h], ax ;~ 28F0:1B2C
cs=0x28f0;eip=0x001b30; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), dx));	// 91464 mov     es:[bx+12h], dx ;~ 28F0:1B30
cs=0x28f0;eip=0x001b34; 	T(MOV(sp, bp));	// 91465 mov     sp, bp ;~ 28F0:1B34
cs=0x28f0;eip=0x001b36; 	X(POP(bp));	// 91466 pop     bp ;~ 28F0:1B36
cs=0x28f0;eip=0x001b37; 	R(RETN(6));	// 91467 retn    6 ;~ 28F0:1B37
sub_3901a:
	// 91475 
#undef var_8
#define var_8 -8
	// 91477 var_8           = word ptr -8 ;~ 28F0:1B3A
#undef var_6
#define var_6 -6
	// 91478 var_6           = dword ptr -6 ;~ 28F0:1B3A
#undef var_2
#define var_2 -2
	// 91479 var_2           = word ptr -2 ;~ 28F0:1B3A
#undef arg_0
#define arg_0 4
	// 91480 arg_0           = dword ptr  4 ;~ 28F0:1B3A
cs=0x28f0;eip=0x001b3a; 	X(PUSH(bp));	// 91482 push    bp ;~ 28F0:1B3A
cs=0x28f0;eip=0x001b3b; 	T(MOV(bp, sp));	// 91483 mov     bp, sp ;~ 28F0:1B3B
cs=0x28f0;eip=0x001b3d; 	T(SUB(sp, 8));	// 91484 sub     sp, 8 ;~ 28F0:1B3D
cs=0x28f0;eip=0x001b40; 	X(PUSH(di));	// 91485 push    di ;~ 28F0:1B40
cs=0x28f0;eip=0x001b41; 	X(PUSH(si));	// 91486 push    si ;~ 28F0:1B41
cs=0x28f0;eip=0x001b42; 	T(SUB(di, di));	// 91487 sub     di, di ;~ 28F0:1B42
cs=0x28f0;eip=0x001b44; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91488 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1B44
cs=0x28f0;eip=0x001b47; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91489 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1B47
cs=0x28f0;eip=0x001b4a; 	T(ADD(ax, 0x238));	// 91490 add     ax, 238h ;~ 28F0:1B4A
cs=0x28f0;eip=0x001b4d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 91491 mov     word ptr [bp+var_6], ax ;~ 28F0:1B4D
cs=0x28f0;eip=0x001b50; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 91492 mov     word ptr [bp+var_6+2], dx ;~ 28F0:1B50
cs=0x28f0;eip=0x001b53; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ds));	// 91493 mov     [bp+var_8], ds ;~ 28F0:1B53
cs=0x28f0;eip=0x001b56; 	T(LDS(si, *(dd*)(raddr(ss,bp+var_6))));	// 91494 lds     si, [bp+var_6] ;~ 28F0:1B56
loc_39039:
	// 10251 
cs=0x28f0;eip=0x001b59; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 91497 mov     ax, [si] ;~ 28F0:1B59
cs=0x28f0;eip=0x001b5b; 	T(CWD);	// 91498 cwd ;~ 28F0:1B5B
cs=0x28f0;eip=0x001b5c; 	T(MOV(dh, dl));	// 91499 mov     dh, dl ;~ 28F0:1B5C
cs=0x28f0;eip=0x001b5e; 	T(MOV(dl, ah));	// 91500 mov     dl, ah ;~ 28F0:1B5E
cs=0x28f0;eip=0x001b60; 	T(MOV(ah, al));	// 91501 mov     ah, al ;~ 28F0:1B60
cs=0x28f0;eip=0x001b62; 	T(SUB(al, al));	// 91502 sub     al, al ;~ 28F0:1B62
cs=0x28f0;eip=0x001b64; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91503 les     bx, [bp+arg_0] ;~ 28F0:1B64
cs=0x28f0;eip=0x001b67; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x21A))));	// 91504 cmp     dx, es:[bx+21Ah] ;~ 28F0:1B67
cs=0x28f0;eip=0x001b6c; 	R(JL(loc_3907f));	// 91505 jl      short loc_3907F ;~ 28F0:1B6C
cs=0x28f0;eip=0x001b6e; 	R(JG(loc_39057));	// 91506 jg      short loc_39057 ;~ 28F0:1B6E
cs=0x28f0;eip=0x001b70; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x218))));	// 91507 cmp     ax, es:[bx+218h] ;~ 28F0:1B70
cs=0x28f0;eip=0x001b75; 	R(JC(loc_3907f));	// 91508 jb      short loc_3907F ;~ 28F0:1B75
loc_39057:
	// 10252 
cs=0x28f0;eip=0x001b77; 	T(MOV(ds, *(dw*)(raddr(ss,bp+var_8))));	// 91512 mov     ds, [bp+var_8] ;~ 28F0:1B77
cs=0x28f0;eip=0x001b7a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), di));	// 91513 mov     [bp+var_2], di ;~ 28F0:1B7A
cs=0x28f0;eip=0x001b7d; 	T(OR(di, di));	// 91514 or      di, di ;~ 28F0:1B7D
cs=0x28f0;eip=0x001b7f; 	R(JNZ(loc_3908a));	// 91515 jnz     short loc_3908A ;~ 28F0:1B7F
cs=0x28f0;eip=0x001b81; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91516 les     bx, [bp+arg_0] ;~ 28F0:1B81
cs=0x28f0;eip=0x001b84; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24A))));	// 91517 mov     ax, es:[bx+24Ah] ;~ 28F0:1B84
cs=0x28f0;eip=0x001b89; 	T(CWD);	// 91518 cwd ;~ 28F0:1B89
cs=0x28f0;eip=0x001b8a; 	T(MOV(dh, dl));	// 91519 mov     dh, dl ;~ 28F0:1B8A
cs=0x28f0;eip=0x001b8c; 	T(MOV(dl, ah));	// 91520 mov     dl, ah ;~ 28F0:1B8C
cs=0x28f0;eip=0x001b8e; 	T(MOV(ah, al));	// 91521 mov     ah, al ;~ 28F0:1B8E
cs=0x28f0;eip=0x001b90; 	T(SUB(al, al));	// 91522 sub     al, al ;~ 28F0:1B90
cs=0x28f0;eip=0x001b92; 	X(MOV(*(dw*)(raddr(es,bx+0x1C4)), ax));	// 91523 mov     es:[bx+1C4h], ax ;~ 28F0:1B92
cs=0x28f0;eip=0x001b97; 	X(MOV(*(dw*)(raddr(es,bx+0x1C6)), dx));	// 91524 mov     es:[bx+1C6h], dx ;~ 28F0:1B97
cs=0x28f0;eip=0x001b9c; 	R(JMP(loc_3910b));	// 91525 jmp     loc_3910B ;~ 28F0:1B9C
loc_3907f:
	// 10253 
cs=0x28f0;eip=0x001b9f; 	T(ADD(si, 2));	// 91530 add     si, 2 ;~ 28F0:1B9F
cs=0x28f0;eip=0x001ba2; 	T(INC(di));	// 91531 inc     di ;~ 28F0:1BA2
cs=0x28f0;eip=0x001ba3; 	T(CMP(di, 5));	// 91532 cmp     di, 5 ;~ 28F0:1BA3
cs=0x28f0;eip=0x001ba6; 	R(JGE(loc_39057));	// 91533 jge     short loc_39057 ;~ 28F0:1BA6
cs=0x28f0;eip=0x001ba8; 	R(JMP(loc_39039));	// 91534 jmp     short loc_39039 ;~ 28F0:1BA8
loc_3908a:
	// 10254 
cs=0x28f0;eip=0x001baa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 91538 mov     ax, [bp+var_2] ;~ 28F0:1BAA
cs=0x28f0;eip=0x001bad; 	T(SHL(ax, 1));	// 91539 shl     ax, 1 ;~ 28F0:1BAD
cs=0x28f0;eip=0x001baf; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91540 add     ax, word ptr [bp+arg_0] ;~ 28F0:1BAF
cs=0x28f0;eip=0x001bb2; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91541 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1BB2
cs=0x28f0;eip=0x001bb5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6))), ax));	// 91542 mov     word ptr [bp+var_6], ax ;~ 28F0:1BB5
cs=0x28f0;eip=0x001bb8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_6+2))), dx));	// 91543 mov     word ptr [bp+var_6+2], dx ;~ 28F0:1BB8
cs=0x28f0;eip=0x001bbb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 91544 les     bx, [bp+var_6] ;~ 28F0:1BBB
cs=0x28f0;eip=0x001bbe; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x238))));	// 91545 mov     ax, es:[bx+238h] ;~ 28F0:1BBE
cs=0x28f0;eip=0x001bc3; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x236))));	// 91546 sub     ax, es:[bx+236h] ;~ 28F0:1BC3
cs=0x28f0;eip=0x001bc8; 	T(CWD);	// 91547 cwd ;~ 28F0:1BC8
cs=0x28f0;eip=0x001bc9; 	X(PUSH(dx));	// 91548 push    dx ;~ 28F0:1BC9
cs=0x28f0;eip=0x001bca; 	X(PUSH(ax));	// 91549 push    ax ;~ 28F0:1BCA
cs=0x28f0;eip=0x001bcb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x24A))));	// 91550 mov     ax, es:[bx+24Ah] ;~ 28F0:1BCB
cs=0x28f0;eip=0x001bd0; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x248))));	// 91551 sub     ax, es:[bx+248h] ;~ 28F0:1BD0
cs=0x28f0;eip=0x001bd5; 	T(CWD);	// 91552 cwd ;~ 28F0:1BD5
cs=0x28f0;eip=0x001bd6; 	X(PUSH(dx));	// 91553 push    dx ;~ 28F0:1BD6
cs=0x28f0;eip=0x001bd7; 	X(PUSH(ax));	// 91554 push    ax ;~ 28F0:1BD7
cs=0x28f0;eip=0x001bd8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x236))));	// 91555 mov     ax, es:[bx+236h] ;~ 28F0:1BD8
cs=0x28f0;eip=0x001bdd; 	T(CWD);	// 91556 cwd ;~ 28F0:1BDD
cs=0x28f0;eip=0x001bde; 	T(MOV(dh, dl));	// 91557 mov     dh, dl ;~ 28F0:1BDE
cs=0x28f0;eip=0x001be0; 	T(MOV(dl, ah));	// 91558 mov     dl, ah ;~ 28F0:1BE0
cs=0x28f0;eip=0x001be2; 	T(MOV(ah, al));	// 91559 mov     ah, al ;~ 28F0:1BE2
cs=0x28f0;eip=0x001be4; 	T(SUB(al, al));	// 91560 sub     al, al ;~ 28F0:1BE4
cs=0x28f0;eip=0x001be6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91561 les     bx, [bp+arg_0] ;~ 28F0:1BE6
cs=0x28f0;eip=0x001be9; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x218))));	// 91562 mov     cx, es:[bx+218h] ;~ 28F0:1BE9
cs=0x28f0;eip=0x001bee; 	T(MOV(si, *(dw*)(raddr(es,bx+0x21A))));	// 91563 mov     si, es:[bx+21Ah] ;~ 28F0:1BEE
cs=0x28f0;eip=0x001bf3; 	T(SUB(cx, ax));	// 91564 sub     cx, ax ;~ 28F0:1BF3
cs=0x28f0;eip=0x001bf5; 	T(SBB(si, dx));	// 91565 sbb     si, dx ;~ 28F0:1BF5
cs=0x28f0;eip=0x001bf7; 	X(PUSH(si));	// 91566 push    si ;~ 28F0:1BF7
cs=0x28f0;eip=0x001bf8; 	X(PUSH(cx));	// 91567 push    cx ;~ 28F0:1BF8
cs=0x28f0;eip=0x001bf9; 	R(CALLF(sub_105c2,0));	// 91568 call    sub_105C2 ;~ 28F0:1BF9
cs=0x28f0;eip=0x001bfe; 	X(PUSH(dx));	// 91569 push    dx ;~ 28F0:1BFE
cs=0x28f0;eip=0x001bff; 	X(PUSH(ax));	// 91570 push    ax ;~ 28F0:1BFF
cs=0x28f0;eip=0x001c00; 	R(CALLF(sub_10526,0));	// 91571 call    sub_10526 ;~ 28F0:1C00
cs=0x28f0;eip=0x001c05; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_6))));	// 91572 les     bx, [bp+var_6] ;~ 28F0:1C05
cs=0x28f0;eip=0x001c08; 	T(MOV(cx, ax));	// 91573 mov     cx, ax ;~ 28F0:1C08
cs=0x28f0;eip=0x001c0a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x248))));	// 91574 mov     ax, es:[bx+248h] ;~ 28F0:1C0A
cs=0x28f0;eip=0x001c0f; 	T(MOV(bx, dx));	// 91575 mov     bx, dx ;~ 28F0:1C0F
cs=0x28f0;eip=0x001c11; 	T(CWD);	// 91576 cwd ;~ 28F0:1C11
cs=0x28f0;eip=0x001c12; 	T(MOV(dh, dl));	// 91577 mov     dh, dl ;~ 28F0:1C12
cs=0x28f0;eip=0x001c14; 	T(MOV(dl, ah));	// 91578 mov     dl, ah ;~ 28F0:1C14
cs=0x28f0;eip=0x001c16; 	T(MOV(ah, al));	// 91579 mov     ah, al ;~ 28F0:1C16
cs=0x28f0;eip=0x001c18; 	T(SUB(al, al));	// 91580 sub     al, al ;~ 28F0:1C18
cs=0x28f0;eip=0x001c1a; 	T(ADD(cx, ax));	// 91581 add     cx, ax ;~ 28F0:1C1A
cs=0x28f0;eip=0x001c1c; 	T(ADC(bx, dx));	// 91582 adc     bx, dx ;~ 28F0:1C1C
cs=0x28f0;eip=0x001c1e; 	T(LES(si, *(dd*)(raddr(ss,bp+arg_0))));	// 91583 les     si, [bp+arg_0] ;~ 28F0:1C1E
cs=0x28f0;eip=0x001c21; 	X(MOV(*(dw*)(raddr(es,si+0x1C4)), cx));	// 91584 mov     es:[si+1C4h], cx ;~ 28F0:1C21
cs=0x28f0;eip=0x001c26; 	X(MOV(*(dw*)(raddr(es,si+0x1C6)), bx));	// 91585 mov     es:[si+1C6h], bx ;~ 28F0:1C26
loc_3910b:
	// 10255 
cs=0x28f0;eip=0x001c2b; 	X(POP(si));	// 91588 pop     si ;~ 28F0:1C2B
cs=0x28f0;eip=0x001c2c; 	X(POP(di));	// 91589 pop     di ;~ 28F0:1C2C
cs=0x28f0;eip=0x001c2d; 	T(MOV(sp, bp));	// 91590 mov     sp, bp ;~ 28F0:1C2D
cs=0x28f0;eip=0x001c2f; 	X(POP(bp));	// 91591 pop     bp ;~ 28F0:1C2F
cs=0x28f0;eip=0x001c30; 	R(RETN(4));	// 91592 retn    4 ;~ 28F0:1C30
sub_39113:
	// 91600 
#undef var_4
#define var_4 -4
	// 91602 var_4           = dword ptr -4 ;~ 28F0:1C33
#undef arg_0
#define arg_0 4
	// 91603 arg_0           = word ptr  4 ;~ 28F0:1C33
#undef arg_2
#define arg_2 6
	// 91604 arg_2           = word ptr  6 ;~ 28F0:1C33
cs=0x28f0;eip=0x001c33; 	X(PUSH(bp));	// 91606 push    bp ;~ 28F0:1C33
cs=0x28f0;eip=0x001c34; 	T(MOV(bp, sp));	// 91607 mov     bp, sp ;~ 28F0:1C34
cs=0x28f0;eip=0x001c36; 	T(SUB(sp, 4));	// 91608 sub     sp, 4 ;~ 28F0:1C36
cs=0x28f0;eip=0x001c39; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 91609 push    [bp+arg_2] ;~ 28F0:1C39
cs=0x28f0;eip=0x001c3c; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 91610 push    [bp+arg_0] ;~ 28F0:1C3C
cs=0x28f0;eip=0x001c3f; 	R(CALL(sub_3901a,0));	// 91611 call    sub_3901A ;~ 28F0:1C3F
cs=0x28f0;eip=0x001c42; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 91612 mov     ax, [bp+arg_0] ;~ 28F0:1C42
cs=0x28f0;eip=0x001c45; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 91613 mov     dx, [bp+arg_2] ;~ 28F0:1C45
cs=0x28f0;eip=0x001c48; 	T(ADD(ax, 0x1C0));	// 91614 add     ax, 1C0h ;~ 28F0:1C48
cs=0x28f0;eip=0x001c4b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 91615 mov     word ptr [bp+var_4], ax ;~ 28F0:1C4B
cs=0x28f0;eip=0x001c4e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 91616 mov     word ptr [bp+var_4+2], dx ;~ 28F0:1C4E
cs=0x28f0;eip=0x001c51; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91617 les     bx, [bp+var_4] ;~ 28F0:1C51
cs=0x28f0;eip=0x001c54; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 91618 mov     ax, es:[bx] ;~ 28F0:1C54
cs=0x28f0;eip=0x001c57; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 91619 mov     dx, es:[bx+2] ;~ 28F0:1C57
cs=0x28f0;eip=0x001c5b; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 91620 cmp     es:[bx+4], ax ;~ 28F0:1C5B
cs=0x28f0;eip=0x001c5f; 	R(JNZ(loc_39147));	// 91621 jnz     short loc_39147 ;~ 28F0:1C5F
cs=0x28f0;eip=0x001c61; 	T(CMP(*(dw*)(raddr(es,bx+6)), dx));	// 91622 cmp     es:[bx+6], dx ;~ 28F0:1C61
cs=0x28f0;eip=0x001c65; 	R(JZ(loc_39154));	// 91623 jz      short loc_39154 ;~ 28F0:1C65
loc_39147:
	// 10256 
cs=0x28f0;eip=0x001c67; 	X(PUSH(es));	// 91626 push    es ;~ 28F0:1C67
cs=0x28f0;eip=0x001c68; 	X(PUSH(bx));	// 91627 push    bx ;~ 28F0:1C68
cs=0x28f0;eip=0x001c69; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 91628 push    word ptr es:[bx+12h] ;~ 28F0:1C69
cs=0x28f0;eip=0x001c6d; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 91629 push    word ptr es:[bx+10h] ;~ 28F0:1C6D
cs=0x28f0;eip=0x001c71; 	R(CALL(sub_3b9eb,0));	// 91630 call    sub_3B9EB ;~ 28F0:1C71
loc_39154:
	// 10257 
cs=0x28f0;eip=0x001c74; 	T(MOV(sp, bp));	// 91633 mov     sp, bp ;~ 28F0:1C74
cs=0x28f0;eip=0x001c76; 	X(POP(bp));	// 91634 pop     bp ;~ 28F0:1C76
cs=0x28f0;eip=0x001c77; 	R(RETN(4));	// 91635 retn    4 ;~ 28F0:1C77
sub_3915a:
	// 91643 
#undef var_1c
#define var_1c -0x1C
	// 91645 var_1C          = word ptr -1Ch ;~ 28F0:1C7A
#undef var_1a
#define var_1a -0x1A
	// 91646 var_1A          = word ptr -1Ah ;~ 28F0:1C7A
#undef var_18
#define var_18 -0x18
	// 91647 var_18          = word ptr -18h ;~ 28F0:1C7A
#undef var_16
#define var_16 -0x16
	// 91648 var_16          = word ptr -16h ;~ 28F0:1C7A
#undef var_14
#define var_14 -0x14
	// 91649 var_14          = word ptr -14h ;~ 28F0:1C7A
#undef var_12
#define var_12 -0x12
	// 91650 var_12          = word ptr -12h ;~ 28F0:1C7A
#undef var_10
#define var_10 -0x10
	// 91651 var_10          = word ptr -10h ;~ 28F0:1C7A
#undef var_e
#define var_e -0x0E
	// 91652 var_E           = word ptr -0Eh ;~ 28F0:1C7A
#undef var_c
#define var_c -0x0C
	// 91653 var_C           = word ptr -0Ch ;~ 28F0:1C7A
#undef var_a
#define var_a -0x0A
	// 91654 var_A           = word ptr -0Ah ;~ 28F0:1C7A
#undef var_8
#define var_8 -8
	// 91655 var_8           = dword ptr -8 ;~ 28F0:1C7A
#undef var_4
#define var_4 -4
	// 91656 var_4           = dword ptr -4 ;~ 28F0:1C7A
#undef arg_0
#define arg_0 4
	// 91657 arg_0           = dword ptr  4 ;~ 28F0:1C7A
cs=0x28f0;eip=0x001c7a; 	X(PUSH(bp));	// 91659 push    bp ;~ 28F0:1C7A
cs=0x28f0;eip=0x001c7b; 	T(MOV(bp, sp));	// 91660 mov     bp, sp ;~ 28F0:1C7B
cs=0x28f0;eip=0x001c7d; 	T(SUB(sp, 0x1C));	// 91661 sub     sp, 1Ch ;~ 28F0:1C7D
cs=0x28f0;eip=0x001c80; 	X(PUSH(di));	// 91662 push    di ;~ 28F0:1C80
cs=0x28f0;eip=0x001c81; 	X(PUSH(si));	// 91663 push    si ;~ 28F0:1C81
cs=0x28f0;eip=0x001c82; 	T(SUB(ax, ax));	// 91664 sub     ax, ax ;~ 28F0:1C82
cs=0x28f0;eip=0x001c84; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 91665 mov     [bp+var_A], ax ;~ 28F0:1C84
cs=0x28f0;eip=0x001c87; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 91666 mov     [bp+var_C], ax ;~ 28F0:1C87
cs=0x28f0;eip=0x001c8a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91667 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1C8A
cs=0x28f0;eip=0x001c8d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91668 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1C8D
cs=0x28f0;eip=0x001c90; 	T(ADD(ax, 0x1C0));	// 91669 add     ax, 1C0h ;~ 28F0:1C90
cs=0x28f0;eip=0x001c93; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 91670 mov     word ptr [bp+var_8], ax ;~ 28F0:1C93
cs=0x28f0;eip=0x001c96; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 91671 mov     word ptr [bp+var_8+2], dx ;~ 28F0:1C96
cs=0x28f0;eip=0x001c99; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91672 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1C99
cs=0x28f0;eip=0x001c9c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 91673 mov     word ptr [bp+var_4], ax ;~ 28F0:1C9C
cs=0x28f0;eip=0x001c9f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 91674 mov     word ptr [bp+var_4+2], dx ;~ 28F0:1C9F
cs=0x28f0;eip=0x001ca2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91675 les     bx, [bp+var_4] ;~ 28F0:1CA2
cs=0x28f0;eip=0x001ca5; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 91676 mov     ax, es:[bx] ;~ 28F0:1CA5
cs=0x28f0;eip=0x001ca8; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 91677 mov     dx, es:[bx+2] ;~ 28F0:1CA8
cs=0x28f0;eip=0x001cac; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), dx));	// 91678 cmp     es:[bx+1Ah], dx ;~ 28F0:1CAC
cs=0x28f0;eip=0x001cb0; 	R(JL(loc_391af));	// 91679 jl      short loc_391AF ;~ 28F0:1CB0
cs=0x28f0;eip=0x001cb2; 	R(JG(loc_3919a));	// 91680 jg      short loc_3919A ;~ 28F0:1CB2
cs=0x28f0;eip=0x001cb4; 	T(CMP(*(dw*)(raddr(es,bx+0x18)), ax));	// 91681 cmp     es:[bx+18h], ax ;~ 28F0:1CB4
cs=0x28f0;eip=0x001cb8; 	R(JC(loc_391af));	// 91682 jb      short loc_391AF ;~ 28F0:1CB8
loc_3919a:
	// 10258 
cs=0x28f0;eip=0x001cba; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 91685 mov     ax, es:[bx] ;~ 28F0:1CBA
cs=0x28f0;eip=0x001cbd; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 91686 mov     dx, es:[bx+2] ;~ 28F0:1CBD
cs=0x28f0;eip=0x001cc1; 	T(CMP(*(dw*)(raddr(es,bx+0x1E)), dx));	// 91687 cmp     es:[bx+1Eh], dx ;~ 28F0:1CC1
cs=0x28f0;eip=0x001cc5; 	R(JL(loc_391d9));	// 91688 jl      short loc_391D9 ;~ 28F0:1CC5
cs=0x28f0;eip=0x001cc7; 	R(JG(loc_391af));	// 91689 jg      short loc_391AF ;~ 28F0:1CC7
cs=0x28f0;eip=0x001cc9; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), ax));	// 91690 cmp     es:[bx+1Ch], ax ;~ 28F0:1CC9
cs=0x28f0;eip=0x001ccd; 	R(JBE(loc_391d9));	// 91691 jbe     short loc_391D9 ;~ 28F0:1CCD
loc_391af:
	// 10259 
cs=0x28f0;eip=0x001ccf; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 91695 mov     ax, es:[bx] ;~ 28F0:1CCF
cs=0x28f0;eip=0x001cd2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 91696 mov     dx, es:[bx+2] ;~ 28F0:1CD2
cs=0x28f0;eip=0x001cd6; 	T(MOV(cl, 5));	// 91697 mov     cl, 5 ;~ 28F0:1CD6
cs=0x28f0;eip=0x001cd8; 	R(CALLF(sub_10240,0));	// 91698 call    sub_10240 ;~ 28F0:1CD8
cs=0x28f0;eip=0x001cdd; 	X(PUSH(ax));	// 91699 push    ax ;~ 28F0:1CDD
cs=0x28f0;eip=0x001cde; 	R(CALLF(sub_24cf8,0));	// 91700 call    sub_24CF8 ;~ 28F0:1CDE
cs=0x28f0;eip=0x001ce3; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 91701 mov     [bp+var_10], ax ;~ 28F0:1CE3
cs=0x28f0;eip=0x001ce6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 91702 les     bx, [bp+var_8] ;~ 28F0:1CE6
cs=0x28f0;eip=0x001ce9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 91703 mov     ax, es:[bx+14h] ;~ 28F0:1CE9
cs=0x28f0;eip=0x001ced; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 91704 mov     dx, es:[bx+16h] ;~ 28F0:1CED
cs=0x28f0;eip=0x001cf1; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 91705 mov     [bp+var_C], ax ;~ 28F0:1CF1
cs=0x28f0;eip=0x001cf4; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 91706 mov     [bp+var_A], dx ;~ 28F0:1CF4
cs=0x28f0;eip=0x001cf7; 	R(JMP(loc_391de));	// 91707 jmp     short loc_391DE ;~ 28F0:1CF7
loc_391d9:
	// 10260 
cs=0x28f0;eip=0x001cf9; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), 0));	// 91712 mov     [bp+var_10], 0 ;~ 28F0:1CF9
loc_391de:
	// 10261 
cs=0x28f0;eip=0x001cfe; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 91715 mov     ax, word ptr [bp+arg_0] ;~ 28F0:1CFE
cs=0x28f0;eip=0x001d01; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 91716 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:1D01
cs=0x28f0;eip=0x001d04; 	T(ADD(ax, 0x20));	// 91717 add     ax, 20h ; ' ' ;~ 28F0:1D04
cs=0x28f0;eip=0x001d07; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 91718 mov     word ptr [bp+var_4], ax ;~ 28F0:1D07
cs=0x28f0;eip=0x001d0a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 91719 mov     word ptr [bp+var_4+2], dx ;~ 28F0:1D0A
cs=0x28f0;eip=0x001d0d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 91720 les     bx, [bp+var_4] ;~ 28F0:1D0D
cs=0x28f0;eip=0x001d10; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 91721 mov     ax, es:[bx+18h] ;~ 28F0:1D10
cs=0x28f0;eip=0x001d14; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 91722 mov     dx, es:[bx+1Ah] ;~ 28F0:1D14
cs=0x28f0;eip=0x001d18; 	T(SHL(ax, 1));	// 91723 shl     ax, 1 ;~ 28F0:1D18
cs=0x28f0;eip=0x001d1a; 	T(RCL(dx, 1));	// 91724 rcl     dx, 1 ;~ 28F0:1D1A
cs=0x28f0;eip=0x001d1c; 	T(CMP(dx, *(dw*)(raddr(es,bx+2))));	// 91725 cmp     dx, es:[bx+2] ;~ 28F0:1D1C
cs=0x28f0;eip=0x001d20; 	R(JL(loc_39222));	// 91726 jl      short loc_39222 ;~ 28F0:1D20
cs=0x28f0;eip=0x001d22; 	R(JG(loc_39209));	// 91727 jg      short loc_39209 ;~ 28F0:1D22
cs=0x28f0;eip=0x001d24; 	T(CMP(ax, *(dw*)(raddr(es,bx))));	// 91728 cmp     ax, es:[bx] ;~ 28F0:1D24
cs=0x28f0;eip=0x001d27; 	R(JC(loc_39222));	// 91729 jb      short loc_39222 ;~ 28F0:1D27
loc_39209:
	// 10262 
cs=0x28f0;eip=0x001d29; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C))));	// 91732 mov     ax, es:[bx+1Ch] ;~ 28F0:1D29
cs=0x28f0;eip=0x001d2d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E))));	// 91733 mov     dx, es:[bx+1Eh] ;~ 28F0:1D2D
cs=0x28f0;eip=0x001d31; 	T(SHL(ax, 1));	// 91734 shl     ax, 1 ;~ 28F0:1D31
cs=0x28f0;eip=0x001d33; 	T(RCL(dx, 1));	// 91735 rcl     dx, 1 ;~ 28F0:1D33
cs=0x28f0;eip=0x001d35; 	T(CMP(dx, *(dw*)(raddr(es,bx+2))));	// 91736 cmp     dx, es:[bx+2] ;~ 28F0:1D35
cs=0x28f0;eip=0x001d39; 	R(JL(loc_39253));	// 91737 jl      short loc_39253 ;~ 28F0:1D39
cs=0x28f0;eip=0x001d3b; 	R(JG(loc_39222));	// 91738 jg      short loc_39222 ;~ 28F0:1D3B
cs=0x28f0;eip=0x001d3d; 	T(CMP(ax, *(dw*)(raddr(es,bx))));	// 91739 cmp     ax, es:[bx] ;~ 28F0:1D3D
cs=0x28f0;eip=0x001d40; 	R(JBE(loc_39253));	// 91740 jbe     short loc_39253 ;~ 28F0:1D40
loc_39222:
	// 10263 
cs=0x28f0;eip=0x001d42; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 91744 mov     ax, es:[bx] ;~ 28F0:1D42
cs=0x28f0;eip=0x001d45; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 91745 mov     dx, es:[bx+2] ;~ 28F0:1D45
cs=0x28f0;eip=0x001d49; 	T(NEG(ax));	// 91746 neg     ax ;~ 28F0:1D49
cs=0x28f0;eip=0x001d4b; 	T(ADC(dx, 0));	// 91747 adc     dx, 0 ;~ 28F0:1D4B
cs=0x28f0;eip=0x001d4e; 	T(NEG(dx));	// 91748 neg     dx ;~ 28F0:1D4E
cs=0x28f0;eip=0x001d50; 	T(MOV(cl, 5));	// 91749 mov     cl, 5 ;~ 28F0:1D50
cs=0x28f0;eip=0x001d52; 	R(CALLF(sub_10240,0));	// 91750 call    sub_10240 ;~ 28F0:1D52
cs=0x28f0;eip=0x001d57; 	X(PUSH(ax));	// 91751 push    ax ;~ 28F0:1D57
cs=0x28f0;eip=0x001d58; 	R(CALLF(sub_24cf8,0));	// 91752 call    sub_24CF8 ;~ 28F0:1D58
cs=0x28f0;eip=0x001d5d; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 91753 mov     [bp+var_E], ax ;~ 28F0:1D5D
cs=0x28f0;eip=0x001d60; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 91754 les     bx, [bp+var_8] ;~ 28F0:1D60
cs=0x28f0;eip=0x001d63; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 91755 mov     ax, es:[bx+14h] ;~ 28F0:1D63
cs=0x28f0;eip=0x001d67; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 91756 mov     dx, es:[bx+16h] ;~ 28F0:1D67
cs=0x28f0;eip=0x001d6b; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 91757 mov     [bp+var_C], ax ;~ 28F0:1D6B
cs=0x28f0;eip=0x001d6e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 91758 mov     [bp+var_A], dx ;~ 28F0:1D6E
cs=0x28f0;eip=0x001d71; 	R(JMP(loc_39258));	// 91759 jmp     short loc_39258 ;~ 28F0:1D71
loc_39253:
	// 10264 
cs=0x28f0;eip=0x001d73; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0));	// 91764 mov     [bp+var_E], 0 ;~ 28F0:1D73
loc_39258:
	// 10265 
cs=0x28f0;eip=0x001d78; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91767 les     bx, [bp+arg_0] ;~ 28F0:1D78
cs=0x28f0;eip=0x001d7b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FE))));	// 91768 mov     ax, es:[bx+2FEh] ;~ 28F0:1D7B
cs=0x28f0;eip=0x001d80; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x300))));	// 91769 mov     dx, es:[bx+300h] ;~ 28F0:1D80
cs=0x28f0;eip=0x001d85; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 91770 les     bx, es:[bx+31Ch] ;~ 28F0:1D85
cs=0x28f0;eip=0x001d8a; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), dx));	// 91771 cmp     es:[bx+0Ch], dx ;~ 28F0:1D8A
cs=0x28f0;eip=0x001d8e; 	R(JL(loc_39289));	// 91772 jl      short loc_39289 ;~ 28F0:1D8E
cs=0x28f0;eip=0x001d90; 	R(JG(loc_39278));	// 91773 jg      short loc_39278 ;~ 28F0:1D90
cs=0x28f0;eip=0x001d92; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), ax));	// 91774 cmp     es:[bx+0Ah], ax ;~ 28F0:1D92
cs=0x28f0;eip=0x001d96; 	R(JBE(loc_39289));	// 91775 jbe     short loc_39289 ;~ 28F0:1D96
loc_39278:
	// 10266 
cs=0x28f0;eip=0x001d98; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 91778 les     bx, [bp+var_8] ;~ 28F0:1D98
cs=0x28f0;eip=0x001d9b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 91779 mov     ax, es:[bx+14h] ;~ 28F0:1D9B
cs=0x28f0;eip=0x001d9f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 91780 mov     dx, es:[bx+16h] ;~ 28F0:1D9F
cs=0x28f0;eip=0x001da3; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 91781 mov     [bp+var_C], ax ;~ 28F0:1DA3
cs=0x28f0;eip=0x001da6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 91782 mov     [bp+var_A], dx ;~ 28F0:1DA6
loc_39289:
	// 10267 
cs=0x28f0;eip=0x001da9; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0));	// 91786 cmp     [bp+var_10], 0 ;~ 28F0:1DA9
cs=0x28f0;eip=0x001dad; 	R(JNZ(loc_392c5));	// 91787 jnz     short loc_392C5 ;~ 28F0:1DAD
cs=0x28f0;eip=0x001daf; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 91788 cmp     [bp+var_E], 0 ;~ 28F0:1DAF
cs=0x28f0;eip=0x001db3; 	R(JNZ(loc_392c5));	// 91789 jnz     short loc_392C5 ;~ 28F0:1DB3
cs=0x28f0;eip=0x001db5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 91790 les     bx, [bp+arg_0] ;~ 28F0:1DB5
cs=0x28f0;eip=0x001db8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FE))));	// 91791 mov     ax, es:[bx+2FEh] ;~ 28F0:1DB8
cs=0x28f0;eip=0x001dbd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x300))));	// 91792 mov     dx, es:[bx+300h] ;~ 28F0:1DBD
cs=0x28f0;eip=0x001dc2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 91793 les     bx, es:[bx+31Ch] ;~ 28F0:1DC2
cs=0x28f0;eip=0x001dc7; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), dx));	// 91794 cmp     es:[bx+0Ch], dx ;~ 28F0:1DC7
cs=0x28f0;eip=0x001dcb; 	R(JG(loc_392c5));	// 91795 jg      short loc_392C5 ;~ 28F0:1DCB
cs=0x28f0;eip=0x001dcd; 	R(JL(loc_392b5));	// 91796 jl      short loc_392B5 ;~ 28F0:1DCD
cs=0x28f0;eip=0x001dcf; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), ax));	// 91797 cmp     es:[bx+0Ah], ax ;~ 28F0:1DCF
cs=0x28f0;eip=0x001dd3; 	R(JA(loc_392c5));	// 91798 ja      short loc_392C5 ;~ 28F0:1DD3
loc_392b5:
	// 10268 
cs=0x28f0;eip=0x001dd5; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 91801 les     bx, [bp+var_8] ;~ 28F0:1DD5
cs=0x28f0;eip=0x001dd8; 	T(SUB(ax, ax));	// 91802 sub     ax, ax ;~ 28F0:1DD8
cs=0x28f0;eip=0x001dda; 	X(MOV(*(dw*)(raddr(es,bx+0x1A)), ax));	// 91803 mov     es:[bx+1Ah], ax ;~ 28F0:1DDA
cs=0x28f0;eip=0x001dde; 	X(MOV(*(dw*)(raddr(es,bx+0x18)), ax));	// 91804 mov     es:[bx+18h], ax ;~ 28F0:1DDE
cs=0x28f0;eip=0x001de2; 	R(JMP(loc_39470));	// 91805 jmp     loc_39470 ;~ 28F0:1DE2
loc_392c5:
	// 10269 
cs=0x28f0;eip=0x001de5; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x2D0));	// 91810 cmp     [bp+var_10], 2D0h ;~ 28F0:1DE5
cs=0x28f0;eip=0x001dea; 	R(JL(loc_392d3));	// 91811 jl      short loc_392D3 ;~ 28F0:1DEA
cs=0x28f0;eip=0x001dec; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x870));	// 91812 cmp     [bp+var_10], 870h ;~ 28F0:1DEC
cs=0x28f0;eip=0x001df1; 	R(JLE(loc_3934f));	// 91813 jle     short loc_3934F ;~ 28F0:1DF1
loc_392d3:
	// 10270 
cs=0x28f0;eip=0x001df3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 91816 les     bx, [bp+var_8] ;~ 28F0:1DF3
cs=0x28f0;eip=0x001df6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 91817 mov     ax, es:[bx+10h] ;~ 28F0:1DF6
cs=0x28f0;eip=0x001dfa; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 91818 mov     dx, es:[bx+12h] ;~ 28F0:1DFA
cs=0x28f0;eip=0x001dfe; 	T(NEG(ax));	// 91819 neg     ax ;~ 28F0:1DFE
cs=0x28f0;eip=0x001e00; 	T(ADC(dx, 0));	// 91820 adc     dx, 0 ;~ 28F0:1E00
cs=0x28f0;eip=0x001e03; 	T(NEG(dx));	// 91821 neg     dx ;~ 28F0:1E03
cs=0x28f0;eip=0x001e05; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 91822 mov     [bp+var_18], ax ;~ 28F0:1E05
cs=0x28f0;eip=0x001e08; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 91823 mov     [bp+var_16], dx ;~ 28F0:1E08
cs=0x28f0;eip=0x001e0b; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0));	// 91824 cmp     [bp+var_10], 0 ;~ 28F0:1E0B
cs=0x28f0;eip=0x001e0f; 	R(JZ(loc_3931c));	// 91825 jz      short loc_3931C ;~ 28F0:1E0F
cs=0x28f0;eip=0x001e11; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 91826 push    [bp+var_10] ;~ 28F0:1E11
cs=0x28f0;eip=0x001e14; 	R(CALLF(sub_27cb4,0));	// 91827 call    sub_27CB4 ;~ 28F0:1E14
cs=0x28f0;eip=0x001e19; 	X(PUSH(dx));	// 91828 push    dx ;~ 28F0:1E19
cs=0x28f0;eip=0x001e1a; 	X(PUSH(ax));	// 91829 push    ax ;~ 28F0:1E1A
cs=0x28f0;eip=0x001e1b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 91830 mov     ax, [bp+var_18] ;~ 28F0:1E1B
cs=0x28f0;eip=0x001e1e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 91831 mov     dx, [bp+var_16] ;~ 28F0:1E1E
cs=0x28f0;eip=0x001e21; 	T(MOV(cl, 8));	// 91832 mov     cl, 8 ;~ 28F0:1E21
cs=0x28f0;eip=0x001e23; 	R(CALLF(sub_10240,0));	// 91833 call    sub_10240 ;~ 28F0:1E23
cs=0x28f0;eip=0x001e28; 	X(PUSH(dx));	// 91834 push    dx ;~ 28F0:1E28
cs=0x28f0;eip=0x001e29; 	X(PUSH(ax));	// 91835 push    ax ;~ 28F0:1E29
cs=0x28f0;eip=0x001e2a; 	R(CALLF(sub_105c2,0));	// 91836 call    sub_105C2 ;~ 28F0:1E2A
cs=0x28f0;eip=0x001e2f; 	T(MOV(cl, 8));	// 91837 mov     cl, 8 ;~ 28F0:1E2F
cs=0x28f0;eip=0x001e31; 	R(CALLF(sub_10240,0));	// 91838 call    sub_10240 ;~ 28F0:1E31
cs=0x28f0;eip=0x001e36; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 91839 mov     [bp+var_18], ax ;~ 28F0:1E36
cs=0x28f0;eip=0x001e39; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 91840 mov     [bp+var_16], dx ;~ 28F0:1E39
loc_3931c:
	// 10271 
cs=0x28f0;eip=0x001e3c; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 91843 cmp     [bp+var_E], 0 ;~ 28F0:1E3C
cs=0x28f0;eip=0x001e40; 	R(JZ(loc_39357));	// 91844 jz      short loc_39357 ;~ 28F0:1E40
cs=0x28f0;eip=0x001e42; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 91845 push    [bp+var_E] ;~ 28F0:1E42
cs=0x28f0;eip=0x001e45; 	R(CALLF(sub_27cb4,0));	// 91846 call    sub_27CB4 ;~ 28F0:1E45
cs=0x28f0;eip=0x001e4a; 	X(PUSH(dx));	// 91847 push    dx ;~ 28F0:1E4A
cs=0x28f0;eip=0x001e4b; 	X(PUSH(ax));	// 91848 push    ax ;~ 28F0:1E4B
cs=0x28f0;eip=0x001e4c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_18))));	// 91849 mov     ax, [bp+var_18] ;~ 28F0:1E4C
cs=0x28f0;eip=0x001e4f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_16))));	// 91850 mov     dx, [bp+var_16] ;~ 28F0:1E4F
cs=0x28f0;eip=0x001e52; 	T(MOV(cl, 8));	// 91851 mov     cl, 8 ;~ 28F0:1E52
cs=0x28f0;eip=0x001e54; 	R(CALLF(sub_10240,0));	// 91852 call    sub_10240 ;~ 28F0:1E54
cs=0x28f0;eip=0x001e59; 	X(PUSH(dx));	// 91853 push    dx ;~ 28F0:1E59
cs=0x28f0;eip=0x001e5a; 	X(PUSH(ax));	// 91854 push    ax ;~ 28F0:1E5A
cs=0x28f0;eip=0x001e5b; 	R(CALLF(sub_105c2,0));	// 91855 call    sub_105C2 ;~ 28F0:1E5B
cs=0x28f0;eip=0x001e60; 	T(MOV(cl, 8));	// 91856 mov     cl, 8 ;~ 28F0:1E60
cs=0x28f0;eip=0x001e62; 	R(CALLF(sub_10240,0));	// 91857 call    sub_10240 ;~ 28F0:1E62
cs=0x28f0;eip=0x001e67; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 91858 mov     [bp+var_18], ax ;~ 28F0:1E67
cs=0x28f0;eip=0x001e6a; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 91859 mov     [bp+var_16], dx ;~ 28F0:1E6A
cs=0x28f0;eip=0x001e6d; 	R(JMP(loc_39357));	// 91860 jmp     short loc_39357 ;~ 28F0:1E6D
loc_3934f:
	// 10272 
cs=0x28f0;eip=0x001e6f; 	T(SUB(ax, ax));	// 91864 sub     ax, ax ;~ 28F0:1E6F
cs=0x28f0;eip=0x001e71; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 91865 mov     [bp+var_16], ax ;~ 28F0:1E71
cs=0x28f0;eip=0x001e74; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 91866 mov     [bp+var_18], ax ;~ 28F0:1E74
loc_39357:
	// 10273 
cs=0x28f0;eip=0x001e77; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 91870 les     bx, [bp+var_8] ;~ 28F0:1E77
cs=0x28f0;eip=0x001e7a; 	T(CMP(*(dw*)(raddr(es,bx+6)), 0));	// 91871 cmp     word ptr es:[bx+6], 0 ;~ 28F0:1E7A
cs=0x28f0;eip=0x001e7f; 	R(JL(loc_39389));	// 91872 jl      short loc_39389 ;~ 28F0:1E7F
cs=0x28f0;eip=0x001e81; 	R(JG(loc_3936a));	// 91873 jg      short loc_3936A ;~ 28F0:1E81
cs=0x28f0;eip=0x001e83; 	T(CMP(*(dw*)(raddr(es,bx+4)), 0));	// 91874 cmp     word ptr es:[bx+4], 0 ;~ 28F0:1E83
cs=0x28f0;eip=0x001e88; 	R(JZ(loc_39389));	// 91875 jz      short loc_39389 ;~ 28F0:1E88
loc_3936a:
	// 10274 
cs=0x28f0;eip=0x001e8a; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x2D0));	// 91878 cmp     [bp+var_10], 2D0h ;~ 28F0:1E8A
cs=0x28f0;eip=0x001e8f; 	R(JLE(loc_39389));	// 91879 jle     short loc_39389 ;~ 28F0:1E8F
cs=0x28f0;eip=0x001e91; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x870));	// 91880 cmp     [bp+var_10], 870h ;~ 28F0:1E91
cs=0x28f0;eip=0x001e96; 	R(JGE(loc_39389));	// 91881 jge     short loc_39389 ;~ 28F0:1E96
cs=0x28f0;eip=0x001e98; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 91882 mov     ax, es:[bx+4] ;~ 28F0:1E98
cs=0x28f0;eip=0x001e9c; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 91883 mov     dx, es:[bx+6] ;~ 28F0:1E9C
cs=0x28f0;eip=0x001ea0; 	T(NEG(ax));	// 91884 neg     ax ;~ 28F0:1EA0
cs=0x28f0;eip=0x001ea2; 	T(ADC(dx, 0));	// 91885 adc     dx, 0 ;~ 28F0:1EA2
cs=0x28f0;eip=0x001ea5; 	T(NEG(dx));	// 91886 neg     dx ;~ 28F0:1EA5
cs=0x28f0;eip=0x001ea7; 	R(JMP(loc_39394));	// 91887 jmp     short loc_39394 ;~ 28F0:1EA7
loc_39389:
	// 10275 
cs=0x28f0;eip=0x001ea9; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 91892 les     bx, [bp+var_8] ;~ 28F0:1EA9
cs=0x28f0;eip=0x001eac; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 91893 mov     ax, es:[bx+4] ;~ 28F0:1EAC
cs=0x28f0;eip=0x001eb0; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 91894 mov     dx, es:[bx+6] ;~ 28F0:1EB0
loc_39394:
	// 10276 
cs=0x28f0;eip=0x001eb4; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 91897 mov     [bp+var_14], ax ;~ 28F0:1EB4
cs=0x28f0;eip=0x001eb7; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 91898 mov     [bp+var_12], dx ;~ 28F0:1EB7
cs=0x28f0;eip=0x001eba; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0));	// 91899 cmp     [bp+var_10], 0 ;~ 28F0:1EBA
cs=0x28f0;eip=0x001ebe; 	R(JZ(loc_393cb));	// 91900 jz      short loc_393CB ;~ 28F0:1EBE
cs=0x28f0;eip=0x001ec0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_10))));	// 91901 push    [bp+var_10] ;~ 28F0:1EC0
cs=0x28f0;eip=0x001ec3; 	R(CALLF(sub_27cb4,0));	// 91902 call    sub_27CB4 ;~ 28F0:1EC3
cs=0x28f0;eip=0x001ec8; 	X(PUSH(dx));	// 91903 push    dx ;~ 28F0:1EC8
cs=0x28f0;eip=0x001ec9; 	X(PUSH(ax));	// 91904 push    ax ;~ 28F0:1EC9
cs=0x28f0;eip=0x001eca; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 91905 mov     ax, [bp+var_14] ;~ 28F0:1ECA
cs=0x28f0;eip=0x001ecd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_12))));	// 91906 mov     dx, [bp+var_12] ;~ 28F0:1ECD
cs=0x28f0;eip=0x001ed0; 	T(MOV(cl, 8));	// 91907 mov     cl, 8 ;~ 28F0:1ED0
cs=0x28f0;eip=0x001ed2; 	R(CALLF(sub_10240,0));	// 91908 call    sub_10240 ;~ 28F0:1ED2
cs=0x28f0;eip=0x001ed7; 	X(PUSH(dx));	// 91909 push    dx ;~ 28F0:1ED7
cs=0x28f0;eip=0x001ed8; 	X(PUSH(ax));	// 91910 push    ax ;~ 28F0:1ED8
cs=0x28f0;eip=0x001ed9; 	R(CALLF(sub_105c2,0));	// 91911 call    sub_105C2 ;~ 28F0:1ED9
cs=0x28f0;eip=0x001ede; 	T(MOV(cl, 8));	// 91912 mov     cl, 8 ;~ 28F0:1EDE
cs=0x28f0;eip=0x001ee0; 	R(CALLF(sub_10240,0));	// 91913 call    sub_10240 ;~ 28F0:1EE0
cs=0x28f0;eip=0x001ee5; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 91914 mov     [bp+var_14], ax ;~ 28F0:1EE5
cs=0x28f0;eip=0x001ee8; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 91915 mov     [bp+var_12], dx ;~ 28F0:1EE8
loc_393cb:
	// 10277 
cs=0x28f0;eip=0x001eeb; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 91918 cmp     [bp+var_E], 0 ;~ 28F0:1EEB
cs=0x28f0;eip=0x001eef; 	R(JZ(loc_393fc));	// 91919 jz      short loc_393FC ;~ 28F0:1EEF
cs=0x28f0;eip=0x001ef1; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 91920 push    [bp+var_E] ;~ 28F0:1EF1
cs=0x28f0;eip=0x001ef4; 	R(CALLF(sub_27cb4,0));	// 91921 call    sub_27CB4 ;~ 28F0:1EF4
cs=0x28f0;eip=0x001ef9; 	X(PUSH(dx));	// 91922 push    dx ;~ 28F0:1EF9
cs=0x28f0;eip=0x001efa; 	X(PUSH(ax));	// 91923 push    ax ;~ 28F0:1EFA
cs=0x28f0;eip=0x001efb; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_14))));	// 91924 mov     ax, [bp+var_14] ;~ 28F0:1EFB
cs=0x28f0;eip=0x001efe; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_12))));	// 91925 mov     dx, [bp+var_12] ;~ 28F0:1EFE
cs=0x28f0;eip=0x001f01; 	T(MOV(cl, 8));	// 91926 mov     cl, 8 ;~ 28F0:1F01
cs=0x28f0;eip=0x001f03; 	R(CALLF(sub_10240,0));	// 91927 call    sub_10240 ;~ 28F0:1F03
cs=0x28f0;eip=0x001f08; 	X(PUSH(dx));	// 91928 push    dx ;~ 28F0:1F08
cs=0x28f0;eip=0x001f09; 	X(PUSH(ax));	// 91929 push    ax ;~ 28F0:1F09
cs=0x28f0;eip=0x001f0a; 	R(CALLF(sub_105c2,0));	// 91930 call    sub_105C2 ;~ 28F0:1F0A
cs=0x28f0;eip=0x001f0f; 	T(MOV(cl, 8));	// 91931 mov     cl, 8 ;~ 28F0:1F0F
cs=0x28f0;eip=0x001f11; 	R(CALLF(sub_10240,0));	// 91932 call    sub_10240 ;~ 28F0:1F11
cs=0x28f0;eip=0x001f16; 	X(MOV(*(dw*)(raddr(ss,bp+var_14)), ax));	// 91933 mov     [bp+var_14], ax ;~ 28F0:1F16
cs=0x28f0;eip=0x001f19; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), dx));	// 91934 mov     [bp+var_12], dx ;~ 28F0:1F19
loc_393fc:
	// 10278 
cs=0x28f0;eip=0x001f1c; 	T(MOV(ax, 0x100));	// 91937 mov     ax, 100h ;~ 28F0:1F1C
cs=0x28f0;eip=0x001f1f; 	T(CWD);	// 91938 cwd ;~ 28F0:1F1F
cs=0x28f0;eip=0x001f20; 	X(PUSH(dx));	// 91939 push    dx ;~ 28F0:1F20
cs=0x28f0;eip=0x001f21; 	X(PUSH(ax));	// 91940 push    ax ;~ 28F0:1F21
cs=0x28f0;eip=0x001f22; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 91941 mov     ax, word ptr unk_57111 ;~ 28F0:1F22
cs=0x28f0;eip=0x001f25; 	T(CWD);	// 91942 cwd ;~ 28F0:1F25
cs=0x28f0;eip=0x001f26; 	X(PUSH(dx));	// 91943 push    dx ;~ 28F0:1F26
cs=0x28f0;eip=0x001f27; 	X(PUSH(ax));	// 91944 push    ax ;~ 28F0:1F27
cs=0x28f0;eip=0x001f28; 	X(PUSH(*(dw*)(raddr(ss,bp+var_16))));	// 91945 push    [bp+var_16] ;~ 28F0:1F28
cs=0x28f0;eip=0x001f2b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_18))));	// 91946 push    [bp+var_18] ;~ 28F0:1F2B
cs=0x28f0;eip=0x001f2e; 	R(CALLF(sub_105c2,0));	// 91947 call    sub_105C2 ;~ 28F0:1F2E
cs=0x28f0;eip=0x001f33; 	X(PUSH(dx));	// 91948 push    dx ;~ 28F0:1F33
cs=0x28f0;eip=0x001f34; 	X(PUSH(ax));	// 91949 push    ax ;~ 28F0:1F34
cs=0x28f0;eip=0x001f35; 	R(CALLF(sub_10526,0));	// 91950 call    sub_10526 ;~ 28F0:1F35
cs=0x28f0;eip=0x001f3a; 	T(MOV(cx, 0x100));	// 91951 mov     cx, 100h ;~ 28F0:1F3A
cs=0x28f0;eip=0x001f3d; 	T(SUB(bx, bx));	// 91952 sub     bx, bx ;~ 28F0:1F3D
cs=0x28f0;eip=0x001f3f; 	X(PUSH(bx));	// 91953 push    bx ;~ 28F0:1F3F
cs=0x28f0;eip=0x001f40; 	X(PUSH(cx));	// 91954 push    cx ;~ 28F0:1F40
cs=0x28f0;eip=0x001f41; 	T(MOV(cx, ax));	// 91955 mov     cx, ax ;~ 28F0:1F41
cs=0x28f0;eip=0x001f43; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 91956 mov     ax, word ptr unk_57111 ;~ 28F0:1F43
cs=0x28f0;eip=0x001f46; 	T(MOV(bx, dx));	// 91957 mov     bx, dx ;~ 28F0:1F46
cs=0x28f0;eip=0x001f48; 	T(CWD);	// 91958 cwd ;~ 28F0:1F48
cs=0x28f0;eip=0x001f49; 	X(PUSH(dx));	// 91959 push    dx ;~ 28F0:1F49
cs=0x28f0;eip=0x001f4a; 	X(PUSH(ax));	// 91960 push    ax ;~ 28F0:1F4A
cs=0x28f0;eip=0x001f4b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 91961 push    [bp+var_A] ;~ 28F0:1F4B
cs=0x28f0;eip=0x001f4e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 91962 push    [bp+var_C] ;~ 28F0:1F4E
cs=0x28f0;eip=0x001f51; 	T(MOV(si, cx));	// 91963 mov     si, cx ;~ 28F0:1F51
cs=0x28f0;eip=0x001f53; 	T(MOV(di, bx));	// 91964 mov     di, bx ;~ 28F0:1F53
cs=0x28f0;eip=0x001f55; 	R(CALLF(sub_105c2,0));	// 91965 call    sub_105C2 ;~ 28F0:1F55
cs=0x28f0;eip=0x001f5a; 	X(PUSH(dx));	// 91966 push    dx ;~ 28F0:1F5A
cs=0x28f0;eip=0x001f5b; 	X(PUSH(ax));	// 91967 push    ax ;~ 28F0:1F5B
cs=0x28f0;eip=0x001f5c; 	R(CALLF(sub_10526,0));	// 91968 call    sub_10526 ;~ 28F0:1F5C
cs=0x28f0;eip=0x001f61; 	T(ADD(ax, si));	// 91969 add     ax, si ;~ 28F0:1F61
cs=0x28f0;eip=0x001f63; 	T(ADC(dx, di));	// 91970 adc     dx, di ;~ 28F0:1F63
cs=0x28f0;eip=0x001f65; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 91971 les     bx, [bp+var_8] ;~ 28F0:1F65
cs=0x28f0;eip=0x001f68; 	X(ADD(*(dw*)(raddr(es,bx+0x18)), ax));	// 91972 add     es:[bx+18h], ax ;~ 28F0:1F68
cs=0x28f0;eip=0x001f6c; 	X(ADC(*(dw*)(raddr(es,bx+0x1A)), dx));	// 91973 adc     es:[bx+1Ah], dx ;~ 28F0:1F6C
cs=0x28f0;eip=0x001f70; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 91974 mov     ax, es:[bx+18h] ;~ 28F0:1F70
cs=0x28f0;eip=0x001f74; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 91975 mov     dx, es:[bx+1Ah] ;~ 28F0:1F74
cs=0x28f0;eip=0x001f78; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_14))));	// 91976 add     ax, [bp+var_14] ;~ 28F0:1F78
cs=0x28f0;eip=0x001f7b; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_12))));	// 91977 adc     dx, [bp+var_12] ;~ 28F0:1F7B
cs=0x28f0;eip=0x001f7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_1c)), ax));	// 91978 mov     [bp+var_1C], ax ;~ 28F0:1F7E
cs=0x28f0;eip=0x001f81; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), dx));	// 91979 mov     [bp+var_1A], dx ;~ 28F0:1F81
cs=0x28f0;eip=0x001f84; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 91980 mov     es:[bx], ax ;~ 28F0:1F84
cs=0x28f0;eip=0x001f87; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 91981 mov     es:[bx+2], dx ;~ 28F0:1F87
cs=0x28f0;eip=0x001f8b; 	X(PUSH(es));	// 91982 push    es ;~ 28F0:1F8B
cs=0x28f0;eip=0x001f8c; 	X(PUSH(bx));	// 91983 push    bx ;~ 28F0:1F8C
cs=0x28f0;eip=0x001f8d; 	R(CALL(sub_3bb03,0));	// 91984 call    sub_3BB03 ;~ 28F0:1F8D
loc_39470:
	// 10279 
cs=0x28f0;eip=0x001f90; 	X(POP(si));	// 91987 pop     si ;~ 28F0:1F90
cs=0x28f0;eip=0x001f91; 	X(POP(di));	// 91988 pop     di ;~ 28F0:1F91
cs=0x28f0;eip=0x001f92; 	T(MOV(sp, bp));	// 91989 mov     sp, bp ;~ 28F0:1F92
cs=0x28f0;eip=0x001f94; 	X(POP(bp));	// 91990 pop     bp ;~ 28F0:1F94
cs=0x28f0;eip=0x001f95; 	R(RETN(4));	// 91991 retn    4 ;~ 28F0:1F95
sub_39478:
	// 91999 
#undef var_4
#define var_4 -4
	// 92002 var_4           = dword ptr -4 ;~ 28F0:1F98
#undef arg_0
#define arg_0 4
	// 92003 arg_0           = word ptr  4 ;~ 28F0:1F98
#undef arg_2
#define arg_2 6
	// 92004 arg_2           = dword ptr  6 ;~ 28F0:1F98
cs=0x28f0;eip=0x001f98; 	X(PUSH(bp));	// 92006 push    bp ;~ 28F0:1F98
cs=0x28f0;eip=0x001f99; 	T(MOV(bp, sp));	// 92007 mov     bp, sp ;~ 28F0:1F99
cs=0x28f0;eip=0x001f9b; 	T(SUB(sp, 4));	// 92008 sub     sp, 4 ;~ 28F0:1F9B
cs=0x28f0;eip=0x001f9e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92009 mov     ax, word ptr [bp+arg_2] ;~ 28F0:1F9E
cs=0x28f0;eip=0x001fa1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92010 mov     dx, word ptr [bp+arg_2+2] ;~ 28F0:1FA1
cs=0x28f0;eip=0x001fa4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92011 mov     word ptr [bp+var_4], ax ;~ 28F0:1FA4
cs=0x28f0;eip=0x001fa7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92012 mov     word ptr [bp+var_4+2], dx ;~ 28F0:1FA7
cs=0x28f0;eip=0x001faa; 	T(CMP(unk_57113, 0));	// 92013 cmp     byte ptr unk_57113, 0 ;~ 28F0:1FAA
cs=0x28f0;eip=0x001faf; 	R(JZ(loc_394c7));	// 92014 jz      short loc_394C7 ;~ 28F0:1FAF
cs=0x28f0;eip=0x001fb1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92015 les     bx, [bp+arg_2] ;~ 28F0:1FB1
cs=0x28f0;eip=0x001fb4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 92016 mov     ax, es:[bx+138h] ;~ 28F0:1FB4
cs=0x28f0;eip=0x001fb9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 92017 mov     dx, es:[bx+13Ah] ;~ 28F0:1FB9
cs=0x28f0;eip=0x001fbe; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92018 cmp     es:[bx+122h], dx ;~ 28F0:1FBE
cs=0x28f0;eip=0x001fc3; 	R(JL(loc_394b3));	// 92019 jl      short loc_394B3 ;~ 28F0:1FC3
cs=0x28f0;eip=0x001fc5; 	R(JG(loc_394ae));	// 92020 jg      short loc_394AE ;~ 28F0:1FC5
cs=0x28f0;eip=0x001fc7; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92021 cmp     es:[bx+120h], ax ;~ 28F0:1FC7
cs=0x28f0;eip=0x001fcc; 	R(JC(loc_394b3));	// 92022 jb      short loc_394B3 ;~ 28F0:1FCC
loc_394ae:
	// 10280 
cs=0x28f0;eip=0x001fce; 	T(MOV(ax, 1));	// 92025 mov     ax, 1 ;~ 28F0:1FCE
cs=0x28f0;eip=0x001fd1; 	R(JMP(loc_394b5));	// 92026 jmp     short loc_394B5 ;~ 28F0:1FD1
loc_394b3:
	// 10281 
cs=0x28f0;eip=0x001fd3; 	T(SUB(ax, ax));	// 92031 sub     ax, ax ;~ 28F0:1FD3
loc_394b5:
	// 10282 
cs=0x28f0;eip=0x001fd5; 	T(OR(ax, ax));	// 92034 or      ax, ax ;~ 28F0:1FD5
cs=0x28f0;eip=0x001fd7; 	R(JZ(loc_394c7));	// 92035 jz      short loc_394C7 ;~ 28F0:1FD7
cs=0x28f0;eip=0x001fd9; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92036 push    word ptr [bp+var_4+2] ;~ 28F0:1FD9
cs=0x28f0;eip=0x001fdc; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92037 push    word ptr [bp+var_4] ;~ 28F0:1FDC
cs=0x28f0;eip=0x001fdf; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92038 push    [bp+arg_0] ;~ 28F0:1FDF
cs=0x28f0;eip=0x001fe2; 	R(CALL(sub_3c13f,0));	// 92039 call    sub_3C13F ;~ 28F0:1FE2
cs=0x28f0;eip=0x001fe5; 	R(JMP(loc_3951f));	// 92040 jmp     short loc_3951F ;~ 28F0:1FE5
loc_394c7:
	// 10283 
cs=0x28f0;eip=0x001fe7; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92045 les     bx, [bp+var_4] ;~ 28F0:1FE7
cs=0x28f0;eip=0x001fea; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92046 mov     ax, es:[bx] ;~ 28F0:1FEA
cs=0x28f0;eip=0x001fed; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92047 mov     dx, es:[bx+2] ;~ 28F0:1FED
cs=0x28f0;eip=0x001ff1; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), dx));	// 92048 cmp     es:[bx+1Ah], dx ;~ 28F0:1FF1
cs=0x28f0;eip=0x001ff5; 	R(JL(loc_3951f));	// 92049 jl      short loc_3951F ;~ 28F0:1FF5
cs=0x28f0;eip=0x001ff7; 	R(JG(loc_394df));	// 92050 jg      short loc_394DF ;~ 28F0:1FF7
cs=0x28f0;eip=0x001ff9; 	T(CMP(*(dw*)(raddr(es,bx+0x18)), ax));	// 92051 cmp     es:[bx+18h], ax ;~ 28F0:1FF9
cs=0x28f0;eip=0x001ffd; 	R(JC(loc_3951f));	// 92052 jb      short loc_3951F ;~ 28F0:1FFD
loc_394df:
	// 10284 
cs=0x28f0;eip=0x001fff; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92055 mov     ax, es:[bx] ;~ 28F0:1FFF
cs=0x28f0;eip=0x002002; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92056 mov     dx, es:[bx+2] ;~ 28F0:2002
cs=0x28f0;eip=0x002006; 	T(CMP(*(dw*)(raddr(es,bx+0x1E)), dx));	// 92057 cmp     es:[bx+1Eh], dx ;~ 28F0:2006
cs=0x28f0;eip=0x00200a; 	R(JG(loc_3951f));	// 92058 jg      short loc_3951F ;~ 28F0:200A
cs=0x28f0;eip=0x00200c; 	R(JL(loc_394f4));	// 92059 jl      short loc_394F4 ;~ 28F0:200C
cs=0x28f0;eip=0x00200e; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), ax));	// 92060 cmp     es:[bx+1Ch], ax ;~ 28F0:200E
cs=0x28f0;eip=0x002012; 	R(JA(loc_3951f));	// 92061 ja      short loc_3951F ;~ 28F0:2012
loc_394f4:
	// 10285 
cs=0x28f0;eip=0x002014; 	X(PUSH(es));	// 92064 push    es ;~ 28F0:2014
cs=0x28f0;eip=0x002015; 	X(PUSH(bx));	// 92065 push    bx ;~ 28F0:2015
cs=0x28f0;eip=0x002016; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92066 push    [bp+arg_0] ;~ 28F0:2016
cs=0x28f0;eip=0x002019; 	R(CALL(sub_3c1fa,0));	// 92067 call    sub_3C1FA ;~ 28F0:2019
cs=0x28f0;eip=0x00201c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92068 push    word ptr [bp+var_4+2] ;~ 28F0:201C
cs=0x28f0;eip=0x00201f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92069 push    word ptr [bp+var_4] ;~ 28F0:201F
cs=0x28f0;eip=0x002022; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 92070 mov     ax, [bp+arg_0] ;~ 28F0:2022
cs=0x28f0;eip=0x002025; 	T(NEG(ax));	// 92071 neg     ax ;~ 28F0:2025
cs=0x28f0;eip=0x002027; 	X(PUSH(ax));	// 92072 push    ax ;~ 28F0:2027
cs=0x28f0;eip=0x002028; 	R(CALL(sub_3c08a,0));	// 92073 call    sub_3C08A ;~ 28F0:2028
cs=0x28f0;eip=0x00202b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92074 push    word ptr [bp+var_4+2] ;~ 28F0:202B
cs=0x28f0;eip=0x00202e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92075 push    word ptr [bp+var_4] ;~ 28F0:202E
cs=0x28f0;eip=0x002031; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92076 les     bx, [bp+var_4] ;~ 28F0:2031
cs=0x28f0;eip=0x002034; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92077 push    word ptr es:[bx+12h] ;~ 28F0:2034
cs=0x28f0;eip=0x002038; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92078 push    word ptr es:[bx+10h] ;~ 28F0:2038
cs=0x28f0;eip=0x00203c; 	R(CALL(sub_3b9eb,0));	// 92079 call    sub_3B9EB ;~ 28F0:203C
loc_3951f:
	// 10286 
cs=0x28f0;eip=0x00203f; 	T(CMP(unk_57113, 0));	// 92083 cmp     byte ptr unk_57113, 0 ;~ 28F0:203F
cs=0x28f0;eip=0x002044; 	R(JZ(loc_3954e));	// 92084 jz      short loc_3954E ;~ 28F0:2044
cs=0x28f0;eip=0x002046; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92085 les     bx, [bp+arg_2] ;~ 28F0:2046
cs=0x28f0;eip=0x002049; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 92086 mov     ax, es:[bx+138h] ;~ 28F0:2049
cs=0x28f0;eip=0x00204e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 92087 mov     dx, es:[bx+13Ah] ;~ 28F0:204E
cs=0x28f0;eip=0x002053; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92088 cmp     es:[bx+122h], dx ;~ 28F0:2053
cs=0x28f0;eip=0x002058; 	R(JL(loc_39548));	// 92089 jl      short loc_39548 ;~ 28F0:2058
cs=0x28f0;eip=0x00205a; 	R(JG(loc_39543));	// 92090 jg      short loc_39543 ;~ 28F0:205A
cs=0x28f0;eip=0x00205c; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92091 cmp     es:[bx+120h], ax ;~ 28F0:205C
cs=0x28f0;eip=0x002061; 	R(JC(loc_39548));	// 92092 jb      short loc_39548 ;~ 28F0:2061
loc_39543:
	// 10287 
cs=0x28f0;eip=0x002063; 	T(MOV(ax, 1));	// 92095 mov     ax, 1 ;~ 28F0:2063
cs=0x28f0;eip=0x002066; 	R(JMP(loc_3954a));	// 92096 jmp     short loc_3954A ;~ 28F0:2066
loc_39548:
	// 10288 
cs=0x28f0;eip=0x002068; 	T(SUB(ax, ax));	// 92101 sub     ax, ax ;~ 28F0:2068
loc_3954a:
	// 10289 
cs=0x28f0;eip=0x00206a; 	T(OR(ax, ax));	// 92104 or      ax, ax ;~ 28F0:206A
cs=0x28f0;eip=0x00206c; 	R(JNZ(loc_3956c));	// 92105 jnz     short loc_3956C ;~ 28F0:206C
loc_3954e:
	// 10290 
cs=0x28f0;eip=0x00206e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92108 push    word ptr [bp+var_4+2] ;~ 28F0:206E
cs=0x28f0;eip=0x002071; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92109 push    word ptr [bp+var_4] ;~ 28F0:2071
cs=0x28f0;eip=0x002074; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92110 les     bx, [bp+var_4] ;~ 28F0:2074
cs=0x28f0;eip=0x002077; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 92111 push    word ptr es:[bx+1Ah] ;~ 28F0:2077
cs=0x28f0;eip=0x00207b; 	X(PUSH(*(dw*)(raddr(es,bx+0x18))));	// 92112 push    word ptr es:[bx+18h] ;~ 28F0:207B
cs=0x28f0;eip=0x00207f; 	X(PUSH(*(dw*)(raddr(es,bx+0x1E))));	// 92113 push    word ptr es:[bx+1Eh] ;~ 28F0:207F
cs=0x28f0;eip=0x002083; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C))));	// 92114 push    word ptr es:[bx+1Ch] ;~ 28F0:2083
cs=0x28f0;eip=0x002087; 	R(CALL(sub_3ba8c,0));	// 92115 call    sub_3BA8C ;~ 28F0:2087
cs=0x28f0;eip=0x00208a; 	R(JMP(loc_39575));	// 92116 jmp     short loc_39575 ;~ 28F0:208A
loc_3956c:
	// 10291 
cs=0x28f0;eip=0x00208c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92120 push    word ptr [bp+var_4+2] ;~ 28F0:208C
cs=0x28f0;eip=0x00208f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92121 push    word ptr [bp+var_4] ;~ 28F0:208F
cs=0x28f0;eip=0x002092; 	R(CALL(sub_3c2b6,0));	// 92122 call    sub_3C2B6 ;~ 28F0:2092
loc_39575:
	// 10292 
cs=0x28f0;eip=0x002095; 	T(MOV(sp, bp));	// 92125 mov     sp, bp ;~ 28F0:2095
cs=0x28f0;eip=0x002097; 	X(POP(bp));	// 92126 pop     bp ;~ 28F0:2097
cs=0x28f0;eip=0x002098; 	R(RETN(6));	// 92127 retn    6 ;~ 28F0:2098
sub_3957b:
	// 92135 
#undef var_4
#define var_4 -4
	// 92138 var_4           = dword ptr -4 ;~ 28F0:209B
#undef arg_0
#define arg_0 4
	// 92139 arg_0           = word ptr  4 ;~ 28F0:209B
#undef arg_2
#define arg_2 6
	// 92140 arg_2           = dword ptr  6 ;~ 28F0:209B
cs=0x28f0;eip=0x00209b; 	X(PUSH(bp));	// 92142 push    bp ;~ 28F0:209B
cs=0x28f0;eip=0x00209c; 	T(MOV(bp, sp));	// 92143 mov     bp, sp ;~ 28F0:209C
cs=0x28f0;eip=0x00209e; 	T(SUB(sp, 4));	// 92144 sub     sp, 4 ;~ 28F0:209E
cs=0x28f0;eip=0x0020a1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92145 les     bx, [bp+arg_2] ;~ 28F0:20A1
cs=0x28f0;eip=0x0020a4; 	T(CMP(*(dw*)(raddr(es,bx+2)), 0));	// 92146 cmp     word ptr es:[bx+2], 0 ;~ 28F0:20A4
cs=0x28f0;eip=0x0020a9; 	R(JL(loc_3959c));	// 92147 jl      short loc_3959C ;~ 28F0:20A9
cs=0x28f0;eip=0x0020ab; 	R(JG(loc_39593));	// 92148 jg      short loc_39593 ;~ 28F0:20AB
cs=0x28f0;eip=0x0020ad; 	T(CMP(*(dw*)(raddr(es,bx)), 0));	// 92149 cmp     word ptr es:[bx], 0 ;~ 28F0:20AD
cs=0x28f0;eip=0x0020b1; 	R(JZ(loc_3959c));	// 92150 jz      short loc_3959C ;~ 28F0:20B1
loc_39593:
	// 10293 
cs=0x28f0;eip=0x0020b3; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92153 mov     ax, es:[bx] ;~ 28F0:20B3
cs=0x28f0;eip=0x0020b6; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92154 mov     dx, es:[bx+2] ;~ 28F0:20B6
cs=0x28f0;eip=0x0020ba; 	R(JMP(loc_395aa));	// 92155 jmp     short loc_395AA ;~ 28F0:20BA
loc_3959c:
	// 10294 
cs=0x28f0;eip=0x0020bc; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92160 mov     ax, es:[bx] ;~ 28F0:20BC
cs=0x28f0;eip=0x0020bf; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92161 mov     dx, es:[bx+2] ;~ 28F0:20BF
cs=0x28f0;eip=0x0020c3; 	T(NEG(ax));	// 92162 neg     ax ;~ 28F0:20C3
cs=0x28f0;eip=0x0020c5; 	T(ADC(dx, 0));	// 92163 adc     dx, 0 ;~ 28F0:20C5
cs=0x28f0;eip=0x0020c8; 	T(NEG(dx));	// 92164 neg     dx ;~ 28F0:20C8
loc_395aa:
	// 10295 
cs=0x28f0;eip=0x0020ca; 	T(OR(dx, dx));	// 92167 or      dx, dx ;~ 28F0:20CA
cs=0x28f0;eip=0x0020cc; 	R(JL(loc_395bd));	// 92168 jl      short loc_395BD ;~ 28F0:20CC
cs=0x28f0;eip=0x0020ce; 	R(JG(loc_395b5));	// 92169 jg      short loc_395B5 ;~ 28F0:20CE
cs=0x28f0;eip=0x0020d0; 	T(CMP(ax, 0x5A00));	// 92170 cmp     ax, 5A00h ;~ 28F0:20D0
cs=0x28f0;eip=0x0020d3; 	R(JBE(loc_395bd));	// 92171 jbe     short loc_395BD ;~ 28F0:20D3
loc_395b5:
	// 10296 
cs=0x28f0;eip=0x0020d5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 92174 mov     ax, [bp+arg_0] ;~ 28F0:20D5
cs=0x28f0;eip=0x0020d8; 	T(NEG(ax));	// 92175 neg     ax ;~ 28F0:20D8
cs=0x28f0;eip=0x0020da; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 92176 mov     [bp+arg_0], ax ;~ 28F0:20DA
loc_395bd:
	// 10297 
cs=0x28f0;eip=0x0020dd; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92180 mov     ax, word ptr [bp+arg_2] ;~ 28F0:20DD
cs=0x28f0;eip=0x0020e0; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92181 mov     dx, word ptr [bp+arg_2+2] ;~ 28F0:20E0
cs=0x28f0;eip=0x0020e3; 	T(ADD(ax, 0x20));	// 92182 add     ax, 20h ; ' ' ;~ 28F0:20E3
cs=0x28f0;eip=0x0020e6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92183 mov     word ptr [bp+var_4], ax ;~ 28F0:20E6
cs=0x28f0;eip=0x0020e9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92184 mov     word ptr [bp+var_4+2], dx ;~ 28F0:20E9
cs=0x28f0;eip=0x0020ec; 	T(CMP(unk_57113, 0));	// 92185 cmp     byte ptr unk_57113, 0 ;~ 28F0:20EC
cs=0x28f0;eip=0x0020f1; 	R(JZ(loc_39609));	// 92186 jz      short loc_39609 ;~ 28F0:20F1
cs=0x28f0;eip=0x0020f3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92187 les     bx, [bp+arg_2] ;~ 28F0:20F3
cs=0x28f0;eip=0x0020f6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 92188 mov     ax, es:[bx+138h] ;~ 28F0:20F6
cs=0x28f0;eip=0x0020fb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 92189 mov     dx, es:[bx+13Ah] ;~ 28F0:20FB
cs=0x28f0;eip=0x002100; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92190 cmp     es:[bx+122h], dx ;~ 28F0:2100
cs=0x28f0;eip=0x002105; 	R(JL(loc_395f5));	// 92191 jl      short loc_395F5 ;~ 28F0:2105
cs=0x28f0;eip=0x002107; 	R(JG(loc_395f0));	// 92192 jg      short loc_395F0 ;~ 28F0:2107
cs=0x28f0;eip=0x002109; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92193 cmp     es:[bx+120h], ax ;~ 28F0:2109
cs=0x28f0;eip=0x00210e; 	R(JC(loc_395f5));	// 92194 jb      short loc_395F5 ;~ 28F0:210E
loc_395f0:
	// 10298 
cs=0x28f0;eip=0x002110; 	T(MOV(ax, 1));	// 92197 mov     ax, 1 ;~ 28F0:2110
cs=0x28f0;eip=0x002113; 	R(JMP(loc_395f7));	// 92198 jmp     short loc_395F7 ;~ 28F0:2113
loc_395f5:
	// 10299 
cs=0x28f0;eip=0x002115; 	T(SUB(ax, ax));	// 92203 sub     ax, ax ;~ 28F0:2115
loc_395f7:
	// 10300 
cs=0x28f0;eip=0x002117; 	T(OR(ax, ax));	// 92206 or      ax, ax ;~ 28F0:2117
cs=0x28f0;eip=0x002119; 	R(JZ(loc_39609));	// 92207 jz      short loc_39609 ;~ 28F0:2119
cs=0x28f0;eip=0x00211b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92208 push    word ptr [bp+var_4+2] ;~ 28F0:211B
cs=0x28f0;eip=0x00211e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92209 push    word ptr [bp+var_4] ;~ 28F0:211E
cs=0x28f0;eip=0x002121; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92210 push    [bp+arg_0] ;~ 28F0:2121
cs=0x28f0;eip=0x002124; 	R(CALL(sub_3bd9b,0));	// 92211 call    sub_3BD9B ;~ 28F0:2124
cs=0x28f0;eip=0x002127; 	R(JMP(loc_39661));	// 92212 jmp     short loc_39661 ;~ 28F0:2127
loc_39609:
	// 10301 
cs=0x28f0;eip=0x002129; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92217 les     bx, [bp+var_4] ;~ 28F0:2129
cs=0x28f0;eip=0x00212c; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92218 mov     ax, es:[bx] ;~ 28F0:212C
cs=0x28f0;eip=0x00212f; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92219 mov     dx, es:[bx+2] ;~ 28F0:212F
cs=0x28f0;eip=0x002133; 	T(CMP(*(dw*)(raddr(es,bx+0x1A)), dx));	// 92220 cmp     es:[bx+1Ah], dx ;~ 28F0:2133
cs=0x28f0;eip=0x002137; 	R(JL(loc_39661));	// 92221 jl      short loc_39661 ;~ 28F0:2137
cs=0x28f0;eip=0x002139; 	R(JG(loc_39621));	// 92222 jg      short loc_39621 ;~ 28F0:2139
cs=0x28f0;eip=0x00213b; 	T(CMP(*(dw*)(raddr(es,bx+0x18)), ax));	// 92223 cmp     es:[bx+18h], ax ;~ 28F0:213B
cs=0x28f0;eip=0x00213f; 	R(JC(loc_39661));	// 92224 jb      short loc_39661 ;~ 28F0:213F
loc_39621:
	// 10302 
cs=0x28f0;eip=0x002141; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92227 mov     ax, es:[bx] ;~ 28F0:2141
cs=0x28f0;eip=0x002144; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92228 mov     dx, es:[bx+2] ;~ 28F0:2144
cs=0x28f0;eip=0x002148; 	T(CMP(*(dw*)(raddr(es,bx+0x1E)), dx));	// 92229 cmp     es:[bx+1Eh], dx ;~ 28F0:2148
cs=0x28f0;eip=0x00214c; 	R(JG(loc_39661));	// 92230 jg      short loc_39661 ;~ 28F0:214C
cs=0x28f0;eip=0x00214e; 	R(JL(loc_39636));	// 92231 jl      short loc_39636 ;~ 28F0:214E
cs=0x28f0;eip=0x002150; 	T(CMP(*(dw*)(raddr(es,bx+0x1C)), ax));	// 92232 cmp     es:[bx+1Ch], ax ;~ 28F0:2150
cs=0x28f0;eip=0x002154; 	R(JA(loc_39661));	// 92233 ja      short loc_39661 ;~ 28F0:2154
loc_39636:
	// 10303 
cs=0x28f0;eip=0x002156; 	X(PUSH(es));	// 92236 push    es ;~ 28F0:2156
cs=0x28f0;eip=0x002157; 	X(PUSH(bx));	// 92237 push    bx ;~ 28F0:2157
cs=0x28f0;eip=0x002158; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92238 push    [bp+arg_0] ;~ 28F0:2158
cs=0x28f0;eip=0x00215b; 	R(CALL(sub_3be56,0));	// 92239 call    sub_3BE56 ;~ 28F0:215B
cs=0x28f0;eip=0x00215e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92240 push    word ptr [bp+var_4+2] ;~ 28F0:215E
cs=0x28f0;eip=0x002161; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92241 push    word ptr [bp+var_4] ;~ 28F0:2161
cs=0x28f0;eip=0x002164; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 92242 mov     ax, [bp+arg_0] ;~ 28F0:2164
cs=0x28f0;eip=0x002167; 	T(NEG(ax));	// 92243 neg     ax ;~ 28F0:2167
cs=0x28f0;eip=0x002169; 	X(PUSH(ax));	// 92244 push    ax ;~ 28F0:2169
cs=0x28f0;eip=0x00216a; 	R(CALL(sub_3bce6,0));	// 92245 call    sub_3BCE6 ;~ 28F0:216A
cs=0x28f0;eip=0x00216d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92246 push    word ptr [bp+var_4+2] ;~ 28F0:216D
cs=0x28f0;eip=0x002170; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92247 push    word ptr [bp+var_4] ;~ 28F0:2170
cs=0x28f0;eip=0x002173; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92248 les     bx, [bp+var_4] ;~ 28F0:2173
cs=0x28f0;eip=0x002176; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92249 push    word ptr es:[bx+12h] ;~ 28F0:2176
cs=0x28f0;eip=0x00217a; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92250 push    word ptr es:[bx+10h] ;~ 28F0:217A
cs=0x28f0;eip=0x00217e; 	R(CALL(sub_3b9eb,0));	// 92251 call    sub_3B9EB ;~ 28F0:217E
loc_39661:
	// 10304 
cs=0x28f0;eip=0x002181; 	T(CMP(unk_57113, 0));	// 92255 cmp     byte ptr unk_57113, 0 ;~ 28F0:2181
cs=0x28f0;eip=0x002186; 	R(JZ(loc_39690));	// 92256 jz      short loc_39690 ;~ 28F0:2186
cs=0x28f0;eip=0x002188; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92257 les     bx, [bp+arg_2] ;~ 28F0:2188
cs=0x28f0;eip=0x00218b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 92258 mov     ax, es:[bx+138h] ;~ 28F0:218B
cs=0x28f0;eip=0x002190; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 92259 mov     dx, es:[bx+13Ah] ;~ 28F0:2190
cs=0x28f0;eip=0x002195; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92260 cmp     es:[bx+122h], dx ;~ 28F0:2195
cs=0x28f0;eip=0x00219a; 	R(JL(loc_3968a));	// 92261 jl      short loc_3968A ;~ 28F0:219A
cs=0x28f0;eip=0x00219c; 	R(JG(loc_39685));	// 92262 jg      short loc_39685 ;~ 28F0:219C
cs=0x28f0;eip=0x00219e; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92263 cmp     es:[bx+120h], ax ;~ 28F0:219E
cs=0x28f0;eip=0x0021a3; 	R(JC(loc_3968a));	// 92264 jb      short loc_3968A ;~ 28F0:21A3
loc_39685:
	// 10305 
cs=0x28f0;eip=0x0021a5; 	T(MOV(ax, 1));	// 92267 mov     ax, 1 ;~ 28F0:21A5
cs=0x28f0;eip=0x0021a8; 	R(JMP(loc_3968c));	// 92268 jmp     short loc_3968C ;~ 28F0:21A8
loc_3968a:
	// 10306 
cs=0x28f0;eip=0x0021aa; 	T(SUB(ax, ax));	// 92273 sub     ax, ax ;~ 28F0:21AA
loc_3968c:
	// 10307 
cs=0x28f0;eip=0x0021ac; 	T(OR(ax, ax));	// 92276 or      ax, ax ;~ 28F0:21AC
cs=0x28f0;eip=0x0021ae; 	R(JNZ(loc_396ae));	// 92277 jnz     short loc_396AE ;~ 28F0:21AE
loc_39690:
	// 10308 
cs=0x28f0;eip=0x0021b0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92280 push    word ptr [bp+var_4+2] ;~ 28F0:21B0
cs=0x28f0;eip=0x0021b3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92281 push    word ptr [bp+var_4] ;~ 28F0:21B3
cs=0x28f0;eip=0x0021b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92282 les     bx, [bp+var_4] ;~ 28F0:21B6
cs=0x28f0;eip=0x0021b9; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 92283 push    word ptr es:[bx+1Ah] ;~ 28F0:21B9
cs=0x28f0;eip=0x0021bd; 	X(PUSH(*(dw*)(raddr(es,bx+0x18))));	// 92284 push    word ptr es:[bx+18h] ;~ 28F0:21BD
cs=0x28f0;eip=0x0021c1; 	X(PUSH(*(dw*)(raddr(es,bx+0x1E))));	// 92285 push    word ptr es:[bx+1Eh] ;~ 28F0:21C1
cs=0x28f0;eip=0x0021c5; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C))));	// 92286 push    word ptr es:[bx+1Ch] ;~ 28F0:21C5
cs=0x28f0;eip=0x0021c9; 	R(CALL(sub_3ba8c,0));	// 92287 call    sub_3BA8C ;~ 28F0:21C9
cs=0x28f0;eip=0x0021cc; 	R(JMP(loc_39723));	// 92288 jmp     short loc_39723 ;~ 28F0:21CC
loc_396ae:
	// 10309 
cs=0x28f0;eip=0x0021ce; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 92292 push    word ptr [bp+var_4+2] ;~ 28F0:21CE
cs=0x28f0;eip=0x0021d1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 92293 push    word ptr [bp+var_4] ;~ 28F0:21D1
cs=0x28f0;eip=0x0021d4; 	R(CALL(sub_3c2b6,0));	// 92294 call    sub_3C2B6 ;~ 28F0:21D4
cs=0x28f0;eip=0x0021d7; 	T(OR(al, al));	// 92295 or      al, al ;~ 28F0:21D7
cs=0x28f0;eip=0x0021d9; 	R(JZ(loc_39723));	// 92296 jz      short loc_39723 ;~ 28F0:21D9
cs=0x28f0;eip=0x0021db; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92297 les     bx, [bp+var_4] ;~ 28F0:21DB
cs=0x28f0;eip=0x0021de; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92298 mov     ax, es:[bx] ;~ 28F0:21DE
cs=0x28f0;eip=0x0021e1; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92299 mov     dx, es:[bx+2] ;~ 28F0:21E1
cs=0x28f0;eip=0x0021e5; 	T(NEG(ax));	// 92300 neg     ax ;~ 28F0:21E5
cs=0x28f0;eip=0x0021e7; 	T(ADC(dx, 0));	// 92301 adc     dx, 0 ;~ 28F0:21E7
cs=0x28f0;eip=0x0021ea; 	T(NEG(dx));	// 92302 neg     dx ;~ 28F0:21EA
cs=0x28f0;eip=0x0021ec; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 92303 mov     es:[bx], ax ;~ 28F0:21EC
cs=0x28f0;eip=0x0021ef; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 92304 mov     es:[bx+2], dx ;~ 28F0:21EF
cs=0x28f0;eip=0x0021f3; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92305 mov     ax, word ptr [bp+arg_2] ;~ 28F0:21F3
cs=0x28f0;eip=0x0021f6; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92306 mov     dx, word ptr [bp+arg_2+2] ;~ 28F0:21F6
cs=0x28f0;eip=0x0021f9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92307 mov     word ptr [bp+var_4], ax ;~ 28F0:21F9
cs=0x28f0;eip=0x0021fc; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92308 mov     word ptr [bp+var_4+2], dx ;~ 28F0:21FC
cs=0x28f0;eip=0x0021ff; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92309 les     bx, [bp+var_4] ;~ 28F0:21FF
cs=0x28f0;eip=0x002202; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 92310 mov     ax, es:[bx+0Ch] ;~ 28F0:2202
cs=0x28f0;eip=0x002206; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 92311 mov     dx, es:[bx+0Eh] ;~ 28F0:2206
cs=0x28f0;eip=0x00220a; 	T(SUB(ax, *(dw*)(raddr(es,bx))));	// 92312 sub     ax, es:[bx] ;~ 28F0:220A
cs=0x28f0;eip=0x00220d; 	T(SBB(dx, *(dw*)(raddr(es,bx+2))));	// 92313 sbb     dx, es:[bx+2] ;~ 28F0:220D
cs=0x28f0;eip=0x002211; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 92314 mov     es:[bx], ax ;~ 28F0:2211
cs=0x28f0;eip=0x002214; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 92315 mov     es:[bx+2], dx ;~ 28F0:2214
cs=0x28f0;eip=0x002218; 	X(PUSH(es));	// 92316 push    es ;~ 28F0:2218
cs=0x28f0;eip=0x002219; 	X(PUSH(bx));	// 92317 push    bx ;~ 28F0:2219
cs=0x28f0;eip=0x00221a; 	R(CALL(sub_3c2b6,0));	// 92318 call    sub_3C2B6 ;~ 28F0:221A
cs=0x28f0;eip=0x00221d; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92319 mov     ax, word ptr [bp+arg_2] ;~ 28F0:221D
cs=0x28f0;eip=0x002220; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92320 mov     dx, word ptr [bp+arg_2+2] ;~ 28F0:2220
cs=0x28f0;eip=0x002223; 	T(ADD(ah, 1));	// 92321 add     ah, 1 ;~ 28F0:2223
cs=0x28f0;eip=0x002226; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 92322 mov     word ptr [bp+var_4], ax ;~ 28F0:2226
cs=0x28f0;eip=0x002229; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 92323 mov     word ptr [bp+var_4+2], dx ;~ 28F0:2229
cs=0x28f0;eip=0x00222c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 92324 les     bx, [bp+var_4] ;~ 28F0:222C
cs=0x28f0;eip=0x00222f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 92325 mov     ax, es:[bx+0Ch] ;~ 28F0:222F
cs=0x28f0;eip=0x002233; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 92326 mov     dx, es:[bx+0Eh] ;~ 28F0:2233
cs=0x28f0;eip=0x002237; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 92327 add     es:[bx], ax ;~ 28F0:2237
cs=0x28f0;eip=0x00223a; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 92328 adc     es:[bx+2], dx ;~ 28F0:223A
cs=0x28f0;eip=0x00223e; 	X(PUSH(es));	// 92329 push    es ;~ 28F0:223E
cs=0x28f0;eip=0x00223f; 	X(PUSH(bx));	// 92330 push    bx ;~ 28F0:223F
cs=0x28f0;eip=0x002240; 	R(CALL(sub_3c2b6,0));	// 92331 call    sub_3C2B6 ;~ 28F0:2240
loc_39723:
	// 10310 
cs=0x28f0;eip=0x002243; 	T(MOV(sp, bp));	// 92335 mov     sp, bp ;~ 28F0:2243
cs=0x28f0;eip=0x002245; 	X(POP(bp));	// 92336 pop     bp ;~ 28F0:2245
cs=0x28f0;eip=0x002246; 	R(RETN(6));	// 92337 retn    6 ;~ 28F0:2246
sub_39729:
	// 92345 
#undef arg_0
#define arg_0 4
	// 92348 arg_0           = word ptr  4 ;~ 28F0:2249
#undef arg_2
#define arg_2 6
	// 92349 arg_2           = dword ptr  6 ;~ 28F0:2249
cs=0x28f0;eip=0x002249; 	X(PUSH(bp));	// 92351 push    bp ;~ 28F0:2249
cs=0x28f0;eip=0x00224a; 	T(MOV(bp, sp));	// 92352 mov     bp, sp ;~ 28F0:224A
cs=0x28f0;eip=0x00224c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92353 push    word ptr [bp+arg_2+2] ;~ 28F0:224C
cs=0x28f0;eip=0x00224f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92354 push    word ptr [bp+arg_2] ;~ 28F0:224F
cs=0x28f0;eip=0x002252; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92355 push    [bp+arg_0] ;~ 28F0:2252
cs=0x28f0;eip=0x002255; 	R(CALL(sub_3c1fa,0));	// 92356 call    sub_3C1FA ;~ 28F0:2255
cs=0x28f0;eip=0x002258; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92357 push    word ptr [bp+arg_2+2] ;~ 28F0:2258
cs=0x28f0;eip=0x00225b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92358 push    word ptr [bp+arg_2] ;~ 28F0:225B
cs=0x28f0;eip=0x00225e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 92359 push    [bp+arg_0] ;~ 28F0:225E
cs=0x28f0;eip=0x002261; 	R(CALL(sub_3bfce,0));	// 92360 call    sub_3BFCE ;~ 28F0:2261
cs=0x28f0;eip=0x002264; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92361 push    word ptr [bp+arg_2+2] ;~ 28F0:2264
cs=0x28f0;eip=0x002267; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92362 push    word ptr [bp+arg_2] ;~ 28F0:2267
cs=0x28f0;eip=0x00226a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 92363 les     bx, [bp+arg_2] ;~ 28F0:226A
cs=0x28f0;eip=0x00226d; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92364 push    word ptr es:[bx+12h] ;~ 28F0:226D
cs=0x28f0;eip=0x002271; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92365 push    word ptr es:[bx+10h] ;~ 28F0:2271
cs=0x28f0;eip=0x002275; 	R(CALL(sub_3b9eb,0));	// 92366 call    sub_3B9EB ;~ 28F0:2275
cs=0x28f0;eip=0x002278; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 92367 push    word ptr [bp+arg_2+2] ;~ 28F0:2278
cs=0x28f0;eip=0x00227b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 92368 push    word ptr [bp+arg_2] ;~ 28F0:227B
cs=0x28f0;eip=0x00227e; 	R(CALL(sub_3bb03,0));	// 92369 call    sub_3BB03 ;~ 28F0:227E
cs=0x28f0;eip=0x002281; 	X(POP(bp));	// 92370 pop     bp ;~ 28F0:2281
cs=0x28f0;eip=0x002282; 	R(RETN(6));	// 92371 retn    6 ;~ 28F0:2282
sub_39765:
	// 92379 
#undef var_10
#define var_10 -0x10
	// 92381 var_10          = word ptr -10h ;~ 28F0:2285
#undef var_e
#define var_e -0x0E
	// 92382 var_E           = word ptr -0Eh ;~ 28F0:2285
#undef var_c
#define var_c -0x0C
	// 92383 var_C           = word ptr -0Ch ;~ 28F0:2285
#undef var_a
#define var_a -0x0A
	// 92384 var_A           = word ptr -0Ah ;~ 28F0:2285
#undef var_8
#define var_8 -8
	// 92385 var_8           = dword ptr -8 ;~ 28F0:2285
#undef arg_0
#define arg_0 4
	// 92386 arg_0           = dword ptr  4 ;~ 28F0:2285
cs=0x28f0;eip=0x002285; 	X(PUSH(bp));	// 92388 push    bp ;~ 28F0:2285
cs=0x28f0;eip=0x002286; 	T(MOV(bp, sp));	// 92389 mov     bp, sp ;~ 28F0:2286
cs=0x28f0;eip=0x002288; 	T(SUB(sp, 0x10));	// 92390 sub     sp, 10h ;~ 28F0:2288
cs=0x28f0;eip=0x00228b; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92391 mov     ax, word ptr [bp+arg_0] ;~ 28F0:228B
cs=0x28f0;eip=0x00228e; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92392 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:228E
cs=0x28f0;eip=0x002291; 	T(ADD(ax, 0x40));	// 92393 add     ax, 40h ; '@' ;~ 28F0:2291
cs=0x28f0;eip=0x002294; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 92394 mov     word ptr [bp+var_8], ax ;~ 28F0:2294
cs=0x28f0;eip=0x002297; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 92395 mov     word ptr [bp+var_8+2], dx ;~ 28F0:2297
cs=0x28f0;eip=0x00229a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92396 les     bx, [bp+var_8] ;~ 28F0:229A
cs=0x28f0;eip=0x00229d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92397 mov     ax, es:[bx] ;~ 28F0:229D
cs=0x28f0;eip=0x0022a0; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92398 mov     dx, es:[bx+2] ;~ 28F0:22A0
cs=0x28f0;eip=0x0022a4; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 92399 cmp     es:[bx+4], ax ;~ 28F0:22A4
cs=0x28f0;eip=0x0022a8; 	R(JNZ(loc_39790));	// 92400 jnz     short loc_39790 ;~ 28F0:22A8
cs=0x28f0;eip=0x0022aa; 	T(CMP(*(dw*)(raddr(es,bx+6)), dx));	// 92401 cmp     es:[bx+6], dx ;~ 28F0:22AA
cs=0x28f0;eip=0x0022ae; 	R(JZ(loc_3979d));	// 92402 jz      short loc_3979D ;~ 28F0:22AE
loc_39790:
	// 10311 
cs=0x28f0;eip=0x0022b0; 	X(PUSH(es));	// 92405 push    es ;~ 28F0:22B0
cs=0x28f0;eip=0x0022b1; 	X(PUSH(bx));	// 92406 push    bx ;~ 28F0:22B1
cs=0x28f0;eip=0x0022b2; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 92407 push    word ptr es:[bx+12h] ;~ 28F0:22B2
cs=0x28f0;eip=0x0022b6; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 92408 push    word ptr es:[bx+10h] ;~ 28F0:22B6
cs=0x28f0;eip=0x0022ba; 	R(CALL(sub_3b9eb,0));	// 92409 call    sub_3B9EB ;~ 28F0:22BA
loc_3979d:
	// 10312 
cs=0x28f0;eip=0x0022bd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 92412 les     bx, [bp+var_8] ;~ 28F0:22BD
cs=0x28f0;eip=0x0022c0; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 92413 mov     ax, es:[bx] ;~ 28F0:22C0
cs=0x28f0;eip=0x0022c3; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 92414 mov     dx, es:[bx+2] ;~ 28F0:22C3
cs=0x28f0;eip=0x0022c7; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 92415 mov     [bp+var_C], ax ;~ 28F0:22C7
cs=0x28f0;eip=0x0022ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 92416 mov     [bp+var_A], dx ;~ 28F0:22CA
cs=0x28f0;eip=0x0022cd; 	T(OR(ax, dx));	// 92417 or      ax, dx ;~ 28F0:22CD
cs=0x28f0;eip=0x0022cf; 	R(JNZ(loc_397b4));	// 92418 jnz     short loc_397B4 ;~ 28F0:22CF
cs=0x28f0;eip=0x0022d1; 	R(JMP(loc_3989b));	// 92419 jmp     loc_3989B ;~ 28F0:22D1
loc_397b4:
	// 10313 
cs=0x28f0;eip=0x0022d4; 	T(MOV(ax, 0x100));	// 92423 mov     ax, 100h ;~ 28F0:22D4
cs=0x28f0;eip=0x0022d7; 	T(CWD);	// 92424 cwd ;~ 28F0:22D7
cs=0x28f0;eip=0x0022d8; 	X(PUSH(dx));	// 92425 push    dx ;~ 28F0:22D8
cs=0x28f0;eip=0x0022d9; 	X(PUSH(ax));	// 92426 push    ax ;~ 28F0:22D9
cs=0x28f0;eip=0x0022da; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 92427 mov     ax, word ptr unk_57111 ;~ 28F0:22DA
cs=0x28f0;eip=0x0022dd; 	T(CWD);	// 92428 cwd ;~ 28F0:22DD
cs=0x28f0;eip=0x0022de; 	X(PUSH(dx));	// 92429 push    dx ;~ 28F0:22DE
cs=0x28f0;eip=0x0022df; 	X(PUSH(ax));	// 92430 push    ax ;~ 28F0:22DF
cs=0x28f0;eip=0x0022e0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 92431 push    [bp+var_A] ;~ 28F0:22E0
cs=0x28f0;eip=0x0022e3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 92432 push    [bp+var_C] ;~ 28F0:22E3
cs=0x28f0;eip=0x0022e6; 	R(CALLF(sub_105c2,0));	// 92433 call    sub_105C2 ;~ 28F0:22E6
cs=0x28f0;eip=0x0022eb; 	X(PUSH(dx));	// 92434 push    dx ;~ 28F0:22EB
cs=0x28f0;eip=0x0022ec; 	X(PUSH(ax));	// 92435 push    ax ;~ 28F0:22EC
cs=0x28f0;eip=0x0022ed; 	R(CALLF(sub_10526,0));	// 92436 call    sub_10526 ;~ 28F0:22ED
cs=0x28f0;eip=0x0022f2; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 92437 mov     [bp+var_C], ax ;~ 28F0:22F2
cs=0x28f0;eip=0x0022f5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 92438 mov     [bp+var_A], dx ;~ 28F0:22F5
cs=0x28f0;eip=0x0022f8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92439 les     bx, [bp+arg_0] ;~ 28F0:22F8
cs=0x28f0;eip=0x0022fb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 92440 mov     ax, es:[bx+120h] ;~ 28F0:22FB
cs=0x28f0;eip=0x002300; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 92441 mov     dx, es:[bx+122h] ;~ 28F0:2300
cs=0x28f0;eip=0x002305; 	T(MOV(cl, 8));	// 92442 mov     cl, 8 ;~ 28F0:2305
cs=0x28f0;eip=0x002307; 	R(CALLF(sub_10240,0));	// 92443 call    sub_10240 ;~ 28F0:2307
cs=0x28f0;eip=0x00230c; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 92444 mov     [bp+var_10], ax ;~ 28F0:230C
cs=0x28f0;eip=0x00230f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92445 les     bx, [bp+arg_0] ;~ 28F0:230F
cs=0x28f0;eip=0x002312; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 92446 mov     ax, es:[bx+140h] ;~ 28F0:2312
cs=0x28f0;eip=0x002317; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 92447 mov     dx, es:[bx+142h] ;~ 28F0:2317
cs=0x28f0;eip=0x00231c; 	T(MOV(cl, 8));	// 92448 mov     cl, 8 ;~ 28F0:231C
cs=0x28f0;eip=0x00231e; 	R(CALLF(sub_10240,0));	// 92449 call    sub_10240 ;~ 28F0:231E
cs=0x28f0;eip=0x002323; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 92450 mov     [bp+var_E], ax ;~ 28F0:2323
cs=0x28f0;eip=0x002326; 	T(ax = bp+var_10);	// 92451 lea     ax, [bp+var_10] ;~ 28F0:2326
cs=0x28f0;eip=0x002329; 	X(PUSH(ax));	// 92452 push    ax ;~ 28F0:2329
cs=0x28f0;eip=0x00232a; 	T(MOV(ax, 0x106));	// 92453 mov     ax, 106h ;~ 28F0:232A
cs=0x28f0;eip=0x00232d; 	X(PUSH(ax));	// 92454 push    ax ;~ 28F0:232D
cs=0x28f0;eip=0x00232e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 92455 mov     ax, [bp+var_C] ;~ 28F0:232E
cs=0x28f0;eip=0x002331; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 92456 mov     dx, [bp+var_A] ;~ 28F0:2331
cs=0x28f0;eip=0x002334; 	T(MOV(cl, 5));	// 92457 mov     cl, 5 ;~ 28F0:2334
cs=0x28f0;eip=0x002336; 	R(CALLF(sub_10240,0));	// 92458 call    sub_10240 ;~ 28F0:2336
cs=0x28f0;eip=0x00233b; 	X(PUSH(ax));	// 92459 push    ax ;~ 28F0:233B
cs=0x28f0;eip=0x00233c; 	R(CALLF(sub_24cf8,0));	// 92460 call    sub_24CF8 ;~ 28F0:233C
cs=0x28f0;eip=0x002341; 	X(PUSH(ax));	// 92461 push    ax ;~ 28F0:2341
cs=0x28f0;eip=0x002342; 	R(CALLF(sub_27d5d,0));	// 92462 call    sub_27D5D ;~ 28F0:2342
cs=0x28f0;eip=0x002347; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_10))));	// 92463 mov     ax, [bp+var_10] ;~ 28F0:2347
cs=0x28f0;eip=0x00234a; 	T(CWD);	// 92464 cwd ;~ 28F0:234A
cs=0x28f0;eip=0x00234b; 	T(MOV(dh, dl));	// 92465 mov     dh, dl ;~ 28F0:234B
cs=0x28f0;eip=0x00234d; 	T(MOV(dl, ah));	// 92466 mov     dl, ah ;~ 28F0:234D
cs=0x28f0;eip=0x00234f; 	T(MOV(ah, al));	// 92467 mov     ah, al ;~ 28F0:234F
cs=0x28f0;eip=0x002351; 	T(SUB(al, al));	// 92468 sub     al, al ;~ 28F0:2351
cs=0x28f0;eip=0x002353; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92469 les     bx, [bp+arg_0] ;~ 28F0:2353
cs=0x28f0;eip=0x002356; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 92470 mov     es:[bx+120h], ax ;~ 28F0:2356
cs=0x28f0;eip=0x00235b; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 92471 mov     es:[bx+122h], dx ;~ 28F0:235B
cs=0x28f0;eip=0x002360; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_e))));	// 92472 mov     ax, [bp+var_E] ;~ 28F0:2360
cs=0x28f0;eip=0x002363; 	T(CWD);	// 92473 cwd ;~ 28F0:2363
cs=0x28f0;eip=0x002364; 	T(MOV(dh, dl));	// 92474 mov     dh, dl ;~ 28F0:2364
cs=0x28f0;eip=0x002366; 	T(MOV(dl, ah));	// 92475 mov     dl, ah ;~ 28F0:2366
cs=0x28f0;eip=0x002368; 	T(MOV(ah, al));	// 92476 mov     ah, al ;~ 28F0:2368
cs=0x28f0;eip=0x00236a; 	T(SUB(al, al));	// 92477 sub     al, al ;~ 28F0:236A
cs=0x28f0;eip=0x00236c; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 92478 mov     es:[bx+140h], ax ;~ 28F0:236C
cs=0x28f0;eip=0x002371; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 92479 mov     es:[bx+142h], dx ;~ 28F0:2371
cs=0x28f0;eip=0x002376; 	T(MOV(ax, bx));	// 92480 mov     ax, bx ;~ 28F0:2376
cs=0x28f0;eip=0x002378; 	T(MOV(dx, es));	// 92481 mov     dx, es ;~ 28F0:2378
cs=0x28f0;eip=0x00237a; 	T(ADD(ax, 0x120));	// 92482 add     ax, 120h ;~ 28F0:237A
cs=0x28f0;eip=0x00237d; 	X(PUSH(dx));	// 92483 push    dx ;~ 28F0:237D
cs=0x28f0;eip=0x00237e; 	X(PUSH(ax));	// 92484 push    ax ;~ 28F0:237E
cs=0x28f0;eip=0x00237f; 	X(PUSH(*(dw*)(raddr(es,bx+0x12A))));	// 92485 push    word ptr es:[bx+12Ah] ;~ 28F0:237F
cs=0x28f0;eip=0x002384; 	X(PUSH(*(dw*)(raddr(es,bx+0x128))));	// 92486 push    word ptr es:[bx+128h] ;~ 28F0:2384
cs=0x28f0;eip=0x002389; 	X(PUSH(*(dw*)(raddr(es,bx+0x12E))));	// 92487 push    word ptr es:[bx+12Eh] ;~ 28F0:2389
cs=0x28f0;eip=0x00238e; 	X(PUSH(*(dw*)(raddr(es,bx+0x12C))));	// 92488 push    word ptr es:[bx+12Ch] ;~ 28F0:238E
cs=0x28f0;eip=0x002393; 	R(CALL(sub_3ba8c,0));	// 92489 call    sub_3BA8C ;~ 28F0:2393
cs=0x28f0;eip=0x002396; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92490 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2396
cs=0x28f0;eip=0x002399; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92491 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2399
cs=0x28f0;eip=0x00239c; 	T(ADD(ax, 0x140));	// 92492 add     ax, 140h ;~ 28F0:239C
cs=0x28f0;eip=0x00239f; 	X(PUSH(dx));	// 92493 push    dx ;~ 28F0:239F
cs=0x28f0;eip=0x0023a0; 	X(PUSH(ax));	// 92494 push    ax ;~ 28F0:23A0
cs=0x28f0;eip=0x0023a1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92495 les     bx, [bp+arg_0] ;~ 28F0:23A1
cs=0x28f0;eip=0x0023a4; 	X(PUSH(*(dw*)(raddr(es,bx+0x14A))));	// 92496 push    word ptr es:[bx+14Ah] ;~ 28F0:23A4
cs=0x28f0;eip=0x0023a9; 	X(PUSH(*(dw*)(raddr(es,bx+0x148))));	// 92497 push    word ptr es:[bx+148h] ;~ 28F0:23A9
cs=0x28f0;eip=0x0023ae; 	X(PUSH(*(dw*)(raddr(es,bx+0x14E))));	// 92498 push    word ptr es:[bx+14Eh] ;~ 28F0:23AE
cs=0x28f0;eip=0x0023b3; 	X(PUSH(*(dw*)(raddr(es,bx+0x14C))));	// 92499 push    word ptr es:[bx+14Ch] ;~ 28F0:23B3
cs=0x28f0;eip=0x0023b8; 	R(CALL(sub_3ba8c,0));	// 92500 call    sub_3BA8C ;~ 28F0:23B8
loc_3989b:
	// 10314 
cs=0x28f0;eip=0x0023bb; 	T(MOV(sp, bp));	// 92503 mov     sp, bp ;~ 28F0:23BB
cs=0x28f0;eip=0x0023bd; 	X(POP(bp));	// 92504 pop     bp ;~ 28F0:23BD
cs=0x28f0;eip=0x0023be; 	R(RETN(4));	// 92505 retn    4 ;~ 28F0:23BE
sub_399d0:
	// 92636 
#undef arg_0
#define arg_0 4
	// 92638 arg_0           = dword ptr  4 ;~ 28F0:24F0
cs=0x28f0;eip=0x0024f0; 	X(PUSH(bp));	// 92640 push    bp ;~ 28F0:24F0
cs=0x28f0;eip=0x0024f1; 	T(MOV(bp, sp));	// 92641 mov     bp, sp ;~ 28F0:24F1
cs=0x28f0;eip=0x0024f3; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 92642 cmp     word ptr unk_57116, 0 ;~ 28F0:24F3
cs=0x28f0;eip=0x0024f8; 	R(JNZ(loc_399dd));	// 92643 jnz     short loc_399DD ;~ 28F0:24F8
cs=0x28f0;eip=0x0024fa; 	R(JMP(loc_39a8d));	// 92644 jmp     loc_39A8D ;~ 28F0:24FA
loc_399dd:
	// 10321 
cs=0x28f0;eip=0x0024fd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92648 push    word ptr [bp+arg_0+2] ;~ 28F0:24FD
cs=0x28f0;eip=0x002500; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92649 push    word ptr [bp+arg_0] ;~ 28F0:2500
cs=0x28f0;eip=0x002503; 	X(PUSH(*(dw*)((&unk_57116))));	// 92650 push    word ptr unk_57116 ;~ 28F0:2503
cs=0x28f0;eip=0x002507; 	R(CALL(sub_3957b,0));	// 92651 call    sub_3957B ;~ 28F0:2507
cs=0x28f0;eip=0x00250a; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 92652 cmp     word ptr unk_57114, 0 ;~ 28F0:250A
cs=0x28f0;eip=0x00250f; 	R(JZ(loc_39a64));	// 92653 jz      short loc_39A64 ;~ 28F0:250F
cs=0x28f0;eip=0x002511; 	T(CMP(unk_57113, 0));	// 92654 cmp     byte ptr unk_57113, 0 ;~ 28F0:2511
cs=0x28f0;eip=0x002516; 	R(JZ(loc_39a20));	// 92655 jz      short loc_39A20 ;~ 28F0:2516
cs=0x28f0;eip=0x002518; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92656 les     bx, [bp+arg_0] ;~ 28F0:2518
cs=0x28f0;eip=0x00251b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 92657 mov     ax, es:[bx+13Ch] ;~ 28F0:251B
cs=0x28f0;eip=0x002520; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 92658 mov     dx, es:[bx+13Eh] ;~ 28F0:2520
cs=0x28f0;eip=0x002525; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92659 cmp     es:[bx+122h], dx ;~ 28F0:2525
cs=0x28f0;eip=0x00252a; 	R(JG(loc_39a1a));	// 92660 jg      short loc_39A1A ;~ 28F0:252A
cs=0x28f0;eip=0x00252c; 	R(JL(loc_39a15));	// 92661 jl      short loc_39A15 ;~ 28F0:252C
cs=0x28f0;eip=0x00252e; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92662 cmp     es:[bx+120h], ax ;~ 28F0:252E
cs=0x28f0;eip=0x002533; 	R(JA(loc_39a1a));	// 92663 ja      short loc_39A1A ;~ 28F0:2533
loc_39a15:
	// 10322 
cs=0x28f0;eip=0x002535; 	T(MOV(ax, 1));	// 92666 mov     ax, 1 ;~ 28F0:2535
cs=0x28f0;eip=0x002538; 	R(JMP(loc_39a1c));	// 92667 jmp     short loc_39A1C ;~ 28F0:2538
loc_39a1a:
	// 10323 
cs=0x28f0;eip=0x00253a; 	T(SUB(ax, ax));	// 92672 sub     ax, ax ;~ 28F0:253A
loc_39a1c:
	// 10324 
cs=0x28f0;eip=0x00253c; 	T(OR(ax, ax));	// 92675 or      ax, ax ;~ 28F0:253C
cs=0x28f0;eip=0x00253e; 	R(JNZ(loc_39a64));	// 92676 jnz     short loc_39A64 ;~ 28F0:253E
loc_39a20:
	// 10325 
cs=0x28f0;eip=0x002540; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92679 les     bx, [bp+arg_0] ;~ 28F0:2540
cs=0x28f0;eip=0x002543; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 92680 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:2543
cs=0x28f0;eip=0x002549; 	R(JGE(loc_39a30));	// 92681 jge     short loc_39A30 ;~ 28F0:2549
cs=0x28f0;eip=0x00254b; 	T(MOV(ax, 1));	// 92682 mov     ax, 1 ;~ 28F0:254B
cs=0x28f0;eip=0x00254e; 	R(JMP(loc_39a32));	// 92683 jmp     short loc_39A32 ;~ 28F0:254E
loc_39a30:
	// 10326 
cs=0x28f0;eip=0x002550; 	T(SUB(ax, ax));	// 92687 sub     ax, ax ;~ 28F0:2550
loc_39a32:
	// 10327 
cs=0x28f0;eip=0x002552; 	T(OR(ax, ax));	// 92690 or      ax, ax ;~ 28F0:2552
cs=0x28f0;eip=0x002554; 	R(JZ(loc_39a51));	// 92691 jz      short loc_39A51 ;~ 28F0:2554
cs=0x28f0;eip=0x002556; 	T(CMP(*(raddr(es,bx+0x254)), 0));	// 92692 cmp     byte ptr es:[bx+254h], 0 ;~ 28F0:2556
cs=0x28f0;eip=0x00255c; 	R(JNZ(loc_39a51));	// 92693 jnz     short loc_39A51 ;~ 28F0:255C
cs=0x28f0;eip=0x00255e; 	T(MOV(ax, bx));	// 92694 mov     ax, bx ;~ 28F0:255E
cs=0x28f0;eip=0x002560; 	T(MOV(dx, es));	// 92695 mov     dx, es ;~ 28F0:2560
cs=0x28f0;eip=0x002562; 	T(ADD(ax, 0x0A0));	// 92696 add     ax, 0A0h ; ' ' ;~ 28F0:2562
cs=0x28f0;eip=0x002565; 	X(PUSH(dx));	// 92697 push    dx ;~ 28F0:2565
cs=0x28f0;eip=0x002566; 	X(PUSH(ax));	// 92698 push    ax ;~ 28F0:2566
cs=0x28f0;eip=0x002567; 	X(PUSH(*(dw*)((&unk_57114))));	// 92699 push    word ptr unk_57114 ;~ 28F0:2567
loc_39a4b:
	// 10328 
cs=0x28f0;eip=0x00256b; 	R(CALL(sub_39729,0));	// 92702 call    sub_39729 ;~ 28F0:256B
cs=0x28f0;eip=0x00256e; 	R(JMP(loc_39afd));	// 92703 jmp     loc_39AFD ;~ 28F0:256E
loc_39a51:
	// 10329 
cs=0x28f0;eip=0x002571; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92708 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2571
cs=0x28f0;eip=0x002574; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92709 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2574
cs=0x28f0;eip=0x002577; 	T(ADD(ax, 0x0A0));	// 92710 add     ax, 0A0h ; ' ' ;~ 28F0:2577
cs=0x28f0;eip=0x00257a; 	X(PUSH(dx));	// 92711 push    dx ;~ 28F0:257A
cs=0x28f0;eip=0x00257b; 	X(PUSH(ax));	// 92712 push    ax ;~ 28F0:257B
cs=0x28f0;eip=0x00257c; 	T(MOV(ax, *(dw*)((&unk_57114))));	// 92713 mov     ax, word ptr unk_57114 ;~ 28F0:257C
cs=0x28f0;eip=0x00257f; 	T(NEG(ax));	// 92714 neg     ax ;~ 28F0:257F
cs=0x28f0;eip=0x002581; 	X(PUSH(ax));	// 92715 push    ax ;~ 28F0:2581
cs=0x28f0;eip=0x002582; 	R(JMP(loc_39a4b));	// 92716 jmp     short loc_39A4B ;~ 28F0:2582
loc_39a64:
	// 10330 
cs=0x28f0;eip=0x002584; 	T(CMP(unk_57113, 0));	// 92721 cmp     byte ptr unk_57113, 0 ;~ 28F0:2584
cs=0x28f0;eip=0x002589; 	R(JZ(loc_39ad8));	// 92722 jz      short loc_39AD8 ;~ 28F0:2589
cs=0x28f0;eip=0x00258b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92723 les     bx, [bp+arg_0] ;~ 28F0:258B
cs=0x28f0;eip=0x00258e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 92724 mov     ax, es:[bx+13Ch] ;~ 28F0:258E
cs=0x28f0;eip=0x002593; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 92725 mov     dx, es:[bx+13Eh] ;~ 28F0:2593
cs=0x28f0;eip=0x002598; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92726 cmp     es:[bx+122h], dx ;~ 28F0:2598
cs=0x28f0;eip=0x00259d; 	R(JG(loc_39ad2));	// 92727 jg      short loc_39AD2 ;~ 28F0:259D
cs=0x28f0;eip=0x00259f; 	R(JL(loc_39a88));	// 92728 jl      short loc_39A88 ;~ 28F0:259F
cs=0x28f0;eip=0x0025a1; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92729 cmp     es:[bx+120h], ax ;~ 28F0:25A1
cs=0x28f0;eip=0x0025a6; 	R(JA(loc_39ad2));	// 92730 ja      short loc_39AD2 ;~ 28F0:25A6
loc_39a88:
	// 10331 
cs=0x28f0;eip=0x0025a8; 	T(MOV(ax, 1));	// 92734 mov     ax, 1 ;~ 28F0:25A8
cs=0x28f0;eip=0x0025ab; 	R(JMP(loc_39ad4));	// 92735 jmp     short loc_39AD4 ;~ 28F0:25AB
loc_39a8d:
	// 10332 
cs=0x28f0;eip=0x0025ad; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92739 les     bx, [bp+arg_0] ;~ 28F0:25AD
cs=0x28f0;eip=0x0025b0; 	T(SUB(ax, ax));	// 92740 sub     ax, ax ;~ 28F0:25B0
cs=0x28f0;eip=0x0025b2; 	X(MOV(*(dw*)(raddr(es,bx+0x26)), ax));	// 92741 mov     es:[bx+26h], ax ;~ 28F0:25B2
cs=0x28f0;eip=0x0025b6; 	X(MOV(*(dw*)(raddr(es,bx+0x24)), ax));	// 92742 mov     es:[bx+24h], ax ;~ 28F0:25B6
cs=0x28f0;eip=0x0025ba; 	T(MOV(ax, bx));	// 92743 mov     ax, bx ;~ 28F0:25BA
cs=0x28f0;eip=0x0025bc; 	T(MOV(dx, es));	// 92744 mov     dx, es ;~ 28F0:25BC
cs=0x28f0;eip=0x0025be; 	T(ADD(ax, 0x20));	// 92745 add     ax, 20h ; ' ' ;~ 28F0:25BE
cs=0x28f0;eip=0x0025c1; 	X(PUSH(dx));	// 92746 push    dx ;~ 28F0:25C1
cs=0x28f0;eip=0x0025c2; 	X(PUSH(ax));	// 92747 push    ax ;~ 28F0:25C2
cs=0x28f0;eip=0x0025c3; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 92748 push    word ptr es:[bx+36h] ;~ 28F0:25C3
cs=0x28f0;eip=0x0025c7; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 92749 push    word ptr es:[bx+34h] ;~ 28F0:25C7
cs=0x28f0;eip=0x0025cb; 	R(CALL(sub_3b9eb,0));	// 92750 call    sub_3B9EB ;~ 28F0:25CB
cs=0x28f0;eip=0x0025ce; 	T(CMP(unk_57113, 0));	// 92751 cmp     byte ptr unk_57113, 0 ;~ 28F0:25CE
cs=0x28f0;eip=0x0025d3; 	R(JZ(loc_39ad8));	// 92752 jz      short loc_39AD8 ;~ 28F0:25D3
cs=0x28f0;eip=0x0025d5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92753 les     bx, [bp+arg_0] ;~ 28F0:25D5
cs=0x28f0;eip=0x0025d8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 92754 mov     ax, es:[bx+13Ch] ;~ 28F0:25D8
cs=0x28f0;eip=0x0025dd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 92755 mov     dx, es:[bx+13Eh] ;~ 28F0:25DD
cs=0x28f0;eip=0x0025e2; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 92756 cmp     es:[bx+122h], dx ;~ 28F0:25E2
cs=0x28f0;eip=0x0025e7; 	R(JG(loc_39ad2));	// 92757 jg      short loc_39AD2 ;~ 28F0:25E7
cs=0x28f0;eip=0x0025e9; 	R(JL(loc_39a88));	// 92758 jl      short loc_39A88 ;~ 28F0:25E9
cs=0x28f0;eip=0x0025eb; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 92759 cmp     es:[bx+120h], ax ;~ 28F0:25EB
cs=0x28f0;eip=0x0025f0; 	R(JBE(loc_39a88));	// 92760 jbe     short loc_39A88 ;~ 28F0:25F0
loc_39ad2:
	// 10333 
cs=0x28f0;eip=0x0025f2; 	T(SUB(ax, ax));	// 92764 sub     ax, ax ;~ 28F0:25F2
loc_39ad4:
	// 10334 
cs=0x28f0;eip=0x0025f4; 	T(OR(ax, ax));	// 92767 or      ax, ax ;~ 28F0:25F4
cs=0x28f0;eip=0x0025f6; 	R(JNZ(loc_39afd));	// 92768 jnz     short loc_39AFD ;~ 28F0:25F6
loc_39ad8:
	// 10335 
cs=0x28f0;eip=0x0025f8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92772 les     bx, [bp+arg_0] ;~ 28F0:25F8
cs=0x28f0;eip=0x0025fb; 	T(SUB(ax, ax));	// 92773 sub     ax, ax ;~ 28F0:25FB
cs=0x28f0;eip=0x0025fd; 	X(MOV(*(dw*)(raddr(es,bx+0x0A6)), ax));	// 92774 mov     es:[bx+0A6h], ax ;~ 28F0:25FD
cs=0x28f0;eip=0x002602; 	X(MOV(*(dw*)(raddr(es,bx+0x0A4)), ax));	// 92775 mov     es:[bx+0A4h], ax ;~ 28F0:2602
cs=0x28f0;eip=0x002607; 	T(MOV(ax, bx));	// 92776 mov     ax, bx ;~ 28F0:2607
cs=0x28f0;eip=0x002609; 	T(MOV(dx, es));	// 92777 mov     dx, es ;~ 28F0:2609
cs=0x28f0;eip=0x00260b; 	T(ADD(ax, 0x0A0));	// 92778 add     ax, 0A0h ; ' ' ;~ 28F0:260B
cs=0x28f0;eip=0x00260e; 	X(PUSH(dx));	// 92779 push    dx ;~ 28F0:260E
cs=0x28f0;eip=0x00260f; 	X(PUSH(ax));	// 92780 push    ax ;~ 28F0:260F
cs=0x28f0;eip=0x002610; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B6))));	// 92781 push    word ptr es:[bx+0B6h] ;~ 28F0:2610
cs=0x28f0;eip=0x002615; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B4))));	// 92782 push    word ptr es:[bx+0B4h] ;~ 28F0:2615
cs=0x28f0;eip=0x00261a; 	R(CALL(sub_3b9eb,0));	// 92783 call    sub_3B9EB ;~ 28F0:261A
loc_39afd:
	// 10336 
cs=0x28f0;eip=0x00261d; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 92787 cmp     word ptr unk_57114, 0 ;~ 28F0:261D
cs=0x28f0;eip=0x002622; 	R(JZ(loc_39b13));	// 92788 jz      short loc_39B13 ;~ 28F0:2622
cs=0x28f0;eip=0x002624; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92789 push    word ptr [bp+arg_0+2] ;~ 28F0:2624
cs=0x28f0;eip=0x002627; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92790 push    word ptr [bp+arg_0] ;~ 28F0:2627
cs=0x28f0;eip=0x00262a; 	X(PUSH(*(dw*)((&unk_57114))));	// 92791 push    word ptr unk_57114 ;~ 28F0:262A
cs=0x28f0;eip=0x00262e; 	R(CALL(sub_39478,0));	// 92792 call    sub_39478 ;~ 28F0:262E
cs=0x28f0;eip=0x002631; 	R(JMP(loc_39b2d));	// 92793 jmp     short loc_39B2D ;~ 28F0:2631
loc_39b13:
	// 10337 
cs=0x28f0;eip=0x002633; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92797 les     bx, [bp+arg_0] ;~ 28F0:2633
cs=0x28f0;eip=0x002636; 	T(SUB(ax, ax));	// 92798 sub     ax, ax ;~ 28F0:2636
cs=0x28f0;eip=0x002638; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 92799 mov     es:[bx+6], ax ;~ 28F0:2638
cs=0x28f0;eip=0x00263c; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 92800 mov     es:[bx+4], ax ;~ 28F0:263C
cs=0x28f0;eip=0x002640; 	X(PUSH(es));	// 92801 push    es ;~ 28F0:2640
cs=0x28f0;eip=0x002641; 	X(PUSH(bx));	// 92802 push    bx ;~ 28F0:2641
cs=0x28f0;eip=0x002642; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 92803 push    word ptr es:[bx+16h] ;~ 28F0:2642
cs=0x28f0;eip=0x002646; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 92804 push    word ptr es:[bx+14h] ;~ 28F0:2646
cs=0x28f0;eip=0x00264a; 	R(CALL(sub_3b9eb,0));	// 92805 call    sub_3B9EB ;~ 28F0:264A
loc_39b2d:
	// 10338 
cs=0x28f0;eip=0x00264d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92808 push    word ptr [bp+arg_0+2] ;~ 28F0:264D
cs=0x28f0;eip=0x002650; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92809 push    word ptr [bp+arg_0] ;~ 28F0:2650
cs=0x28f0;eip=0x002653; 	R(CALL(sub_3b300,0));	// 92810 call    sub_3B300 ;~ 28F0:2653
cs=0x28f0;eip=0x002656; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 92811 cmp     word ptr unk_57116, 0 ;~ 28F0:2656
cs=0x28f0;eip=0x00265b; 	R(JLE(loc_39b77));	// 92812 jle     short loc_39B77 ;~ 28F0:265B
cs=0x28f0;eip=0x00265d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92813 les     bx, [bp+arg_0] ;~ 28F0:265D
cs=0x28f0;eip=0x002660; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 92814 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:2660
cs=0x28f0;eip=0x002666; 	R(JL(loc_39b77));	// 92815 jl      short loc_39B77 ;~ 28F0:2666
cs=0x28f0;eip=0x002668; 	T(MOV(ax, 0x64));	// 92816 mov     ax, 64h ; 'd' ;~ 28F0:2668
cs=0x28f0;eip=0x00266b; 	T(CWD);	// 92817 cwd ;~ 28F0:266B
cs=0x28f0;eip=0x00266c; 	X(PUSH(dx));	// 92818 push    dx ;~ 28F0:266C
cs=0x28f0;eip=0x00266d; 	X(PUSH(ax));	// 92819 push    ax ;~ 28F0:266D
cs=0x28f0;eip=0x00266e; 	T(MOV(ax, *(dw*)((&unk_57116))));	// 92820 mov     ax, word ptr unk_57116 ;~ 28F0:266E
cs=0x28f0;eip=0x002671; 	T(CWD);	// 92821 cwd ;~ 28F0:2671
cs=0x28f0;eip=0x002672; 	X(PUSH(dx));	// 92822 push    dx ;~ 28F0:2672
cs=0x28f0;eip=0x002673; 	X(PUSH(ax));	// 92823 push    ax ;~ 28F0:2673
cs=0x28f0;eip=0x002674; 	X(PUSH(*(dw*)(raddr(es,bx+0x162))));	// 92824 push    word ptr es:[bx+162h] ;~ 28F0:2674
cs=0x28f0;eip=0x002679; 	X(PUSH(*(dw*)(raddr(es,bx+0x160))));	// 92825 push    word ptr es:[bx+160h] ;~ 28F0:2679
cs=0x28f0;eip=0x00267e; 	R(CALLF(sub_105c2,0));	// 92826 call    sub_105C2 ;~ 28F0:267E
cs=0x28f0;eip=0x002683; 	X(PUSH(dx));	// 92827 push    dx ;~ 28F0:2683
cs=0x28f0;eip=0x002684; 	X(PUSH(ax));	// 92828 push    ax ;~ 28F0:2684
cs=0x28f0;eip=0x002685; 	R(CALLF(sub_10526,0));	// 92829 call    sub_10526 ;~ 28F0:2685
cs=0x28f0;eip=0x00268a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92830 les     bx, [bp+arg_0] ;~ 28F0:268A
cs=0x28f0;eip=0x00268d; 	X(SUB(*(dw*)(raddr(es,bx+0x160)), ax));	// 92831 sub     es:[bx+160h], ax ;~ 28F0:268D
cs=0x28f0;eip=0x002692; 	X(SBB(*(dw*)(raddr(es,bx+0x162)), dx));	// 92832 sbb     es:[bx+162h], dx ;~ 28F0:2692
loc_39b77:
	// 10339 
cs=0x28f0;eip=0x002697; 	X(POP(bp));	// 92836 pop     bp ;~ 28F0:2697
cs=0x28f0;eip=0x002698; 	R(RETN(4));	// 92837 retn    4 ;~ 28F0:2698
sub_39b7b:
	// 92845 
#undef arg_0
#define arg_0 4
	// 92848 arg_0           = dword ptr  4 ;~ 28F0:269B
cs=0x28f0;eip=0x00269b; 	X(PUSH(bp));	// 92850 push    bp ;~ 28F0:269B
cs=0x28f0;eip=0x00269c; 	T(MOV(bp, sp));	// 92851 mov     bp, sp ;~ 28F0:269C
cs=0x28f0;eip=0x00269e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92852 les     bx, [bp+arg_0] ;~ 28F0:269E
cs=0x28f0;eip=0x0026a1; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 92853 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:26A1
cs=0x28f0;eip=0x0026a7; 	R(JZ(loc_39bd7));	// 92854 jz      short loc_39BD7 ;~ 28F0:26A7
cs=0x28f0;eip=0x0026a9; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 92855 cmp     word ptr unk_47AB2, 3 ;~ 28F0:26A9
cs=0x28f0;eip=0x0026ae; 	R(JZ(loc_39b97));	// 92856 jz      short loc_39B97 ;~ 28F0:26AE
cs=0x28f0;eip=0x0026b0; 	T(CMP(*(dw*)((&unk_47ab2)), 2));	// 92857 cmp     word ptr unk_47AB2, 2 ;~ 28F0:26B0
cs=0x28f0;eip=0x0026b5; 	R(JNZ(loc_39bd7));	// 92858 jnz     short loc_39BD7 ;~ 28F0:26B5
loc_39b97:
	// 10340 
cs=0x28f0;eip=0x0026b7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 92861 mov     ax, es:[bx+128h] ;~ 28F0:26B7
cs=0x28f0;eip=0x0026bc; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 92862 mov     dx, es:[bx+12Ah] ;~ 28F0:26BC
cs=0x28f0;eip=0x0026c1; 	X(MOV(*(dw*)((&unk_544ec)), ax));	// 92863 mov     word ptr unk_544EC, ax ;~ 28F0:26C1
cs=0x28f0;eip=0x0026c4; 	X(MOV(*(dw*)((&unk_544ee)), dx));	// 92864 mov     word ptr unk_544EE, dx ;~ 28F0:26C4
cs=0x28f0;eip=0x0026c8; 	T(MOV(ax, 4));	// 92865 mov     ax, 4 ;~ 28F0:26C8
cs=0x28f0;eip=0x0026cb; 	T(CWD);	// 92866 cwd ;~ 28F0:26CB
cs=0x28f0;eip=0x0026cc; 	X(PUSH(dx));	// 92867 push    dx ;~ 28F0:26CC
cs=0x28f0;eip=0x0026cd; 	X(PUSH(ax));	// 92868 push    ax ;~ 28F0:26CD
cs=0x28f0;eip=0x0026ce; 	T(MOV(ax, 3));	// 92869 mov     ax, 3 ;~ 28F0:26CE
cs=0x28f0;eip=0x0026d1; 	T(CWD);	// 92870 cwd ;~ 28F0:26D1
cs=0x28f0;eip=0x0026d2; 	X(PUSH(dx));	// 92871 push    dx ;~ 28F0:26D2
cs=0x28f0;eip=0x0026d3; 	X(PUSH(ax));	// 92872 push    ax ;~ 28F0:26D3
cs=0x28f0;eip=0x0026d4; 	X(PUSH(*(dw*)(raddr(es,bx+0x12A))));	// 92873 push    word ptr es:[bx+12Ah] ;~ 28F0:26D4
cs=0x28f0;eip=0x0026d9; 	X(PUSH(*(dw*)(raddr(es,bx+0x128))));	// 92874 push    word ptr es:[bx+128h] ;~ 28F0:26D9
cs=0x28f0;eip=0x0026de; 	R(CALLF(sub_105c2,0));	// 92875 call    sub_105C2 ;~ 28F0:26DE
cs=0x28f0;eip=0x0026e3; 	X(PUSH(dx));	// 92876 push    dx ;~ 28F0:26E3
cs=0x28f0;eip=0x0026e4; 	X(PUSH(ax));	// 92877 push    ax ;~ 28F0:26E4
cs=0x28f0;eip=0x0026e5; 	R(CALLF(sub_10526,0));	// 92878 call    sub_10526 ;~ 28F0:26E5
cs=0x28f0;eip=0x0026ea; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92879 les     bx, [bp+arg_0] ;~ 28F0:26EA
cs=0x28f0;eip=0x0026ed; 	X(MOV(*(dw*)(raddr(es,bx+0x128)), ax));	// 92880 mov     es:[bx+128h], ax ;~ 28F0:26ED
cs=0x28f0;eip=0x0026f2; 	X(MOV(*(dw*)(raddr(es,bx+0x12A)), dx));	// 92881 mov     es:[bx+12Ah], dx ;~ 28F0:26F2
loc_39bd7:
	// 10341 
cs=0x28f0;eip=0x0026f7; 	X(POP(bp));	// 92885 pop     bp ;~ 28F0:26F7
cs=0x28f0;eip=0x0026f8; 	R(RETN(4));	// 92886 retn    4 ;~ 28F0:26F8
sub_39bdb:
	// 92894 
#undef arg_0
#define arg_0 4
	// 92897 arg_0           = dword ptr  4 ;~ 28F0:26FB
cs=0x28f0;eip=0x0026fb; 	X(PUSH(bp));	// 92899 push    bp ;~ 28F0:26FB
cs=0x28f0;eip=0x0026fc; 	T(MOV(bp, sp));	// 92900 mov     bp, sp ;~ 28F0:26FC
cs=0x28f0;eip=0x0026fe; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92901 les     bx, [bp+arg_0] ;~ 28F0:26FE
cs=0x28f0;eip=0x002701; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 92902 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:2701
cs=0x28f0;eip=0x002707; 	R(JZ(loc_39c08));	// 92903 jz      short loc_39C08 ;~ 28F0:2707
cs=0x28f0;eip=0x002709; 	T(CMP(*(dw*)((&unk_47ab2)), 3));	// 92904 cmp     word ptr unk_47AB2, 3 ;~ 28F0:2709
cs=0x28f0;eip=0x00270e; 	R(JZ(loc_39bf7));	// 92905 jz      short loc_39BF7 ;~ 28F0:270E
cs=0x28f0;eip=0x002710; 	T(CMP(*(dw*)((&unk_47ab2)), 2));	// 92906 cmp     word ptr unk_47AB2, 2 ;~ 28F0:2710
cs=0x28f0;eip=0x002715; 	R(JNZ(loc_39c08));	// 92907 jnz     short loc_39C08 ;~ 28F0:2715
loc_39bf7:
	// 10342 
cs=0x28f0;eip=0x002717; 	T(MOV(ax, *(dw*)((&unk_544ec))));	// 92910 mov     ax, word ptr unk_544EC ;~ 28F0:2717
cs=0x28f0;eip=0x00271a; 	T(MOV(dx, *(dw*)((&unk_544ee))));	// 92911 mov     dx, word ptr unk_544EE ;~ 28F0:271A
cs=0x28f0;eip=0x00271e; 	X(MOV(*(dw*)(raddr(es,bx+0x128)), ax));	// 92912 mov     es:[bx+128h], ax ;~ 28F0:271E
cs=0x28f0;eip=0x002723; 	X(MOV(*(dw*)(raddr(es,bx+0x12A)), dx));	// 92913 mov     es:[bx+12Ah], dx ;~ 28F0:2723
loc_39c08:
	// 10343 
cs=0x28f0;eip=0x002728; 	X(POP(bp));	// 92917 pop     bp ;~ 28F0:2728
cs=0x28f0;eip=0x002729; 	R(RETN(4));	// 92918 retn    4 ;~ 28F0:2729
sub_39c0c:
	// 92926 
#undef var_8
#define var_8 -8
	// 92929 var_8           = dword ptr -8 ;~ 28F0:272C
#undef var_4
#define var_4 -4
	// 92930 var_4           = dword ptr -4 ;~ 28F0:272C
#undef arg_0
#define arg_0 4
	// 92931 arg_0           = dword ptr  4 ;~ 28F0:272C
cs=0x28f0;eip=0x00272c; 	X(PUSH(bp));	// 92933 push    bp ;~ 28F0:272C
cs=0x28f0;eip=0x00272d; 	T(MOV(bp, sp));	// 92934 mov     bp, sp ;~ 28F0:272D
cs=0x28f0;eip=0x00272f; 	T(SUB(sp, 8));	// 92935 sub     sp, 8 ;~ 28F0:272F
cs=0x28f0;eip=0x002732; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92936 push    word ptr [bp+arg_0+2] ;~ 28F0:2732
cs=0x28f0;eip=0x002735; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92937 push    word ptr [bp+arg_0] ;~ 28F0:2735
cs=0x28f0;eip=0x002738; 	R(CALL(sub_39b7b,0));	// 92938 call    sub_39B7B ;~ 28F0:2738
cs=0x28f0;eip=0x00273b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92939 les     bx, [bp+arg_0] ;~ 28F0:273B
cs=0x28f0;eip=0x00273e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 92940 mov     ax, es:[bx+2FAh] ;~ 28F0:273E
cs=0x28f0;eip=0x002743; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 92941 mov     dx, es:[bx+2FCh] ;~ 28F0:2743
cs=0x28f0;eip=0x002748; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 92942 add     ax, es:[bx+302h] ;~ 28F0:2748
cs=0x28f0;eip=0x00274d; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 92943 adc     dx, es:[bx+304h] ;~ 28F0:274D
cs=0x28f0;eip=0x002752; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 92944 les     bx, es:[bx+31Ch] ;~ 28F0:2752
cs=0x28f0;eip=0x002757; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 92945 cmp     dx, es:[bx+0Ch] ;~ 28F0:2757
cs=0x28f0;eip=0x00275b; 	R(JLE(loc_39c40));	// 92946 jle     short loc_39C40 ;~ 28F0:275B
cs=0x28f0;eip=0x00275d; 	R(JMP(loc_3a117));	// 92947 jmp     loc_3A117 ;~ 28F0:275D
loc_39c40:
	// 10344 
cs=0x28f0;eip=0x002760; 	R(JL(loc_39c4b));	// 92951 jl      short loc_39C4B ;~ 28F0:2760
cs=0x28f0;eip=0x002762; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 92952 cmp     ax, es:[bx+0Ah] ;~ 28F0:2762
cs=0x28f0;eip=0x002766; 	R(JC(loc_39c4b));	// 92953 jb      short loc_39C4B ;~ 28F0:2766
cs=0x28f0;eip=0x002768; 	R(JMP(loc_3a117));	// 92954 jmp     loc_3A117 ;~ 28F0:2768
loc_39c4b:
	// 10345 
cs=0x28f0;eip=0x00276b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92959 les     bx, [bp+arg_0] ;~ 28F0:276B
cs=0x28f0;eip=0x00276e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 92960 mov     ax, es:[bx+32Ch] ;~ 28F0:276E
cs=0x28f0;eip=0x002773; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 92961 or      ax, es:[bx+32Eh] ;~ 28F0:2773
cs=0x28f0;eip=0x002778; 	R(JNZ(loc_39c5d));	// 92962 jnz     short loc_39C5D ;~ 28F0:2778
cs=0x28f0;eip=0x00277a; 	R(JMP(loc_39d11));	// 92963 jmp     loc_39D11 ;~ 28F0:277A
loc_39c5d:
	// 10346 
cs=0x28f0;eip=0x00277d; 	T(MOV(ax, 0x249));	// 92967 mov     ax, 249h ;~ 28F0:277D
cs=0x28f0;eip=0x002780; 	T(MOV(dx, seg_offset(seg041)));	// 92968 mov     dx, seg seg041 ;~ 28F0:2780
cs=0x28f0;eip=0x002783; 	X(PUSH(dx));	// 92969 push    dx ;~ 28F0:2783
cs=0x28f0;eip=0x002784; 	X(PUSH(ax));	// 92970 push    ax ;~ 28F0:2784
cs=0x28f0;eip=0x002785; 	R(CALLF(sub_1c5f1,0));	// 92971 call    sub_1C5F1 ;~ 28F0:2785
cs=0x28f0;eip=0x00278a; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 92972 mov     ax, word ptr unk_57111 ;~ 28F0:278A
cs=0x28f0;eip=0x00278d; 	T(CWD);	// 92973 cwd ;~ 28F0:278D
cs=0x28f0;eip=0x00278e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 92974 les     bx, [bp+arg_0] ;~ 28F0:278E
cs=0x28f0;eip=0x002791; 	X(SUB(*(dw*)(raddr(es,bx+0x32C)), ax));	// 92975 sub     es:[bx+32Ch], ax ;~ 28F0:2791
cs=0x28f0;eip=0x002796; 	X(SBB(*(dw*)(raddr(es,bx+0x32E)), dx));	// 92976 sbb     es:[bx+32Eh], dx ;~ 28F0:2796
cs=0x28f0;eip=0x00279b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 92977 mov     ax, es:[bx+32Ch] ;~ 28F0:279B
cs=0x28f0;eip=0x0027a0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x32E))));	// 92978 mov     dx, es:[bx+32Eh] ;~ 28F0:27A0
cs=0x28f0;eip=0x0027a5; 	T(OR(dx, dx));	// 92979 or      dx, dx ;~ 28F0:27A5
cs=0x28f0;eip=0x0027a7; 	R(JG(loc_39c8f));	// 92980 jg      short loc_39C8F ;~ 28F0:27A7
cs=0x28f0;eip=0x0027a9; 	R(JGE(loc_39c8f));	// 92981 jge     short loc_39C8F ;~ 28F0:27A9
cs=0x28f0;eip=0x0027ab; 	T(SUB(dx, dx));	// 92982 sub     dx, dx ;~ 28F0:27AB
cs=0x28f0;eip=0x0027ad; 	T(SUB(ax, ax));	// 92983 sub     ax, ax ;~ 28F0:27AD
loc_39c8f:
	// 10347 
cs=0x28f0;eip=0x0027af; 	X(MOV(*(dw*)(raddr(es,bx+0x32C)), ax));	// 92987 mov     es:[bx+32Ch], ax ;~ 28F0:27AF
cs=0x28f0;eip=0x0027b4; 	X(MOV(*(dw*)(raddr(es,bx+0x32E)), dx));	// 92988 mov     es:[bx+32Eh], dx ;~ 28F0:27B4
cs=0x28f0;eip=0x0027b9; 	T(OR(ax, dx));	// 92989 or      ax, dx ;~ 28F0:27B9
cs=0x28f0;eip=0x0027bb; 	R(JNZ(loc_39cd0));	// 92990 jnz     short loc_39CD0 ;~ 28F0:27BB
cs=0x28f0;eip=0x0027bd; 	X(PUSH(es));	// 92991 push    es ;~ 28F0:27BD
cs=0x28f0;eip=0x0027be; 	X(PUSH(bx));	// 92992 push    bx ;~ 28F0:27BE
cs=0x28f0;eip=0x0027bf; 	R(CALL(sub_39bdb,0));	// 92993 call    sub_39BDB ;~ 28F0:27BF
cs=0x28f0;eip=0x0027c2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 92994 push    word ptr [bp+arg_0+2] ;~ 28F0:27C2
cs=0x28f0;eip=0x0027c5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 92995 push    word ptr [bp+arg_0] ;~ 28F0:27C5
cs=0x28f0;eip=0x0027c8; 	R(CALL(sub_38ca4,0));	// 92996 call    sub_38CA4 ;~ 28F0:27C8
cs=0x28f0;eip=0x0027cb; 	T(OR(ax, ax));	// 92997 or      ax, ax ;~ 28F0:27CB
cs=0x28f0;eip=0x0027cd; 	R(JZ(loc_39cb7));	// 92998 jz      short loc_39CB7 ;~ 28F0:27CD
cs=0x28f0;eip=0x0027cf; 	T(MOV(ax, 0x269));	// 92999 mov     ax, 269h ;~ 28F0:27CF
cs=0x28f0;eip=0x0027d2; 	T(MOV(dx, seg_offset(seg041)));	// 93000 mov     dx, seg seg041 ;~ 28F0:27D2
cs=0x28f0;eip=0x0027d5; 	R(JMP(loc_39cbd));	// 93001 jmp     short loc_39CBD ;~ 28F0:27D5
loc_39cb7:
	// 10348 
cs=0x28f0;eip=0x0027d7; 	T(MOV(ax, 0x288));	// 93005 mov     ax, 288h ;~ 28F0:27D7
cs=0x28f0;eip=0x0027da; 	T(MOV(dx, seg_offset(seg041)));	// 93006 mov     dx, seg seg041 ;~ 28F0:27DA
loc_39cbd:
	// 10349 
cs=0x28f0;eip=0x0027dd; 	X(PUSH(dx));	// 93009 push    dx ;~ 28F0:27DD
cs=0x28f0;eip=0x0027de; 	X(PUSH(ax));	// 93010 push    ax ;~ 28F0:27DE
cs=0x28f0;eip=0x0027df; 	R(CALLF(sub_1c5f1,0));	// 93011 call    sub_1C5F1 ;~ 28F0:27DF
cs=0x28f0;eip=0x0027e4; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93012 push    word ptr [bp+arg_0+2] ;~ 28F0:27E4
cs=0x28f0;eip=0x0027e7; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93013 push    word ptr [bp+arg_0] ;~ 28F0:27E7
cs=0x28f0;eip=0x0027ea; 	R(CALL(sub_39b7b,0));	// 93014 call    sub_39B7B ;~ 28F0:27EA
cs=0x28f0;eip=0x0027ed; 	R(JMP(loc_3a15c));	// 93015 jmp     loc_3A15C ;~ 28F0:27ED
loc_39cd0:
	// 10350 
cs=0x28f0;eip=0x0027f0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93019 les     bx, [bp+arg_0] ;~ 28F0:27F0
cs=0x28f0;eip=0x0027f3; 	T(SUB(ax, ax));	// 93020 sub     ax, ax ;~ 28F0:27F3
cs=0x28f0;eip=0x0027f5; 	T(CWD);	// 93021 cwd ;~ 28F0:27F5
cs=0x28f0;eip=0x0027f6; 	X(MOV(*(dw*)(raddr(es,bx+0x24)), ax));	// 93022 mov     es:[bx+24h], ax ;~ 28F0:27F6
cs=0x28f0;eip=0x0027fa; 	X(MOV(*(dw*)(raddr(es,bx+0x26)), dx));	// 93023 mov     es:[bx+26h], dx ;~ 28F0:27FA
cs=0x28f0;eip=0x0027fe; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 93024 mov     es:[bx+4], ax ;~ 28F0:27FE
cs=0x28f0;eip=0x002802; 	X(MOV(*(dw*)(raddr(es,bx+6)), dx));	// 93025 mov     es:[bx+6], dx ;~ 28F0:2802
cs=0x28f0;eip=0x002806; 	T(MOV(ax, bx));	// 93026 mov     ax, bx ;~ 28F0:2806
cs=0x28f0;eip=0x002808; 	T(MOV(dx, es));	// 93027 mov     dx, es ;~ 28F0:2808
cs=0x28f0;eip=0x00280a; 	T(ADD(ax, 0x20));	// 93028 add     ax, 20h ; ' ' ;~ 28F0:280A
cs=0x28f0;eip=0x00280d; 	X(PUSH(dx));	// 93029 push    dx ;~ 28F0:280D
cs=0x28f0;eip=0x00280e; 	X(PUSH(ax));	// 93030 push    ax ;~ 28F0:280E
cs=0x28f0;eip=0x00280f; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 93031 push    word ptr es:[bx+36h] ;~ 28F0:280F
cs=0x28f0;eip=0x002813; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 93032 push    word ptr es:[bx+34h] ;~ 28F0:2813
cs=0x28f0;eip=0x002817; 	R(CALL(sub_3b9eb,0));	// 93033 call    sub_3B9EB ;~ 28F0:2817
cs=0x28f0;eip=0x00281a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93034 push    word ptr [bp+arg_0+2] ;~ 28F0:281A
cs=0x28f0;eip=0x00281d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93035 push    word ptr [bp+arg_0] ;~ 28F0:281D
cs=0x28f0;eip=0x002820; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93036 les     bx, [bp+arg_0] ;~ 28F0:2820
loc_39d03:
	// 10351 
cs=0x28f0;eip=0x002823; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 93039 push    word ptr es:[bx+16h] ;~ 28F0:2823
cs=0x28f0;eip=0x002827; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 93040 push    word ptr es:[bx+14h] ;~ 28F0:2827
cs=0x28f0;eip=0x00282b; 	R(CALL(sub_3b9eb,0));	// 93041 call    sub_3B9EB ;~ 28F0:282B
cs=0x28f0;eip=0x00282e; 	R(JMP(loc_3a15c));	// 93042 jmp     loc_3A15C ;~ 28F0:282E
loc_39d11:
	// 10352 
cs=0x28f0;eip=0x002831; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93046 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2831
cs=0x28f0;eip=0x002834; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93047 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2834
cs=0x28f0;eip=0x002837; 	T(ADD(ax, 0x120));	// 93048 add     ax, 120h ;~ 28F0:2837
cs=0x28f0;eip=0x00283a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 93049 mov     word ptr [bp+var_4], ax ;~ 28F0:283A
cs=0x28f0;eip=0x00283d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 93050 mov     word ptr [bp+var_4+2], dx ;~ 28F0:283D
cs=0x28f0;eip=0x002840; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93051 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2840
cs=0x28f0;eip=0x002843; 	T(ADD(ax, 0x20));	// 93052 add     ax, 20h ; ' ' ;~ 28F0:2843
cs=0x28f0;eip=0x002846; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 93053 mov     word ptr [bp+var_8], ax ;~ 28F0:2846
cs=0x28f0;eip=0x002849; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 93054 mov     word ptr [bp+var_8+2], dx ;~ 28F0:2849
cs=0x28f0;eip=0x00284c; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 93055 cmp     word ptr unk_57116, 0 ;~ 28F0:284C
cs=0x28f0;eip=0x002851; 	R(JNZ(loc_39d36));	// 93056 jnz     short loc_39D36 ;~ 28F0:2851
cs=0x28f0;eip=0x002853; 	R(JMP(loc_39e52));	// 93057 jmp     loc_39E52 ;~ 28F0:2853
loc_39d36:
	// 10353 
cs=0x28f0;eip=0x002856; 	X(PUSH(dx));	// 93061 push    dx ;~ 28F0:2856
cs=0x28f0;eip=0x002857; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93062 push    word ptr [bp+arg_0] ;~ 28F0:2857
cs=0x28f0;eip=0x00285a; 	X(PUSH(*(dw*)((&unk_57116))));	// 93063 push    word ptr unk_57116 ;~ 28F0:285A
cs=0x28f0;eip=0x00285e; 	R(CALL(sub_3957b,0));	// 93064 call    sub_3957B ;~ 28F0:285E
cs=0x28f0;eip=0x002861; 	T(CMP(unk_57113, 0));	// 93065 cmp     byte ptr unk_57113, 0 ;~ 28F0:2861
cs=0x28f0;eip=0x002866; 	R(JZ(loc_39d98));	// 93066 jz      short loc_39D98 ;~ 28F0:2866
cs=0x28f0;eip=0x002868; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93067 les     bx, [bp+arg_0] ;~ 28F0:2868
cs=0x28f0;eip=0x00286b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 93068 mov     ax, es:[bx+138h] ;~ 28F0:286B
cs=0x28f0;eip=0x002870; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 93069 mov     dx, es:[bx+13Ah] ;~ 28F0:2870
cs=0x28f0;eip=0x002875; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93070 cmp     es:[bx+122h], dx ;~ 28F0:2875
cs=0x28f0;eip=0x00287a; 	R(JL(loc_39d6a));	// 93071 jl      short loc_39D6A ;~ 28F0:287A
cs=0x28f0;eip=0x00287c; 	R(JG(loc_39d65));	// 93072 jg      short loc_39D65 ;~ 28F0:287C
cs=0x28f0;eip=0x00287e; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93073 cmp     es:[bx+120h], ax ;~ 28F0:287E
cs=0x28f0;eip=0x002883; 	R(JC(loc_39d6a));	// 93074 jb      short loc_39D6A ;~ 28F0:2883
loc_39d65:
	// 10354 
cs=0x28f0;eip=0x002885; 	T(MOV(ax, 1));	// 93077 mov     ax, 1 ;~ 28F0:2885
cs=0x28f0;eip=0x002888; 	R(JMP(loc_39d6c));	// 93078 jmp     short loc_39D6C ;~ 28F0:2888
loc_39d6a:
	// 10355 
cs=0x28f0;eip=0x00288a; 	T(SUB(ax, ax));	// 93083 sub     ax, ax ;~ 28F0:288A
loc_39d6c:
	// 10356 
cs=0x28f0;eip=0x00288c; 	T(OR(ax, ax));	// 93086 or      ax, ax ;~ 28F0:288C
cs=0x28f0;eip=0x00288e; 	R(JNZ(loc_39da5));	// 93087 jnz     short loc_39DA5 ;~ 28F0:288E
cs=0x28f0;eip=0x002890; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93088 les     bx, [bp+arg_0] ;~ 28F0:2890
cs=0x28f0;eip=0x002893; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93089 mov     ax, es:[bx+13Ch] ;~ 28F0:2893
cs=0x28f0;eip=0x002898; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93090 mov     dx, es:[bx+13Eh] ;~ 28F0:2898
cs=0x28f0;eip=0x00289d; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93091 cmp     es:[bx+122h], dx ;~ 28F0:289D
cs=0x28f0;eip=0x0028a2; 	R(JG(loc_39d92));	// 93092 jg      short loc_39D92 ;~ 28F0:28A2
cs=0x28f0;eip=0x0028a4; 	R(JL(loc_39d8d));	// 93093 jl      short loc_39D8D ;~ 28F0:28A4
cs=0x28f0;eip=0x0028a6; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93094 cmp     es:[bx+120h], ax ;~ 28F0:28A6
cs=0x28f0;eip=0x0028ab; 	R(JA(loc_39d92));	// 93095 ja      short loc_39D92 ;~ 28F0:28AB
loc_39d8d:
	// 10357 
cs=0x28f0;eip=0x0028ad; 	T(MOV(ax, 1));	// 93098 mov     ax, 1 ;~ 28F0:28AD
cs=0x28f0;eip=0x0028b0; 	R(JMP(loc_39d94));	// 93099 jmp     short loc_39D94 ;~ 28F0:28B0
loc_39d92:
	// 10358 
cs=0x28f0;eip=0x0028b2; 	T(SUB(ax, ax));	// 93104 sub     ax, ax ;~ 28F0:28B2
loc_39d94:
	// 10359 
cs=0x28f0;eip=0x0028b4; 	T(OR(ax, ax));	// 93107 or      ax, ax ;~ 28F0:28B4
cs=0x28f0;eip=0x0028b6; 	R(JNZ(loc_39da5));	// 93108 jnz     short loc_39DA5 ;~ 28F0:28B6
loc_39d98:
	// 10360 
cs=0x28f0;eip=0x0028b8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 93111 push    word ptr [bp+var_4+2] ;~ 28F0:28B8
cs=0x28f0;eip=0x0028bb; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 93112 push    word ptr [bp+var_4] ;~ 28F0:28BB
cs=0x28f0;eip=0x0028be; 	X(PUSH(*(dw*)((&unk_57116))));	// 93113 push    word ptr unk_57116 ;~ 28F0:28BE
cs=0x28f0;eip=0x0028c2; 	R(CALL(sub_38eff,0));	// 93114 call    sub_38EFF ;~ 28F0:28C2
loc_39da5:
	// 10361 
cs=0x28f0;eip=0x0028c5; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 93118 cmp     word ptr unk_57114, 0 ;~ 28F0:28C5
cs=0x28f0;eip=0x0028ca; 	R(JZ(loc_39e1f));	// 93119 jz      short loc_39E1F ;~ 28F0:28CA
cs=0x28f0;eip=0x0028cc; 	T(CMP(unk_57113, 0));	// 93120 cmp     byte ptr unk_57113, 0 ;~ 28F0:28CC
cs=0x28f0;eip=0x0028d1; 	R(JZ(loc_39ddb));	// 93121 jz      short loc_39DDB ;~ 28F0:28D1
cs=0x28f0;eip=0x0028d3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93122 les     bx, [bp+arg_0] ;~ 28F0:28D3
cs=0x28f0;eip=0x0028d6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93123 mov     ax, es:[bx+13Ch] ;~ 28F0:28D6
cs=0x28f0;eip=0x0028db; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93124 mov     dx, es:[bx+13Eh] ;~ 28F0:28DB
cs=0x28f0;eip=0x0028e0; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93125 cmp     es:[bx+122h], dx ;~ 28F0:28E0
cs=0x28f0;eip=0x0028e5; 	R(JG(loc_39dd5));	// 93126 jg      short loc_39DD5 ;~ 28F0:28E5
cs=0x28f0;eip=0x0028e7; 	R(JL(loc_39dd0));	// 93127 jl      short loc_39DD0 ;~ 28F0:28E7
cs=0x28f0;eip=0x0028e9; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93128 cmp     es:[bx+120h], ax ;~ 28F0:28E9
cs=0x28f0;eip=0x0028ee; 	R(JA(loc_39dd5));	// 93129 ja      short loc_39DD5 ;~ 28F0:28EE
loc_39dd0:
	// 10362 
cs=0x28f0;eip=0x0028f0; 	T(MOV(ax, 1));	// 93132 mov     ax, 1 ;~ 28F0:28F0
cs=0x28f0;eip=0x0028f3; 	R(JMP(loc_39dd7));	// 93133 jmp     short loc_39DD7 ;~ 28F0:28F3
loc_39dd5:
	// 10363 
cs=0x28f0;eip=0x0028f5; 	T(SUB(ax, ax));	// 93138 sub     ax, ax ;~ 28F0:28F5
loc_39dd7:
	// 10364 
cs=0x28f0;eip=0x0028f7; 	T(OR(ax, ax));	// 93141 or      ax, ax ;~ 28F0:28F7
cs=0x28f0;eip=0x0028f9; 	R(JNZ(loc_39e1f));	// 93142 jnz     short loc_39E1F ;~ 28F0:28F9
loc_39ddb:
	// 10365 
cs=0x28f0;eip=0x0028fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93145 les     bx, [bp+arg_0] ;~ 28F0:28FB
cs=0x28f0;eip=0x0028fe; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 93146 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:28FE
cs=0x28f0;eip=0x002904; 	R(JGE(loc_39deb));	// 93147 jge     short loc_39DEB ;~ 28F0:2904
cs=0x28f0;eip=0x002906; 	T(MOV(ax, 1));	// 93148 mov     ax, 1 ;~ 28F0:2906
cs=0x28f0;eip=0x002909; 	R(JMP(loc_39ded));	// 93149 jmp     short loc_39DED ;~ 28F0:2909
loc_39deb:
	// 10366 
cs=0x28f0;eip=0x00290b; 	T(SUB(ax, ax));	// 93153 sub     ax, ax ;~ 28F0:290B
loc_39ded:
	// 10367 
cs=0x28f0;eip=0x00290d; 	T(OR(ax, ax));	// 93156 or      ax, ax ;~ 28F0:290D
cs=0x28f0;eip=0x00290f; 	R(JZ(loc_39e0c));	// 93157 jz      short loc_39E0C ;~ 28F0:290F
cs=0x28f0;eip=0x002911; 	T(CMP(*(raddr(es,bx+0x254)), 0));	// 93158 cmp     byte ptr es:[bx+254h], 0 ;~ 28F0:2911
cs=0x28f0;eip=0x002917; 	R(JNZ(loc_39e0c));	// 93159 jnz     short loc_39E0C ;~ 28F0:2917
cs=0x28f0;eip=0x002919; 	T(MOV(ax, bx));	// 93160 mov     ax, bx ;~ 28F0:2919
cs=0x28f0;eip=0x00291b; 	T(MOV(dx, es));	// 93161 mov     dx, es ;~ 28F0:291B
cs=0x28f0;eip=0x00291d; 	T(ADD(ax, 0x0A0));	// 93162 add     ax, 0A0h ; ' ' ;~ 28F0:291D
cs=0x28f0;eip=0x002920; 	X(PUSH(dx));	// 93163 push    dx ;~ 28F0:2920
cs=0x28f0;eip=0x002921; 	X(PUSH(ax));	// 93164 push    ax ;~ 28F0:2921
cs=0x28f0;eip=0x002922; 	X(PUSH(*(dw*)((&unk_57114))));	// 93165 push    word ptr unk_57114 ;~ 28F0:2922
loc_39e06:
	// 10368 
cs=0x28f0;eip=0x002926; 	R(CALL(sub_39729,0));	// 93168 call    sub_39729 ;~ 28F0:2926
cs=0x28f0;eip=0x002929; 	R(JMP(loc_39f0a));	// 93169 jmp     loc_39F0A ;~ 28F0:2929
loc_39e0c:
	// 10369 
cs=0x28f0;eip=0x00292c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93174 mov     ax, word ptr [bp+arg_0] ;~ 28F0:292C
cs=0x28f0;eip=0x00292f; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93175 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:292F
cs=0x28f0;eip=0x002932; 	T(ADD(ax, 0x0A0));	// 93176 add     ax, 0A0h ; ' ' ;~ 28F0:2932
cs=0x28f0;eip=0x002935; 	X(PUSH(dx));	// 93177 push    dx ;~ 28F0:2935
cs=0x28f0;eip=0x002936; 	X(PUSH(ax));	// 93178 push    ax ;~ 28F0:2936
cs=0x28f0;eip=0x002937; 	T(MOV(ax, *(dw*)((&unk_57114))));	// 93179 mov     ax, word ptr unk_57114 ;~ 28F0:2937
cs=0x28f0;eip=0x00293a; 	T(NEG(ax));	// 93180 neg     ax ;~ 28F0:293A
cs=0x28f0;eip=0x00293c; 	X(PUSH(ax));	// 93181 push    ax ;~ 28F0:293C
cs=0x28f0;eip=0x00293d; 	R(JMP(loc_39e06));	// 93182 jmp     short loc_39E06 ;~ 28F0:293D
loc_39e1f:
	// 10370 
cs=0x28f0;eip=0x00293f; 	T(CMP(unk_57113, 0));	// 93187 cmp     byte ptr unk_57113, 0 ;~ 28F0:293F
cs=0x28f0;eip=0x002944; 	R(JNZ(loc_39e29));	// 93188 jnz     short loc_39E29 ;~ 28F0:2944
cs=0x28f0;eip=0x002946; 	R(JMP(loc_39ee5));	// 93189 jmp     loc_39EE5 ;~ 28F0:2946
loc_39e29:
	// 10371 
cs=0x28f0;eip=0x002949; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93193 les     bx, [bp+arg_0] ;~ 28F0:2949
cs=0x28f0;eip=0x00294c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93194 mov     ax, es:[bx+13Ch] ;~ 28F0:294C
cs=0x28f0;eip=0x002951; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93195 mov     dx, es:[bx+13Eh] ;~ 28F0:2951
cs=0x28f0;eip=0x002956; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93196 cmp     es:[bx+122h], dx ;~ 28F0:2956
cs=0x28f0;eip=0x00295b; 	R(JLE(loc_39e40));	// 93197 jle     short loc_39E40 ;~ 28F0:295B
cs=0x28f0;eip=0x00295d; 	R(JMP(loc_39edf));	// 93198 jmp     loc_39EDF ;~ 28F0:295D
loc_39e40:
	// 10372 
cs=0x28f0;eip=0x002960; 	R(JL(loc_39e4c));	// 93202 jl      short loc_39E4C ;~ 28F0:2960
cs=0x28f0;eip=0x002962; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93203 cmp     es:[bx+120h], ax ;~ 28F0:2962
cs=0x28f0;eip=0x002967; 	R(JBE(loc_39e4c));	// 93204 jbe     short loc_39E4C ;~ 28F0:2967
cs=0x28f0;eip=0x002969; 	R(JMP(loc_39edf));	// 93205 jmp     loc_39EDF ;~ 28F0:2969
loc_39e4c:
	// 10373 
cs=0x28f0;eip=0x00296c; 	T(MOV(ax, 1));	// 93210 mov     ax, 1 ;~ 28F0:296C
cs=0x28f0;eip=0x00296f; 	R(JMP(loc_39ee1));	// 93211 jmp     loc_39EE1 ;~ 28F0:296F
loc_39e52:
	// 10374 
cs=0x28f0;eip=0x002972; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 93215 les     bx, [bp+var_8] ;~ 28F0:2972
cs=0x28f0;eip=0x002975; 	T(SUB(ax, ax));	// 93216 sub     ax, ax ;~ 28F0:2975
cs=0x28f0;eip=0x002977; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 93217 mov     es:[bx+6], ax ;~ 28F0:2977
cs=0x28f0;eip=0x00297b; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 93218 mov     es:[bx+4], ax ;~ 28F0:297B
cs=0x28f0;eip=0x00297f; 	X(PUSH(es));	// 93219 push    es ;~ 28F0:297F
cs=0x28f0;eip=0x002980; 	X(PUSH(bx));	// 93220 push    bx ;~ 28F0:2980
cs=0x28f0;eip=0x002981; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 93221 push    word ptr es:[bx+16h] ;~ 28F0:2981
cs=0x28f0;eip=0x002985; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 93222 push    word ptr es:[bx+14h] ;~ 28F0:2985
cs=0x28f0;eip=0x002989; 	R(CALL(sub_3b9eb,0));	// 93223 call    sub_3B9EB ;~ 28F0:2989
cs=0x28f0;eip=0x00298c; 	T(CMP(unk_57113, 0));	// 93224 cmp     byte ptr unk_57113, 0 ;~ 28F0:298C
cs=0x28f0;eip=0x002991; 	R(JZ(loc_39e9b));	// 93225 jz      short loc_39E9B ;~ 28F0:2991
cs=0x28f0;eip=0x002993; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93226 les     bx, [bp+arg_0] ;~ 28F0:2993
cs=0x28f0;eip=0x002996; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 93227 mov     ax, es:[bx+138h] ;~ 28F0:2996
cs=0x28f0;eip=0x00299b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 93228 mov     dx, es:[bx+13Ah] ;~ 28F0:299B
cs=0x28f0;eip=0x0029a0; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93229 cmp     es:[bx+122h], dx ;~ 28F0:29A0
cs=0x28f0;eip=0x0029a5; 	R(JL(loc_39e95));	// 93230 jl      short loc_39E95 ;~ 28F0:29A5
cs=0x28f0;eip=0x0029a7; 	R(JG(loc_39e90));	// 93231 jg      short loc_39E90 ;~ 28F0:29A7
cs=0x28f0;eip=0x0029a9; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93232 cmp     es:[bx+120h], ax ;~ 28F0:29A9
cs=0x28f0;eip=0x0029ae; 	R(JC(loc_39e95));	// 93233 jb      short loc_39E95 ;~ 28F0:29AE
loc_39e90:
	// 10375 
cs=0x28f0;eip=0x0029b0; 	T(MOV(ax, 1));	// 93236 mov     ax, 1 ;~ 28F0:29B0
cs=0x28f0;eip=0x0029b3; 	R(JMP(loc_39e97));	// 93237 jmp     short loc_39E97 ;~ 28F0:29B3
loc_39e95:
	// 10376 
cs=0x28f0;eip=0x0029b5; 	T(SUB(ax, ax));	// 93242 sub     ax, ax ;~ 28F0:29B5
loc_39e97:
	// 10377 
cs=0x28f0;eip=0x0029b7; 	T(OR(ax, ax));	// 93245 or      ax, ax ;~ 28F0:29B7
cs=0x28f0;eip=0x0029b9; 	R(JNZ(loc_39eb5));	// 93246 jnz     short loc_39EB5 ;~ 28F0:29B9
loc_39e9b:
	// 10378 
cs=0x28f0;eip=0x0029bb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 93249 les     bx, [bp+var_4] ;~ 28F0:29BB
cs=0x28f0;eip=0x0029be; 	T(SUB(ax, ax));	// 93250 sub     ax, ax ;~ 28F0:29BE
cs=0x28f0;eip=0x0029c0; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 93251 mov     es:[bx+6], ax ;~ 28F0:29C0
cs=0x28f0;eip=0x0029c4; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 93252 mov     es:[bx+4], ax ;~ 28F0:29C4
cs=0x28f0;eip=0x0029c8; 	X(PUSH(es));	// 93253 push    es ;~ 28F0:29C8
cs=0x28f0;eip=0x0029c9; 	X(PUSH(bx));	// 93254 push    bx ;~ 28F0:29C9
cs=0x28f0;eip=0x0029ca; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 93255 push    word ptr es:[bx+16h] ;~ 28F0:29CA
cs=0x28f0;eip=0x0029ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 93256 push    word ptr es:[bx+14h] ;~ 28F0:29CE
cs=0x28f0;eip=0x0029d2; 	R(CALL(sub_3b9eb,0));	// 93257 call    sub_3B9EB ;~ 28F0:29D2
loc_39eb5:
	// 10379 
cs=0x28f0;eip=0x0029d5; 	T(CMP(unk_57113, 0));	// 93260 cmp     byte ptr unk_57113, 0 ;~ 28F0:29D5
cs=0x28f0;eip=0x0029da; 	R(JZ(loc_39ee5));	// 93261 jz      short loc_39EE5 ;~ 28F0:29DA
cs=0x28f0;eip=0x0029dc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93262 les     bx, [bp+arg_0] ;~ 28F0:29DC
cs=0x28f0;eip=0x0029df; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93263 mov     ax, es:[bx+13Ch] ;~ 28F0:29DF
cs=0x28f0;eip=0x0029e4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93264 mov     dx, es:[bx+13Eh] ;~ 28F0:29E4
cs=0x28f0;eip=0x0029e9; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93265 cmp     es:[bx+122h], dx ;~ 28F0:29E9
cs=0x28f0;eip=0x0029ee; 	R(JG(loc_39edf));	// 93266 jg      short loc_39EDF ;~ 28F0:29EE
cs=0x28f0;eip=0x0029f0; 	R(JGE(loc_39ed5));	// 93267 jge     short loc_39ED5 ;~ 28F0:29F0
cs=0x28f0;eip=0x0029f2; 	R(JMP(loc_39e4c));	// 93268 jmp     loc_39E4C ;~ 28F0:29F2
loc_39ed5:
	// 10380 
cs=0x28f0;eip=0x0029f5; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93272 cmp     es:[bx+120h], ax ;~ 28F0:29F5
cs=0x28f0;eip=0x0029fa; 	R(JA(loc_39edf));	// 93273 ja      short loc_39EDF ;~ 28F0:29FA
cs=0x28f0;eip=0x0029fc; 	R(JMP(loc_39e4c));	// 93274 jmp     loc_39E4C ;~ 28F0:29FC
loc_39edf:
	// 10381 
cs=0x28f0;eip=0x0029ff; 	T(SUB(ax, ax));	// 93279 sub     ax, ax ;~ 28F0:29FF
loc_39ee1:
	// 10382 
cs=0x28f0;eip=0x002a01; 	T(OR(ax, ax));	// 93282 or      ax, ax ;~ 28F0:2A01
cs=0x28f0;eip=0x002a03; 	R(JNZ(loc_39f0a));	// 93283 jnz     short loc_39F0A ;~ 28F0:2A03
loc_39ee5:
	// 10383 
cs=0x28f0;eip=0x002a05; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93287 les     bx, [bp+arg_0] ;~ 28F0:2A05
cs=0x28f0;eip=0x002a08; 	T(SUB(ax, ax));	// 93288 sub     ax, ax ;~ 28F0:2A08
cs=0x28f0;eip=0x002a0a; 	X(MOV(*(dw*)(raddr(es,bx+0x0A6)), ax));	// 93289 mov     es:[bx+0A6h], ax ;~ 28F0:2A0A
cs=0x28f0;eip=0x002a0f; 	X(MOV(*(dw*)(raddr(es,bx+0x0A4)), ax));	// 93290 mov     es:[bx+0A4h], ax ;~ 28F0:2A0F
cs=0x28f0;eip=0x002a14; 	T(MOV(ax, bx));	// 93291 mov     ax, bx ;~ 28F0:2A14
cs=0x28f0;eip=0x002a16; 	T(MOV(dx, es));	// 93292 mov     dx, es ;~ 28F0:2A16
cs=0x28f0;eip=0x002a18; 	T(ADD(ax, 0x0A0));	// 93293 add     ax, 0A0h ; ' ' ;~ 28F0:2A18
cs=0x28f0;eip=0x002a1b; 	X(PUSH(dx));	// 93294 push    dx ;~ 28F0:2A1B
cs=0x28f0;eip=0x002a1c; 	X(PUSH(ax));	// 93295 push    ax ;~ 28F0:2A1C
cs=0x28f0;eip=0x002a1d; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B6))));	// 93296 push    word ptr es:[bx+0B6h] ;~ 28F0:2A1D
cs=0x28f0;eip=0x002a22; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B4))));	// 93297 push    word ptr es:[bx+0B4h] ;~ 28F0:2A22
cs=0x28f0;eip=0x002a27; 	R(CALL(sub_3b9eb,0));	// 93298 call    sub_3B9EB ;~ 28F0:2A27
loc_39f0a:
	// 10384 
cs=0x28f0;eip=0x002a2a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93302 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2A2A
cs=0x28f0;eip=0x002a2d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93303 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2A2D
cs=0x28f0;eip=0x002a30; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 93304 mov     word ptr [bp+var_8], ax ;~ 28F0:2A30
cs=0x28f0;eip=0x002a33; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 93305 mov     word ptr [bp+var_8+2], dx ;~ 28F0:2A33
cs=0x28f0;eip=0x002a36; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 93306 cmp     word ptr unk_57114, 0 ;~ 28F0:2A36
cs=0x28f0;eip=0x002a3b; 	R(JNZ(loc_39f20));	// 93307 jnz     short loc_39F20 ;~ 28F0:2A3B
cs=0x28f0;eip=0x002a3d; 	R(JMP(loc_3a011));	// 93308 jmp     loc_3A011 ;~ 28F0:2A3D
loc_39f20:
	// 10385 
cs=0x28f0;eip=0x002a40; 	T(CMP(unk_57113, 0));	// 93312 cmp     byte ptr unk_57113, 0 ;~ 28F0:2A40
cs=0x28f0;eip=0x002a45; 	R(JZ(loc_39f4f));	// 93313 jz      short loc_39F4F ;~ 28F0:2A45
cs=0x28f0;eip=0x002a47; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93314 les     bx, [bp+arg_0] ;~ 28F0:2A47
cs=0x28f0;eip=0x002a4a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93315 mov     ax, es:[bx+13Ch] ;~ 28F0:2A4A
cs=0x28f0;eip=0x002a4f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93316 mov     dx, es:[bx+13Eh] ;~ 28F0:2A4F
cs=0x28f0;eip=0x002a54; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93317 cmp     es:[bx+122h], dx ;~ 28F0:2A54
cs=0x28f0;eip=0x002a59; 	R(JG(loc_39f49));	// 93318 jg      short loc_39F49 ;~ 28F0:2A59
cs=0x28f0;eip=0x002a5b; 	R(JL(loc_39f44));	// 93319 jl      short loc_39F44 ;~ 28F0:2A5B
cs=0x28f0;eip=0x002a5d; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93320 cmp     es:[bx+120h], ax ;~ 28F0:2A5D
cs=0x28f0;eip=0x002a62; 	R(JA(loc_39f49));	// 93321 ja      short loc_39F49 ;~ 28F0:2A62
loc_39f44:
	// 10386 
cs=0x28f0;eip=0x002a64; 	T(MOV(ax, 1));	// 93324 mov     ax, 1 ;~ 28F0:2A64
cs=0x28f0;eip=0x002a67; 	R(JMP(loc_39f4b));	// 93325 jmp     short loc_39F4B ;~ 28F0:2A67
loc_39f49:
	// 10387 
cs=0x28f0;eip=0x002a69; 	T(SUB(ax, ax));	// 93330 sub     ax, ax ;~ 28F0:2A69
loc_39f4b:
	// 10388 
cs=0x28f0;eip=0x002a6b; 	T(OR(ax, ax));	// 93333 or      ax, ax ;~ 28F0:2A6B
cs=0x28f0;eip=0x002a6d; 	R(JNZ(loc_39f5c));	// 93334 jnz     short loc_39F5C ;~ 28F0:2A6D
loc_39f4f:
	// 10389 
cs=0x28f0;eip=0x002a6f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93337 push    word ptr [bp+arg_0+2] ;~ 28F0:2A6F
cs=0x28f0;eip=0x002a72; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93338 push    word ptr [bp+arg_0] ;~ 28F0:2A72
cs=0x28f0;eip=0x002a75; 	X(PUSH(*(dw*)((&unk_57114))));	// 93339 push    word ptr unk_57114 ;~ 28F0:2A75
cs=0x28f0;eip=0x002a79; 	R(CALL(sub_39478,0));	// 93340 call    sub_39478 ;~ 28F0:2A79
loc_39f5c:
	// 10390 
cs=0x28f0;eip=0x002a7c; 	T(CMP(unk_57113, 0));	// 93343 cmp     byte ptr unk_57113, 0 ;~ 28F0:2A7C
cs=0x28f0;eip=0x002a81; 	R(JZ(loc_39fb3));	// 93344 jz      short loc_39FB3 ;~ 28F0:2A81
cs=0x28f0;eip=0x002a83; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93345 les     bx, [bp+arg_0] ;~ 28F0:2A83
cs=0x28f0;eip=0x002a86; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 93346 mov     ax, es:[bx+138h] ;~ 28F0:2A86
cs=0x28f0;eip=0x002a8b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 93347 mov     dx, es:[bx+13Ah] ;~ 28F0:2A8B
cs=0x28f0;eip=0x002a90; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93348 cmp     es:[bx+122h], dx ;~ 28F0:2A90
cs=0x28f0;eip=0x002a95; 	R(JL(loc_39f85));	// 93349 jl      short loc_39F85 ;~ 28F0:2A95
cs=0x28f0;eip=0x002a97; 	R(JG(loc_39f80));	// 93350 jg      short loc_39F80 ;~ 28F0:2A97
cs=0x28f0;eip=0x002a99; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93351 cmp     es:[bx+120h], ax ;~ 28F0:2A99
cs=0x28f0;eip=0x002a9e; 	R(JC(loc_39f85));	// 93352 jb      short loc_39F85 ;~ 28F0:2A9E
loc_39f80:
	// 10391 
cs=0x28f0;eip=0x002aa0; 	T(MOV(ax, 1));	// 93355 mov     ax, 1 ;~ 28F0:2AA0
cs=0x28f0;eip=0x002aa3; 	R(JMP(loc_39f87));	// 93356 jmp     short loc_39F87 ;~ 28F0:2AA3
loc_39f85:
	// 10392 
cs=0x28f0;eip=0x002aa5; 	T(SUB(ax, ax));	// 93361 sub     ax, ax ;~ 28F0:2AA5
loc_39f87:
	// 10393 
cs=0x28f0;eip=0x002aa7; 	T(OR(ax, ax));	// 93364 or      ax, ax ;~ 28F0:2AA7
cs=0x28f0;eip=0x002aa9; 	R(JNZ(loc_39fc5));	// 93365 jnz     short loc_39FC5 ;~ 28F0:2AA9
cs=0x28f0;eip=0x002aab; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93366 les     bx, [bp+arg_0] ;~ 28F0:2AAB
cs=0x28f0;eip=0x002aae; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93367 mov     ax, es:[bx+13Ch] ;~ 28F0:2AAE
cs=0x28f0;eip=0x002ab3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93368 mov     dx, es:[bx+13Eh] ;~ 28F0:2AB3
cs=0x28f0;eip=0x002ab8; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93369 cmp     es:[bx+122h], dx ;~ 28F0:2AB8
cs=0x28f0;eip=0x002abd; 	R(JG(loc_39fad));	// 93370 jg      short loc_39FAD ;~ 28F0:2ABD
cs=0x28f0;eip=0x002abf; 	R(JL(loc_39fa8));	// 93371 jl      short loc_39FA8 ;~ 28F0:2ABF
cs=0x28f0;eip=0x002ac1; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93372 cmp     es:[bx+120h], ax ;~ 28F0:2AC1
cs=0x28f0;eip=0x002ac6; 	R(JA(loc_39fad));	// 93373 ja      short loc_39FAD ;~ 28F0:2AC6
loc_39fa8:
	// 10394 
cs=0x28f0;eip=0x002ac8; 	T(MOV(ax, 1));	// 93376 mov     ax, 1 ;~ 28F0:2AC8
cs=0x28f0;eip=0x002acb; 	R(JMP(loc_39faf));	// 93377 jmp     short loc_39FAF ;~ 28F0:2ACB
loc_39fad:
	// 10395 
cs=0x28f0;eip=0x002acd; 	T(SUB(ax, ax));	// 93382 sub     ax, ax ;~ 28F0:2ACD
loc_39faf:
	// 10396 
cs=0x28f0;eip=0x002acf; 	T(OR(ax, ax));	// 93385 or      ax, ax ;~ 28F0:2ACF
cs=0x28f0;eip=0x002ad1; 	R(JNZ(loc_39fc5));	// 93386 jnz     short loc_39FC5 ;~ 28F0:2AD1
loc_39fb3:
	// 10397 
cs=0x28f0;eip=0x002ad3; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93389 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2AD3
cs=0x28f0;eip=0x002ad6; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93390 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2AD6
cs=0x28f0;eip=0x002ad9; 	T(ADD(ax, 0x140));	// 93391 add     ax, 140h ;~ 28F0:2AD9
cs=0x28f0;eip=0x002adc; 	X(PUSH(dx));	// 93392 push    dx ;~ 28F0:2ADC
cs=0x28f0;eip=0x002add; 	X(PUSH(ax));	// 93393 push    ax ;~ 28F0:2ADD
cs=0x28f0;eip=0x002ade; 	X(PUSH(*(dw*)((&unk_57114))));	// 93394 push    word ptr unk_57114 ;~ 28F0:2ADE
cs=0x28f0;eip=0x002ae2; 	R(CALL(sub_38f8e,0));	// 93395 call    sub_38F8E ;~ 28F0:2AE2
loc_39fc5:
	// 10398 
cs=0x28f0;eip=0x002ae5; 	T(CMP(unk_57113, 0));	// 93399 cmp     byte ptr unk_57113, 0 ;~ 28F0:2AE5
cs=0x28f0;eip=0x002aea; 	R(JNZ(loc_39fcf));	// 93400 jnz     short loc_39FCF ;~ 28F0:2AEA
cs=0x28f0;eip=0x002aec; 	R(JMP(loc_3a0d3));	// 93401 jmp     loc_3A0D3 ;~ 28F0:2AEC
loc_39fcf:
	// 10399 
cs=0x28f0;eip=0x002aef; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93405 les     bx, [bp+arg_0] ;~ 28F0:2AEF
cs=0x28f0;eip=0x002af2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93406 mov     ax, es:[bx+13Ch] ;~ 28F0:2AF2
cs=0x28f0;eip=0x002af7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93407 mov     dx, es:[bx+13Eh] ;~ 28F0:2AF7
cs=0x28f0;eip=0x002afc; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93408 cmp     es:[bx+122h], dx ;~ 28F0:2AFC
cs=0x28f0;eip=0x002b01; 	R(JG(loc_39ff1));	// 93409 jg      short loc_39FF1 ;~ 28F0:2B01
cs=0x28f0;eip=0x002b03; 	R(JL(loc_39fec));	// 93410 jl      short loc_39FEC ;~ 28F0:2B03
cs=0x28f0;eip=0x002b05; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93411 cmp     es:[bx+120h], ax ;~ 28F0:2B05
cs=0x28f0;eip=0x002b0a; 	R(JA(loc_39ff1));	// 93412 ja      short loc_39FF1 ;~ 28F0:2B0A
loc_39fec:
	// 10400 
cs=0x28f0;eip=0x002b0c; 	T(MOV(ax, 1));	// 93415 mov     ax, 1 ;~ 28F0:2B0C
cs=0x28f0;eip=0x002b0f; 	R(JMP(loc_39ff3));	// 93416 jmp     short loc_39FF3 ;~ 28F0:2B0F
loc_39ff1:
	// 10401 
cs=0x28f0;eip=0x002b11; 	T(SUB(ax, ax));	// 93421 sub     ax, ax ;~ 28F0:2B11
loc_39ff3:
	// 10402 
cs=0x28f0;eip=0x002b13; 	T(OR(ax, ax));	// 93424 or      ax, ax ;~ 28F0:2B13
cs=0x28f0;eip=0x002b15; 	R(JNZ(loc_39ffa));	// 93425 jnz     short loc_39FFA ;~ 28F0:2B15
cs=0x28f0;eip=0x002b17; 	R(JMP(loc_3a0d3));	// 93426 jmp     loc_3A0D3 ;~ 28F0:2B17
loc_39ffa:
	// 10403 
cs=0x28f0;eip=0x002b1a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93430 mov     ax, word ptr [bp+arg_0] ;~ 28F0:2B1A
cs=0x28f0;eip=0x002b1d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93431 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2B1D
cs=0x28f0;eip=0x002b20; 	T(ADD(ax, 0x0A0));	// 93432 add     ax, 0A0h ; ' ' ;~ 28F0:2B20
cs=0x28f0;eip=0x002b23; 	X(PUSH(dx));	// 93433 push    dx ;~ 28F0:2B23
cs=0x28f0;eip=0x002b24; 	X(PUSH(ax));	// 93434 push    ax ;~ 28F0:2B24
cs=0x28f0;eip=0x002b25; 	T(MOV(ax, *(dw*)((&unk_57114))));	// 93435 mov     ax, word ptr unk_57114 ;~ 28F0:2B25
cs=0x28f0;eip=0x002b28; 	T(NEG(ax));	// 93436 neg     ax ;~ 28F0:2B28
cs=0x28f0;eip=0x002b2a; 	X(PUSH(ax));	// 93437 push    ax ;~ 28F0:2B2A
cs=0x28f0;eip=0x002b2b; 	R(CALL(sub_39729,0));	// 93438 call    sub_39729 ;~ 28F0:2B2B
cs=0x28f0;eip=0x002b2e; 	R(JMP(loc_3a0d3));	// 93439 jmp     loc_3A0D3 ;~ 28F0:2B2E
loc_3a011:
	// 10404 
cs=0x28f0;eip=0x002b31; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 93443 les     bx, [bp+var_8] ;~ 28F0:2B31
cs=0x28f0;eip=0x002b34; 	T(SUB(ax, ax));	// 93444 sub     ax, ax ;~ 28F0:2B34
cs=0x28f0;eip=0x002b36; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 93445 mov     es:[bx+6], ax ;~ 28F0:2B36
cs=0x28f0;eip=0x002b3a; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 93446 mov     es:[bx+4], ax ;~ 28F0:2B3A
cs=0x28f0;eip=0x002b3e; 	X(PUSH(es));	// 93447 push    es ;~ 28F0:2B3E
cs=0x28f0;eip=0x002b3f; 	X(PUSH(bx));	// 93448 push    bx ;~ 28F0:2B3F
cs=0x28f0;eip=0x002b40; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 93449 push    word ptr es:[bx+16h] ;~ 28F0:2B40
cs=0x28f0;eip=0x002b44; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 93450 push    word ptr es:[bx+14h] ;~ 28F0:2B44
cs=0x28f0;eip=0x002b48; 	R(CALL(sub_3b9eb,0));	// 93451 call    sub_3B9EB ;~ 28F0:2B48
cs=0x28f0;eip=0x002b4b; 	T(CMP(unk_57113, 0));	// 93452 cmp     byte ptr unk_57113, 0 ;~ 28F0:2B4B
cs=0x28f0;eip=0x002b50; 	R(JZ(loc_3a05a));	// 93453 jz      short loc_3A05A ;~ 28F0:2B50
cs=0x28f0;eip=0x002b52; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93454 les     bx, [bp+arg_0] ;~ 28F0:2B52
cs=0x28f0;eip=0x002b55; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x138))));	// 93455 mov     ax, es:[bx+138h] ;~ 28F0:2B55
cs=0x28f0;eip=0x002b5a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13A))));	// 93456 mov     dx, es:[bx+13Ah] ;~ 28F0:2B5A
cs=0x28f0;eip=0x002b5f; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93457 cmp     es:[bx+122h], dx ;~ 28F0:2B5F
cs=0x28f0;eip=0x002b64; 	R(JL(loc_3a054));	// 93458 jl      short loc_3A054 ;~ 28F0:2B64
cs=0x28f0;eip=0x002b66; 	R(JG(loc_3a04f));	// 93459 jg      short loc_3A04F ;~ 28F0:2B66
cs=0x28f0;eip=0x002b68; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93460 cmp     es:[bx+120h], ax ;~ 28F0:2B68
cs=0x28f0;eip=0x002b6d; 	R(JC(loc_3a054));	// 93461 jb      short loc_3A054 ;~ 28F0:2B6D
loc_3a04f:
	// 10405 
cs=0x28f0;eip=0x002b6f; 	T(MOV(ax, 1));	// 93464 mov     ax, 1 ;~ 28F0:2B6F
cs=0x28f0;eip=0x002b72; 	R(JMP(loc_3a056));	// 93465 jmp     short loc_3A056 ;~ 28F0:2B72
loc_3a054:
	// 10406 
cs=0x28f0;eip=0x002b74; 	T(SUB(ax, ax));	// 93470 sub     ax, ax ;~ 28F0:2B74
loc_3a056:
	// 10407 
cs=0x28f0;eip=0x002b76; 	T(OR(ax, ax));	// 93473 or      ax, ax ;~ 28F0:2B76
cs=0x28f0;eip=0x002b78; 	R(JNZ(loc_3a07f));	// 93474 jnz     short loc_3A07F ;~ 28F0:2B78
loc_3a05a:
	// 10408 
cs=0x28f0;eip=0x002b7a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93477 les     bx, [bp+arg_0] ;~ 28F0:2B7A
cs=0x28f0;eip=0x002b7d; 	T(SUB(ax, ax));	// 93478 sub     ax, ax ;~ 28F0:2B7D
cs=0x28f0;eip=0x002b7f; 	X(MOV(*(dw*)(raddr(es,bx+0x146)), ax));	// 93479 mov     es:[bx+146h], ax ;~ 28F0:2B7F
cs=0x28f0;eip=0x002b84; 	X(MOV(*(dw*)(raddr(es,bx+0x144)), ax));	// 93480 mov     es:[bx+144h], ax ;~ 28F0:2B84
cs=0x28f0;eip=0x002b89; 	T(MOV(ax, bx));	// 93481 mov     ax, bx ;~ 28F0:2B89
cs=0x28f0;eip=0x002b8b; 	T(MOV(dx, es));	// 93482 mov     dx, es ;~ 28F0:2B8B
cs=0x28f0;eip=0x002b8d; 	T(ADD(ax, 0x140));	// 93483 add     ax, 140h ;~ 28F0:2B8D
cs=0x28f0;eip=0x002b90; 	X(PUSH(dx));	// 93484 push    dx ;~ 28F0:2B90
cs=0x28f0;eip=0x002b91; 	X(PUSH(ax));	// 93485 push    ax ;~ 28F0:2B91
cs=0x28f0;eip=0x002b92; 	X(PUSH(*(dw*)(raddr(es,bx+0x156))));	// 93486 push    word ptr es:[bx+156h] ;~ 28F0:2B92
cs=0x28f0;eip=0x002b97; 	X(PUSH(*(dw*)(raddr(es,bx+0x154))));	// 93487 push    word ptr es:[bx+154h] ;~ 28F0:2B97
cs=0x28f0;eip=0x002b9c; 	R(CALL(sub_3b9eb,0));	// 93488 call    sub_3B9EB ;~ 28F0:2B9C
loc_3a07f:
	// 10409 
cs=0x28f0;eip=0x002b9f; 	T(CMP(unk_57113, 0));	// 93491 cmp     byte ptr unk_57113, 0 ;~ 28F0:2B9F
cs=0x28f0;eip=0x002ba4; 	R(JZ(loc_3a0d3));	// 93492 jz      short loc_3A0D3 ;~ 28F0:2BA4
cs=0x28f0;eip=0x002ba6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93493 les     bx, [bp+arg_0] ;~ 28F0:2BA6
cs=0x28f0;eip=0x002ba9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93494 mov     ax, es:[bx+13Ch] ;~ 28F0:2BA9
cs=0x28f0;eip=0x002bae; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93495 mov     dx, es:[bx+13Eh] ;~ 28F0:2BAE
cs=0x28f0;eip=0x002bb3; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93496 cmp     es:[bx+122h], dx ;~ 28F0:2BB3
cs=0x28f0;eip=0x002bb8; 	R(JG(loc_3a0a8));	// 93497 jg      short loc_3A0A8 ;~ 28F0:2BB8
cs=0x28f0;eip=0x002bba; 	R(JL(loc_3a0a3));	// 93498 jl      short loc_3A0A3 ;~ 28F0:2BBA
cs=0x28f0;eip=0x002bbc; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93499 cmp     es:[bx+120h], ax ;~ 28F0:2BBC
cs=0x28f0;eip=0x002bc1; 	R(JA(loc_3a0a8));	// 93500 ja      short loc_3A0A8 ;~ 28F0:2BC1
loc_3a0a3:
	// 10410 
cs=0x28f0;eip=0x002bc3; 	T(MOV(ax, 1));	// 93503 mov     ax, 1 ;~ 28F0:2BC3
cs=0x28f0;eip=0x002bc6; 	R(JMP(loc_3a0aa));	// 93504 jmp     short loc_3A0AA ;~ 28F0:2BC6
loc_3a0a8:
	// 10411 
cs=0x28f0;eip=0x002bc8; 	T(SUB(ax, ax));	// 93509 sub     ax, ax ;~ 28F0:2BC8
loc_3a0aa:
	// 10412 
cs=0x28f0;eip=0x002bca; 	T(OR(ax, ax));	// 93512 or      ax, ax ;~ 28F0:2BCA
cs=0x28f0;eip=0x002bcc; 	R(JZ(loc_3a0d3));	// 93513 jz      short loc_3A0D3 ;~ 28F0:2BCC
cs=0x28f0;eip=0x002bce; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93514 les     bx, [bp+arg_0] ;~ 28F0:2BCE
cs=0x28f0;eip=0x002bd1; 	T(SUB(ax, ax));	// 93515 sub     ax, ax ;~ 28F0:2BD1
cs=0x28f0;eip=0x002bd3; 	X(MOV(*(dw*)(raddr(es,bx+0x0A6)), ax));	// 93516 mov     es:[bx+0A6h], ax ;~ 28F0:2BD3
cs=0x28f0;eip=0x002bd8; 	X(MOV(*(dw*)(raddr(es,bx+0x0A4)), ax));	// 93517 mov     es:[bx+0A4h], ax ;~ 28F0:2BD8
cs=0x28f0;eip=0x002bdd; 	T(MOV(ax, bx));	// 93518 mov     ax, bx ;~ 28F0:2BDD
cs=0x28f0;eip=0x002bdf; 	T(MOV(dx, es));	// 93519 mov     dx, es ;~ 28F0:2BDF
cs=0x28f0;eip=0x002be1; 	T(ADD(ax, 0x0A0));	// 93520 add     ax, 0A0h ; ' ' ;~ 28F0:2BE1
cs=0x28f0;eip=0x002be4; 	X(PUSH(dx));	// 93521 push    dx ;~ 28F0:2BE4
cs=0x28f0;eip=0x002be5; 	X(PUSH(ax));	// 93522 push    ax ;~ 28F0:2BE5
cs=0x28f0;eip=0x002be6; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B6))));	// 93523 push    word ptr es:[bx+0B6h] ;~ 28F0:2BE6
cs=0x28f0;eip=0x002beb; 	X(PUSH(*(dw*)(raddr(es,bx+0x0B4))));	// 93524 push    word ptr es:[bx+0B4h] ;~ 28F0:2BEB
cs=0x28f0;eip=0x002bf0; 	R(CALL(sub_3b9eb,0));	// 93525 call    sub_3B9EB ;~ 28F0:2BF0
loc_3a0d3:
	// 10413 
cs=0x28f0;eip=0x002bf3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93529 push    word ptr [bp+arg_0+2] ;~ 28F0:2BF3
cs=0x28f0;eip=0x002bf6; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93530 push    word ptr [bp+arg_0] ;~ 28F0:2BF6
cs=0x28f0;eip=0x002bf9; 	R(CALL(sub_39765,0));	// 93531 call    sub_39765 ;~ 28F0:2BF9
cs=0x28f0;eip=0x002bfc; 	T(CMP(unk_57113, 0));	// 93532 cmp     byte ptr unk_57113, 0 ;~ 28F0:2BFC
cs=0x28f0;eip=0x002c01; 	R(JZ(loc_3a15c));	// 93533 jz      short loc_3A15C ;~ 28F0:2C01
cs=0x28f0;eip=0x002c03; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93534 les     bx, [bp+arg_0] ;~ 28F0:2C03
cs=0x28f0;eip=0x002c06; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x13C))));	// 93535 mov     ax, es:[bx+13Ch] ;~ 28F0:2C06
cs=0x28f0;eip=0x002c0b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x13E))));	// 93536 mov     dx, es:[bx+13Eh] ;~ 28F0:2C0B
cs=0x28f0;eip=0x002c10; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), dx));	// 93537 cmp     es:[bx+122h], dx ;~ 28F0:2C10
cs=0x28f0;eip=0x002c15; 	R(JG(loc_3a105));	// 93538 jg      short loc_3A105 ;~ 28F0:2C15
cs=0x28f0;eip=0x002c17; 	R(JL(loc_3a100));	// 93539 jl      short loc_3A100 ;~ 28F0:2C17
cs=0x28f0;eip=0x002c19; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), ax));	// 93540 cmp     es:[bx+120h], ax ;~ 28F0:2C19
cs=0x28f0;eip=0x002c1e; 	R(JA(loc_3a105));	// 93541 ja      short loc_3A105 ;~ 28F0:2C1E
loc_3a100:
	// 10414 
cs=0x28f0;eip=0x002c20; 	T(MOV(ax, 1));	// 93544 mov     ax, 1 ;~ 28F0:2C20
cs=0x28f0;eip=0x002c23; 	R(JMP(loc_3a107));	// 93545 jmp     short loc_3A107 ;~ 28F0:2C23
loc_3a105:
	// 10415 
cs=0x28f0;eip=0x002c25; 	T(SUB(ax, ax));	// 93550 sub     ax, ax ;~ 28F0:2C25
loc_3a107:
	// 10416 
cs=0x28f0;eip=0x002c27; 	T(OR(ax, ax));	// 93553 or      ax, ax ;~ 28F0:2C27
cs=0x28f0;eip=0x002c29; 	R(JZ(loc_3a15c));	// 93554 jz      short loc_3A15C ;~ 28F0:2C29
cs=0x28f0;eip=0x002c2b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4+2)))));	// 93555 push    word ptr [bp+var_4+2] ;~ 28F0:2C2B
cs=0x28f0;eip=0x002c2e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 93556 push    word ptr [bp+var_4] ;~ 28F0:2C2E
cs=0x28f0;eip=0x002c31; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 93557 les     bx, [bp+var_4] ;~ 28F0:2C31
cs=0x28f0;eip=0x002c34; 	R(JMP(loc_39d03));	// 93558 jmp     loc_39D03 ;~ 28F0:2C34
loc_3a117:
	// 10417 
cs=0x28f0;eip=0x002c37; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93563 les     bx, [bp+arg_0] ;~ 28F0:2C37
cs=0x28f0;eip=0x002c3a; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 1));	// 93564 mov     word ptr es:[bx+332h], 1 ;~ 28F0:2C3A
cs=0x28f0;eip=0x002c41; 	T(SUB(ax, ax));	// 93565 sub     ax, ax ;~ 28F0:2C41
cs=0x28f0;eip=0x002c43; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 93566 mov     es:[bx+2], ax ;~ 28F0:2C43
cs=0x28f0;eip=0x002c47; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 93567 mov     es:[bx], ax ;~ 28F0:2C47
cs=0x28f0;eip=0x002c4a; 	T(CWD);	// 93568 cwd ;~ 28F0:2C4A
cs=0x28f0;eip=0x002c4b; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 93569 mov     es:[bx+0A0h], ax ;~ 28F0:2C4B
cs=0x28f0;eip=0x002c50; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), dx));	// 93570 mov     es:[bx+0A2h], dx ;~ 28F0:2C50
cs=0x28f0;eip=0x002c55; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 93571 mov     es:[bx+40h], ax ;~ 28F0:2C55
cs=0x28f0;eip=0x002c59; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 93572 mov     es:[bx+42h], dx ;~ 28F0:2C59
cs=0x28f0;eip=0x002c5d; 	T(CWD);	// 93573 cwd ;~ 28F0:2C5D
cs=0x28f0;eip=0x002c5e; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 93574 mov     es:[bx+160h], ax ;~ 28F0:2C5E
cs=0x28f0;eip=0x002c63; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), dx));	// 93575 mov     es:[bx+162h], dx ;~ 28F0:2C63
cs=0x28f0;eip=0x002c68; 	X(MOV(*(dw*)(raddr(es,bx+0x140)), ax));	// 93576 mov     es:[bx+140h], ax ;~ 28F0:2C68
cs=0x28f0;eip=0x002c6d; 	X(MOV(*(dw*)(raddr(es,bx+0x142)), dx));	// 93577 mov     es:[bx+142h], dx ;~ 28F0:2C6D
cs=0x28f0;eip=0x002c72; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 93578 mov     es:[bx+120h], ax ;~ 28F0:2C72
cs=0x28f0;eip=0x002c77; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 93579 mov     es:[bx+122h], dx ;~ 28F0:2C77
loc_3a15c:
	// 10418 
cs=0x28f0;eip=0x002c7c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93583 push    word ptr [bp+arg_0+2] ;~ 28F0:2C7C
cs=0x28f0;eip=0x002c7f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93584 push    word ptr [bp+arg_0] ;~ 28F0:2C7F
cs=0x28f0;eip=0x002c82; 	R(CALL(sub_39113,0));	// 93585 call    sub_39113 ;~ 28F0:2C82
cs=0x28f0;eip=0x002c85; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93586 push    word ptr [bp+arg_0+2] ;~ 28F0:2C85
cs=0x28f0;eip=0x002c88; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93587 push    word ptr [bp+arg_0] ;~ 28F0:2C88
cs=0x28f0;eip=0x002c8b; 	R(CALL(sub_3915a,0));	// 93588 call    sub_3915A ;~ 28F0:2C8B
cs=0x28f0;eip=0x002c8e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93589 les     bx, [bp+arg_0] ;~ 28F0:2C8E
cs=0x28f0;eip=0x002c91; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 93590 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:2C91
cs=0x28f0;eip=0x002c97; 	R(JZ(loc_3a17c));	// 93591 jz      short loc_3A17C ;~ 28F0:2C97
cs=0x28f0;eip=0x002c99; 	R(JMP(loc_3a21e));	// 93592 jmp     loc_3A21E ;~ 28F0:2C99
loc_3a17c:
	// 10419 
cs=0x28f0;eip=0x002c9c; 	T(CMP(*(dw*)(raddr(es,bx+0x1C2)), 0));	// 93596 cmp     word ptr es:[bx+1C2h], 0 ;~ 28F0:2C9C
cs=0x28f0;eip=0x002ca2; 	R(JGE(loc_3a1e8));	// 93597 jge     short loc_3A1E8 ;~ 28F0:2CA2
cs=0x28f0;eip=0x002ca4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 93598 mov     ax, es:[bx+2FAh] ;~ 28F0:2CA4
cs=0x28f0;eip=0x002ca9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 93599 mov     dx, es:[bx+2FCh] ;~ 28F0:2CA9
cs=0x28f0;eip=0x002cae; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 93600 add     ax, es:[bx+302h] ;~ 28F0:2CAE
cs=0x28f0;eip=0x002cb3; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 93601 adc     dx, es:[bx+304h] ;~ 28F0:2CB3
cs=0x28f0;eip=0x002cb8; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 93602 add     ax, es:[bx+20Eh] ;~ 28F0:2CB8
cs=0x28f0;eip=0x002cbd; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 93603 adc     dx, es:[bx+210h] ;~ 28F0:2CBD
cs=0x28f0;eip=0x002cc2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 93604 les     bx, es:[bx+31Ch] ;~ 28F0:2CC2
cs=0x28f0;eip=0x002cc7; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 93605 cmp     dx, es:[bx+0Ch] ;~ 28F0:2CC7
cs=0x28f0;eip=0x002ccb; 	R(JG(loc_3a21e));	// 93606 jg      short loc_3A21E ;~ 28F0:2CCB
cs=0x28f0;eip=0x002ccd; 	R(JL(loc_3a1b5));	// 93607 jl      short loc_3A1B5 ;~ 28F0:2CCD
cs=0x28f0;eip=0x002ccf; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 93608 cmp     ax, es:[bx+0Ah] ;~ 28F0:2CCF
cs=0x28f0;eip=0x002cd3; 	R(JNC(loc_3a21e));	// 93609 jnb     short loc_3A21E ;~ 28F0:2CD3
loc_3a1b5:
	// 10420 
cs=0x28f0;eip=0x002cd5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93612 les     bx, [bp+arg_0] ;~ 28F0:2CD5
cs=0x28f0;eip=0x002cd8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C4))));	// 93613 mov     ax, es:[bx+1C4h] ;~ 28F0:2CD8
cs=0x28f0;eip=0x002cdd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C6))));	// 93614 mov     dx, es:[bx+1C6h] ;~ 28F0:2CDD
cs=0x28f0;eip=0x002ce2; 	T(CMP(*(dw*)(raddr(es,bx+0x1C2)), dx));	// 93615 cmp     es:[bx+1C2h], dx ;~ 28F0:2CE2
cs=0x28f0;eip=0x002ce7; 	R(JL(loc_3a1dc));	// 93616 jl      short loc_3A1DC ;~ 28F0:2CE7
cs=0x28f0;eip=0x002ce9; 	R(JG(loc_3a1d2));	// 93617 jg      short loc_3A1D2 ;~ 28F0:2CE9
cs=0x28f0;eip=0x002ceb; 	T(CMP(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 93618 cmp     es:[bx+1C0h], ax ;~ 28F0:2CEB
cs=0x28f0;eip=0x002cf0; 	R(JBE(loc_3a1dc));	// 93619 jbe     short loc_3A1DC ;~ 28F0:2CF0
loc_3a1d2:
	// 10421 
cs=0x28f0;eip=0x002cf2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 93622 mov     ax, es:[bx+20h] ;~ 28F0:2CF2
cs=0x28f0;eip=0x002cf6; 	T(OR(ax, *(dw*)(raddr(es,bx+0x22))));	// 93623 or      ax, es:[bx+22h] ;~ 28F0:2CF6
cs=0x28f0;eip=0x002cfa; 	R(JNZ(loc_3a21e));	// 93624 jnz     short loc_3A21E ;~ 28F0:2CFA
loc_3a1dc:
	// 10422 
cs=0x28f0;eip=0x002cfc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x338))));	// 93628 mov     ax, es:[bx+338h] ;~ 28F0:2CFC
cs=0x28f0;eip=0x002d01; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), ax));	// 93629 mov     es:[bx+332h], ax ;~ 28F0:2D01
cs=0x28f0;eip=0x002d06; 	R(JMP(loc_3a21e));	// 93630 jmp     short loc_3A21E ;~ 28F0:2D06
loc_3a1e8:
	// 10423 
cs=0x28f0;eip=0x002d08; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 93634 mov     ax, es:[bx+2FAh] ;~ 28F0:2D08
cs=0x28f0;eip=0x002d0d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 93635 mov     dx, es:[bx+2FCh] ;~ 28F0:2D0D
cs=0x28f0;eip=0x002d12; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 93636 add     ax, es:[bx+302h] ;~ 28F0:2D12
cs=0x28f0;eip=0x002d17; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 93637 adc     dx, es:[bx+304h] ;~ 28F0:2D17
cs=0x28f0;eip=0x002d1c; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 93638 les     bx, es:[bx+31Ch] ;~ 28F0:2D1C
cs=0x28f0;eip=0x002d21; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 93639 cmp     dx, es:[bx+0Ch] ;~ 28F0:2D21
cs=0x28f0;eip=0x002d25; 	R(JL(loc_3a21e));	// 93640 jl      short loc_3A21E ;~ 28F0:2D25
cs=0x28f0;eip=0x002d27; 	R(JG(loc_3a20f));	// 93641 jg      short loc_3A20F ;~ 28F0:2D27
cs=0x28f0;eip=0x002d29; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 93642 cmp     ax, es:[bx+0Ah] ;~ 28F0:2D29
cs=0x28f0;eip=0x002d2d; 	R(JC(loc_3a21e));	// 93643 jb      short loc_3A21E ;~ 28F0:2D2D
loc_3a20f:
	// 10424 
cs=0x28f0;eip=0x002d2f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93646 les     bx, [bp+arg_0] ;~ 28F0:2D2F
cs=0x28f0;eip=0x002d32; 	T(SUB(ax, ax));	// 93647 sub     ax, ax ;~ 28F0:2D32
cs=0x28f0;eip=0x002d34; 	X(MOV(*(dw*)(raddr(es,bx+0x1C2)), ax));	// 93648 mov     es:[bx+1C2h], ax ;~ 28F0:2D34
cs=0x28f0;eip=0x002d39; 	X(MOV(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 93649 mov     es:[bx+1C0h], ax ;~ 28F0:2D39
loc_3a21e:
	// 10425 
cs=0x28f0;eip=0x002d3e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93653 push    word ptr [bp+arg_0+2] ;~ 28F0:2D3E
cs=0x28f0;eip=0x002d41; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93654 push    word ptr [bp+arg_0] ;~ 28F0:2D41
cs=0x28f0;eip=0x002d44; 	R(CALL(sub_39bdb,0));	// 93655 call    sub_39BDB ;~ 28F0:2D44
cs=0x28f0;eip=0x002d47; 	T(MOV(sp, bp));	// 93656 mov     sp, bp ;~ 28F0:2D47
cs=0x28f0;eip=0x002d49; 	X(POP(bp));	// 93657 pop     bp ;~ 28F0:2D49
cs=0x28f0;eip=0x002d4a; 	R(RETN(4));	// 93658 retn    4 ;~ 28F0:2D4A
sub_3a22e:
	// 93668 
#undef var_2
#define var_2 -2
	// 93670 var_2           = word ptr -2 ;~ 28F0:2D4E
#undef arg_0
#define arg_0 4
	// 93671 arg_0           = word ptr  4 ;~ 28F0:2D4E
#undef arg_2
#define arg_2 6
	// 93672 arg_2           = word ptr  6 ;~ 28F0:2D4E
#undef arg_4
#define arg_4 8
	// 93673 arg_4           = word ptr  8 ;~ 28F0:2D4E
#undef arg_6
#define arg_6 0x0A
	// 93674 arg_6           = word ptr  0Ah ;~ 28F0:2D4E
#undef arg_8
#define arg_8 0x0C
	// 93675 arg_8           = word ptr  0Ch ;~ 28F0:2D4E
cs=0x28f0;eip=0x002d4e; 	X(PUSH(bp));	// 93677 push    bp ;~ 28F0:2D4E
cs=0x28f0;eip=0x002d4f; 	T(MOV(bp, sp));	// 93678 mov     bp, sp ;~ 28F0:2D4F
cs=0x28f0;eip=0x002d51; 	T(SUB(sp, 2));	// 93679 sub     sp, 2 ;~ 28F0:2D51
cs=0x28f0;eip=0x002d54; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 93680 mov     ax, [bp+arg_4] ;~ 28F0:2D54
cs=0x28f0;eip=0x002d57; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 93681 sub     ax, [bp+arg_8] ;~ 28F0:2D57
cs=0x28f0;eip=0x002d5a; 	T(CWD);	// 93682 cwd ;~ 28F0:2D5A
cs=0x28f0;eip=0x002d5b; 	X(PUSH(dx));	// 93683 push    dx ;~ 28F0:2D5B
cs=0x28f0;eip=0x002d5c; 	X(PUSH(ax));	// 93684 push    ax ;~ 28F0:2D5C
cs=0x28f0;eip=0x002d5d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 93685 mov     ax, [bp+arg_2] ;~ 28F0:2D5D
cs=0x28f0;eip=0x002d60; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 93686 sub     ax, [bp+arg_6] ;~ 28F0:2D60
cs=0x28f0;eip=0x002d63; 	T(CWD);	// 93687 cwd ;~ 28F0:2D63
cs=0x28f0;eip=0x002d64; 	X(PUSH(dx));	// 93688 push    dx ;~ 28F0:2D64
cs=0x28f0;eip=0x002d65; 	X(PUSH(ax));	// 93689 push    ax ;~ 28F0:2D65
cs=0x28f0;eip=0x002d66; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 93690 mov     ax, [bp+arg_0] ;~ 28F0:2D66
cs=0x28f0;eip=0x002d69; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 93691 sub     ax, [bp+arg_8] ;~ 28F0:2D69
cs=0x28f0;eip=0x002d6c; 	T(CWD);	// 93692 cwd ;~ 28F0:2D6C
cs=0x28f0;eip=0x002d6d; 	X(PUSH(dx));	// 93693 push    dx ;~ 28F0:2D6D
cs=0x28f0;eip=0x002d6e; 	X(PUSH(ax));	// 93694 push    ax ;~ 28F0:2D6E
cs=0x28f0;eip=0x002d6f; 	R(CALLF(sub_105c2,0));	// 93695 call    sub_105C2 ;~ 28F0:2D6F
cs=0x28f0;eip=0x002d74; 	X(PUSH(dx));	// 93696 push    dx ;~ 28F0:2D74
cs=0x28f0;eip=0x002d75; 	X(PUSH(ax));	// 93697 push    ax ;~ 28F0:2D75
cs=0x28f0;eip=0x002d76; 	R(CALLF(sub_10526,0));	// 93698 call    sub_10526 ;~ 28F0:2D76
cs=0x28f0;eip=0x002d7b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 93699 add     ax, [bp+arg_6] ;~ 28F0:2D7B
cs=0x28f0;eip=0x002d7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 93700 mov     [bp+var_2], ax ;~ 28F0:2D7E
cs=0x28f0;eip=0x002d81; 	T(MOV(sp, bp));	// 93701 mov     sp, bp ;~ 28F0:2D81
cs=0x28f0;eip=0x002d83; 	X(POP(bp));	// 93702 pop     bp ;~ 28F0:2D83
cs=0x28f0;eip=0x002d84; 	R(RETN(0x0A));	// 93703 retn    0Ah ;~ 28F0:2D84
sub_3a267:
	// 93711 
#undef var_2
#define var_2 -2
	// 93714 var_2           = word ptr -2 ;~ 28F0:2D87
#undef arg_0
#define arg_0 4
	// 93715 arg_0           = word ptr  4 ;~ 28F0:2D87
#undef arg_2
#define arg_2 6
	// 93716 arg_2           = word ptr  6 ;~ 28F0:2D87
#undef arg_4
#define arg_4 8
	// 93717 arg_4           = word ptr  8 ;~ 28F0:2D87
#undef arg_6
#define arg_6 0x0A
	// 93718 arg_6           = word ptr  0Ah ;~ 28F0:2D87
#undef arg_8
#define arg_8 0x0C
	// 93719 arg_8           = word ptr  0Ch ;~ 28F0:2D87
cs=0x28f0;eip=0x002d87; 	X(PUSH(bp));	// 93721 push    bp ;~ 28F0:2D87
cs=0x28f0;eip=0x002d88; 	T(MOV(bp, sp));	// 93722 mov     bp, sp ;~ 28F0:2D88
cs=0x28f0;eip=0x002d8a; 	T(SUB(sp, 2));	// 93723 sub     sp, 2 ;~ 28F0:2D8A
cs=0x28f0;eip=0x002d8d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 93724 mov     ax, [bp+arg_2] ;~ 28F0:2D8D
cs=0x28f0;eip=0x002d90; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 93725 sub     ax, [bp+arg_6] ;~ 28F0:2D90
cs=0x28f0;eip=0x002d93; 	T(CWD);	// 93726 cwd ;~ 28F0:2D93
cs=0x28f0;eip=0x002d94; 	X(PUSH(dx));	// 93727 push    dx ;~ 28F0:2D94
cs=0x28f0;eip=0x002d95; 	X(PUSH(ax));	// 93728 push    ax ;~ 28F0:2D95
cs=0x28f0;eip=0x002d96; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 93729 mov     ax, [bp+arg_4] ;~ 28F0:2D96
cs=0x28f0;eip=0x002d99; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 93730 sub     ax, [bp+arg_8] ;~ 28F0:2D99
cs=0x28f0;eip=0x002d9c; 	T(CWD);	// 93731 cwd ;~ 28F0:2D9C
cs=0x28f0;eip=0x002d9d; 	X(PUSH(dx));	// 93732 push    dx ;~ 28F0:2D9D
cs=0x28f0;eip=0x002d9e; 	X(PUSH(ax));	// 93733 push    ax ;~ 28F0:2D9E
cs=0x28f0;eip=0x002d9f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 93734 mov     ax, [bp+arg_0] ;~ 28F0:2D9F
cs=0x28f0;eip=0x002da2; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_6))));	// 93735 sub     ax, [bp+arg_6] ;~ 28F0:2DA2
cs=0x28f0;eip=0x002da5; 	T(CWD);	// 93736 cwd ;~ 28F0:2DA5
cs=0x28f0;eip=0x002da6; 	X(PUSH(dx));	// 93737 push    dx ;~ 28F0:2DA6
cs=0x28f0;eip=0x002da7; 	X(PUSH(ax));	// 93738 push    ax ;~ 28F0:2DA7
cs=0x28f0;eip=0x002da8; 	R(CALLF(sub_105c2,0));	// 93739 call    sub_105C2 ;~ 28F0:2DA8
cs=0x28f0;eip=0x002dad; 	X(PUSH(dx));	// 93740 push    dx ;~ 28F0:2DAD
cs=0x28f0;eip=0x002dae; 	X(PUSH(ax));	// 93741 push    ax ;~ 28F0:2DAE
cs=0x28f0;eip=0x002daf; 	R(CALLF(sub_10526,0));	// 93742 call    sub_10526 ;~ 28F0:2DAF
cs=0x28f0;eip=0x002db4; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_8))));	// 93743 add     ax, [bp+arg_8] ;~ 28F0:2DB4
cs=0x28f0;eip=0x002db7; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 93744 mov     [bp+var_2], ax ;~ 28F0:2DB7
cs=0x28f0;eip=0x002dba; 	T(MOV(sp, bp));	// 93745 mov     sp, bp ;~ 28F0:2DBA
cs=0x28f0;eip=0x002dbc; 	X(POP(bp));	// 93746 pop     bp ;~ 28F0:2DBC
cs=0x28f0;eip=0x002dbd; 	R(RETN(0x0A));	// 93747 retn    0Ah ;~ 28F0:2DBD
sub_3a2a0:
	// 93755 
#undef var_14
#define var_14 -0x14
	// 93757 var_14          = dword ptr -14h ;~ 28F0:2DC0
#undef var_10
#define var_10 -0x10
	// 93758 var_10          = dword ptr -10h ;~ 28F0:2DC0
#undef var_c
#define var_c -0x0C
	// 93759 var_C           = word ptr -0Ch ;~ 28F0:2DC0
#undef var_a
#define var_a -0x0A
	// 93760 var_A           = word ptr -0Ah ;~ 28F0:2DC0
#undef var_8
#define var_8 -8
	// 93761 var_8           = word ptr -8 ;~ 28F0:2DC0
#undef var_6
#define var_6 -6
	// 93762 var_6           = word ptr -6 ;~ 28F0:2DC0
#undef var_4
#define var_4 -4
	// 93763 var_4           = word ptr -4 ;~ 28F0:2DC0
#undef var_2
#define var_2 -2
	// 93764 var_2           = word ptr -2 ;~ 28F0:2DC0
#undef arg_0
#define arg_0 4
	// 93765 arg_0           = dword ptr  4 ;~ 28F0:2DC0
#undef arg_4
#define arg_4 8
	// 93766 arg_4           = dword ptr  8 ;~ 28F0:2DC0
cs=0x28f0;eip=0x002dc0; 	X(PUSH(bp));	// 93768 push    bp ;~ 28F0:2DC0
cs=0x28f0;eip=0x002dc1; 	T(MOV(bp, sp));	// 93769 mov     bp, sp ;~ 28F0:2DC1
cs=0x28f0;eip=0x002dc3; 	T(SUB(sp, 0x14));	// 93770 sub     sp, 14h ;~ 28F0:2DC3
cs=0x28f0;eip=0x002dc6; 	X(PUSH(di));	// 93771 push    di ;~ 28F0:2DC6
cs=0x28f0;eip=0x002dc7; 	X(PUSH(si));	// 93772 push    si ;~ 28F0:2DC7
cs=0x28f0;eip=0x002dc8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 93773 les     bx, [bp+arg_4] ;~ 28F0:2DC8
cs=0x28f0;eip=0x002dcb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 93774 mov     ax, es:[bx+120h] ;~ 28F0:2DCB
cs=0x28f0;eip=0x002dd0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 93775 mov     dx, es:[bx+122h] ;~ 28F0:2DD0
cs=0x28f0;eip=0x002dd5; 	T(MOV(cl, 8));	// 93776 mov     cl, 8 ;~ 28F0:2DD5
cs=0x28f0;eip=0x002dd7; 	R(CALLF(sub_10240,0));	// 93777 call    sub_10240 ;~ 28F0:2DD7
cs=0x28f0;eip=0x002ddc; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 93778 mov     [bp+var_C], ax ;~ 28F0:2DDC
cs=0x28f0;eip=0x002ddf; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 93779 les     bx, [bp+arg_4] ;~ 28F0:2DDF
cs=0x28f0;eip=0x002de2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 93780 les     bx, es:[bx+31Ch] ;~ 28F0:2DE2
cs=0x28f0;eip=0x002de7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 93781 mov     ax, es:[bx+0Ah] ;~ 28F0:2DE7
cs=0x28f0;eip=0x002deb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 93782 mov     dx, es:[bx+0Ch] ;~ 28F0:2DEB
cs=0x28f0;eip=0x002def; 	T(MOV(cl, 8));	// 93783 mov     cl, 8 ;~ 28F0:2DEF
cs=0x28f0;eip=0x002df1; 	R(CALLF(sub_10240,0));	// 93784 call    sub_10240 ;~ 28F0:2DF1
cs=0x28f0;eip=0x002df6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 93785 mov     [bp+var_A], ax ;~ 28F0:2DF6
cs=0x28f0;eip=0x002df9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 93786 mov     [bp+var_8], dx ;~ 28F0:2DF9
cs=0x28f0;eip=0x002dfc; 	T(OR(dx, dx));	// 93787 or      dx, dx ;~ 28F0:2DFC
cs=0x28f0;eip=0x002dfe; 	R(JG(loc_3a2fa));	// 93788 jg      short loc_3A2FA ;~ 28F0:2DFE
cs=0x28f0;eip=0x002e00; 	R(JL(loc_3a2e7));	// 93789 jl      short loc_3A2E7 ;~ 28F0:2E00
cs=0x28f0;eip=0x002e02; 	T(CMP(ax, 0x32));	// 93790 cmp     ax, 32h ; '2' ;~ 28F0:2E02
cs=0x28f0;eip=0x002e05; 	R(JNC(loc_3a2fa));	// 93791 jnb     short loc_3A2FA ;~ 28F0:2E05
loc_3a2e7:
	// 10426 
cs=0x28f0;eip=0x002e07; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93794 les     bx, [bp+arg_0] ;~ 28F0:2E07
cs=0x28f0;eip=0x002e0a; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 93795 mov     ax, es:[bx+4] ;~ 28F0:2E0A
cs=0x28f0;eip=0x002e0e; 	T(SAR(ax, 1));	// 93796 sar     ax, 1 ;~ 28F0:2E0E
cs=0x28f0;eip=0x002e10; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_c))));	// 93797 cmp     ax, [bp+var_C] ;~ 28F0:2E10
cs=0x28f0;eip=0x002e13; 	R(JGE(loc_3a30c));	// 93798 jge     short loc_3A30C ;~ 28F0:2E13
loc_3a2f5:
	// 10427 
cs=0x28f0;eip=0x002e15; 	T(SUB(ax, ax));	// 93801 sub     ax, ax ;~ 28F0:2E15
cs=0x28f0;eip=0x002e17; 	R(JMP(loc_3a3bc));	// 93802 jmp     loc_3A3BC ;~ 28F0:2E17
loc_3a2fa:
	// 10428 
cs=0x28f0;eip=0x002e1a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93807 les     bx, [bp+arg_0] ;~ 28F0:2E1A
cs=0x28f0;eip=0x002e1d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 93808 mov     ax, [bp+var_C] ;~ 28F0:2E1D
cs=0x28f0;eip=0x002e20; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 93809 cmp     es:[bx+4], ax ;~ 28F0:2E20
cs=0x28f0;eip=0x002e24; 	R(JLE(loc_3a30c));	// 93810 jle     short loc_3A30C ;~ 28F0:2E24
loc_3a306:
	// 10429 
cs=0x28f0;eip=0x002e26; 	T(MOV(ax, 1));	// 93813 mov     ax, 1 ;~ 28F0:2E26
cs=0x28f0;eip=0x002e29; 	R(JMP(loc_3a3bc));	// 93814 jmp     loc_3A3BC ;~ 28F0:2E29
loc_3a30c:
	// 10430 
cs=0x28f0;eip=0x002e2c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93819 les     bx, [bp+arg_0] ;~ 28F0:2E2C
cs=0x28f0;eip=0x002e2f; 	T(MOV(al, *(raddr(es,bx+2))));	// 93820 mov     al, es:[bx+2] ;~ 28F0:2E2F
cs=0x28f0;eip=0x002e33; 	T(CBW);	// 93821 cbw ;~ 28F0:2E33
cs=0x28f0;eip=0x002e34; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 93822 mov     [bp+var_4], ax ;~ 28F0:2E34
cs=0x28f0;eip=0x002e37; 	T(OR(ax, ax));	// 93823 or      ax, ax ;~ 28F0:2E37
cs=0x28f0;eip=0x002e39; 	R(JZ(loc_3a344));	// 93824 jz      short loc_3A344 ;~ 28F0:2E39
cs=0x28f0;eip=0x002e3b; 	T(MOV(ax, 6));	// 93825 mov     ax, 6 ;~ 28F0:2E3B
cs=0x28f0;eip=0x002e3e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 93826 imul    [bp+var_4] ;~ 28F0:2E3E
cs=0x28f0;eip=0x002e41; 	T(ADD(ax, bx));	// 93827 add     ax, bx ;~ 28F0:2E41
cs=0x28f0;eip=0x002e43; 	T(MOV(dx, es));	// 93828 mov     dx, es ;~ 28F0:2E43
cs=0x28f0;eip=0x002e45; 	T(ADD(ax, 4));	// 93829 add     ax, 4 ;~ 28F0:2E45
cs=0x28f0;eip=0x002e48; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 93830 mov     word ptr [bp+var_10], ax ;~ 28F0:2E48
cs=0x28f0;eip=0x002e4b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 93831 mov     word ptr [bp+var_10+2], dx ;~ 28F0:2E4B
cs=0x28f0;eip=0x002e4e; 	T(MOV(si, *(dw*)(raddr(ss,bp+var_c))));	// 93832 mov     si, [bp+var_C] ;~ 28F0:2E4E
cs=0x28f0;eip=0x002e51; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_4))));	// 93833 mov     cx, [bp+var_4] ;~ 28F0:2E51
cs=0x28f0;eip=0x002e54; 	T(LES(di, *(dd*)(raddr(ss,bp+var_10))));	// 93834 les     di, [bp+var_10] ;~ 28F0:2E54
loc_3a337:
	// 10431 
cs=0x28f0;eip=0x002e57; 	T(CMP(*(dw*)(raddr(es,di)), si));	// 93837 cmp     es:[di], si ;~ 28F0:2E57
cs=0x28f0;eip=0x002e5a; 	R(JLE(loc_3a341));	// 93838 jle     short loc_3A341 ;~ 28F0:2E5A
cs=0x28f0;eip=0x002e5c; 	T(SUB(di, 6));	// 93839 sub     di, 6 ;~ 28F0:2E5C
cs=0x28f0;eip=0x002e5f; 	R(LOOP(loc_3a337));	// 93840 loop    loc_3A337 ;~ 28F0:2E5F
loc_3a341:
	// 10432 
cs=0x28f0;eip=0x002e61; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 93843 mov     [bp+var_4], cx ;~ 28F0:2E61
loc_3a344:
	// 10433 
cs=0x28f0;eip=0x002e64; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 93846 mov     ax, [bp+var_4] ;~ 28F0:2E64
cs=0x28f0;eip=0x002e67; 	T(INC(ax));	// 93847 inc     ax ;~ 28F0:2E67
cs=0x28f0;eip=0x002e68; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 93848 mov     [bp+var_6], ax ;~ 28F0:2E68
cs=0x28f0;eip=0x002e6b; 	T(MOV(ax, 6));	// 93849 mov     ax, 6 ;~ 28F0:2E6B
cs=0x28f0;eip=0x002e6e; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6))));	// 93850 imul    [bp+var_6] ;~ 28F0:2E6E
cs=0x28f0;eip=0x002e71; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93851 add     ax, word ptr [bp+arg_0] ;~ 28F0:2E71
cs=0x28f0;eip=0x002e74; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93852 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2E74
cs=0x28f0;eip=0x002e77; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 93853 mov     word ptr [bp+var_10], ax ;~ 28F0:2E77
cs=0x28f0;eip=0x002e7a; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 93854 mov     word ptr [bp+var_10+2], dx ;~ 28F0:2E7A
cs=0x28f0;eip=0x002e7d; 	T(MOV(ax, 6));	// 93855 mov     ax, 6 ;~ 28F0:2E7D
cs=0x28f0;eip=0x002e80; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 93856 imul    [bp+var_4] ;~ 28F0:2E80
cs=0x28f0;eip=0x002e83; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 93857 add     ax, word ptr [bp+arg_0] ;~ 28F0:2E83
cs=0x28f0;eip=0x002e86; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 93858 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2E86
cs=0x28f0;eip=0x002e89; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 93859 mov     word ptr [bp+var_14], ax ;~ 28F0:2E89
cs=0x28f0;eip=0x002e8c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 93860 mov     word ptr [bp+var_14+2], dx ;~ 28F0:2E8C
cs=0x28f0;eip=0x002e8f; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 93861 les     bx, [bp+var_14] ;~ 28F0:2E8F
cs=0x28f0;eip=0x002e92; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 93862 push    word ptr es:[bx+4] ;~ 28F0:2E92
cs=0x28f0;eip=0x002e96; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 93863 mov     ax, es:[bx+6] ;~ 28F0:2E96
cs=0x28f0;eip=0x002e9a; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 93864 mov     dx, es:[bx+8] ;~ 28F0:2E9A
cs=0x28f0;eip=0x002e9e; 	T(MOV(cl, 3));	// 93865 mov     cl, 3 ;~ 28F0:2E9E
cs=0x28f0;eip=0x002ea0; 	R(CALLF(sub_10240,0));	// 93866 call    sub_10240 ;~ 28F0:2EA0
cs=0x28f0;eip=0x002ea5; 	X(PUSH(ax));	// 93867 push    ax ;~ 28F0:2EA5
cs=0x28f0;eip=0x002ea6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 93868 les     bx, [bp+var_10] ;~ 28F0:2EA6
cs=0x28f0;eip=0x002ea9; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 93869 push    word ptr es:[bx+4] ;~ 28F0:2EA9
cs=0x28f0;eip=0x002ead; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 93870 mov     ax, es:[bx+6] ;~ 28F0:2EAD
cs=0x28f0;eip=0x002eb1; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 93871 mov     dx, es:[bx+8] ;~ 28F0:2EB1
cs=0x28f0;eip=0x002eb5; 	T(MOV(cl, 3));	// 93872 mov     cl, 3 ;~ 28F0:2EB5
cs=0x28f0;eip=0x002eb7; 	R(CALLF(sub_10240,0));	// 93873 call    sub_10240 ;~ 28F0:2EB7
cs=0x28f0;eip=0x002ebc; 	X(PUSH(ax));	// 93874 push    ax ;~ 28F0:2EBC
cs=0x28f0;eip=0x002ebd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 93875 mov     ax, [bp+var_A] ;~ 28F0:2EBD
cs=0x28f0;eip=0x002ec0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 93876 mov     dx, [bp+var_8] ;~ 28F0:2EC0
cs=0x28f0;eip=0x002ec3; 	T(MOV(cl, 3));	// 93877 mov     cl, 3 ;~ 28F0:2EC3
cs=0x28f0;eip=0x002ec5; 	R(CALLF(sub_10240,0));	// 93878 call    sub_10240 ;~ 28F0:2EC5
cs=0x28f0;eip=0x002eca; 	X(PUSH(ax));	// 93879 push    ax ;~ 28F0:2ECA
cs=0x28f0;eip=0x002ecb; 	R(CALL(sub_3a267,0));	// 93880 call    sub_3A267 ;~ 28F0:2ECB
cs=0x28f0;eip=0x002ece; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 93881 mov     [bp+var_2], ax ;~ 28F0:2ECE
cs=0x28f0;eip=0x002ed1; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 93882 cmp     [bp+var_C], ax ;~ 28F0:2ED1
cs=0x28f0;eip=0x002ed4; 	R(JL(loc_3a3b9));	// 93883 jl      short loc_3A3B9 ;~ 28F0:2ED4
cs=0x28f0;eip=0x002ed6; 	R(JMP(loc_3a2f5));	// 93884 jmp     loc_3A2F5 ;~ 28F0:2ED6
loc_3a3b9:
	// 10434 
cs=0x28f0;eip=0x002ed9; 	R(JMP(loc_3a306));	// 93888 jmp     loc_3A306 ;~ 28F0:2ED9
loc_3a3bc:
	// 10435 
cs=0x28f0;eip=0x002edc; 	X(POP(si));	// 93893 pop     si ;~ 28F0:2EDC
cs=0x28f0;eip=0x002edd; 	X(POP(di));	// 93894 pop     di ;~ 28F0:2EDD
cs=0x28f0;eip=0x002ede; 	T(MOV(sp, bp));	// 93895 mov     sp, bp ;~ 28F0:2EDE
cs=0x28f0;eip=0x002ee0; 	X(POP(bp));	// 93896 pop     bp ;~ 28F0:2EE0
cs=0x28f0;eip=0x002ee1; 	R(RETN(8));	// 93897 retn    8 ;~ 28F0:2EE1
sub_3a3c4:
	// 93905 
#undef var_18
#define var_18 -0x18
	// 93907 var_18          = dword ptr -18h ;~ 28F0:2EE4
#undef var_14
#define var_14 -0x14
	// 93908 var_14          = dword ptr -14h ;~ 28F0:2EE4
#undef var_e
#define var_e -0x0E
	// 93909 var_E           = word ptr -0Eh ;~ 28F0:2EE4
#undef var_c
#define var_c -0x0C
	// 93910 var_C           = word ptr -0Ch ;~ 28F0:2EE4
#undef var_a
#define var_a -0x0A
	// 93911 var_A           = word ptr -0Ah ;~ 28F0:2EE4
#undef var_8
#define var_8 -8
	// 93912 var_8           = word ptr -8 ;~ 28F0:2EE4
#undef var_6
#define var_6 -6
	// 93913 var_6           = word ptr -6 ;~ 28F0:2EE4
#undef var_4
#define var_4 -4
	// 93914 var_4           = word ptr -4 ;~ 28F0:2EE4
#undef var_2
#define var_2 -2
	// 93915 var_2           = word ptr -2 ;~ 28F0:2EE4
#undef arg_0
#define arg_0 4
	// 93916 arg_0           = dword ptr  4 ;~ 28F0:2EE4
#undef arg_4
#define arg_4 8
	// 93917 arg_4           = dword ptr  8 ;~ 28F0:2EE4
cs=0x28f0;eip=0x002ee4; 	X(PUSH(bp));	// 93919 push    bp ;~ 28F0:2EE4
cs=0x28f0;eip=0x002ee5; 	T(MOV(bp, sp));	// 93920 mov     bp, sp ;~ 28F0:2EE5
cs=0x28f0;eip=0x002ee7; 	T(SUB(sp, 0x18));	// 93921 sub     sp, 18h ;~ 28F0:2EE7
cs=0x28f0;eip=0x002eea; 	X(PUSH(di));	// 93922 push    di ;~ 28F0:2EEA
cs=0x28f0;eip=0x002eeb; 	X(PUSH(si));	// 93923 push    si ;~ 28F0:2EEB
cs=0x28f0;eip=0x002eec; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 93924 les     bx, [bp+arg_4] ;~ 28F0:2EEC
cs=0x28f0;eip=0x002eef; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 93925 les     bx, es:[bx+31Ch] ;~ 28F0:2EEF
cs=0x28f0;eip=0x002ef4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 93926 mov     ax, es:[bx+0Ah] ;~ 28F0:2EF4
cs=0x28f0;eip=0x002ef8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 93927 mov     dx, es:[bx+0Ch] ;~ 28F0:2EF8
cs=0x28f0;eip=0x002efc; 	T(MOV(cl, 8));	// 93928 mov     cl, 8 ;~ 28F0:2EFC
cs=0x28f0;eip=0x002efe; 	R(CALLF(sub_10240,0));	// 93929 call    sub_10240 ;~ 28F0:2EFE
cs=0x28f0;eip=0x002f03; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 93930 mov     [bp+var_8], ax ;~ 28F0:2F03
cs=0x28f0;eip=0x002f06; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 93931 mov     [bp+var_6], dx ;~ 28F0:2F06
cs=0x28f0;eip=0x002f09; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93932 les     bx, [bp+arg_0] ;~ 28F0:2F09
cs=0x28f0;eip=0x002f0c; 	T(MOV(al, 6));	// 93933 mov     al, 6 ;~ 28F0:2F0C
cs=0x28f0;eip=0x002f0e; 	X(IMUL1_1(*(raddr(es,bx+2))));	// 93934 imul    byte ptr es:[bx+2] ;~ 28F0:2F0E
cs=0x28f0;eip=0x002f12; 	T(MOV(si, ax));	// 93935 mov     si, ax ;~ 28F0:2F12
cs=0x28f0;eip=0x002f14; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 93936 mov     ax, [bp+var_8] ;~ 28F0:2F14
cs=0x28f0;eip=0x002f17; 	T(CMP(*(dw*)(raddr(es,bx+si+8)), dx));	// 93937 cmp     es:[bx+si+8], dx ;~ 28F0:2F17
cs=0x28f0;eip=0x002f1b; 	R(JG(loc_3a40b));	// 93938 jg      short loc_3A40B ;~ 28F0:2F1B
cs=0x28f0;eip=0x002f1d; 	R(JL(loc_3a405));	// 93939 jl      short loc_3A405 ;~ 28F0:2F1D
cs=0x28f0;eip=0x002f1f; 	T(CMP(*(dw*)(raddr(es,bx+si+6)), ax));	// 93940 cmp     es:[bx+si+6], ax ;~ 28F0:2F1F
cs=0x28f0;eip=0x002f23; 	R(JNC(loc_3a40b));	// 93941 jnb     short loc_3A40B ;~ 28F0:2F23
loc_3a405:
	// 10436 
cs=0x28f0;eip=0x002f25; 	T(MOV(ax, 2));	// 93945 mov     ax, 2 ;~ 28F0:2F25
cs=0x28f0;eip=0x002f28; 	R(JMP(loc_3a4fd));	// 93946 jmp     loc_3A4FD ;~ 28F0:2F28
loc_3a40b:
	// 10437 
cs=0x28f0;eip=0x002f2b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 93951 les     bx, [bp+arg_0] ;~ 28F0:2F2B
cs=0x28f0;eip=0x002f2e; 	T(MOV(al, *(raddr(es,bx+2))));	// 93952 mov     al, es:[bx+2] ;~ 28F0:2F2E
cs=0x28f0;eip=0x002f32; 	T(CBW);	// 93953 cbw ;~ 28F0:2F32
cs=0x28f0;eip=0x002f33; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 93954 mov     [bp+var_4], ax ;~ 28F0:2F33
cs=0x28f0;eip=0x002f36; 	T(MOV(al, *(raddr(es,bx+3))));	// 93955 mov     al, es:[bx+3] ;~ 28F0:2F36
cs=0x28f0;eip=0x002f3a; 	T(CBW);	// 93956 cbw ;~ 28F0:2F3A
cs=0x28f0;eip=0x002f3b; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 93957 cmp     ax, [bp+var_4] ;~ 28F0:2F3B
cs=0x28f0;eip=0x002f3e; 	R(JZ(loc_3a45a));	// 93958 jz      short loc_3A45A ;~ 28F0:2F3E
cs=0x28f0;eip=0x002f40; 	T(CBW);	// 93959 cbw ;~ 28F0:2F40
cs=0x28f0;eip=0x002f41; 	T(MOV(si, ax));	// 93960 mov     si, ax ;~ 28F0:2F41
cs=0x28f0;eip=0x002f43; 	T(MOV(ax, 6));	// 93961 mov     ax, 6 ;~ 28F0:2F43
cs=0x28f0;eip=0x002f46; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 93962 imul    [bp+var_4] ;~ 28F0:2F46
cs=0x28f0;eip=0x002f49; 	T(ADD(ax, bx));	// 93963 add     ax, bx ;~ 28F0:2F49
cs=0x28f0;eip=0x002f4b; 	T(MOV(dx, es));	// 93964 mov     dx, es ;~ 28F0:2F4B
cs=0x28f0;eip=0x002f4d; 	T(ADD(ax, 6));	// 93965 add     ax, 6 ;~ 28F0:2F4D
cs=0x28f0;eip=0x002f50; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 93966 mov     word ptr [bp+var_14], ax ;~ 28F0:2F50
cs=0x28f0;eip=0x002f53; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 93967 mov     word ptr [bp+var_14+2], dx ;~ 28F0:2F53
cs=0x28f0;eip=0x002f56; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_4))));	// 93968 mov     cx, [bp+var_4] ;~ 28F0:2F56
cs=0x28f0;eip=0x002f59; 	T(LES(di, *(dd*)(raddr(ss,bp+var_14))));	// 93969 les     di, [bp+var_14] ;~ 28F0:2F59
loc_3a43c:
	// 10438 
cs=0x28f0;eip=0x002f5c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 93972 mov     ax, [bp+var_8] ;~ 28F0:2F5C
cs=0x28f0;eip=0x002f5f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 93973 mov     dx, [bp+var_6] ;~ 28F0:2F5F
cs=0x28f0;eip=0x002f62; 	T(CMP(*(dw*)(raddr(es,di+2)), dx));	// 93974 cmp     es:[di+2], dx ;~ 28F0:2F62
cs=0x28f0;eip=0x002f66; 	R(JL(loc_3a457));	// 93975 jl      short loc_3A457 ;~ 28F0:2F66
cs=0x28f0;eip=0x002f68; 	R(JG(loc_3a44f));	// 93976 jg      short loc_3A44F ;~ 28F0:2F68
cs=0x28f0;eip=0x002f6a; 	T(CMP(*(dw*)(raddr(es,di)), ax));	// 93977 cmp     es:[di], ax ;~ 28F0:2F6A
cs=0x28f0;eip=0x002f6d; 	R(JBE(loc_3a457));	// 93978 jbe     short loc_3A457 ;~ 28F0:2F6D
loc_3a44f:
	// 10439 
cs=0x28f0;eip=0x002f6f; 	T(ADD(di, 6));	// 93981 add     di, 6 ;~ 28F0:2F6F
cs=0x28f0;eip=0x002f72; 	T(INC(cx));	// 93982 inc     cx ;~ 28F0:2F72
cs=0x28f0;eip=0x002f73; 	T(CMP(cx, si));	// 93983 cmp     cx, si ;~ 28F0:2F73
cs=0x28f0;eip=0x002f75; 	R(JNZ(loc_3a43c));	// 93984 jnz     short loc_3A43C ;~ 28F0:2F75
loc_3a457:
	// 10440 
cs=0x28f0;eip=0x002f77; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 93988 mov     [bp+var_4], cx ;~ 28F0:2F77
loc_3a45a:
	// 10441 
cs=0x28f0;eip=0x002f7a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 93991 mov     ax, [bp+var_4] ;~ 28F0:2F7A
cs=0x28f0;eip=0x002f7d; 	T(DEC(ax));	// 93992 dec     ax ;~ 28F0:2F7D
cs=0x28f0;eip=0x002f7e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 93993 mov     [bp+var_2], ax ;~ 28F0:2F7E
cs=0x28f0;eip=0x002f81; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 93994 les     bx, [bp+arg_4] ;~ 28F0:2F81
cs=0x28f0;eip=0x002f84; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 93995 mov     ax, es:[bx+120h] ;~ 28F0:2F84
cs=0x28f0;eip=0x002f89; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 93996 mov     dx, es:[bx+122h] ;~ 28F0:2F89
cs=0x28f0;eip=0x002f8e; 	T(MOV(cl, 8));	// 93997 mov     cl, 8 ;~ 28F0:2F8E
cs=0x28f0;eip=0x002f90; 	R(CALLF(sub_10240,0));	// 93998 call    sub_10240 ;~ 28F0:2F90
cs=0x28f0;eip=0x002f95; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 93999 mov     [bp+var_E], ax ;~ 28F0:2F95
cs=0x28f0;eip=0x002f98; 	T(MOV(ax, 6));	// 94000 mov     ax, 6 ;~ 28F0:2F98
cs=0x28f0;eip=0x002f9b; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 94001 imul    [bp+var_4] ;~ 28F0:2F9B
cs=0x28f0;eip=0x002f9e; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94002 add     ax, word ptr [bp+arg_0] ;~ 28F0:2F9E
cs=0x28f0;eip=0x002fa1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94003 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2FA1
cs=0x28f0;eip=0x002fa4; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 94004 mov     word ptr [bp+var_14], ax ;~ 28F0:2FA4
cs=0x28f0;eip=0x002fa7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 94005 mov     word ptr [bp+var_14+2], dx ;~ 28F0:2FA7
cs=0x28f0;eip=0x002faa; 	T(MOV(ax, 6));	// 94006 mov     ax, 6 ;~ 28F0:2FAA
cs=0x28f0;eip=0x002fad; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_2))));	// 94007 imul    [bp+var_2] ;~ 28F0:2FAD
cs=0x28f0;eip=0x002fb0; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94008 add     ax, word ptr [bp+arg_0] ;~ 28F0:2FB0
cs=0x28f0;eip=0x002fb3; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94009 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:2FB3
cs=0x28f0;eip=0x002fb6; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18))), ax));	// 94010 mov     word ptr [bp+var_18], ax ;~ 28F0:2FB6
cs=0x28f0;eip=0x002fb9; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_18+2))), dx));	// 94011 mov     word ptr [bp+var_18+2], dx ;~ 28F0:2FB9
cs=0x28f0;eip=0x002fbc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_18))));	// 94012 les     bx, [bp+var_18] ;~ 28F0:2FBC
cs=0x28f0;eip=0x002fbf; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94013 push    word ptr es:[bx+4] ;~ 28F0:2FBF
cs=0x28f0;eip=0x002fc3; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94014 mov     ax, es:[bx+6] ;~ 28F0:2FC3
cs=0x28f0;eip=0x002fc7; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94015 mov     dx, es:[bx+8] ;~ 28F0:2FC7
cs=0x28f0;eip=0x002fcb; 	T(MOV(cl, 3));	// 94016 mov     cl, 3 ;~ 28F0:2FCB
cs=0x28f0;eip=0x002fcd; 	R(CALLF(sub_10240,0));	// 94017 call    sub_10240 ;~ 28F0:2FCD
cs=0x28f0;eip=0x002fd2; 	X(PUSH(ax));	// 94018 push    ax ;~ 28F0:2FD2
cs=0x28f0;eip=0x002fd3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 94019 les     bx, [bp+var_14] ;~ 28F0:2FD3
cs=0x28f0;eip=0x002fd6; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94020 push    word ptr es:[bx+4] ;~ 28F0:2FD6
cs=0x28f0;eip=0x002fda; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94021 mov     ax, es:[bx+6] ;~ 28F0:2FDA
cs=0x28f0;eip=0x002fde; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94022 mov     dx, es:[bx+8] ;~ 28F0:2FDE
cs=0x28f0;eip=0x002fe2; 	T(MOV(cl, 3));	// 94023 mov     cl, 3 ;~ 28F0:2FE2
cs=0x28f0;eip=0x002fe4; 	R(CALLF(sub_10240,0));	// 94024 call    sub_10240 ;~ 28F0:2FE4
cs=0x28f0;eip=0x002fe9; 	X(PUSH(ax));	// 94025 push    ax ;~ 28F0:2FE9
cs=0x28f0;eip=0x002fea; 	X(PUSH(*(dw*)(raddr(ss,bp+var_e))));	// 94026 push    [bp+var_E] ;~ 28F0:2FEA
cs=0x28f0;eip=0x002fed; 	R(CALL(sub_3a22e,0));	// 94027 call    sub_3A22E ;~ 28F0:2FED
cs=0x28f0;eip=0x002ff0; 	T(CWD);	// 94028 cwd ;~ 28F0:2FF0
cs=0x28f0;eip=0x002ff1; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 94029 mov     [bp+var_C], ax ;~ 28F0:2FF1
cs=0x28f0;eip=0x002ff4; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 94030 mov     [bp+var_A], dx ;~ 28F0:2FF4
cs=0x28f0;eip=0x002ff7; 	T(MOV(al, 3));	// 94031 mov     al, 3 ;~ 28F0:2FF7
cs=0x28f0;eip=0x002ff9; 	X(PUSH(ax));	// 94032 push    ax ;~ 28F0:2FF9
cs=0x28f0;eip=0x002ffa; 	T(ax = bp+var_c);	// 94033 lea     ax, [bp+var_C] ;~ 28F0:2FFA
cs=0x28f0;eip=0x002ffd; 	X(PUSH(ax));	// 94034 push    ax ;~ 28F0:2FFD
cs=0x28f0;eip=0x002ffe; 	R(CALLF(sub_10626,0));	// 94035 call    sub_10626 ;~ 28F0:2FFE
cs=0x28f0;eip=0x003003; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 94036 mov     ax, [bp+var_C] ;~ 28F0:3003
cs=0x28f0;eip=0x003006; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 94037 mov     dx, [bp+var_A] ;~ 28F0:3006
cs=0x28f0;eip=0x003009; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94038 cmp     [bp+var_6], dx ;~ 28F0:3009
cs=0x28f0;eip=0x00300c; 	R(JL(loc_3a4fb));	// 94039 jl      short loc_3A4FB ;~ 28F0:300C
cs=0x28f0;eip=0x00300e; 	R(JLE(loc_3a4f3));	// 94040 jle     short loc_3A4F3 ;~ 28F0:300E
cs=0x28f0;eip=0x003010; 	R(JMP(loc_3a405));	// 94041 jmp     loc_3A405 ;~ 28F0:3010
loc_3a4f3:
	// 10442 
cs=0x28f0;eip=0x003013; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94045 cmp     [bp+var_8], ax ;~ 28F0:3013
cs=0x28f0;eip=0x003016; 	R(JBE(loc_3a4fb));	// 94046 jbe     short loc_3A4FB ;~ 28F0:3016
cs=0x28f0;eip=0x003018; 	R(JMP(loc_3a405));	// 94047 jmp     loc_3A405 ;~ 28F0:3018
loc_3a4fb:
	// 10443 
cs=0x28f0;eip=0x00301b; 	T(SUB(ax, ax));	// 94052 sub     ax, ax ;~ 28F0:301B
loc_3a4fd:
	// 10444 
cs=0x28f0;eip=0x00301d; 	X(POP(si));	// 94055 pop     si ;~ 28F0:301D
cs=0x28f0;eip=0x00301e; 	X(POP(di));	// 94056 pop     di ;~ 28F0:301E
cs=0x28f0;eip=0x00301f; 	T(MOV(sp, bp));	// 94057 mov     sp, bp ;~ 28F0:301F
cs=0x28f0;eip=0x003021; 	X(POP(bp));	// 94058 pop     bp ;~ 28F0:3021
cs=0x28f0;eip=0x003022; 	R(RETN(8));	// 94059 retn    8 ;~ 28F0:3022
sub_3a505:
	// 94067 
#undef var_16
#define var_16 -0x16
	// 94069 var_16          = dword ptr -16h ;~ 28F0:3025
#undef var_12
#define var_12 -0x12
	// 94070 var_12          = dword ptr -12h ;~ 28F0:3025
#undef var_c
#define var_c -0x0C
	// 94071 var_C           = word ptr -0Ch ;~ 28F0:3025
#undef var_a
#define var_a -0x0A
	// 94072 var_A           = word ptr -0Ah ;~ 28F0:3025
#undef var_8
#define var_8 -8
	// 94073 var_8           = word ptr -8 ;~ 28F0:3025
#undef var_6
#define var_6 -6
	// 94074 var_6           = word ptr -6 ;~ 28F0:3025
#undef var_4
#define var_4 -4
	// 94075 var_4           = word ptr -4 ;~ 28F0:3025
#undef var_2
#define var_2 -2
	// 94076 var_2           = word ptr -2 ;~ 28F0:3025
#undef arg_0
#define arg_0 4
	// 94077 arg_0           = dword ptr  4 ;~ 28F0:3025
#undef arg_4
#define arg_4 8
	// 94078 arg_4           = dword ptr  8 ;~ 28F0:3025
cs=0x28f0;eip=0x003025; 	X(PUSH(bp));	// 94080 push    bp ;~ 28F0:3025
cs=0x28f0;eip=0x003026; 	T(MOV(bp, sp));	// 94081 mov     bp, sp ;~ 28F0:3026
cs=0x28f0;eip=0x003028; 	T(SUB(sp, 0x16));	// 94082 sub     sp, 16h ;~ 28F0:3028
cs=0x28f0;eip=0x00302b; 	X(PUSH(di));	// 94083 push    di ;~ 28F0:302B
cs=0x28f0;eip=0x00302c; 	X(PUSH(si));	// 94084 push    si ;~ 28F0:302C
cs=0x28f0;eip=0x00302d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 94085 les     bx, [bp+arg_4] ;~ 28F0:302D
cs=0x28f0;eip=0x003030; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 94086 mov     ax, es:[bx+120h] ;~ 28F0:3030
cs=0x28f0;eip=0x003035; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 94087 mov     dx, es:[bx+122h] ;~ 28F0:3035
cs=0x28f0;eip=0x00303a; 	T(MOV(cl, 8));	// 94088 mov     cl, 8 ;~ 28F0:303A
cs=0x28f0;eip=0x00303c; 	R(CALLF(sub_10240,0));	// 94089 call    sub_10240 ;~ 28F0:303C
cs=0x28f0;eip=0x003041; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 94090 mov     [bp+var_C], ax ;~ 28F0:3041
cs=0x28f0;eip=0x003044; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94091 les     bx, [bp+arg_0] ;~ 28F0:3044
cs=0x28f0;eip=0x003047; 	T(MOV(al, 6));	// 94092 mov     al, 6 ;~ 28F0:3047
cs=0x28f0;eip=0x003049; 	X(IMUL1_1(*(raddr(es,bx+3))));	// 94093 imul    byte ptr es:[bx+3] ;~ 28F0:3049
cs=0x28f0;eip=0x00304d; 	T(MOV(si, ax));	// 94094 mov     si, ax ;~ 28F0:304D
cs=0x28f0;eip=0x00304f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 94095 mov     ax, [bp+var_C] ;~ 28F0:304F
cs=0x28f0;eip=0x003052; 	T(CMP(*(dw*)(raddr(es,bx+si+4)), ax));	// 94096 cmp     es:[bx+si+4], ax ;~ 28F0:3052
cs=0x28f0;eip=0x003056; 	R(JGE(loc_3a53e));	// 94097 jge     short loc_3A53E ;~ 28F0:3056
loc_3a538:
	// 10445 
cs=0x28f0;eip=0x003058; 	T(MOV(ax, 3));	// 94100 mov     ax, 3 ;~ 28F0:3058
cs=0x28f0;eip=0x00305b; 	R(JMP(loc_3a61c));	// 94101 jmp     loc_3A61C ;~ 28F0:305B
loc_3a53e:
	// 10446 
cs=0x28f0;eip=0x00305e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94105 les     bx, [bp+arg_0] ;~ 28F0:305E
cs=0x28f0;eip=0x003061; 	T(MOV(al, *(raddr(es,bx+3))));	// 94106 mov     al, es:[bx+3] ;~ 28F0:3061
cs=0x28f0;eip=0x003065; 	T(CBW);	// 94107 cbw ;~ 28F0:3065
cs=0x28f0;eip=0x003066; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 94108 mov     [bp+var_4], ax ;~ 28F0:3066
cs=0x28f0;eip=0x003069; 	T(MOV(al, *(raddr(es,bx+1))));	// 94109 mov     al, es:[bx+1] ;~ 28F0:3069
cs=0x28f0;eip=0x00306d; 	T(CBW);	// 94110 cbw ;~ 28F0:306D
cs=0x28f0;eip=0x00306e; 	T(DEC(ax));	// 94111 dec     ax ;~ 28F0:306E
cs=0x28f0;eip=0x00306f; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94112 cmp     ax, [bp+var_4] ;~ 28F0:306F
cs=0x28f0;eip=0x003072; 	R(JZ(loc_3a588));	// 94113 jz      short loc_3A588 ;~ 28F0:3072
cs=0x28f0;eip=0x003074; 	T(MOV(al, *(raddr(es,bx+1))));	// 94114 mov     al, es:[bx+1] ;~ 28F0:3074
cs=0x28f0;eip=0x003078; 	T(CBW);	// 94115 cbw ;~ 28F0:3078
cs=0x28f0;eip=0x003079; 	T(MOV(si, ax));	// 94116 mov     si, ax ;~ 28F0:3079
cs=0x28f0;eip=0x00307b; 	T(DEC(si));	// 94117 dec     si ;~ 28F0:307B
cs=0x28f0;eip=0x00307c; 	T(MOV(ax, 6));	// 94118 mov     ax, 6 ;~ 28F0:307C
cs=0x28f0;eip=0x00307f; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 94119 imul    [bp+var_4] ;~ 28F0:307F
cs=0x28f0;eip=0x003082; 	T(ADD(ax, bx));	// 94120 add     ax, bx ;~ 28F0:3082
cs=0x28f0;eip=0x003084; 	T(MOV(dx, es));	// 94121 mov     dx, es ;~ 28F0:3084
cs=0x28f0;eip=0x003086; 	T(ADD(ax, 4));	// 94122 add     ax, 4 ;~ 28F0:3086
cs=0x28f0;eip=0x003089; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12))), ax));	// 94123 mov     word ptr [bp+var_12], ax ;~ 28F0:3089
cs=0x28f0;eip=0x00308c; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12+2))), dx));	// 94124 mov     word ptr [bp+var_12+2], dx ;~ 28F0:308C
cs=0x28f0;eip=0x00308f; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_4))));	// 94125 mov     cx, [bp+var_4] ;~ 28F0:308F
cs=0x28f0;eip=0x003092; 	T(LES(di, *(dd*)(raddr(ss,bp+var_12))));	// 94126 les     di, [bp+var_12] ;~ 28F0:3092
loc_3a575:
	// 10447 
cs=0x28f0;eip=0x003095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 94129 mov     ax, [bp+var_C] ;~ 28F0:3095
cs=0x28f0;eip=0x003098; 	T(CMP(*(dw*)(raddr(es,di)), ax));	// 94130 cmp     es:[di], ax ;~ 28F0:3098
cs=0x28f0;eip=0x00309b; 	R(JLE(loc_3a585));	// 94131 jle     short loc_3A585 ;~ 28F0:309B
cs=0x28f0;eip=0x00309d; 	T(ADD(di, 6));	// 94132 add     di, 6 ;~ 28F0:309D
cs=0x28f0;eip=0x0030a0; 	T(INC(cx));	// 94133 inc     cx ;~ 28F0:30A0
cs=0x28f0;eip=0x0030a1; 	T(CMP(cx, si));	// 94134 cmp     cx, si ;~ 28F0:30A1
cs=0x28f0;eip=0x0030a3; 	R(JNZ(loc_3a575));	// 94135 jnz     short loc_3A575 ;~ 28F0:30A3
loc_3a585:
	// 10448 
cs=0x28f0;eip=0x0030a5; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), cx));	// 94138 mov     [bp+var_4], cx ;~ 28F0:30A5
loc_3a588:
	// 10449 
cs=0x28f0;eip=0x0030a8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94141 mov     ax, [bp+var_4] ;~ 28F0:30A8
cs=0x28f0;eip=0x0030ab; 	T(DEC(ax));	// 94142 dec     ax ;~ 28F0:30AB
cs=0x28f0;eip=0x0030ac; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 94143 mov     [bp+var_6], ax ;~ 28F0:30AC
cs=0x28f0;eip=0x0030af; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 94144 les     bx, [bp+arg_4] ;~ 28F0:30AF
cs=0x28f0;eip=0x0030b2; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 94145 les     bx, es:[bx+31Ch] ;~ 28F0:30B2
cs=0x28f0;eip=0x0030b7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 94146 mov     ax, es:[bx+0Ah] ;~ 28F0:30B7
cs=0x28f0;eip=0x0030bb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 94147 mov     dx, es:[bx+0Ch] ;~ 28F0:30BB
cs=0x28f0;eip=0x0030bf; 	T(MOV(cl, 8));	// 94148 mov     cl, 8 ;~ 28F0:30BF
cs=0x28f0;eip=0x0030c1; 	R(CALLF(sub_10240,0));	// 94149 call    sub_10240 ;~ 28F0:30C1
cs=0x28f0;eip=0x0030c6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 94150 mov     [bp+var_A], ax ;~ 28F0:30C6
cs=0x28f0;eip=0x0030c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 94151 mov     [bp+var_8], dx ;~ 28F0:30C9
cs=0x28f0;eip=0x0030cc; 	T(MOV(ax, 6));	// 94152 mov     ax, 6 ;~ 28F0:30CC
cs=0x28f0;eip=0x0030cf; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6))));	// 94153 imul    [bp+var_6] ;~ 28F0:30CF
cs=0x28f0;eip=0x0030d2; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94154 add     ax, word ptr [bp+arg_0] ;~ 28F0:30D2
cs=0x28f0;eip=0x0030d5; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94155 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:30D5
cs=0x28f0;eip=0x0030d8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12))), ax));	// 94156 mov     word ptr [bp+var_12], ax ;~ 28F0:30D8
cs=0x28f0;eip=0x0030db; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_12+2))), dx));	// 94157 mov     word ptr [bp+var_12+2], dx ;~ 28F0:30DB
cs=0x28f0;eip=0x0030de; 	T(MOV(ax, 6));	// 94158 mov     ax, 6 ;~ 28F0:30DE
cs=0x28f0;eip=0x0030e1; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_4))));	// 94159 imul    [bp+var_4] ;~ 28F0:30E1
cs=0x28f0;eip=0x0030e4; 	T(ADD(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94160 add     ax, word ptr [bp+arg_0] ;~ 28F0:30E4
cs=0x28f0;eip=0x0030e7; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94161 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:30E7
cs=0x28f0;eip=0x0030ea; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16))), ax));	// 94162 mov     word ptr [bp+var_16], ax ;~ 28F0:30EA
cs=0x28f0;eip=0x0030ed; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_16+2))), dx));	// 94163 mov     word ptr [bp+var_16+2], dx ;~ 28F0:30ED
cs=0x28f0;eip=0x0030f0; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_16))));	// 94164 les     bx, [bp+var_16] ;~ 28F0:30F0
cs=0x28f0;eip=0x0030f3; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94165 push    word ptr es:[bx+4] ;~ 28F0:30F3
cs=0x28f0;eip=0x0030f7; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94166 mov     ax, es:[bx+6] ;~ 28F0:30F7
cs=0x28f0;eip=0x0030fb; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94167 mov     dx, es:[bx+8] ;~ 28F0:30FB
cs=0x28f0;eip=0x0030ff; 	T(MOV(cl, 3));	// 94168 mov     cl, 3 ;~ 28F0:30FF
cs=0x28f0;eip=0x003101; 	R(CALLF(sub_10240,0));	// 94169 call    sub_10240 ;~ 28F0:3101
cs=0x28f0;eip=0x003106; 	X(PUSH(ax));	// 94170 push    ax ;~ 28F0:3106
cs=0x28f0;eip=0x003107; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_12))));	// 94171 les     bx, [bp+var_12] ;~ 28F0:3107
cs=0x28f0;eip=0x00310a; 	X(PUSH(*(dw*)(raddr(es,bx+4))));	// 94172 push    word ptr es:[bx+4] ;~ 28F0:310A
cs=0x28f0;eip=0x00310e; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 94173 mov     ax, es:[bx+6] ;~ 28F0:310E
cs=0x28f0;eip=0x003112; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 94174 mov     dx, es:[bx+8] ;~ 28F0:3112
cs=0x28f0;eip=0x003116; 	T(MOV(cl, 3));	// 94175 mov     cl, 3 ;~ 28F0:3116
cs=0x28f0;eip=0x003118; 	R(CALLF(sub_10240,0));	// 94176 call    sub_10240 ;~ 28F0:3118
cs=0x28f0;eip=0x00311d; 	X(PUSH(ax));	// 94177 push    ax ;~ 28F0:311D
cs=0x28f0;eip=0x00311e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 94178 mov     ax, [bp+var_A] ;~ 28F0:311E
cs=0x28f0;eip=0x003121; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 94179 mov     dx, [bp+var_8] ;~ 28F0:3121
cs=0x28f0;eip=0x003124; 	T(MOV(cl, 3));	// 94180 mov     cl, 3 ;~ 28F0:3124
cs=0x28f0;eip=0x003126; 	R(CALLF(sub_10240,0));	// 94181 call    sub_10240 ;~ 28F0:3126
cs=0x28f0;eip=0x00312b; 	X(PUSH(ax));	// 94182 push    ax ;~ 28F0:312B
cs=0x28f0;eip=0x00312c; 	R(CALL(sub_3a267,0));	// 94183 call    sub_3A267 ;~ 28F0:312C
cs=0x28f0;eip=0x00312f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 94184 mov     [bp+var_2], ax ;~ 28F0:312F
cs=0x28f0;eip=0x003132; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), ax));	// 94185 cmp     [bp+var_C], ax ;~ 28F0:3132
cs=0x28f0;eip=0x003135; 	R(JLE(loc_3a61a));	// 94186 jle     short loc_3A61A ;~ 28F0:3135
cs=0x28f0;eip=0x003137; 	R(JMP(loc_3a538));	// 94187 jmp     loc_3A538 ;~ 28F0:3137
loc_3a61a:
	// 10450 
cs=0x28f0;eip=0x00313a; 	T(SUB(ax, ax));	// 94191 sub     ax, ax ;~ 28F0:313A
loc_3a61c:
	// 10451 
cs=0x28f0;eip=0x00313c; 	X(POP(si));	// 94194 pop     si ;~ 28F0:313C
cs=0x28f0;eip=0x00313d; 	X(POP(di));	// 94195 pop     di ;~ 28F0:313D
cs=0x28f0;eip=0x00313e; 	T(MOV(sp, bp));	// 94196 mov     sp, bp ;~ 28F0:313E
cs=0x28f0;eip=0x003140; 	X(POP(bp));	// 94197 pop     bp ;~ 28F0:3140
cs=0x28f0;eip=0x003141; 	R(RETN(8));	// 94198 retn    8 ;~ 28F0:3141
sub_3a624:
	// 94206 
#undef var_56
#define var_56 -0x56
	// 94209 var_56          = dword ptr -56h ;~ 28F0:3144
#undef var_52
#define var_52 -0x52
	// 94210 var_52          = byte ptr -52h ;~ 28F0:3144
#undef var_2
#define var_2 -2
	// 94211 var_2           = byte ptr -2 ;~ 28F0:3144
#undef arg_0
#define arg_0 4
	// 94212 arg_0           = dword ptr  4 ;~ 28F0:3144
cs=0x28f0;eip=0x003144; 	X(PUSH(bp));	// 94214 push    bp ;~ 28F0:3144
cs=0x28f0;eip=0x003145; 	T(MOV(bp, sp));	// 94215 mov     bp, sp ;~ 28F0:3145
cs=0x28f0;eip=0x003147; 	T(SUB(sp, 0x56));	// 94216 sub     sp, 56h ;~ 28F0:3147
cs=0x28f0;eip=0x00314a; 	X(PUSH(di));	// 94217 push    di ;~ 28F0:314A
cs=0x28f0;eip=0x00314b; 	X(PUSH(si));	// 94218 push    si ;~ 28F0:314B
cs=0x28f0;eip=0x00314c; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94219 mov     bx, word ptr [bp+arg_0] ;~ 28F0:314C
cs=0x28f0;eip=0x00314f; 	T(MOV(cx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94220 mov     cx, word ptr [bp+arg_0+2] ;~ 28F0:314F
cs=0x28f0;eip=0x003152; 	T(ADD(bx, 0x308));	// 94221 add     bx, 308h ;~ 28F0:3152
cs=0x28f0;eip=0x003156; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), bx));	// 94222 mov     word ptr [bp+var_56], bx ;~ 28F0:3156
cs=0x28f0;eip=0x003159; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), cx));	// 94223 mov     word ptr [bp+var_56+2], cx ;~ 28F0:3159
cs=0x28f0;eip=0x00315c; 	T(si = bp+var_52);	// 94224 lea     si, [bp+var_52] ;~ 28F0:315C
cs=0x28f0;eip=0x00315f; 	T(LES(di, *(dd*)(raddr(ss,bp+var_56))));	// 94225 les     di, [bp+var_56] ;~ 28F0:315F
cs=0x28f0;eip=0x003162; 	T(MOV(cx, 0x0FFFF));	// 94226 mov     cx, 0FFFFh ;~ 28F0:3162
cs=0x28f0;eip=0x003165; 	T(XOR(ax, ax));	// 94227 xor     ax, ax ;~ 28F0:3165
	// 94228 repne scasb ;~ 28F0:3167
cs=0x28f0;eip=0x003167; 	T(	REPNE SCASB);	// 94228 repne scasb ;~ 28F0:3167
cs=0x28f0;eip=0x003169; 	T(NOT(cx));	// 94229 not     cx ;~ 28F0:3169
cs=0x28f0;eip=0x00316b; 	T(SUB(di, cx));	// 94230 sub     di, cx ;~ 28F0:316B
cs=0x28f0;eip=0x00316d; 	T(XCHG(di, si));	// 94231 xchg    di, si ;~ 28F0:316D
cs=0x28f0;eip=0x00316f; 	T(MOV(dx, ds));	// 94232 mov     dx, ds ;~ 28F0:316F
cs=0x28f0;eip=0x003171; 	X(PUSH(es));	// 94233 push    es ;~ 28F0:3171
cs=0x28f0;eip=0x003172; 	T(MOV(es, dx));	// 94234 mov     es, dx ;~ 28F0:3172
cs=0x28f0;eip=0x003174; 	X(POP(ds));	// 94236 pop     ds ;~ 28F0:3174
cs=0x28f0;eip=0x003175; 	T(SHR(cx, 1));	// 94237 shr     cx, 1 ;~ 28F0:3175
	// 94238 repne movsw ;~ 28F0:3177
cs=0x28f0;eip=0x003177; 	X(	REPNE MOVSW);	// 94238 repne movsw ;~ 28F0:3177
cs=0x28f0;eip=0x003179; 	T(ADC(cx, cx));	// 94239 adc     cx, cx ;~ 28F0:3179
	// 94240 repne movsb ;~ 28F0:317B
cs=0x28f0;eip=0x00317b; 	X(	REPNE MOVSB);	// 94240 repne movsb ;~ 28F0:317B
cs=0x28f0;eip=0x00317d; 	T(MOV(ds, dx));	// 94241 mov     ds, dx ;~ 28F0:317D
cs=0x28f0;eip=0x00317f; 	T(MOV(di, 0x2B1E));	// 94242 mov     di, 2B1Eh ;~ 28F0:317F
cs=0x28f0;eip=0x003182; 	T(si = bp+var_52);	// 94243 lea     si, [bp+var_52] ;~ 28F0:3182
cs=0x28f0;eip=0x003185; 	T(MOV(ax, ds));	// 94244 mov     ax, ds ;~ 28F0:3185
cs=0x28f0;eip=0x003187; 	T(MOV(cx, 0x0FFFF));	// 94245 mov     cx, 0FFFFh ;~ 28F0:3187
cs=0x28f0;eip=0x00318a; 	T(XOR(ax, ax));	// 94246 xor     ax, ax ;~ 28F0:318A
	// 94247 repne scasb ;~ 28F0:318C
cs=0x28f0;eip=0x00318c; 	T(	REPNE SCASB);	// 94247 repne scasb ;~ 28F0:318C
cs=0x28f0;eip=0x00318e; 	T(NOT(cx));	// 94248 not     cx ;~ 28F0:318E
cs=0x28f0;eip=0x003190; 	T(SUB(di, cx));	// 94249 sub     di, cx ;~ 28F0:3190
cs=0x28f0;eip=0x003192; 	T(MOV(bx, cx));	// 94250 mov     bx, cx ;~ 28F0:3192
cs=0x28f0;eip=0x003194; 	T(XCHG(di, si));	// 94251 xchg    di, si ;~ 28F0:3194
cs=0x28f0;eip=0x003196; 	T(MOV(cx, 0x0FFFF));	// 94252 mov     cx, 0FFFFh ;~ 28F0:3196
	// 94253 repne scasb ;~ 28F0:3199
cs=0x28f0;eip=0x003199; 	T(	REPNE SCASB);	// 94253 repne scasb ;~ 28F0:3199
cs=0x28f0;eip=0x00319b; 	T(DEC(di));	// 94254 dec     di ;~ 28F0:319B
cs=0x28f0;eip=0x00319c; 	T(MOV(cx, bx));	// 94255 mov     cx, bx ;~ 28F0:319C
cs=0x28f0;eip=0x00319e; 	T(SHR(cx, 1));	// 94256 shr     cx, 1 ;~ 28F0:319E
	// 94257 repne movsw ;~ 28F0:31A0
cs=0x28f0;eip=0x0031a0; 	X(	REPNE MOVSW);	// 94257 repne movsw ;~ 28F0:31A0
cs=0x28f0;eip=0x0031a2; 	T(ADC(cx, cx));	// 94258 adc     cx, cx ;~ 28F0:31A2
	// 94259 repne movsb ;~ 28F0:31A4
cs=0x28f0;eip=0x0031a4; 	X(	REPNE MOVSB);	// 94259 repne movsb ;~ 28F0:31A4
cs=0x28f0;eip=0x0031a6; 	T(ax = bp+var_52);	// 94260 lea     ax, [bp+var_52] ;~ 28F0:31A6
cs=0x28f0;eip=0x0031a9; 	X(PUSH(ax));	// 94261 push    ax ;~ 28F0:31A9
cs=0x28f0;eip=0x0031aa; 	T(ax = bp+var_2);	// 94262 lea     ax, [bp+var_2] ;~ 28F0:31AA
cs=0x28f0;eip=0x0031ad; 	X(PUSH(ax));	// 94263 push    ax ;~ 28F0:31AD
cs=0x28f0;eip=0x0031ae; 	R(CALLF(sub_30a14,0));	// 94264 call    sub_30A14 ;~ 28F0:31AE
cs=0x28f0;eip=0x0031b3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94265 les     bx, [bp+arg_0] ;~ 28F0:31B3
cs=0x28f0;eip=0x0031b6; 	X(MOV(*(dw*)(raddr(es,bx+0x322)), ax));	// 94267 mov     es:[bx+322h], ax ;~ 28F0:31B6
cs=0x28f0;eip=0x0031bb; 	X(MOV(*(dw*)(raddr(es,bx+0x324)), dx));	// 94268 mov     es:[bx+324h], dx ;~ 28F0:31BB
cs=0x28f0;eip=0x0031c0; 	T(OR(dx, ax));	// 94269 or      dx, ax ;~ 28F0:31C0
cs=0x28f0;eip=0x0031c2; 	R(JNZ(loc_3a6be));	// 94270 jnz     short loc_3A6BE ;~ 28F0:31C2
cs=0x28f0;eip=0x0031c4; 	T(ax = bp+var_52);	// 94271 lea     ax, [bp+var_52] ;~ 28F0:31C4
cs=0x28f0;eip=0x0031c7; 	X(PUSH(ax));	// 94272 push    ax ;~ 28F0:31C7
cs=0x28f0;eip=0x0031c8; 	T(ax = bp+var_2);	// 94273 lea     ax, [bp+var_2] ;~ 28F0:31C8
cs=0x28f0;eip=0x0031cb; 	X(PUSH(ax));	// 94274 push    ax ;~ 28F0:31CB
cs=0x28f0;eip=0x0031cc; 	R(CALLF(sub_31643,0));	// 94275 call    sub_31643 ;~ 28F0:31CC
cs=0x28f0;eip=0x0031d1; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94276 les     bx, [bp+arg_0] ;~ 28F0:31D1
cs=0x28f0;eip=0x0031d4; 	X(MOV(*(dw*)(raddr(es,bx+0x322)), ax));	// 94277 mov     es:[bx+322h], ax ;~ 28F0:31D4
cs=0x28f0;eip=0x0031d9; 	X(MOV(*(dw*)(raddr(es,bx+0x324)), dx));	// 94278 mov     es:[bx+324h], dx ;~ 28F0:31D9
loc_3a6be:
	// 10452 
cs=0x28f0;eip=0x0031de; 	X(POP(si));	// 94281 pop     si ;~ 28F0:31DE
cs=0x28f0;eip=0x0031df; 	X(POP(di));	// 94282 pop     di ;~ 28F0:31DF
cs=0x28f0;eip=0x0031e0; 	T(MOV(sp, bp));	// 94283 mov     sp, bp ;~ 28F0:31E0
cs=0x28f0;eip=0x0031e2; 	X(POP(bp));	// 94284 pop     bp ;~ 28F0:31E2
cs=0x28f0;eip=0x0031e3; 	R(RETN(4));	// 94285 retn    4 ;~ 28F0:31E3
sub_3a6c6:
	// 94293 
#undef var_a
#define var_a -0x0A
	// 94296 var_A           = dword ptr -0Ah ;~ 28F0:31E6
#undef var_6
#define var_6 -6
	// 94297 var_6           = word ptr -6 ;~ 28F0:31E6
#undef arg_0
#define arg_0 4
	// 94298 arg_0           = word ptr  4 ;~ 28F0:31E6
#undef arg_2
#define arg_2 6
	// 94299 arg_2           = dword ptr  6 ;~ 28F0:31E6
cs=0x28f0;eip=0x0031e6; 	X(PUSH(bp));	// 94301 push    bp ;~ 28F0:31E6
cs=0x28f0;eip=0x0031e7; 	T(MOV(bp, sp));	// 94302 mov     bp, sp ;~ 28F0:31E7
cs=0x28f0;eip=0x0031e9; 	T(SUB(sp, 0x0A));	// 94303 sub     sp, 0Ah ;~ 28F0:31E9
cs=0x28f0;eip=0x0031ec; 	X(PUSH(di));	// 94304 push    di ;~ 28F0:31EC
cs=0x28f0;eip=0x0031ed; 	X(PUSH(si));	// 94305 push    si ;~ 28F0:31ED
cs=0x28f0;eip=0x0031ee; 	T(SUB(cx, cx));	// 94306 sub     cx, cx ;~ 28F0:31EE
cs=0x28f0;eip=0x0031f0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 94307 les     bx, [bp+arg_2] ;~ 28F0:31F0
cs=0x28f0;eip=0x0031f3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x322))));	// 94308 mov     ax, es:[bx+322h] ;~ 28F0:31F3
cs=0x28f0;eip=0x0031f8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x324))));	// 94309 mov     dx, es:[bx+324h] ;~ 28F0:31F8
cs=0x28f0;eip=0x0031fd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 94310 mov     word ptr [bp+var_A], ax ;~ 28F0:31FD
cs=0x28f0;eip=0x003200; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 94311 mov     word ptr [bp+var_A+2], dx ;~ 28F0:3200
cs=0x28f0;eip=0x003203; 	T(MOV(si, *(dw*)(raddr(ss,bp+arg_0))));	// 94312 mov     si, [bp+arg_0] ;~ 28F0:3203
cs=0x28f0;eip=0x003206; 	T(LES(di, *(dd*)(raddr(ss,bp+var_a))));	// 94313 les     di, [bp+var_A] ;~ 28F0:3206
loc_3a6e9:
	// 10453 
cs=0x28f0;eip=0x003209; 	T(MOV(al, *(raddr(es,di))));	// 94316 mov     al, es:[di] ;~ 28F0:3209
cs=0x28f0;eip=0x00320c; 	T(CBW);	// 94317 cbw ;~ 28F0:320C
cs=0x28f0;eip=0x00320d; 	T(CMP(ax, si));	// 94318 cmp     ax, si ;~ 28F0:320D
cs=0x28f0;eip=0x00320f; 	R(JNZ(loc_3a6fe));	// 94319 jnz     short loc_3A6FE ;~ 28F0:320F
loc_3a6f1:
	// 10454 
cs=0x28f0;eip=0x003211; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), cx));	// 94322 mov     [bp+var_6], cx ;~ 28F0:3211
cs=0x28f0;eip=0x003214; 	T(CMP(cx, 0x10));	// 94323 cmp     cx, 10h ;~ 28F0:3214
cs=0x28f0;eip=0x003217; 	R(JNZ(loc_3a709));	// 94324 jnz     short loc_3A709 ;~ 28F0:3217
cs=0x28f0;eip=0x003219; 	T(SUB(ax, ax));	// 94325 sub     ax, ax ;~ 28F0:3219
cs=0x28f0;eip=0x00321b; 	T(CWD);	// 94326 cwd ;~ 28F0:321B
cs=0x28f0;eip=0x00321c; 	R(JMP(loc_3a720));	// 94327 jmp     short loc_3A720 ;~ 28F0:321C
loc_3a6fe:
	// 10455 
cs=0x28f0;eip=0x00321e; 	T(ADD(di, 0x34));	// 94331 add     di, 34h ; '4' ;~ 28F0:321E
cs=0x28f0;eip=0x003221; 	T(INC(cx));	// 94332 inc     cx ;~ 28F0:3221
cs=0x28f0;eip=0x003222; 	T(CMP(cx, 0x10));	// 94333 cmp     cx, 10h ;~ 28F0:3222
cs=0x28f0;eip=0x003225; 	R(JGE(loc_3a6f1));	// 94334 jge     short loc_3A6F1 ;~ 28F0:3225
cs=0x28f0;eip=0x003227; 	R(JMP(loc_3a6e9));	// 94335 jmp     short loc_3A6E9 ;~ 28F0:3227
loc_3a709:
	// 10456 
cs=0x28f0;eip=0x003229; 	T(MOV(ax, 0x34));	// 94339 mov     ax, 34h ; '4' ;~ 28F0:3229
cs=0x28f0;eip=0x00322c; 	X(IMUL1_2(*(dw*)(raddr(ss,bp+var_6))));	// 94340 imul    [bp+var_6] ;~ 28F0:322C
cs=0x28f0;eip=0x00322f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 94341 les     bx, [bp+arg_2] ;~ 28F0:322F
cs=0x28f0;eip=0x003232; 	T(MOV(cx, ax));	// 94342 mov     cx, ax ;~ 28F0:3232
cs=0x28f0;eip=0x003234; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x322))));	// 94343 mov     ax, es:[bx+322h] ;~ 28F0:3234
cs=0x28f0;eip=0x003239; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x324))));	// 94344 mov     dx, es:[bx+324h] ;~ 28F0:3239
cs=0x28f0;eip=0x00323e; 	T(ADD(ax, cx));	// 94345 add     ax, cx ;~ 28F0:323E
loc_3a720:
	// 10457 
cs=0x28f0;eip=0x003240; 	X(POP(si));	// 94348 pop     si ;~ 28F0:3240
cs=0x28f0;eip=0x003241; 	X(POP(di));	// 94349 pop     di ;~ 28F0:3241
cs=0x28f0;eip=0x003242; 	T(MOV(sp, bp));	// 94350 mov     sp, bp ;~ 28F0:3242
cs=0x28f0;eip=0x003244; 	X(POP(bp));	// 94351 pop     bp ;~ 28F0:3244
cs=0x28f0;eip=0x003245; 	R(RETN(6));	// 94352 retn    6 ;~ 28F0:3245
sub_3a728:
	// 94360 
#undef var_4
#define var_4 -4
	// 94362 var_4           = dword ptr -4 ;~ 28F0:3248
#undef arg_0
#define arg_0 4
	// 94363 arg_0           = dword ptr  4 ;~ 28F0:3248
cs=0x28f0;eip=0x003248; 	X(PUSH(bp));	// 94365 push    bp ;~ 28F0:3248
cs=0x28f0;eip=0x003249; 	T(MOV(bp, sp));	// 94366 mov     bp, sp ;~ 28F0:3249
cs=0x28f0;eip=0x00324b; 	T(SUB(sp, 4));	// 94367 sub     sp, 4 ;~ 28F0:324B
cs=0x28f0;eip=0x00324e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94368 push    word ptr [bp+arg_0+2] ;~ 28F0:324E
cs=0x28f0;eip=0x003251; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94369 push    word ptr [bp+arg_0] ;~ 28F0:3251
cs=0x28f0;eip=0x003254; 	T(MOV(ax, 1));	// 94370 mov     ax, 1 ;~ 28F0:3254
cs=0x28f0;eip=0x003257; 	X(PUSH(ax));	// 94371 push    ax ;~ 28F0:3257
cs=0x28f0;eip=0x003258; 	R(CALL(sub_3a6c6,0));	// 94372 call    sub_3A6C6 ;~ 28F0:3258
cs=0x28f0;eip=0x00325b; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 94373 mov     word ptr [bp+var_4], ax ;~ 28F0:325B
cs=0x28f0;eip=0x00325e; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 94374 mov     word ptr [bp+var_4+2], dx ;~ 28F0:325E
cs=0x28f0;eip=0x003261; 	T(OR(ax, dx));	// 94375 or      ax, dx ;~ 28F0:3261
cs=0x28f0;eip=0x003263; 	R(JNZ(loc_3a75b));	// 94376 jnz     short loc_3A75B ;~ 28F0:3263
cs=0x28f0;eip=0x003265; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94377 les     bx, [bp+arg_0] ;~ 28F0:3265
cs=0x28f0;eip=0x003268; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 94378 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:3268
cs=0x28f0;eip=0x00326e; 	R(JNZ(loc_3a756));	// 94379 jnz     short loc_3A756 ;~ 28F0:326E
cs=0x28f0;eip=0x003270; 	T(SUB(ax, ax));	// 94380 sub     ax, ax ;~ 28F0:3270
loc_3a752:
	// 10458 
cs=0x28f0;eip=0x003272; 	T(SUB(dx, dx));	// 94383 sub     dx, dx ;~ 28F0:3272
cs=0x28f0;eip=0x003274; 	R(JMP(loc_3a763));	// 94384 jmp     short loc_3A763 ;~ 28F0:3274
loc_3a756:
	// 10459 
cs=0x28f0;eip=0x003276; 	T(MOV(ax, 0x0A0));	// 94388 mov     ax, 0A0h ; ' ' ;~ 28F0:3276
cs=0x28f0;eip=0x003279; 	R(JMP(loc_3a752));	// 94389 jmp     short loc_3A752 ;~ 28F0:3279
loc_3a75b:
	// 10460 
cs=0x28f0;eip=0x00327b; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 94393 les     bx, [bp+var_4] ;~ 28F0:327B
cs=0x28f0;eip=0x00327e; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 94394 mov     ax, es:[bx+4] ;~ 28F0:327E
cs=0x28f0;eip=0x003282; 	T(CWD);	// 94395 cwd ;~ 28F0:3282
loc_3a763:
	// 10461 
cs=0x28f0;eip=0x003283; 	T(MOV(sp, bp));	// 94398 mov     sp, bp ;~ 28F0:3283
cs=0x28f0;eip=0x003285; 	X(POP(bp));	// 94399 pop     bp ;~ 28F0:3285
cs=0x28f0;eip=0x003286; 	R(RETN(4));	// 94400 retn    4 ;~ 28F0:3286
sub_3a769:
	// 94408 
#undef var_8
#define var_8 -8
	// 94411 var_8           = dword ptr -8 ;~ 28F0:3289
#undef arg_0
#define arg_0 4
	// 94412 arg_0           = dword ptr  4 ;~ 28F0:3289
cs=0x28f0;eip=0x003289; 	X(PUSH(bp));	// 94414 push    bp ;~ 28F0:3289
cs=0x28f0;eip=0x00328a; 	T(MOV(bp, sp));	// 94415 mov     bp, sp ;~ 28F0:328A
cs=0x28f0;eip=0x00328c; 	T(SUB(sp, 8));	// 94416 sub     sp, 8 ;~ 28F0:328C
cs=0x28f0;eip=0x00328f; 	X(PUSH(si));	// 94417 push    si ;~ 28F0:328F
cs=0x28f0;eip=0x003290; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94418 push    word ptr [bp+arg_0+2] ;~ 28F0:3290
cs=0x28f0;eip=0x003293; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94419 push    word ptr [bp+arg_0] ;~ 28F0:3293
cs=0x28f0;eip=0x003296; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94420 les     bx, [bp+arg_0] ;~ 28F0:3296
cs=0x28f0;eip=0x003299; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2BC))));	// 94421 mov     ax, es:[bx+2BCh] ;~ 28F0:3299
cs=0x28f0;eip=0x00329e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2BE))));	// 94422 mov     dx, es:[bx+2BEh] ;~ 28F0:329E
cs=0x28f0;eip=0x0032a3; 	T(MOV(cl, 8));	// 94423 mov     cl, 8 ;~ 28F0:32A3
cs=0x28f0;eip=0x0032a5; 	R(CALLF(sub_10240,0));	// 94424 call    sub_10240 ;~ 28F0:32A5
cs=0x28f0;eip=0x0032aa; 	T(INC(ax));	// 94425 inc     ax ;~ 28F0:32AA
cs=0x28f0;eip=0x0032ab; 	X(PUSH(ax));	// 94426 push    ax ;~ 28F0:32AB
cs=0x28f0;eip=0x0032ac; 	R(CALL(sub_3a6c6,0));	// 94427 call    sub_3A6C6 ;~ 28F0:32AC
cs=0x28f0;eip=0x0032af; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8))), ax));	// 94428 mov     word ptr [bp+var_8], ax ;~ 28F0:32AF
cs=0x28f0;eip=0x0032b2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_8+2))), dx));	// 94429 mov     word ptr [bp+var_8+2], dx ;~ 28F0:32B2
cs=0x28f0;eip=0x0032b5; 	T(OR(dx, ax));	// 94430 or      dx, ax ;~ 28F0:32B5
cs=0x28f0;eip=0x0032b7; 	R(JNZ(loc_3a79e));	// 94431 jnz     short loc_3A79E ;~ 28F0:32B7
loc_3a799:
	// 10462 
cs=0x28f0;eip=0x0032b9; 	T(SUB(ax, ax));	// 94434 sub     ax, ax ;~ 28F0:32B9
cs=0x28f0;eip=0x0032bb; 	R(JMP(loc_3a846));	// 94435 jmp     loc_3A846 ;~ 28F0:32BB
loc_3a79e:
	// 10463 
cs=0x28f0;eip=0x0032be; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94439 les     bx, [bp+arg_0] ;~ 28F0:32BE
cs=0x28f0;eip=0x0032c1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 94440 mov     ax, es:[bx+120h] ;~ 28F0:32C1
cs=0x28f0;eip=0x0032c6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 94441 mov     dx, es:[bx+122h] ;~ 28F0:32C6
cs=0x28f0;eip=0x0032cb; 	T(MOV(cl, 8));	// 94442 mov     cl, 8 ;~ 28F0:32CB
cs=0x28f0;eip=0x0032cd; 	R(CALLF(sub_10240,0));	// 94443 call    sub_10240 ;~ 28F0:32CD
cs=0x28f0;eip=0x0032d2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 94444 les     bx, [bp+var_8] ;~ 28F0:32D2
cs=0x28f0;eip=0x0032d5; 	T(MOV(cx, ax));	// 94445 mov     cx, ax ;~ 28F0:32D5
cs=0x28f0;eip=0x0032d7; 	T(MOV(al, 6));	// 94446 mov     al, 6 ;~ 28F0:32D7
cs=0x28f0;eip=0x0032d9; 	X(IMUL1_1(*(raddr(es,bx+2))));	// 94447 imul    byte ptr es:[bx+2] ;~ 28F0:32D9
cs=0x28f0;eip=0x0032dd; 	T(MOV(si, ax));	// 94448 mov     si, ax ;~ 28F0:32DD
cs=0x28f0;eip=0x0032df; 	T(CMP(*(dw*)(raddr(es,bx+si+4)), cx));	// 94449 cmp     es:[bx+si+4], cx ;~ 28F0:32DF
cs=0x28f0;eip=0x0032e3; 	R(JLE(loc_3a7d2));	// 94450 jle     short loc_3A7D2 ;~ 28F0:32E3
cs=0x28f0;eip=0x0032e5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94451 push    word ptr [bp+arg_0+2] ;~ 28F0:32E5
cs=0x28f0;eip=0x0032e8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94452 push    word ptr [bp+arg_0] ;~ 28F0:32E8
cs=0x28f0;eip=0x0032eb; 	X(PUSH(es));	// 94453 push    es ;~ 28F0:32EB
cs=0x28f0;eip=0x0032ec; 	X(PUSH(bx));	// 94454 push    bx ;~ 28F0:32EC
cs=0x28f0;eip=0x0032ed; 	R(CALL(sub_3a2a0,0));	// 94455 call    sub_3A2A0 ;~ 28F0:32ED
cs=0x28f0;eip=0x0032f0; 	R(JMP(loc_3a846));	// 94456 jmp     short loc_3A846 ;~ 28F0:32F0
loc_3a7d2:
	// 10464 
cs=0x28f0;eip=0x0032f2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94460 les     bx, [bp+arg_0] ;~ 28F0:32F2
cs=0x28f0;eip=0x0032f5; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 94461 les     bx, es:[bx+31Ch] ;~ 28F0:32F5
cs=0x28f0;eip=0x0032fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 94462 mov     ax, es:[bx+0Ah] ;~ 28F0:32FA
cs=0x28f0;eip=0x0032fe; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 94463 mov     dx, es:[bx+0Ch] ;~ 28F0:32FE
cs=0x28f0;eip=0x003302; 	T(MOV(cl, 8));	// 94464 mov     cl, 8 ;~ 28F0:3302
cs=0x28f0;eip=0x003304; 	R(CALLF(sub_10240,0));	// 94465 call    sub_10240 ;~ 28F0:3304
cs=0x28f0;eip=0x003309; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 94466 les     bx, [bp+var_8] ;~ 28F0:3309
cs=0x28f0;eip=0x00330c; 	T(MOV(cx, ax));	// 94467 mov     cx, ax ;~ 28F0:330C
cs=0x28f0;eip=0x00330e; 	T(MOV(al, 6));	// 94468 mov     al, 6 ;~ 28F0:330E
cs=0x28f0;eip=0x003310; 	X(IMUL1_1(*(raddr(es,bx+3))));	// 94469 imul    byte ptr es:[bx+3] ;~ 28F0:3310
cs=0x28f0;eip=0x003314; 	T(MOV(si, ax));	// 94470 mov     si, ax ;~ 28F0:3314
cs=0x28f0;eip=0x003316; 	T(CMP(*(dw*)(raddr(es,bx+si+8)), dx));	// 94471 cmp     es:[bx+si+8], dx ;~ 28F0:3316
cs=0x28f0;eip=0x00331a; 	R(JG(loc_3a811));	// 94472 jg      short loc_3A811 ;~ 28F0:331A
cs=0x28f0;eip=0x00331c; 	R(JL(loc_3a804));	// 94473 jl      short loc_3A804 ;~ 28F0:331C
cs=0x28f0;eip=0x00331e; 	T(CMP(*(dw*)(raddr(es,bx+si+6)), cx));	// 94474 cmp     es:[bx+si+6], cx ;~ 28F0:331E
cs=0x28f0;eip=0x003322; 	R(JA(loc_3a811));	// 94475 ja      short loc_3A811 ;~ 28F0:3322
loc_3a804:
	// 10465 
cs=0x28f0;eip=0x003324; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94478 push    word ptr [bp+arg_0+2] ;~ 28F0:3324
cs=0x28f0;eip=0x003327; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94479 push    word ptr [bp+arg_0] ;~ 28F0:3327
cs=0x28f0;eip=0x00332a; 	X(PUSH(es));	// 94480 push    es ;~ 28F0:332A
cs=0x28f0;eip=0x00332b; 	X(PUSH(bx));	// 94481 push    bx ;~ 28F0:332B
cs=0x28f0;eip=0x00332c; 	R(CALL(sub_3a3c4,0));	// 94482 call    sub_3A3C4 ;~ 28F0:332C
cs=0x28f0;eip=0x00332f; 	R(JMP(loc_3a846));	// 94483 jmp     short loc_3A846 ;~ 28F0:332F
loc_3a811:
	// 10466 
cs=0x28f0;eip=0x003331; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94488 les     bx, [bp+arg_0] ;~ 28F0:3331
cs=0x28f0;eip=0x003334; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 94489 mov     ax, es:[bx+120h] ;~ 28F0:3334
cs=0x28f0;eip=0x003339; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 94490 mov     dx, es:[bx+122h] ;~ 28F0:3339
cs=0x28f0;eip=0x00333e; 	T(MOV(cl, 8));	// 94491 mov     cl, 8 ;~ 28F0:333E
cs=0x28f0;eip=0x003340; 	R(CALLF(sub_10240,0));	// 94492 call    sub_10240 ;~ 28F0:3340
cs=0x28f0;eip=0x003345; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_8))));	// 94493 les     bx, [bp+var_8] ;~ 28F0:3345
cs=0x28f0;eip=0x003348; 	T(MOV(cx, ax));	// 94494 mov     cx, ax ;~ 28F0:3348
cs=0x28f0;eip=0x00334a; 	T(MOV(al, 6));	// 94495 mov     al, 6 ;~ 28F0:334A
cs=0x28f0;eip=0x00334c; 	X(IMUL1_1(*(raddr(es,bx+1))));	// 94496 imul    byte ptr es:[bx+1] ;~ 28F0:334C
cs=0x28f0;eip=0x003350; 	T(MOV(si, ax));	// 94497 mov     si, ax ;~ 28F0:3350
cs=0x28f0;eip=0x003352; 	T(CMP(*(dw*)(raddr(es,bx+si-2)), cx));	// 94498 cmp     es:[bx+si-2], cx ;~ 28F0:3352
cs=0x28f0;eip=0x003356; 	R(JL(loc_3a83b));	// 94499 jl      short loc_3A83B ;~ 28F0:3356
cs=0x28f0;eip=0x003358; 	R(JMP(loc_3a799));	// 94500 jmp     loc_3A799 ;~ 28F0:3358
loc_3a83b:
	// 10467 
cs=0x28f0;eip=0x00335b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94504 push    word ptr [bp+arg_0+2] ;~ 28F0:335B
cs=0x28f0;eip=0x00335e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94505 push    word ptr [bp+arg_0] ;~ 28F0:335E
cs=0x28f0;eip=0x003361; 	X(PUSH(es));	// 94506 push    es ;~ 28F0:3361
cs=0x28f0;eip=0x003362; 	X(PUSH(bx));	// 94507 push    bx ;~ 28F0:3362
cs=0x28f0;eip=0x003363; 	R(CALL(sub_3a505,0));	// 94508 call    sub_3A505 ;~ 28F0:3363
loc_3a846:
	// 10468 
cs=0x28f0;eip=0x003366; 	X(POP(si));	// 94512 pop     si ;~ 28F0:3366
cs=0x28f0;eip=0x003367; 	T(MOV(sp, bp));	// 94513 mov     sp, bp ;~ 28F0:3367
cs=0x28f0;eip=0x003369; 	X(POP(bp));	// 94514 pop     bp ;~ 28F0:3369
cs=0x28f0;eip=0x00336a; 	R(RETN(4));	// 94515 retn    4 ;~ 28F0:336A
sub_3a84e:
	// 94525 
#undef var_12
#define var_12 -0x12
	// 94528 var_12          = word ptr -12h ;~ 28F0:336E
#undef var_10
#define var_10 -0x10
	// 94529 var_10          = dword ptr -10h ;~ 28F0:336E
#undef var_c
#define var_c -0x0C
	// 94530 var_C           = word ptr -0Ch ;~ 28F0:336E
#undef var_8
#define var_8 -8
	// 94531 var_8           = word ptr -8 ;~ 28F0:336E
#undef var_6
#define var_6 -6
	// 94532 var_6           = word ptr -6 ;~ 28F0:336E
#undef var_4
#define var_4 -4
	// 94533 var_4           = word ptr -4 ;~ 28F0:336E
#undef var_2
#define var_2 -2
	// 94534 var_2           = word ptr -2 ;~ 28F0:336E
#undef arg_0
#define arg_0 4
	// 94535 arg_0           = dword ptr  4 ;~ 28F0:336E
cs=0x28f0;eip=0x00336e; 	X(PUSH(bp));	// 94537 push    bp ;~ 28F0:336E
cs=0x28f0;eip=0x00336f; 	T(MOV(bp, sp));	// 94538 mov     bp, sp ;~ 28F0:336F
cs=0x28f0;eip=0x003371; 	T(SUB(sp, 0x12));	// 94539 sub     sp, 12h ;~ 28F0:3371
cs=0x28f0;eip=0x003374; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94540 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3374
cs=0x28f0;eip=0x003377; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94541 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3377
cs=0x28f0;eip=0x00337a; 	T(ADD(ax, 0x0A0));	// 94542 add     ax, 0A0h ; ' ' ;~ 28F0:337A
cs=0x28f0;eip=0x00337d; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 94543 mov     word ptr [bp+var_10], ax ;~ 28F0:337D
cs=0x28f0;eip=0x003380; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 94544 mov     word ptr [bp+var_10+2], dx ;~ 28F0:3380
cs=0x28f0;eip=0x003383; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94545 les     bx, [bp+arg_0] ;~ 28F0:3383
cs=0x28f0;eip=0x003386; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 94546 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:3386
cs=0x28f0;eip=0x00338c; 	R(JGE(loc_3a871));	// 94547 jge     short loc_3A871 ;~ 28F0:338C
cs=0x28f0;eip=0x00338e; 	R(JMP(loc_3a9b2));	// 94548 jmp     loc_3A9B2 ;~ 28F0:338E
loc_3a871:
	// 10469 
cs=0x28f0;eip=0x003391; 	R(JG(loc_3a87e));	// 94552 jg      short loc_3A87E ;~ 28F0:3391
cs=0x28f0;eip=0x003393; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), 0));	// 94553 cmp     word ptr es:[bx+120h], 0 ;~ 28F0:3393
cs=0x28f0;eip=0x003399; 	R(JNZ(loc_3a87e));	// 94554 jnz     short loc_3A87E ;~ 28F0:3399
cs=0x28f0;eip=0x00339b; 	R(JMP(loc_3a9b2));	// 94555 jmp     loc_3A9B2 ;~ 28F0:339B
loc_3a87e:
	// 10470 
cs=0x28f0;eip=0x00339e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 94560 les     bx, [bp+var_10] ;~ 28F0:339E
cs=0x28f0;eip=0x0033a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 94561 mov     ax, es:[bx+8] ;~ 28F0:33A1
cs=0x28f0;eip=0x0033a5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 94562 mov     dx, es:[bx+0Ah] ;~ 28F0:33A5
cs=0x28f0;eip=0x0033a9; 	T(SAR(dx, 1));	// 94563 sar     dx, 1 ;~ 28F0:33A9
cs=0x28f0;eip=0x0033ab; 	T(RCR(ax, 1));	// 94564 rcr     ax, 1 ;~ 28F0:33AB
cs=0x28f0;eip=0x0033ad; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 94565 mov     [bp+var_4], ax ;~ 28F0:33AD
cs=0x28f0;eip=0x0033b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 94566 mov     [bp+var_2], dx ;~ 28F0:33B0
cs=0x28f0;eip=0x0033b3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94567 les     bx, [bp+arg_0] ;~ 28F0:33B3
cs=0x28f0;eip=0x0033b6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 94568 mov     ax, es:[bx+0C0h] ;~ 28F0:33B6
cs=0x28f0;eip=0x0033bb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 94569 mov     dx, es:[bx+0C2h] ;~ 28F0:33BB
cs=0x28f0;eip=0x0033c0; 	T(MOV(cl, 5));	// 94570 mov     cl, 5 ;~ 28F0:33C0
cs=0x28f0;eip=0x0033c2; 	R(CALLF(sub_10240,0));	// 94571 call    sub_10240 ;~ 28F0:33C2
cs=0x28f0;eip=0x0033c7; 	X(PUSH(ax));	// 94572 push    ax ;~ 28F0:33C7
cs=0x28f0;eip=0x0033c8; 	R(CALLF(sub_24cf8,0));	// 94573 call    sub_24CF8 ;~ 28F0:33C8
cs=0x28f0;eip=0x0033cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_12)), ax));	// 94574 mov     [bp+var_12], ax ;~ 28F0:33CD
cs=0x28f0;eip=0x0033d0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94575 les     bx, [bp+arg_0] ;~ 28F0:33D0
cs=0x28f0;eip=0x0033d3; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 94576 mov     ax, es:[bx+0E0h] ;~ 28F0:33D3
cs=0x28f0;eip=0x0033d8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 94577 mov     dx, es:[bx+0E2h] ;~ 28F0:33D8
cs=0x28f0;eip=0x0033dd; 	T(MOV(cl, 5));	// 94578 mov     cl, 5 ;~ 28F0:33DD
cs=0x28f0;eip=0x0033df; 	R(CALLF(sub_10240,0));	// 94579 call    sub_10240 ;~ 28F0:33DF
cs=0x28f0;eip=0x0033e4; 	X(PUSH(ax));	// 94580 push    ax ;~ 28F0:33E4
cs=0x28f0;eip=0x0033e5; 	R(CALLF(sub_24cf8,0));	// 94581 call    sub_24CF8 ;~ 28F0:33E5
cs=0x28f0;eip=0x0033ea; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 94582 mov     [bp+var_C], ax ;~ 28F0:33EA
cs=0x28f0;eip=0x0033ed; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 94583 push    [bp+var_12] ;~ 28F0:33ED
cs=0x28f0;eip=0x0033f0; 	R(CALLF(sub_27cb4,0));	// 94584 call    sub_27CB4 ;~ 28F0:33F0
cs=0x28f0;eip=0x0033f5; 	X(PUSH(dx));	// 94585 push    dx ;~ 28F0:33F5
cs=0x28f0;eip=0x0033f6; 	X(PUSH(ax));	// 94586 push    ax ;~ 28F0:33F6
cs=0x28f0;eip=0x0033f7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 94587 les     bx, [bp+arg_0] ;~ 28F0:33F7
cs=0x28f0;eip=0x0033fa; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 94588 mov     ax, es:[bx+120h] ;~ 28F0:33FA
cs=0x28f0;eip=0x0033ff; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 94589 mov     dx, es:[bx+122h] ;~ 28F0:33FF
cs=0x28f0;eip=0x003404; 	T(MOV(cl, 8));	// 94590 mov     cl, 8 ;~ 28F0:3404
cs=0x28f0;eip=0x003406; 	R(CALLF(sub_10240,0));	// 94591 call    sub_10240 ;~ 28F0:3406
cs=0x28f0;eip=0x00340b; 	X(PUSH(dx));	// 94592 push    dx ;~ 28F0:340B
cs=0x28f0;eip=0x00340c; 	X(PUSH(ax));	// 94593 push    ax ;~ 28F0:340C
cs=0x28f0;eip=0x00340d; 	R(CALLF(sub_105c2,0));	// 94594 call    sub_105C2 ;~ 28F0:340D
cs=0x28f0;eip=0x003412; 	T(MOV(cl, 8));	// 94595 mov     cl, 8 ;~ 28F0:3412
cs=0x28f0;eip=0x003414; 	R(CALLF(sub_10240,0));	// 94596 call    sub_10240 ;~ 28F0:3414
cs=0x28f0;eip=0x003419; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94597 mov     [bp+var_8], ax ;~ 28F0:3419
cs=0x28f0;eip=0x00341c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94598 mov     [bp+var_6], dx ;~ 28F0:341C
cs=0x28f0;eip=0x00341f; 	T(OR(ax, dx));	// 94599 or      ax, dx ;~ 28F0:341F
cs=0x28f0;eip=0x003421; 	R(JNZ(loc_3a91a));	// 94600 jnz     short loc_3A91A ;~ 28F0:3421
cs=0x28f0;eip=0x003423; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 94601 push    [bp+var_2] ;~ 28F0:3423
cs=0x28f0;eip=0x003426; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 94602 push    [bp+var_4] ;~ 28F0:3426
cs=0x28f0;eip=0x003429; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 94603 push    [bp+var_12] ;~ 28F0:3429
cs=0x28f0;eip=0x00342c; 	R(CALLF(sub_27c9e,0));	// 94604 call    sub_27C9E ;~ 28F0:342C
cs=0x28f0;eip=0x003431; 	X(PUSH(dx));	// 94605 push    dx ;~ 28F0:3431
cs=0x28f0;eip=0x003432; 	X(PUSH(ax));	// 94606 push    ax ;~ 28F0:3432
cs=0x28f0;eip=0x003433; 	R(CALLF(sub_105c2,0));	// 94607 call    sub_105C2 ;~ 28F0:3433
cs=0x28f0;eip=0x003438; 	R(JMP(loc_3a93c));	// 94608 jmp     short loc_3A93C ;~ 28F0:3438
loc_3a91a:
	// 10471 
cs=0x28f0;eip=0x00343a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 94612 push    [bp+var_6] ;~ 28F0:343A
cs=0x28f0;eip=0x00343d; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 94613 push    [bp+var_8] ;~ 28F0:343D
cs=0x28f0;eip=0x003440; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 94614 push    [bp+var_2] ;~ 28F0:3440
cs=0x28f0;eip=0x003443; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 94615 push    [bp+var_4] ;~ 28F0:3443
cs=0x28f0;eip=0x003446; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 94616 push    [bp+var_12] ;~ 28F0:3446
cs=0x28f0;eip=0x003449; 	R(CALLF(sub_27c9e,0));	// 94617 call    sub_27C9E ;~ 28F0:3449
cs=0x28f0;eip=0x00344e; 	X(PUSH(dx));	// 94618 push    dx ;~ 28F0:344E
cs=0x28f0;eip=0x00344f; 	X(PUSH(ax));	// 94619 push    ax ;~ 28F0:344F
cs=0x28f0;eip=0x003450; 	R(CALLF(sub_105c2,0));	// 94620 call    sub_105C2 ;~ 28F0:3450
cs=0x28f0;eip=0x003455; 	X(PUSH(dx));	// 94621 push    dx ;~ 28F0:3455
cs=0x28f0;eip=0x003456; 	X(PUSH(ax));	// 94622 push    ax ;~ 28F0:3456
cs=0x28f0;eip=0x003457; 	R(CALLF(sub_10526,0));	// 94623 call    sub_10526 ;~ 28F0:3457
loc_3a93c:
	// 10472 
cs=0x28f0;eip=0x00345c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94626 mov     [bp+var_8], ax ;~ 28F0:345C
cs=0x28f0;eip=0x00345f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94627 mov     [bp+var_6], dx ;~ 28F0:345F
cs=0x28f0;eip=0x003462; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), 0x2D0));	// 94628 cmp     [bp+var_12], 2D0h ;~ 28F0:3462
cs=0x28f0;eip=0x003467; 	R(JLE(loc_3a95d));	// 94629 jle     short loc_3A95D ;~ 28F0:3467
cs=0x28f0;eip=0x003469; 	T(CMP(*(dw*)(raddr(ss,bp+var_12)), 0x870));	// 94630 cmp     [bp+var_12], 870h ;~ 28F0:3469
cs=0x28f0;eip=0x00346e; 	R(JGE(loc_3a95d));	// 94631 jge     short loc_3A95D ;~ 28F0:346E
cs=0x28f0;eip=0x003470; 	T(NEG(ax));	// 94632 neg     ax ;~ 28F0:3470
cs=0x28f0;eip=0x003472; 	T(ADC(dx, 0));	// 94633 adc     dx, 0 ;~ 28F0:3472
cs=0x28f0;eip=0x003475; 	T(NEG(dx));	// 94634 neg     dx ;~ 28F0:3475
cs=0x28f0;eip=0x003477; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94635 mov     [bp+var_8], ax ;~ 28F0:3477
cs=0x28f0;eip=0x00347a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94636 mov     [bp+var_6], dx ;~ 28F0:347A
loc_3a95d:
	// 10473 
cs=0x28f0;eip=0x00347d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 94640 les     bx, [bp+var_10] ;~ 28F0:347D
cs=0x28f0;eip=0x003480; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 94641 mov     ax, [bp+var_8] ;~ 28F0:3480
cs=0x28f0;eip=0x003483; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 94642 mov     dx, [bp+var_6] ;~ 28F0:3483
cs=0x28f0;eip=0x003486; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 94643 mov     es:[bx], ax ;~ 28F0:3486
cs=0x28f0;eip=0x003489; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 94644 mov     es:[bx+2], dx ;~ 28F0:3489
cs=0x28f0;eip=0x00348d; 	X(PUSH(es));	// 94645 push    es ;~ 28F0:348D
cs=0x28f0;eip=0x00348e; 	X(PUSH(bx));	// 94646 push    bx ;~ 28F0:348E
cs=0x28f0;eip=0x00348f; 	R(CALL(sub_3bb03,0));	// 94647 call    sub_3BB03 ;~ 28F0:348F
cs=0x28f0;eip=0x003492; 	X(PUSH(*(dw*)(raddr(ss,bp+var_c))));	// 94648 push    [bp+var_C] ;~ 28F0:3492
cs=0x28f0;eip=0x003495; 	R(CALLF(sub_27cb4,0));	// 94649 call    sub_27CB4 ;~ 28F0:3495
cs=0x28f0;eip=0x00349a; 	X(PUSH(dx));	// 94650 push    dx ;~ 28F0:349A
cs=0x28f0;eip=0x00349b; 	X(PUSH(ax));	// 94651 push    ax ;~ 28F0:349B
cs=0x28f0;eip=0x00349c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 94652 les     bx, [bp+var_10] ;~ 28F0:349C
cs=0x28f0;eip=0x00349f; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 94653 mov     ax, es:[bx] ;~ 28F0:349F
cs=0x28f0;eip=0x0034a2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 94654 mov     dx, es:[bx+2] ;~ 28F0:34A2
cs=0x28f0;eip=0x0034a6; 	T(MOV(cl, 8));	// 94655 mov     cl, 8 ;~ 28F0:34A6
cs=0x28f0;eip=0x0034a8; 	R(CALLF(sub_10240,0));	// 94656 call    sub_10240 ;~ 28F0:34A8
cs=0x28f0;eip=0x0034ad; 	X(PUSH(dx));	// 94657 push    dx ;~ 28F0:34AD
cs=0x28f0;eip=0x0034ae; 	X(PUSH(ax));	// 94658 push    ax ;~ 28F0:34AE
cs=0x28f0;eip=0x0034af; 	R(CALLF(sub_105c2,0));	// 94659 call    sub_105C2 ;~ 28F0:34AF
cs=0x28f0;eip=0x0034b4; 	T(MOV(cl, 8));	// 94660 mov     cl, 8 ;~ 28F0:34B4
cs=0x28f0;eip=0x0034b6; 	R(CALLF(sub_10240,0));	// 94661 call    sub_10240 ;~ 28F0:34B6
cs=0x28f0;eip=0x0034bb; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 94662 les     bx, [bp+var_10] ;~ 28F0:34BB
cs=0x28f0;eip=0x0034be; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 94663 mov     es:[bx], ax ;~ 28F0:34BE
cs=0x28f0;eip=0x0034c1; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 94664 mov     es:[bx+2], dx ;~ 28F0:34C1
cs=0x28f0;eip=0x0034c5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94665 push    word ptr [bp+arg_0+2] ;~ 28F0:34C5
cs=0x28f0;eip=0x0034c8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94666 push    word ptr [bp+arg_0] ;~ 28F0:34C8
cs=0x28f0;eip=0x0034cb; 	X(PUSH(es));	// 94667 push    es ;~ 28F0:34CB
cs=0x28f0;eip=0x0034cc; 	X(PUSH(bx));	// 94668 push    bx ;~ 28F0:34CC
cs=0x28f0;eip=0x0034cd; 	R(CALL(sub_3b97e,0));	// 94669 call    sub_3B97E ;~ 28F0:34CD
cs=0x28f0;eip=0x0034d0; 	R(JMP(loc_3a9be));	// 94670 jmp     short loc_3A9BE ;~ 28F0:34D0
loc_3a9b2:
	// 10474 
cs=0x28f0;eip=0x0034d2; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 94675 les     bx, [bp+var_10] ;~ 28F0:34D2
cs=0x28f0;eip=0x0034d5; 	T(SUB(ax, ax));	// 94676 sub     ax, ax ;~ 28F0:34D5
cs=0x28f0;eip=0x0034d7; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 94677 mov     es:[bx+2], ax ;~ 28F0:34D7
cs=0x28f0;eip=0x0034db; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 94678 mov     es:[bx], ax ;~ 28F0:34DB
loc_3a9be:
	// 10475 
cs=0x28f0;eip=0x0034de; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 94681 mov     ax, word ptr [bp+arg_0] ;~ 28F0:34DE
cs=0x28f0;eip=0x0034e1; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 94682 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:34E1
cs=0x28f0;eip=0x0034e4; 	T(ADD(ax, 0x40));	// 94683 add     ax, 40h ; '@' ;~ 28F0:34E4
cs=0x28f0;eip=0x0034e7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10))), ax));	// 94684 mov     word ptr [bp+var_10], ax ;~ 28F0:34E7
cs=0x28f0;eip=0x0034ea; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_10+2))), dx));	// 94685 mov     word ptr [bp+var_10+2], dx ;~ 28F0:34EA
cs=0x28f0;eip=0x0034ed; 	X(PUSH(*(dw*)(raddr(ss,bp+var_12))));	// 94686 push    [bp+var_12] ;~ 28F0:34ED
cs=0x28f0;eip=0x0034f0; 	R(CALLF(sub_24cf8,0));	// 94687 call    sub_24CF8 ;~ 28F0:34F0
cs=0x28f0;eip=0x0034f5; 	X(PUSH(ax));	// 94688 push    ax ;~ 28F0:34F5
cs=0x28f0;eip=0x0034f6; 	R(CALLF(sub_27c9e,0));	// 94689 call    sub_27C9E ;~ 28F0:34F6
cs=0x28f0;eip=0x0034fb; 	X(PUSH(dx));	// 94690 push    dx ;~ 28F0:34FB
cs=0x28f0;eip=0x0034fc; 	X(PUSH(ax));	// 94691 push    ax ;~ 28F0:34FC
cs=0x28f0;eip=0x0034fd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 94692 les     bx, [bp+var_10] ;~ 28F0:34FD
cs=0x28f0;eip=0x003500; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 94693 mov     ax, es:[bx+8] ;~ 28F0:3500
cs=0x28f0;eip=0x003504; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 94694 mov     dx, es:[bx+0Ah] ;~ 28F0:3504
cs=0x28f0;eip=0x003508; 	T(MOV(cl, 8));	// 94695 mov     cl, 8 ;~ 28F0:3508
cs=0x28f0;eip=0x00350a; 	R(CALLF(sub_10240,0));	// 94696 call    sub_10240 ;~ 28F0:350A
cs=0x28f0;eip=0x00350f; 	X(PUSH(dx));	// 94697 push    dx ;~ 28F0:350F
cs=0x28f0;eip=0x003510; 	X(PUSH(ax));	// 94698 push    ax ;~ 28F0:3510
cs=0x28f0;eip=0x003511; 	R(CALLF(sub_105c2,0));	// 94699 call    sub_105C2 ;~ 28F0:3511
cs=0x28f0;eip=0x003516; 	T(MOV(cl, 8));	// 94700 mov     cl, 8 ;~ 28F0:3516
cs=0x28f0;eip=0x003518; 	R(CALLF(sub_10240,0));	// 94701 call    sub_10240 ;~ 28F0:3518
cs=0x28f0;eip=0x00351d; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_10))));	// 94702 les     bx, [bp+var_10] ;~ 28F0:351D
cs=0x28f0;eip=0x003520; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 94703 mov     es:[bx], ax ;~ 28F0:3520
cs=0x28f0;eip=0x003523; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 94704 mov     es:[bx+2], dx ;~ 28F0:3523
cs=0x28f0;eip=0x003527; 	T(MOV(sp, bp));	// 94705 mov     sp, bp ;~ 28F0:3527
cs=0x28f0;eip=0x003529; 	X(POP(bp));	// 94706 pop     bp ;~ 28F0:3529
cs=0x28f0;eip=0x00352a; 	R(RETN(4));	// 94707 retn    4 ;~ 28F0:352A
sub_3aa0d:
	// 94715 
#undef var_8
#define var_8 -8
	// 94717 var_8           = word ptr -8 ;~ 28F0:352D
#undef var_6
#define var_6 -6
	// 94718 var_6           = word ptr -6 ;~ 28F0:352D
#undef var_4
#define var_4 -4
	// 94719 var_4           = word ptr -4 ;~ 28F0:352D
#undef var_2
#define var_2 -2
	// 94720 var_2           = word ptr -2 ;~ 28F0:352D
#undef arg_4
#define arg_4 8
	// 94721 arg_4           = word ptr  8 ;~ 28F0:352D
#undef arg_6
#define arg_6 0x0A
	// 94722 arg_6           = dword ptr  0Ah ;~ 28F0:352D
cs=0x28f0;eip=0x00352d; 	X(PUSH(bp));	// 94724 push    bp ;~ 28F0:352D
cs=0x28f0;eip=0x00352e; 	T(MOV(bp, sp));	// 94725 mov     bp, sp ;~ 28F0:352E
cs=0x28f0;eip=0x003530; 	T(SUB(sp, 8));	// 94726 sub     sp, 8 ;~ 28F0:3530
cs=0x28f0;eip=0x003533; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94727 les     bx, [bp+arg_6] ;~ 28F0:3533
cs=0x28f0;eip=0x003536; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x276))));	// 94728 mov     ax, es:[bx+276h] ;~ 28F0:3536
cs=0x28f0;eip=0x00353b; 	T(OR(ax, *(dw*)(raddr(es,bx+0x278))));	// 94729 or      ax, es:[bx+278h] ;~ 28F0:353B
cs=0x28f0;eip=0x003540; 	R(JNZ(loc_3aa25));	// 94730 jnz     short loc_3AA25 ;~ 28F0:3540
cs=0x28f0;eip=0x003542; 	R(JMP(loc_3ab7a));	// 94731 jmp     loc_3AB7A ;~ 28F0:3542
loc_3aa25:
	// 10476 
cs=0x28f0;eip=0x003545; 	T(CMP(*(dw*)(raddr(es,bx+0x21A)), 0));	// 94735 cmp     word ptr es:[bx+21Ah], 0 ;~ 28F0:3545
cs=0x28f0;eip=0x00354b; 	R(JGE(loc_3aa30));	// 94736 jge     short loc_3AA30 ;~ 28F0:354B
cs=0x28f0;eip=0x00354d; 	R(JMP(loc_3ab7a));	// 94737 jmp     loc_3AB7A ;~ 28F0:354D
loc_3aa30:
	// 10477 
cs=0x28f0;eip=0x003550; 	R(JG(loc_3aa3d));	// 94741 jg      short loc_3AA3D ;~ 28F0:3550
cs=0x28f0;eip=0x003552; 	T(CMP(*(dw*)(raddr(es,bx+0x218)), 0));	// 94742 cmp     word ptr es:[bx+218h], 0 ;~ 28F0:3552
cs=0x28f0;eip=0x003558; 	R(JNZ(loc_3aa3d));	// 94743 jnz     short loc_3AA3D ;~ 28F0:3558
cs=0x28f0;eip=0x00355a; 	R(JMP(loc_3ab7a));	// 94744 jmp     loc_3AB7A ;~ 28F0:355A
loc_3aa3d:
	// 10478 
cs=0x28f0;eip=0x00355d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 94749 mov     ax, es:[bx+218h] ;~ 28F0:355D
cs=0x28f0;eip=0x003562; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 94750 mov     dx, es:[bx+21Ah] ;~ 28F0:3562
cs=0x28f0;eip=0x003567; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94751 mov     [bp+var_8], ax ;~ 28F0:3567
cs=0x28f0;eip=0x00356a; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94752 mov     [bp+var_6], dx ;~ 28F0:356A
cs=0x28f0;eip=0x00356d; 	T(CMP(*(raddr(es,bx+0x217)), 0));	// 94753 cmp     byte ptr es:[bx+217h], 0 ;~ 28F0:356D
cs=0x28f0;eip=0x003573; 	R(JZ(loc_3aa96));	// 94754 jz      short loc_3AA96 ;~ 28F0:3573
cs=0x28f0;eip=0x003575; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x220))));	// 94755 mov     ax, es:[bx+220h] ;~ 28F0:3575
cs=0x28f0;eip=0x00357a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x222))));	// 94756 mov     dx, es:[bx+222h] ;~ 28F0:357A
cs=0x28f0;eip=0x00357f; 	T(MOV(cl, 8));	// 94757 mov     cl, 8 ;~ 28F0:357F
cs=0x28f0;eip=0x003581; 	R(CALLF(sub_10240,0));	// 94758 call    sub_10240 ;~ 28F0:3581
cs=0x28f0;eip=0x003586; 	X(PUSH(dx));	// 94759 push    dx ;~ 28F0:3586
cs=0x28f0;eip=0x003587; 	X(PUSH(ax));	// 94760 push    ax ;~ 28F0:3587
cs=0x28f0;eip=0x003588; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 94761 push    [bp+var_6] ;~ 28F0:3588
cs=0x28f0;eip=0x00358b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 94762 push    [bp+var_8] ;~ 28F0:358B
cs=0x28f0;eip=0x00358e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94763 les     bx, [bp+arg_6] ;~ 28F0:358E
cs=0x28f0;eip=0x003591; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x230))));	// 94764 mov     ax, es:[bx+230h] ;~ 28F0:3591
cs=0x28f0;eip=0x003596; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x232))));	// 94765 mov     dx, es:[bx+232h] ;~ 28F0:3596
cs=0x28f0;eip=0x00359b; 	T(MOV(cl, 8));	// 94766 mov     cl, 8 ;~ 28F0:359B
cs=0x28f0;eip=0x00359d; 	R(CALLF(sub_10240,0));	// 94767 call    sub_10240 ;~ 28F0:359D
cs=0x28f0;eip=0x0035a2; 	X(PUSH(dx));	// 94768 push    dx ;~ 28F0:35A2
cs=0x28f0;eip=0x0035a3; 	X(PUSH(ax));	// 94769 push    ax ;~ 28F0:35A3
cs=0x28f0;eip=0x0035a4; 	R(CALLF(sub_105c2,0));	// 94770 call    sub_105C2 ;~ 28F0:35A4
cs=0x28f0;eip=0x0035a9; 	X(PUSH(dx));	// 94771 push    dx ;~ 28F0:35A9
cs=0x28f0;eip=0x0035aa; 	X(PUSH(ax));	// 94772 push    ax ;~ 28F0:35AA
cs=0x28f0;eip=0x0035ab; 	R(CALLF(sub_10526,0));	// 94773 call    sub_10526 ;~ 28F0:35AB
cs=0x28f0;eip=0x0035b0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94774 mov     [bp+var_8], ax ;~ 28F0:35B0
cs=0x28f0;eip=0x0035b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94775 mov     [bp+var_6], dx ;~ 28F0:35B3
loc_3aa96:
	// 10479 
cs=0x28f0;eip=0x0035b6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94778 les     bx, [bp+arg_6] ;~ 28F0:35B6
cs=0x28f0;eip=0x0035b9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x296))));	// 94779 mov     ax, es:[bx+296h] ;~ 28F0:35B9
cs=0x28f0;eip=0x0035be; 	T(CWD);	// 94780 cwd ;~ 28F0:35BE
cs=0x28f0;eip=0x0035bf; 	X(PUSH(dx));	// 94781 push    dx ;~ 28F0:35BF
cs=0x28f0;eip=0x0035c0; 	X(PUSH(ax));	// 94782 push    ax ;~ 28F0:35C0
cs=0x28f0;eip=0x0035c1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x220))));	// 94783 mov     ax, es:[bx+220h] ;~ 28F0:35C1
cs=0x28f0;eip=0x0035c6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x222))));	// 94784 mov     dx, es:[bx+222h] ;~ 28F0:35C6
cs=0x28f0;eip=0x0035cb; 	T(MOV(cl, 8));	// 94785 mov     cl, 8 ;~ 28F0:35CB
cs=0x28f0;eip=0x0035cd; 	R(CALLF(sub_10240,0));	// 94786 call    sub_10240 ;~ 28F0:35CD
cs=0x28f0;eip=0x0035d2; 	X(PUSH(dx));	// 94787 push    dx ;~ 28F0:35D2
cs=0x28f0;eip=0x0035d3; 	X(PUSH(ax));	// 94788 push    ax ;~ 28F0:35D3
cs=0x28f0;eip=0x0035d4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 94789 mov     ax, [bp+var_8] ;~ 28F0:35D4
cs=0x28f0;eip=0x0035d7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 94790 mov     dx, [bp+var_6] ;~ 28F0:35D7
cs=0x28f0;eip=0x0035da; 	T(MOV(cl, 8));	// 94791 mov     cl, 8 ;~ 28F0:35DA
cs=0x28f0;eip=0x0035dc; 	R(CALLF(sub_10240,0));	// 94792 call    sub_10240 ;~ 28F0:35DC
cs=0x28f0;eip=0x0035e1; 	X(PUSH(dx));	// 94793 push    dx ;~ 28F0:35E1
cs=0x28f0;eip=0x0035e2; 	X(PUSH(ax));	// 94794 push    ax ;~ 28F0:35E2
cs=0x28f0;eip=0x0035e3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94795 les     bx, [bp+arg_6] ;~ 28F0:35E3
cs=0x28f0;eip=0x0035e6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 94796 mov     ax, es:[bx+25Eh] ;~ 28F0:35E6
cs=0x28f0;eip=0x0035eb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 94797 mov     dx, es:[bx+260h] ;~ 28F0:35EB
cs=0x28f0;eip=0x0035f0; 	T(MOV(cl, 8));	// 94798 mov     cl, 8 ;~ 28F0:35F0
cs=0x28f0;eip=0x0035f2; 	R(CALLF(sub_10240,0));	// 94799 call    sub_10240 ;~ 28F0:35F2
cs=0x28f0;eip=0x0035f7; 	X(PUSH(dx));	// 94800 push    dx ;~ 28F0:35F7
cs=0x28f0;eip=0x0035f8; 	X(PUSH(ax));	// 94801 push    ax ;~ 28F0:35F8
cs=0x28f0;eip=0x0035f9; 	R(CALLF(sub_105c2,0));	// 94802 call    sub_105C2 ;~ 28F0:35F9
cs=0x28f0;eip=0x0035fe; 	X(PUSH(dx));	// 94803 push    dx ;~ 28F0:35FE
cs=0x28f0;eip=0x0035ff; 	X(PUSH(ax));	// 94804 push    ax ;~ 28F0:35FF
cs=0x28f0;eip=0x003600; 	R(CALLF(sub_10526,0));	// 94805 call    sub_10526 ;~ 28F0:3600
cs=0x28f0;eip=0x003605; 	X(PUSH(dx));	// 94806 push    dx ;~ 28F0:3605
cs=0x28f0;eip=0x003606; 	X(PUSH(ax));	// 94807 push    ax ;~ 28F0:3606
cs=0x28f0;eip=0x003607; 	R(CALLF(sub_105c2,0));	// 94808 call    sub_105C2 ;~ 28F0:3607
cs=0x28f0;eip=0x00360c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94809 mov     [bp+var_8], ax ;~ 28F0:360C
cs=0x28f0;eip=0x00360f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94810 mov     [bp+var_6], dx ;~ 28F0:360F
cs=0x28f0;eip=0x003612; 	T(MOV(cl, 8));	// 94811 mov     cl, 8 ;~ 28F0:3612
cs=0x28f0;eip=0x003614; 	R(CALLF(sub_10240,0));	// 94812 call    sub_10240 ;~ 28F0:3614
cs=0x28f0;eip=0x003619; 	X(PUSH(dx));	// 94813 push    dx ;~ 28F0:3619
cs=0x28f0;eip=0x00361a; 	X(PUSH(ax));	// 94814 push    ax ;~ 28F0:361A
cs=0x28f0;eip=0x00361b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94815 les     bx, [bp+arg_6] ;~ 28F0:361B
cs=0x28f0;eip=0x00361e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EA))));	// 94816 mov     ax, es:[bx+2EAh] ;~ 28F0:361E
cs=0x28f0;eip=0x003623; 	T(CWD);	// 94817 cwd ;~ 28F0:3623
cs=0x28f0;eip=0x003624; 	X(PUSH(dx));	// 94818 push    dx ;~ 28F0:3624
cs=0x28f0;eip=0x003625; 	X(PUSH(ax));	// 94819 push    ax ;~ 28F0:3625
cs=0x28f0;eip=0x003626; 	R(CALLF(sub_105c2,0));	// 94820 call    sub_105C2 ;~ 28F0:3626
cs=0x28f0;eip=0x00362b; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 94821 mov     [bp+var_8], ax ;~ 28F0:362B
cs=0x28f0;eip=0x00362e; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 94822 mov     [bp+var_6], dx ;~ 28F0:362E
cs=0x28f0;eip=0x003631; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94823 les     bx, [bp+arg_6] ;~ 28F0:3631
cs=0x28f0;eip=0x003634; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 94824 mov     ax, es:[bx+128h] ;~ 28F0:3634
cs=0x28f0;eip=0x003639; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 94825 mov     dx, es:[bx+12Ah] ;~ 28F0:3639
cs=0x28f0;eip=0x00363e; 	T(MOV(cl, 8));	// 94826 mov     cl, 8 ;~ 28F0:363E
cs=0x28f0;eip=0x003640; 	R(CALLF(sub_10240,0));	// 94827 call    sub_10240 ;~ 28F0:3640
cs=0x28f0;eip=0x003645; 	X(PUSH(dx));	// 94828 push    dx ;~ 28F0:3645
cs=0x28f0;eip=0x003646; 	X(PUSH(ax));	// 94829 push    ax ;~ 28F0:3646
cs=0x28f0;eip=0x003647; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 94830 mov     ax, [bp+var_8] ;~ 28F0:3647
cs=0x28f0;eip=0x00364a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 94831 mov     dx, [bp+var_6] ;~ 28F0:364A
cs=0x28f0;eip=0x00364d; 	T(MOV(cl, 9));	// 94832 mov     cl, 9 ;~ 28F0:364D
cs=0x28f0;eip=0x00364f; 	R(CALLF(sub_10240,0));	// 94833 call    sub_10240 ;~ 28F0:364F
cs=0x28f0;eip=0x003654; 	X(PUSH(dx));	// 94834 push    dx ;~ 28F0:3654
cs=0x28f0;eip=0x003655; 	X(PUSH(ax));	// 94835 push    ax ;~ 28F0:3655
cs=0x28f0;eip=0x003656; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94836 les     bx, [bp+arg_6] ;~ 28F0:3656
cs=0x28f0;eip=0x003659; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 94837 mov     ax, es:[bx+120h] ;~ 28F0:3659
cs=0x28f0;eip=0x00365e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 94838 mov     dx, es:[bx+122h] ;~ 28F0:365E
cs=0x28f0;eip=0x003663; 	T(MOV(cl, 8));	// 94839 mov     cl, 8 ;~ 28F0:3663
cs=0x28f0;eip=0x003665; 	R(CALLF(sub_10240,0));	// 94840 call    sub_10240 ;~ 28F0:3665
cs=0x28f0;eip=0x00366a; 	X(PUSH(dx));	// 94841 push    dx ;~ 28F0:366A
cs=0x28f0;eip=0x00366b; 	X(PUSH(ax));	// 94842 push    ax ;~ 28F0:366B
cs=0x28f0;eip=0x00366c; 	R(CALLF(sub_105c2,0));	// 94843 call    sub_105C2 ;~ 28F0:366C
cs=0x28f0;eip=0x003671; 	X(PUSH(dx));	// 94844 push    dx ;~ 28F0:3671
cs=0x28f0;eip=0x003672; 	X(PUSH(ax));	// 94845 push    ax ;~ 28F0:3672
cs=0x28f0;eip=0x003673; 	R(CALLF(sub_10526,0));	// 94846 call    sub_10526 ;~ 28F0:3673
cs=0x28f0;eip=0x003678; 	T(MOV(dh, dl));	// 94847 mov     dh, dl ;~ 28F0:3678
cs=0x28f0;eip=0x00367a; 	T(MOV(dl, ah));	// 94848 mov     dl, ah ;~ 28F0:367A
cs=0x28f0;eip=0x00367c; 	T(MOV(ah, al));	// 94849 mov     ah, al ;~ 28F0:367C
cs=0x28f0;eip=0x00367e; 	T(SUB(al, al));	// 94850 sub     al, al ;~ 28F0:367E
cs=0x28f0;eip=0x003680; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 94851 mov     [bp+var_4], ax ;~ 28F0:3680
cs=0x28f0;eip=0x003683; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 94852 mov     [bp+var_2], dx ;~ 28F0:3683
cs=0x28f0;eip=0x003686; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 94853 mov     bx, [bp+arg_4] ;~ 28F0:3686
cs=0x28f0;eip=0x003689; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 94854 mov     ax, [bp+var_8] ;~ 28F0:3689
cs=0x28f0;eip=0x00368c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 94855 mov     dx, [bp+var_6] ;~ 28F0:368C
cs=0x28f0;eip=0x00368f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94856 sub     ax, [bp+var_4] ;~ 28F0:368F
cs=0x28f0;eip=0x003692; 	T(SBB(dx, *(dw*)(raddr(ss,bp+var_2))));	// 94857 sbb     dx, [bp+var_2] ;~ 28F0:3692
cs=0x28f0;eip=0x003695; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 94858 add     [bx], ax ;~ 28F0:3695
cs=0x28f0;eip=0x003697; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 94859 adc     [bx+2], dx ;~ 28F0:3697
loc_3ab7a:
	// 10480 
cs=0x28f0;eip=0x00369a; 	T(MOV(sp, bp));	// 94863 mov     sp, bp ;~ 28F0:369A
cs=0x28f0;eip=0x00369c; 	X(POP(bp));	// 94864 pop     bp ;~ 28F0:369C
cs=0x28f0;eip=0x00369d; 	R(RETN(0x0A));	// 94865 retn    0Ah ;~ 28F0:369D
sub_3ab80:
	// 94873 
#undef var_a
#define var_a -0x0A
	// 94875 var_A           = word ptr -0Ah ;~ 28F0:36A0
#undef var_8
#define var_8 -8
	// 94876 var_8           = word ptr -8 ;~ 28F0:36A0
#undef var_6
#define var_6 -6
	// 94877 var_6           = word ptr -6 ;~ 28F0:36A0
#undef var_4
#define var_4 -4
	// 94878 var_4           = word ptr -4 ;~ 28F0:36A0
#undef var_2
#define var_2 -2
	// 94879 var_2           = word ptr -2 ;~ 28F0:36A0
#undef arg_4
#define arg_4 8
	// 94880 arg_4           = word ptr  8 ;~ 28F0:36A0
#undef arg_6
#define arg_6 0x0A
	// 94881 arg_6           = dword ptr  0Ah ;~ 28F0:36A0
cs=0x28f0;eip=0x0036a0; 	X(PUSH(bp));	// 94883 push    bp ;~ 28F0:36A0
cs=0x28f0;eip=0x0036a1; 	T(MOV(bp, sp));	// 94884 mov     bp, sp ;~ 28F0:36A1
cs=0x28f0;eip=0x0036a3; 	T(SUB(sp, 0x0A));	// 94885 sub     sp, 0Ah ;~ 28F0:36A3
cs=0x28f0;eip=0x0036a6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94886 les     bx, [bp+arg_6] ;~ 28F0:36A6
cs=0x28f0;eip=0x0036a9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x296))));	// 94887 mov     ax, es:[bx+296h] ;~ 28F0:36A9
cs=0x28f0;eip=0x0036ae; 	T(CWD);	// 94888 cwd ;~ 28F0:36AE
cs=0x28f0;eip=0x0036af; 	X(PUSH(dx));	// 94889 push    dx ;~ 28F0:36AF
cs=0x28f0;eip=0x0036b0; 	X(PUSH(ax));	// 94890 push    ax ;~ 28F0:36B0
cs=0x28f0;eip=0x0036b1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 94891 mov     ax, es:[bx+25Eh] ;~ 28F0:36B1
cs=0x28f0;eip=0x0036b6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 94892 mov     dx, es:[bx+260h] ;~ 28F0:36B6
cs=0x28f0;eip=0x0036bb; 	T(MOV(cl, 8));	// 94893 mov     cl, 8 ;~ 28F0:36BB
cs=0x28f0;eip=0x0036bd; 	R(CALLF(sub_10240,0));	// 94894 call    sub_10240 ;~ 28F0:36BD
cs=0x28f0;eip=0x0036c2; 	X(PUSH(dx));	// 94895 push    dx ;~ 28F0:36C2
cs=0x28f0;eip=0x0036c3; 	X(PUSH(ax));	// 94896 push    ax ;~ 28F0:36C3
cs=0x28f0;eip=0x0036c4; 	R(CALLF(sub_105c2,0));	// 94897 call    sub_105C2 ;~ 28F0:36C4
cs=0x28f0;eip=0x0036c9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 94898 mov     [bp+var_4], ax ;~ 28F0:36C9
cs=0x28f0;eip=0x0036cc; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 94899 mov     [bp+var_2], dx ;~ 28F0:36CC
cs=0x28f0;eip=0x0036cf; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94900 les     bx, [bp+arg_6] ;~ 28F0:36CF
cs=0x28f0;eip=0x0036d2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 94901 mov     ax, es:[bx+128h] ;~ 28F0:36D2
cs=0x28f0;eip=0x0036d7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 94902 mov     dx, es:[bx+12Ah] ;~ 28F0:36D7
cs=0x28f0;eip=0x0036dc; 	T(MOV(cl, 8));	// 94903 mov     cl, 8 ;~ 28F0:36DC
cs=0x28f0;eip=0x0036de; 	R(CALLF(sub_10240,0));	// 94904 call    sub_10240 ;~ 28F0:36DE
cs=0x28f0;eip=0x0036e3; 	X(PUSH(dx));	// 94905 push    dx ;~ 28F0:36E3
cs=0x28f0;eip=0x0036e4; 	X(PUSH(ax));	// 94906 push    ax ;~ 28F0:36E4
cs=0x28f0;eip=0x0036e5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94907 mov     ax, [bp+var_4] ;~ 28F0:36E5
cs=0x28f0;eip=0x0036e8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 94908 mov     dx, [bp+var_2] ;~ 28F0:36E8
cs=0x28f0;eip=0x0036eb; 	T(MOV(cl, 9));	// 94909 mov     cl, 9 ;~ 28F0:36EB
cs=0x28f0;eip=0x0036ed; 	R(CALLF(sub_10240,0));	// 94910 call    sub_10240 ;~ 28F0:36ED
cs=0x28f0;eip=0x0036f2; 	X(PUSH(dx));	// 94911 push    dx ;~ 28F0:36F2
cs=0x28f0;eip=0x0036f3; 	X(PUSH(ax));	// 94912 push    ax ;~ 28F0:36F3
cs=0x28f0;eip=0x0036f4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94913 les     bx, [bp+arg_6] ;~ 28F0:36F4
cs=0x28f0;eip=0x0036f7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 94914 mov     ax, es:[bx+120h] ;~ 28F0:36F7
cs=0x28f0;eip=0x0036fc; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 94915 mov     dx, es:[bx+122h] ;~ 28F0:36FC
cs=0x28f0;eip=0x003701; 	T(MOV(cl, 8));	// 94916 mov     cl, 8 ;~ 28F0:3701
cs=0x28f0;eip=0x003703; 	R(CALLF(sub_10240,0));	// 94917 call    sub_10240 ;~ 28F0:3703
cs=0x28f0;eip=0x003708; 	X(PUSH(dx));	// 94918 push    dx ;~ 28F0:3708
cs=0x28f0;eip=0x003709; 	X(PUSH(ax));	// 94919 push    ax ;~ 28F0:3709
cs=0x28f0;eip=0x00370a; 	R(CALLF(sub_105c2,0));	// 94920 call    sub_105C2 ;~ 28F0:370A
cs=0x28f0;eip=0x00370f; 	X(PUSH(dx));	// 94921 push    dx ;~ 28F0:370F
cs=0x28f0;eip=0x003710; 	X(PUSH(ax));	// 94922 push    ax ;~ 28F0:3710
cs=0x28f0;eip=0x003711; 	R(CALLF(sub_10526,0));	// 94923 call    sub_10526 ;~ 28F0:3711
cs=0x28f0;eip=0x003716; 	T(MOV(dh, dl));	// 94924 mov     dh, dl ;~ 28F0:3716
cs=0x28f0;eip=0x003718; 	T(MOV(dl, ah));	// 94925 mov     dl, ah ;~ 28F0:3718
cs=0x28f0;eip=0x00371a; 	T(MOV(ah, al));	// 94926 mov     ah, al ;~ 28F0:371A
cs=0x28f0;eip=0x00371c; 	T(SUB(al, al));	// 94927 sub     al, al ;~ 28F0:371C
cs=0x28f0;eip=0x00371e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 94928 mov     [bp+var_A], ax ;~ 28F0:371E
cs=0x28f0;eip=0x003721; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 94929 mov     [bp+var_8], dx ;~ 28F0:3721
cs=0x28f0;eip=0x003724; 	T(MOV(cl, 8));	// 94930 mov     cl, 8 ;~ 28F0:3724
cs=0x28f0;eip=0x003726; 	R(CALLF(sub_10240,0));	// 94931 call    sub_10240 ;~ 28F0:3726
cs=0x28f0;eip=0x00372b; 	X(PUSH(dx));	// 94932 push    dx ;~ 28F0:372B
cs=0x28f0;eip=0x00372c; 	X(PUSH(ax));	// 94933 push    ax ;~ 28F0:372C
cs=0x28f0;eip=0x00372d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94934 les     bx, [bp+arg_6] ;~ 28F0:372D
cs=0x28f0;eip=0x003730; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E8))));	// 94935 push    word ptr es:[bx+2E8h] ;~ 28F0:3730
cs=0x28f0;eip=0x003735; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E6))));	// 94936 push    word ptr es:[bx+2E6h] ;~ 28F0:3735
cs=0x28f0;eip=0x00373a; 	R(CALLF(sub_105c2,0));	// 94937 call    sub_105C2 ;~ 28F0:373A
cs=0x28f0;eip=0x00373f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 94938 mov     [bp+var_A], ax ;~ 28F0:373F
cs=0x28f0;eip=0x003742; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 94939 mov     [bp+var_8], dx ;~ 28F0:3742
cs=0x28f0;eip=0x003745; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94940 les     bx, [bp+arg_6] ;~ 28F0:3745
cs=0x28f0;eip=0x003748; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 94941 mov     ax, es:[bx+2FAh] ;~ 28F0:3748
cs=0x28f0;eip=0x00374d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 94942 mov     dx, es:[bx+2FCh] ;~ 28F0:374D
cs=0x28f0;eip=0x003752; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 94943 add     ax, es:[bx+302h] ;~ 28F0:3752
cs=0x28f0;eip=0x003757; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 94944 adc     dx, es:[bx+304h] ;~ 28F0:3757
cs=0x28f0;eip=0x00375c; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 94945 add     ax, es:[bx+20Eh] ;~ 28F0:375C
cs=0x28f0;eip=0x003761; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 94946 adc     dx, es:[bx+210h] ;~ 28F0:3761
cs=0x28f0;eip=0x003766; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 94947 les     bx, es:[bx+31Ch] ;~ 28F0:3766
cs=0x28f0;eip=0x00376b; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 94948 cmp     dx, es:[bx+0Ch] ;~ 28F0:376B
cs=0x28f0;eip=0x00376f; 	R(JL(loc_3ac69));	// 94949 jl      short loc_3AC69 ;~ 28F0:376F
cs=0x28f0;eip=0x003771; 	R(JG(loc_3ac59));	// 94950 jg      short loc_3AC59 ;~ 28F0:3771
cs=0x28f0;eip=0x003773; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 94951 cmp     ax, es:[bx+0Ah] ;~ 28F0:3773
cs=0x28f0;eip=0x003777; 	R(JBE(loc_3ac69));	// 94952 jbe     short loc_3AC69 ;~ 28F0:3777
loc_3ac59:
	// 10481 
cs=0x28f0;eip=0x003779; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 94955 mov     ax, [bp+var_A] ;~ 28F0:3779
cs=0x28f0;eip=0x00377c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 94956 mov     dx, [bp+var_8] ;~ 28F0:377C
cs=0x28f0;eip=0x00377f; 	T(SAR(dx, 1));	// 94957 sar     dx, 1 ;~ 28F0:377F
cs=0x28f0;eip=0x003781; 	T(RCR(ax, 1));	// 94958 rcr     ax, 1 ;~ 28F0:3781
cs=0x28f0;eip=0x003783; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), ax));	// 94959 add     [bp+var_A], ax ;~ 28F0:3783
cs=0x28f0;eip=0x003786; 	X(ADC(*(dw*)(raddr(ss,bp+var_8)), dx));	// 94960 adc     [bp+var_8], dx ;~ 28F0:3786
loc_3ac69:
	// 10482 
cs=0x28f0;eip=0x003789; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 94964 mov     bx, [bp+arg_4] ;~ 28F0:3789
cs=0x28f0;eip=0x00378c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 94965 mov     ax, [bp+var_A] ;~ 28F0:378C
cs=0x28f0;eip=0x00378f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 94966 mov     dx, [bp+var_8] ;~ 28F0:378F
cs=0x28f0;eip=0x003792; 	T(NEG(ax));	// 94967 neg     ax ;~ 28F0:3792
cs=0x28f0;eip=0x003794; 	T(ADC(dx, 0));	// 94968 adc     dx, 0 ;~ 28F0:3794
cs=0x28f0;eip=0x003797; 	T(NEG(dx));	// 94969 neg     dx ;~ 28F0:3797
cs=0x28f0;eip=0x003799; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 94970 add     [bx], ax ;~ 28F0:3799
cs=0x28f0;eip=0x00379b; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 94971 adc     [bx+2], dx ;~ 28F0:379B
cs=0x28f0;eip=0x00379e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94972 les     bx, [bp+arg_6] ;~ 28F0:379E
cs=0x28f0;eip=0x0037a1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x148))));	// 94973 mov     ax, es:[bx+148h] ;~ 28F0:37A1
cs=0x28f0;eip=0x0037a6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x14A))));	// 94974 mov     dx, es:[bx+14Ah] ;~ 28F0:37A6
cs=0x28f0;eip=0x0037ab; 	T(MOV(cl, 8));	// 94975 mov     cl, 8 ;~ 28F0:37AB
cs=0x28f0;eip=0x0037ad; 	R(CALLF(sub_10240,0));	// 94976 call    sub_10240 ;~ 28F0:37AD
cs=0x28f0;eip=0x0037b2; 	X(PUSH(dx));	// 94977 push    dx ;~ 28F0:37B2
cs=0x28f0;eip=0x0037b3; 	X(PUSH(ax));	// 94978 push    ax ;~ 28F0:37B3
cs=0x28f0;eip=0x0037b4; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 94979 mov     ax, [bp+var_4] ;~ 28F0:37B4
cs=0x28f0;eip=0x0037b7; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 94980 mov     dx, [bp+var_2] ;~ 28F0:37B7
cs=0x28f0;eip=0x0037ba; 	T(MOV(cl, 9));	// 94981 mov     cl, 9 ;~ 28F0:37BA
cs=0x28f0;eip=0x0037bc; 	R(CALLF(sub_10240,0));	// 94982 call    sub_10240 ;~ 28F0:37BC
cs=0x28f0;eip=0x0037c1; 	X(PUSH(dx));	// 94983 push    dx ;~ 28F0:37C1
cs=0x28f0;eip=0x0037c2; 	X(PUSH(ax));	// 94984 push    ax ;~ 28F0:37C2
cs=0x28f0;eip=0x0037c3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 94985 les     bx, [bp+arg_6] ;~ 28F0:37C3
cs=0x28f0;eip=0x0037c6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 94986 mov     ax, es:[bx+140h] ;~ 28F0:37C6
cs=0x28f0;eip=0x0037cb; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 94987 mov     dx, es:[bx+142h] ;~ 28F0:37CB
cs=0x28f0;eip=0x0037d0; 	T(MOV(cl, 8));	// 94988 mov     cl, 8 ;~ 28F0:37D0
cs=0x28f0;eip=0x0037d2; 	R(CALLF(sub_10240,0));	// 94989 call    sub_10240 ;~ 28F0:37D2
cs=0x28f0;eip=0x0037d7; 	X(PUSH(dx));	// 94990 push    dx ;~ 28F0:37D7
cs=0x28f0;eip=0x0037d8; 	X(PUSH(ax));	// 94991 push    ax ;~ 28F0:37D8
cs=0x28f0;eip=0x0037d9; 	R(CALLF(sub_105c2,0));	// 94992 call    sub_105C2 ;~ 28F0:37D9
cs=0x28f0;eip=0x0037de; 	X(PUSH(dx));	// 94993 push    dx ;~ 28F0:37DE
cs=0x28f0;eip=0x0037df; 	X(PUSH(ax));	// 94994 push    ax ;~ 28F0:37DF
cs=0x28f0;eip=0x0037e0; 	R(CALLF(sub_10526,0));	// 94995 call    sub_10526 ;~ 28F0:37E0
cs=0x28f0;eip=0x0037e5; 	T(MOV(dh, dl));	// 94996 mov     dh, dl ;~ 28F0:37E5
cs=0x28f0;eip=0x0037e7; 	T(MOV(dl, ah));	// 94997 mov     dl, ah ;~ 28F0:37E7
cs=0x28f0;eip=0x0037e9; 	T(MOV(ah, al));	// 94998 mov     ah, al ;~ 28F0:37E9
cs=0x28f0;eip=0x0037eb; 	T(SUB(al, al));	// 94999 sub     al, al ;~ 28F0:37EB
cs=0x28f0;eip=0x0037ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95000 mov     [bp+var_A], ax ;~ 28F0:37ED
cs=0x28f0;eip=0x0037f0; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95001 mov     [bp+var_8], dx ;~ 28F0:37F0
cs=0x28f0;eip=0x0037f3; 	T(MOV(cl, 8));	// 95002 mov     cl, 8 ;~ 28F0:37F3
cs=0x28f0;eip=0x0037f5; 	R(CALLF(sub_10240,0));	// 95003 call    sub_10240 ;~ 28F0:37F5
cs=0x28f0;eip=0x0037fa; 	X(PUSH(dx));	// 95004 push    dx ;~ 28F0:37FA
cs=0x28f0;eip=0x0037fb; 	X(PUSH(ax));	// 95005 push    ax ;~ 28F0:37FB
cs=0x28f0;eip=0x0037fc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95006 les     bx, [bp+arg_6] ;~ 28F0:37FC
cs=0x28f0;eip=0x0037ff; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E8))));	// 95007 push    word ptr es:[bx+2E8h] ;~ 28F0:37FF
cs=0x28f0;eip=0x003804; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E6))));	// 95008 push    word ptr es:[bx+2E6h] ;~ 28F0:3804
cs=0x28f0;eip=0x003809; 	R(CALLF(sub_105c2,0));	// 95009 call    sub_105C2 ;~ 28F0:3809
cs=0x28f0;eip=0x00380e; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95010 mov     [bp+var_A], ax ;~ 28F0:380E
cs=0x28f0;eip=0x003811; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95011 mov     [bp+var_8], dx ;~ 28F0:3811
cs=0x28f0;eip=0x003814; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95012 mov     bx, [bp+arg_4] ;~ 28F0:3814
cs=0x28f0;eip=0x003817; 	T(NEG(ax));	// 95013 neg     ax ;~ 28F0:3817
cs=0x28f0;eip=0x003819; 	T(ADC(dx, 0));	// 95014 adc     dx, 0 ;~ 28F0:3819
cs=0x28f0;eip=0x00381c; 	T(NEG(dx));	// 95015 neg     dx ;~ 28F0:381C
cs=0x28f0;eip=0x00381e; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 95016 add     [bx+4], ax ;~ 28F0:381E
cs=0x28f0;eip=0x003821; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 95017 adc     [bx+6], dx ;~ 28F0:3821
cs=0x28f0;eip=0x003824; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95018 les     bx, [bp+arg_6] ;~ 28F0:3824
cs=0x28f0;eip=0x003827; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 2));	// 95019 cmp     word ptr es:[bx+306h], 2 ;~ 28F0:3827
cs=0x28f0;eip=0x00382d; 	R(JZ(loc_3ad12));	// 95020 jz      short loc_3AD12 ;~ 28F0:382D
cs=0x28f0;eip=0x00382f; 	R(JMP(loc_3adf3));	// 95021 jmp     loc_3ADF3 ;~ 28F0:382F
loc_3ad12:
	// 10483 
cs=0x28f0;eip=0x003832; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 95025 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:3832
cs=0x28f0;eip=0x003838; 	R(JGE(loc_3ad1d));	// 95026 jge     short loc_3AD1D ;~ 28F0:3838
cs=0x28f0;eip=0x00383a; 	R(JMP(loc_3adf3));	// 95027 jmp     loc_3ADF3 ;~ 28F0:383A
loc_3ad1d:
	// 10484 
cs=0x28f0;eip=0x00383d; 	R(JG(loc_3ad2a));	// 95031 jg      short loc_3AD2A ;~ 28F0:383D
cs=0x28f0;eip=0x00383f; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), 0));	// 95032 cmp     word ptr es:[bx+120h], 0 ;~ 28F0:383F
cs=0x28f0;eip=0x003845; 	R(JNZ(loc_3ad2a));	// 95033 jnz     short loc_3AD2A ;~ 28F0:3845
cs=0x28f0;eip=0x003847; 	R(JMP(loc_3adf3));	// 95034 jmp     loc_3ADF3 ;~ 28F0:3847
loc_3ad2a:
	// 10485 
cs=0x28f0;eip=0x00384a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95039 mov     ax, es:[bx+25Eh] ;~ 28F0:384A
cs=0x28f0;eip=0x00384f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95040 mov     dx, es:[bx+260h] ;~ 28F0:384F
cs=0x28f0;eip=0x003854; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95041 mov     [bp+var_4], ax ;~ 28F0:3854
cs=0x28f0;eip=0x003857; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95042 mov     [bp+var_2], dx ;~ 28F0:3857
cs=0x28f0;eip=0x00385a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2DC))));	// 95043 mov     ax, es:[bx+2DCh] ;~ 28F0:385A
cs=0x28f0;eip=0x00385f; 	T(CWD);	// 95044 cwd ;~ 28F0:385F
cs=0x28f0;eip=0x003860; 	X(PUSH(dx));	// 95045 push    dx ;~ 28F0:3860
cs=0x28f0;eip=0x003861; 	X(PUSH(ax));	// 95046 push    ax ;~ 28F0:3861
cs=0x28f0;eip=0x003862; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 95047 push    [bp+var_2] ;~ 28F0:3862
cs=0x28f0;eip=0x003865; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 95048 push    [bp+var_4] ;~ 28F0:3865
cs=0x28f0;eip=0x003868; 	R(CALLF(sub_10526,0));	// 95049 call    sub_10526 ;~ 28F0:3868
cs=0x28f0;eip=0x00386d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95050 mov     [bp+var_A], ax ;~ 28F0:386D
cs=0x28f0;eip=0x003870; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95051 mov     [bp+var_8], dx ;~ 28F0:3870
cs=0x28f0;eip=0x003873; 	X(PUSH(dx));	// 95052 push    dx ;~ 28F0:3873
cs=0x28f0;eip=0x003874; 	X(PUSH(ax));	// 95053 push    ax ;~ 28F0:3874
cs=0x28f0;eip=0x003875; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95054 les     bx, [bp+arg_6] ;~ 28F0:3875
cs=0x28f0;eip=0x003878; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2DE))));	// 95055 mov     ax, es:[bx+2DEh] ;~ 28F0:3878
cs=0x28f0;eip=0x00387d; 	T(CWD);	// 95056 cwd ;~ 28F0:387D
cs=0x28f0;eip=0x00387e; 	X(PUSH(dx));	// 95057 push    dx ;~ 28F0:387E
cs=0x28f0;eip=0x00387f; 	X(PUSH(ax));	// 95058 push    ax ;~ 28F0:387F
cs=0x28f0;eip=0x003880; 	T(CWD);	// 95059 cwd ;~ 28F0:3880
cs=0x28f0;eip=0x003881; 	X(PUSH(dx));	// 95060 push    dx ;~ 28F0:3881
cs=0x28f0;eip=0x003882; 	X(PUSH(ax));	// 95061 push    ax ;~ 28F0:3882
cs=0x28f0;eip=0x003883; 	R(CALLF(sub_105c2,0));	// 95062 call    sub_105C2 ;~ 28F0:3883
cs=0x28f0;eip=0x003888; 	X(PUSH(dx));	// 95063 push    dx ;~ 28F0:3888
cs=0x28f0;eip=0x003889; 	X(PUSH(ax));	// 95064 push    ax ;~ 28F0:3889
cs=0x28f0;eip=0x00388a; 	R(CALLF(sub_105c2,0));	// 95065 call    sub_105C2 ;~ 28F0:388A
cs=0x28f0;eip=0x00388f; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95066 mov     [bp+var_A], ax ;~ 28F0:388F
cs=0x28f0;eip=0x003892; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95067 mov     [bp+var_8], dx ;~ 28F0:3892
cs=0x28f0;eip=0x003895; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95068 les     bx, [bp+arg_6] ;~ 28F0:3895
cs=0x28f0;eip=0x003898; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x29C))));	// 95069 mov     ax, es:[bx+29Ch] ;~ 28F0:3898
cs=0x28f0;eip=0x00389d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29E))));	// 95070 mov     dx, es:[bx+29Eh] ;~ 28F0:389D
cs=0x28f0;eip=0x0038a2; 	T(MOV(cl, 5));	// 95071 mov     cl, 5 ;~ 28F0:38A2
cs=0x28f0;eip=0x0038a4; 	R(CALLF(sub_10240,0));	// 95072 call    sub_10240 ;~ 28F0:38A4
cs=0x28f0;eip=0x0038a9; 	X(PUSH(ax));	// 95073 push    ax ;~ 28F0:38A9
cs=0x28f0;eip=0x0038aa; 	R(CALLF(sub_24cf8,0));	// 95074 call    sub_24CF8 ;~ 28F0:38AA
cs=0x28f0;eip=0x0038af; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 95075 mov     [bp+var_6], ax ;~ 28F0:38AF
cs=0x28f0;eip=0x0038b2; 	X(PUSH(ax));	// 95076 push    ax ;~ 28F0:38B2
cs=0x28f0;eip=0x0038b3; 	R(CALLF(sub_27c9e,0));	// 95077 call    sub_27C9E ;~ 28F0:38B3
cs=0x28f0;eip=0x0038b8; 	X(PUSH(dx));	// 95078 push    dx ;~ 28F0:38B8
cs=0x28f0;eip=0x0038b9; 	X(PUSH(ax));	// 95079 push    ax ;~ 28F0:38B9
cs=0x28f0;eip=0x0038ba; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 95080 mov     ax, [bp+var_A] ;~ 28F0:38BA
cs=0x28f0;eip=0x0038bd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 95081 mov     dx, [bp+var_8] ;~ 28F0:38BD
cs=0x28f0;eip=0x0038c0; 	T(MOV(cl, 8));	// 95082 mov     cl, 8 ;~ 28F0:38C0
cs=0x28f0;eip=0x0038c2; 	R(CALLF(sub_10240,0));	// 95083 call    sub_10240 ;~ 28F0:38C2
cs=0x28f0;eip=0x0038c7; 	X(PUSH(dx));	// 95084 push    dx ;~ 28F0:38C7
cs=0x28f0;eip=0x0038c8; 	X(PUSH(ax));	// 95085 push    ax ;~ 28F0:38C8
cs=0x28f0;eip=0x0038c9; 	R(CALLF(sub_105c2,0));	// 95086 call    sub_105C2 ;~ 28F0:38C9
cs=0x28f0;eip=0x0038ce; 	T(MOV(cl, 8));	// 95087 mov     cl, 8 ;~ 28F0:38CE
cs=0x28f0;eip=0x0038d0; 	R(CALLF(sub_10240,0));	// 95088 call    sub_10240 ;~ 28F0:38D0
cs=0x28f0;eip=0x0038d5; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95089 mov     [bp+var_A], ax ;~ 28F0:38D5
cs=0x28f0;eip=0x0038d8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95090 mov     [bp+var_8], dx ;~ 28F0:38D8
cs=0x28f0;eip=0x0038db; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95091 les     bx, [bp+arg_6] ;~ 28F0:38DB
cs=0x28f0;eip=0x0038de; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2BC))));	// 95092 mov     ax, es:[bx+2BCh] ;~ 28F0:38DE
cs=0x28f0;eip=0x0038e3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2BE))));	// 95093 mov     dx, es:[bx+2BEh] ;~ 28F0:38E3
cs=0x28f0;eip=0x0038e8; 	T(MOV(cl, 8));	// 95094 mov     cl, 8 ;~ 28F0:38E8
cs=0x28f0;eip=0x0038ea; 	R(CALLF(sub_10240,0));	// 95095 call    sub_10240 ;~ 28F0:38EA
cs=0x28f0;eip=0x0038ef; 	X(PUSH(dx));	// 95096 push    dx ;~ 28F0:38EF
cs=0x28f0;eip=0x0038f0; 	X(PUSH(ax));	// 95097 push    ax ;~ 28F0:38F0
cs=0x28f0;eip=0x0038f1; 	T(ax = bp+var_a);	// 95098 lea     ax, [bp+var_A] ;~ 28F0:38F1
cs=0x28f0;eip=0x0038f4; 	X(PUSH(ax));	// 95099 push    ax ;~ 28F0:38F4
cs=0x28f0;eip=0x0038f5; 	R(CALLF(sub_10602,0));	// 95100 call    sub_10602 ;~ 28F0:38F5
cs=0x28f0;eip=0x0038fa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 95101 mov     ax, [bp+var_A] ;~ 28F0:38FA
cs=0x28f0;eip=0x0038fd; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_8))));	// 95102 mov     dx, [bp+var_8] ;~ 28F0:38FD
cs=0x28f0;eip=0x003900; 	T(OR(dx, dx));	// 95103 or      dx, dx ;~ 28F0:3900
cs=0x28f0;eip=0x003902; 	R(JGE(loc_3adeb));	// 95104 jge     short loc_3ADEB ;~ 28F0:3902
cs=0x28f0;eip=0x003904; 	T(NEG(ax));	// 95105 neg     ax ;~ 28F0:3904
cs=0x28f0;eip=0x003906; 	T(ADC(dx, 0));	// 95106 adc     dx, 0 ;~ 28F0:3906
cs=0x28f0;eip=0x003909; 	T(NEG(dx));	// 95107 neg     dx ;~ 28F0:3909
loc_3adeb:
	// 10486 
cs=0x28f0;eip=0x00390b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95110 mov     bx, [bp+arg_4] ;~ 28F0:390B
cs=0x28f0;eip=0x00390e; 	X(SUB(*(dw*)(raddr(ds,bx)), ax));	// 95111 sub     [bx], ax ;~ 28F0:390E
cs=0x28f0;eip=0x003910; 	X(SBB(*(dw*)(raddr(ds,bx+2)), dx));	// 95112 sbb     [bx+2], dx ;~ 28F0:3910
loc_3adf3:
	// 10487 
cs=0x28f0;eip=0x003913; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95116 les     bx, [bp+arg_6] ;~ 28F0:3913
cs=0x28f0;eip=0x003916; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95117 mov     ax, es:[bx+25Eh] ;~ 28F0:3916
cs=0x28f0;eip=0x00391b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95118 mov     dx, es:[bx+260h] ;~ 28F0:391B
cs=0x28f0;eip=0x003920; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95119 mov     [bp+var_4], ax ;~ 28F0:3920
cs=0x28f0;eip=0x003923; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95120 mov     [bp+var_2], dx ;~ 28F0:3923
cs=0x28f0;eip=0x003926; 	T(CMP(*(dw*)(raddr(es,bx+0x212)), 0));	// 95121 cmp     word ptr es:[bx+212h], 0 ;~ 28F0:3926
cs=0x28f0;eip=0x00392c; 	R(JZ(loc_3ae6f));	// 95122 jz      short loc_3AE6F ;~ 28F0:392C
cs=0x28f0;eip=0x00392e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 95123 mov     ax, es:[bx+128h] ;~ 28F0:392E
cs=0x28f0;eip=0x003933; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 95124 mov     dx, es:[bx+12Ah] ;~ 28F0:3933
cs=0x28f0;eip=0x003938; 	T(MOV(cl, 8));	// 95125 mov     cl, 8 ;~ 28F0:3938
cs=0x28f0;eip=0x00393a; 	R(CALLF(sub_10240,0));	// 95126 call    sub_10240 ;~ 28F0:393A
cs=0x28f0;eip=0x00393f; 	X(PUSH(dx));	// 95127 push    dx ;~ 28F0:393F
cs=0x28f0;eip=0x003940; 	X(PUSH(ax));	// 95128 push    ax ;~ 28F0:3940
cs=0x28f0;eip=0x003941; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95129 mov     ax, [bp+var_4] ;~ 28F0:3941
cs=0x28f0;eip=0x003944; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95130 mov     dx, [bp+var_2] ;~ 28F0:3944
cs=0x28f0;eip=0x003947; 	T(MOV(cl, 0x0B));	// 95131 mov     cl, 0Bh ;~ 28F0:3947
cs=0x28f0;eip=0x003949; 	R(CALLF(sub_10240,0));	// 95132 call    sub_10240 ;~ 28F0:3949
cs=0x28f0;eip=0x00394e; 	X(PUSH(dx));	// 95133 push    dx ;~ 28F0:394E
cs=0x28f0;eip=0x00394f; 	X(PUSH(ax));	// 95134 push    ax ;~ 28F0:394F
cs=0x28f0;eip=0x003950; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95135 les     bx, [bp+arg_6] ;~ 28F0:3950
cs=0x28f0;eip=0x003953; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95136 mov     ax, es:[bx+120h] ;~ 28F0:3953
cs=0x28f0;eip=0x003958; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95137 mov     dx, es:[bx+122h] ;~ 28F0:3958
cs=0x28f0;eip=0x00395d; 	T(MOV(cl, 8));	// 95138 mov     cl, 8 ;~ 28F0:395D
cs=0x28f0;eip=0x00395f; 	R(CALLF(sub_10240,0));	// 95139 call    sub_10240 ;~ 28F0:395F
cs=0x28f0;eip=0x003964; 	X(PUSH(dx));	// 95140 push    dx ;~ 28F0:3964
cs=0x28f0;eip=0x003965; 	X(PUSH(ax));	// 95141 push    ax ;~ 28F0:3965
cs=0x28f0;eip=0x003966; 	R(CALLF(sub_105c2,0));	// 95142 call    sub_105C2 ;~ 28F0:3966
cs=0x28f0;eip=0x00396b; 	X(PUSH(dx));	// 95143 push    dx ;~ 28F0:396B
cs=0x28f0;eip=0x00396c; 	X(PUSH(ax));	// 95144 push    ax ;~ 28F0:396C
cs=0x28f0;eip=0x00396d; 	R(CALLF(sub_10526,0));	// 95145 call    sub_10526 ;~ 28F0:396D
cs=0x28f0;eip=0x003972; 	T(MOV(dh, dl));	// 95146 mov     dh, dl ;~ 28F0:3972
cs=0x28f0;eip=0x003974; 	T(MOV(dl, ah));	// 95147 mov     dl, ah ;~ 28F0:3974
cs=0x28f0;eip=0x003976; 	T(MOV(ah, al));	// 95148 mov     ah, al ;~ 28F0:3976
cs=0x28f0;eip=0x003978; 	T(SUB(al, al));	// 95149 sub     al, al ;~ 28F0:3978
cs=0x28f0;eip=0x00397a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95150 mov     [bp+var_A], ax ;~ 28F0:397A
cs=0x28f0;eip=0x00397d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95151 mov     [bp+var_8], dx ;~ 28F0:397D
cs=0x28f0;eip=0x003980; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95152 mov     bx, [bp+arg_4] ;~ 28F0:3980
cs=0x28f0;eip=0x003983; 	T(NEG(ax));	// 95153 neg     ax ;~ 28F0:3983
cs=0x28f0;eip=0x003985; 	T(ADC(dx, 0));	// 95154 adc     dx, 0 ;~ 28F0:3985
cs=0x28f0;eip=0x003988; 	T(NEG(dx));	// 95155 neg     dx ;~ 28F0:3988
cs=0x28f0;eip=0x00398a; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95156 add     [bx], ax ;~ 28F0:398A
cs=0x28f0;eip=0x00398c; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95157 adc     [bx+2], dx ;~ 28F0:398C
loc_3ae6f:
	// 10488 
cs=0x28f0;eip=0x00398f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95160 les     bx, [bp+arg_6] ;~ 28F0:398F
cs=0x28f0;eip=0x003992; 	T(CMP(*(raddr(es,bx+0x216)), 0));	// 95161 cmp     byte ptr es:[bx+216h], 0 ;~ 28F0:3992
cs=0x28f0;eip=0x003998; 	R(JZ(loc_3aedb));	// 95162 jz      short loc_3AEDB ;~ 28F0:3998
cs=0x28f0;eip=0x00399a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 95163 mov     ax, es:[bx+128h] ;~ 28F0:399A
cs=0x28f0;eip=0x00399f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 95164 mov     dx, es:[bx+12Ah] ;~ 28F0:399F
cs=0x28f0;eip=0x0039a4; 	T(MOV(cl, 8));	// 95165 mov     cl, 8 ;~ 28F0:39A4
cs=0x28f0;eip=0x0039a6; 	R(CALLF(sub_10240,0));	// 95166 call    sub_10240 ;~ 28F0:39A6
cs=0x28f0;eip=0x0039ab; 	X(PUSH(dx));	// 95167 push    dx ;~ 28F0:39AB
cs=0x28f0;eip=0x0039ac; 	X(PUSH(ax));	// 95168 push    ax ;~ 28F0:39AC
cs=0x28f0;eip=0x0039ad; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95169 mov     ax, [bp+var_4] ;~ 28F0:39AD
cs=0x28f0;eip=0x0039b0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95170 mov     dx, [bp+var_2] ;~ 28F0:39B0
cs=0x28f0;eip=0x0039b3; 	T(MOV(cl, 9));	// 95171 mov     cl, 9 ;~ 28F0:39B3
cs=0x28f0;eip=0x0039b5; 	R(CALLF(sub_10240,0));	// 95172 call    sub_10240 ;~ 28F0:39B5
cs=0x28f0;eip=0x0039ba; 	X(PUSH(dx));	// 95173 push    dx ;~ 28F0:39BA
cs=0x28f0;eip=0x0039bb; 	X(PUSH(ax));	// 95174 push    ax ;~ 28F0:39BB
cs=0x28f0;eip=0x0039bc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95175 les     bx, [bp+arg_6] ;~ 28F0:39BC
cs=0x28f0;eip=0x0039bf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95176 mov     ax, es:[bx+120h] ;~ 28F0:39BF
cs=0x28f0;eip=0x0039c4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95177 mov     dx, es:[bx+122h] ;~ 28F0:39C4
cs=0x28f0;eip=0x0039c9; 	T(MOV(cl, 8));	// 95178 mov     cl, 8 ;~ 28F0:39C9
cs=0x28f0;eip=0x0039cb; 	R(CALLF(sub_10240,0));	// 95179 call    sub_10240 ;~ 28F0:39CB
cs=0x28f0;eip=0x0039d0; 	X(PUSH(dx));	// 95180 push    dx ;~ 28F0:39D0
cs=0x28f0;eip=0x0039d1; 	X(PUSH(ax));	// 95181 push    ax ;~ 28F0:39D1
cs=0x28f0;eip=0x0039d2; 	R(CALLF(sub_105c2,0));	// 95182 call    sub_105C2 ;~ 28F0:39D2
cs=0x28f0;eip=0x0039d7; 	X(PUSH(dx));	// 95183 push    dx ;~ 28F0:39D7
cs=0x28f0;eip=0x0039d8; 	X(PUSH(ax));	// 95184 push    ax ;~ 28F0:39D8
cs=0x28f0;eip=0x0039d9; 	R(CALLF(sub_10526,0));	// 95185 call    sub_10526 ;~ 28F0:39D9
cs=0x28f0;eip=0x0039de; 	T(MOV(dh, dl));	// 95186 mov     dh, dl ;~ 28F0:39DE
cs=0x28f0;eip=0x0039e0; 	T(MOV(dl, ah));	// 95187 mov     dl, ah ;~ 28F0:39E0
cs=0x28f0;eip=0x0039e2; 	T(MOV(ah, al));	// 95188 mov     ah, al ;~ 28F0:39E2
cs=0x28f0;eip=0x0039e4; 	T(SUB(al, al));	// 95189 sub     al, al ;~ 28F0:39E4
cs=0x28f0;eip=0x0039e6; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95190 mov     [bp+var_A], ax ;~ 28F0:39E6
cs=0x28f0;eip=0x0039e9; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95191 mov     [bp+var_8], dx ;~ 28F0:39E9
cs=0x28f0;eip=0x0039ec; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95192 mov     bx, [bp+arg_4] ;~ 28F0:39EC
cs=0x28f0;eip=0x0039ef; 	T(NEG(ax));	// 95193 neg     ax ;~ 28F0:39EF
cs=0x28f0;eip=0x0039f1; 	T(ADC(dx, 0));	// 95194 adc     dx, 0 ;~ 28F0:39F1
cs=0x28f0;eip=0x0039f4; 	T(NEG(dx));	// 95195 neg     dx ;~ 28F0:39F4
cs=0x28f0;eip=0x0039f6; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95196 add     [bx], ax ;~ 28F0:39F6
cs=0x28f0;eip=0x0039f8; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95197 adc     [bx+2], dx ;~ 28F0:39F8
loc_3aedb:
	// 10489 
cs=0x28f0;eip=0x0039fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95200 les     bx, [bp+arg_6] ;~ 28F0:39FB
cs=0x28f0;eip=0x0039fe; 	T(CMP(*(raddr(es,bx+0x215)), 0));	// 95201 cmp     byte ptr es:[bx+215h], 0 ;~ 28F0:39FE
cs=0x28f0;eip=0x003a04; 	R(JNZ(loc_3aee9));	// 95202 jnz     short loc_3AEE9 ;~ 28F0:3A04
cs=0x28f0;eip=0x003a06; 	R(JMP(loc_3af71));	// 95203 jmp     loc_3AF71 ;~ 28F0:3A06
loc_3aee9:
	// 10490 
cs=0x28f0;eip=0x003a09; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x128))));	// 95207 mov     ax, es:[bx+128h] ;~ 28F0:3A09
cs=0x28f0;eip=0x003a0e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12A))));	// 95208 mov     dx, es:[bx+12Ah] ;~ 28F0:3A0E
cs=0x28f0;eip=0x003a13; 	T(MOV(cl, 8));	// 95209 mov     cl, 8 ;~ 28F0:3A13
cs=0x28f0;eip=0x003a15; 	R(CALLF(sub_10240,0));	// 95210 call    sub_10240 ;~ 28F0:3A15
cs=0x28f0;eip=0x003a1a; 	X(PUSH(dx));	// 95211 push    dx ;~ 28F0:3A1A
cs=0x28f0;eip=0x003a1b; 	X(PUSH(ax));	// 95212 push    ax ;~ 28F0:3A1B
cs=0x28f0;eip=0x003a1c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95213 mov     ax, [bp+var_4] ;~ 28F0:3A1C
cs=0x28f0;eip=0x003a1f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95214 mov     dx, [bp+var_2] ;~ 28F0:3A1F
cs=0x28f0;eip=0x003a22; 	T(MOV(cl, 2));	// 95215 mov     cl, 2 ;~ 28F0:3A22
cs=0x28f0;eip=0x003a24; 	R(CALLF(sub_105f6,0));	// 95216 call    sub_105F6 ;~ 28F0:3A24
cs=0x28f0;eip=0x003a29; 	T(MOV(cl, 8));	// 95217 mov     cl, 8 ;~ 28F0:3A29
cs=0x28f0;eip=0x003a2b; 	R(CALLF(sub_10240,0));	// 95218 call    sub_10240 ;~ 28F0:3A2B
cs=0x28f0;eip=0x003a30; 	X(PUSH(dx));	// 95219 push    dx ;~ 28F0:3A30
cs=0x28f0;eip=0x003a31; 	X(PUSH(ax));	// 95220 push    ax ;~ 28F0:3A31
cs=0x28f0;eip=0x003a32; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95221 les     bx, [bp+arg_6] ;~ 28F0:3A32
cs=0x28f0;eip=0x003a35; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95222 mov     ax, es:[bx+120h] ;~ 28F0:3A35
cs=0x28f0;eip=0x003a3a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95223 mov     dx, es:[bx+122h] ;~ 28F0:3A3A
cs=0x28f0;eip=0x003a3f; 	T(MOV(cl, 8));	// 95224 mov     cl, 8 ;~ 28F0:3A3F
cs=0x28f0;eip=0x003a41; 	R(CALLF(sub_10240,0));	// 95225 call    sub_10240 ;~ 28F0:3A41
cs=0x28f0;eip=0x003a46; 	X(PUSH(dx));	// 95226 push    dx ;~ 28F0:3A46
cs=0x28f0;eip=0x003a47; 	X(PUSH(ax));	// 95227 push    ax ;~ 28F0:3A47
cs=0x28f0;eip=0x003a48; 	R(CALLF(sub_105c2,0));	// 95228 call    sub_105C2 ;~ 28F0:3A48
cs=0x28f0;eip=0x003a4d; 	X(PUSH(dx));	// 95229 push    dx ;~ 28F0:3A4D
cs=0x28f0;eip=0x003a4e; 	X(PUSH(ax));	// 95230 push    ax ;~ 28F0:3A4E
cs=0x28f0;eip=0x003a4f; 	R(CALLF(sub_10526,0));	// 95231 call    sub_10526 ;~ 28F0:3A4F
cs=0x28f0;eip=0x003a54; 	T(MOV(dh, dl));	// 95232 mov     dh, dl ;~ 28F0:3A54
cs=0x28f0;eip=0x003a56; 	T(MOV(dl, ah));	// 95233 mov     dl, ah ;~ 28F0:3A56
cs=0x28f0;eip=0x003a58; 	T(MOV(ah, al));	// 95234 mov     ah, al ;~ 28F0:3A58
cs=0x28f0;eip=0x003a5a; 	T(SUB(al, al));	// 95235 sub     al, al ;~ 28F0:3A5A
cs=0x28f0;eip=0x003a5c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 95236 mov     [bp+var_A], ax ;~ 28F0:3A5C
cs=0x28f0;eip=0x003a5f; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), dx));	// 95237 mov     [bp+var_8], dx ;~ 28F0:3A5F
cs=0x28f0;eip=0x003a62; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95238 mov     bx, [bp+arg_4] ;~ 28F0:3A62
cs=0x28f0;eip=0x003a65; 	T(NEG(ax));	// 95239 neg     ax ;~ 28F0:3A65
cs=0x28f0;eip=0x003a67; 	T(ADC(dx, 0));	// 95240 adc     dx, 0 ;~ 28F0:3A67
cs=0x28f0;eip=0x003a6a; 	T(NEG(dx));	// 95241 neg     dx ;~ 28F0:3A6A
cs=0x28f0;eip=0x003a6c; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95242 add     [bx], ax ;~ 28F0:3A6C
cs=0x28f0;eip=0x003a6e; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95243 adc     [bx+2], dx ;~ 28F0:3A6E
cs=0x28f0;eip=0x003a71; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95244 les     bx, [bp+arg_6] ;~ 28F0:3A71
cs=0x28f0;eip=0x003a74; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 95245 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:3A74
cs=0x28f0;eip=0x003a7a; 	R(JNZ(loc_3af71));	// 95246 jnz     short loc_3AF71 ;~ 28F0:3A7A
cs=0x28f0;eip=0x003a7c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95247 mov     bx, [bp+arg_4] ;~ 28F0:3A7C
cs=0x28f0;eip=0x003a7f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95248 mov     ax, [bp+var_4] ;~ 28F0:3A7F
cs=0x28f0;eip=0x003a82; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95249 mov     dx, [bp+var_2] ;~ 28F0:3A82
cs=0x28f0;eip=0x003a85; 	T(NEG(ax));	// 95250 neg     ax ;~ 28F0:3A85
cs=0x28f0;eip=0x003a87; 	T(ADC(dx, 0));	// 95251 adc     dx, 0 ;~ 28F0:3A87
cs=0x28f0;eip=0x003a8a; 	T(NEG(dx));	// 95252 neg     dx ;~ 28F0:3A8A
cs=0x28f0;eip=0x003a8c; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95253 add     [bx], ax ;~ 28F0:3A8C
cs=0x28f0;eip=0x003a8e; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95254 adc     [bx+2], dx ;~ 28F0:3A8E
loc_3af71:
	// 10491 
cs=0x28f0;eip=0x003a91; 	T(MOV(sp, bp));	// 95258 mov     sp, bp ;~ 28F0:3A91
cs=0x28f0;eip=0x003a93; 	X(POP(bp));	// 95259 pop     bp ;~ 28F0:3A93
cs=0x28f0;eip=0x003a94; 	R(RETN(0x0A));	// 95260 retn    0Ah ;~ 28F0:3A94
sub_3af77:
	// 95268 
#undef var_8
#define var_8 -8
	// 95270 var_8           = word ptr -8 ;~ 28F0:3A97
#undef var_6
#define var_6 -6
	// 95271 var_6           = word ptr -6 ;~ 28F0:3A97
#undef var_4
#define var_4 -4
	// 95272 var_4           = word ptr -4 ;~ 28F0:3A97
#undef var_2
#define var_2 -2
	// 95273 var_2           = word ptr -2 ;~ 28F0:3A97
#undef arg_0
#define arg_0 4
	// 95274 arg_0           = word ptr  4 ;~ 28F0:3A97
#undef arg_2
#define arg_2 6
	// 95275 arg_2           = word ptr  6 ;~ 28F0:3A97
#undef arg_4
#define arg_4 8
	// 95276 arg_4           = word ptr  8 ;~ 28F0:3A97
#undef arg_6
#define arg_6 0x0A
	// 95277 arg_6           = dword ptr  0Ah ;~ 28F0:3A97
cs=0x28f0;eip=0x003a97; 	X(PUSH(bp));	// 95279 push    bp ;~ 28F0:3A97
cs=0x28f0;eip=0x003a98; 	T(MOV(bp, sp));	// 95280 mov     bp, sp ;~ 28F0:3A98
cs=0x28f0;eip=0x003a9a; 	T(SUB(sp, 8));	// 95281 sub     sp, 8 ;~ 28F0:3A9A
cs=0x28f0;eip=0x003a9d; 	X(PUSH(di));	// 95282 push    di ;~ 28F0:3A9D
cs=0x28f0;eip=0x003a9e; 	X(PUSH(si));	// 95283 push    si ;~ 28F0:3A9E
cs=0x28f0;eip=0x003a9f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6+2)))));	// 95284 push    word ptr [bp+arg_6+2] ;~ 28F0:3A9F
cs=0x28f0;eip=0x003aa2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_6)))));	// 95285 push    word ptr [bp+arg_6] ;~ 28F0:3AA2
cs=0x28f0;eip=0x003aa5; 	R(CALL(sub_3a728,0));	// 95286 call    sub_3A728 ;~ 28F0:3AA5
cs=0x28f0;eip=0x003aa8; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95287 mov     [bp+var_4], ax ;~ 28F0:3AA8
cs=0x28f0;eip=0x003aab; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95288 mov     [bp+var_2], dx ;~ 28F0:3AAB
cs=0x28f0;eip=0x003aae; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 95289 mov     ax, [bp+arg_0] ;~ 28F0:3AAE
cs=0x28f0;eip=0x003ab1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 95290 mov     dx, [bp+arg_2] ;~ 28F0:3AB1
cs=0x28f0;eip=0x003ab4; 	T(MOV(cl, 8));	// 95291 mov     cl, 8 ;~ 28F0:3AB4
cs=0x28f0;eip=0x003ab6; 	R(CALLF(sub_10240,0));	// 95292 call    sub_10240 ;~ 28F0:3AB6
cs=0x28f0;eip=0x003abb; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95293 cmp     dx, [bp+var_2] ;~ 28F0:3ABB
cs=0x28f0;eip=0x003abe; 	R(JG(loc_3afb2));	// 95294 jg      short loc_3AFB2 ;~ 28F0:3ABE
cs=0x28f0;eip=0x003ac0; 	R(JL(loc_3afa7));	// 95295 jl      short loc_3AFA7 ;~ 28F0:3AC0
cs=0x28f0;eip=0x003ac2; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95296 cmp     ax, [bp+var_4] ;~ 28F0:3AC2
cs=0x28f0;eip=0x003ac5; 	R(JNC(loc_3afb2));	// 95297 jnb     short loc_3AFB2 ;~ 28F0:3AC5
loc_3afa7:
	// 10492 
cs=0x28f0;eip=0x003ac7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95300 mov     ax, [bp+var_4] ;~ 28F0:3AC7
cs=0x28f0;eip=0x003aca; 	T(OR(ax, *(dw*)(raddr(ss,bp+var_2))));	// 95301 or      ax, [bp+var_2] ;~ 28F0:3ACA
cs=0x28f0;eip=0x003acd; 	R(JZ(loc_3afb2));	// 95302 jz      short loc_3AFB2 ;~ 28F0:3ACD
cs=0x28f0;eip=0x003acf; 	R(JMP(loc_3b0e6));	// 95303 jmp     loc_3B0E6 ;~ 28F0:3ACF
loc_3afb2:
	// 10493 
cs=0x28f0;eip=0x003ad2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 95308 cmp     [bp+var_2], 0 ;~ 28F0:3AD2
cs=0x28f0;eip=0x003ad6; 	R(JL(loc_3aff9));	// 95309 jl      short loc_3AFF9 ;~ 28F0:3AD6
cs=0x28f0;eip=0x003ad8; 	R(JG(loc_3afc0));	// 95310 jg      short loc_3AFC0 ;~ 28F0:3AD8
cs=0x28f0;eip=0x003ada; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 95311 cmp     [bp+var_4], 0 ;~ 28F0:3ADA
cs=0x28f0;eip=0x003ade; 	R(JZ(loc_3aff9));	// 95312 jz      short loc_3AFF9 ;~ 28F0:3ADE
loc_3afc0:
	// 10494 
cs=0x28f0;eip=0x003ae0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 95315 push    [bp+var_2] ;~ 28F0:3AE0
cs=0x28f0;eip=0x003ae3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 95316 push    [bp+var_4] ;~ 28F0:3AE3
cs=0x28f0;eip=0x003ae6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 95317 mov     ax, [bp+arg_0] ;~ 28F0:3AE6
cs=0x28f0;eip=0x003ae9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 95318 mov     dx, [bp+arg_2] ;~ 28F0:3AE9
cs=0x28f0;eip=0x003aec; 	T(MOV(cl, 8));	// 95319 mov     cl, 8 ;~ 28F0:3AEC
cs=0x28f0;eip=0x003aee; 	R(CALLF(sub_10240,0));	// 95320 call    sub_10240 ;~ 28F0:3AEE
cs=0x28f0;eip=0x003af3; 	X(PUSH(dx));	// 95321 push    dx ;~ 28F0:3AF3
cs=0x28f0;eip=0x003af4; 	X(PUSH(ax));	// 95322 push    ax ;~ 28F0:3AF4
cs=0x28f0;eip=0x003af5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95323 les     bx, [bp+arg_6] ;~ 28F0:3AF5
cs=0x28f0;eip=0x003af8; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95324 mov     ax, es:[bx+25Eh] ;~ 28F0:3AF8
cs=0x28f0;eip=0x003afd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95325 mov     dx, es:[bx+260h] ;~ 28F0:3AFD
cs=0x28f0;eip=0x003b02; 	T(MOV(cl, 8));	// 95326 mov     cl, 8 ;~ 28F0:3B02
cs=0x28f0;eip=0x003b04; 	R(CALLF(sub_10240,0));	// 95327 call    sub_10240 ;~ 28F0:3B04
cs=0x28f0;eip=0x003b09; 	X(PUSH(dx));	// 95328 push    dx ;~ 28F0:3B09
cs=0x28f0;eip=0x003b0a; 	X(PUSH(ax));	// 95329 push    ax ;~ 28F0:3B0A
cs=0x28f0;eip=0x003b0b; 	R(CALLF(sub_105c2,0));	// 95330 call    sub_105C2 ;~ 28F0:3B0B
cs=0x28f0;eip=0x003b10; 	X(PUSH(dx));	// 95331 push    dx ;~ 28F0:3B10
cs=0x28f0;eip=0x003b11; 	X(PUSH(ax));	// 95332 push    ax ;~ 28F0:3B11
cs=0x28f0;eip=0x003b12; 	R(CALLF(sub_10526,0));	// 95333 call    sub_10526 ;~ 28F0:3B12
cs=0x28f0;eip=0x003b17; 	R(JMP(loc_3b00d));	// 95334 jmp     short loc_3B00D ;~ 28F0:3B17
loc_3aff9:
	// 10495 
cs=0x28f0;eip=0x003b19; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95339 les     bx, [bp+arg_6] ;~ 28F0:3B19
cs=0x28f0;eip=0x003b1c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95340 mov     ax, es:[bx+25Eh] ;~ 28F0:3B1C
cs=0x28f0;eip=0x003b21; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95341 mov     dx, es:[bx+260h] ;~ 28F0:3B21
cs=0x28f0;eip=0x003b26; 	T(MOV(cl, 9));	// 95342 mov     cl, 9 ;~ 28F0:3B26
cs=0x28f0;eip=0x003b28; 	R(CALLF(sub_10240,0));	// 95343 call    sub_10240 ;~ 28F0:3B28
loc_3b00d:
	// 10496 
cs=0x28f0;eip=0x003b2d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95346 mov     [bp+var_8], ax ;~ 28F0:3B2D
cs=0x28f0;eip=0x003b30; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95347 mov     [bp+var_6], dx ;~ 28F0:3B30
cs=0x28f0;eip=0x003b33; 	T(MOV(cl, 8));	// 95348 mov     cl, 8 ;~ 28F0:3B33
cs=0x28f0;eip=0x003b35; 	R(CALLF(sub_10240,0));	// 95349 call    sub_10240 ;~ 28F0:3B35
cs=0x28f0;eip=0x003b3a; 	X(PUSH(dx));	// 95350 push    dx ;~ 28F0:3B3A
cs=0x28f0;eip=0x003b3b; 	X(PUSH(ax));	// 95351 push    ax ;~ 28F0:3B3B
cs=0x28f0;eip=0x003b3c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95352 les     bx, [bp+arg_6] ;~ 28F0:3B3C
cs=0x28f0;eip=0x003b3f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EA))));	// 95353 mov     ax, es:[bx+2EAh] ;~ 28F0:3B3F
cs=0x28f0;eip=0x003b44; 	T(CWD);	// 95354 cwd ;~ 28F0:3B44
cs=0x28f0;eip=0x003b45; 	X(PUSH(dx));	// 95355 push    dx ;~ 28F0:3B45
cs=0x28f0;eip=0x003b46; 	X(PUSH(ax));	// 95356 push    ax ;~ 28F0:3B46
cs=0x28f0;eip=0x003b47; 	R(CALLF(sub_105c2,0));	// 95357 call    sub_105C2 ;~ 28F0:3B47
cs=0x28f0;eip=0x003b4c; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95358 mov     [bp+var_8], ax ;~ 28F0:3B4C
cs=0x28f0;eip=0x003b4f; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95359 mov     [bp+var_6], dx ;~ 28F0:3B4F
cs=0x28f0;eip=0x003b52; 	T(MOV(cl, 8));	// 95360 mov     cl, 8 ;~ 28F0:3B52
cs=0x28f0;eip=0x003b54; 	R(CALLF(sub_10240,0));	// 95361 call    sub_10240 ;~ 28F0:3B54
cs=0x28f0;eip=0x003b59; 	X(PUSH(dx));	// 95362 push    dx ;~ 28F0:3B59
cs=0x28f0;eip=0x003b5a; 	X(PUSH(ax));	// 95363 push    ax ;~ 28F0:3B5A
cs=0x28f0;eip=0x003b5b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95364 les     bx, [bp+arg_6] ;~ 28F0:3B5B
cs=0x28f0;eip=0x003b5e; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E4))));	// 95365 push    word ptr es:[bx+2E4h] ;~ 28F0:3B5E
cs=0x28f0;eip=0x003b63; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E2))));	// 95366 push    word ptr es:[bx+2E2h] ;~ 28F0:3B63
cs=0x28f0;eip=0x003b68; 	R(CALLF(sub_105c2,0));	// 95367 call    sub_105C2 ;~ 28F0:3B68
cs=0x28f0;eip=0x003b6d; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95368 mov     [bp+var_8], ax ;~ 28F0:3B6D
cs=0x28f0;eip=0x003b70; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95369 mov     [bp+var_6], dx ;~ 28F0:3B70
cs=0x28f0;eip=0x003b73; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 95370 cmp     [bp+var_2], 0 ;~ 28F0:3B73
cs=0x28f0;eip=0x003b77; 	R(JL(loc_3b0c8));	// 95371 jl      short loc_3B0C8 ;~ 28F0:3B77
cs=0x28f0;eip=0x003b79; 	R(JG(loc_3b061));	// 95372 jg      short loc_3B061 ;~ 28F0:3B79
cs=0x28f0;eip=0x003b7b; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 95373 cmp     [bp+var_4], 0 ;~ 28F0:3B7B
cs=0x28f0;eip=0x003b7f; 	R(JZ(loc_3b0c8));	// 95374 jz      short loc_3B0C8 ;~ 28F0:3B7F
loc_3b061:
	// 10497 
cs=0x28f0;eip=0x003b81; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95377 les     bx, [bp+arg_6] ;~ 28F0:3B81
cs=0x28f0;eip=0x003b84; 	T(CMP(*(raddr(es,bx+0x216)), 0));	// 95378 cmp     byte ptr es:[bx+216h], 0 ;~ 28F0:3B84
cs=0x28f0;eip=0x003b8a; 	R(JZ(loc_3b07c));	// 95379 jz      short loc_3B07C ;~ 28F0:3B8A
cs=0x28f0;eip=0x003b8c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 95380 mov     ax, [bp+var_8] ;~ 28F0:3B8C
cs=0x28f0;eip=0x003b8f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 95381 mov     dx, [bp+var_6] ;~ 28F0:3B8F
cs=0x28f0;eip=0x003b92; 	T(SAR(dx, 1));	// 95382 sar     dx, 1 ;~ 28F0:3B92
cs=0x28f0;eip=0x003b94; 	T(RCR(ax, 1));	// 95383 rcr     ax, 1 ;~ 28F0:3B94
cs=0x28f0;eip=0x003b96; 	X(ADD(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95384 add     [bp+var_8], ax ;~ 28F0:3B96
cs=0x28f0;eip=0x003b99; 	X(ADC(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95385 adc     [bp+var_6], dx ;~ 28F0:3B99
loc_3b07c:
	// 10498 
cs=0x28f0;eip=0x003b9c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95388 mov     ax, es:[bx+25Eh] ;~ 28F0:3B9C
cs=0x28f0;eip=0x003ba1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95389 mov     dx, es:[bx+260h] ;~ 28F0:3BA1
cs=0x28f0;eip=0x003ba6; 	T(MOV(cl, 8));	// 95390 mov     cl, 8 ;~ 28F0:3BA6
cs=0x28f0;eip=0x003ba8; 	R(CALLF(sub_10240,0));	// 95391 call    sub_10240 ;~ 28F0:3BA8
cs=0x28f0;eip=0x003bad; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 95392 les     bx, [bp+arg_6] ;~ 28F0:3BAD
cs=0x28f0;eip=0x003bb0; 	T(MOV(cx, ax));	// 95393 mov     cx, ax ;~ 28F0:3BB0
cs=0x28f0;eip=0x003bb2; 	T(MOV(si, dx));	// 95394 mov     si, dx ;~ 28F0:3BB2
cs=0x28f0;eip=0x003bb4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x25E))));	// 95395 mov     ax, es:[bx+25Eh] ;~ 28F0:3BB4
cs=0x28f0;eip=0x003bb9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x260))));	// 95396 mov     dx, es:[bx+260h] ;~ 28F0:3BB9
cs=0x28f0;eip=0x003bbe; 	T(MOV(bx, cx));	// 95397 mov     bx, cx ;~ 28F0:3BBE
cs=0x28f0;eip=0x003bc0; 	T(MOV(cl, 8));	// 95398 mov     cl, 8 ;~ 28F0:3BC0
cs=0x28f0;eip=0x003bc2; 	T(MOV(di, bx));	// 95399 mov     di, bx ;~ 28F0:3BC2
cs=0x28f0;eip=0x003bc4; 	R(CALLF(sub_10240,0));	// 95400 call    sub_10240 ;~ 28F0:3BC4
cs=0x28f0;eip=0x003bc9; 	T(MOV(cx, ax));	// 95401 mov     cx, ax ;~ 28F0:3BC9
cs=0x28f0;eip=0x003bcb; 	T(MOV(bx, dx));	// 95402 mov     bx, dx ;~ 28F0:3BCB
cs=0x28f0;eip=0x003bcd; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 95403 mov     ax, [bp+var_8] ;~ 28F0:3BCD
cs=0x28f0;eip=0x003bd0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 95404 mov     dx, [bp+var_6] ;~ 28F0:3BD0
cs=0x28f0;eip=0x003bd3; 	T(SUB(ax, cx));	// 95405 sub     ax, cx ;~ 28F0:3BD3
cs=0x28f0;eip=0x003bd5; 	T(SBB(dx, bx));	// 95406 sbb     dx, bx ;~ 28F0:3BD5
cs=0x28f0;eip=0x003bd7; 	T(MOV(cl, 4));	// 95407 mov     cl, 4 ;~ 28F0:3BD7
cs=0x28f0;eip=0x003bd9; 	R(CALLF(sub_10240,0));	// 95408 call    sub_10240 ;~ 28F0:3BD9
cs=0x28f0;eip=0x003bde; 	T(ADD(ax, di));	// 95409 add     ax, di ;~ 28F0:3BDE
cs=0x28f0;eip=0x003be0; 	T(ADC(dx, si));	// 95410 adc     dx, si ;~ 28F0:3BE0
cs=0x28f0;eip=0x003be2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95411 mov     [bp+var_8], ax ;~ 28F0:3BE2
cs=0x28f0;eip=0x003be5; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 95412 mov     [bp+var_6], dx ;~ 28F0:3BE5
loc_3b0c8:
	// 10499 
cs=0x28f0;eip=0x003be8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 95416 mov     ax, [bp+var_8] ;~ 28F0:3BE8
cs=0x28f0;eip=0x003beb; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 95417 mov     dx, [bp+var_6] ;~ 28F0:3BEB
cs=0x28f0;eip=0x003bee; 	T(MOV(dh, dl));	// 95418 mov     dh, dl ;~ 28F0:3BEE
cs=0x28f0;eip=0x003bf0; 	T(MOV(dl, ah));	// 95419 mov     dl, ah ;~ 28F0:3BF0
cs=0x28f0;eip=0x003bf2; 	T(MOV(ah, al));	// 95420 mov     ah, al ;~ 28F0:3BF2
cs=0x28f0;eip=0x003bf4; 	T(SUB(al, al));	// 95421 sub     al, al ;~ 28F0:3BF4
cs=0x28f0;eip=0x003bf6; 	T(NEG(ax));	// 95422 neg     ax ;~ 28F0:3BF6
cs=0x28f0;eip=0x003bf8; 	T(ADC(dx, 0));	// 95423 adc     dx, 0 ;~ 28F0:3BF8
cs=0x28f0;eip=0x003bfb; 	T(NEG(dx));	// 95424 neg     dx ;~ 28F0:3BFB
cs=0x28f0;eip=0x003bfd; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_4))));	// 95425 mov     bx, [bp+arg_4] ;~ 28F0:3BFD
cs=0x28f0;eip=0x003c00; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 95426 add     [bx+8], ax ;~ 28F0:3C00
cs=0x28f0;eip=0x003c03; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 95427 adc     [bx+0Ah], dx ;~ 28F0:3C03
loc_3b0e6:
	// 10500 
cs=0x28f0;eip=0x003c06; 	X(POP(si));	// 95430 pop     si ;~ 28F0:3C06
cs=0x28f0;eip=0x003c07; 	X(POP(di));	// 95431 pop     di ;~ 28F0:3C07
cs=0x28f0;eip=0x003c08; 	T(MOV(sp, bp));	// 95432 mov     sp, bp ;~ 28F0:3C08
cs=0x28f0;eip=0x003c0a; 	X(POP(bp));	// 95433 pop     bp ;~ 28F0:3C0A
cs=0x28f0;eip=0x003c0b; 	R(RETN(0x0A));	// 95434 retn    0Ah ;~ 28F0:3C0B
sub_3b0ee:
	// 95442 
#undef var_c
#define var_c -0x0C
	// 95444 var_C           = word ptr -0Ch ;~ 28F0:3C0E
#undef var_a
#define var_a -0x0A
	// 95445 var_A           = word ptr -0Ah ;~ 28F0:3C0E
#undef var_8
#define var_8 -8
	// 95446 var_8           = word ptr -8 ;~ 28F0:3C0E
#undef var_6
#define var_6 -6
	// 95447 var_6           = word ptr -6 ;~ 28F0:3C0E
#undef var_4
#define var_4 -4
	// 95448 var_4           = word ptr -4 ;~ 28F0:3C0E
#undef var_2
#define var_2 -2
	// 95449 var_2           = word ptr -2 ;~ 28F0:3C0E
#undef arg_0
#define arg_0 4
	// 95450 arg_0           = word ptr  4 ;~ 28F0:3C0E
#undef arg_2
#define arg_2 6
	// 95451 arg_2           = dword ptr  6 ;~ 28F0:3C0E
cs=0x28f0;eip=0x003c0e; 	X(PUSH(bp));	// 95453 push    bp ;~ 28F0:3C0E
cs=0x28f0;eip=0x003c0f; 	T(MOV(bp, sp));	// 95454 mov     bp, sp ;~ 28F0:3C0F
cs=0x28f0;eip=0x003c11; 	T(SUB(sp, 0x0C));	// 95455 sub     sp, 0Ch ;~ 28F0:3C11
cs=0x28f0;eip=0x003c14; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 95456 les     bx, [bp+arg_2] ;~ 28F0:3C14
cs=0x28f0;eip=0x003c17; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 95457 mov     ax, es:[bx+0C0h] ;~ 28F0:3C17
cs=0x28f0;eip=0x003c1c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 95458 mov     dx, es:[bx+0C2h] ;~ 28F0:3C1C
cs=0x28f0;eip=0x003c21; 	T(MOV(cl, 5));	// 95459 mov     cl, 5 ;~ 28F0:3C21
cs=0x28f0;eip=0x003c23; 	R(CALLF(sub_10240,0));	// 95460 call    sub_10240 ;~ 28F0:3C23
cs=0x28f0;eip=0x003c28; 	X(PUSH(ax));	// 95461 push    ax ;~ 28F0:3C28
cs=0x28f0;eip=0x003c29; 	R(CALLF(sub_24cf8,0));	// 95462 call    sub_24CF8 ;~ 28F0:3C29
cs=0x28f0;eip=0x003c2e; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 95463 mov     [bp+var_8], ax ;~ 28F0:3C2E
cs=0x28f0;eip=0x003c31; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 95464 les     bx, [bp+arg_2] ;~ 28F0:3C31
cs=0x28f0;eip=0x003c34; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 95465 mov     ax, es:[bx+0E0h] ;~ 28F0:3C34
cs=0x28f0;eip=0x003c39; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 95466 mov     dx, es:[bx+0E2h] ;~ 28F0:3C39
cs=0x28f0;eip=0x003c3e; 	T(MOV(cl, 5));	// 95467 mov     cl, 5 ;~ 28F0:3C3E
cs=0x28f0;eip=0x003c40; 	R(CALLF(sub_10240,0));	// 95468 call    sub_10240 ;~ 28F0:3C40
cs=0x28f0;eip=0x003c45; 	X(PUSH(ax));	// 95469 push    ax ;~ 28F0:3C45
cs=0x28f0;eip=0x003c46; 	R(CALLF(sub_24cf8,0));	// 95470 call    sub_24CF8 ;~ 28F0:3C46
cs=0x28f0;eip=0x003c4b; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 95471 mov     [bp+var_6], ax ;~ 28F0:3C4B
cs=0x28f0;eip=0x003c4e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 95472 les     bx, [bp+arg_2] ;~ 28F0:3C4E
cs=0x28f0;eip=0x003c51; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1D4))));	// 95473 mov     ax, es:[bx+1D4h] ;~ 28F0:3C51
cs=0x28f0;eip=0x003c56; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1D6))));	// 95474 mov     dx, es:[bx+1D6h] ;~ 28F0:3C56
cs=0x28f0;eip=0x003c5b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95475 mov     [bp+var_4], ax ;~ 28F0:3C5B
cs=0x28f0;eip=0x003c5e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95476 mov     [bp+var_2], dx ;~ 28F0:3C5E
cs=0x28f0;eip=0x003c61; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 95477 push    [bp+var_6] ;~ 28F0:3C61
cs=0x28f0;eip=0x003c64; 	R(CALLF(sub_27c9e,0));	// 95478 call    sub_27C9E ;~ 28F0:3C64
cs=0x28f0;eip=0x003c69; 	X(PUSH(dx));	// 95479 push    dx ;~ 28F0:3C69
cs=0x28f0;eip=0x003c6a; 	X(PUSH(ax));	// 95480 push    ax ;~ 28F0:3C6A
cs=0x28f0;eip=0x003c6b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95481 mov     ax, [bp+var_4] ;~ 28F0:3C6B
cs=0x28f0;eip=0x003c6e; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95482 mov     dx, [bp+var_2] ;~ 28F0:3C6E
cs=0x28f0;eip=0x003c71; 	T(MOV(cl, 8));	// 95483 mov     cl, 8 ;~ 28F0:3C71
cs=0x28f0;eip=0x003c73; 	R(CALLF(sub_10240,0));	// 95484 call    sub_10240 ;~ 28F0:3C73
cs=0x28f0;eip=0x003c78; 	X(PUSH(dx));	// 95485 push    dx ;~ 28F0:3C78
cs=0x28f0;eip=0x003c79; 	X(PUSH(ax));	// 95486 push    ax ;~ 28F0:3C79
cs=0x28f0;eip=0x003c7a; 	R(CALLF(sub_105c2,0));	// 95487 call    sub_105C2 ;~ 28F0:3C7A
cs=0x28f0;eip=0x003c7f; 	T(MOV(cl, 8));	// 95488 mov     cl, 8 ;~ 28F0:3C7F
cs=0x28f0;eip=0x003c81; 	R(CALLF(sub_10240,0));	// 95489 call    sub_10240 ;~ 28F0:3C81
cs=0x28f0;eip=0x003c86; 	T(NEG(ax));	// 95490 neg     ax ;~ 28F0:3C86
cs=0x28f0;eip=0x003c88; 	T(ADC(dx, 0));	// 95491 adc     dx, 0 ;~ 28F0:3C88
cs=0x28f0;eip=0x003c8b; 	T(NEG(dx));	// 95492 neg     dx ;~ 28F0:3C8B
cs=0x28f0;eip=0x003c8d; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 95493 mov     [bp+var_C], ax ;~ 28F0:3C8D
cs=0x28f0;eip=0x003c90; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 95494 mov     [bp+var_A], dx ;~ 28F0:3C90
cs=0x28f0;eip=0x003c93; 	X(PUSH(dx));	// 95495 push    dx ;~ 28F0:3C93
cs=0x28f0;eip=0x003c94; 	X(PUSH(ax));	// 95496 push    ax ;~ 28F0:3C94
cs=0x28f0;eip=0x003c95; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 95497 les     bx, [bp+arg_2] ;~ 28F0:3C95
cs=0x28f0;eip=0x003c98; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 95498 mov     ax, es:[bx+298h] ;~ 28F0:3C98
cs=0x28f0;eip=0x003c9d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 95499 mov     dx, es:[bx+29Ah] ;~ 28F0:3C9D
cs=0x28f0;eip=0x003ca2; 	T(MOV(cl, 8));	// 95500 mov     cl, 8 ;~ 28F0:3CA2
cs=0x28f0;eip=0x003ca4; 	R(CALLF(sub_10240,0));	// 95501 call    sub_10240 ;~ 28F0:3CA4
cs=0x28f0;eip=0x003ca9; 	X(PUSH(dx));	// 95502 push    dx ;~ 28F0:3CA9
cs=0x28f0;eip=0x003caa; 	X(PUSH(ax));	// 95503 push    ax ;~ 28F0:3CAA
cs=0x28f0;eip=0x003cab; 	R(CALLF(sub_105c2,0));	// 95504 call    sub_105C2 ;~ 28F0:3CAB
cs=0x28f0;eip=0x003cb0; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 95505 mov     bx, [bp+arg_0] ;~ 28F0:3CB0
cs=0x28f0;eip=0x003cb3; 	X(ADD(*(dw*)(raddr(ds,bx)), ax));	// 95506 add     [bx], ax ;~ 28F0:3CB3
cs=0x28f0;eip=0x003cb5; 	X(ADC(*(dw*)(raddr(ds,bx+2)), dx));	// 95507 adc     [bx+2], dx ;~ 28F0:3CB5
cs=0x28f0;eip=0x003cb8; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 95508 push    [bp+var_6] ;~ 28F0:3CB8
cs=0x28f0;eip=0x003cbb; 	R(CALLF(sub_27cb4,0));	// 95509 call    sub_27CB4 ;~ 28F0:3CBB
cs=0x28f0;eip=0x003cc0; 	X(PUSH(dx));	// 95510 push    dx ;~ 28F0:3CC0
cs=0x28f0;eip=0x003cc1; 	X(PUSH(ax));	// 95511 push    ax ;~ 28F0:3CC1
cs=0x28f0;eip=0x003cc2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95512 mov     ax, [bp+var_4] ;~ 28F0:3CC2
cs=0x28f0;eip=0x003cc5; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95513 mov     dx, [bp+var_2] ;~ 28F0:3CC5
cs=0x28f0;eip=0x003cc8; 	T(MOV(cl, 8));	// 95514 mov     cl, 8 ;~ 28F0:3CC8
cs=0x28f0;eip=0x003cca; 	R(CALLF(sub_10240,0));	// 95515 call    sub_10240 ;~ 28F0:3CCA
cs=0x28f0;eip=0x003ccf; 	X(PUSH(dx));	// 95516 push    dx ;~ 28F0:3CCF
cs=0x28f0;eip=0x003cd0; 	X(PUSH(ax));	// 95517 push    ax ;~ 28F0:3CD0
cs=0x28f0;eip=0x003cd1; 	R(CALLF(sub_105c2,0));	// 95518 call    sub_105C2 ;~ 28F0:3CD1
cs=0x28f0;eip=0x003cd6; 	T(MOV(cl, 8));	// 95519 mov     cl, 8 ;~ 28F0:3CD6
cs=0x28f0;eip=0x003cd8; 	R(CALLF(sub_10240,0));	// 95520 call    sub_10240 ;~ 28F0:3CD8
cs=0x28f0;eip=0x003cdd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95521 mov     [bp+var_4], ax ;~ 28F0:3CDD
cs=0x28f0;eip=0x003ce0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95522 mov     [bp+var_2], dx ;~ 28F0:3CE0
cs=0x28f0;eip=0x003ce3; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 95523 push    [bp+var_8] ;~ 28F0:3CE3
cs=0x28f0;eip=0x003ce6; 	R(CALLF(sub_27c9e,0));	// 95524 call    sub_27C9E ;~ 28F0:3CE6
cs=0x28f0;eip=0x003ceb; 	X(PUSH(dx));	// 95525 push    dx ;~ 28F0:3CEB
cs=0x28f0;eip=0x003cec; 	X(PUSH(ax));	// 95526 push    ax ;~ 28F0:3CEC
cs=0x28f0;eip=0x003ced; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95527 mov     ax, [bp+var_4] ;~ 28F0:3CED
cs=0x28f0;eip=0x003cf0; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95528 mov     dx, [bp+var_2] ;~ 28F0:3CF0
cs=0x28f0;eip=0x003cf3; 	T(MOV(cl, 8));	// 95529 mov     cl, 8 ;~ 28F0:3CF3
cs=0x28f0;eip=0x003cf5; 	R(CALLF(sub_10240,0));	// 95530 call    sub_10240 ;~ 28F0:3CF5
cs=0x28f0;eip=0x003cfa; 	X(PUSH(dx));	// 95531 push    dx ;~ 28F0:3CFA
cs=0x28f0;eip=0x003cfb; 	X(PUSH(ax));	// 95532 push    ax ;~ 28F0:3CFB
cs=0x28f0;eip=0x003cfc; 	R(CALLF(sub_105c2,0));	// 95533 call    sub_105C2 ;~ 28F0:3CFC
cs=0x28f0;eip=0x003d01; 	T(MOV(cl, 8));	// 95534 mov     cl, 8 ;~ 28F0:3D01
cs=0x28f0;eip=0x003d03; 	R(CALLF(sub_10240,0));	// 95535 call    sub_10240 ;~ 28F0:3D03
cs=0x28f0;eip=0x003d08; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 95536 mov     [bp+var_C], ax ;~ 28F0:3D08
cs=0x28f0;eip=0x003d0b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 95537 mov     [bp+var_A], dx ;~ 28F0:3D0B
cs=0x28f0;eip=0x003d0e; 	X(PUSH(dx));	// 95538 push    dx ;~ 28F0:3D0E
cs=0x28f0;eip=0x003d0f; 	X(PUSH(ax));	// 95539 push    ax ;~ 28F0:3D0F
cs=0x28f0;eip=0x003d10; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 95540 les     bx, [bp+arg_2] ;~ 28F0:3D10
cs=0x28f0;eip=0x003d13; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 95541 mov     ax, es:[bx+298h] ;~ 28F0:3D13
cs=0x28f0;eip=0x003d18; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 95542 mov     dx, es:[bx+29Ah] ;~ 28F0:3D18
cs=0x28f0;eip=0x003d1d; 	T(MOV(cl, 8));	// 95543 mov     cl, 8 ;~ 28F0:3D1D
cs=0x28f0;eip=0x003d1f; 	R(CALLF(sub_10240,0));	// 95544 call    sub_10240 ;~ 28F0:3D1F
cs=0x28f0;eip=0x003d24; 	X(PUSH(dx));	// 95545 push    dx ;~ 28F0:3D24
cs=0x28f0;eip=0x003d25; 	X(PUSH(ax));	// 95546 push    ax ;~ 28F0:3D25
cs=0x28f0;eip=0x003d26; 	R(CALLF(sub_105c2,0));	// 95547 call    sub_105C2 ;~ 28F0:3D26
cs=0x28f0;eip=0x003d2b; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 95548 mov     bx, [bp+arg_0] ;~ 28F0:3D2B
cs=0x28f0;eip=0x003d2e; 	X(ADD(*(dw*)(raddr(ds,bx+4)), ax));	// 95549 add     [bx+4], ax ;~ 28F0:3D2E
cs=0x28f0;eip=0x003d31; 	X(ADC(*(dw*)(raddr(ds,bx+6)), dx));	// 95550 adc     [bx+6], dx ;~ 28F0:3D31
cs=0x28f0;eip=0x003d34; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 95551 push    [bp+var_8] ;~ 28F0:3D34
cs=0x28f0;eip=0x003d37; 	R(CALLF(sub_27cb4,0));	// 95552 call    sub_27CB4 ;~ 28F0:3D37
cs=0x28f0;eip=0x003d3c; 	X(PUSH(dx));	// 95553 push    dx ;~ 28F0:3D3C
cs=0x28f0;eip=0x003d3d; 	X(PUSH(ax));	// 95554 push    ax ;~ 28F0:3D3D
cs=0x28f0;eip=0x003d3e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 95555 mov     ax, [bp+var_4] ;~ 28F0:3D3E
cs=0x28f0;eip=0x003d41; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 95556 mov     dx, [bp+var_2] ;~ 28F0:3D41
cs=0x28f0;eip=0x003d44; 	T(MOV(cl, 8));	// 95557 mov     cl, 8 ;~ 28F0:3D44
cs=0x28f0;eip=0x003d46; 	R(CALLF(sub_10240,0));	// 95558 call    sub_10240 ;~ 28F0:3D46
cs=0x28f0;eip=0x003d4b; 	X(PUSH(dx));	// 95559 push    dx ;~ 28F0:3D4B
cs=0x28f0;eip=0x003d4c; 	X(PUSH(ax));	// 95560 push    ax ;~ 28F0:3D4C
cs=0x28f0;eip=0x003d4d; 	R(CALLF(sub_105c2,0));	// 95561 call    sub_105C2 ;~ 28F0:3D4D
cs=0x28f0;eip=0x003d52; 	T(MOV(cl, 8));	// 95562 mov     cl, 8 ;~ 28F0:3D52
cs=0x28f0;eip=0x003d54; 	R(CALLF(sub_10240,0));	// 95563 call    sub_10240 ;~ 28F0:3D54
cs=0x28f0;eip=0x003d59; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 95564 mov     [bp+var_C], ax ;~ 28F0:3D59
cs=0x28f0;eip=0x003d5c; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 95565 mov     [bp+var_A], dx ;~ 28F0:3D5C
cs=0x28f0;eip=0x003d5f; 	X(PUSH(dx));	// 95566 push    dx ;~ 28F0:3D5F
cs=0x28f0;eip=0x003d60; 	X(PUSH(ax));	// 95567 push    ax ;~ 28F0:3D60
cs=0x28f0;eip=0x003d61; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 95568 les     bx, [bp+arg_2] ;~ 28F0:3D61
cs=0x28f0;eip=0x003d64; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 95569 mov     ax, es:[bx+298h] ;~ 28F0:3D64
cs=0x28f0;eip=0x003d69; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 95570 mov     dx, es:[bx+29Ah] ;~ 28F0:3D69
cs=0x28f0;eip=0x003d6e; 	T(MOV(cl, 8));	// 95571 mov     cl, 8 ;~ 28F0:3D6E
cs=0x28f0;eip=0x003d70; 	R(CALLF(sub_10240,0));	// 95572 call    sub_10240 ;~ 28F0:3D70
cs=0x28f0;eip=0x003d75; 	X(PUSH(dx));	// 95573 push    dx ;~ 28F0:3D75
cs=0x28f0;eip=0x003d76; 	X(PUSH(ax));	// 95574 push    ax ;~ 28F0:3D76
cs=0x28f0;eip=0x003d77; 	R(CALLF(sub_105c2,0));	// 95575 call    sub_105C2 ;~ 28F0:3D77
cs=0x28f0;eip=0x003d7c; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 95576 mov     bx, [bp+arg_0] ;~ 28F0:3D7C
cs=0x28f0;eip=0x003d7f; 	X(ADD(*(dw*)(raddr(ds,bx+8)), ax));	// 95577 add     [bx+8], ax ;~ 28F0:3D7F
cs=0x28f0;eip=0x003d82; 	X(ADC(*(dw*)(raddr(ds,bx+0x0A)), dx));	// 95578 adc     [bx+0Ah], dx ;~ 28F0:3D82
cs=0x28f0;eip=0x003d85; 	T(MOV(sp, bp));	// 95579 mov     sp, bp ;~ 28F0:3D85
cs=0x28f0;eip=0x003d87; 	X(POP(bp));	// 95580 pop     bp ;~ 28F0:3D87
cs=0x28f0;eip=0x003d88; 	R(RETN(6));	// 95581 retn    6 ;~ 28F0:3D88
sub_3b26b:
	// 95589 
#undef arg_0
#define arg_0 4
	// 95592 arg_0           = word ptr  4 ;~ 28F0:3D8B
#undef arg_2
#define arg_2 6
	// 95593 arg_2           = word ptr  6 ;~ 28F0:3D8B
#undef arg_4
#define arg_4 8
	// 95594 arg_4           = dword ptr  8 ;~ 28F0:3D8B
cs=0x28f0;eip=0x003d8b; 	X(PUSH(bp));	// 95596 push    bp ;~ 28F0:3D8B
cs=0x28f0;eip=0x003d8c; 	T(MOV(bp, sp));	// 95597 mov     bp, sp ;~ 28F0:3D8C
cs=0x28f0;eip=0x003d8e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 95598 les     bx, [bp+arg_4] ;~ 28F0:3D8E
cs=0x28f0;eip=0x003d91; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 95599 mov     ax, [bp+arg_0] ;~ 28F0:3D91
cs=0x28f0;eip=0x003d94; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 95600 mov     dx, [bp+arg_2] ;~ 28F0:3D94
cs=0x28f0;eip=0x003d97; 	T(CMP(*(dw*)(raddr(es,bx+0x12)), dx));	// 95601 cmp     es:[bx+12h], dx ;~ 28F0:3D97
cs=0x28f0;eip=0x003d9b; 	R(JG(loc_3b28f));	// 95602 jg      short loc_3B28F ;~ 28F0:3D9B
cs=0x28f0;eip=0x003d9d; 	R(JL(loc_3b285));	// 95603 jl      short loc_3B285 ;~ 28F0:3D9D
cs=0x28f0;eip=0x003d9f; 	T(CMP(*(dw*)(raddr(es,bx+0x10)), ax));	// 95604 cmp     es:[bx+10h], ax ;~ 28F0:3D9F
cs=0x28f0;eip=0x003da3; 	R(JNC(loc_3b28f));	// 95605 jnb     short loc_3B28F ;~ 28F0:3DA3
loc_3b285:
	// 10501 
cs=0x28f0;eip=0x003da5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 95608 mov     ax, es:[bx+10h] ;~ 28F0:3DA5
cs=0x28f0;eip=0x003da9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 95609 mov     dx, es:[bx+12h] ;~ 28F0:3DA9
cs=0x28f0;eip=0x003dad; 	R(JMP(loc_3b2b9));	// 95610 jmp     short loc_3B2B9 ;~ 28F0:3DAD
loc_3b28f:
	// 10502 
cs=0x28f0;eip=0x003daf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 95615 mov     ax, es:[bx+14h] ;~ 28F0:3DAF
cs=0x28f0;eip=0x003db3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 95616 mov     dx, es:[bx+16h] ;~ 28F0:3DB3
cs=0x28f0;eip=0x003db7; 	T(NEG(ax));	// 95617 neg     ax ;~ 28F0:3DB7
cs=0x28f0;eip=0x003db9; 	T(ADC(dx, 0));	// 95618 adc     dx, 0 ;~ 28F0:3DB9
cs=0x28f0;eip=0x003dbc; 	T(NEG(dx));	// 95619 neg     dx ;~ 28F0:3DBC
cs=0x28f0;eip=0x003dbe; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 95620 cmp     dx, [bp+arg_2] ;~ 28F0:3DBE
cs=0x28f0;eip=0x003dc1; 	R(JL(loc_3b2bf));	// 95621 jl      short loc_3B2BF ;~ 28F0:3DC1
cs=0x28f0;eip=0x003dc3; 	R(JG(loc_3b2aa));	// 95622 jg      short loc_3B2AA ;~ 28F0:3DC3
cs=0x28f0;eip=0x003dc5; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 95623 cmp     ax, [bp+arg_0] ;~ 28F0:3DC5
cs=0x28f0;eip=0x003dc8; 	R(JBE(loc_3b2bf));	// 95624 jbe     short loc_3B2BF ;~ 28F0:3DC8
loc_3b2aa:
	// 10503 
cs=0x28f0;eip=0x003dca; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x14))));	// 95627 mov     ax, es:[bx+14h] ;~ 28F0:3DCA
cs=0x28f0;eip=0x003dce; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x16))));	// 95628 mov     dx, es:[bx+16h] ;~ 28F0:3DCE
cs=0x28f0;eip=0x003dd2; 	T(NEG(ax));	// 95629 neg     ax ;~ 28F0:3DD2
cs=0x28f0;eip=0x003dd4; 	T(ADC(dx, 0));	// 95630 adc     dx, 0 ;~ 28F0:3DD4
cs=0x28f0;eip=0x003dd7; 	T(NEG(dx));	// 95631 neg     dx ;~ 28F0:3DD7
loc_3b2b9:
	// 10504 
cs=0x28f0;eip=0x003dd9; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 95634 mov     [bp+arg_0], ax ;~ 28F0:3DD9
cs=0x28f0;eip=0x003ddc; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), dx));	// 95635 mov     [bp+arg_2], dx ;~ 28F0:3DDC
loc_3b2bf:
	// 10505 
cs=0x28f0;eip=0x003ddf; 	T(MOV(ax, 0x100));	// 95639 mov     ax, 100h ;~ 28F0:3DDF
cs=0x28f0;eip=0x003de2; 	T(CWD);	// 95640 cwd ;~ 28F0:3DE2
cs=0x28f0;eip=0x003de3; 	X(PUSH(dx));	// 95641 push    dx ;~ 28F0:3DE3
cs=0x28f0;eip=0x003de4; 	X(PUSH(ax));	// 95642 push    ax ;~ 28F0:3DE4
cs=0x28f0;eip=0x003de5; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 95643 mov     ax, word ptr unk_57111 ;~ 28F0:3DE5
cs=0x28f0;eip=0x003de8; 	T(CWD);	// 95644 cwd ;~ 28F0:3DE8
cs=0x28f0;eip=0x003de9; 	X(PUSH(dx));	// 95645 push    dx ;~ 28F0:3DE9
cs=0x28f0;eip=0x003dea; 	X(PUSH(ax));	// 95646 push    ax ;~ 28F0:3DEA
cs=0x28f0;eip=0x003deb; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 95647 push    [bp+arg_2] ;~ 28F0:3DEB
cs=0x28f0;eip=0x003dee; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 95648 push    [bp+arg_0] ;~ 28F0:3DEE
cs=0x28f0;eip=0x003df1; 	R(CALLF(sub_105c2,0));	// 95649 call    sub_105C2 ;~ 28F0:3DF1
cs=0x28f0;eip=0x003df6; 	X(PUSH(dx));	// 95650 push    dx ;~ 28F0:3DF6
cs=0x28f0;eip=0x003df7; 	X(PUSH(ax));	// 95651 push    ax ;~ 28F0:3DF7
cs=0x28f0;eip=0x003df8; 	R(CALLF(sub_10526,0));	// 95652 call    sub_10526 ;~ 28F0:3DF8
cs=0x28f0;eip=0x003dfd; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 95653 les     bx, [bp+arg_4] ;~ 28F0:3DFD
cs=0x28f0;eip=0x003e00; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 95654 add     es:[bx], ax ;~ 28F0:3E00
cs=0x28f0;eip=0x003e03; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 95655 adc     es:[bx+2], dx ;~ 28F0:3E03
cs=0x28f0;eip=0x003e07; 	X(PUSH(es));	// 95656 push    es ;~ 28F0:3E07
cs=0x28f0;eip=0x003e08; 	X(PUSH(bx));	// 95657 push    bx ;~ 28F0:3E08
cs=0x28f0;eip=0x003e09; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 95658 push    word ptr es:[bx+0Ah] ;~ 28F0:3E09
cs=0x28f0;eip=0x003e0d; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 95659 push    word ptr es:[bx+8] ;~ 28F0:3E0D
cs=0x28f0;eip=0x003e11; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 95660 push    word ptr es:[bx+0Eh] ;~ 28F0:3E11
cs=0x28f0;eip=0x003e15; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 95661 push    word ptr es:[bx+0Ch] ;~ 28F0:3E15
cs=0x28f0;eip=0x003e19; 	R(CALL(sub_3ba8c,0));	// 95662 call    sub_3BA8C ;~ 28F0:3E19
cs=0x28f0;eip=0x003e1c; 	X(POP(bp));	// 95663 pop     bp ;~ 28F0:3E1C
cs=0x28f0;eip=0x003e1d; 	R(RETN(8));	// 95664 retn    8 ;~ 28F0:3E1D
sub_3b300:
	// 95672 
#undef var_4
#define var_4 -4
	// 95675 var_4           = word ptr -4 ;~ 28F0:3E20
#undef var_2
#define var_2 -2
	// 95676 var_2           = word ptr -2 ;~ 28F0:3E20
#undef arg_0
#define arg_0 4
	// 95677 arg_0           = dword ptr  4 ;~ 28F0:3E20
cs=0x28f0;eip=0x003e20; 	X(PUSH(bp));	// 95679 push    bp ;~ 28F0:3E20
cs=0x28f0;eip=0x003e21; 	T(MOV(bp, sp));	// 95680 mov     bp, sp ;~ 28F0:3E21
cs=0x28f0;eip=0x003e23; 	T(SUB(sp, 4));	// 95681 sub     sp, 4 ;~ 28F0:3E23
cs=0x28f0;eip=0x003e26; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95682 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3E26
cs=0x28f0;eip=0x003e29; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95683 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3E29
cs=0x28f0;eip=0x003e2c; 	T(ADD(ax, 0x120));	// 95684 add     ax, 120h ;~ 28F0:3E2C
cs=0x28f0;eip=0x003e2f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95685 mov     [bp+var_4], ax ;~ 28F0:3E2F
cs=0x28f0;eip=0x003e32; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95686 mov     [bp+var_2], dx ;~ 28F0:3E32
cs=0x28f0;eip=0x003e35; 	T(SUB(ax, ax));	// 95687 sub     ax, ax ;~ 28F0:3E35
cs=0x28f0;eip=0x003e37; 	T(CWD);	// 95688 cwd ;~ 28F0:3E37
cs=0x28f0;eip=0x003e38; 	X(MOV(*(dw*)((&unk_57120)), ax));	// 95689 mov     word ptr unk_57120, ax ;~ 28F0:3E38
cs=0x28f0;eip=0x003e3b; 	X(MOV(*(dw*)((&unk_57122)), dx));	// 95690 mov     word ptr unk_57122, dx ;~ 28F0:3E3B
cs=0x28f0;eip=0x003e3f; 	X(MOV(*(dw*)((&unk_5711c)), ax));	// 95691 mov     word ptr unk_5711C, ax ;~ 28F0:3E3F
cs=0x28f0;eip=0x003e42; 	X(MOV(*(dw*)((&unk_5711e)), dx));	// 95692 mov     word ptr unk_5711E, dx ;~ 28F0:3E42
cs=0x28f0;eip=0x003e46; 	X(MOV(*(dw*)((&unk_57118)), ax));	// 95693 mov     word ptr unk_57118, ax ;~ 28F0:3E46
cs=0x28f0;eip=0x003e49; 	X(MOV(*(dw*)((&unk_5711a)), dx));	// 95694 mov     word ptr unk_5711A, dx ;~ 28F0:3E49
cs=0x28f0;eip=0x003e4d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95695 push    word ptr [bp+arg_0+2] ;~ 28F0:3E4D
cs=0x28f0;eip=0x003e50; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95696 push    word ptr [bp+arg_0] ;~ 28F0:3E50
cs=0x28f0;eip=0x003e53; 	T(MOV(ax, 0x0F768));	// 95697 mov     ax, 0F768h ;~ 28F0:3E53
cs=0x28f0;eip=0x003e56; 	X(PUSH(ax));	// 95698 push    ax ;~ 28F0:3E56
cs=0x28f0;eip=0x003e57; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95699 les     bx, [bp+arg_0] ;~ 28F0:3E57
cs=0x28f0;eip=0x003e5a; 	X(PUSH(*(dw*)(raddr(es,bx+0x122))));	// 95700 push    word ptr es:[bx+122h] ;~ 28F0:3E5A
cs=0x28f0;eip=0x003e5f; 	X(PUSH(*(dw*)(raddr(es,bx+0x120))));	// 95701 push    word ptr es:[bx+120h] ;~ 28F0:3E5F
cs=0x28f0;eip=0x003e64; 	R(CALL(sub_3aa0d,0));	// 95702 call    sub_3AA0D ;~ 28F0:3E64
cs=0x28f0;eip=0x003e67; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95703 push    word ptr [bp+arg_0+2] ;~ 28F0:3E67
cs=0x28f0;eip=0x003e6a; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95704 push    word ptr [bp+arg_0] ;~ 28F0:3E6A
cs=0x28f0;eip=0x003e6d; 	T(MOV(ax, 0x0F768));	// 95705 mov     ax, 0F768h ;~ 28F0:3E6D
cs=0x28f0;eip=0x003e70; 	X(PUSH(ax));	// 95706 push    ax ;~ 28F0:3E70
cs=0x28f0;eip=0x003e71; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95707 les     bx, [bp+arg_0] ;~ 28F0:3E71
cs=0x28f0;eip=0x003e74; 	X(PUSH(*(dw*)(raddr(es,bx+0x122))));	// 95708 push    word ptr es:[bx+122h] ;~ 28F0:3E74
cs=0x28f0;eip=0x003e79; 	X(PUSH(*(dw*)(raddr(es,bx+0x120))));	// 95709 push    word ptr es:[bx+120h] ;~ 28F0:3E79
cs=0x28f0;eip=0x003e7e; 	R(CALL(sub_3ab80,0));	// 95710 call    sub_3AB80 ;~ 28F0:3E7E
cs=0x28f0;eip=0x003e81; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95711 push    word ptr [bp+arg_0+2] ;~ 28F0:3E81
cs=0x28f0;eip=0x003e84; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95712 push    word ptr [bp+arg_0] ;~ 28F0:3E84
cs=0x28f0;eip=0x003e87; 	T(MOV(ax, 0x0F768));	// 95713 mov     ax, 0F768h ;~ 28F0:3E87
cs=0x28f0;eip=0x003e8a; 	X(PUSH(ax));	// 95714 push    ax ;~ 28F0:3E8A
cs=0x28f0;eip=0x003e8b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95715 les     bx, [bp+arg_0] ;~ 28F0:3E8B
cs=0x28f0;eip=0x003e8e; 	X(PUSH(*(dw*)(raddr(es,bx+0x122))));	// 95716 push    word ptr es:[bx+122h] ;~ 28F0:3E8E
cs=0x28f0;eip=0x003e93; 	X(PUSH(*(dw*)(raddr(es,bx+0x120))));	// 95717 push    word ptr es:[bx+120h] ;~ 28F0:3E93
cs=0x28f0;eip=0x003e98; 	R(CALL(sub_3af77,0));	// 95718 call    sub_3AF77 ;~ 28F0:3E98
cs=0x28f0;eip=0x003e9b; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95719 push    word ptr [bp+arg_0+2] ;~ 28F0:3E9B
cs=0x28f0;eip=0x003e9e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95720 push    word ptr [bp+arg_0] ;~ 28F0:3E9E
cs=0x28f0;eip=0x003ea1; 	T(MOV(ax, 0x0F768));	// 95721 mov     ax, 0F768h ;~ 28F0:3EA1
cs=0x28f0;eip=0x003ea4; 	X(PUSH(ax));	// 95722 push    ax ;~ 28F0:3EA4
cs=0x28f0;eip=0x003ea5; 	R(CALL(sub_3b0ee,0));	// 95723 call    sub_3B0EE ;~ 28F0:3EA5
cs=0x28f0;eip=0x003ea8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95724 les     bx, [bp+arg_0] ;~ 28F0:3EA8
cs=0x28f0;eip=0x003eab; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 95725 mov     ax, es:[bx+298h] ;~ 28F0:3EAB
cs=0x28f0;eip=0x003eb0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 95726 mov     dx, es:[bx+29Ah] ;~ 28F0:3EB0
cs=0x28f0;eip=0x003eb5; 	T(MOV(cl, 8));	// 95727 mov     cl, 8 ;~ 28F0:3EB5
cs=0x28f0;eip=0x003eb7; 	R(CALLF(sub_10240,0));	// 95728 call    sub_10240 ;~ 28F0:3EB7
cs=0x28f0;eip=0x003ebc; 	X(PUSH(dx));	// 95729 push    dx ;~ 28F0:3EBC
cs=0x28f0;eip=0x003ebd; 	X(PUSH(ax));	// 95730 push    ax ;~ 28F0:3EBD
cs=0x28f0;eip=0x003ebe; 	X(PUSH(*(dw*)((&unk_5711a))));	// 95731 push    word ptr unk_5711A ;~ 28F0:3EBE
cs=0x28f0;eip=0x003ec2; 	X(PUSH(*(dw*)((&unk_57118))));	// 95732 push    word ptr unk_57118 ;~ 28F0:3EC2
cs=0x28f0;eip=0x003ec6; 	R(CALLF(sub_10526,0));	// 95733 call    sub_10526 ;~ 28F0:3EC6
cs=0x28f0;eip=0x003ecb; 	X(MOV(*(dw*)((&unk_57124)), ax));	// 95734 mov     word ptr unk_57124, ax ;~ 28F0:3ECB
cs=0x28f0;eip=0x003ece; 	X(MOV(*(dw*)((&unk_57126)), dx));	// 95735 mov     word ptr unk_57126, dx ;~ 28F0:3ECE
cs=0x28f0;eip=0x003ed2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95736 les     bx, [bp+arg_0] ;~ 28F0:3ED2
cs=0x28f0;eip=0x003ed5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 95737 mov     ax, es:[bx+298h] ;~ 28F0:3ED5
cs=0x28f0;eip=0x003eda; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 95738 mov     dx, es:[bx+29Ah] ;~ 28F0:3EDA
cs=0x28f0;eip=0x003edf; 	T(MOV(cl, 8));	// 95739 mov     cl, 8 ;~ 28F0:3EDF
cs=0x28f0;eip=0x003ee1; 	R(CALLF(sub_10240,0));	// 95740 call    sub_10240 ;~ 28F0:3EE1
cs=0x28f0;eip=0x003ee6; 	X(PUSH(dx));	// 95741 push    dx ;~ 28F0:3EE6
cs=0x28f0;eip=0x003ee7; 	X(PUSH(ax));	// 95742 push    ax ;~ 28F0:3EE7
cs=0x28f0;eip=0x003ee8; 	X(PUSH(*(dw*)((&unk_5711e))));	// 95743 push    word ptr unk_5711E ;~ 28F0:3EE8
cs=0x28f0;eip=0x003eec; 	X(PUSH(*(dw*)((&unk_5711c))));	// 95744 push    word ptr unk_5711C ;~ 28F0:3EEC
cs=0x28f0;eip=0x003ef0; 	R(CALLF(sub_10526,0));	// 95745 call    sub_10526 ;~ 28F0:3EF0
cs=0x28f0;eip=0x003ef5; 	X(MOV(*(dw*)((&unk_57128)), ax));	// 95746 mov     word ptr unk_57128, ax ;~ 28F0:3EF5
cs=0x28f0;eip=0x003ef8; 	X(MOV(*(dw*)((&unk_5712a)), dx));	// 95747 mov     word ptr unk_5712A, dx ;~ 28F0:3EF8
cs=0x28f0;eip=0x003efc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95748 les     bx, [bp+arg_0] ;~ 28F0:3EFC
cs=0x28f0;eip=0x003eff; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x298))));	// 95749 mov     ax, es:[bx+298h] ;~ 28F0:3EFF
cs=0x28f0;eip=0x003f04; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x29A))));	// 95750 mov     dx, es:[bx+29Ah] ;~ 28F0:3F04
cs=0x28f0;eip=0x003f09; 	T(MOV(cl, 8));	// 95751 mov     cl, 8 ;~ 28F0:3F09
cs=0x28f0;eip=0x003f0b; 	R(CALLF(sub_10240,0));	// 95752 call    sub_10240 ;~ 28F0:3F0B
cs=0x28f0;eip=0x003f10; 	X(PUSH(dx));	// 95753 push    dx ;~ 28F0:3F10
cs=0x28f0;eip=0x003f11; 	X(PUSH(ax));	// 95754 push    ax ;~ 28F0:3F11
cs=0x28f0;eip=0x003f12; 	X(PUSH(*(dw*)((&unk_57122))));	// 95755 push    word ptr unk_57122 ;~ 28F0:3F12
cs=0x28f0;eip=0x003f16; 	X(PUSH(*(dw*)((&unk_57120))));	// 95756 push    word ptr unk_57120 ;~ 28F0:3F16
cs=0x28f0;eip=0x003f1a; 	R(CALLF(sub_10526,0));	// 95757 call    sub_10526 ;~ 28F0:3F1A
cs=0x28f0;eip=0x003f1f; 	X(MOV(*(dw*)((&unk_5712c)), ax));	// 95758 mov     word ptr unk_5712C, ax ;~ 28F0:3F1F
cs=0x28f0;eip=0x003f22; 	X(MOV(*(dw*)((&unk_5712e)), dx));	// 95759 mov     word ptr unk_5712E, dx ;~ 28F0:3F22
cs=0x28f0;eip=0x003f26; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95760 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3F26
cs=0x28f0;eip=0x003f29; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95761 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3F29
cs=0x28f0;eip=0x003f2c; 	T(ADD(ax, 0x120));	// 95762 add     ax, 120h ;~ 28F0:3F2C
cs=0x28f0;eip=0x003f2f; 	X(PUSH(dx));	// 95763 push    dx ;~ 28F0:3F2F
cs=0x28f0;eip=0x003f30; 	X(PUSH(ax));	// 95764 push    ax ;~ 28F0:3F30
cs=0x28f0;eip=0x003f31; 	X(PUSH(*(dw*)((&unk_57126))));	// 95765 push    word ptr unk_57126 ;~ 28F0:3F31
cs=0x28f0;eip=0x003f35; 	X(PUSH(*(dw*)((&unk_57124))));	// 95766 push    word ptr unk_57124 ;~ 28F0:3F35
cs=0x28f0;eip=0x003f39; 	R(CALL(sub_3b26b,0));	// 95767 call    sub_3B26B ;~ 28F0:3F39
cs=0x28f0;eip=0x003f3c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95768 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3F3C
cs=0x28f0;eip=0x003f3f; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95769 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3F3F
cs=0x28f0;eip=0x003f42; 	T(ADD(ax, 0x140));	// 95770 add     ax, 140h ;~ 28F0:3F42
cs=0x28f0;eip=0x003f45; 	X(PUSH(dx));	// 95771 push    dx ;~ 28F0:3F45
cs=0x28f0;eip=0x003f46; 	X(PUSH(ax));	// 95772 push    ax ;~ 28F0:3F46
cs=0x28f0;eip=0x003f47; 	X(PUSH(*(dw*)((&unk_5712a))));	// 95773 push    word ptr unk_5712A ;~ 28F0:3F47
cs=0x28f0;eip=0x003f4b; 	X(PUSH(*(dw*)((&unk_57128))));	// 95774 push    word ptr unk_57128 ;~ 28F0:3F4B
cs=0x28f0;eip=0x003f4f; 	R(CALL(sub_3b26b,0));	// 95775 call    sub_3B26B ;~ 28F0:3F4F
cs=0x28f0;eip=0x003f52; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95776 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3F52
cs=0x28f0;eip=0x003f55; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95777 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3F55
cs=0x28f0;eip=0x003f58; 	T(ADD(ax, 0x160));	// 95778 add     ax, 160h ;~ 28F0:3F58
cs=0x28f0;eip=0x003f5b; 	X(PUSH(dx));	// 95779 push    dx ;~ 28F0:3F5B
cs=0x28f0;eip=0x003f5c; 	X(PUSH(ax));	// 95780 push    ax ;~ 28F0:3F5C
cs=0x28f0;eip=0x003f5d; 	X(PUSH(*(dw*)((&unk_5712e))));	// 95781 push    word ptr unk_5712E ;~ 28F0:3F5D
cs=0x28f0;eip=0x003f61; 	X(PUSH(*(dw*)((&unk_5712c))));	// 95782 push    word ptr unk_5712C ;~ 28F0:3F61
cs=0x28f0;eip=0x003f65; 	R(CALL(sub_3b26b,0));	// 95783 call    sub_3B26B ;~ 28F0:3F65
cs=0x28f0;eip=0x003f68; 	T(MOV(sp, bp));	// 95784 mov     sp, bp ;~ 28F0:3F68
cs=0x28f0;eip=0x003f6a; 	X(POP(bp));	// 95785 pop     bp ;~ 28F0:3F6A
cs=0x28f0;eip=0x003f6b; 	R(RETN(4));	// 95786 retn    4 ;~ 28F0:3F6B
sub_3b44e:
	// 95794 
#undef var_4
#define var_4 -4
	// 95796 var_4           = word ptr -4 ;~ 28F0:3F6E
#undef var_2
#define var_2 -2
	// 95797 var_2           = word ptr -2 ;~ 28F0:3F6E
#undef arg_0
#define arg_0 4
	// 95798 arg_0           = dword ptr  4 ;~ 28F0:3F6E
cs=0x28f0;eip=0x003f6e; 	X(PUSH(bp));	// 95800 push    bp ;~ 28F0:3F6E
cs=0x28f0;eip=0x003f6f; 	T(MOV(bp, sp));	// 95801 mov     bp, sp ;~ 28F0:3F6F
cs=0x28f0;eip=0x003f71; 	T(SUB(sp, 4));	// 95802 sub     sp, 4 ;~ 28F0:3F71
cs=0x28f0;eip=0x003f74; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95803 les     bx, [bp+arg_0] ;~ 28F0:3F74
cs=0x28f0;eip=0x003f77; 	T(SUB(ax, ax));	// 95804 sub     ax, ax ;~ 28F0:3F77
cs=0x28f0;eip=0x003f79; 	X(MOV(*(dw*)(raddr(es,bx+2)), ax));	// 95805 mov     es:[bx+2], ax ;~ 28F0:3F79
cs=0x28f0;eip=0x003f7d; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 95806 mov     es:[bx], ax ;~ 28F0:3F7D
cs=0x28f0;eip=0x003f80; 	T(CMP(*(dw*)((&unk_57116)), ax));	// 95807 cmp     word ptr unk_57116, ax ;~ 28F0:3F80
cs=0x28f0;eip=0x003f84; 	R(JZ(loc_3b49b));	// 95808 jz      short loc_3B49B ;~ 28F0:3F84
cs=0x28f0;eip=0x003f86; 	T(MOV(ax, bx));	// 95809 mov     ax, bx ;~ 28F0:3F86
cs=0x28f0;eip=0x003f88; 	T(MOV(dx, es));	// 95810 mov     dx, es ;~ 28F0:3F88
cs=0x28f0;eip=0x003f8a; 	T(ADD(ax, 0x20));	// 95811 add     ax, 20h ; ' ' ;~ 28F0:3F8A
cs=0x28f0;eip=0x003f8d; 	X(PUSH(dx));	// 95812 push    dx ;~ 28F0:3F8D
cs=0x28f0;eip=0x003f8e; 	X(PUSH(ax));	// 95813 push    ax ;~ 28F0:3F8E
cs=0x28f0;eip=0x003f8f; 	T(MOV(ax, *(dw*)((&unk_57116))));	// 95814 mov     ax, word ptr unk_57116 ;~ 28F0:3F8F
cs=0x28f0;eip=0x003f92; 	T(NEG(ax));	// 95815 neg     ax ;~ 28F0:3F92
cs=0x28f0;eip=0x003f94; 	X(PUSH(ax));	// 95816 push    ax ;~ 28F0:3F94
cs=0x28f0;eip=0x003f95; 	R(CALL(sub_3bd9b,0));	// 95817 call    sub_3BD9B ;~ 28F0:3F95
cs=0x28f0;eip=0x003f98; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95818 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3F98
cs=0x28f0;eip=0x003f9b; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95819 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3F9B
cs=0x28f0;eip=0x003f9e; 	T(ADD(ax, 0x20));	// 95820 add     ax, 20h ; ' ' ;~ 28F0:3F9E
cs=0x28f0;eip=0x003fa1; 	X(PUSH(dx));	// 95821 push    dx ;~ 28F0:3FA1
cs=0x28f0;eip=0x003fa2; 	X(PUSH(ax));	// 95822 push    ax ;~ 28F0:3FA2
cs=0x28f0;eip=0x003fa3; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95823 les     bx, [bp+arg_0] ;~ 28F0:3FA3
cs=0x28f0;eip=0x003fa6; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A))));	// 95824 push    word ptr es:[bx+2Ah] ;~ 28F0:3FA6
cs=0x28f0;eip=0x003faa; 	X(PUSH(*(dw*)(raddr(es,bx+0x28))));	// 95825 push    word ptr es:[bx+28h] ;~ 28F0:3FAA
cs=0x28f0;eip=0x003fae; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E))));	// 95826 push    word ptr es:[bx+2Eh] ;~ 28F0:3FAE
cs=0x28f0;eip=0x003fb2; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C))));	// 95827 push    word ptr es:[bx+2Ch] ;~ 28F0:3FB2
cs=0x28f0;eip=0x003fb6; 	R(CALL(sub_3ba8c,0));	// 95828 call    sub_3BA8C ;~ 28F0:3FB6
cs=0x28f0;eip=0x003fb9; 	R(JMP(loc_3b4b4));	// 95829 jmp     short loc_3B4B4 ;~ 28F0:3FB9
loc_3b49b:
	// 10506 
cs=0x28f0;eip=0x003fbb; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95833 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3FBB
cs=0x28f0;eip=0x003fbe; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95834 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3FBE
cs=0x28f0;eip=0x003fc1; 	T(ADD(ax, 0x20));	// 95835 add     ax, 20h ; ' ' ;~ 28F0:3FC1
cs=0x28f0;eip=0x003fc4; 	X(PUSH(dx));	// 95836 push    dx ;~ 28F0:3FC4
cs=0x28f0;eip=0x003fc5; 	X(PUSH(ax));	// 95837 push    ax ;~ 28F0:3FC5
cs=0x28f0;eip=0x003fc6; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95838 les     bx, [bp+arg_0] ;~ 28F0:3FC6
cs=0x28f0;eip=0x003fc9; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 95839 push    word ptr es:[bx+36h] ;~ 28F0:3FC9
cs=0x28f0;eip=0x003fcd; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 95840 push    word ptr es:[bx+34h] ;~ 28F0:3FCD
cs=0x28f0;eip=0x003fd1; 	R(CALL(sub_3b9eb,0));	// 95841 call    sub_3B9EB ;~ 28F0:3FD1
loc_3b4b4:
	// 10507 
cs=0x28f0;eip=0x003fd4; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95844 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3FD4
cs=0x28f0;eip=0x003fd7; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95845 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3FD7
cs=0x28f0;eip=0x003fda; 	T(ADD(ax, 0x40));	// 95846 add     ax, 40h ; '@' ;~ 28F0:3FDA
cs=0x28f0;eip=0x003fdd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 95847 mov     [bp+var_4], ax ;~ 28F0:3FDD
cs=0x28f0;eip=0x003fe0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 95848 mov     [bp+var_2], dx ;~ 28F0:3FE0
cs=0x28f0;eip=0x003fe3; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 95849 cmp     word ptr unk_57114, 0 ;~ 28F0:3FE3
cs=0x28f0;eip=0x003fe8; 	R(JZ(loc_3b4fc));	// 95850 jz      short loc_3B4FC ;~ 28F0:3FE8
cs=0x28f0;eip=0x003fea; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95851 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3FEA
cs=0x28f0;eip=0x003fed; 	T(ADD(ax, 0x40));	// 95852 add     ax, 40h ; '@' ;~ 28F0:3FED
cs=0x28f0;eip=0x003ff0; 	X(PUSH(dx));	// 95853 push    dx ;~ 28F0:3FF0
cs=0x28f0;eip=0x003ff1; 	X(PUSH(ax));	// 95854 push    ax ;~ 28F0:3FF1
cs=0x28f0;eip=0x003ff2; 	X(PUSH(*(dw*)((&unk_57114))));	// 95855 push    word ptr unk_57114 ;~ 28F0:3FF2
cs=0x28f0;eip=0x003ff6; 	R(CALL(sub_3c13f,0));	// 95856 call    sub_3C13F ;~ 28F0:3FF6
cs=0x28f0;eip=0x003ff9; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95857 mov     ax, word ptr [bp+arg_0] ;~ 28F0:3FF9
cs=0x28f0;eip=0x003ffc; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95858 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:3FFC
cs=0x28f0;eip=0x003fff; 	T(ADD(ax, 0x40));	// 95859 add     ax, 40h ; '@' ;~ 28F0:3FFF
cs=0x28f0;eip=0x004002; 	X(PUSH(dx));	// 95860 push    dx ;~ 28F0:4002
cs=0x28f0;eip=0x004003; 	X(PUSH(ax));	// 95861 push    ax ;~ 28F0:4003
cs=0x28f0;eip=0x004004; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95862 les     bx, [bp+arg_0] ;~ 28F0:4004
cs=0x28f0;eip=0x004007; 	X(PUSH(*(dw*)(raddr(es,bx+0x4A))));	// 95863 push    word ptr es:[bx+4Ah] ;~ 28F0:4007
cs=0x28f0;eip=0x00400b; 	X(PUSH(*(dw*)(raddr(es,bx+0x48))));	// 95864 push    word ptr es:[bx+48h] ;~ 28F0:400B
cs=0x28f0;eip=0x00400f; 	X(PUSH(*(dw*)(raddr(es,bx+0x4E))));	// 95865 push    word ptr es:[bx+4Eh] ;~ 28F0:400F
cs=0x28f0;eip=0x004013; 	X(PUSH(*(dw*)(raddr(es,bx+0x4C))));	// 95866 push    word ptr es:[bx+4Ch] ;~ 28F0:4013
cs=0x28f0;eip=0x004017; 	R(CALL(sub_3ba8c,0));	// 95867 call    sub_3BA8C ;~ 28F0:4017
cs=0x28f0;eip=0x00401a; 	R(JMP(loc_3b515));	// 95868 jmp     short loc_3B515 ;~ 28F0:401A
loc_3b4fc:
	// 10508 
cs=0x28f0;eip=0x00401c; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95872 mov     ax, word ptr [bp+arg_0] ;~ 28F0:401C
cs=0x28f0;eip=0x00401f; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95873 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:401F
cs=0x28f0;eip=0x004022; 	T(ADD(ax, 0x40));	// 95874 add     ax, 40h ; '@' ;~ 28F0:4022
cs=0x28f0;eip=0x004025; 	X(PUSH(dx));	// 95875 push    dx ;~ 28F0:4025
cs=0x28f0;eip=0x004026; 	X(PUSH(ax));	// 95876 push    ax ;~ 28F0:4026
cs=0x28f0;eip=0x004027; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95877 les     bx, [bp+arg_0] ;~ 28F0:4027
cs=0x28f0;eip=0x00402a; 	X(PUSH(*(dw*)(raddr(es,bx+0x56))));	// 95878 push    word ptr es:[bx+56h] ;~ 28F0:402A
cs=0x28f0;eip=0x00402e; 	X(PUSH(*(dw*)(raddr(es,bx+0x54))));	// 95879 push    word ptr es:[bx+54h] ;~ 28F0:402E
cs=0x28f0;eip=0x004032; 	R(CALL(sub_3b9eb,0));	// 95880 call    sub_3B9EB ;~ 28F0:4032
loc_3b515:
	// 10509 
cs=0x28f0;eip=0x004035; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95883 les     bx, [bp+arg_0] ;~ 28F0:4035
cs=0x28f0;eip=0x004038; 	T(SUB(ax, ax));	// 95884 sub     ax, ax ;~ 28F0:4038
cs=0x28f0;eip=0x00403a; 	X(MOV(*(dw*)(raddr(es,bx+0x0A2)), ax));	// 95885 mov     es:[bx+0A2h], ax ;~ 28F0:403A
cs=0x28f0;eip=0x00403f; 	X(MOV(*(dw*)(raddr(es,bx+0x0A0)), ax));	// 95886 mov     es:[bx+0A0h], ax ;~ 28F0:403F
cs=0x28f0;eip=0x004044; 	T(MOV(ax, bx));	// 95887 mov     ax, bx ;~ 28F0:4044
cs=0x28f0;eip=0x004046; 	T(MOV(dx, es));	// 95888 mov     dx, es ;~ 28F0:4046
cs=0x28f0;eip=0x004048; 	T(ADD(ax, 0x2BC));	// 95889 add     ax, 2BCh ;~ 28F0:4048
cs=0x28f0;eip=0x00404b; 	X(PUSH(dx));	// 95890 push    dx ;~ 28F0:404B
cs=0x28f0;eip=0x00404c; 	X(PUSH(ax));	// 95891 push    ax ;~ 28F0:404C
cs=0x28f0;eip=0x00404d; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D2))));	// 95892 push    word ptr es:[bx+2D2h] ;~ 28F0:404D
cs=0x28f0;eip=0x004052; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D0))));	// 95893 push    word ptr es:[bx+2D0h] ;~ 28F0:4052
cs=0x28f0;eip=0x004057; 	R(CALL(sub_3b9eb,0));	// 95894 call    sub_3B9EB ;~ 28F0:4057
cs=0x28f0;eip=0x00405a; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95895 mov     ax, word ptr [bp+arg_0] ;~ 28F0:405A
cs=0x28f0;eip=0x00405d; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95896 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:405D
cs=0x28f0;eip=0x004060; 	T(ADD(ax, 0x29C));	// 95897 add     ax, 29Ch ;~ 28F0:4060
cs=0x28f0;eip=0x004063; 	X(PUSH(dx));	// 95898 push    dx ;~ 28F0:4063
cs=0x28f0;eip=0x004064; 	X(PUSH(ax));	// 95899 push    ax ;~ 28F0:4064
cs=0x28f0;eip=0x004065; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95900 les     bx, [bp+arg_0] ;~ 28F0:4065
cs=0x28f0;eip=0x004068; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B2))));	// 95901 push    word ptr es:[bx+2B2h] ;~ 28F0:4068
cs=0x28f0;eip=0x00406d; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B0))));	// 95902 push    word ptr es:[bx+2B0h] ;~ 28F0:406D
cs=0x28f0;eip=0x004072; 	R(CALL(sub_3b9eb,0));	// 95903 call    sub_3B9EB ;~ 28F0:4072
cs=0x28f0;eip=0x004075; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95904 push    word ptr [bp+arg_0+2] ;~ 28F0:4075
cs=0x28f0;eip=0x004078; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95905 push    word ptr [bp+arg_0] ;~ 28F0:4078
cs=0x28f0;eip=0x00407b; 	R(CALL(sub_3b300,0));	// 95906 call    sub_3B300 ;~ 28F0:407B
cs=0x28f0;eip=0x00407e; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95907 les     bx, [bp+arg_0] ;~ 28F0:407E
cs=0x28f0;eip=0x004081; 	T(CMP(*(raddr(es,bx+0x215)), 0));	// 95908 cmp     byte ptr es:[bx+215h], 0 ;~ 28F0:4081
cs=0x28f0;eip=0x004087; 	R(JZ(loc_3b587));	// 95909 jz      short loc_3B587 ;~ 28F0:4087
cs=0x28f0;eip=0x004089; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 95910 mov     ax, es:[bx+120h] ;~ 28F0:4089
cs=0x28f0;eip=0x00408e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 95911 mov     dx, es:[bx+122h] ;~ 28F0:408E
cs=0x28f0;eip=0x004093; 	T(OR(dx, dx));	// 95912 or      dx, dx ;~ 28F0:4093
cs=0x28f0;eip=0x004095; 	R(JG(loc_3b57d));	// 95913 jg      short loc_3B57D ;~ 28F0:4095
cs=0x28f0;eip=0x004097; 	R(JGE(loc_3b57d));	// 95914 jge     short loc_3B57D ;~ 28F0:4097
cs=0x28f0;eip=0x004099; 	T(SUB(dx, dx));	// 95915 sub     dx, dx ;~ 28F0:4099
cs=0x28f0;eip=0x00409b; 	T(SUB(ax, ax));	// 95916 sub     ax, ax ;~ 28F0:409B
loc_3b57d:
	// 10510 
cs=0x28f0;eip=0x00409d; 	X(MOV(*(dw*)(raddr(es,bx+0x120)), ax));	// 95920 mov     es:[bx+120h], ax ;~ 28F0:409D
cs=0x28f0;eip=0x0040a2; 	X(MOV(*(dw*)(raddr(es,bx+0x122)), dx));	// 95921 mov     es:[bx+122h], dx ;~ 28F0:40A2
loc_3b587:
	// 10511 
cs=0x28f0;eip=0x0040a7; 	T(CMP(*(dw*)(raddr(es,bx+0x162)), 0));	// 95924 cmp     word ptr es:[bx+162h], 0 ;~ 28F0:40A7
cs=0x28f0;eip=0x0040ad; 	R(JGE(loc_3b5cc));	// 95925 jge     short loc_3B5CC ;~ 28F0:40AD
cs=0x28f0;eip=0x0040af; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 95926 mov     ax, es:[bx+2FAh] ;~ 28F0:40AF
cs=0x28f0;eip=0x0040b4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 95927 mov     dx, es:[bx+2FCh] ;~ 28F0:40B4
cs=0x28f0;eip=0x0040b9; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 95928 add     ax, es:[bx+302h] ;~ 28F0:40B9
cs=0x28f0;eip=0x0040be; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 95929 adc     dx, es:[bx+304h] ;~ 28F0:40BE
cs=0x28f0;eip=0x0040c3; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 95930 add     ax, es:[bx+20Eh] ;~ 28F0:40C3
cs=0x28f0;eip=0x0040c8; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 95931 adc     dx, es:[bx+210h] ;~ 28F0:40C8
cs=0x28f0;eip=0x0040cd; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 95932 les     bx, es:[bx+31Ch] ;~ 28F0:40CD
cs=0x28f0;eip=0x0040d2; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 95933 cmp     dx, es:[bx+0Ch] ;~ 28F0:40D2
cs=0x28f0;eip=0x0040d6; 	R(JG(loc_3b602));	// 95934 jg      short loc_3B602 ;~ 28F0:40D6
cs=0x28f0;eip=0x0040d8; 	R(JL(loc_3b5c0));	// 95935 jl      short loc_3B5C0 ;~ 28F0:40D8
cs=0x28f0;eip=0x0040da; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 95936 cmp     ax, es:[bx+0Ah] ;~ 28F0:40DA
cs=0x28f0;eip=0x0040de; 	R(JA(loc_3b602));	// 95937 ja      short loc_3B602 ;~ 28F0:40DE
loc_3b5c0:
	// 10512 
cs=0x28f0;eip=0x0040e0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95940 les     bx, [bp+arg_0] ;~ 28F0:40E0
cs=0x28f0;eip=0x0040e3; 	X(MOV(*(dw*)(raddr(es,bx+0x332)), 6));	// 95941 mov     word ptr es:[bx+332h], 6 ;~ 28F0:40E3
cs=0x28f0;eip=0x0040ea; 	R(JMP(loc_3b602));	// 95942 jmp     short loc_3B602 ;~ 28F0:40EA
loc_3b5cc:
	// 10513 
cs=0x28f0;eip=0x0040ec; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 95946 mov     ax, es:[bx+2FAh] ;~ 28F0:40EC
cs=0x28f0;eip=0x0040f1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 95947 mov     dx, es:[bx+2FCh] ;~ 28F0:40F1
cs=0x28f0;eip=0x0040f6; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 95948 add     ax, es:[bx+302h] ;~ 28F0:40F6
cs=0x28f0;eip=0x0040fb; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 95949 adc     dx, es:[bx+304h] ;~ 28F0:40FB
cs=0x28f0;eip=0x004100; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 95950 les     bx, es:[bx+31Ch] ;~ 28F0:4100
cs=0x28f0;eip=0x004105; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 95951 cmp     dx, es:[bx+0Ch] ;~ 28F0:4105
cs=0x28f0;eip=0x004109; 	R(JL(loc_3b602));	// 95952 jl      short loc_3B602 ;~ 28F0:4109
cs=0x28f0;eip=0x00410b; 	R(JG(loc_3b5f3));	// 95953 jg      short loc_3B5F3 ;~ 28F0:410B
cs=0x28f0;eip=0x00410d; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 95954 cmp     ax, es:[bx+0Ah] ;~ 28F0:410D
cs=0x28f0;eip=0x004111; 	R(JC(loc_3b602));	// 95955 jb      short loc_3B602 ;~ 28F0:4111
loc_3b5f3:
	// 10514 
cs=0x28f0;eip=0x004113; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95958 les     bx, [bp+arg_0] ;~ 28F0:4113
cs=0x28f0;eip=0x004116; 	T(SUB(ax, ax));	// 95959 sub     ax, ax ;~ 28F0:4116
cs=0x28f0;eip=0x004118; 	X(MOV(*(dw*)(raddr(es,bx+0x162)), ax));	// 95960 mov     es:[bx+162h], ax ;~ 28F0:4118
cs=0x28f0;eip=0x00411d; 	X(MOV(*(dw*)(raddr(es,bx+0x160)), ax));	// 95961 mov     es:[bx+160h], ax ;~ 28F0:411D
loc_3b602:
	// 10515 
cs=0x28f0;eip=0x004122; 	T(MOV(sp, bp));	// 95965 mov     sp, bp ;~ 28F0:4122
cs=0x28f0;eip=0x004124; 	X(POP(bp));	// 95966 pop     bp ;~ 28F0:4124
cs=0x28f0;eip=0x004125; 	R(RETN(4));	// 95967 retn    4 ;~ 28F0:4125
sub_3b608:
	// 95975 
#undef var_2
#define var_2 -2
	// 95977 var_2           = word ptr -2 ;~ 28F0:4128
#undef arg_0
#define arg_0 4
	// 95978 arg_0           = dword ptr  4 ;~ 28F0:4128
cs=0x28f0;eip=0x004128; 	X(PUSH(bp));	// 95980 push    bp ;~ 28F0:4128
cs=0x28f0;eip=0x004129; 	T(MOV(bp, sp));	// 95981 mov     bp, sp ;~ 28F0:4129
cs=0x28f0;eip=0x00412b; 	T(SUB(sp, 2));	// 95982 sub     sp, 2 ;~ 28F0:412B
cs=0x28f0;eip=0x00412e; 	T(CMP(*(dw*)((&unk_57116)), 0));	// 95983 cmp     word ptr unk_57116, 0 ;~ 28F0:412E
cs=0x28f0;eip=0x004133; 	R(JZ(loc_3b685));	// 95984 jz      short loc_3B685 ;~ 28F0:4133
cs=0x28f0;eip=0x004135; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95985 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4135
cs=0x28f0;eip=0x004138; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95986 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4138
cs=0x28f0;eip=0x00413b; 	T(ADD(ax, 0x2BC));	// 95987 add     ax, 2BCh ;~ 28F0:413B
cs=0x28f0;eip=0x00413e; 	X(PUSH(dx));	// 95988 push    dx ;~ 28F0:413E
cs=0x28f0;eip=0x00413f; 	X(PUSH(ax));	// 95989 push    ax ;~ 28F0:413F
cs=0x28f0;eip=0x004140; 	T(MOV(ax, *(dw*)((&unk_57116))));	// 95990 mov     ax, word ptr unk_57116 ;~ 28F0:4140
cs=0x28f0;eip=0x004143; 	T(NEG(ax));	// 95991 neg     ax ;~ 28F0:4143
cs=0x28f0;eip=0x004145; 	X(PUSH(ax));	// 95992 push    ax ;~ 28F0:4145
cs=0x28f0;eip=0x004146; 	R(CALL(sub_3bd9b,0));	// 95993 call    sub_3BD9B ;~ 28F0:4146
cs=0x28f0;eip=0x004149; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 95994 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4149
cs=0x28f0;eip=0x00414c; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 95995 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:414C
cs=0x28f0;eip=0x00414f; 	T(ADD(ax, 0x2BC));	// 95996 add     ax, 2BCh ;~ 28F0:414F
cs=0x28f0;eip=0x004152; 	X(PUSH(dx));	// 95997 push    dx ;~ 28F0:4152
cs=0x28f0;eip=0x004153; 	X(PUSH(ax));	// 95998 push    ax ;~ 28F0:4153
cs=0x28f0;eip=0x004154; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 95999 les     bx, [bp+arg_0] ;~ 28F0:4154
cs=0x28f0;eip=0x004157; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C6))));	// 96000 push    word ptr es:[bx+2C6h] ;~ 28F0:4157
cs=0x28f0;eip=0x00415c; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C4))));	// 96001 push    word ptr es:[bx+2C4h] ;~ 28F0:415C
cs=0x28f0;eip=0x004161; 	X(PUSH(*(dw*)(raddr(es,bx+0x2CA))));	// 96002 push    word ptr es:[bx+2CAh] ;~ 28F0:4161
cs=0x28f0;eip=0x004166; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C8))));	// 96003 push    word ptr es:[bx+2C8h] ;~ 28F0:4166
cs=0x28f0;eip=0x00416b; 	R(CALL(sub_3ba8c,0));	// 96004 call    sub_3BA8C ;~ 28F0:416B
cs=0x28f0;eip=0x00416e; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96005 mov     ax, word ptr [bp+arg_0] ;~ 28F0:416E
cs=0x28f0;eip=0x004171; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96006 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4171
cs=0x28f0;eip=0x004174; 	T(ADD(ax, 0x20));	// 96007 add     ax, 20h ; ' ' ;~ 28F0:4174
cs=0x28f0;eip=0x004177; 	X(PUSH(dx));	// 96008 push    dx ;~ 28F0:4177
cs=0x28f0;eip=0x004178; 	X(PUSH(ax));	// 96009 push    ax ;~ 28F0:4178
cs=0x28f0;eip=0x004179; 	T(MOV(ax, *(dw*)((&unk_57116))));	// 96010 mov     ax, word ptr unk_57116 ;~ 28F0:4179
cs=0x28f0;eip=0x00417c; 	T(NEG(ax));	// 96011 neg     ax ;~ 28F0:417C
cs=0x28f0;eip=0x00417e; 	X(PUSH(ax));	// 96012 push    ax ;~ 28F0:417E
cs=0x28f0;eip=0x00417f; 	R(CALL(sub_3bd9b,0));	// 96013 call    sub_3BD9B ;~ 28F0:417F
cs=0x28f0;eip=0x004182; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96014 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4182
cs=0x28f0;eip=0x004185; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96015 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4185
cs=0x28f0;eip=0x004188; 	T(ADD(ax, 0x20));	// 96016 add     ax, 20h ; ' ' ;~ 28F0:4188
cs=0x28f0;eip=0x00418b; 	X(PUSH(dx));	// 96017 push    dx ;~ 28F0:418B
cs=0x28f0;eip=0x00418c; 	X(PUSH(ax));	// 96018 push    ax ;~ 28F0:418C
cs=0x28f0;eip=0x00418d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96019 les     bx, [bp+arg_0] ;~ 28F0:418D
cs=0x28f0;eip=0x004190; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A))));	// 96020 push    word ptr es:[bx+2Ah] ;~ 28F0:4190
cs=0x28f0;eip=0x004194; 	X(PUSH(*(dw*)(raddr(es,bx+0x28))));	// 96021 push    word ptr es:[bx+28h] ;~ 28F0:4194
cs=0x28f0;eip=0x004198; 	X(PUSH(*(dw*)(raddr(es,bx+0x2E))));	// 96022 push    word ptr es:[bx+2Eh] ;~ 28F0:4198
cs=0x28f0;eip=0x00419c; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C))));	// 96023 push    word ptr es:[bx+2Ch] ;~ 28F0:419C
cs=0x28f0;eip=0x0041a0; 	R(CALL(sub_3ba8c,0));	// 96024 call    sub_3BA8C ;~ 28F0:41A0
cs=0x28f0;eip=0x0041a3; 	R(JMP(loc_3b6b9));	// 96025 jmp     short loc_3B6B9 ;~ 28F0:41A3
loc_3b685:
	// 10516 
cs=0x28f0;eip=0x0041a5; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96029 mov     ax, word ptr [bp+arg_0] ;~ 28F0:41A5
cs=0x28f0;eip=0x0041a8; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96030 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:41A8
cs=0x28f0;eip=0x0041ab; 	T(ADD(ax, 0x2BC));	// 96031 add     ax, 2BCh ;~ 28F0:41AB
cs=0x28f0;eip=0x0041ae; 	X(PUSH(dx));	// 96032 push    dx ;~ 28F0:41AE
cs=0x28f0;eip=0x0041af; 	X(PUSH(ax));	// 96033 push    ax ;~ 28F0:41AF
cs=0x28f0;eip=0x0041b0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96034 les     bx, [bp+arg_0] ;~ 28F0:41B0
cs=0x28f0;eip=0x0041b3; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D2))));	// 96035 push    word ptr es:[bx+2D2h] ;~ 28F0:41B3
cs=0x28f0;eip=0x0041b8; 	X(PUSH(*(dw*)(raddr(es,bx+0x2D0))));	// 96036 push    word ptr es:[bx+2D0h] ;~ 28F0:41B8
cs=0x28f0;eip=0x0041bd; 	R(CALL(sub_3b9eb,0));	// 96037 call    sub_3B9EB ;~ 28F0:41BD
cs=0x28f0;eip=0x0041c0; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96038 mov     ax, word ptr [bp+arg_0] ;~ 28F0:41C0
cs=0x28f0;eip=0x0041c3; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96039 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:41C3
cs=0x28f0;eip=0x0041c6; 	T(ADD(ax, 0x20));	// 96040 add     ax, 20h ; ' ' ;~ 28F0:41C6
cs=0x28f0;eip=0x0041c9; 	X(PUSH(dx));	// 96041 push    dx ;~ 28F0:41C9
cs=0x28f0;eip=0x0041ca; 	X(PUSH(ax));	// 96042 push    ax ;~ 28F0:41CA
cs=0x28f0;eip=0x0041cb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96043 les     bx, [bp+arg_0] ;~ 28F0:41CB
cs=0x28f0;eip=0x0041ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x36))));	// 96044 push    word ptr es:[bx+36h] ;~ 28F0:41CE
cs=0x28f0;eip=0x0041d2; 	X(PUSH(*(dw*)(raddr(es,bx+0x34))));	// 96045 push    word ptr es:[bx+34h] ;~ 28F0:41D2
cs=0x28f0;eip=0x0041d6; 	R(CALL(sub_3b9eb,0));	// 96046 call    sub_3B9EB ;~ 28F0:41D6
loc_3b6b9:
	// 10517 
cs=0x28f0;eip=0x0041d9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96049 les     bx, [bp+arg_0] ;~ 28F0:41D9
cs=0x28f0;eip=0x0041dc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2BC))));	// 96050 mov     ax, es:[bx+2BCh] ;~ 28F0:41DC
cs=0x28f0;eip=0x0041e1; 	T(OR(ax, *(dw*)(raddr(es,bx+0x2BE))));	// 96051 or      ax, es:[bx+2BEh] ;~ 28F0:41E1
cs=0x28f0;eip=0x0041e6; 	R(JNZ(loc_3b6cb));	// 96052 jnz     short loc_3B6CB ;~ 28F0:41E6
cs=0x28f0;eip=0x0041e8; 	R(JMP(loc_3b74f));	// 96053 jmp     loc_3B74F ;~ 28F0:41E8
loc_3b6cb:
	// 10518 
cs=0x28f0;eip=0x0041eb; 	T(CMP(*(dw*)(raddr(es,bx+0x2BE)), 0));	// 96057 cmp     word ptr es:[bx+2BEh], 0 ;~ 28F0:41EB
cs=0x28f0;eip=0x0041f1; 	R(JL(loc_3b6f5));	// 96058 jl      short loc_3B6F5 ;~ 28F0:41F1
cs=0x28f0;eip=0x0041f3; 	R(JG(loc_3b6dd));	// 96059 jg      short loc_3B6DD ;~ 28F0:41F3
cs=0x28f0;eip=0x0041f5; 	T(CMP(*(dw*)(raddr(es,bx+0x2BC)), 0));	// 96060 cmp     word ptr es:[bx+2BCh], 0 ;~ 28F0:41F5
cs=0x28f0;eip=0x0041fb; 	R(JZ(loc_3b6f5));	// 96061 jz      short loc_3B6F5 ;~ 28F0:41FB
loc_3b6dd:
	// 10519 
cs=0x28f0;eip=0x0041fd; 	T(MOV(ax, bx));	// 96064 mov     ax, bx ;~ 28F0:41FD
cs=0x28f0;eip=0x0041ff; 	T(MOV(dx, es));	// 96065 mov     dx, es ;~ 28F0:41FF
cs=0x28f0;eip=0x004201; 	T(ADD(ax, 0x29C));	// 96066 add     ax, 29Ch ;~ 28F0:4201
cs=0x28f0;eip=0x004204; 	X(PUSH(dx));	// 96067 push    dx ;~ 28F0:4204
cs=0x28f0;eip=0x004205; 	X(PUSH(ax));	// 96068 push    ax ;~ 28F0:4205
cs=0x28f0;eip=0x004206; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C6))));	// 96069 push    word ptr es:[bx+2C6h] ;~ 28F0:4206
cs=0x28f0;eip=0x00420b; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C4))));	// 96070 push    word ptr es:[bx+2C4h] ;~ 28F0:420B
cs=0x28f0;eip=0x004210; 	T(MOV(ax, 0x64));	// 96071 mov     ax, 64h ; 'd' ;~ 28F0:4210
cs=0x28f0;eip=0x004213; 	R(JMP(loc_3b70b));	// 96072 jmp     short loc_3B70B ;~ 28F0:4213
loc_3b6f5:
	// 10520 
cs=0x28f0;eip=0x004215; 	T(MOV(ax, bx));	// 96077 mov     ax, bx ;~ 28F0:4215
cs=0x28f0;eip=0x004217; 	T(MOV(dx, es));	// 96078 mov     dx, es ;~ 28F0:4217
cs=0x28f0;eip=0x004219; 	T(ADD(ax, 0x29C));	// 96079 add     ax, 29Ch ;~ 28F0:4219
cs=0x28f0;eip=0x00421c; 	X(PUSH(dx));	// 96080 push    dx ;~ 28F0:421C
cs=0x28f0;eip=0x00421d; 	X(PUSH(ax));	// 96081 push    ax ;~ 28F0:421D
cs=0x28f0;eip=0x00421e; 	X(PUSH(*(dw*)(raddr(es,bx+0x2CA))));	// 96082 push    word ptr es:[bx+2CAh] ;~ 28F0:421E
cs=0x28f0;eip=0x004223; 	X(PUSH(*(dw*)(raddr(es,bx+0x2C8))));	// 96083 push    word ptr es:[bx+2C8h] ;~ 28F0:4223
cs=0x28f0;eip=0x004228; 	T(MOV(ax, 0x0FF9C));	// 96084 mov     ax, 0FF9Ch ;~ 28F0:4228
loc_3b70b:
	// 10521 
cs=0x28f0;eip=0x00422b; 	T(CWD);	// 96087 cwd ;~ 28F0:422B
cs=0x28f0;eip=0x00422c; 	X(PUSH(dx));	// 96088 push    dx ;~ 28F0:422C
cs=0x28f0;eip=0x00422d; 	X(PUSH(ax));	// 96089 push    ax ;~ 28F0:422D
cs=0x28f0;eip=0x00422e; 	X(PUSH(*(dw*)(raddr(es,bx+0x2BE))));	// 96090 push    word ptr es:[bx+2BEh] ;~ 28F0:422E
cs=0x28f0;eip=0x004233; 	X(PUSH(*(dw*)(raddr(es,bx+0x2BC))));	// 96091 push    word ptr es:[bx+2BCh] ;~ 28F0:4233
cs=0x28f0;eip=0x004238; 	R(CALLF(sub_105c2,0));	// 96092 call    sub_105C2 ;~ 28F0:4238
cs=0x28f0;eip=0x00423d; 	X(PUSH(dx));	// 96093 push    dx ;~ 28F0:423D
cs=0x28f0;eip=0x00423e; 	X(PUSH(ax));	// 96094 push    ax ;~ 28F0:423E
cs=0x28f0;eip=0x00423f; 	R(CALLF(sub_10526,0));	// 96095 call    sub_10526 ;~ 28F0:423F
cs=0x28f0;eip=0x004244; 	X(PUSH(ax));	// 96096 push    ax ;~ 28F0:4244
cs=0x28f0;eip=0x004245; 	R(CALL(sub_3bd9b,0));	// 96097 call    sub_3BD9B ;~ 28F0:4245
cs=0x28f0;eip=0x004248; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96098 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4248
cs=0x28f0;eip=0x00424b; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96099 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:424B
cs=0x28f0;eip=0x00424e; 	T(ADD(ax, 0x29C));	// 96100 add     ax, 29Ch ;~ 28F0:424E
cs=0x28f0;eip=0x004251; 	X(PUSH(dx));	// 96101 push    dx ;~ 28F0:4251
cs=0x28f0;eip=0x004252; 	X(PUSH(ax));	// 96102 push    ax ;~ 28F0:4252
cs=0x28f0;eip=0x004253; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96103 les     bx, [bp+arg_0] ;~ 28F0:4253
cs=0x28f0;eip=0x004256; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A6))));	// 96104 push    word ptr es:[bx+2A6h] ;~ 28F0:4256
cs=0x28f0;eip=0x00425b; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A4))));	// 96105 push    word ptr es:[bx+2A4h] ;~ 28F0:425B
cs=0x28f0;eip=0x004260; 	X(PUSH(*(dw*)(raddr(es,bx+0x2AA))));	// 96106 push    word ptr es:[bx+2AAh] ;~ 28F0:4260
cs=0x28f0;eip=0x004265; 	X(PUSH(*(dw*)(raddr(es,bx+0x2A8))));	// 96107 push    word ptr es:[bx+2A8h] ;~ 28F0:4265
cs=0x28f0;eip=0x00426a; 	R(CALL(sub_3ba8c,0));	// 96108 call    sub_3BA8C ;~ 28F0:426A
cs=0x28f0;eip=0x00426d; 	R(JMP(loc_3b76a));	// 96109 jmp     short loc_3B76A ;~ 28F0:426D
loc_3b74f:
	// 10522 
cs=0x28f0;eip=0x00426f; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96113 mov     ax, word ptr [bp+arg_0] ;~ 28F0:426F
cs=0x28f0;eip=0x004272; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96114 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4272
cs=0x28f0;eip=0x004275; 	T(ADD(ax, 0x29C));	// 96115 add     ax, 29Ch ;~ 28F0:4275
cs=0x28f0;eip=0x004278; 	X(PUSH(dx));	// 96116 push    dx ;~ 28F0:4278
cs=0x28f0;eip=0x004279; 	X(PUSH(ax));	// 96117 push    ax ;~ 28F0:4279
cs=0x28f0;eip=0x00427a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96118 les     bx, [bp+arg_0] ;~ 28F0:427A
cs=0x28f0;eip=0x00427d; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B2))));	// 96119 push    word ptr es:[bx+2B2h] ;~ 28F0:427D
cs=0x28f0;eip=0x004282; 	X(PUSH(*(dw*)(raddr(es,bx+0x2B0))));	// 96120 push    word ptr es:[bx+2B0h] ;~ 28F0:4282
cs=0x28f0;eip=0x004287; 	R(CALL(sub_3b9eb,0));	// 96121 call    sub_3B9EB ;~ 28F0:4287
loc_3b76a:
	// 10523 
cs=0x28f0;eip=0x00428a; 	T(CMP(*(dw*)((&unk_57114)), 0));	// 96124 cmp     word ptr unk_57114, 0 ;~ 28F0:428A
cs=0x28f0;eip=0x00428f; 	R(JZ(loc_3b7e0));	// 96125 jz      short loc_3B7E0 ;~ 28F0:428F
cs=0x28f0;eip=0x004291; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96126 push    word ptr [bp+arg_0+2] ;~ 28F0:4291
cs=0x28f0;eip=0x004294; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96127 push    word ptr [bp+arg_0] ;~ 28F0:4294
cs=0x28f0;eip=0x004297; 	X(PUSH(*(dw*)((&unk_57114))));	// 96128 push    word ptr unk_57114 ;~ 28F0:4297
cs=0x28f0;eip=0x00429b; 	R(CALL(sub_3c13f,0));	// 96129 call    sub_3C13F ;~ 28F0:429B
cs=0x28f0;eip=0x00429e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96130 push    word ptr [bp+arg_0+2] ;~ 28F0:429E
cs=0x28f0;eip=0x0042a1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96131 push    word ptr [bp+arg_0] ;~ 28F0:42A1
cs=0x28f0;eip=0x0042a4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96132 les     bx, [bp+arg_0] ;~ 28F0:42A4
cs=0x28f0;eip=0x0042a7; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 96133 push    word ptr es:[bx+0Ah] ;~ 28F0:42A7
cs=0x28f0;eip=0x0042ab; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 96134 push    word ptr es:[bx+8] ;~ 28F0:42AB
cs=0x28f0;eip=0x0042af; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 96135 push    word ptr es:[bx+0Eh] ;~ 28F0:42AF
cs=0x28f0;eip=0x0042b3; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 96136 push    word ptr es:[bx+0Ch] ;~ 28F0:42B3
cs=0x28f0;eip=0x0042b7; 	R(CALL(sub_3ba8c,0));	// 96137 call    sub_3BA8C ;~ 28F0:42B7
cs=0x28f0;eip=0x0042ba; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96138 push    word ptr [bp+arg_0+2] ;~ 28F0:42BA
cs=0x28f0;eip=0x0042bd; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96139 push    word ptr [bp+arg_0] ;~ 28F0:42BD
cs=0x28f0;eip=0x0042c0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96140 push    word ptr [bp+arg_0+2] ;~ 28F0:42C0
cs=0x28f0;eip=0x0042c3; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96141 push    word ptr [bp+arg_0] ;~ 28F0:42C3
cs=0x28f0;eip=0x0042c6; 	R(CALL(sub_3b97e,0));	// 96142 call    sub_3B97E ;~ 28F0:42C6
cs=0x28f0;eip=0x0042c9; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96143 mov     ax, word ptr [bp+arg_0] ;~ 28F0:42C9
cs=0x28f0;eip=0x0042cc; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96144 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:42CC
cs=0x28f0;eip=0x0042cf; 	T(ADD(ax, 0x40));	// 96145 add     ax, 40h ; '@' ;~ 28F0:42CF
cs=0x28f0;eip=0x0042d2; 	X(PUSH(dx));	// 96146 push    dx ;~ 28F0:42D2
cs=0x28f0;eip=0x0042d3; 	X(PUSH(ax));	// 96147 push    ax ;~ 28F0:42D3
cs=0x28f0;eip=0x0042d4; 	T(MOV(ax, *(dw*)((&unk_57114))));	// 96148 mov     ax, word ptr unk_57114 ;~ 28F0:42D4
cs=0x28f0;eip=0x0042d7; 	T(NEG(ax));	// 96149 neg     ax ;~ 28F0:42D7
cs=0x28f0;eip=0x0042d9; 	X(PUSH(ax));	// 96150 push    ax ;~ 28F0:42D9
cs=0x28f0;eip=0x0042da; 	R(CALL(sub_3c13f,0));	// 96151 call    sub_3C13F ;~ 28F0:42DA
cs=0x28f0;eip=0x0042dd; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96152 mov     ax, word ptr [bp+arg_0] ;~ 28F0:42DD
cs=0x28f0;eip=0x0042e0; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96153 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:42E0
cs=0x28f0;eip=0x0042e3; 	T(ADD(ax, 0x40));	// 96154 add     ax, 40h ; '@' ;~ 28F0:42E3
cs=0x28f0;eip=0x0042e6; 	X(PUSH(dx));	// 96155 push    dx ;~ 28F0:42E6
cs=0x28f0;eip=0x0042e7; 	X(PUSH(ax));	// 96156 push    ax ;~ 28F0:42E7
cs=0x28f0;eip=0x0042e8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96157 les     bx, [bp+arg_0] ;~ 28F0:42E8
cs=0x28f0;eip=0x0042eb; 	X(PUSH(*(dw*)(raddr(es,bx+0x4A))));	// 96158 push    word ptr es:[bx+4Ah] ;~ 28F0:42EB
cs=0x28f0;eip=0x0042ef; 	X(PUSH(*(dw*)(raddr(es,bx+0x48))));	// 96159 push    word ptr es:[bx+48h] ;~ 28F0:42EF
cs=0x28f0;eip=0x0042f3; 	X(PUSH(*(dw*)(raddr(es,bx+0x4E))));	// 96160 push    word ptr es:[bx+4Eh] ;~ 28F0:42F3
cs=0x28f0;eip=0x0042f7; 	X(PUSH(*(dw*)(raddr(es,bx+0x4C))));	// 96161 push    word ptr es:[bx+4Ch] ;~ 28F0:42F7
cs=0x28f0;eip=0x0042fb; 	R(CALL(sub_3ba8c,0));	// 96162 call    sub_3BA8C ;~ 28F0:42FB
cs=0x28f0;eip=0x0042fe; 	R(JMP(loc_3b80d));	// 96163 jmp     short loc_3B80D ;~ 28F0:42FE
loc_3b7e0:
	// 10524 
cs=0x28f0;eip=0x004300; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96167 push    word ptr [bp+arg_0+2] ;~ 28F0:4300
cs=0x28f0;eip=0x004303; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96168 push    word ptr [bp+arg_0] ;~ 28F0:4303
cs=0x28f0;eip=0x004306; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96169 les     bx, [bp+arg_0] ;~ 28F0:4306
cs=0x28f0;eip=0x004309; 	X(PUSH(*(dw*)(raddr(es,bx+0x16))));	// 96170 push    word ptr es:[bx+16h] ;~ 28F0:4309
cs=0x28f0;eip=0x00430d; 	X(PUSH(*(dw*)(raddr(es,bx+0x14))));	// 96171 push    word ptr es:[bx+14h] ;~ 28F0:430D
cs=0x28f0;eip=0x004311; 	R(CALL(sub_3b9eb,0));	// 96172 call    sub_3B9EB ;~ 28F0:4311
cs=0x28f0;eip=0x004314; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96173 mov     ax, word ptr [bp+arg_0] ;~ 28F0:4314
cs=0x28f0;eip=0x004317; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96174 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:4317
cs=0x28f0;eip=0x00431a; 	T(ADD(ax, 0x40));	// 96175 add     ax, 40h ; '@' ;~ 28F0:431A
cs=0x28f0;eip=0x00431d; 	X(PUSH(dx));	// 96176 push    dx ;~ 28F0:431D
cs=0x28f0;eip=0x00431e; 	X(PUSH(ax));	// 96177 push    ax ;~ 28F0:431E
cs=0x28f0;eip=0x00431f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96178 les     bx, [bp+arg_0] ;~ 28F0:431F
cs=0x28f0;eip=0x004322; 	X(PUSH(*(dw*)(raddr(es,bx+0x56))));	// 96179 push    word ptr es:[bx+56h] ;~ 28F0:4322
cs=0x28f0;eip=0x004326; 	X(PUSH(*(dw*)(raddr(es,bx+0x54))));	// 96180 push    word ptr es:[bx+54h] ;~ 28F0:4326
cs=0x28f0;eip=0x00432a; 	R(CALL(sub_3b9eb,0));	// 96181 call    sub_3B9EB ;~ 28F0:432A
loc_3b80d:
	// 10525 
cs=0x28f0;eip=0x00432d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96184 push    word ptr [bp+arg_0+2] ;~ 28F0:432D
cs=0x28f0;eip=0x004330; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96185 push    word ptr [bp+arg_0] ;~ 28F0:4330
cs=0x28f0;eip=0x004333; 	R(CALL(sub_3a84e,0));	// 96186 call    sub_3A84E ;~ 28F0:4333
cs=0x28f0;eip=0x004336; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96187 push    word ptr [bp+arg_0+2] ;~ 28F0:4336
cs=0x28f0;eip=0x004339; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96188 push    word ptr [bp+arg_0] ;~ 28F0:4339
cs=0x28f0;eip=0x00433c; 	R(CALL(sub_3b300,0));	// 96189 call    sub_3B300 ;~ 28F0:433C
cs=0x28f0;eip=0x00433f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96190 les     bx, [bp+arg_0] ;~ 28F0:433F
cs=0x28f0;eip=0x004342; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 96191 mov     ax, es:[bx+32Ch] ;~ 28F0:4342
cs=0x28f0;eip=0x004347; 	T(OR(ax, *(dw*)(raddr(es,bx+0x32E))));	// 96192 or      ax, es:[bx+32Eh] ;~ 28F0:4347
cs=0x28f0;eip=0x00434c; 	R(JZ(loc_3b88a));	// 96193 jz      short loc_3B88A ;~ 28F0:434C
cs=0x28f0;eip=0x00434e; 	T(MOV(ax, 0x206));	// 96194 mov     ax, 206h ;~ 28F0:434E
cs=0x28f0;eip=0x004351; 	T(MOV(dx, seg_offset(seg041)));	// 96195 mov     dx, seg seg041 ;~ 28F0:4351
cs=0x28f0;eip=0x004354; 	X(PUSH(dx));	// 96196 push    dx ;~ 28F0:4354
cs=0x28f0;eip=0x004355; 	X(PUSH(ax));	// 96197 push    ax ;~ 28F0:4355
cs=0x28f0;eip=0x004356; 	R(CALLF(sub_1c5f1,0));	// 96198 call    sub_1C5F1 ;~ 28F0:4356
cs=0x28f0;eip=0x00435b; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 96199 mov     ax, word ptr unk_57111 ;~ 28F0:435B
cs=0x28f0;eip=0x00435e; 	T(CWD);	// 96200 cwd ;~ 28F0:435E
cs=0x28f0;eip=0x00435f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96201 les     bx, [bp+arg_0] ;~ 28F0:435F
cs=0x28f0;eip=0x004362; 	X(SUB(*(dw*)(raddr(es,bx+0x32C)), ax));	// 96202 sub     es:[bx+32Ch], ax ;~ 28F0:4362
cs=0x28f0;eip=0x004367; 	X(SBB(*(dw*)(raddr(es,bx+0x32E)), dx));	// 96203 sbb     es:[bx+32Eh], dx ;~ 28F0:4367
cs=0x28f0;eip=0x00436c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x32C))));	// 96204 mov     ax, es:[bx+32Ch] ;~ 28F0:436C
cs=0x28f0;eip=0x004371; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x32E))));	// 96205 mov     dx, es:[bx+32Eh] ;~ 28F0:4371
cs=0x28f0;eip=0x004376; 	T(OR(dx, dx));	// 96206 or      dx, dx ;~ 28F0:4376
cs=0x28f0;eip=0x004378; 	R(JG(loc_3b860));	// 96207 jg      short loc_3B860 ;~ 28F0:4378
cs=0x28f0;eip=0x00437a; 	R(JGE(loc_3b860));	// 96208 jge     short loc_3B860 ;~ 28F0:437A
cs=0x28f0;eip=0x00437c; 	T(SUB(dx, dx));	// 96209 sub     dx, dx ;~ 28F0:437C
cs=0x28f0;eip=0x00437e; 	T(SUB(ax, ax));	// 96210 sub     ax, ax ;~ 28F0:437E
loc_3b860:
	// 10526 
cs=0x28f0;eip=0x004380; 	X(MOV(*(dw*)(raddr(es,bx+0x32C)), ax));	// 96214 mov     es:[bx+32Ch], ax ;~ 28F0:4380
cs=0x28f0;eip=0x004385; 	X(MOV(*(dw*)(raddr(es,bx+0x32E)), dx));	// 96215 mov     es:[bx+32Eh], dx ;~ 28F0:4385
cs=0x28f0;eip=0x00438a; 	T(OR(ax, dx));	// 96216 or      ax, dx ;~ 28F0:438A
cs=0x28f0;eip=0x00438c; 	R(JNZ(loc_3b88a));	// 96217 jnz     short loc_3B88A ;~ 28F0:438C
cs=0x28f0;eip=0x00438e; 	X(PUSH(es));	// 96218 push    es ;~ 28F0:438E
cs=0x28f0;eip=0x00438f; 	X(PUSH(bx));	// 96219 push    bx ;~ 28F0:438F
cs=0x28f0;eip=0x004390; 	R(CALL(sub_38ca4,0));	// 96220 call    sub_38CA4 ;~ 28F0:4390
cs=0x28f0;eip=0x004393; 	T(OR(ax, ax));	// 96221 or      ax, ax ;~ 28F0:4393
cs=0x28f0;eip=0x004395; 	R(JZ(loc_3b880));	// 96222 jz      short loc_3B880 ;~ 28F0:4395
cs=0x28f0;eip=0x004397; 	T(MOV(ax, 0x228));	// 96223 mov     ax, 228h ;~ 28F0:4397
cs=0x28f0;eip=0x00439a; 	T(MOV(dx, seg_offset(seg041)));	// 96224 mov     dx, seg seg041 ;~ 28F0:439A
cs=0x28f0;eip=0x00439d; 	X(PUSH(dx));	// 96225 push    dx ;~ 28F0:439D
cs=0x28f0;eip=0x00439e; 	R(JMP(loc_3b884));	// 96226 jmp     short loc_3B884 ;~ 28F0:439E
loc_3b880:
	// 10527 
cs=0x28f0;eip=0x0043a0; 	T(MOV(ax, 0x288));	// 96230 mov     ax, 288h ;~ 28F0:43A0
cs=0x28f0;eip=0x0043a3; 	X(PUSH(ds));	// 96231 push    ds ;~ 28F0:43A3
loc_3b884:
	// 10528 
cs=0x28f0;eip=0x0043a4; 	X(PUSH(ax));	// 96234 push    ax ;~ 28F0:43A4
cs=0x28f0;eip=0x0043a5; 	R(CALLF(sub_1c5f1,0));	// 96235 call    sub_1C5F1 ;~ 28F0:43A5
loc_3b88a:
	// 10529 
cs=0x28f0;eip=0x0043aa; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96239 push    word ptr [bp+arg_0+2] ;~ 28F0:43AA
cs=0x28f0;eip=0x0043ad; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96240 push    word ptr [bp+arg_0] ;~ 28F0:43AD
cs=0x28f0;eip=0x0043b0; 	R(CALL(sub_3a769,0));	// 96241 call    sub_3A769 ;~ 28F0:43B0
cs=0x28f0;eip=0x0043b3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 96242 mov     [bp+var_2], ax ;~ 28F0:43B3
cs=0x28f0;eip=0x0043b6; 	T(OR(ax, ax));	// 96243 or      ax, ax ;~ 28F0:43B6
cs=0x28f0;eip=0x0043b8; 	R(JNZ(loc_3b89d));	// 96244 jnz     short loc_3B89D ;~ 28F0:43B8
cs=0x28f0;eip=0x0043ba; 	R(JMP(loc_3b92f));	// 96245 jmp     loc_3B92F ;~ 28F0:43BA
loc_3b89d:
	// 10530 
cs=0x28f0;eip=0x0043bd; 	T(CMP(ax, 1));	// 96249 cmp     ax, 1 ;~ 28F0:43BD
cs=0x28f0;eip=0x0043c0; 	R(JNZ(loc_3b8c2));	// 96250 jnz     short loc_3B8C2 ;~ 28F0:43C0
cs=0x28f0;eip=0x0043c2; 	T(MOV(ax, 0x1DB));	// 96251 mov     ax, 1DBh ;~ 28F0:43C2
cs=0x28f0;eip=0x0043c5; 	T(MOV(dx, seg_offset(seg041)));	// 96252 mov     dx, seg seg041 ;~ 28F0:43C5
cs=0x28f0;eip=0x0043c8; 	X(PUSH(dx));	// 96253 push    dx ;~ 28F0:43C8
cs=0x28f0;eip=0x0043c9; 	X(PUSH(ax));	// 96254 push    ax ;~ 28F0:43C9
cs=0x28f0;eip=0x0043ca; 	R(CALLF(sub_1c605,0));	// 96255 call    sub_1C605 ;~ 28F0:43CA
cs=0x28f0;eip=0x0043cf; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 96256 push    word ptr [bp+arg_0+2] ;~ 28F0:43CF
cs=0x28f0;eip=0x0043d2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 96257 push    word ptr [bp+arg_0] ;~ 28F0:43D2
cs=0x28f0;eip=0x0043d5; 	T(MOV(ax, 7));	// 96258 mov     ax, 7 ;~ 28F0:43D5
cs=0x28f0;eip=0x0043d8; 	X(PUSH(ax));	// 96259 push    ax ;~ 28F0:43D8
cs=0x28f0;eip=0x0043d9; 	T(SUB(ax, ax));	// 96260 sub     ax, ax ;~ 28F0:43D9
cs=0x28f0;eip=0x0043db; 	X(PUSH(ax));	// 96261 push    ax ;~ 28F0:43DB
cs=0x28f0;eip=0x0043dc; 	X(PUSH(ax));	// 96262 push    ax ;~ 28F0:43DC
cs=0x28f0;eip=0x0043dd; 	R(CALL(sub_3842f,0));	// 96263 call    sub_3842F ;~ 28F0:43DD
cs=0x28f0;eip=0x0043e0; 	R(JMP(loc_3b92f));	// 96264 jmp     short loc_3B92F ;~ 28F0:43E0
loc_3b8c2:
	// 10531 
cs=0x28f0;eip=0x0043e2; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 2));	// 96268 cmp     [bp+var_2], 2 ;~ 28F0:43E2
cs=0x28f0;eip=0x0043e6; 	R(JNZ(loc_3b8f3));	// 96269 jnz     short loc_3B8F3 ;~ 28F0:43E6
cs=0x28f0;eip=0x0043e8; 	T(MOV(ax, 0x1E1));	// 96270 mov     ax, 1E1h ;~ 28F0:43E8
cs=0x28f0;eip=0x0043eb; 	T(MOV(dx, seg_offset(seg041)));	// 96271 mov     dx, seg seg041 ;~ 28F0:43EB
cs=0x28f0;eip=0x0043ee; 	X(PUSH(dx));	// 96272 push    dx ;~ 28F0:43EE
cs=0x28f0;eip=0x0043ef; 	X(PUSH(ax));	// 96273 push    ax ;~ 28F0:43EF
cs=0x28f0;eip=0x0043f0; 	R(CALLF(sub_1c605,0));	// 96274 call    sub_1C605 ;~ 28F0:43F0
cs=0x28f0;eip=0x0043f5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96275 les     bx, [bp+arg_0] ;~ 28F0:43F5
cs=0x28f0;eip=0x0043f8; 	T(CMP(*(dw*)(raddr(es,bx+0x2EA)), 0));	// 96276 cmp     word ptr es:[bx+2EAh], 0 ;~ 28F0:43F8
cs=0x28f0;eip=0x0043fe; 	R(JZ(loc_3b92f));	// 96277 jz      short loc_3B92F ;~ 28F0:43FE
cs=0x28f0;eip=0x004400; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EA))));	// 96278 mov     ax, es:[bx+2EAh] ;~ 28F0:4400
cs=0x28f0;eip=0x004405; 	X(MOV(*(dw*)(raddr(es,bx+0x2EC)), ax));	// 96279 mov     es:[bx+2ECh], ax ;~ 28F0:4405
cs=0x28f0;eip=0x00440a; 	X(MOV(*(dw*)(raddr(es,bx+0x2EA)), 0));	// 96280 mov     word ptr es:[bx+2EAh], 0 ;~ 28F0:440A
cs=0x28f0;eip=0x004411; 	R(JMP(loc_3b92f));	// 96281 jmp     short loc_3B92F ;~ 28F0:4411
loc_3b8f3:
	// 10532 
cs=0x28f0;eip=0x004413; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 3));	// 96285 cmp     [bp+var_2], 3 ;~ 28F0:4413
cs=0x28f0;eip=0x004417; 	R(JNZ(loc_3b92f));	// 96286 jnz     short loc_3B92F ;~ 28F0:4417
cs=0x28f0;eip=0x004419; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96287 les     bx, [bp+arg_0] ;~ 28F0:4419
cs=0x28f0;eip=0x00441c; 	T(CMP(*(dw*)(raddr(es,bx+0x2E6)), 0x400));	// 96288 cmp     word ptr es:[bx+2E6h], 400h ;~ 28F0:441C
cs=0x28f0;eip=0x004423; 	R(JNZ(loc_3b90d));	// 96289 jnz     short loc_3B90D ;~ 28F0:4423
cs=0x28f0;eip=0x004425; 	T(CMP(*(dw*)(raddr(es,bx+0x2E8)), 0));	// 96290 cmp     word ptr es:[bx+2E8h], 0 ;~ 28F0:4425
cs=0x28f0;eip=0x00442b; 	R(JZ(loc_3b92f));	// 96291 jz      short loc_3B92F ;~ 28F0:442B
loc_3b90d:
	// 10533 
cs=0x28f0;eip=0x00442d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2E6))));	// 96294 mov     ax, es:[bx+2E6h] ;~ 28F0:442D
cs=0x28f0;eip=0x004432; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2E8))));	// 96295 mov     dx, es:[bx+2E8h] ;~ 28F0:4432
cs=0x28f0;eip=0x004437; 	X(MOV(*(dw*)(raddr(es,bx+0x2EE)), ax));	// 96296 mov     es:[bx+2EEh], ax ;~ 28F0:4437
cs=0x28f0;eip=0x00443c; 	X(MOV(*(dw*)(raddr(es,bx+0x2F0)), dx));	// 96297 mov     es:[bx+2F0h], dx ;~ 28F0:443C
cs=0x28f0;eip=0x004441; 	X(MOV(*(dw*)(raddr(es,bx+0x2E6)), 0x400));	// 96298 mov     word ptr es:[bx+2E6h], 400h ;~ 28F0:4441
cs=0x28f0;eip=0x004448; 	X(MOV(*(dw*)(raddr(es,bx+0x2E8)), 0));	// 96299 mov     word ptr es:[bx+2E8h], 0 ;~ 28F0:4448
loc_3b92f:
	// 10534 
cs=0x28f0;eip=0x00444f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96303 les     bx, [bp+arg_0] ;~ 28F0:444F
cs=0x28f0;eip=0x004452; 	T(CMP(*(dw*)(raddr(es,bx+0x2EA)), 0));	// 96304 cmp     word ptr es:[bx+2EAh], 0 ;~ 28F0:4452
cs=0x28f0;eip=0x004458; 	R(JNZ(loc_3b94c));	// 96305 jnz     short loc_3B94C ;~ 28F0:4458
cs=0x28f0;eip=0x00445a; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 2));	// 96306 cmp     [bp+var_2], 2 ;~ 28F0:445A
cs=0x28f0;eip=0x00445e; 	R(JZ(loc_3b94c));	// 96307 jz      short loc_3B94C ;~ 28F0:445E
cs=0x28f0;eip=0x004460; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EC))));	// 96308 mov     ax, es:[bx+2ECh] ;~ 28F0:4460
cs=0x28f0;eip=0x004465; 	X(MOV(*(dw*)(raddr(es,bx+0x2EA)), ax));	// 96309 mov     es:[bx+2EAh], ax ;~ 28F0:4465
cs=0x28f0;eip=0x00446a; 	R(JMP(loc_3b977));	// 96310 jmp     short loc_3B977 ;~ 28F0:446A
loc_3b94c:
	// 10535 
cs=0x28f0;eip=0x00446c; 	T(CMP(*(dw*)(raddr(es,bx+0x2E6)), 0x400));	// 96315 cmp     word ptr es:[bx+2E6h], 400h ;~ 28F0:446C
cs=0x28f0;eip=0x004473; 	R(JNZ(loc_3b977));	// 96316 jnz     short loc_3B977 ;~ 28F0:4473
cs=0x28f0;eip=0x004475; 	T(CMP(*(dw*)(raddr(es,bx+0x2E8)), 0));	// 96317 cmp     word ptr es:[bx+2E8h], 0 ;~ 28F0:4475
cs=0x28f0;eip=0x00447b; 	R(JNZ(loc_3b977));	// 96318 jnz     short loc_3B977 ;~ 28F0:447B
cs=0x28f0;eip=0x00447d; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 3));	// 96319 cmp     [bp+var_2], 3 ;~ 28F0:447D
cs=0x28f0;eip=0x004481; 	R(JZ(loc_3b977));	// 96320 jz      short loc_3B977 ;~ 28F0:4481
cs=0x28f0;eip=0x004483; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2EE))));	// 96321 mov     ax, es:[bx+2EEh] ;~ 28F0:4483
cs=0x28f0;eip=0x004488; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2F0))));	// 96322 mov     dx, es:[bx+2F0h] ;~ 28F0:4488
cs=0x28f0;eip=0x00448d; 	X(MOV(*(dw*)(raddr(es,bx+0x2E6)), ax));	// 96323 mov     es:[bx+2E6h], ax ;~ 28F0:448D
cs=0x28f0;eip=0x004492; 	X(MOV(*(dw*)(raddr(es,bx+0x2E8)), dx));	// 96324 mov     es:[bx+2E8h], dx ;~ 28F0:4492
loc_3b977:
	// 10536 
cs=0x28f0;eip=0x004497; 	T(MOV(sp, bp));	// 96328 mov     sp, bp ;~ 28F0:4497
cs=0x28f0;eip=0x004499; 	X(POP(bp));	// 96329 pop     bp ;~ 28F0:4499
cs=0x28f0;eip=0x00449a; 	R(RETN(4));	// 96330 retn    4 ;~ 28F0:449A
sub_3b97e:
	// 96340 
#undef var_2
#define var_2 -2
	// 96343 var_2           = word ptr -2 ;~ 28F0:449E
#undef arg_0
#define arg_0 4
	// 96344 arg_0           = dword ptr  4 ;~ 28F0:449E
#undef arg_4
#define arg_4 8
	// 96345 arg_4           = dword ptr  8 ;~ 28F0:449E
cs=0x28f0;eip=0x00449e; 	X(PUSH(bp));	// 96347 push    bp ;~ 28F0:449E
cs=0x28f0;eip=0x00449f; 	T(MOV(bp, sp));	// 96348 mov     bp, sp ;~ 28F0:449F
cs=0x28f0;eip=0x0044a1; 	T(SUB(sp, 2));	// 96349 sub     sp, 2 ;~ 28F0:44A1
cs=0x28f0;eip=0x0044a4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 96350 les     bx, [bp+arg_4] ;~ 28F0:44A4
cs=0x28f0;eip=0x0044a7; 	T(CMP(*(dw*)(raddr(es,bx+0x122)), 0));	// 96351 cmp     word ptr es:[bx+122h], 0 ;~ 28F0:44A7
cs=0x28f0;eip=0x0044ad; 	R(JG(loc_3b9e5));	// 96352 jg      short loc_3B9E5 ;~ 28F0:44AD
cs=0x28f0;eip=0x0044af; 	R(JL(loc_3b99a));	// 96353 jl      short loc_3B99A ;~ 28F0:44AF
cs=0x28f0;eip=0x0044b1; 	T(CMP(*(dw*)(raddr(es,bx+0x120)), 0x5A00));	// 96354 cmp     word ptr es:[bx+120h], 5A00h ;~ 28F0:44B1
cs=0x28f0;eip=0x0044b8; 	R(JNC(loc_3b9e5));	// 96355 jnb     short loc_3B9E5 ;~ 28F0:44B8
loc_3b99a:
	// 10537 
cs=0x28f0;eip=0x0044ba; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 96358 mov     ax, es:[bx+120h] ;~ 28F0:44BA
cs=0x28f0;eip=0x0044bf; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 96359 mov     dx, es:[bx+122h] ;~ 28F0:44BF
cs=0x28f0;eip=0x0044c4; 	T(MOV(cl, 5));	// 96360 mov     cl, 5 ;~ 28F0:44C4
cs=0x28f0;eip=0x0044c6; 	R(CALLF(sub_10240,0));	// 96361 call    sub_10240 ;~ 28F0:44C6
cs=0x28f0;eip=0x0044cb; 	X(PUSH(ax));	// 96362 push    ax ;~ 28F0:44CB
cs=0x28f0;eip=0x0044cc; 	R(CALLF(sub_24cf8,0));	// 96363 call    sub_24CF8 ;~ 28F0:44CC
cs=0x28f0;eip=0x0044d1; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 96364 mov     [bp+var_2], ax ;~ 28F0:44D1
cs=0x28f0;eip=0x0044d4; 	X(PUSH(ax));	// 96365 push    ax ;~ 28F0:44D4
cs=0x28f0;eip=0x0044d5; 	R(CALLF(sub_27c9e,0));	// 96366 call    sub_27C9E ;~ 28F0:44D5
cs=0x28f0;eip=0x0044da; 	X(PUSH(dx));	// 96367 push    dx ;~ 28F0:44DA
cs=0x28f0;eip=0x0044db; 	X(PUSH(ax));	// 96368 push    ax ;~ 28F0:44DB
cs=0x28f0;eip=0x0044dc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96369 les     bx, [bp+arg_0] ;~ 28F0:44DC
cs=0x28f0;eip=0x0044df; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 96370 mov     ax, es:[bx] ;~ 28F0:44DF
cs=0x28f0;eip=0x0044e2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 96371 mov     dx, es:[bx+2] ;~ 28F0:44E2
cs=0x28f0;eip=0x0044e6; 	T(MOV(cl, 8));	// 96372 mov     cl, 8 ;~ 28F0:44E6
cs=0x28f0;eip=0x0044e8; 	R(CALLF(sub_10240,0));	// 96373 call    sub_10240 ;~ 28F0:44E8
cs=0x28f0;eip=0x0044ed; 	X(PUSH(dx));	// 96374 push    dx ;~ 28F0:44ED
cs=0x28f0;eip=0x0044ee; 	X(PUSH(ax));	// 96375 push    ax ;~ 28F0:44EE
cs=0x28f0;eip=0x0044ef; 	R(CALLF(sub_105c2,0));	// 96376 call    sub_105C2 ;~ 28F0:44EF
cs=0x28f0;eip=0x0044f4; 	T(MOV(cl, 8));	// 96377 mov     cl, 8 ;~ 28F0:44F4
cs=0x28f0;eip=0x0044f6; 	R(CALLF(sub_10240,0));	// 96378 call    sub_10240 ;~ 28F0:44F6
cs=0x28f0;eip=0x0044fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96379 les     bx, [bp+arg_0] ;~ 28F0:44FB
cs=0x28f0;eip=0x0044fe; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 96380 mov     es:[bx], ax ;~ 28F0:44FE
cs=0x28f0;eip=0x004501; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 96381 mov     es:[bx+2], dx ;~ 28F0:4501
loc_3b9e5:
	// 10538 
cs=0x28f0;eip=0x004505; 	T(MOV(sp, bp));	// 96385 mov     sp, bp ;~ 28F0:4505
cs=0x28f0;eip=0x004507; 	X(POP(bp));	// 96386 pop     bp ;~ 28F0:4507
cs=0x28f0;eip=0x004508; 	R(RETN(8));	// 96387 retn    8 ;~ 28F0:4508
sub_3b9eb:
	// 96395 
#undef var_4
#define var_4 -4
	// 96398 var_4           = word ptr -4 ;~ 28F0:450B
#undef var_2
#define var_2 -2
	// 96399 var_2           = word ptr -2 ;~ 28F0:450B
#undef arg_0
#define arg_0 4
	// 96400 arg_0           = word ptr  4 ;~ 28F0:450B
#undef arg_2
#define arg_2 6
	// 96401 arg_2           = word ptr  6 ;~ 28F0:450B
#undef arg_4
#define arg_4 8
	// 96402 arg_4           = dword ptr  8 ;~ 28F0:450B
cs=0x28f0;eip=0x00450b; 	X(PUSH(bp));	// 96404 push    bp ;~ 28F0:450B
cs=0x28f0;eip=0x00450c; 	T(MOV(bp, sp));	// 96405 mov     bp, sp ;~ 28F0:450C
cs=0x28f0;eip=0x00450e; 	T(SUB(sp, 4));	// 96406 sub     sp, 4 ;~ 28F0:450E
cs=0x28f0;eip=0x004511; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 96407 les     bx, [bp+arg_4] ;~ 28F0:4511
cs=0x28f0;eip=0x004514; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 96408 mov     ax, es:[bx] ;~ 28F0:4514
cs=0x28f0;eip=0x004517; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 96409 mov     dx, es:[bx+2] ;~ 28F0:4517
cs=0x28f0;eip=0x00451b; 	T(SUB(ax, *(dw*)(raddr(es,bx+4))));	// 96410 sub     ax, es:[bx+4] ;~ 28F0:451B
cs=0x28f0;eip=0x00451f; 	T(SBB(dx, *(dw*)(raddr(es,bx+6))));	// 96411 sbb     dx, es:[bx+6] ;~ 28F0:451F
cs=0x28f0;eip=0x004523; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96412 mov     [bp+var_4], ax ;~ 28F0:4523
cs=0x28f0;eip=0x004526; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96413 mov     [bp+var_2], dx ;~ 28F0:4526
cs=0x28f0;eip=0x004529; 	T(MOV(ax, 0x100));	// 96414 mov     ax, 100h ;~ 28F0:4529
cs=0x28f0;eip=0x00452c; 	T(CWD);	// 96415 cwd ;~ 28F0:452C
cs=0x28f0;eip=0x00452d; 	X(PUSH(dx));	// 96416 push    dx ;~ 28F0:452D
cs=0x28f0;eip=0x00452e; 	X(PUSH(ax));	// 96417 push    ax ;~ 28F0:452E
cs=0x28f0;eip=0x00452f; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 96418 mov     ax, word ptr unk_57111 ;~ 28F0:452F
cs=0x28f0;eip=0x004532; 	T(CWD);	// 96419 cwd ;~ 28F0:4532
cs=0x28f0;eip=0x004533; 	X(PUSH(dx));	// 96420 push    dx ;~ 28F0:4533
cs=0x28f0;eip=0x004534; 	X(PUSH(ax));	// 96421 push    ax ;~ 28F0:4534
cs=0x28f0;eip=0x004535; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 96422 push    [bp+arg_2] ;~ 28F0:4535
cs=0x28f0;eip=0x004538; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 96423 push    [bp+arg_0] ;~ 28F0:4538
cs=0x28f0;eip=0x00453b; 	R(CALLF(sub_105c2,0));	// 96424 call    sub_105C2 ;~ 28F0:453B
cs=0x28f0;eip=0x004540; 	X(PUSH(dx));	// 96425 push    dx ;~ 28F0:4540
cs=0x28f0;eip=0x004541; 	X(PUSH(ax));	// 96426 push    ax ;~ 28F0:4541
cs=0x28f0;eip=0x004542; 	R(CALLF(sub_10526,0));	// 96427 call    sub_10526 ;~ 28F0:4542
cs=0x28f0;eip=0x004547; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 96428 mov     [bp+arg_0], ax ;~ 28F0:4547
cs=0x28f0;eip=0x00454a; 	X(MOV(*(dw*)(raddr(ss,bp+arg_2)), dx));	// 96429 mov     [bp+arg_2], dx ;~ 28F0:454A
cs=0x28f0;eip=0x00454d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 96430 mov     ax, [bp+var_4] ;~ 28F0:454D
cs=0x28f0;eip=0x004550; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 96431 mov     dx, [bp+var_2] ;~ 28F0:4550
cs=0x28f0;eip=0x004553; 	T(OR(dx, dx));	// 96432 or      dx, dx ;~ 28F0:4553
cs=0x28f0;eip=0x004555; 	R(JGE(loc_3ba3e));	// 96433 jge     short loc_3BA3E ;~ 28F0:4555
cs=0x28f0;eip=0x004557; 	T(NEG(ax));	// 96434 neg     ax ;~ 28F0:4557
cs=0x28f0;eip=0x004559; 	T(ADC(dx, 0));	// 96435 adc     dx, 0 ;~ 28F0:4559
cs=0x28f0;eip=0x00455c; 	T(NEG(dx));	// 96436 neg     dx ;~ 28F0:455C
loc_3ba3e:
	// 10539 
cs=0x28f0;eip=0x00455e; 	T(CMP(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96439 cmp     dx, [bp+arg_2] ;~ 28F0:455E
cs=0x28f0;eip=0x004561; 	R(JG(loc_3ba5e));	// 96440 jg      short loc_3BA5E ;~ 28F0:4561
cs=0x28f0;eip=0x004563; 	R(JL(loc_3ba4a));	// 96441 jl      short loc_3BA4A ;~ 28F0:4563
cs=0x28f0;eip=0x004565; 	T(CMP(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96442 cmp     ax, [bp+arg_0] ;~ 28F0:4565
cs=0x28f0;eip=0x004568; 	R(JA(loc_3ba5e));	// 96443 ja      short loc_3BA5E ;~ 28F0:4568
loc_3ba4a:
	// 10540 
cs=0x28f0;eip=0x00456a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 96446 les     bx, [bp+arg_4] ;~ 28F0:456A
cs=0x28f0;eip=0x00456d; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 96447 mov     ax, es:[bx+4] ;~ 28F0:456D
cs=0x28f0;eip=0x004571; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 96448 mov     dx, es:[bx+6] ;~ 28F0:4571
cs=0x28f0;eip=0x004575; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 96449 mov     es:[bx], ax ;~ 28F0:4575
cs=0x28f0;eip=0x004578; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 96450 mov     es:[bx+2], dx ;~ 28F0:4578
cs=0x28f0;eip=0x00457c; 	R(JMP(loc_3ba86));	// 96451 jmp     short loc_3BA86 ;~ 28F0:457C
loc_3ba5e:
	// 10541 
cs=0x28f0;eip=0x00457e; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0));	// 96456 cmp     [bp+var_2], 0 ;~ 28F0:457E
cs=0x28f0;eip=0x004582; 	R(JGE(loc_3ba76));	// 96457 jge     short loc_3BA76 ;~ 28F0:4582
cs=0x28f0;eip=0x004584; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 96458 les     bx, [bp+arg_4] ;~ 28F0:4584
cs=0x28f0;eip=0x004587; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96459 mov     ax, [bp+arg_0] ;~ 28F0:4587
cs=0x28f0;eip=0x00458a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96460 mov     dx, [bp+arg_2] ;~ 28F0:458A
cs=0x28f0;eip=0x00458d; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 96461 add     es:[bx], ax ;~ 28F0:458D
cs=0x28f0;eip=0x004590; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 96462 adc     es:[bx+2], dx ;~ 28F0:4590
cs=0x28f0;eip=0x004594; 	R(JMP(loc_3ba86));	// 96463 jmp     short loc_3BA86 ;~ 28F0:4594
loc_3ba76:
	// 10542 
cs=0x28f0;eip=0x004596; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 96467 les     bx, [bp+arg_4] ;~ 28F0:4596
cs=0x28f0;eip=0x004599; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96468 mov     ax, [bp+arg_0] ;~ 28F0:4599
cs=0x28f0;eip=0x00459c; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96469 mov     dx, [bp+arg_2] ;~ 28F0:459C
cs=0x28f0;eip=0x00459f; 	X(SUB(*(dw*)(raddr(es,bx)), ax));	// 96470 sub     es:[bx], ax ;~ 28F0:459F
cs=0x28f0;eip=0x0045a2; 	X(SBB(*(dw*)(raddr(es,bx+2)), dx));	// 96471 sbb     es:[bx+2], dx ;~ 28F0:45A2
loc_3ba86:
	// 10543 
cs=0x28f0;eip=0x0045a6; 	T(MOV(sp, bp));	// 96475 mov     sp, bp ;~ 28F0:45A6
cs=0x28f0;eip=0x0045a8; 	X(POP(bp));	// 96476 pop     bp ;~ 28F0:45A8
cs=0x28f0;eip=0x0045a9; 	R(RETN(8));	// 96477 retn    8 ;~ 28F0:45A9
sub_3ba8c:
	// 96485 
#undef var_4
#define var_4 -4
	// 96488 var_4           = word ptr -4 ;~ 28F0:45AC
#undef var_2
#define var_2 -2
	// 96489 var_2           = word ptr -2 ;~ 28F0:45AC
#undef arg_0
#define arg_0 4
	// 96490 arg_0           = word ptr  4 ;~ 28F0:45AC
#undef arg_2
#define arg_2 6
	// 96491 arg_2           = word ptr  6 ;~ 28F0:45AC
#undef arg_4
#define arg_4 8
	// 96492 arg_4           = word ptr  8 ;~ 28F0:45AC
#undef arg_6
#define arg_6 0x0A
	// 96493 arg_6           = word ptr  0Ah ;~ 28F0:45AC
#undef arg_8
#define arg_8 0x0C
	// 96494 arg_8           = dword ptr  0Ch ;~ 28F0:45AC
cs=0x28f0;eip=0x0045ac; 	X(PUSH(bp));	// 96496 push    bp ;~ 28F0:45AC
cs=0x28f0;eip=0x0045ad; 	T(MOV(bp, sp));	// 96497 mov     bp, sp ;~ 28F0:45AD
cs=0x28f0;eip=0x0045af; 	T(SUB(sp, 4));	// 96498 sub     sp, 4 ;~ 28F0:45AF
cs=0x28f0;eip=0x0045b2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 96499 les     bx, [bp+arg_8] ;~ 28F0:45B2
cs=0x28f0;eip=0x0045b5; 	T(MOV(ax, *(dw*)(raddr(es,bx+4))));	// 96500 mov     ax, es:[bx+4] ;~ 28F0:45B5
cs=0x28f0;eip=0x0045b9; 	T(MOV(dx, *(dw*)(raddr(es,bx+6))));	// 96501 mov     dx, es:[bx+6] ;~ 28F0:45B9
cs=0x28f0;eip=0x0045bd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96502 mov     [bp+var_4], ax ;~ 28F0:45BD
cs=0x28f0;eip=0x0045c0; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96503 mov     [bp+var_2], dx ;~ 28F0:45C0
cs=0x28f0;eip=0x0045c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 96504 mov     ax, [bp+arg_4] ;~ 28F0:45C3
cs=0x28f0;eip=0x0045c6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 96505 mov     dx, [bp+arg_6] ;~ 28F0:45C6
cs=0x28f0;eip=0x0045c9; 	T(CMP(*(dw*)(raddr(es,bx+2)), dx));	// 96506 cmp     es:[bx+2], dx ;~ 28F0:45C9
cs=0x28f0;eip=0x0045cd; 	R(JL(loc_3babe));	// 96507 jl      short loc_3BABE ;~ 28F0:45CD
cs=0x28f0;eip=0x0045cf; 	R(JG(loc_3bab6));	// 96508 jg      short loc_3BAB6 ;~ 28F0:45CF
cs=0x28f0;eip=0x0045d1; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 96509 cmp     es:[bx], ax ;~ 28F0:45D1
cs=0x28f0;eip=0x0045d4; 	R(JBE(loc_3babe));	// 96510 jbe     short loc_3BABE ;~ 28F0:45D4
loc_3bab6:
	// 10544 
cs=0x28f0;eip=0x0045d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 96513 mov     ax, [bp+arg_4] ;~ 28F0:45D6
cs=0x28f0;eip=0x0045d9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 96514 mov     dx, [bp+arg_6] ;~ 28F0:45D9
cs=0x28f0;eip=0x0045dc; 	R(JMP(loc_3bad7));	// 96515 jmp     short loc_3BAD7 ;~ 28F0:45DC
loc_3babe:
	// 10545 
cs=0x28f0;eip=0x0045de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96520 mov     ax, [bp+arg_0] ;~ 28F0:45DE
cs=0x28f0;eip=0x0045e1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96521 mov     dx, [bp+arg_2] ;~ 28F0:45E1
cs=0x28f0;eip=0x0045e4; 	T(CMP(*(dw*)(raddr(es,bx+2)), dx));	// 96522 cmp     es:[bx+2], dx ;~ 28F0:45E4
cs=0x28f0;eip=0x0045e8; 	R(JG(loc_3baec));	// 96523 jg      short loc_3BAEC ;~ 28F0:45E8
cs=0x28f0;eip=0x0045ea; 	R(JL(loc_3bad1));	// 96524 jl      short loc_3BAD1 ;~ 28F0:45EA
cs=0x28f0;eip=0x0045ec; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 96525 cmp     es:[bx], ax ;~ 28F0:45EC
cs=0x28f0;eip=0x0045ef; 	R(JNC(loc_3baec));	// 96526 jnb     short loc_3BAEC ;~ 28F0:45EF
loc_3bad1:
	// 10546 
cs=0x28f0;eip=0x0045f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96529 mov     ax, [bp+arg_0] ;~ 28F0:45F1
cs=0x28f0;eip=0x0045f4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96530 mov     dx, [bp+arg_2] ;~ 28F0:45F4
loc_3bad7:
	// 10547 
cs=0x28f0;eip=0x0045f7; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 96533 mov     es:[bx+4], ax ;~ 28F0:45F7
cs=0x28f0;eip=0x0045fb; 	X(MOV(*(dw*)(raddr(es,bx+6)), dx));	// 96534 mov     es:[bx+6], dx ;~ 28F0:45FB
cs=0x28f0;eip=0x0045ff; 	X(PUSH(es));	// 96535 push    es ;~ 28F0:45FF
cs=0x28f0;eip=0x004600; 	X(PUSH(bx));	// 96536 push    bx ;~ 28F0:4600
cs=0x28f0;eip=0x004601; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 96537 push    word ptr es:[bx+12h] ;~ 28F0:4601
cs=0x28f0;eip=0x004605; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 96538 push    word ptr es:[bx+10h] ;~ 28F0:4605
cs=0x28f0;eip=0x004609; 	R(CALL(sub_3b9eb,0));	// 96539 call    sub_3B9EB ;~ 28F0:4609
loc_3baec:
	// 10548 
cs=0x28f0;eip=0x00460c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 96543 les     bx, [bp+arg_8] ;~ 28F0:460C
cs=0x28f0;eip=0x00460f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 96544 mov     ax, [bp+var_4] ;~ 28F0:460F
cs=0x28f0;eip=0x004612; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 96545 mov     dx, [bp+var_2] ;~ 28F0:4612
cs=0x28f0;eip=0x004615; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 96546 mov     es:[bx+4], ax ;~ 28F0:4615
cs=0x28f0;eip=0x004619; 	X(MOV(*(dw*)(raddr(es,bx+6)), dx));	// 96547 mov     es:[bx+6], dx ;~ 28F0:4619
cs=0x28f0;eip=0x00461d; 	T(MOV(sp, bp));	// 96548 mov     sp, bp ;~ 28F0:461D
cs=0x28f0;eip=0x00461f; 	X(POP(bp));	// 96549 pop     bp ;~ 28F0:461F
cs=0x28f0;eip=0x004620; 	R(RETN(0x0C));	// 96550 retn    0Ch ;~ 28F0:4620
sub_3bb03:
	// 96558 
#undef arg_0
#define arg_0 4
	// 96561 arg_0           = dword ptr  4 ;~ 28F0:4623
cs=0x28f0;eip=0x004623; 	X(PUSH(bp));	// 96563 push    bp ;~ 28F0:4623
cs=0x28f0;eip=0x004624; 	T(MOV(bp, sp));	// 96564 mov     bp, sp ;~ 28F0:4624
cs=0x28f0;eip=0x004626; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 96565 les     bx, [bp+arg_0] ;~ 28F0:4626
cs=0x28f0;eip=0x004629; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 96566 mov     ax, es:[bx] ;~ 28F0:4629
cs=0x28f0;eip=0x00462c; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 96567 mov     dx, es:[bx+2] ;~ 28F0:462C
cs=0x28f0;eip=0x004630; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), dx));	// 96568 cmp     es:[bx+0Ah], dx ;~ 28F0:4630
cs=0x28f0;eip=0x004634; 	R(JG(loc_3bb28));	// 96569 jg      short loc_3BB28 ;~ 28F0:4634
cs=0x28f0;eip=0x004636; 	R(JL(loc_3bb1e));	// 96570 jl      short loc_3BB1E ;~ 28F0:4636
cs=0x28f0;eip=0x004638; 	T(CMP(*(dw*)(raddr(es,bx+8)), ax));	// 96571 cmp     es:[bx+8], ax ;~ 28F0:4638
cs=0x28f0;eip=0x00463c; 	R(JNC(loc_3bb28));	// 96572 jnb     short loc_3BB28 ;~ 28F0:463C
loc_3bb1e:
	// 10549 
cs=0x28f0;eip=0x00463e; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 96575 mov     ax, es:[bx+8] ;~ 28F0:463E
cs=0x28f0;eip=0x004642; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 96576 mov     dx, es:[bx+0Ah] ;~ 28F0:4642
cs=0x28f0;eip=0x004646; 	R(JMP(loc_3bb45));	// 96577 jmp     short loc_3BB45 ;~ 28F0:4646
loc_3bb28:
	// 10550 
cs=0x28f0;eip=0x004648; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 96582 mov     ax, es:[bx] ;~ 28F0:4648
cs=0x28f0;eip=0x00464b; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 96583 mov     dx, es:[bx+2] ;~ 28F0:464B
cs=0x28f0;eip=0x00464f; 	T(CMP(*(dw*)(raddr(es,bx+0x0E)), dx));	// 96584 cmp     es:[bx+0Eh], dx ;~ 28F0:464F
cs=0x28f0;eip=0x004653; 	R(JL(loc_3bb4c));	// 96585 jl      short loc_3BB4C ;~ 28F0:4653
cs=0x28f0;eip=0x004655; 	R(JG(loc_3bb3d));	// 96586 jg      short loc_3BB3D ;~ 28F0:4655
cs=0x28f0;eip=0x004657; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), ax));	// 96587 cmp     es:[bx+0Ch], ax ;~ 28F0:4657
cs=0x28f0;eip=0x00465b; 	R(JBE(loc_3bb4c));	// 96588 jbe     short loc_3BB4C ;~ 28F0:465B
loc_3bb3d:
	// 10551 
cs=0x28f0;eip=0x00465d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 96591 mov     ax, es:[bx+0Ch] ;~ 28F0:465D
cs=0x28f0;eip=0x004661; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 96592 mov     dx, es:[bx+0Eh] ;~ 28F0:4661
loc_3bb45:
	// 10552 
cs=0x28f0;eip=0x004665; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 96595 mov     es:[bx], ax ;~ 28F0:4665
cs=0x28f0;eip=0x004668; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 96596 mov     es:[bx+2], dx ;~ 28F0:4668
loc_3bb4c:
	// 10553 
cs=0x28f0;eip=0x00466c; 	X(POP(bp));	// 96600 pop     bp ;~ 28F0:466C
cs=0x28f0;eip=0x00466d; 	R(RETN(4));	// 96601 retn    4 ;~ 28F0:466D
sub_3bb9d:
	// 96649 
#undef arg_0
#define arg_0 4
	// 96651 arg_0           = word ptr  4 ;~ 28F0:46BD
#undef arg_2
#define arg_2 6
	// 96652 arg_2           = word ptr  6 ;~ 28F0:46BD
#undef arg_4
#define arg_4 8
	// 96653 arg_4           = word ptr  8 ;~ 28F0:46BD
#undef arg_6
#define arg_6 0x0A
	// 96654 arg_6           = word ptr  0Ah ;~ 28F0:46BD
#undef arg_8
#define arg_8 0x0C
	// 96655 arg_8           = dword ptr  0Ch ;~ 28F0:46BD
cs=0x28f0;eip=0x0046bd; 	X(PUSH(bp));	// 96657 push    bp ;~ 28F0:46BD
cs=0x28f0;eip=0x0046be; 	T(MOV(bp, sp));	// 96658 mov     bp, sp ;~ 28F0:46BE
cs=0x28f0;eip=0x0046c0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 96659 les     bx, [bp+arg_8] ;~ 28F0:46C0
cs=0x28f0;eip=0x0046c3; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 96660 mov     ax, [bp+arg_4] ;~ 28F0:46C3
cs=0x28f0;eip=0x0046c6; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 96661 mov     dx, [bp+arg_6] ;~ 28F0:46C6
cs=0x28f0;eip=0x0046c9; 	T(CMP(*(dw*)(raddr(es,bx+2)), dx));	// 96662 cmp     es:[bx+2], dx ;~ 28F0:46C9
cs=0x28f0;eip=0x0046cd; 	R(JL(loc_3bbbe));	// 96663 jl      short loc_3BBBE ;~ 28F0:46CD
cs=0x28f0;eip=0x0046cf; 	R(JG(loc_3bbb6));	// 96664 jg      short loc_3BBB6 ;~ 28F0:46CF
cs=0x28f0;eip=0x0046d1; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 96665 cmp     es:[bx], ax ;~ 28F0:46D1
cs=0x28f0;eip=0x0046d4; 	R(JBE(loc_3bbbe));	// 96666 jbe     short loc_3BBBE ;~ 28F0:46D4
loc_3bbb6:
	// 10559 
cs=0x28f0;eip=0x0046d6; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 96669 mov     ax, [bp+arg_4] ;~ 28F0:46D6
cs=0x28f0;eip=0x0046d9; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 96670 mov     dx, [bp+arg_6] ;~ 28F0:46D9
cs=0x28f0;eip=0x0046dc; 	R(JMP(loc_3bbd7));	// 96671 jmp     short loc_3BBD7 ;~ 28F0:46DC
loc_3bbbe:
	// 10560 
cs=0x28f0;eip=0x0046de; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96676 mov     ax, [bp+arg_0] ;~ 28F0:46DE
cs=0x28f0;eip=0x0046e1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96677 mov     dx, [bp+arg_2] ;~ 28F0:46E1
cs=0x28f0;eip=0x0046e4; 	T(CMP(*(dw*)(raddr(es,bx+2)), dx));	// 96678 cmp     es:[bx+2], dx ;~ 28F0:46E4
cs=0x28f0;eip=0x0046e8; 	R(JG(loc_3bbde));	// 96679 jg      short loc_3BBDE ;~ 28F0:46E8
cs=0x28f0;eip=0x0046ea; 	R(JL(loc_3bbd1));	// 96680 jl      short loc_3BBD1 ;~ 28F0:46EA
cs=0x28f0;eip=0x0046ec; 	T(CMP(*(dw*)(raddr(es,bx)), ax));	// 96681 cmp     es:[bx], ax ;~ 28F0:46EC
cs=0x28f0;eip=0x0046ef; 	R(JNC(loc_3bbde));	// 96682 jnb     short loc_3BBDE ;~ 28F0:46EF
loc_3bbd1:
	// 10561 
cs=0x28f0;eip=0x0046f1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96685 mov     ax, [bp+arg_0] ;~ 28F0:46F1
cs=0x28f0;eip=0x0046f4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96686 mov     dx, [bp+arg_2] ;~ 28F0:46F4
loc_3bbd7:
	// 10562 
cs=0x28f0;eip=0x0046f7; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 96689 mov     es:[bx], ax ;~ 28F0:46F7
cs=0x28f0;eip=0x0046fa; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 96690 mov     es:[bx+2], dx ;~ 28F0:46FA
loc_3bbde:
	// 10563 
cs=0x28f0;eip=0x0046fe; 	X(POP(bp));	// 96694 pop     bp ;~ 28F0:46FE
cs=0x28f0;eip=0x0046ff; 	R(RETN(0x0C));	// 96695 retn    0Ch ;~ 28F0:46FF
sub_3bbe2:
	// 96703 
#undef arg_0
#define arg_0 4
	// 96706 arg_0           = word ptr  4 ;~ 28F0:4702
#undef arg_2
#define arg_2 6
	// 96707 arg_2           = word ptr  6 ;~ 28F0:4702
#undef arg_4
#define arg_4 8
	// 96708 arg_4           = word ptr  8 ;~ 28F0:4702
#undef arg_6
#define arg_6 0x0A
	// 96709 arg_6           = word ptr  0Ah ;~ 28F0:4702
#undef arg_8
#define arg_8 0x0C
	// 96710 arg_8           = dword ptr  0Ch ;~ 28F0:4702
cs=0x28f0;eip=0x004702; 	X(PUSH(bp));	// 96712 push    bp ;~ 28F0:4702
cs=0x28f0;eip=0x004703; 	T(MOV(bp, sp));	// 96713 mov     bp, sp ;~ 28F0:4703
cs=0x28f0;eip=0x004705; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 96714 les     bx, [bp+arg_8] ;~ 28F0:4705
cs=0x28f0;eip=0x004708; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 96715 mov     ax, [bp+arg_4] ;~ 28F0:4708
cs=0x28f0;eip=0x00470b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 96716 mov     dx, [bp+arg_6] ;~ 28F0:470B
cs=0x28f0;eip=0x00470e; 	T(CMP(*(dw*)(raddr(es,bx+6)), dx));	// 96717 cmp     es:[bx+6], dx ;~ 28F0:470E
cs=0x28f0;eip=0x004712; 	R(JL(loc_3bc04));	// 96718 jl      short loc_3BC04 ;~ 28F0:4712
cs=0x28f0;eip=0x004714; 	R(JG(loc_3bbfc));	// 96719 jg      short loc_3BBFC ;~ 28F0:4714
cs=0x28f0;eip=0x004716; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 96720 cmp     es:[bx+4], ax ;~ 28F0:4716
cs=0x28f0;eip=0x00471a; 	R(JBE(loc_3bc04));	// 96721 jbe     short loc_3BC04 ;~ 28F0:471A
loc_3bbfc:
	// 10564 
cs=0x28f0;eip=0x00471c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_4))));	// 96724 mov     ax, [bp+arg_4] ;~ 28F0:471C
cs=0x28f0;eip=0x00471f; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_6))));	// 96725 mov     dx, [bp+arg_6] ;~ 28F0:471F
cs=0x28f0;eip=0x004722; 	R(JMP(loc_3bc1e));	// 96726 jmp     short loc_3BC1E ;~ 28F0:4722
loc_3bc04:
	// 10565 
cs=0x28f0;eip=0x004724; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96731 mov     ax, [bp+arg_0] ;~ 28F0:4724
cs=0x28f0;eip=0x004727; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96732 mov     dx, [bp+arg_2] ;~ 28F0:4727
cs=0x28f0;eip=0x00472a; 	T(CMP(*(dw*)(raddr(es,bx+6)), dx));	// 96733 cmp     es:[bx+6], dx ;~ 28F0:472A
cs=0x28f0;eip=0x00472e; 	R(JG(loc_3bc26));	// 96734 jg      short loc_3BC26 ;~ 28F0:472E
cs=0x28f0;eip=0x004730; 	R(JL(loc_3bc18));	// 96735 jl      short loc_3BC18 ;~ 28F0:4730
cs=0x28f0;eip=0x004732; 	T(CMP(*(dw*)(raddr(es,bx+4)), ax));	// 96736 cmp     es:[bx+4], ax ;~ 28F0:4732
cs=0x28f0;eip=0x004736; 	R(JNC(loc_3bc26));	// 96737 jnb     short loc_3BC26 ;~ 28F0:4736
loc_3bc18:
	// 10566 
cs=0x28f0;eip=0x004738; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96740 mov     ax, [bp+arg_0] ;~ 28F0:4738
cs=0x28f0;eip=0x00473b; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 96741 mov     dx, [bp+arg_2] ;~ 28F0:473B
loc_3bc1e:
	// 10567 
cs=0x28f0;eip=0x00473e; 	X(MOV(*(dw*)(raddr(es,bx+4)), ax));	// 96744 mov     es:[bx+4], ax ;~ 28F0:473E
cs=0x28f0;eip=0x004742; 	X(MOV(*(dw*)(raddr(es,bx+6)), dx));	// 96745 mov     es:[bx+6], dx ;~ 28F0:4742
loc_3bc26:
	// 10568 
cs=0x28f0;eip=0x004746; 	X(POP(bp));	// 96749 pop     bp ;~ 28F0:4746
cs=0x28f0;eip=0x004747; 	R(RETN(0x0C));	// 96750 retn    0Ch ;~ 28F0:4747
sub_3bc2a:
	// 96758 
#undef var_4
#define var_4 -4
	// 96760 var_4           = word ptr -4 ;~ 28F0:474A
#undef var_2
#define var_2 -2
	// 96761 var_2           = word ptr -2 ;~ 28F0:474A
#undef arg_0
#define arg_0 4
	// 96762 arg_0           = word ptr  4 ;~ 28F0:474A
#undef arg_2
#define arg_2 6
	// 96763 arg_2           = dword ptr  6 ;~ 28F0:474A
cs=0x28f0;eip=0x00474a; 	X(PUSH(bp));	// 96765 push    bp ;~ 28F0:474A
cs=0x28f0;eip=0x00474b; 	T(MOV(bp, sp));	// 96766 mov     bp, sp ;~ 28F0:474B
cs=0x28f0;eip=0x00474d; 	T(SUB(sp, 4));	// 96767 sub     sp, 4 ;~ 28F0:474D
cs=0x28f0;eip=0x004750; 	T(SUB(ax, ax));	// 96768 sub     ax, ax ;~ 28F0:4750
cs=0x28f0;eip=0x004752; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 96769 mov     [bp+var_2], ax ;~ 28F0:4752
cs=0x28f0;eip=0x004755; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96770 mov     [bp+var_4], ax ;~ 28F0:4755
cs=0x28f0;eip=0x004758; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 96771 cmp     [bp+arg_0], ax ;~ 28F0:4758
cs=0x28f0;eip=0x00475b; 	R(JLE(loc_3bc8c));	// 96772 jle     short loc_3BC8C ;~ 28F0:475B
cs=0x28f0;eip=0x00475d; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 96773 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:475D
cs=0x28f0;eip=0x004761; 	R(JL(loc_3bc50));	// 96774 jl      short loc_3BC50 ;~ 28F0:4761
cs=0x28f0;eip=0x004763; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96775 les     bx, [bp+arg_2] ;~ 28F0:4763
cs=0x28f0;eip=0x004766; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 96776 mov     ax, es:[bx+8] ;~ 28F0:4766
cs=0x28f0;eip=0x00476a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 96777 mov     dx, es:[bx+0Ah] ;~ 28F0:476A
cs=0x28f0;eip=0x00476e; 	R(JMP(loc_3bc73));	// 96778 jmp     short loc_3BC73 ;~ 28F0:476E
loc_3bc50:
	// 10569 
cs=0x28f0;eip=0x004770; 	T(MOV(ax, 0x64));	// 96782 mov     ax, 64h ; 'd' ;~ 28F0:4770
cs=0x28f0;eip=0x004773; 	T(CWD);	// 96783 cwd ;~ 28F0:4773
cs=0x28f0;eip=0x004774; 	X(PUSH(dx));	// 96784 push    dx ;~ 28F0:4774
cs=0x28f0;eip=0x004775; 	X(PUSH(ax));	// 96785 push    ax ;~ 28F0:4775
cs=0x28f0;eip=0x004776; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96786 mov     ax, [bp+arg_0] ;~ 28F0:4776
cs=0x28f0;eip=0x004779; 	T(CWD);	// 96787 cwd ;~ 28F0:4779
cs=0x28f0;eip=0x00477a; 	X(PUSH(dx));	// 96788 push    dx ;~ 28F0:477A
cs=0x28f0;eip=0x00477b; 	X(PUSH(ax));	// 96789 push    ax ;~ 28F0:477B
cs=0x28f0;eip=0x00477c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96790 les     bx, [bp+arg_2] ;~ 28F0:477C
cs=0x28f0;eip=0x00477f; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 96791 push    word ptr es:[bx+0Ah] ;~ 28F0:477F
cs=0x28f0;eip=0x004783; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 96792 push    word ptr es:[bx+8] ;~ 28F0:4783
cs=0x28f0;eip=0x004787; 	R(CALLF(sub_105c2,0));	// 96793 call    sub_105C2 ;~ 28F0:4787
cs=0x28f0;eip=0x00478c; 	X(PUSH(dx));	// 96794 push    dx ;~ 28F0:478C
cs=0x28f0;eip=0x00478d; 	X(PUSH(ax));	// 96795 push    ax ;~ 28F0:478D
cs=0x28f0;eip=0x00478e; 	R(CALLF(sub_10526,0));	// 96796 call    sub_10526 ;~ 28F0:478E
loc_3bc73:
	// 10570 
cs=0x28f0;eip=0x004793; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96799 mov     [bp+var_4], ax ;~ 28F0:4793
cs=0x28f0;eip=0x004796; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96800 mov     [bp+var_2], dx ;~ 28F0:4796
cs=0x28f0;eip=0x004799; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 96801 push    word ptr [bp+arg_2+2] ;~ 28F0:4799
cs=0x28f0;eip=0x00479c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 96802 push    word ptr [bp+arg_2] ;~ 28F0:479C
cs=0x28f0;eip=0x00479f; 	X(PUSH(dx));	// 96803 push    dx ;~ 28F0:479F
cs=0x28f0;eip=0x0047a0; 	X(PUSH(ax));	// 96804 push    ax ;~ 28F0:47A0
cs=0x28f0;eip=0x0047a1; 	T(NEG(ax));	// 96805 neg     ax ;~ 28F0:47A1
cs=0x28f0;eip=0x0047a3; 	T(ADC(dx, 0));	// 96806 adc     dx, 0 ;~ 28F0:47A3
cs=0x28f0;eip=0x0047a6; 	T(NEG(dx));	// 96807 neg     dx ;~ 28F0:47A6
cs=0x28f0;eip=0x0047a8; 	X(PUSH(dx));	// 96808 push    dx ;~ 28F0:47A8
cs=0x28f0;eip=0x0047a9; 	X(PUSH(ax));	// 96809 push    ax ;~ 28F0:47A9
cs=0x28f0;eip=0x0047aa; 	R(JMP(loc_3bcdd));	// 96810 jmp     short loc_3BCDD ;~ 28F0:47AA
loc_3bc8c:
	// 10571 
cs=0x28f0;eip=0x0047ac; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 96814 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:47AC
cs=0x28f0;eip=0x0047b0; 	R(JG(loc_3bc9f));	// 96815 jg      short loc_3BC9F ;~ 28F0:47B0
cs=0x28f0;eip=0x0047b2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96816 les     bx, [bp+arg_2] ;~ 28F0:47B2
cs=0x28f0;eip=0x0047b5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 96817 mov     ax, es:[bx+0Ch] ;~ 28F0:47B5
cs=0x28f0;eip=0x0047b9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 96818 mov     dx, es:[bx+0Eh] ;~ 28F0:47B9
cs=0x28f0;eip=0x0047bd; 	R(JMP(loc_3bcc2));	// 96819 jmp     short loc_3BCC2 ;~ 28F0:47BD
loc_3bc9f:
	// 10572 
cs=0x28f0;eip=0x0047bf; 	T(MOV(ax, 0x0FF9C));	// 96823 mov     ax, 0FF9Ch ;~ 28F0:47BF
cs=0x28f0;eip=0x0047c2; 	T(CWD);	// 96824 cwd ;~ 28F0:47C2
cs=0x28f0;eip=0x0047c3; 	X(PUSH(dx));	// 96825 push    dx ;~ 28F0:47C3
cs=0x28f0;eip=0x0047c4; 	X(PUSH(ax));	// 96826 push    ax ;~ 28F0:47C4
cs=0x28f0;eip=0x0047c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96827 mov     ax, [bp+arg_0] ;~ 28F0:47C5
cs=0x28f0;eip=0x0047c8; 	T(CWD);	// 96828 cwd ;~ 28F0:47C8
cs=0x28f0;eip=0x0047c9; 	X(PUSH(dx));	// 96829 push    dx ;~ 28F0:47C9
cs=0x28f0;eip=0x0047ca; 	X(PUSH(ax));	// 96830 push    ax ;~ 28F0:47CA
cs=0x28f0;eip=0x0047cb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96831 les     bx, [bp+arg_2] ;~ 28F0:47CB
cs=0x28f0;eip=0x0047ce; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 96832 push    word ptr es:[bx+0Eh] ;~ 28F0:47CE
cs=0x28f0;eip=0x0047d2; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 96833 push    word ptr es:[bx+0Ch] ;~ 28F0:47D2
cs=0x28f0;eip=0x0047d6; 	R(CALLF(sub_105c2,0));	// 96834 call    sub_105C2 ;~ 28F0:47D6
cs=0x28f0;eip=0x0047db; 	X(PUSH(dx));	// 96835 push    dx ;~ 28F0:47DB
cs=0x28f0;eip=0x0047dc; 	X(PUSH(ax));	// 96836 push    ax ;~ 28F0:47DC
cs=0x28f0;eip=0x0047dd; 	R(CALLF(sub_10526,0));	// 96837 call    sub_10526 ;~ 28F0:47DD
loc_3bcc2:
	// 10573 
cs=0x28f0;eip=0x0047e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96840 mov     [bp+var_4], ax ;~ 28F0:47E2
cs=0x28f0;eip=0x0047e5; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96841 mov     [bp+var_2], dx ;~ 28F0:47E5
cs=0x28f0;eip=0x0047e8; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 96842 push    word ptr [bp+arg_2+2] ;~ 28F0:47E8
cs=0x28f0;eip=0x0047eb; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 96843 push    word ptr [bp+arg_2] ;~ 28F0:47EB
cs=0x28f0;eip=0x0047ee; 	T(NEG(ax));	// 96844 neg     ax ;~ 28F0:47EE
cs=0x28f0;eip=0x0047f0; 	T(ADC(dx, 0));	// 96845 adc     dx, 0 ;~ 28F0:47F0
cs=0x28f0;eip=0x0047f3; 	T(NEG(dx));	// 96846 neg     dx ;~ 28F0:47F3
cs=0x28f0;eip=0x0047f5; 	X(PUSH(dx));	// 96847 push    dx ;~ 28F0:47F5
cs=0x28f0;eip=0x0047f6; 	X(PUSH(ax));	// 96848 push    ax ;~ 28F0:47F6
cs=0x28f0;eip=0x0047f7; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 96849 push    [bp+var_2] ;~ 28F0:47F7
cs=0x28f0;eip=0x0047fa; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 96850 push    [bp+var_4] ;~ 28F0:47FA
loc_3bcdd:
	// 10574 
cs=0x28f0;eip=0x0047fd; 	R(CALL(sub_3bbe2,0));	// 96853 call    sub_3BBE2 ;~ 28F0:47FD
cs=0x28f0;eip=0x004800; 	T(MOV(sp, bp));	// 96854 mov     sp, bp ;~ 28F0:4800
cs=0x28f0;eip=0x004802; 	X(POP(bp));	// 96855 pop     bp ;~ 28F0:4802
cs=0x28f0;eip=0x004803; 	R(RETN(6));	// 96856 retn    6 ;~ 28F0:4803
sub_3bce6:
	// 96864 
#undef var_4
#define var_4 -4
	// 96866 var_4           = word ptr -4 ;~ 28F0:4806
#undef var_2
#define var_2 -2
	// 96867 var_2           = word ptr -2 ;~ 28F0:4806
#undef arg_0
#define arg_0 4
	// 96868 arg_0           = word ptr  4 ;~ 28F0:4806
#undef arg_2
#define arg_2 6
	// 96869 arg_2           = dword ptr  6 ;~ 28F0:4806
cs=0x28f0;eip=0x004806; 	X(PUSH(bp));	// 96871 push    bp ;~ 28F0:4806
cs=0x28f0;eip=0x004807; 	T(MOV(bp, sp));	// 96872 mov     bp, sp ;~ 28F0:4807
cs=0x28f0;eip=0x004809; 	T(SUB(sp, 4));	// 96873 sub     sp, 4 ;~ 28F0:4809
cs=0x28f0;eip=0x00480c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 96874 cmp     [bp+arg_0], 0 ;~ 28F0:480C
cs=0x28f0;eip=0x004810; 	R(JLE(loc_3bd41));	// 96875 jle     short loc_3BD41 ;~ 28F0:4810
cs=0x28f0;eip=0x004812; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 96876 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4812
cs=0x28f0;eip=0x004816; 	R(JL(loc_3bd05));	// 96877 jl      short loc_3BD05 ;~ 28F0:4816
cs=0x28f0;eip=0x004818; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96878 les     bx, [bp+arg_2] ;~ 28F0:4818
cs=0x28f0;eip=0x00481b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 96879 mov     ax, es:[bx+18h] ;~ 28F0:481B
cs=0x28f0;eip=0x00481f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 96880 mov     dx, es:[bx+1Ah] ;~ 28F0:481F
cs=0x28f0;eip=0x004823; 	R(JMP(loc_3bd28));	// 96881 jmp     short loc_3BD28 ;~ 28F0:4823
loc_3bd05:
	// 10575 
cs=0x28f0;eip=0x004825; 	T(MOV(ax, 0x64));	// 96885 mov     ax, 64h ; 'd' ;~ 28F0:4825
cs=0x28f0;eip=0x004828; 	T(CWD);	// 96886 cwd ;~ 28F0:4828
cs=0x28f0;eip=0x004829; 	X(PUSH(dx));	// 96887 push    dx ;~ 28F0:4829
cs=0x28f0;eip=0x00482a; 	X(PUSH(ax));	// 96888 push    ax ;~ 28F0:482A
cs=0x28f0;eip=0x00482b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96889 mov     ax, [bp+arg_0] ;~ 28F0:482B
cs=0x28f0;eip=0x00482e; 	T(CWD);	// 96890 cwd ;~ 28F0:482E
cs=0x28f0;eip=0x00482f; 	X(PUSH(dx));	// 96891 push    dx ;~ 28F0:482F
cs=0x28f0;eip=0x004830; 	X(PUSH(ax));	// 96892 push    ax ;~ 28F0:4830
cs=0x28f0;eip=0x004831; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96893 les     bx, [bp+arg_2] ;~ 28F0:4831
cs=0x28f0;eip=0x004834; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 96894 push    word ptr es:[bx+1Ah] ;~ 28F0:4834
cs=0x28f0;eip=0x004838; 	X(PUSH(*(dw*)(raddr(es,bx+0x18))));	// 96895 push    word ptr es:[bx+18h] ;~ 28F0:4838
cs=0x28f0;eip=0x00483c; 	R(CALLF(sub_105c2,0));	// 96896 call    sub_105C2 ;~ 28F0:483C
cs=0x28f0;eip=0x004841; 	X(PUSH(dx));	// 96897 push    dx ;~ 28F0:4841
cs=0x28f0;eip=0x004842; 	X(PUSH(ax));	// 96898 push    ax ;~ 28F0:4842
cs=0x28f0;eip=0x004843; 	R(CALLF(sub_10526,0));	// 96899 call    sub_10526 ;~ 28F0:4843
loc_3bd28:
	// 10576 
cs=0x28f0;eip=0x004848; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96902 mov     [bp+var_4], ax ;~ 28F0:4848
cs=0x28f0;eip=0x00484b; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96903 mov     [bp+var_2], dx ;~ 28F0:484B
cs=0x28f0;eip=0x00484e; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 96904 push    word ptr [bp+arg_2+2] ;~ 28F0:484E
cs=0x28f0;eip=0x004851; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 96905 push    word ptr [bp+arg_2] ;~ 28F0:4851
cs=0x28f0;eip=0x004854; 	X(PUSH(dx));	// 96906 push    dx ;~ 28F0:4854
cs=0x28f0;eip=0x004855; 	X(PUSH(ax));	// 96907 push    ax ;~ 28F0:4855
cs=0x28f0;eip=0x004856; 	T(NEG(ax));	// 96908 neg     ax ;~ 28F0:4856
cs=0x28f0;eip=0x004858; 	T(ADC(dx, 0));	// 96909 adc     dx, 0 ;~ 28F0:4858
cs=0x28f0;eip=0x00485b; 	T(NEG(dx));	// 96910 neg     dx ;~ 28F0:485B
cs=0x28f0;eip=0x00485d; 	X(PUSH(dx));	// 96911 push    dx ;~ 28F0:485D
cs=0x28f0;eip=0x00485e; 	X(PUSH(ax));	// 96912 push    ax ;~ 28F0:485E
cs=0x28f0;eip=0x00485f; 	R(JMP(loc_3bd92));	// 96913 jmp     short loc_3BD92 ;~ 28F0:485F
loc_3bd41:
	// 10577 
cs=0x28f0;eip=0x004861; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 96917 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4861
cs=0x28f0;eip=0x004865; 	R(JG(loc_3bd54));	// 96918 jg      short loc_3BD54 ;~ 28F0:4865
cs=0x28f0;eip=0x004867; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96919 les     bx, [bp+arg_2] ;~ 28F0:4867
cs=0x28f0;eip=0x00486a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C))));	// 96920 mov     ax, es:[bx+1Ch] ;~ 28F0:486A
cs=0x28f0;eip=0x00486e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E))));	// 96921 mov     dx, es:[bx+1Eh] ;~ 28F0:486E
cs=0x28f0;eip=0x004872; 	R(JMP(loc_3bd77));	// 96922 jmp     short loc_3BD77 ;~ 28F0:4872
loc_3bd54:
	// 10578 
cs=0x28f0;eip=0x004874; 	T(MOV(ax, 0x0FF9C));	// 96926 mov     ax, 0FF9Ch ;~ 28F0:4874
cs=0x28f0;eip=0x004877; 	T(CWD);	// 96927 cwd ;~ 28F0:4877
cs=0x28f0;eip=0x004878; 	X(PUSH(dx));	// 96928 push    dx ;~ 28F0:4878
cs=0x28f0;eip=0x004879; 	X(PUSH(ax));	// 96929 push    ax ;~ 28F0:4879
cs=0x28f0;eip=0x00487a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96930 mov     ax, [bp+arg_0] ;~ 28F0:487A
cs=0x28f0;eip=0x00487d; 	T(CWD);	// 96931 cwd ;~ 28F0:487D
cs=0x28f0;eip=0x00487e; 	X(PUSH(dx));	// 96932 push    dx ;~ 28F0:487E
cs=0x28f0;eip=0x00487f; 	X(PUSH(ax));	// 96933 push    ax ;~ 28F0:487F
cs=0x28f0;eip=0x004880; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96934 les     bx, [bp+arg_2] ;~ 28F0:4880
cs=0x28f0;eip=0x004883; 	X(PUSH(*(dw*)(raddr(es,bx+0x1E))));	// 96935 push    word ptr es:[bx+1Eh] ;~ 28F0:4883
cs=0x28f0;eip=0x004887; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C))));	// 96936 push    word ptr es:[bx+1Ch] ;~ 28F0:4887
cs=0x28f0;eip=0x00488b; 	R(CALLF(sub_105c2,0));	// 96937 call    sub_105C2 ;~ 28F0:488B
cs=0x28f0;eip=0x004890; 	X(PUSH(dx));	// 96938 push    dx ;~ 28F0:4890
cs=0x28f0;eip=0x004891; 	X(PUSH(ax));	// 96939 push    ax ;~ 28F0:4891
cs=0x28f0;eip=0x004892; 	R(CALLF(sub_10526,0));	// 96940 call    sub_10526 ;~ 28F0:4892
loc_3bd77:
	// 10579 
cs=0x28f0;eip=0x004897; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 96943 mov     [bp+var_4], ax ;~ 28F0:4897
cs=0x28f0;eip=0x00489a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 96944 mov     [bp+var_2], dx ;~ 28F0:489A
cs=0x28f0;eip=0x00489d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 96945 push    word ptr [bp+arg_2+2] ;~ 28F0:489D
cs=0x28f0;eip=0x0048a0; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 96946 push    word ptr [bp+arg_2] ;~ 28F0:48A0
cs=0x28f0;eip=0x0048a3; 	T(NEG(ax));	// 96947 neg     ax ;~ 28F0:48A3
cs=0x28f0;eip=0x0048a5; 	T(ADC(dx, 0));	// 96948 adc     dx, 0 ;~ 28F0:48A5
cs=0x28f0;eip=0x0048a8; 	T(NEG(dx));	// 96949 neg     dx ;~ 28F0:48A8
cs=0x28f0;eip=0x0048aa; 	X(PUSH(dx));	// 96950 push    dx ;~ 28F0:48AA
cs=0x28f0;eip=0x0048ab; 	X(PUSH(ax));	// 96951 push    ax ;~ 28F0:48AB
cs=0x28f0;eip=0x0048ac; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 96952 push    [bp+var_2] ;~ 28F0:48AC
cs=0x28f0;eip=0x0048af; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 96953 push    [bp+var_4] ;~ 28F0:48AF
loc_3bd92:
	// 10580 
cs=0x28f0;eip=0x0048b2; 	R(CALL(sub_3bbe2,0));	// 96956 call    sub_3BBE2 ;~ 28F0:48B2
cs=0x28f0;eip=0x0048b5; 	T(MOV(sp, bp));	// 96957 mov     sp, bp ;~ 28F0:48B5
cs=0x28f0;eip=0x0048b7; 	X(POP(bp));	// 96958 pop     bp ;~ 28F0:48B7
cs=0x28f0;eip=0x0048b8; 	R(RETN(6));	// 96959 retn    6 ;~ 28F0:48B8
sub_3bd9b:
	// 96967 
#undef var_4
#define var_4 -4
	// 96970 var_4           = word ptr -4 ;~ 28F0:48BB
#undef var_2
#define var_2 -2
	// 96971 var_2           = word ptr -2 ;~ 28F0:48BB
#undef arg_0
#define arg_0 4
	// 96972 arg_0           = word ptr  4 ;~ 28F0:48BB
#undef arg_2
#define arg_2 6
	// 96973 arg_2           = dword ptr  6 ;~ 28F0:48BB
cs=0x28f0;eip=0x0048bb; 	X(PUSH(bp));	// 96975 push    bp ;~ 28F0:48BB
cs=0x28f0;eip=0x0048bc; 	T(MOV(bp, sp));	// 96976 mov     bp, sp ;~ 28F0:48BC
cs=0x28f0;eip=0x0048be; 	T(SUB(sp, 4));	// 96977 sub     sp, 4 ;~ 28F0:48BE
cs=0x28f0;eip=0x0048c1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 96978 cmp     [bp+arg_0], 0 ;~ 28F0:48C1
cs=0x28f0;eip=0x0048c5; 	R(JLE(loc_3bde6));	// 96979 jle     short loc_3BDE6 ;~ 28F0:48C5
cs=0x28f0;eip=0x0048c7; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 96980 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:48C7
cs=0x28f0;eip=0x0048cb; 	R(JL(loc_3bdc1));	// 96981 jl      short loc_3BDC1 ;~ 28F0:48CB
cs=0x28f0;eip=0x0048cd; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 96982 les     bx, [bp+arg_2] ;~ 28F0:48CD
cs=0x28f0;eip=0x0048d0; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 96983 mov     ax, es:[bx+10h] ;~ 28F0:48D0
cs=0x28f0;eip=0x0048d4; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 96984 mov     dx, es:[bx+12h] ;~ 28F0:48D4
cs=0x28f0;eip=0x0048d8; 	T(NEG(ax));	// 96985 neg     ax ;~ 28F0:48D8
cs=0x28f0;eip=0x0048da; 	T(ADC(dx, 0));	// 96986 adc     dx, 0 ;~ 28F0:48DA
cs=0x28f0;eip=0x0048dd; 	T(NEG(dx));	// 96987 neg     dx ;~ 28F0:48DD
cs=0x28f0;eip=0x0048df; 	R(JMP(loc_3be1c));	// 96988 jmp     short loc_3BE1C ;~ 28F0:48DF
loc_3bdc1:
	// 10581 
cs=0x28f0;eip=0x0048e1; 	T(MOV(ax, 0x64));	// 96992 mov     ax, 64h ; 'd' ;~ 28F0:48E1
cs=0x28f0;eip=0x0048e4; 	T(CWD);	// 96993 cwd ;~ 28F0:48E4
cs=0x28f0;eip=0x0048e5; 	X(PUSH(dx));	// 96994 push    dx ;~ 28F0:48E5
cs=0x28f0;eip=0x0048e6; 	X(PUSH(ax));	// 96995 push    ax ;~ 28F0:48E6
cs=0x28f0;eip=0x0048e7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 96996 mov     ax, [bp+arg_0] ;~ 28F0:48E7
cs=0x28f0;eip=0x0048ea; 	T(CWD);	// 96997 cwd ;~ 28F0:48EA
cs=0x28f0;eip=0x0048eb; 	X(PUSH(dx));	// 96998 push    dx ;~ 28F0:48EB
cs=0x28f0;eip=0x0048ec; 	X(PUSH(ax));	// 96999 push    ax ;~ 28F0:48EC
cs=0x28f0;eip=0x0048ed; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97000 les     bx, [bp+arg_2] ;~ 28F0:48ED
cs=0x28f0;eip=0x0048f0; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97001 push    word ptr es:[bx+12h] ;~ 28F0:48F0
cs=0x28f0;eip=0x0048f4; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97002 push    word ptr es:[bx+10h] ;~ 28F0:48F4
cs=0x28f0;eip=0x0048f8; 	R(CALLF(sub_105c2,0));	// 97003 call    sub_105C2 ;~ 28F0:48F8
cs=0x28f0;eip=0x0048fd; 	T(NEG(ax));	// 97004 neg     ax ;~ 28F0:48FD
cs=0x28f0;eip=0x0048ff; 	T(ADC(dx, 0));	// 97005 adc     dx, 0 ;~ 28F0:48FF
cs=0x28f0;eip=0x004902; 	T(NEG(dx));	// 97006 neg     dx ;~ 28F0:4902
cs=0x28f0;eip=0x004904; 	R(JMP(loc_3be15));	// 97007 jmp     short loc_3BE15 ;~ 28F0:4904
loc_3bde6:
	// 10582 
cs=0x28f0;eip=0x004906; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97011 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4906
cs=0x28f0;eip=0x00490a; 	R(JG(loc_3bdf9));	// 97012 jg      short loc_3BDF9 ;~ 28F0:490A
cs=0x28f0;eip=0x00490c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97013 les     bx, [bp+arg_2] ;~ 28F0:490C
cs=0x28f0;eip=0x00490f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97014 mov     ax, es:[bx+10h] ;~ 28F0:490F
cs=0x28f0;eip=0x004913; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97015 mov     dx, es:[bx+12h] ;~ 28F0:4913
cs=0x28f0;eip=0x004917; 	R(JMP(loc_3be1c));	// 97016 jmp     short loc_3BE1C ;~ 28F0:4917
loc_3bdf9:
	// 10583 
cs=0x28f0;eip=0x004919; 	T(MOV(ax, 0x0FF9C));	// 97020 mov     ax, 0FF9Ch ;~ 28F0:4919
cs=0x28f0;eip=0x00491c; 	T(CWD);	// 97021 cwd ;~ 28F0:491C
cs=0x28f0;eip=0x00491d; 	X(PUSH(dx));	// 97022 push    dx ;~ 28F0:491D
cs=0x28f0;eip=0x00491e; 	X(PUSH(ax));	// 97023 push    ax ;~ 28F0:491E
cs=0x28f0;eip=0x00491f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97024 mov     ax, [bp+arg_0] ;~ 28F0:491F
cs=0x28f0;eip=0x004922; 	T(CWD);	// 97025 cwd ;~ 28F0:4922
cs=0x28f0;eip=0x004923; 	X(PUSH(dx));	// 97026 push    dx ;~ 28F0:4923
cs=0x28f0;eip=0x004924; 	X(PUSH(ax));	// 97027 push    ax ;~ 28F0:4924
cs=0x28f0;eip=0x004925; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97028 les     bx, [bp+arg_2] ;~ 28F0:4925
cs=0x28f0;eip=0x004928; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97029 push    word ptr es:[bx+12h] ;~ 28F0:4928
cs=0x28f0;eip=0x00492c; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97030 push    word ptr es:[bx+10h] ;~ 28F0:492C
cs=0x28f0;eip=0x004930; 	R(CALLF(sub_105c2,0));	// 97031 call    sub_105C2 ;~ 28F0:4930
loc_3be15:
	// 10584 
cs=0x28f0;eip=0x004935; 	X(PUSH(dx));	// 97034 push    dx ;~ 28F0:4935
cs=0x28f0;eip=0x004936; 	X(PUSH(ax));	// 97035 push    ax ;~ 28F0:4936
cs=0x28f0;eip=0x004937; 	R(CALLF(sub_10526,0));	// 97036 call    sub_10526 ;~ 28F0:4937
loc_3be1c:
	// 10585 
cs=0x28f0;eip=0x00493c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97040 mov     [bp+var_4], ax ;~ 28F0:493C
cs=0x28f0;eip=0x00493f; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97041 mov     [bp+var_2], dx ;~ 28F0:493F
cs=0x28f0;eip=0x004942; 	T(MOV(ax, 0x100));	// 97042 mov     ax, 100h ;~ 28F0:4942
cs=0x28f0;eip=0x004945; 	T(CWD);	// 97043 cwd ;~ 28F0:4945
cs=0x28f0;eip=0x004946; 	X(PUSH(dx));	// 97044 push    dx ;~ 28F0:4946
cs=0x28f0;eip=0x004947; 	X(PUSH(ax));	// 97045 push    ax ;~ 28F0:4947
cs=0x28f0;eip=0x004948; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 97046 mov     ax, word ptr unk_57111 ;~ 28F0:4948
cs=0x28f0;eip=0x00494b; 	T(CWD);	// 97047 cwd ;~ 28F0:494B
cs=0x28f0;eip=0x00494c; 	X(PUSH(dx));	// 97048 push    dx ;~ 28F0:494C
cs=0x28f0;eip=0x00494d; 	X(PUSH(ax));	// 97049 push    ax ;~ 28F0:494D
cs=0x28f0;eip=0x00494e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97050 push    [bp+var_2] ;~ 28F0:494E
cs=0x28f0;eip=0x004951; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97051 push    [bp+var_4] ;~ 28F0:4951
cs=0x28f0;eip=0x004954; 	R(CALLF(sub_105c2,0));	// 97052 call    sub_105C2 ;~ 28F0:4954
cs=0x28f0;eip=0x004959; 	X(PUSH(dx));	// 97053 push    dx ;~ 28F0:4959
cs=0x28f0;eip=0x00495a; 	X(PUSH(ax));	// 97054 push    ax ;~ 28F0:495A
cs=0x28f0;eip=0x00495b; 	R(CALLF(sub_10526,0));	// 97055 call    sub_10526 ;~ 28F0:495B
cs=0x28f0;eip=0x004960; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97056 mov     [bp+var_4], ax ;~ 28F0:4960
cs=0x28f0;eip=0x004963; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97057 mov     [bp+var_2], dx ;~ 28F0:4963
cs=0x28f0;eip=0x004966; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97058 les     bx, [bp+arg_2] ;~ 28F0:4966
cs=0x28f0;eip=0x004969; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 97059 add     es:[bx], ax ;~ 28F0:4969
cs=0x28f0;eip=0x00496c; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 97060 adc     es:[bx+2], dx ;~ 28F0:496C
cs=0x28f0;eip=0x004970; 	T(MOV(sp, bp));	// 97061 mov     sp, bp ;~ 28F0:4970
cs=0x28f0;eip=0x004972; 	X(POP(bp));	// 97062 pop     bp ;~ 28F0:4972
cs=0x28f0;eip=0x004973; 	R(RETN(6));	// 97063 retn    6 ;~ 28F0:4973
sub_3be56:
	// 97071 
#undef var_4
#define var_4 -4
	// 97074 var_4           = word ptr -4 ;~ 28F0:4976
#undef var_2
#define var_2 -2
	// 97075 var_2           = word ptr -2 ;~ 28F0:4976
#undef arg_0
#define arg_0 4
	// 97076 arg_0           = word ptr  4 ;~ 28F0:4976
#undef arg_2
#define arg_2 6
	// 97077 arg_2           = dword ptr  6 ;~ 28F0:4976
cs=0x28f0;eip=0x004976; 	X(PUSH(bp));	// 97079 push    bp ;~ 28F0:4976
cs=0x28f0;eip=0x004977; 	T(MOV(bp, sp));	// 97080 mov     bp, sp ;~ 28F0:4977
cs=0x28f0;eip=0x004979; 	T(SUB(sp, 4));	// 97081 sub     sp, 4 ;~ 28F0:4979
cs=0x28f0;eip=0x00497c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 97082 cmp     [bp+arg_0], 0 ;~ 28F0:497C
cs=0x28f0;eip=0x004980; 	R(JLE(loc_3bea1));	// 97083 jle     short loc_3BEA1 ;~ 28F0:4980
cs=0x28f0;eip=0x004982; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97084 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4982
cs=0x28f0;eip=0x004986; 	R(JL(loc_3be7c));	// 97085 jl      short loc_3BE7C ;~ 28F0:4986
cs=0x28f0;eip=0x004988; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97086 les     bx, [bp+arg_2] ;~ 28F0:4988
cs=0x28f0;eip=0x00498b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97087 mov     ax, es:[bx+10h] ;~ 28F0:498B
cs=0x28f0;eip=0x00498f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97088 mov     dx, es:[bx+12h] ;~ 28F0:498F
cs=0x28f0;eip=0x004993; 	T(NEG(ax));	// 97089 neg     ax ;~ 28F0:4993
cs=0x28f0;eip=0x004995; 	T(ADC(dx, 0));	// 97090 adc     dx, 0 ;~ 28F0:4995
cs=0x28f0;eip=0x004998; 	T(NEG(dx));	// 97091 neg     dx ;~ 28F0:4998
cs=0x28f0;eip=0x00499a; 	R(JMP(loc_3bed7));	// 97092 jmp     short loc_3BED7 ;~ 28F0:499A
loc_3be7c:
	// 10586 
cs=0x28f0;eip=0x00499c; 	T(MOV(ax, 0x64));	// 97096 mov     ax, 64h ; 'd' ;~ 28F0:499C
cs=0x28f0;eip=0x00499f; 	T(CWD);	// 97097 cwd ;~ 28F0:499F
cs=0x28f0;eip=0x0049a0; 	X(PUSH(dx));	// 97098 push    dx ;~ 28F0:49A0
cs=0x28f0;eip=0x0049a1; 	X(PUSH(ax));	// 97099 push    ax ;~ 28F0:49A1
cs=0x28f0;eip=0x0049a2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97100 mov     ax, [bp+arg_0] ;~ 28F0:49A2
cs=0x28f0;eip=0x0049a5; 	T(CWD);	// 97101 cwd ;~ 28F0:49A5
cs=0x28f0;eip=0x0049a6; 	X(PUSH(dx));	// 97102 push    dx ;~ 28F0:49A6
cs=0x28f0;eip=0x0049a7; 	X(PUSH(ax));	// 97103 push    ax ;~ 28F0:49A7
cs=0x28f0;eip=0x0049a8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97104 les     bx, [bp+arg_2] ;~ 28F0:49A8
cs=0x28f0;eip=0x0049ab; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97105 push    word ptr es:[bx+12h] ;~ 28F0:49AB
cs=0x28f0;eip=0x0049af; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97106 push    word ptr es:[bx+10h] ;~ 28F0:49AF
cs=0x28f0;eip=0x0049b3; 	R(CALLF(sub_105c2,0));	// 97107 call    sub_105C2 ;~ 28F0:49B3
cs=0x28f0;eip=0x0049b8; 	T(NEG(ax));	// 97108 neg     ax ;~ 28F0:49B8
cs=0x28f0;eip=0x0049ba; 	T(ADC(dx, 0));	// 97109 adc     dx, 0 ;~ 28F0:49BA
cs=0x28f0;eip=0x0049bd; 	T(NEG(dx));	// 97110 neg     dx ;~ 28F0:49BD
cs=0x28f0;eip=0x0049bf; 	R(JMP(loc_3bed0));	// 97111 jmp     short loc_3BED0 ;~ 28F0:49BF
loc_3bea1:
	// 10587 
cs=0x28f0;eip=0x0049c1; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97115 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:49C1
cs=0x28f0;eip=0x0049c5; 	R(JG(loc_3beb4));	// 97116 jg      short loc_3BEB4 ;~ 28F0:49C5
cs=0x28f0;eip=0x0049c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97117 les     bx, [bp+arg_2] ;~ 28F0:49C7
cs=0x28f0;eip=0x0049ca; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97118 mov     ax, es:[bx+10h] ;~ 28F0:49CA
cs=0x28f0;eip=0x0049ce; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97119 mov     dx, es:[bx+12h] ;~ 28F0:49CE
cs=0x28f0;eip=0x0049d2; 	R(JMP(loc_3bed7));	// 97120 jmp     short loc_3BED7 ;~ 28F0:49D2
loc_3beb4:
	// 10588 
cs=0x28f0;eip=0x0049d4; 	T(MOV(ax, 0x0FF9C));	// 97124 mov     ax, 0FF9Ch ;~ 28F0:49D4
cs=0x28f0;eip=0x0049d7; 	T(CWD);	// 97125 cwd ;~ 28F0:49D7
cs=0x28f0;eip=0x0049d8; 	X(PUSH(dx));	// 97126 push    dx ;~ 28F0:49D8
cs=0x28f0;eip=0x0049d9; 	X(PUSH(ax));	// 97127 push    ax ;~ 28F0:49D9
cs=0x28f0;eip=0x0049da; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97128 mov     ax, [bp+arg_0] ;~ 28F0:49DA
cs=0x28f0;eip=0x0049dd; 	T(CWD);	// 97129 cwd ;~ 28F0:49DD
cs=0x28f0;eip=0x0049de; 	X(PUSH(dx));	// 97130 push    dx ;~ 28F0:49DE
cs=0x28f0;eip=0x0049df; 	X(PUSH(ax));	// 97131 push    ax ;~ 28F0:49DF
cs=0x28f0;eip=0x0049e0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97132 les     bx, [bp+arg_2] ;~ 28F0:49E0
cs=0x28f0;eip=0x0049e3; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97133 push    word ptr es:[bx+12h] ;~ 28F0:49E3
cs=0x28f0;eip=0x0049e7; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97134 push    word ptr es:[bx+10h] ;~ 28F0:49E7
cs=0x28f0;eip=0x0049eb; 	R(CALLF(sub_105c2,0));	// 97135 call    sub_105C2 ;~ 28F0:49EB
loc_3bed0:
	// 10589 
cs=0x28f0;eip=0x0049f0; 	X(PUSH(dx));	// 97138 push    dx ;~ 28F0:49F0
cs=0x28f0;eip=0x0049f1; 	X(PUSH(ax));	// 97139 push    ax ;~ 28F0:49F1
cs=0x28f0;eip=0x0049f2; 	R(CALLF(sub_10526,0));	// 97140 call    sub_10526 ;~ 28F0:49F2
loc_3bed7:
	// 10590 
cs=0x28f0;eip=0x0049f7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97144 mov     [bp+var_4], ax ;~ 28F0:49F7
cs=0x28f0;eip=0x0049fa; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97145 mov     [bp+var_2], dx ;~ 28F0:49FA
cs=0x28f0;eip=0x0049fd; 	T(MOV(ax, 0x100));	// 97146 mov     ax, 100h ;~ 28F0:49FD
cs=0x28f0;eip=0x004a00; 	T(CWD);	// 97147 cwd ;~ 28F0:4A00
cs=0x28f0;eip=0x004a01; 	X(PUSH(dx));	// 97148 push    dx ;~ 28F0:4A01
cs=0x28f0;eip=0x004a02; 	X(PUSH(ax));	// 97149 push    ax ;~ 28F0:4A02
cs=0x28f0;eip=0x004a03; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 97150 mov     ax, word ptr unk_57111 ;~ 28F0:4A03
cs=0x28f0;eip=0x004a06; 	T(CWD);	// 97151 cwd ;~ 28F0:4A06
cs=0x28f0;eip=0x004a07; 	X(PUSH(dx));	// 97152 push    dx ;~ 28F0:4A07
cs=0x28f0;eip=0x004a08; 	X(PUSH(ax));	// 97153 push    ax ;~ 28F0:4A08
cs=0x28f0;eip=0x004a09; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97154 push    [bp+var_2] ;~ 28F0:4A09
cs=0x28f0;eip=0x004a0c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97155 push    [bp+var_4] ;~ 28F0:4A0C
cs=0x28f0;eip=0x004a0f; 	R(CALLF(sub_105c2,0));	// 97156 call    sub_105C2 ;~ 28F0:4A0F
cs=0x28f0;eip=0x004a14; 	X(PUSH(dx));	// 97157 push    dx ;~ 28F0:4A14
cs=0x28f0;eip=0x004a15; 	X(PUSH(ax));	// 97158 push    ax ;~ 28F0:4A15
cs=0x28f0;eip=0x004a16; 	R(CALLF(sub_10526,0));	// 97159 call    sub_10526 ;~ 28F0:4A16
cs=0x28f0;eip=0x004a1b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97160 mov     [bp+var_4], ax ;~ 28F0:4A1B
cs=0x28f0;eip=0x004a1e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97161 mov     [bp+var_2], dx ;~ 28F0:4A1E
cs=0x28f0;eip=0x004a21; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97162 les     bx, [bp+arg_2] ;~ 28F0:4A21
cs=0x28f0;eip=0x004a24; 	X(ADD(*(dw*)(raddr(es,bx+4)), ax));	// 97163 add     es:[bx+4], ax ;~ 28F0:4A24
cs=0x28f0;eip=0x004a28; 	X(ADC(*(dw*)(raddr(es,bx+6)), dx));	// 97164 adc     es:[bx+6], dx ;~ 28F0:4A28
cs=0x28f0;eip=0x004a2c; 	T(MOV(sp, bp));	// 97165 mov     sp, bp ;~ 28F0:4A2C
cs=0x28f0;eip=0x004a2e; 	X(POP(bp));	// 97166 pop     bp ;~ 28F0:4A2E
cs=0x28f0;eip=0x004a2f; 	R(RETN(6));	// 97167 retn    6 ;~ 28F0:4A2F
sub_3bfce:
	// 97268 
#undef var_4
#define var_4 -4
	// 97271 var_4           = word ptr -4 ;~ 28F0:4AEE
#undef var_2
#define var_2 -2
	// 97272 var_2           = word ptr -2 ;~ 28F0:4AEE
#undef arg_0
#define arg_0 4
	// 97273 arg_0           = word ptr  4 ;~ 28F0:4AEE
#undef arg_2
#define arg_2 6
	// 97274 arg_2           = dword ptr  6 ;~ 28F0:4AEE
cs=0x28f0;eip=0x004aee; 	X(PUSH(bp));	// 97276 push    bp ;~ 28F0:4AEE
cs=0x28f0;eip=0x004aef; 	T(MOV(bp, sp));	// 97277 mov     bp, sp ;~ 28F0:4AEF
cs=0x28f0;eip=0x004af1; 	T(SUB(sp, 4));	// 97278 sub     sp, 4 ;~ 28F0:4AF1
cs=0x28f0;eip=0x004af4; 	T(SUB(ax, ax));	// 97279 sub     ax, ax ;~ 28F0:4AF4
cs=0x28f0;eip=0x004af6; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 97280 mov     [bp+var_2], ax ;~ 28F0:4AF6
cs=0x28f0;eip=0x004af9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97281 mov     [bp+var_4], ax ;~ 28F0:4AF9
cs=0x28f0;eip=0x004afc; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 97282 cmp     [bp+arg_0], ax ;~ 28F0:4AFC
cs=0x28f0;eip=0x004aff; 	R(JLE(loc_3c030));	// 97283 jle     short loc_3C030 ;~ 28F0:4AFF
cs=0x28f0;eip=0x004b01; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97284 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4B01
cs=0x28f0;eip=0x004b05; 	R(JL(loc_3bff4));	// 97285 jl      short loc_3BFF4 ;~ 28F0:4B05
cs=0x28f0;eip=0x004b07; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97286 les     bx, [bp+arg_2] ;~ 28F0:4B07
cs=0x28f0;eip=0x004b0a; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 97287 mov     ax, es:[bx+8] ;~ 28F0:4B0A
cs=0x28f0;eip=0x004b0e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 97288 mov     dx, es:[bx+0Ah] ;~ 28F0:4B0E
cs=0x28f0;eip=0x004b12; 	R(JMP(loc_3c017));	// 97289 jmp     short loc_3C017 ;~ 28F0:4B12
loc_3bff4:
	// 10597 
cs=0x28f0;eip=0x004b14; 	T(MOV(ax, 0x64));	// 97293 mov     ax, 64h ; 'd' ;~ 28F0:4B14
cs=0x28f0;eip=0x004b17; 	T(CWD);	// 97294 cwd ;~ 28F0:4B17
cs=0x28f0;eip=0x004b18; 	X(PUSH(dx));	// 97295 push    dx ;~ 28F0:4B18
cs=0x28f0;eip=0x004b19; 	X(PUSH(ax));	// 97296 push    ax ;~ 28F0:4B19
cs=0x28f0;eip=0x004b1a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97297 mov     ax, [bp+arg_0] ;~ 28F0:4B1A
cs=0x28f0;eip=0x004b1d; 	T(CWD);	// 97298 cwd ;~ 28F0:4B1D
cs=0x28f0;eip=0x004b1e; 	X(PUSH(dx));	// 97299 push    dx ;~ 28F0:4B1E
cs=0x28f0;eip=0x004b1f; 	X(PUSH(ax));	// 97300 push    ax ;~ 28F0:4B1F
cs=0x28f0;eip=0x004b20; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97301 les     bx, [bp+arg_2] ;~ 28F0:4B20
cs=0x28f0;eip=0x004b23; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 97302 push    word ptr es:[bx+0Ah] ;~ 28F0:4B23
cs=0x28f0;eip=0x004b27; 	X(PUSH(*(dw*)(raddr(es,bx+8))));	// 97303 push    word ptr es:[bx+8] ;~ 28F0:4B27
cs=0x28f0;eip=0x004b2b; 	R(CALLF(sub_105c2,0));	// 97304 call    sub_105C2 ;~ 28F0:4B2B
cs=0x28f0;eip=0x004b30; 	X(PUSH(dx));	// 97305 push    dx ;~ 28F0:4B30
cs=0x28f0;eip=0x004b31; 	X(PUSH(ax));	// 97306 push    ax ;~ 28F0:4B31
cs=0x28f0;eip=0x004b32; 	R(CALLF(sub_10526,0));	// 97307 call    sub_10526 ;~ 28F0:4B32
loc_3c017:
	// 10598 
cs=0x28f0;eip=0x004b37; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97310 mov     [bp+var_4], ax ;~ 28F0:4B37
cs=0x28f0;eip=0x004b3a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97311 mov     [bp+var_2], dx ;~ 28F0:4B3A
cs=0x28f0;eip=0x004b3d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97312 push    word ptr [bp+arg_2+2] ;~ 28F0:4B3D
cs=0x28f0;eip=0x004b40; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97313 push    word ptr [bp+arg_2] ;~ 28F0:4B40
cs=0x28f0;eip=0x004b43; 	X(PUSH(dx));	// 97314 push    dx ;~ 28F0:4B43
cs=0x28f0;eip=0x004b44; 	X(PUSH(ax));	// 97315 push    ax ;~ 28F0:4B44
cs=0x28f0;eip=0x004b45; 	T(NEG(ax));	// 97316 neg     ax ;~ 28F0:4B45
cs=0x28f0;eip=0x004b47; 	T(ADC(dx, 0));	// 97317 adc     dx, 0 ;~ 28F0:4B47
cs=0x28f0;eip=0x004b4a; 	T(NEG(dx));	// 97318 neg     dx ;~ 28F0:4B4A
cs=0x28f0;eip=0x004b4c; 	X(PUSH(dx));	// 97319 push    dx ;~ 28F0:4B4C
cs=0x28f0;eip=0x004b4d; 	X(PUSH(ax));	// 97320 push    ax ;~ 28F0:4B4D
cs=0x28f0;eip=0x004b4e; 	R(JMP(loc_3c081));	// 97321 jmp     short loc_3C081 ;~ 28F0:4B4E
loc_3c030:
	// 10599 
cs=0x28f0;eip=0x004b50; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97325 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4B50
cs=0x28f0;eip=0x004b54; 	R(JG(loc_3c043));	// 97326 jg      short loc_3C043 ;~ 28F0:4B54
cs=0x28f0;eip=0x004b56; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97327 les     bx, [bp+arg_2] ;~ 28F0:4B56
cs=0x28f0;eip=0x004b59; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 97328 mov     ax, es:[bx+0Ch] ;~ 28F0:4B59
cs=0x28f0;eip=0x004b5d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 97329 mov     dx, es:[bx+0Eh] ;~ 28F0:4B5D
cs=0x28f0;eip=0x004b61; 	R(JMP(loc_3c066));	// 97330 jmp     short loc_3C066 ;~ 28F0:4B61
loc_3c043:
	// 10600 
cs=0x28f0;eip=0x004b63; 	T(MOV(ax, 0x0FF9C));	// 97334 mov     ax, 0FF9Ch ;~ 28F0:4B63
cs=0x28f0;eip=0x004b66; 	T(CWD);	// 97335 cwd ;~ 28F0:4B66
cs=0x28f0;eip=0x004b67; 	X(PUSH(dx));	// 97336 push    dx ;~ 28F0:4B67
cs=0x28f0;eip=0x004b68; 	X(PUSH(ax));	// 97337 push    ax ;~ 28F0:4B68
cs=0x28f0;eip=0x004b69; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97338 mov     ax, [bp+arg_0] ;~ 28F0:4B69
cs=0x28f0;eip=0x004b6c; 	T(CWD);	// 97339 cwd ;~ 28F0:4B6C
cs=0x28f0;eip=0x004b6d; 	X(PUSH(dx));	// 97340 push    dx ;~ 28F0:4B6D
cs=0x28f0;eip=0x004b6e; 	X(PUSH(ax));	// 97341 push    ax ;~ 28F0:4B6E
cs=0x28f0;eip=0x004b6f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97342 les     bx, [bp+arg_2] ;~ 28F0:4B6F
cs=0x28f0;eip=0x004b72; 	X(PUSH(*(dw*)(raddr(es,bx+0x0E))));	// 97343 push    word ptr es:[bx+0Eh] ;~ 28F0:4B72
cs=0x28f0;eip=0x004b76; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 97344 push    word ptr es:[bx+0Ch] ;~ 28F0:4B76
cs=0x28f0;eip=0x004b7a; 	R(CALLF(sub_105c2,0));	// 97345 call    sub_105C2 ;~ 28F0:4B7A
cs=0x28f0;eip=0x004b7f; 	X(PUSH(dx));	// 97346 push    dx ;~ 28F0:4B7F
cs=0x28f0;eip=0x004b80; 	X(PUSH(ax));	// 97347 push    ax ;~ 28F0:4B80
cs=0x28f0;eip=0x004b81; 	R(CALLF(sub_10526,0));	// 97348 call    sub_10526 ;~ 28F0:4B81
loc_3c066:
	// 10601 
cs=0x28f0;eip=0x004b86; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97351 mov     [bp+var_4], ax ;~ 28F0:4B86
cs=0x28f0;eip=0x004b89; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97352 mov     [bp+var_2], dx ;~ 28F0:4B89
cs=0x28f0;eip=0x004b8c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97353 push    word ptr [bp+arg_2+2] ;~ 28F0:4B8C
cs=0x28f0;eip=0x004b8f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97354 push    word ptr [bp+arg_2] ;~ 28F0:4B8F
cs=0x28f0;eip=0x004b92; 	T(NEG(ax));	// 97355 neg     ax ;~ 28F0:4B92
cs=0x28f0;eip=0x004b94; 	T(ADC(dx, 0));	// 97356 adc     dx, 0 ;~ 28F0:4B94
cs=0x28f0;eip=0x004b97; 	T(NEG(dx));	// 97357 neg     dx ;~ 28F0:4B97
cs=0x28f0;eip=0x004b99; 	X(PUSH(dx));	// 97358 push    dx ;~ 28F0:4B99
cs=0x28f0;eip=0x004b9a; 	X(PUSH(ax));	// 97359 push    ax ;~ 28F0:4B9A
cs=0x28f0;eip=0x004b9b; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97360 push    [bp+var_2] ;~ 28F0:4B9B
cs=0x28f0;eip=0x004b9e; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97361 push    [bp+var_4] ;~ 28F0:4B9E
loc_3c081:
	// 10602 
cs=0x28f0;eip=0x004ba1; 	R(CALL(sub_3bbe2,0));	// 97364 call    sub_3BBE2 ;~ 28F0:4BA1
cs=0x28f0;eip=0x004ba4; 	T(MOV(sp, bp));	// 97365 mov     sp, bp ;~ 28F0:4BA4
cs=0x28f0;eip=0x004ba6; 	X(POP(bp));	// 97366 pop     bp ;~ 28F0:4BA6
cs=0x28f0;eip=0x004ba7; 	R(RETN(6));	// 97367 retn    6 ;~ 28F0:4BA7
sub_3c08a:
	// 97375 
#undef var_4
#define var_4 -4
	// 97377 var_4           = word ptr -4 ;~ 28F0:4BAA
#undef var_2
#define var_2 -2
	// 97378 var_2           = word ptr -2 ;~ 28F0:4BAA
#undef arg_0
#define arg_0 4
	// 97379 arg_0           = word ptr  4 ;~ 28F0:4BAA
#undef arg_2
#define arg_2 6
	// 97380 arg_2           = dword ptr  6 ;~ 28F0:4BAA
cs=0x28f0;eip=0x004baa; 	X(PUSH(bp));	// 97382 push    bp ;~ 28F0:4BAA
cs=0x28f0;eip=0x004bab; 	T(MOV(bp, sp));	// 97383 mov     bp, sp ;~ 28F0:4BAB
cs=0x28f0;eip=0x004bad; 	T(SUB(sp, 4));	// 97384 sub     sp, 4 ;~ 28F0:4BAD
cs=0x28f0;eip=0x004bb0; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 97385 cmp     [bp+arg_0], 0 ;~ 28F0:4BB0
cs=0x28f0;eip=0x004bb4; 	R(JLE(loc_3c0e5));	// 97386 jle     short loc_3C0E5 ;~ 28F0:4BB4
cs=0x28f0;eip=0x004bb6; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97387 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4BB6
cs=0x28f0;eip=0x004bba; 	R(JL(loc_3c0a9));	// 97388 jl      short loc_3C0A9 ;~ 28F0:4BBA
cs=0x28f0;eip=0x004bbc; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97389 les     bx, [bp+arg_2] ;~ 28F0:4BBC
cs=0x28f0;eip=0x004bbf; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x18))));	// 97390 mov     ax, es:[bx+18h] ;~ 28F0:4BBF
cs=0x28f0;eip=0x004bc3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1A))));	// 97391 mov     dx, es:[bx+1Ah] ;~ 28F0:4BC3
cs=0x28f0;eip=0x004bc7; 	R(JMP(loc_3c0cc));	// 97392 jmp     short loc_3C0CC ;~ 28F0:4BC7
loc_3c0a9:
	// 10603 
cs=0x28f0;eip=0x004bc9; 	T(MOV(ax, 0x64));	// 97396 mov     ax, 64h ; 'd' ;~ 28F0:4BC9
cs=0x28f0;eip=0x004bcc; 	T(CWD);	// 97397 cwd ;~ 28F0:4BCC
cs=0x28f0;eip=0x004bcd; 	X(PUSH(dx));	// 97398 push    dx ;~ 28F0:4BCD
cs=0x28f0;eip=0x004bce; 	X(PUSH(ax));	// 97399 push    ax ;~ 28F0:4BCE
cs=0x28f0;eip=0x004bcf; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97400 mov     ax, [bp+arg_0] ;~ 28F0:4BCF
cs=0x28f0;eip=0x004bd2; 	T(CWD);	// 97401 cwd ;~ 28F0:4BD2
cs=0x28f0;eip=0x004bd3; 	X(PUSH(dx));	// 97402 push    dx ;~ 28F0:4BD3
cs=0x28f0;eip=0x004bd4; 	X(PUSH(ax));	// 97403 push    ax ;~ 28F0:4BD4
cs=0x28f0;eip=0x004bd5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97404 les     bx, [bp+arg_2] ;~ 28F0:4BD5
cs=0x28f0;eip=0x004bd8; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A))));	// 97405 push    word ptr es:[bx+1Ah] ;~ 28F0:4BD8
cs=0x28f0;eip=0x004bdc; 	X(PUSH(*(dw*)(raddr(es,bx+0x18))));	// 97406 push    word ptr es:[bx+18h] ;~ 28F0:4BDC
cs=0x28f0;eip=0x004be0; 	R(CALLF(sub_105c2,0));	// 97407 call    sub_105C2 ;~ 28F0:4BE0
cs=0x28f0;eip=0x004be5; 	X(PUSH(dx));	// 97408 push    dx ;~ 28F0:4BE5
cs=0x28f0;eip=0x004be6; 	X(PUSH(ax));	// 97409 push    ax ;~ 28F0:4BE6
cs=0x28f0;eip=0x004be7; 	R(CALLF(sub_10526,0));	// 97410 call    sub_10526 ;~ 28F0:4BE7
loc_3c0cc:
	// 10604 
cs=0x28f0;eip=0x004bec; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97413 mov     [bp+var_4], ax ;~ 28F0:4BEC
cs=0x28f0;eip=0x004bef; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97414 mov     [bp+var_2], dx ;~ 28F0:4BEF
cs=0x28f0;eip=0x004bf2; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97415 push    word ptr [bp+arg_2+2] ;~ 28F0:4BF2
cs=0x28f0;eip=0x004bf5; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97416 push    word ptr [bp+arg_2] ;~ 28F0:4BF5
cs=0x28f0;eip=0x004bf8; 	X(PUSH(dx));	// 97417 push    dx ;~ 28F0:4BF8
cs=0x28f0;eip=0x004bf9; 	X(PUSH(ax));	// 97418 push    ax ;~ 28F0:4BF9
cs=0x28f0;eip=0x004bfa; 	T(NEG(ax));	// 97419 neg     ax ;~ 28F0:4BFA
cs=0x28f0;eip=0x004bfc; 	T(ADC(dx, 0));	// 97420 adc     dx, 0 ;~ 28F0:4BFC
cs=0x28f0;eip=0x004bff; 	T(NEG(dx));	// 97421 neg     dx ;~ 28F0:4BFF
cs=0x28f0;eip=0x004c01; 	X(PUSH(dx));	// 97422 push    dx ;~ 28F0:4C01
cs=0x28f0;eip=0x004c02; 	X(PUSH(ax));	// 97423 push    ax ;~ 28F0:4C02
cs=0x28f0;eip=0x004c03; 	R(JMP(loc_3c136));	// 97424 jmp     short loc_3C136 ;~ 28F0:4C03
loc_3c0e5:
	// 10605 
cs=0x28f0;eip=0x004c05; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97428 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4C05
cs=0x28f0;eip=0x004c09; 	R(JG(loc_3c0f8));	// 97429 jg      short loc_3C0F8 ;~ 28F0:4C09
cs=0x28f0;eip=0x004c0b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97430 les     bx, [bp+arg_2] ;~ 28F0:4C0B
cs=0x28f0;eip=0x004c0e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1C))));	// 97431 mov     ax, es:[bx+1Ch] ;~ 28F0:4C0E
cs=0x28f0;eip=0x004c12; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E))));	// 97432 mov     dx, es:[bx+1Eh] ;~ 28F0:4C12
cs=0x28f0;eip=0x004c16; 	R(JMP(loc_3c11b));	// 97433 jmp     short loc_3C11B ;~ 28F0:4C16
loc_3c0f8:
	// 10606 
cs=0x28f0;eip=0x004c18; 	T(MOV(ax, 0x0FF9C));	// 97437 mov     ax, 0FF9Ch ;~ 28F0:4C18
cs=0x28f0;eip=0x004c1b; 	T(CWD);	// 97438 cwd ;~ 28F0:4C1B
cs=0x28f0;eip=0x004c1c; 	X(PUSH(dx));	// 97439 push    dx ;~ 28F0:4C1C
cs=0x28f0;eip=0x004c1d; 	X(PUSH(ax));	// 97440 push    ax ;~ 28F0:4C1D
cs=0x28f0;eip=0x004c1e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97441 mov     ax, [bp+arg_0] ;~ 28F0:4C1E
cs=0x28f0;eip=0x004c21; 	T(CWD);	// 97442 cwd ;~ 28F0:4C21
cs=0x28f0;eip=0x004c22; 	X(PUSH(dx));	// 97443 push    dx ;~ 28F0:4C22
cs=0x28f0;eip=0x004c23; 	X(PUSH(ax));	// 97444 push    ax ;~ 28F0:4C23
cs=0x28f0;eip=0x004c24; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97445 les     bx, [bp+arg_2] ;~ 28F0:4C24
cs=0x28f0;eip=0x004c27; 	X(PUSH(*(dw*)(raddr(es,bx+0x1E))));	// 97446 push    word ptr es:[bx+1Eh] ;~ 28F0:4C27
cs=0x28f0;eip=0x004c2b; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C))));	// 97447 push    word ptr es:[bx+1Ch] ;~ 28F0:4C2B
cs=0x28f0;eip=0x004c2f; 	R(CALLF(sub_105c2,0));	// 97448 call    sub_105C2 ;~ 28F0:4C2F
cs=0x28f0;eip=0x004c34; 	X(PUSH(dx));	// 97449 push    dx ;~ 28F0:4C34
cs=0x28f0;eip=0x004c35; 	X(PUSH(ax));	// 97450 push    ax ;~ 28F0:4C35
cs=0x28f0;eip=0x004c36; 	R(CALLF(sub_10526,0));	// 97451 call    sub_10526 ;~ 28F0:4C36
loc_3c11b:
	// 10607 
cs=0x28f0;eip=0x004c3b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97454 mov     [bp+var_4], ax ;~ 28F0:4C3B
cs=0x28f0;eip=0x004c3e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97455 mov     [bp+var_2], dx ;~ 28F0:4C3E
cs=0x28f0;eip=0x004c41; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2+2)))));	// 97456 push    word ptr [bp+arg_2+2] ;~ 28F0:4C41
cs=0x28f0;eip=0x004c44; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_2)))));	// 97457 push    word ptr [bp+arg_2] ;~ 28F0:4C44
cs=0x28f0;eip=0x004c47; 	T(NEG(ax));	// 97458 neg     ax ;~ 28F0:4C47
cs=0x28f0;eip=0x004c49; 	T(ADC(dx, 0));	// 97459 adc     dx, 0 ;~ 28F0:4C49
cs=0x28f0;eip=0x004c4c; 	T(NEG(dx));	// 97460 neg     dx ;~ 28F0:4C4C
cs=0x28f0;eip=0x004c4e; 	X(PUSH(dx));	// 97461 push    dx ;~ 28F0:4C4E
cs=0x28f0;eip=0x004c4f; 	X(PUSH(ax));	// 97462 push    ax ;~ 28F0:4C4F
cs=0x28f0;eip=0x004c50; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97463 push    [bp+var_2] ;~ 28F0:4C50
cs=0x28f0;eip=0x004c53; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97464 push    [bp+var_4] ;~ 28F0:4C53
loc_3c136:
	// 10608 
cs=0x28f0;eip=0x004c56; 	R(CALL(sub_3bbe2,0));	// 97467 call    sub_3BBE2 ;~ 28F0:4C56
cs=0x28f0;eip=0x004c59; 	T(MOV(sp, bp));	// 97468 mov     sp, bp ;~ 28F0:4C59
cs=0x28f0;eip=0x004c5b; 	X(POP(bp));	// 97469 pop     bp ;~ 28F0:4C5B
cs=0x28f0;eip=0x004c5c; 	R(RETN(6));	// 97470 retn    6 ;~ 28F0:4C5C
sub_3c13f:
	// 97478 
#undef var_4
#define var_4 -4
	// 97481 var_4           = word ptr -4 ;~ 28F0:4C5F
#undef var_2
#define var_2 -2
	// 97482 var_2           = word ptr -2 ;~ 28F0:4C5F
#undef arg_0
#define arg_0 4
	// 97483 arg_0           = word ptr  4 ;~ 28F0:4C5F
#undef arg_2
#define arg_2 6
	// 97484 arg_2           = dword ptr  6 ;~ 28F0:4C5F
cs=0x28f0;eip=0x004c5f; 	X(PUSH(bp));	// 97486 push    bp ;~ 28F0:4C5F
cs=0x28f0;eip=0x004c60; 	T(MOV(bp, sp));	// 97487 mov     bp, sp ;~ 28F0:4C60
cs=0x28f0;eip=0x004c62; 	T(SUB(sp, 4));	// 97488 sub     sp, 4 ;~ 28F0:4C62
cs=0x28f0;eip=0x004c65; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 97489 cmp     [bp+arg_0], 0 ;~ 28F0:4C65
cs=0x28f0;eip=0x004c69; 	R(JLE(loc_3c17c));	// 97490 jle     short loc_3C17C ;~ 28F0:4C69
cs=0x28f0;eip=0x004c6b; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97491 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4C6B
cs=0x28f0;eip=0x004c6f; 	R(JL(loc_3c15e));	// 97492 jl      short loc_3C15E ;~ 28F0:4C6F
cs=0x28f0;eip=0x004c71; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97493 les     bx, [bp+arg_2] ;~ 28F0:4C71
cs=0x28f0;eip=0x004c74; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97494 mov     ax, es:[bx+10h] ;~ 28F0:4C74
cs=0x28f0;eip=0x004c78; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97495 mov     dx, es:[bx+12h] ;~ 28F0:4C78
cs=0x28f0;eip=0x004c7c; 	R(JMP(loc_3c1c0));	// 97496 jmp     short loc_3C1C0 ;~ 28F0:4C7C
loc_3c15e:
	// 10609 
cs=0x28f0;eip=0x004c7e; 	T(MOV(ax, 0x64));	// 97500 mov     ax, 64h ; 'd' ;~ 28F0:4C7E
cs=0x28f0;eip=0x004c81; 	T(CWD);	// 97501 cwd ;~ 28F0:4C81
cs=0x28f0;eip=0x004c82; 	X(PUSH(dx));	// 97502 push    dx ;~ 28F0:4C82
cs=0x28f0;eip=0x004c83; 	X(PUSH(ax));	// 97503 push    ax ;~ 28F0:4C83
cs=0x28f0;eip=0x004c84; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97504 mov     ax, [bp+arg_0] ;~ 28F0:4C84
cs=0x28f0;eip=0x004c87; 	T(CWD);	// 97505 cwd ;~ 28F0:4C87
cs=0x28f0;eip=0x004c88; 	X(PUSH(dx));	// 97506 push    dx ;~ 28F0:4C88
cs=0x28f0;eip=0x004c89; 	X(PUSH(ax));	// 97507 push    ax ;~ 28F0:4C89
cs=0x28f0;eip=0x004c8a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97508 les     bx, [bp+arg_2] ;~ 28F0:4C8A
cs=0x28f0;eip=0x004c8d; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97509 push    word ptr es:[bx+12h] ;~ 28F0:4C8D
cs=0x28f0;eip=0x004c91; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97510 push    word ptr es:[bx+10h] ;~ 28F0:4C91
cs=0x28f0;eip=0x004c95; 	R(CALLF(sub_105c2,0));	// 97511 call    sub_105C2 ;~ 28F0:4C95
cs=0x28f0;eip=0x004c9a; 	R(JMP(loc_3c1b9));	// 97512 jmp     short loc_3C1B9 ;~ 28F0:4C9A
loc_3c17c:
	// 10610 
cs=0x28f0;eip=0x004c9c; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97516 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4C9C
cs=0x28f0;eip=0x004ca0; 	R(JG(loc_3c196));	// 97517 jg      short loc_3C196 ;~ 28F0:4CA0
cs=0x28f0;eip=0x004ca2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97518 les     bx, [bp+arg_2] ;~ 28F0:4CA2
cs=0x28f0;eip=0x004ca5; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97519 mov     ax, es:[bx+10h] ;~ 28F0:4CA5
cs=0x28f0;eip=0x004ca9; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97520 mov     dx, es:[bx+12h] ;~ 28F0:4CA9
cs=0x28f0;eip=0x004cad; 	T(NEG(ax));	// 97521 neg     ax ;~ 28F0:4CAD
cs=0x28f0;eip=0x004caf; 	T(ADC(dx, 0));	// 97522 adc     dx, 0 ;~ 28F0:4CAF
cs=0x28f0;eip=0x004cb2; 	T(NEG(dx));	// 97523 neg     dx ;~ 28F0:4CB2
cs=0x28f0;eip=0x004cb4; 	R(JMP(loc_3c1c0));	// 97524 jmp     short loc_3C1C0 ;~ 28F0:4CB4
loc_3c196:
	// 10611 
cs=0x28f0;eip=0x004cb6; 	T(MOV(ax, 0x0FF9C));	// 97528 mov     ax, 0FF9Ch ;~ 28F0:4CB6
cs=0x28f0;eip=0x004cb9; 	T(CWD);	// 97529 cwd ;~ 28F0:4CB9
cs=0x28f0;eip=0x004cba; 	X(PUSH(dx));	// 97530 push    dx ;~ 28F0:4CBA
cs=0x28f0;eip=0x004cbb; 	X(PUSH(ax));	// 97531 push    ax ;~ 28F0:4CBB
cs=0x28f0;eip=0x004cbc; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97532 mov     ax, [bp+arg_0] ;~ 28F0:4CBC
cs=0x28f0;eip=0x004cbf; 	T(CWD);	// 97533 cwd ;~ 28F0:4CBF
cs=0x28f0;eip=0x004cc0; 	X(PUSH(dx));	// 97534 push    dx ;~ 28F0:4CC0
cs=0x28f0;eip=0x004cc1; 	X(PUSH(ax));	// 97535 push    ax ;~ 28F0:4CC1
cs=0x28f0;eip=0x004cc2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97536 les     bx, [bp+arg_2] ;~ 28F0:4CC2
cs=0x28f0;eip=0x004cc5; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97537 push    word ptr es:[bx+12h] ;~ 28F0:4CC5
cs=0x28f0;eip=0x004cc9; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97538 push    word ptr es:[bx+10h] ;~ 28F0:4CC9
cs=0x28f0;eip=0x004ccd; 	R(CALLF(sub_105c2,0));	// 97539 call    sub_105C2 ;~ 28F0:4CCD
cs=0x28f0;eip=0x004cd2; 	T(NEG(ax));	// 97540 neg     ax ;~ 28F0:4CD2
cs=0x28f0;eip=0x004cd4; 	T(ADC(dx, 0));	// 97541 adc     dx, 0 ;~ 28F0:4CD4
cs=0x28f0;eip=0x004cd7; 	T(NEG(dx));	// 97542 neg     dx ;~ 28F0:4CD7
loc_3c1b9:
	// 10612 
cs=0x28f0;eip=0x004cd9; 	X(PUSH(dx));	// 97545 push    dx ;~ 28F0:4CD9
cs=0x28f0;eip=0x004cda; 	X(PUSH(ax));	// 97546 push    ax ;~ 28F0:4CDA
cs=0x28f0;eip=0x004cdb; 	R(CALLF(sub_10526,0));	// 97547 call    sub_10526 ;~ 28F0:4CDB
loc_3c1c0:
	// 10613 
cs=0x28f0;eip=0x004ce0; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97551 mov     [bp+var_4], ax ;~ 28F0:4CE0
cs=0x28f0;eip=0x004ce3; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97552 mov     [bp+var_2], dx ;~ 28F0:4CE3
cs=0x28f0;eip=0x004ce6; 	T(MOV(ax, 0x100));	// 97553 mov     ax, 100h ;~ 28F0:4CE6
cs=0x28f0;eip=0x004ce9; 	T(CWD);	// 97554 cwd ;~ 28F0:4CE9
cs=0x28f0;eip=0x004cea; 	X(PUSH(dx));	// 97555 push    dx ;~ 28F0:4CEA
cs=0x28f0;eip=0x004ceb; 	X(PUSH(ax));	// 97556 push    ax ;~ 28F0:4CEB
cs=0x28f0;eip=0x004cec; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 97557 mov     ax, word ptr unk_57111 ;~ 28F0:4CEC
cs=0x28f0;eip=0x004cef; 	T(CWD);	// 97558 cwd ;~ 28F0:4CEF
cs=0x28f0;eip=0x004cf0; 	X(PUSH(dx));	// 97559 push    dx ;~ 28F0:4CF0
cs=0x28f0;eip=0x004cf1; 	X(PUSH(ax));	// 97560 push    ax ;~ 28F0:4CF1
cs=0x28f0;eip=0x004cf2; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97561 push    [bp+var_2] ;~ 28F0:4CF2
cs=0x28f0;eip=0x004cf5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97562 push    [bp+var_4] ;~ 28F0:4CF5
cs=0x28f0;eip=0x004cf8; 	R(CALLF(sub_105c2,0));	// 97563 call    sub_105C2 ;~ 28F0:4CF8
cs=0x28f0;eip=0x004cfd; 	X(PUSH(dx));	// 97564 push    dx ;~ 28F0:4CFD
cs=0x28f0;eip=0x004cfe; 	X(PUSH(ax));	// 97565 push    ax ;~ 28F0:4CFE
cs=0x28f0;eip=0x004cff; 	R(CALLF(sub_10526,0));	// 97566 call    sub_10526 ;~ 28F0:4CFF
cs=0x28f0;eip=0x004d04; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97567 mov     [bp+var_4], ax ;~ 28F0:4D04
cs=0x28f0;eip=0x004d07; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97568 mov     [bp+var_2], dx ;~ 28F0:4D07
cs=0x28f0;eip=0x004d0a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97569 les     bx, [bp+arg_2] ;~ 28F0:4D0A
cs=0x28f0;eip=0x004d0d; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 97570 add     es:[bx], ax ;~ 28F0:4D0D
cs=0x28f0;eip=0x004d10; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 97571 adc     es:[bx+2], dx ;~ 28F0:4D10
cs=0x28f0;eip=0x004d14; 	T(MOV(sp, bp));	// 97572 mov     sp, bp ;~ 28F0:4D14
cs=0x28f0;eip=0x004d16; 	X(POP(bp));	// 97573 pop     bp ;~ 28F0:4D16
cs=0x28f0;eip=0x004d17; 	R(RETN(6));	// 97574 retn    6 ;~ 28F0:4D17
sub_3c1fa:
	// 97582 
#undef var_4
#define var_4 -4
	// 97585 var_4           = word ptr -4 ;~ 28F0:4D1A
#undef var_2
#define var_2 -2
	// 97586 var_2           = word ptr -2 ;~ 28F0:4D1A
#undef arg_0
#define arg_0 4
	// 97587 arg_0           = word ptr  4 ;~ 28F0:4D1A
#undef arg_2
#define arg_2 6
	// 97588 arg_2           = dword ptr  6 ;~ 28F0:4D1A
cs=0x28f0;eip=0x004d1a; 	X(PUSH(bp));	// 97590 push    bp ;~ 28F0:4D1A
cs=0x28f0;eip=0x004d1b; 	T(MOV(bp, sp));	// 97591 mov     bp, sp ;~ 28F0:4D1B
cs=0x28f0;eip=0x004d1d; 	T(SUB(sp, 4));	// 97592 sub     sp, 4 ;~ 28F0:4D1D
cs=0x28f0;eip=0x004d20; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 97593 cmp     [bp+arg_0], 0 ;~ 28F0:4D20
cs=0x28f0;eip=0x004d24; 	R(JLE(loc_3c237));	// 97594 jle     short loc_3C237 ;~ 28F0:4D24
cs=0x28f0;eip=0x004d26; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x64));	// 97595 cmp     [bp+arg_0], 64h ; 'd' ;~ 28F0:4D26
cs=0x28f0;eip=0x004d2a; 	R(JL(loc_3c219));	// 97596 jl      short loc_3C219 ;~ 28F0:4D2A
cs=0x28f0;eip=0x004d2c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97597 les     bx, [bp+arg_2] ;~ 28F0:4D2C
cs=0x28f0;eip=0x004d2f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97598 mov     ax, es:[bx+10h] ;~ 28F0:4D2F
cs=0x28f0;eip=0x004d33; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97599 mov     dx, es:[bx+12h] ;~ 28F0:4D33
cs=0x28f0;eip=0x004d37; 	R(JMP(loc_3c27b));	// 97600 jmp     short loc_3C27B ;~ 28F0:4D37
loc_3c219:
	// 10614 
cs=0x28f0;eip=0x004d39; 	T(MOV(ax, 0x64));	// 97604 mov     ax, 64h ; 'd' ;~ 28F0:4D39
cs=0x28f0;eip=0x004d3c; 	T(CWD);	// 97605 cwd ;~ 28F0:4D3C
cs=0x28f0;eip=0x004d3d; 	X(PUSH(dx));	// 97606 push    dx ;~ 28F0:4D3D
cs=0x28f0;eip=0x004d3e; 	X(PUSH(ax));	// 97607 push    ax ;~ 28F0:4D3E
cs=0x28f0;eip=0x004d3f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97608 mov     ax, [bp+arg_0] ;~ 28F0:4D3F
cs=0x28f0;eip=0x004d42; 	T(CWD);	// 97609 cwd ;~ 28F0:4D42
cs=0x28f0;eip=0x004d43; 	X(PUSH(dx));	// 97610 push    dx ;~ 28F0:4D43
cs=0x28f0;eip=0x004d44; 	X(PUSH(ax));	// 97611 push    ax ;~ 28F0:4D44
cs=0x28f0;eip=0x004d45; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97612 les     bx, [bp+arg_2] ;~ 28F0:4D45
cs=0x28f0;eip=0x004d48; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97613 push    word ptr es:[bx+12h] ;~ 28F0:4D48
cs=0x28f0;eip=0x004d4c; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97614 push    word ptr es:[bx+10h] ;~ 28F0:4D4C
cs=0x28f0;eip=0x004d50; 	R(CALLF(sub_105c2,0));	// 97615 call    sub_105C2 ;~ 28F0:4D50
cs=0x28f0;eip=0x004d55; 	R(JMP(loc_3c274));	// 97616 jmp     short loc_3C274 ;~ 28F0:4D55
loc_3c237:
	// 10615 
cs=0x28f0;eip=0x004d57; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x0FF9C));	// 97620 cmp     [bp+arg_0], 0FF9Ch ;~ 28F0:4D57
cs=0x28f0;eip=0x004d5b; 	R(JG(loc_3c251));	// 97621 jg      short loc_3C251 ;~ 28F0:4D5B
cs=0x28f0;eip=0x004d5d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97622 les     bx, [bp+arg_2] ;~ 28F0:4D5D
cs=0x28f0;eip=0x004d60; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x10))));	// 97623 mov     ax, es:[bx+10h] ;~ 28F0:4D60
cs=0x28f0;eip=0x004d64; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x12))));	// 97624 mov     dx, es:[bx+12h] ;~ 28F0:4D64
cs=0x28f0;eip=0x004d68; 	T(NEG(ax));	// 97625 neg     ax ;~ 28F0:4D68
cs=0x28f0;eip=0x004d6a; 	T(ADC(dx, 0));	// 97626 adc     dx, 0 ;~ 28F0:4D6A
cs=0x28f0;eip=0x004d6d; 	T(NEG(dx));	// 97627 neg     dx ;~ 28F0:4D6D
cs=0x28f0;eip=0x004d6f; 	R(JMP(loc_3c27b));	// 97628 jmp     short loc_3C27B ;~ 28F0:4D6F
loc_3c251:
	// 10616 
cs=0x28f0;eip=0x004d71; 	T(MOV(ax, 0x0FF9C));	// 97632 mov     ax, 0FF9Ch ;~ 28F0:4D71
cs=0x28f0;eip=0x004d74; 	T(CWD);	// 97633 cwd ;~ 28F0:4D74
cs=0x28f0;eip=0x004d75; 	X(PUSH(dx));	// 97634 push    dx ;~ 28F0:4D75
cs=0x28f0;eip=0x004d76; 	X(PUSH(ax));	// 97635 push    ax ;~ 28F0:4D76
cs=0x28f0;eip=0x004d77; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 97636 mov     ax, [bp+arg_0] ;~ 28F0:4D77
cs=0x28f0;eip=0x004d7a; 	T(CWD);	// 97637 cwd ;~ 28F0:4D7A
cs=0x28f0;eip=0x004d7b; 	X(PUSH(dx));	// 97638 push    dx ;~ 28F0:4D7B
cs=0x28f0;eip=0x004d7c; 	X(PUSH(ax));	// 97639 push    ax ;~ 28F0:4D7C
cs=0x28f0;eip=0x004d7d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97640 les     bx, [bp+arg_2] ;~ 28F0:4D7D
cs=0x28f0;eip=0x004d80; 	X(PUSH(*(dw*)(raddr(es,bx+0x12))));	// 97641 push    word ptr es:[bx+12h] ;~ 28F0:4D80
cs=0x28f0;eip=0x004d84; 	X(PUSH(*(dw*)(raddr(es,bx+0x10))));	// 97642 push    word ptr es:[bx+10h] ;~ 28F0:4D84
cs=0x28f0;eip=0x004d88; 	R(CALLF(sub_105c2,0));	// 97643 call    sub_105C2 ;~ 28F0:4D88
cs=0x28f0;eip=0x004d8d; 	T(NEG(ax));	// 97644 neg     ax ;~ 28F0:4D8D
cs=0x28f0;eip=0x004d8f; 	T(ADC(dx, 0));	// 97645 adc     dx, 0 ;~ 28F0:4D8F
cs=0x28f0;eip=0x004d92; 	T(NEG(dx));	// 97646 neg     dx ;~ 28F0:4D92
loc_3c274:
	// 10617 
cs=0x28f0;eip=0x004d94; 	X(PUSH(dx));	// 97649 push    dx ;~ 28F0:4D94
cs=0x28f0;eip=0x004d95; 	X(PUSH(ax));	// 97650 push    ax ;~ 28F0:4D95
cs=0x28f0;eip=0x004d96; 	R(CALLF(sub_10526,0));	// 97651 call    sub_10526 ;~ 28F0:4D96
loc_3c27b:
	// 10618 
cs=0x28f0;eip=0x004d9b; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97655 mov     [bp+var_4], ax ;~ 28F0:4D9B
cs=0x28f0;eip=0x004d9e; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97656 mov     [bp+var_2], dx ;~ 28F0:4D9E
cs=0x28f0;eip=0x004da1; 	T(MOV(ax, 0x100));	// 97657 mov     ax, 100h ;~ 28F0:4DA1
cs=0x28f0;eip=0x004da4; 	T(CWD);	// 97658 cwd ;~ 28F0:4DA4
cs=0x28f0;eip=0x004da5; 	X(PUSH(dx));	// 97659 push    dx ;~ 28F0:4DA5
cs=0x28f0;eip=0x004da6; 	X(PUSH(ax));	// 97660 push    ax ;~ 28F0:4DA6
cs=0x28f0;eip=0x004da7; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 97661 mov     ax, word ptr unk_57111 ;~ 28F0:4DA7
cs=0x28f0;eip=0x004daa; 	T(CWD);	// 97662 cwd ;~ 28F0:4DAA
cs=0x28f0;eip=0x004dab; 	X(PUSH(dx));	// 97663 push    dx ;~ 28F0:4DAB
cs=0x28f0;eip=0x004dac; 	X(PUSH(ax));	// 97664 push    ax ;~ 28F0:4DAC
cs=0x28f0;eip=0x004dad; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 97665 push    [bp+var_2] ;~ 28F0:4DAD
cs=0x28f0;eip=0x004db0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 97666 push    [bp+var_4] ;~ 28F0:4DB0
cs=0x28f0;eip=0x004db3; 	R(CALLF(sub_105c2,0));	// 97667 call    sub_105C2 ;~ 28F0:4DB3
cs=0x28f0;eip=0x004db8; 	X(PUSH(dx));	// 97668 push    dx ;~ 28F0:4DB8
cs=0x28f0;eip=0x004db9; 	X(PUSH(ax));	// 97669 push    ax ;~ 28F0:4DB9
cs=0x28f0;eip=0x004dba; 	R(CALLF(sub_10526,0));	// 97670 call    sub_10526 ;~ 28F0:4DBA
cs=0x28f0;eip=0x004dbf; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97671 mov     [bp+var_4], ax ;~ 28F0:4DBF
cs=0x28f0;eip=0x004dc2; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97672 mov     [bp+var_2], dx ;~ 28F0:4DC2
cs=0x28f0;eip=0x004dc5; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_2))));	// 97673 les     bx, [bp+arg_2] ;~ 28F0:4DC5
cs=0x28f0;eip=0x004dc8; 	X(ADD(*(dw*)(raddr(es,bx+4)), ax));	// 97674 add     es:[bx+4], ax ;~ 28F0:4DC8
cs=0x28f0;eip=0x004dcc; 	X(ADC(*(dw*)(raddr(es,bx+6)), dx));	// 97675 adc     es:[bx+6], dx ;~ 28F0:4DCC
cs=0x28f0;eip=0x004dd0; 	T(MOV(sp, bp));	// 97676 mov     sp, bp ;~ 28F0:4DD0
cs=0x28f0;eip=0x004dd2; 	X(POP(bp));	// 97677 pop     bp ;~ 28F0:4DD2
cs=0x28f0;eip=0x004dd3; 	R(RETN(6));	// 97678 retn    6 ;~ 28F0:4DD3
sub_3c2b6:
	// 97686 
#undef arg_0
#define arg_0 4
	// 97689 arg_0           = dword ptr  4 ;~ 28F0:4DD6
cs=0x28f0;eip=0x004dd6; 	X(PUSH(bp));	// 97691 push    bp ;~ 28F0:4DD6
cs=0x28f0;eip=0x004dd7; 	T(MOV(bp, sp));	// 97692 mov     bp, sp ;~ 28F0:4DD7
cs=0x28f0;eip=0x004dd9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 97693 les     bx, [bp+arg_0] ;~ 28F0:4DD9
cs=0x28f0;eip=0x004ddc; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 97694 mov     ax, es:[bx] ;~ 28F0:4DDC
cs=0x28f0;eip=0x004ddf; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 97695 mov     dx, es:[bx+2] ;~ 28F0:4DDF
cs=0x28f0;eip=0x004de3; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), dx));	// 97696 cmp     es:[bx+0Ah], dx ;~ 28F0:4DE3
cs=0x28f0;eip=0x004de7; 	R(JG(loc_3c2ed));	// 97697 jg      short loc_3C2ED ;~ 28F0:4DE7
cs=0x28f0;eip=0x004de9; 	R(JL(loc_3c2d1));	// 97698 jl      short loc_3C2D1 ;~ 28F0:4DE9
cs=0x28f0;eip=0x004deb; 	T(CMP(*(dw*)(raddr(es,bx+8)), ax));	// 97699 cmp     es:[bx+8], ax ;~ 28F0:4DEB
cs=0x28f0;eip=0x004def; 	R(JA(loc_3c2ed));	// 97700 ja      short loc_3C2ED ;~ 28F0:4DEF
loc_3c2d1:
	// 10619 
cs=0x28f0;eip=0x004df1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 97703 mov     ax, es:[bx+0Ch] ;~ 28F0:4DF1
cs=0x28f0;eip=0x004df5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 97704 mov     dx, es:[bx+0Eh] ;~ 28F0:4DF5
cs=0x28f0;eip=0x004df9; 	T(SUB(ax, *(dw*)(raddr(es,bx+8))));	// 97705 sub     ax, es:[bx+8] ;~ 28F0:4DF9
cs=0x28f0;eip=0x004dfd; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x0A))));	// 97706 sbb     dx, es:[bx+0Ah] ;~ 28F0:4DFD
loc_3c2e1:
	// 10620 
cs=0x28f0;eip=0x004e01; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 97709 add     es:[bx], ax ;~ 28F0:4E01
cs=0x28f0;eip=0x004e04; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 97710 adc     es:[bx+2], dx ;~ 28F0:4E04
cs=0x28f0;eip=0x004e08; 	T(MOV(ax, 1));	// 97711 mov     ax, 1 ;~ 28F0:4E08
cs=0x28f0;eip=0x004e0b; 	R(JMP(loc_3c316));	// 97712 jmp     short loc_3C316 ;~ 28F0:4E0B
loc_3c2ed:
	// 10621 
cs=0x28f0;eip=0x004e0d; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 97717 mov     ax, es:[bx] ;~ 28F0:4E0D
cs=0x28f0;eip=0x004e10; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 97718 mov     dx, es:[bx+2] ;~ 28F0:4E10
cs=0x28f0;eip=0x004e14; 	T(CMP(*(dw*)(raddr(es,bx+0x0E)), dx));	// 97719 cmp     es:[bx+0Eh], dx ;~ 28F0:4E14
cs=0x28f0;eip=0x004e18; 	R(JL(loc_3c314));	// 97720 jl      short loc_3C314 ;~ 28F0:4E18
cs=0x28f0;eip=0x004e1a; 	R(JG(loc_3c302));	// 97721 jg      short loc_3C302 ;~ 28F0:4E1A
cs=0x28f0;eip=0x004e1c; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), ax));	// 97722 cmp     es:[bx+0Ch], ax ;~ 28F0:4E1C
cs=0x28f0;eip=0x004e20; 	R(JBE(loc_3c314));	// 97723 jbe     short loc_3C314 ;~ 28F0:4E20
loc_3c302:
	// 10622 
cs=0x28f0;eip=0x004e22; 	T(MOV(ax, *(dw*)(raddr(es,bx+8))));	// 97726 mov     ax, es:[bx+8] ;~ 28F0:4E22
cs=0x28f0;eip=0x004e26; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0A))));	// 97727 mov     dx, es:[bx+0Ah] ;~ 28F0:4E26
cs=0x28f0;eip=0x004e2a; 	T(SUB(ax, *(dw*)(raddr(es,bx+0x0C))));	// 97728 sub     ax, es:[bx+0Ch] ;~ 28F0:4E2A
cs=0x28f0;eip=0x004e2e; 	T(SBB(dx, *(dw*)(raddr(es,bx+0x0E))));	// 97729 sbb     dx, es:[bx+0Eh] ;~ 28F0:4E2E
cs=0x28f0;eip=0x004e32; 	R(JMP(loc_3c2e1));	// 97730 jmp     short loc_3C2E1 ;~ 28F0:4E32
loc_3c314:
	// 10623 
cs=0x28f0;eip=0x004e34; 	T(SUB(ax, ax));	// 97735 sub     ax, ax ;~ 28F0:4E34
loc_3c316:
	// 10624 
cs=0x28f0;eip=0x004e36; 	X(POP(bp));	// 97738 pop     bp ;~ 28F0:4E36
cs=0x28f0;eip=0x004e37; 	R(RETN(4));	// 97739 retn    4 ;~ 28F0:4E37
sub_3c31a:
	// 97747 
#undef var_1e
#define var_1e -0x1E
	// 97749 var_1E          = byte ptr -1Eh ;~ 28F0:4E3A
#undef var_c
#define var_c -0x0C
	// 97750 var_C           = word ptr -0Ch ;~ 28F0:4E3A
#undef var_a
#define var_a -0x0A
	// 97751 var_A           = word ptr -0Ah ;~ 28F0:4E3A
#undef var_8
#define var_8 -8
	// 97752 var_8           = word ptr -8 ;~ 28F0:4E3A
#undef var_6
#define var_6 -6
	// 97753 var_6           = word ptr -6 ;~ 28F0:4E3A
#undef var_4
#define var_4 -4
	// 97754 var_4           = word ptr -4 ;~ 28F0:4E3A
#undef var_2
#define var_2 -2
	// 97755 var_2           = word ptr -2 ;~ 28F0:4E3A
#undef arg_0
#define arg_0 4
	// 97756 arg_0           = word ptr  4 ;~ 28F0:4E3A
#undef arg_2
#define arg_2 6
	// 97757 arg_2           = word ptr  6 ;~ 28F0:4E3A
#undef arg_4
#define arg_4 8
	// 97758 arg_4           = word ptr  8 ;~ 28F0:4E3A
#undef arg_6
#define arg_6 0x0A
	// 97759 arg_6           = dword ptr  0Ah ;~ 28F0:4E3A
#undef arg_a
#define arg_a 0x0E
	// 97760 arg_A           = dword ptr  0Eh ;~ 28F0:4E3A
cs=0x28f0;eip=0x004e3a; 	X(PUSH(bp));	// 97762 push    bp ;~ 28F0:4E3A
cs=0x28f0;eip=0x004e3b; 	T(MOV(bp, sp));	// 97763 mov     bp, sp ;~ 28F0:4E3B
cs=0x28f0;eip=0x004e3d; 	T(SUB(sp, 0x1E));	// 97764 sub     sp, 1Eh ;~ 28F0:4E3D
cs=0x28f0;eip=0x004e40; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_a))));	// 97765 les     bx, [bp+arg_A] ;~ 28F0:4E40
cs=0x28f0;eip=0x004e43; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 97766 mov     ax, es:[bx] ;~ 28F0:4E43
cs=0x28f0;eip=0x004e46; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 97767 mov     dx, es:[bx+2] ;~ 28F0:4E46
cs=0x28f0;eip=0x004e4a; 	T(MOV(dh, dl));	// 97768 mov     dh, dl ;~ 28F0:4E4A
cs=0x28f0;eip=0x004e4c; 	T(MOV(dl, ah));	// 97769 mov     dl, ah ;~ 28F0:4E4C
cs=0x28f0;eip=0x004e4e; 	T(MOV(ah, al));	// 97770 mov     ah, al ;~ 28F0:4E4E
cs=0x28f0;eip=0x004e50; 	T(SUB(al, al));	// 97771 sub     al, al ;~ 28F0:4E50
cs=0x28f0;eip=0x004e52; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 97772 mov     [bp+var_4], ax ;~ 28F0:4E52
cs=0x28f0;eip=0x004e55; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 97773 mov     [bp+var_2], dx ;~ 28F0:4E55
cs=0x28f0;eip=0x004e58; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 97774 mov     ax, es:[bx+20h] ;~ 28F0:4E58
cs=0x28f0;eip=0x004e5c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 97775 mov     dx, es:[bx+22h] ;~ 28F0:4E5C
cs=0x28f0;eip=0x004e60; 	T(MOV(dh, dl));	// 97776 mov     dh, dl ;~ 28F0:4E60
cs=0x28f0;eip=0x004e62; 	T(MOV(dl, ah));	// 97777 mov     dl, ah ;~ 28F0:4E62
cs=0x28f0;eip=0x004e64; 	T(MOV(ah, al));	// 97778 mov     ah, al ;~ 28F0:4E64
cs=0x28f0;eip=0x004e66; 	T(SUB(al, al));	// 97779 sub     al, al ;~ 28F0:4E66
cs=0x28f0;eip=0x004e68; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 97780 mov     [bp+var_C], ax ;~ 28F0:4E68
cs=0x28f0;eip=0x004e6b; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), dx));	// 97781 mov     [bp+var_A], dx ;~ 28F0:4E6B
cs=0x28f0;eip=0x004e6e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x40))));	// 97782 mov     ax, es:[bx+40h] ;~ 28F0:4E6E
cs=0x28f0;eip=0x004e72; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x42))));	// 97783 mov     dx, es:[bx+42h] ;~ 28F0:4E72
cs=0x28f0;eip=0x004e76; 	T(MOV(dh, dl));	// 97784 mov     dh, dl ;~ 28F0:4E76
cs=0x28f0;eip=0x004e78; 	T(MOV(dl, ah));	// 97785 mov     dl, ah ;~ 28F0:4E78
cs=0x28f0;eip=0x004e7a; 	T(MOV(ah, al));	// 97786 mov     ah, al ;~ 28F0:4E7A
cs=0x28f0;eip=0x004e7c; 	T(SUB(al, al));	// 97787 sub     al, al ;~ 28F0:4E7C
cs=0x28f0;eip=0x004e7e; 	T(NEG(ax));	// 97788 neg     ax ;~ 28F0:4E7E
cs=0x28f0;eip=0x004e80; 	T(ADC(dx, 0));	// 97789 adc     dx, 0 ;~ 28F0:4E80
cs=0x28f0;eip=0x004e83; 	T(NEG(dx));	// 97790 neg     dx ;~ 28F0:4E83
cs=0x28f0;eip=0x004e85; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 97791 mov     [bp+var_8], ax ;~ 28F0:4E85
cs=0x28f0;eip=0x004e88; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), dx));	// 97792 mov     [bp+var_6], dx ;~ 28F0:4E88
cs=0x28f0;eip=0x004e8b; 	T(ax = bp+var_1e);	// 97793 lea     ax, [bp+var_1E] ;~ 28F0:4E8B
cs=0x28f0;eip=0x004e8e; 	X(PUSH(ax));	// 97794 push    ax ;~ 28F0:4E8E
cs=0x28f0;eip=0x004e8f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 97795 push    [bp+arg_0] ;~ 28F0:4E8F
cs=0x28f0;eip=0x004e92; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 97796 push    [bp+arg_2] ;~ 28F0:4E92
cs=0x28f0;eip=0x004e95; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 97797 push    [bp+arg_4] ;~ 28F0:4E95
cs=0x28f0;eip=0x004e98; 	R(CALLF(sub_24872,0));	// 97798 call    sub_24872 ;~ 28F0:4E98
cs=0x28f0;eip=0x004e9d; 	T(ax = bp+var_c);	// 97799 lea     ax, [bp+var_C] ;~ 28F0:4E9D
cs=0x28f0;eip=0x004ea0; 	X(PUSH(ax));	// 97800 push    ax ;~ 28F0:4EA0
cs=0x28f0;eip=0x004ea1; 	T(ax = bp+var_1e);	// 97801 lea     ax, [bp+var_1E] ;~ 28F0:4EA1
cs=0x28f0;eip=0x004ea4; 	X(PUSH(ax));	// 97802 push    ax ;~ 28F0:4EA4
cs=0x28f0;eip=0x004ea5; 	R(CALLF(sub_2b372,0));	// 97803 call    sub_2B372 ;~ 28F0:4EA5
cs=0x28f0;eip=0x004eaa; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 97804 mov     ax, [bp+var_4] ;~ 28F0:4EAA
cs=0x28f0;eip=0x004ead; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 97805 mov     dx, [bp+var_2] ;~ 28F0:4EAD
cs=0x28f0;eip=0x004eb0; 	T(MOV(cl, 8));	// 97806 mov     cl, 8 ;~ 28F0:4EB0
cs=0x28f0;eip=0x004eb2; 	R(CALLF(sub_10240,0));	// 97807 call    sub_10240 ;~ 28F0:4EB2
cs=0x28f0;eip=0x004eb7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 97808 les     bx, [bp+arg_6] ;~ 28F0:4EB7
cs=0x28f0;eip=0x004eba; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 97809 mov     es:[bx], ax ;~ 28F0:4EBA
cs=0x28f0;eip=0x004ebd; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 97810 mov     es:[bx+2], dx ;~ 28F0:4EBD
cs=0x28f0;eip=0x004ec1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 97811 mov     ax, [bp+var_C] ;~ 28F0:4EC1
cs=0x28f0;eip=0x004ec4; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_a))));	// 97812 mov     dx, [bp+var_A] ;~ 28F0:4EC4
cs=0x28f0;eip=0x004ec7; 	T(MOV(cl, 8));	// 97813 mov     cl, 8 ;~ 28F0:4EC7
cs=0x28f0;eip=0x004ec9; 	R(CALLF(sub_10240,0));	// 97814 call    sub_10240 ;~ 28F0:4EC9
cs=0x28f0;eip=0x004ece; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 97815 les     bx, [bp+arg_6] ;~ 28F0:4ECE
cs=0x28f0;eip=0x004ed1; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 97816 mov     es:[bx+20h], ax ;~ 28F0:4ED1
cs=0x28f0;eip=0x004ed5; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 97817 mov     es:[bx+22h], dx ;~ 28F0:4ED5
cs=0x28f0;eip=0x004ed9; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 97818 mov     ax, [bp+var_8] ;~ 28F0:4ED9
cs=0x28f0;eip=0x004edc; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_6))));	// 97819 mov     dx, [bp+var_6] ;~ 28F0:4EDC
cs=0x28f0;eip=0x004edf; 	T(MOV(cl, 8));	// 97820 mov     cl, 8 ;~ 28F0:4EDF
cs=0x28f0;eip=0x004ee1; 	R(CALLF(sub_10240,0));	// 97821 call    sub_10240 ;~ 28F0:4EE1
cs=0x28f0;eip=0x004ee6; 	T(NEG(ax));	// 97822 neg     ax ;~ 28F0:4EE6
cs=0x28f0;eip=0x004ee8; 	T(ADC(dx, 0));	// 97823 adc     dx, 0 ;~ 28F0:4EE8
cs=0x28f0;eip=0x004eeb; 	T(NEG(dx));	// 97824 neg     dx ;~ 28F0:4EEB
cs=0x28f0;eip=0x004eed; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_6))));	// 97825 les     bx, [bp+arg_6] ;~ 28F0:4EED
cs=0x28f0;eip=0x004ef0; 	X(MOV(*(dw*)(raddr(es,bx+0x40)), ax));	// 97826 mov     es:[bx+40h], ax ;~ 28F0:4EF0
cs=0x28f0;eip=0x004ef4; 	X(MOV(*(dw*)(raddr(es,bx+0x42)), dx));	// 97827 mov     es:[bx+42h], dx ;~ 28F0:4EF4
cs=0x28f0;eip=0x004ef8; 	T(MOV(sp, bp));	// 97828 mov     sp, bp ;~ 28F0:4EF8
cs=0x28f0;eip=0x004efa; 	X(POP(bp));	// 97829 pop     bp ;~ 28F0:4EFA
cs=0x28f0;eip=0x004efb; 	R(RETN(0x0E));	// 97830 retn    0Eh ;~ 28F0:4EFB
sub_3c3de:
	// 97838 
#undef arg_0
#define arg_0 4
	// 97840 arg_0           = word ptr  4 ;~ 28F0:4EFE
#undef arg_2
#define arg_2 6
	// 97841 arg_2           = word ptr  6 ;~ 28F0:4EFE
#undef arg_4
#define arg_4 8
	// 97842 arg_4           = dword ptr  8 ;~ 28F0:4EFE
#undef arg_8
#define arg_8 0x0C
	// 97843 arg_8           = dword ptr  0Ch ;~ 28F0:4EFE
cs=0x28f0;eip=0x004efe; 	X(PUSH(bp));	// 97845 push    bp ;~ 28F0:4EFE
cs=0x28f0;eip=0x004eff; 	T(MOV(bp, sp));	// 97846 mov     bp, sp ;~ 28F0:4EFF
cs=0x28f0;eip=0x004f01; 	T(SUB(sp, 4));	// 97847 sub     sp, 4 ;~ 28F0:4F01
cs=0x28f0;eip=0x004f04; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x2D0));	// 97848 cmp     [bp+arg_0], 2D0h ;~ 28F0:4F04
cs=0x28f0;eip=0x004f09; 	R(JNZ(loc_3c3f2));	// 97849 jnz     short loc_3C3F2 ;~ 28F0:4F09
cs=0x28f0;eip=0x004f0b; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0x2C8));	// 97850 mov     [bp+arg_0], 2C8h ;~ 28F0:4F0B
cs=0x28f0;eip=0x004f10; 	R(JMP(loc_3c3fe));	// 97851 jmp     short loc_3C3FE ;~ 28F0:4F10
loc_3c3f2:
	// 10625 
cs=0x28f0;eip=0x004f12; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x870));	// 97855 cmp     [bp+arg_0], 870h ;~ 28F0:4F12
cs=0x28f0;eip=0x004f17; 	R(JNZ(loc_3c3fe));	// 97856 jnz     short loc_3C3FE ;~ 28F0:4F17
cs=0x28f0;eip=0x004f19; 	X(MOV(*(dw*)(raddr(ss,bp+arg_0)), 0x878));	// 97857 mov     [bp+arg_0], 878h ;~ 28F0:4F19
loc_3c3fe:
	// 10626 
cs=0x28f0;eip=0x004f1e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 97861 push    [bp+arg_0] ;~ 28F0:4F1E
cs=0x28f0;eip=0x004f21; 	R(CALLF(sub_27c9e,0));	// 97862 call    sub_27C9E ;~ 28F0:4F21
cs=0x28f0;eip=0x004f26; 	X(PUSH(dx));	// 97863 push    dx ;~ 28F0:4F26
cs=0x28f0;eip=0x004f27; 	X(PUSH(ax));	// 97864 push    ax ;~ 28F0:4F27
cs=0x28f0;eip=0x004f28; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 97865 push    [bp+arg_0] ;~ 28F0:4F28
cs=0x28f0;eip=0x004f2b; 	R(CALLF(sub_27cb4,0));	// 97866 call    sub_27CB4 ;~ 28F0:4F2B
cs=0x28f0;eip=0x004f30; 	X(PUSH(dx));	// 97867 push    dx ;~ 28F0:4F30
cs=0x28f0;eip=0x004f31; 	X(PUSH(ax));	// 97868 push    ax ;~ 28F0:4F31
cs=0x28f0;eip=0x004f32; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 97869 push    [bp+arg_2] ;~ 28F0:4F32
cs=0x28f0;eip=0x004f35; 	R(CALLF(sub_27cb4,0));	// 97870 call    sub_27CB4 ;~ 28F0:4F35
cs=0x28f0;eip=0x004f3a; 	X(PUSH(dx));	// 97871 push    dx ;~ 28F0:4F3A
cs=0x28f0;eip=0x004f3b; 	X(PUSH(ax));	// 97872 push    ax ;~ 28F0:4F3B
cs=0x28f0;eip=0x004f3c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97873 les     bx, [bp+arg_8] ;~ 28F0:4F3C
cs=0x28f0;eip=0x004f3f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x40))));	// 97874 mov     ax, es:[bx+40h] ;~ 28F0:4F3F
cs=0x28f0;eip=0x004f43; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x42))));	// 97875 mov     dx, es:[bx+42h] ;~ 28F0:4F43
cs=0x28f0;eip=0x004f47; 	T(MOV(cl, 8));	// 97876 mov     cl, 8 ;~ 28F0:4F47
cs=0x28f0;eip=0x004f49; 	R(CALLF(sub_10240,0));	// 97877 call    sub_10240 ;~ 28F0:4F49
cs=0x28f0;eip=0x004f4e; 	X(PUSH(dx));	// 97878 push    dx ;~ 28F0:4F4E
cs=0x28f0;eip=0x004f4f; 	X(PUSH(ax));	// 97879 push    ax ;~ 28F0:4F4F
cs=0x28f0;eip=0x004f50; 	R(CALLF(sub_105c2,0));	// 97880 call    sub_105C2 ;~ 28F0:4F50
cs=0x28f0;eip=0x004f55; 	X(PUSH(dx));	// 97881 push    dx ;~ 28F0:4F55
cs=0x28f0;eip=0x004f56; 	X(PUSH(ax));	// 97882 push    ax ;~ 28F0:4F56
cs=0x28f0;eip=0x004f57; 	R(CALLF(sub_10526,0));	// 97883 call    sub_10526 ;~ 28F0:4F57
cs=0x28f0;eip=0x004f5c; 	X(PUSH(dx));	// 97884 push    dx ;~ 28F0:4F5C
cs=0x28f0;eip=0x004f5d; 	X(PUSH(ax));	// 97885 push    ax ;~ 28F0:4F5D
cs=0x28f0;eip=0x004f5e; 	R(CALLF(sub_105c2,0));	// 97886 call    sub_105C2 ;~ 28F0:4F5E
cs=0x28f0;eip=0x004f63; 	T(MOV(cl, 8));	// 97887 mov     cl, 8 ;~ 28F0:4F63
cs=0x28f0;eip=0x004f65; 	R(CALLF(sub_10240,0));	// 97888 call    sub_10240 ;~ 28F0:4F65
cs=0x28f0;eip=0x004f6a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97889 les     bx, [bp+arg_4] ;~ 28F0:4F6A
cs=0x28f0;eip=0x004f6d; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 97890 mov     es:[bx], ax ;~ 28F0:4F6D
cs=0x28f0;eip=0x004f70; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 97891 mov     es:[bx+2], dx ;~ 28F0:4F70
cs=0x28f0;eip=0x004f74; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 97892 push    [bp+arg_0] ;~ 28F0:4F74
cs=0x28f0;eip=0x004f77; 	R(CALLF(sub_27c9e,0));	// 97893 call    sub_27C9E ;~ 28F0:4F77
cs=0x28f0;eip=0x004f7c; 	X(PUSH(dx));	// 97894 push    dx ;~ 28F0:4F7C
cs=0x28f0;eip=0x004f7d; 	X(PUSH(ax));	// 97895 push    ax ;~ 28F0:4F7D
cs=0x28f0;eip=0x004f7e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 97896 push    [bp+arg_0] ;~ 28F0:4F7E
cs=0x28f0;eip=0x004f81; 	R(CALLF(sub_27cb4,0));	// 97897 call    sub_27CB4 ;~ 28F0:4F81
cs=0x28f0;eip=0x004f86; 	X(PUSH(dx));	// 97898 push    dx ;~ 28F0:4F86
cs=0x28f0;eip=0x004f87; 	X(PUSH(ax));	// 97899 push    ax ;~ 28F0:4F87
cs=0x28f0;eip=0x004f88; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 97900 push    [bp+arg_2] ;~ 28F0:4F88
cs=0x28f0;eip=0x004f8b; 	R(CALLF(sub_27c9e,0));	// 97901 call    sub_27C9E ;~ 28F0:4F8B
cs=0x28f0;eip=0x004f90; 	X(PUSH(dx));	// 97902 push    dx ;~ 28F0:4F90
cs=0x28f0;eip=0x004f91; 	X(PUSH(ax));	// 97903 push    ax ;~ 28F0:4F91
cs=0x28f0;eip=0x004f92; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97904 les     bx, [bp+arg_8] ;~ 28F0:4F92
cs=0x28f0;eip=0x004f95; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 97905 mov     ax, es:[bx+20h] ;~ 28F0:4F95
cs=0x28f0;eip=0x004f99; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 97906 mov     dx, es:[bx+22h] ;~ 28F0:4F99
cs=0x28f0;eip=0x004f9d; 	T(MOV(cl, 8));	// 97907 mov     cl, 8 ;~ 28F0:4F9D
cs=0x28f0;eip=0x004f9f; 	R(CALLF(sub_10240,0));	// 97908 call    sub_10240 ;~ 28F0:4F9F
cs=0x28f0;eip=0x004fa4; 	X(PUSH(dx));	// 97909 push    dx ;~ 28F0:4FA4
cs=0x28f0;eip=0x004fa5; 	X(PUSH(ax));	// 97910 push    ax ;~ 28F0:4FA5
cs=0x28f0;eip=0x004fa6; 	R(CALLF(sub_105c2,0));	// 97911 call    sub_105C2 ;~ 28F0:4FA6
cs=0x28f0;eip=0x004fab; 	X(PUSH(dx));	// 97912 push    dx ;~ 28F0:4FAB
cs=0x28f0;eip=0x004fac; 	X(PUSH(ax));	// 97913 push    ax ;~ 28F0:4FAC
cs=0x28f0;eip=0x004fad; 	R(CALLF(sub_10526,0));	// 97914 call    sub_10526 ;~ 28F0:4FAD
cs=0x28f0;eip=0x004fb2; 	X(PUSH(dx));	// 97915 push    dx ;~ 28F0:4FB2
cs=0x28f0;eip=0x004fb3; 	X(PUSH(ax));	// 97916 push    ax ;~ 28F0:4FB3
cs=0x28f0;eip=0x004fb4; 	R(CALLF(sub_105c2,0));	// 97917 call    sub_105C2 ;~ 28F0:4FB4
cs=0x28f0;eip=0x004fb9; 	T(MOV(cl, 8));	// 97918 mov     cl, 8 ;~ 28F0:4FB9
cs=0x28f0;eip=0x004fbb; 	R(CALLF(sub_10240,0));	// 97919 call    sub_10240 ;~ 28F0:4FBB
cs=0x28f0;eip=0x004fc0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97920 les     bx, [bp+arg_4] ;~ 28F0:4FC0
cs=0x28f0;eip=0x004fc3; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 97921 add     es:[bx], ax ;~ 28F0:4FC3
cs=0x28f0;eip=0x004fc6; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 97922 adc     es:[bx+2], dx ;~ 28F0:4FC6
cs=0x28f0;eip=0x004fca; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97923 les     bx, [bp+arg_8] ;~ 28F0:4FCA
cs=0x28f0;eip=0x004fcd; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 97924 mov     ax, es:[bx] ;~ 28F0:4FCD
cs=0x28f0;eip=0x004fd0; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 97925 mov     dx, es:[bx+2] ;~ 28F0:4FD0
cs=0x28f0;eip=0x004fd4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97926 les     bx, [bp+arg_4] ;~ 28F0:4FD4
cs=0x28f0;eip=0x004fd7; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 97927 add     es:[bx], ax ;~ 28F0:4FD7
cs=0x28f0;eip=0x004fda; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 97928 adc     es:[bx+2], dx ;~ 28F0:4FDA
cs=0x28f0;eip=0x004fde; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 97929 push    [bp+arg_2] ;~ 28F0:4FDE
cs=0x28f0;eip=0x004fe1; 	R(CALLF(sub_27c9e,0));	// 97930 call    sub_27C9E ;~ 28F0:4FE1
cs=0x28f0;eip=0x004fe6; 	X(PUSH(dx));	// 97931 push    dx ;~ 28F0:4FE6
cs=0x28f0;eip=0x004fe7; 	X(PUSH(ax));	// 97932 push    ax ;~ 28F0:4FE7
cs=0x28f0;eip=0x004fe8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97933 les     bx, [bp+arg_8] ;~ 28F0:4FE8
cs=0x28f0;eip=0x004feb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x40))));	// 97934 mov     ax, es:[bx+40h] ;~ 28F0:4FEB
cs=0x28f0;eip=0x004fef; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x42))));	// 97935 mov     dx, es:[bx+42h] ;~ 28F0:4FEF
cs=0x28f0;eip=0x004ff3; 	T(MOV(cl, 8));	// 97936 mov     cl, 8 ;~ 28F0:4FF3
cs=0x28f0;eip=0x004ff5; 	R(CALLF(sub_10240,0));	// 97937 call    sub_10240 ;~ 28F0:4FF5
cs=0x28f0;eip=0x004ffa; 	X(PUSH(dx));	// 97938 push    dx ;~ 28F0:4FFA
cs=0x28f0;eip=0x004ffb; 	X(PUSH(ax));	// 97939 push    ax ;~ 28F0:4FFB
cs=0x28f0;eip=0x004ffc; 	R(CALLF(sub_105c2,0));	// 97940 call    sub_105C2 ;~ 28F0:4FFC
cs=0x28f0;eip=0x005001; 	T(MOV(cl, 8));	// 97941 mov     cl, 8 ;~ 28F0:5001
cs=0x28f0;eip=0x005003; 	R(CALLF(sub_10240,0));	// 97942 call    sub_10240 ;~ 28F0:5003
cs=0x28f0;eip=0x005008; 	T(NEG(ax));	// 97943 neg     ax ;~ 28F0:5008
cs=0x28f0;eip=0x00500a; 	T(ADC(dx, 0));	// 97944 adc     dx, 0 ;~ 28F0:500A
cs=0x28f0;eip=0x00500d; 	T(NEG(dx));	// 97945 neg     dx ;~ 28F0:500D
cs=0x28f0;eip=0x00500f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97946 les     bx, [bp+arg_4] ;~ 28F0:500F
cs=0x28f0;eip=0x005012; 	X(MOV(*(dw*)(raddr(es,bx+0x20)), ax));	// 97947 mov     es:[bx+20h], ax ;~ 28F0:5012
cs=0x28f0;eip=0x005016; 	X(MOV(*(dw*)(raddr(es,bx+0x22)), dx));	// 97948 mov     es:[bx+22h], dx ;~ 28F0:5016
cs=0x28f0;eip=0x00501a; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 97949 push    [bp+arg_2] ;~ 28F0:501A
cs=0x28f0;eip=0x00501d; 	R(CALLF(sub_27cb4,0));	// 97950 call    sub_27CB4 ;~ 28F0:501D
cs=0x28f0;eip=0x005022; 	X(PUSH(dx));	// 97951 push    dx ;~ 28F0:5022
cs=0x28f0;eip=0x005023; 	X(PUSH(ax));	// 97952 push    ax ;~ 28F0:5023
cs=0x28f0;eip=0x005024; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97953 les     bx, [bp+arg_8] ;~ 28F0:5024
cs=0x28f0;eip=0x005027; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 97954 mov     ax, es:[bx+20h] ;~ 28F0:5027
cs=0x28f0;eip=0x00502b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 97955 mov     dx, es:[bx+22h] ;~ 28F0:502B
cs=0x28f0;eip=0x00502f; 	T(MOV(cl, 8));	// 97956 mov     cl, 8 ;~ 28F0:502F
cs=0x28f0;eip=0x005031; 	R(CALLF(sub_10240,0));	// 97957 call    sub_10240 ;~ 28F0:5031
cs=0x28f0;eip=0x005036; 	X(PUSH(dx));	// 97958 push    dx ;~ 28F0:5036
cs=0x28f0;eip=0x005037; 	X(PUSH(ax));	// 97959 push    ax ;~ 28F0:5037
cs=0x28f0;eip=0x005038; 	R(CALLF(sub_105c2,0));	// 97960 call    sub_105C2 ;~ 28F0:5038
cs=0x28f0;eip=0x00503d; 	T(MOV(cl, 8));	// 97961 mov     cl, 8 ;~ 28F0:503D
cs=0x28f0;eip=0x00503f; 	R(CALLF(sub_10240,0));	// 97962 call    sub_10240 ;~ 28F0:503F
cs=0x28f0;eip=0x005044; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97963 les     bx, [bp+arg_4] ;~ 28F0:5044
cs=0x28f0;eip=0x005047; 	X(ADD(*(dw*)(raddr(es,bx+0x20)), ax));	// 97964 add     es:[bx+20h], ax ;~ 28F0:5047
cs=0x28f0;eip=0x00504b; 	X(ADC(*(dw*)(raddr(es,bx+0x22)), dx));	// 97965 adc     es:[bx+22h], dx ;~ 28F0:504B
cs=0x28f0;eip=0x00504f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 97966 push    [bp+arg_0] ;~ 28F0:504F
cs=0x28f0;eip=0x005052; 	R(CALLF(sub_27cb4,0));	// 97967 call    sub_27CB4 ;~ 28F0:5052
cs=0x28f0;eip=0x005057; 	X(PUSH(dx));	// 97968 push    dx ;~ 28F0:5057
cs=0x28f0;eip=0x005058; 	X(PUSH(ax));	// 97969 push    ax ;~ 28F0:5058
cs=0x28f0;eip=0x005059; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 97970 push    [bp+arg_2] ;~ 28F0:5059
cs=0x28f0;eip=0x00505c; 	R(CALLF(sub_27cb4,0));	// 97971 call    sub_27CB4 ;~ 28F0:505C
cs=0x28f0;eip=0x005061; 	X(PUSH(dx));	// 97972 push    dx ;~ 28F0:5061
cs=0x28f0;eip=0x005062; 	X(PUSH(ax));	// 97973 push    ax ;~ 28F0:5062
cs=0x28f0;eip=0x005063; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97974 les     bx, [bp+arg_8] ;~ 28F0:5063
cs=0x28f0;eip=0x005066; 	X(PUSH(*(dw*)(raddr(es,bx+0x42))));	// 97975 push    word ptr es:[bx+42h] ;~ 28F0:5066
cs=0x28f0;eip=0x00506a; 	X(PUSH(*(dw*)(raddr(es,bx+0x40))));	// 97976 push    word ptr es:[bx+40h] ;~ 28F0:506A
cs=0x28f0;eip=0x00506e; 	R(CALLF(sub_105c2,0));	// 97977 call    sub_105C2 ;~ 28F0:506E
cs=0x28f0;eip=0x005073; 	X(PUSH(dx));	// 97978 push    dx ;~ 28F0:5073
cs=0x28f0;eip=0x005074; 	X(PUSH(ax));	// 97979 push    ax ;~ 28F0:5074
cs=0x28f0;eip=0x005075; 	R(CALLF(sub_10526,0));	// 97980 call    sub_10526 ;~ 28F0:5075
cs=0x28f0;eip=0x00507a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97981 les     bx, [bp+arg_4] ;~ 28F0:507A
cs=0x28f0;eip=0x00507d; 	X(ADD(*(dw*)(raddr(es,bx+0x40)), ax));	// 97982 add     es:[bx+40h], ax ;~ 28F0:507D
cs=0x28f0;eip=0x005081; 	X(ADC(*(dw*)(raddr(es,bx+0x42)), dx));	// 97983 adc     es:[bx+42h], dx ;~ 28F0:5081
cs=0x28f0;eip=0x005085; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 97984 push    [bp+arg_0] ;~ 28F0:5085
cs=0x28f0;eip=0x005088; 	R(CALLF(sub_27cb4,0));	// 97985 call    sub_27CB4 ;~ 28F0:5088
cs=0x28f0;eip=0x00508d; 	X(PUSH(dx));	// 97986 push    dx ;~ 28F0:508D
cs=0x28f0;eip=0x00508e; 	X(PUSH(ax));	// 97987 push    ax ;~ 28F0:508E
cs=0x28f0;eip=0x00508f; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 97988 push    [bp+arg_2] ;~ 28F0:508F
cs=0x28f0;eip=0x005092; 	R(CALLF(sub_27c9e,0));	// 97989 call    sub_27C9E ;~ 28F0:5092
cs=0x28f0;eip=0x005097; 	X(PUSH(dx));	// 97990 push    dx ;~ 28F0:5097
cs=0x28f0;eip=0x005098; 	X(PUSH(ax));	// 97991 push    ax ;~ 28F0:5098
cs=0x28f0;eip=0x005099; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_8))));	// 97992 les     bx, [bp+arg_8] ;~ 28F0:5099
cs=0x28f0;eip=0x00509c; 	X(PUSH(*(dw*)(raddr(es,bx+0x22))));	// 97993 push    word ptr es:[bx+22h] ;~ 28F0:509C
cs=0x28f0;eip=0x0050a0; 	X(PUSH(*(dw*)(raddr(es,bx+0x20))));	// 97994 push    word ptr es:[bx+20h] ;~ 28F0:50A0
cs=0x28f0;eip=0x0050a4; 	R(CALLF(sub_105c2,0));	// 97995 call    sub_105C2 ;~ 28F0:50A4
cs=0x28f0;eip=0x0050a9; 	X(PUSH(dx));	// 97996 push    dx ;~ 28F0:50A9
cs=0x28f0;eip=0x0050aa; 	X(PUSH(ax));	// 97997 push    ax ;~ 28F0:50AA
cs=0x28f0;eip=0x0050ab; 	R(CALLF(sub_10526,0));	// 97998 call    sub_10526 ;~ 28F0:50AB
cs=0x28f0;eip=0x0050b0; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_4))));	// 97999 les     bx, [bp+arg_4] ;~ 28F0:50B0
cs=0x28f0;eip=0x0050b3; 	X(ADD(*(dw*)(raddr(es,bx+0x40)), ax));	// 98000 add     es:[bx+40h], ax ;~ 28F0:50B3
cs=0x28f0;eip=0x0050b7; 	X(ADC(*(dw*)(raddr(es,bx+0x42)), dx));	// 98001 adc     es:[bx+42h], dx ;~ 28F0:50B7
cs=0x28f0;eip=0x0050bb; 	T(MOV(sp, bp));	// 98002 mov     sp, bp ;~ 28F0:50BB
cs=0x28f0;eip=0x0050bd; 	X(POP(bp));	// 98003 pop     bp ;~ 28F0:50BD
cs=0x28f0;eip=0x0050be; 	R(RETN(0x0C));	// 98004 retn    0Ch ;~ 28F0:50BE
sub_3c5a1:
	// 98012 
#undef arg_0
#define arg_0 4
	// 98014 arg_0           = dword ptr  4 ;~ 28F0:50C1
cs=0x28f0;eip=0x0050c1; 	X(PUSH(bp));	// 98016 push    bp ;~ 28F0:50C1
cs=0x28f0;eip=0x0050c2; 	T(MOV(bp, sp));	// 98017 mov     bp, sp ;~ 28F0:50C2
cs=0x28f0;eip=0x0050c4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98018 les     bx, [bp+arg_0] ;~ 28F0:50C4
cs=0x28f0;eip=0x0050c7; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98019 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:50C7
cs=0x28f0;eip=0x0050cd; 	R(JNZ(loc_3c5e2));	// 98020 jnz     short loc_3C5E2 ;~ 28F0:50CD
cs=0x28f0;eip=0x0050cf; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 98021 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:50CF
cs=0x28f0;eip=0x0050d5; 	R(JZ(loc_3c5e2));	// 98022 jz      short loc_3C5E2 ;~ 28F0:50D5
cs=0x28f0;eip=0x0050d7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 98023 mov     ax, es:[bx+120h] ;~ 28F0:50D7
cs=0x28f0;eip=0x0050dc; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 98024 mov     dx, es:[bx+122h] ;~ 28F0:50DC
cs=0x28f0;eip=0x0050e1; 	X(MOV(*(dw*)(raddr(es,bx+0x180)), ax));	// 98025 mov     es:[bx+180h], ax ;~ 28F0:50E1
cs=0x28f0;eip=0x0050e6; 	X(MOV(*(dw*)(raddr(es,bx+0x182)), dx));	// 98026 mov     es:[bx+182h], dx ;~ 28F0:50E6
cs=0x28f0;eip=0x0050eb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 98027 mov     ax, es:[bx+140h] ;~ 28F0:50EB
cs=0x28f0;eip=0x0050f0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 98028 mov     dx, es:[bx+142h] ;~ 28F0:50F0
cs=0x28f0;eip=0x0050f5; 	X(MOV(*(dw*)(raddr(es,bx+0x1A0)), ax));	// 98029 mov     es:[bx+1A0h], ax ;~ 28F0:50F5
cs=0x28f0;eip=0x0050fa; 	X(MOV(*(dw*)(raddr(es,bx+0x1A2)), dx));	// 98030 mov     es:[bx+1A2h], dx ;~ 28F0:50FA
cs=0x28f0;eip=0x0050ff; 	R(JMP(loc_3c6a4));	// 98031 jmp     loc_3C6A4 ;~ 28F0:50FF
loc_3c5e2:
	// 10627 
cs=0x28f0;eip=0x005102; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98036 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:5102
cs=0x28f0;eip=0x005108; 	R(JNZ(loc_3c63c));	// 98037 jnz     short loc_3C63C ;~ 28F0:5108
cs=0x28f0;eip=0x00510a; 	T(MOV(ax, bx));	// 98038 mov     ax, bx ;~ 28F0:510A
cs=0x28f0;eip=0x00510c; 	T(MOV(dx, es));	// 98039 mov     dx, es ;~ 28F0:510C
cs=0x28f0;eip=0x00510e; 	T(ADD(ax, 0x120));	// 98040 add     ax, 120h ;~ 28F0:510E
cs=0x28f0;eip=0x005111; 	X(PUSH(dx));	// 98041 push    dx ;~ 28F0:5111
cs=0x28f0;eip=0x005112; 	X(PUSH(ax));	// 98042 push    ax ;~ 28F0:5112
cs=0x28f0;eip=0x005113; 	T(MOV(ax, bx));	// 98043 mov     ax, bx ;~ 28F0:5113
cs=0x28f0;eip=0x005115; 	T(ADD(ax, 0x180));	// 98044 add     ax, 180h ;~ 28F0:5115
cs=0x28f0;eip=0x005118; 	X(PUSH(dx));	// 98045 push    dx ;~ 28F0:5118
cs=0x28f0;eip=0x005119; 	X(PUSH(ax));	// 98046 push    ax ;~ 28F0:5119
cs=0x28f0;eip=0x00511a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 98047 mov     ax, es:[bx+0C0h] ;~ 28F0:511A
cs=0x28f0;eip=0x00511f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 98048 mov     dx, es:[bx+0C2h] ;~ 28F0:511F
cs=0x28f0;eip=0x005124; 	T(MOV(cl, 5));	// 98049 mov     cl, 5 ;~ 28F0:5124
cs=0x28f0;eip=0x005126; 	R(CALLF(sub_10240,0));	// 98050 call    sub_10240 ;~ 28F0:5126
cs=0x28f0;eip=0x00512b; 	X(PUSH(ax));	// 98051 push    ax ;~ 28F0:512B
cs=0x28f0;eip=0x00512c; 	R(CALLF(sub_24cf8,0));	// 98052 call    sub_24CF8 ;~ 28F0:512C
cs=0x28f0;eip=0x005131; 	X(PUSH(ax));	// 98053 push    ax ;~ 28F0:5131
cs=0x28f0;eip=0x005132; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98054 les     bx, [bp+arg_0] ;~ 28F0:5132
cs=0x28f0;eip=0x005135; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 98055 mov     ax, es:[bx+0E0h] ;~ 28F0:5135
cs=0x28f0;eip=0x00513a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 98056 mov     dx, es:[bx+0E2h] ;~ 28F0:513A
cs=0x28f0;eip=0x00513f; 	T(MOV(cl, 5));	// 98057 mov     cl, 5 ;~ 28F0:513F
cs=0x28f0;eip=0x005141; 	R(CALLF(sub_10240,0));	// 98058 call    sub_10240 ;~ 28F0:5141
cs=0x28f0;eip=0x005146; 	X(PUSH(ax));	// 98059 push    ax ;~ 28F0:5146
cs=0x28f0;eip=0x005147; 	R(CALLF(sub_24cf8,0));	// 98060 call    sub_24CF8 ;~ 28F0:5147
cs=0x28f0;eip=0x00514c; 	X(PUSH(ax));	// 98061 push    ax ;~ 28F0:514C
cs=0x28f0;eip=0x00514d; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98062 les     bx, [bp+arg_0] ;~ 28F0:514D
cs=0x28f0;eip=0x005150; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 98063 mov     ax, es:[bx+100h] ;~ 28F0:5150
cs=0x28f0;eip=0x005155; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 98064 mov     dx, es:[bx+102h] ;~ 28F0:5155
cs=0x28f0;eip=0x00515a; 	R(JMP(loc_3c693));	// 98065 jmp     short loc_3C693 ;~ 28F0:515A
loc_3c63c:
	// 10628 
cs=0x28f0;eip=0x00515c; 	T(MOV(ax, bx));	// 98069 mov     ax, bx ;~ 28F0:515C
cs=0x28f0;eip=0x00515e; 	T(MOV(dx, es));	// 98070 mov     dx, es ;~ 28F0:515E
cs=0x28f0;eip=0x005160; 	T(ADD(ax, 0x120));	// 98071 add     ax, 120h ;~ 28F0:5160
cs=0x28f0;eip=0x005163; 	X(PUSH(dx));	// 98072 push    dx ;~ 28F0:5163
cs=0x28f0;eip=0x005164; 	X(PUSH(ax));	// 98073 push    ax ;~ 28F0:5164
cs=0x28f0;eip=0x005165; 	T(MOV(ax, bx));	// 98074 mov     ax, bx ;~ 28F0:5165
cs=0x28f0;eip=0x005167; 	T(ADD(ax, 0x180));	// 98075 add     ax, 180h ;~ 28F0:5167
cs=0x28f0;eip=0x00516a; 	X(PUSH(dx));	// 98076 push    dx ;~ 28F0:516A
cs=0x28f0;eip=0x00516b; 	X(PUSH(ax));	// 98077 push    ax ;~ 28F0:516B
cs=0x28f0;eip=0x00516c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 98078 mov     ax, es:[bx+0C0h] ;~ 28F0:516C
cs=0x28f0;eip=0x005171; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 98079 mov     dx, es:[bx+0C2h] ;~ 28F0:5171
cs=0x28f0;eip=0x005176; 	T(MOV(cl, 5));	// 98080 mov     cl, 5 ;~ 28F0:5176
cs=0x28f0;eip=0x005178; 	R(CALLF(sub_10240,0));	// 98081 call    sub_10240 ;~ 28F0:5178
cs=0x28f0;eip=0x00517d; 	X(PUSH(ax));	// 98082 push    ax ;~ 28F0:517D
cs=0x28f0;eip=0x00517e; 	R(CALLF(sub_24cf8,0));	// 98083 call    sub_24CF8 ;~ 28F0:517E
cs=0x28f0;eip=0x005183; 	X(PUSH(ax));	// 98084 push    ax ;~ 28F0:5183
cs=0x28f0;eip=0x005184; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98085 les     bx, [bp+arg_0] ;~ 28F0:5184
cs=0x28f0;eip=0x005187; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 98086 mov     ax, es:[bx+0E0h] ;~ 28F0:5187
cs=0x28f0;eip=0x00518c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 98087 mov     dx, es:[bx+0E2h] ;~ 28F0:518C
cs=0x28f0;eip=0x005191; 	T(MOV(cl, 5));	// 98088 mov     cl, 5 ;~ 28F0:5191
cs=0x28f0;eip=0x005193; 	R(CALLF(sub_10240,0));	// 98089 call    sub_10240 ;~ 28F0:5193
cs=0x28f0;eip=0x005198; 	X(PUSH(ax));	// 98090 push    ax ;~ 28F0:5198
cs=0x28f0;eip=0x005199; 	R(CALLF(sub_24cf8,0));	// 98091 call    sub_24CF8 ;~ 28F0:5199
cs=0x28f0;eip=0x00519e; 	X(PUSH(ax));	// 98092 push    ax ;~ 28F0:519E
cs=0x28f0;eip=0x00519f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98093 les     bx, [bp+arg_0] ;~ 28F0:519F
cs=0x28f0;eip=0x0051a2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 98094 mov     ax, es:[bx+100h] ;~ 28F0:51A2
cs=0x28f0;eip=0x0051a7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 98095 mov     dx, es:[bx+102h] ;~ 28F0:51A7
cs=0x28f0;eip=0x0051ac; 	T(NEG(ax));	// 98096 neg     ax ;~ 28F0:51AC
cs=0x28f0;eip=0x0051ae; 	T(ADC(dx, 0));	// 98097 adc     dx, 0 ;~ 28F0:51AE
cs=0x28f0;eip=0x0051b1; 	T(NEG(dx));	// 98098 neg     dx ;~ 28F0:51B1
loc_3c693:
	// 10629 
cs=0x28f0;eip=0x0051b3; 	T(MOV(cl, 5));	// 98101 mov     cl, 5 ;~ 28F0:51B3
cs=0x28f0;eip=0x0051b5; 	R(CALLF(sub_10240,0));	// 98102 call    sub_10240 ;~ 28F0:51B5
cs=0x28f0;eip=0x0051ba; 	X(PUSH(ax));	// 98103 push    ax ;~ 28F0:51BA
cs=0x28f0;eip=0x0051bb; 	R(CALLF(sub_24cf8,0));	// 98104 call    sub_24CF8 ;~ 28F0:51BB
cs=0x28f0;eip=0x0051c0; 	X(PUSH(ax));	// 98105 push    ax ;~ 28F0:51C0
cs=0x28f0;eip=0x0051c1; 	R(CALL(sub_3c31a,0));	// 98106 call    sub_3C31A ;~ 28F0:51C1
loc_3c6a4:
	// 10630 
cs=0x28f0;eip=0x0051c4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98109 les     bx, [bp+arg_0] ;~ 28F0:51C4
cs=0x28f0;eip=0x0051c7; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98110 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:51C7
cs=0x28f0;eip=0x0051cd; 	R(JNZ(loc_3c6d9));	// 98111 jnz     short loc_3C6D9 ;~ 28F0:51CD
cs=0x28f0;eip=0x0051cf; 	T(MOV(ax, *(dw*)(raddr(es,bx))));	// 98112 mov     ax, es:[bx] ;~ 28F0:51CF
cs=0x28f0;eip=0x0051d2; 	T(MOV(dx, *(dw*)(raddr(es,bx+2))));	// 98113 mov     dx, es:[bx+2] ;~ 28F0:51D2
cs=0x28f0;eip=0x0051d6; 	X(MOV(*(dw*)(raddr(es,bx+0x60)), ax));	// 98114 mov     es:[bx+60h], ax ;~ 28F0:51D6
cs=0x28f0;eip=0x0051da; 	X(MOV(*(dw*)(raddr(es,bx+0x62)), dx));	// 98115 mov     es:[bx+62h], dx ;~ 28F0:51DA
cs=0x28f0;eip=0x0051de; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x20))));	// 98116 mov     ax, es:[bx+20h] ;~ 28F0:51DE
cs=0x28f0;eip=0x0051e2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x22))));	// 98117 mov     dx, es:[bx+22h] ;~ 28F0:51E2
cs=0x28f0;eip=0x0051e6; 	T(NEG(ax));	// 98118 neg     ax ;~ 28F0:51E6
cs=0x28f0;eip=0x0051e8; 	T(ADC(dx, 0));	// 98119 adc     dx, 0 ;~ 28F0:51E8
cs=0x28f0;eip=0x0051eb; 	T(NEG(dx));	// 98120 neg     dx ;~ 28F0:51EB
cs=0x28f0;eip=0x0051ed; 	X(MOV(*(dw*)(raddr(es,bx+0x80)), ax));	// 98121 mov     es:[bx+80h], ax ;~ 28F0:51ED
cs=0x28f0;eip=0x0051f2; 	X(MOV(*(dw*)(raddr(es,bx+0x82)), dx));	// 98122 mov     es:[bx+82h], dx ;~ 28F0:51F2
cs=0x28f0;eip=0x0051f7; 	R(JMP(loc_3c71a));	// 98123 jmp     short loc_3C71A ;~ 28F0:51F7
loc_3c6d9:
	// 10631 
cs=0x28f0;eip=0x0051f9; 	X(PUSH(es));	// 98127 push    es ;~ 28F0:51F9
cs=0x28f0;eip=0x0051fa; 	X(PUSH(bx));	// 98128 push    bx ;~ 28F0:51FA
cs=0x28f0;eip=0x0051fb; 	T(MOV(ax, bx));	// 98129 mov     ax, bx ;~ 28F0:51FB
cs=0x28f0;eip=0x0051fd; 	T(MOV(dx, es));	// 98130 mov     dx, es ;~ 28F0:51FD
cs=0x28f0;eip=0x0051ff; 	T(ADD(ax, 0x60));	// 98131 add     ax, 60h ; '`' ;~ 28F0:51FF
cs=0x28f0;eip=0x005202; 	X(PUSH(dx));	// 98132 push    dx ;~ 28F0:5202
cs=0x28f0;eip=0x005203; 	X(PUSH(ax));	// 98133 push    ax ;~ 28F0:5203
cs=0x28f0;eip=0x005204; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 98134 mov     ax, es:[bx+0C0h] ;~ 28F0:5204
cs=0x28f0;eip=0x005209; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 98135 mov     dx, es:[bx+0C2h] ;~ 28F0:5209
cs=0x28f0;eip=0x00520e; 	T(MOV(cl, 5));	// 98136 mov     cl, 5 ;~ 28F0:520E
cs=0x28f0;eip=0x005210; 	R(CALLF(sub_10240,0));	// 98137 call    sub_10240 ;~ 28F0:5210
cs=0x28f0;eip=0x005215; 	X(PUSH(ax));	// 98138 push    ax ;~ 28F0:5215
cs=0x28f0;eip=0x005216; 	R(CALLF(sub_24cf8,0));	// 98139 call    sub_24CF8 ;~ 28F0:5216
cs=0x28f0;eip=0x00521b; 	X(PUSH(ax));	// 98140 push    ax ;~ 28F0:521B
cs=0x28f0;eip=0x00521c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98141 les     bx, [bp+arg_0] ;~ 28F0:521C
cs=0x28f0;eip=0x00521f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 98142 mov     ax, es:[bx+0E0h] ;~ 28F0:521F
cs=0x28f0;eip=0x005224; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 98143 mov     dx, es:[bx+0E2h] ;~ 28F0:5224
cs=0x28f0;eip=0x005229; 	T(MOV(cl, 5));	// 98144 mov     cl, 5 ;~ 28F0:5229
cs=0x28f0;eip=0x00522b; 	R(CALLF(sub_10240,0));	// 98145 call    sub_10240 ;~ 28F0:522B
cs=0x28f0;eip=0x005230; 	X(PUSH(ax));	// 98146 push    ax ;~ 28F0:5230
cs=0x28f0;eip=0x005231; 	R(CALLF(sub_24cf8,0));	// 98147 call    sub_24CF8 ;~ 28F0:5231
cs=0x28f0;eip=0x005236; 	X(PUSH(ax));	// 98148 push    ax ;~ 28F0:5236
cs=0x28f0;eip=0x005237; 	R(CALL(sub_3c3de,0));	// 98149 call    sub_3C3DE ;~ 28F0:5237
loc_3c71a:
	// 10632 
cs=0x28f0;eip=0x00523a; 	X(POP(bp));	// 98152 pop     bp ;~ 28F0:523A
cs=0x28f0;eip=0x00523b; 	R(RETN(4));	// 98153 retn    4 ;~ 28F0:523B
sub_3c71e:
	// 98161 
#undef var_4
#define var_4 -4
	// 98163 var_4           = dword ptr -4 ;~ 28F0:523E
#undef arg_0
#define arg_0 4
	// 98164 arg_0           = dword ptr  4 ;~ 28F0:523E
cs=0x28f0;eip=0x00523e; 	X(PUSH(bp));	// 98166 push    bp ;~ 28F0:523E
cs=0x28f0;eip=0x00523f; 	T(MOV(bp, sp));	// 98167 mov     bp, sp ;~ 28F0:523F
cs=0x28f0;eip=0x005241; 	T(SUB(sp, 4));	// 98168 sub     sp, 4 ;~ 28F0:5241
cs=0x28f0;eip=0x005244; 	T(MOV(ax, 0x100));	// 98169 mov     ax, 100h ;~ 28F0:5244
cs=0x28f0;eip=0x005247; 	T(CWD);	// 98170 cwd ;~ 28F0:5247
cs=0x28f0;eip=0x005248; 	X(PUSH(dx));	// 98171 push    dx ;~ 28F0:5248
cs=0x28f0;eip=0x005249; 	X(PUSH(ax));	// 98172 push    ax ;~ 28F0:5249
cs=0x28f0;eip=0x00524a; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98173 mov     ax, word ptr unk_57111 ;~ 28F0:524A
cs=0x28f0;eip=0x00524d; 	T(CWD);	// 98174 cwd ;~ 28F0:524D
cs=0x28f0;eip=0x00524e; 	X(PUSH(dx));	// 98175 push    dx ;~ 28F0:524E
cs=0x28f0;eip=0x00524f; 	X(PUSH(ax));	// 98176 push    ax ;~ 28F0:524F
cs=0x28f0;eip=0x005250; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98177 les     bx, [bp+arg_0] ;~ 28F0:5250
cs=0x28f0;eip=0x005253; 	X(PUSH(*(dw*)(raddr(es,bx+0x182))));	// 98178 push    word ptr es:[bx+182h] ;~ 28F0:5253
cs=0x28f0;eip=0x005258; 	X(PUSH(*(dw*)(raddr(es,bx+0x180))));	// 98179 push    word ptr es:[bx+180h] ;~ 28F0:5258
cs=0x28f0;eip=0x00525d; 	R(CALLF(sub_105c2,0));	// 98180 call    sub_105C2 ;~ 28F0:525D
cs=0x28f0;eip=0x005262; 	X(PUSH(dx));	// 98181 push    dx ;~ 28F0:5262
cs=0x28f0;eip=0x005263; 	X(PUSH(ax));	// 98182 push    ax ;~ 28F0:5263
cs=0x28f0;eip=0x005264; 	R(CALLF(sub_10526,0));	// 98183 call    sub_10526 ;~ 28F0:5264
cs=0x28f0;eip=0x005269; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98184 les     bx, [bp+arg_0] ;~ 28F0:5269
cs=0x28f0;eip=0x00526c; 	X(MOV(*(dw*)(raddr(es,bx+0x1E0)), ax));	// 98185 mov     es:[bx+1E0h], ax ;~ 28F0:526C
cs=0x28f0;eip=0x005271; 	X(MOV(*(dw*)(raddr(es,bx+0x1E2)), dx));	// 98186 mov     es:[bx+1E2h], dx ;~ 28F0:5271
cs=0x28f0;eip=0x005276; 	T(MOV(ax, 0x100));	// 98187 mov     ax, 100h ;~ 28F0:5276
cs=0x28f0;eip=0x005279; 	T(CWD);	// 98188 cwd ;~ 28F0:5279
cs=0x28f0;eip=0x00527a; 	X(PUSH(dx));	// 98189 push    dx ;~ 28F0:527A
cs=0x28f0;eip=0x00527b; 	X(PUSH(ax));	// 98190 push    ax ;~ 28F0:527B
cs=0x28f0;eip=0x00527c; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98191 mov     ax, word ptr unk_57111 ;~ 28F0:527C
cs=0x28f0;eip=0x00527f; 	T(CWD);	// 98192 cwd ;~ 28F0:527F
cs=0x28f0;eip=0x005280; 	X(PUSH(dx));	// 98193 push    dx ;~ 28F0:5280
cs=0x28f0;eip=0x005281; 	X(PUSH(ax));	// 98194 push    ax ;~ 28F0:5281
cs=0x28f0;eip=0x005282; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A2))));	// 98195 push    word ptr es:[bx+1A2h] ;~ 28F0:5282
cs=0x28f0;eip=0x005287; 	X(PUSH(*(dw*)(raddr(es,bx+0x1A0))));	// 98196 push    word ptr es:[bx+1A0h] ;~ 28F0:5287
cs=0x28f0;eip=0x00528c; 	R(CALLF(sub_105c2,0));	// 98197 call    sub_105C2 ;~ 28F0:528C
cs=0x28f0;eip=0x005291; 	X(PUSH(dx));	// 98198 push    dx ;~ 28F0:5291
cs=0x28f0;eip=0x005292; 	X(PUSH(ax));	// 98199 push    ax ;~ 28F0:5292
cs=0x28f0;eip=0x005293; 	R(CALLF(sub_10526,0));	// 98200 call    sub_10526 ;~ 28F0:5293
cs=0x28f0;eip=0x005298; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98201 les     bx, [bp+arg_0] ;~ 28F0:5298
cs=0x28f0;eip=0x00529b; 	X(MOV(*(dw*)(raddr(es,bx+0x1E4)), ax));	// 98202 mov     es:[bx+1E4h], ax ;~ 28F0:529B
cs=0x28f0;eip=0x0052a0; 	X(MOV(*(dw*)(raddr(es,bx+0x1E6)), dx));	// 98203 mov     es:[bx+1E6h], dx ;~ 28F0:52A0
cs=0x28f0;eip=0x0052a5; 	T(MOV(ax, 0x100));	// 98204 mov     ax, 100h ;~ 28F0:52A5
cs=0x28f0;eip=0x0052a8; 	T(CWD);	// 98205 cwd ;~ 28F0:52A8
cs=0x28f0;eip=0x0052a9; 	X(PUSH(dx));	// 98206 push    dx ;~ 28F0:52A9
cs=0x28f0;eip=0x0052aa; 	X(PUSH(ax));	// 98207 push    ax ;~ 28F0:52AA
cs=0x28f0;eip=0x0052ab; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98208 mov     ax, word ptr unk_57111 ;~ 28F0:52AB
cs=0x28f0;eip=0x0052ae; 	T(CWD);	// 98209 cwd ;~ 28F0:52AE
cs=0x28f0;eip=0x0052af; 	X(PUSH(dx));	// 98210 push    dx ;~ 28F0:52AF
cs=0x28f0;eip=0x0052b0; 	X(PUSH(ax));	// 98211 push    ax ;~ 28F0:52B0
cs=0x28f0;eip=0x0052b1; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C2))));	// 98212 push    word ptr es:[bx+1C2h] ;~ 28F0:52B1
cs=0x28f0;eip=0x0052b6; 	X(PUSH(*(dw*)(raddr(es,bx+0x1C0))));	// 98213 push    word ptr es:[bx+1C0h] ;~ 28F0:52B6
cs=0x28f0;eip=0x0052bb; 	R(CALLF(sub_105c2,0));	// 98214 call    sub_105C2 ;~ 28F0:52BB
cs=0x28f0;eip=0x0052c0; 	X(PUSH(dx));	// 98215 push    dx ;~ 28F0:52C0
cs=0x28f0;eip=0x0052c1; 	X(PUSH(ax));	// 98216 push    ax ;~ 28F0:52C1
cs=0x28f0;eip=0x0052c2; 	R(CALLF(sub_10526,0));	// 98217 call    sub_10526 ;~ 28F0:52C2
cs=0x28f0;eip=0x0052c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98218 les     bx, [bp+arg_0] ;~ 28F0:52C7
cs=0x28f0;eip=0x0052ca; 	X(MOV(*(dw*)(raddr(es,bx+0x1E8)), ax));	// 98219 mov     es:[bx+1E8h], ax ;~ 28F0:52CA
cs=0x28f0;eip=0x0052cf; 	X(MOV(*(dw*)(raddr(es,bx+0x1EA)), dx));	// 98220 mov     es:[bx+1EAh], dx ;~ 28F0:52CF
cs=0x28f0;eip=0x0052d4; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98221 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:52D4
cs=0x28f0;eip=0x0052da; 	R(JNZ(loc_3c7e5));	// 98222 jnz     short loc_3C7E5 ;~ 28F0:52DA
cs=0x28f0;eip=0x0052dc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x60))));	// 98223 mov     ax, es:[bx+60h] ;~ 28F0:52DC
cs=0x28f0;eip=0x0052e0; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x62))));	// 98224 mov     dx, es:[bx+62h] ;~ 28F0:52E0
cs=0x28f0;eip=0x0052e4; 	X(MOV(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 98225 mov     es:[bx+0C0h], ax ;~ 28F0:52E4
cs=0x28f0;eip=0x0052e9; 	X(MOV(*(dw*)(raddr(es,bx+0x0C2)), dx));	// 98226 mov     es:[bx+0C2h], dx ;~ 28F0:52E9
cs=0x28f0;eip=0x0052ee; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x80))));	// 98227 mov     ax, es:[bx+80h] ;~ 28F0:52EE
cs=0x28f0;eip=0x0052f3; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x82))));	// 98228 mov     dx, es:[bx+82h] ;~ 28F0:52F3
cs=0x28f0;eip=0x0052f8; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 98229 mov     es:[bx+0E0h], ax ;~ 28F0:52F8
cs=0x28f0;eip=0x0052fd; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 98230 mov     es:[bx+0E2h], dx ;~ 28F0:52FD
cs=0x28f0;eip=0x005302; 	R(JMP(loc_3c8cf));	// 98231 jmp     loc_3C8CF ;~ 28F0:5302
loc_3c7e5:
	// 10633 
cs=0x28f0;eip=0x005305; 	T(MOV(ax, 0x100));	// 98235 mov     ax, 100h ;~ 28F0:5305
cs=0x28f0;eip=0x005308; 	T(CWD);	// 98236 cwd ;~ 28F0:5308
cs=0x28f0;eip=0x005309; 	X(PUSH(dx));	// 98237 push    dx ;~ 28F0:5309
cs=0x28f0;eip=0x00530a; 	X(PUSH(ax));	// 98238 push    ax ;~ 28F0:530A
cs=0x28f0;eip=0x00530b; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98239 mov     ax, word ptr unk_57111 ;~ 28F0:530B
cs=0x28f0;eip=0x00530e; 	T(CWD);	// 98240 cwd ;~ 28F0:530E
cs=0x28f0;eip=0x00530f; 	X(PUSH(dx));	// 98241 push    dx ;~ 28F0:530F
cs=0x28f0;eip=0x005310; 	X(PUSH(ax));	// 98242 push    ax ;~ 28F0:5310
cs=0x28f0;eip=0x005311; 	X(PUSH(*(dw*)(raddr(es,bx+0x62))));	// 98243 push    word ptr es:[bx+62h] ;~ 28F0:5311
cs=0x28f0;eip=0x005315; 	X(PUSH(*(dw*)(raddr(es,bx+0x60))));	// 98244 push    word ptr es:[bx+60h] ;~ 28F0:5315
cs=0x28f0;eip=0x005319; 	R(CALLF(sub_105c2,0));	// 98245 call    sub_105C2 ;~ 28F0:5319
cs=0x28f0;eip=0x00531e; 	X(PUSH(dx));	// 98246 push    dx ;~ 28F0:531E
cs=0x28f0;eip=0x00531f; 	X(PUSH(ax));	// 98247 push    ax ;~ 28F0:531F
cs=0x28f0;eip=0x005320; 	R(CALLF(sub_10526,0));	// 98248 call    sub_10526 ;~ 28F0:5320
cs=0x28f0;eip=0x005325; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98249 les     bx, [bp+arg_0] ;~ 28F0:5325
cs=0x28f0;eip=0x005328; 	X(ADD(*(dw*)(raddr(es,bx+0x0C0)), ax));	// 98250 add     es:[bx+0C0h], ax ;~ 28F0:5328
cs=0x28f0;eip=0x00532d; 	X(ADC(*(dw*)(raddr(es,bx+0x0C2)), dx));	// 98251 adc     es:[bx+0C2h], dx ;~ 28F0:532D
cs=0x28f0;eip=0x005332; 	T(MOV(ax, bx));	// 98252 mov     ax, bx ;~ 28F0:5332
cs=0x28f0;eip=0x005334; 	T(MOV(dx, es));	// 98253 mov     dx, es ;~ 28F0:5334
cs=0x28f0;eip=0x005336; 	T(ADD(ax, 0x0C0));	// 98254 add     ax, 0C0h ; 'À' ;~ 28F0:5336
cs=0x28f0;eip=0x005339; 	X(PUSH(dx));	// 98255 push    dx ;~ 28F0:5339
cs=0x28f0;eip=0x00533a; 	X(PUSH(ax));	// 98256 push    ax ;~ 28F0:533A
cs=0x28f0;eip=0x00533b; 	R(CALL(sub_3c2b6,0));	// 98257 call    sub_3C2B6 ;~ 28F0:533B
cs=0x28f0;eip=0x00533e; 	T(MOV(ax, 0x100));	// 98258 mov     ax, 100h ;~ 28F0:533E
cs=0x28f0;eip=0x005341; 	T(CWD);	// 98259 cwd ;~ 28F0:5341
cs=0x28f0;eip=0x005342; 	X(PUSH(dx));	// 98260 push    dx ;~ 28F0:5342
cs=0x28f0;eip=0x005343; 	X(PUSH(ax));	// 98261 push    ax ;~ 28F0:5343
cs=0x28f0;eip=0x005344; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98262 mov     ax, word ptr unk_57111 ;~ 28F0:5344
cs=0x28f0;eip=0x005347; 	T(CWD);	// 98263 cwd ;~ 28F0:5347
cs=0x28f0;eip=0x005348; 	X(PUSH(dx));	// 98264 push    dx ;~ 28F0:5348
cs=0x28f0;eip=0x005349; 	X(PUSH(ax));	// 98265 push    ax ;~ 28F0:5349
cs=0x28f0;eip=0x00534a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98266 les     bx, [bp+arg_0] ;~ 28F0:534A
cs=0x28f0;eip=0x00534d; 	X(PUSH(*(dw*)(raddr(es,bx+0x82))));	// 98267 push    word ptr es:[bx+82h] ;~ 28F0:534D
cs=0x28f0;eip=0x005352; 	X(PUSH(*(dw*)(raddr(es,bx+0x80))));	// 98268 push    word ptr es:[bx+80h] ;~ 28F0:5352
cs=0x28f0;eip=0x005357; 	R(CALLF(sub_105c2,0));	// 98269 call    sub_105C2 ;~ 28F0:5357
cs=0x28f0;eip=0x00535c; 	X(PUSH(dx));	// 98270 push    dx ;~ 28F0:535C
cs=0x28f0;eip=0x00535d; 	X(PUSH(ax));	// 98271 push    ax ;~ 28F0:535D
cs=0x28f0;eip=0x00535e; 	R(CALLF(sub_10526,0));	// 98272 call    sub_10526 ;~ 28F0:535E
cs=0x28f0;eip=0x005363; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98273 les     bx, [bp+arg_0] ;~ 28F0:5363
cs=0x28f0;eip=0x005366; 	X(ADD(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 98274 add     es:[bx+0E0h], ax ;~ 28F0:5366
cs=0x28f0;eip=0x00536b; 	X(ADC(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 98275 adc     es:[bx+0E2h], dx ;~ 28F0:536B
cs=0x28f0;eip=0x005370; 	T(MOV(ax, bx));	// 98276 mov     ax, bx ;~ 28F0:5370
cs=0x28f0;eip=0x005372; 	T(MOV(dx, es));	// 98277 mov     dx, es ;~ 28F0:5372
cs=0x28f0;eip=0x005374; 	T(ADD(ax, 0x0E0));	// 98278 add     ax, 0E0h ; 'à' ;~ 28F0:5374
cs=0x28f0;eip=0x005377; 	X(PUSH(dx));	// 98279 push    dx ;~ 28F0:5377
cs=0x28f0;eip=0x005378; 	X(PUSH(ax));	// 98280 push    ax ;~ 28F0:5378
cs=0x28f0;eip=0x005379; 	R(CALL(sub_3c2b6,0));	// 98281 call    sub_3C2B6 ;~ 28F0:5379
cs=0x28f0;eip=0x00537c; 	T(OR(al, al));	// 98282 or      al, al ;~ 28F0:537C
cs=0x28f0;eip=0x00537e; 	R(JZ(loc_3c8cf));	// 98283 jz      short loc_3C8CF ;~ 28F0:537E
cs=0x28f0;eip=0x005380; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98284 les     bx, [bp+arg_0] ;~ 28F0:5380
cs=0x28f0;eip=0x005383; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 98285 mov     ax, es:[bx+0E0h] ;~ 28F0:5383
cs=0x28f0;eip=0x005388; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 98286 mov     dx, es:[bx+0E2h] ;~ 28F0:5388
cs=0x28f0;eip=0x00538d; 	T(NEG(ax));	// 98287 neg     ax ;~ 28F0:538D
cs=0x28f0;eip=0x00538f; 	T(ADC(dx, 0));	// 98288 adc     dx, 0 ;~ 28F0:538F
cs=0x28f0;eip=0x005392; 	T(NEG(dx));	// 98289 neg     dx ;~ 28F0:5392
cs=0x28f0;eip=0x005394; 	X(MOV(*(dw*)(raddr(es,bx+0x0E0)), ax));	// 98290 mov     es:[bx+0E0h], ax ;~ 28F0:5394
cs=0x28f0;eip=0x005399; 	X(MOV(*(dw*)(raddr(es,bx+0x0E2)), dx));	// 98291 mov     es:[bx+0E2h], dx ;~ 28F0:5399
cs=0x28f0;eip=0x00539e; 	T(MOV(ax, bx));	// 98292 mov     ax, bx ;~ 28F0:539E
cs=0x28f0;eip=0x0053a0; 	T(MOV(dx, es));	// 98293 mov     dx, es ;~ 28F0:53A0
cs=0x28f0;eip=0x0053a2; 	T(ADD(ax, 0x0C0));	// 98294 add     ax, 0C0h ; 'À' ;~ 28F0:53A2
cs=0x28f0;eip=0x0053a5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 98295 mov     word ptr [bp+var_4], ax ;~ 28F0:53A5
cs=0x28f0;eip=0x0053a8; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 98296 mov     word ptr [bp+var_4+2], dx ;~ 28F0:53A8
cs=0x28f0;eip=0x0053ab; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 98297 les     bx, [bp+var_4] ;~ 28F0:53AB
cs=0x28f0;eip=0x0053ae; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 98298 mov     ax, es:[bx+0Ch] ;~ 28F0:53AE
cs=0x28f0;eip=0x0053b2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 98299 mov     dx, es:[bx+0Eh] ;~ 28F0:53B2
cs=0x28f0;eip=0x0053b6; 	T(SUB(ax, *(dw*)(raddr(es,bx))));	// 98300 sub     ax, es:[bx] ;~ 28F0:53B6
cs=0x28f0;eip=0x0053b9; 	T(SBB(dx, *(dw*)(raddr(es,bx+2))));	// 98301 sbb     dx, es:[bx+2] ;~ 28F0:53B9
cs=0x28f0;eip=0x0053bd; 	X(MOV(*(dw*)(raddr(es,bx)), ax));	// 98302 mov     es:[bx], ax ;~ 28F0:53BD
cs=0x28f0;eip=0x0053c0; 	X(MOV(*(dw*)(raddr(es,bx+2)), dx));	// 98303 mov     es:[bx+2], dx ;~ 28F0:53C0
cs=0x28f0;eip=0x0053c4; 	X(PUSH(es));	// 98304 push    es ;~ 28F0:53C4
cs=0x28f0;eip=0x0053c5; 	X(PUSH(bx));	// 98305 push    bx ;~ 28F0:53C5
cs=0x28f0;eip=0x0053c6; 	R(CALL(sub_3c2b6,0));	// 98306 call    sub_3C2B6 ;~ 28F0:53C6
cs=0x28f0;eip=0x0053c9; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 98307 mov     ax, word ptr [bp+arg_0] ;~ 28F0:53C9
cs=0x28f0;eip=0x0053cc; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 98308 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:53CC
cs=0x28f0;eip=0x0053cf; 	T(ADD(ah, 1));	// 98309 add     ah, 1 ;~ 28F0:53CF
cs=0x28f0;eip=0x0053d2; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 98310 mov     word ptr [bp+var_4], ax ;~ 28F0:53D2
cs=0x28f0;eip=0x0053d5; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 98311 mov     word ptr [bp+var_4+2], dx ;~ 28F0:53D5
cs=0x28f0;eip=0x0053d8; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 98312 les     bx, [bp+var_4] ;~ 28F0:53D8
cs=0x28f0;eip=0x0053db; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C))));	// 98313 mov     ax, es:[bx+0Ch] ;~ 28F0:53DB
cs=0x28f0;eip=0x0053df; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0E))));	// 98314 mov     dx, es:[bx+0Eh] ;~ 28F0:53DF
cs=0x28f0;eip=0x0053e3; 	X(ADD(*(dw*)(raddr(es,bx)), ax));	// 98315 add     es:[bx], ax ;~ 28F0:53E3
cs=0x28f0;eip=0x0053e6; 	X(ADC(*(dw*)(raddr(es,bx+2)), dx));	// 98316 adc     es:[bx+2], dx ;~ 28F0:53E6
cs=0x28f0;eip=0x0053ea; 	X(PUSH(es));	// 98317 push    es ;~ 28F0:53EA
cs=0x28f0;eip=0x0053eb; 	X(PUSH(bx));	// 98318 push    bx ;~ 28F0:53EB
cs=0x28f0;eip=0x0053ec; 	R(CALL(sub_3c2b6,0));	// 98319 call    sub_3C2B6 ;~ 28F0:53EC
loc_3c8cf:
	// 10634 
cs=0x28f0;eip=0x0053ef; 	T(MOV(ax, 0x100));	// 98323 mov     ax, 100h ;~ 28F0:53EF
cs=0x28f0;eip=0x0053f2; 	T(CWD);	// 98324 cwd ;~ 28F0:53F2
cs=0x28f0;eip=0x0053f3; 	X(PUSH(dx));	// 98325 push    dx ;~ 28F0:53F3
cs=0x28f0;eip=0x0053f4; 	X(PUSH(ax));	// 98326 push    ax ;~ 28F0:53F4
cs=0x28f0;eip=0x0053f5; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98327 mov     ax, word ptr unk_57111 ;~ 28F0:53F5
cs=0x28f0;eip=0x0053f8; 	T(CWD);	// 98328 cwd ;~ 28F0:53F8
cs=0x28f0;eip=0x0053f9; 	X(PUSH(dx));	// 98329 push    dx ;~ 28F0:53F9
cs=0x28f0;eip=0x0053fa; 	X(PUSH(ax));	// 98330 push    ax ;~ 28F0:53FA
cs=0x28f0;eip=0x0053fb; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98331 les     bx, [bp+arg_0] ;~ 28F0:53FB
cs=0x28f0;eip=0x0053fe; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A2))));	// 98332 push    word ptr es:[bx+0A2h] ;~ 28F0:53FE
cs=0x28f0;eip=0x005403; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A0))));	// 98333 push    word ptr es:[bx+0A0h] ;~ 28F0:5403
cs=0x28f0;eip=0x005408; 	R(CALLF(sub_105c2,0));	// 98334 call    sub_105C2 ;~ 28F0:5408
cs=0x28f0;eip=0x00540d; 	X(PUSH(dx));	// 98335 push    dx ;~ 28F0:540D
cs=0x28f0;eip=0x00540e; 	X(PUSH(ax));	// 98336 push    ax ;~ 28F0:540E
cs=0x28f0;eip=0x00540f; 	R(CALLF(sub_10526,0));	// 98337 call    sub_10526 ;~ 28F0:540F
cs=0x28f0;eip=0x005414; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98338 les     bx, [bp+arg_0] ;~ 28F0:5414
cs=0x28f0;eip=0x005417; 	X(ADD(*(dw*)(raddr(es,bx+0x100)), ax));	// 98339 add     es:[bx+100h], ax ;~ 28F0:5417
cs=0x28f0;eip=0x00541c; 	X(ADC(*(dw*)(raddr(es,bx+0x102)), dx));	// 98340 adc     es:[bx+102h], dx ;~ 28F0:541C
cs=0x28f0;eip=0x005421; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98341 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:5421
cs=0x28f0;eip=0x005427; 	R(JNZ(loc_3c960));	// 98342 jnz     short loc_3C960 ;~ 28F0:5427
cs=0x28f0;eip=0x005429; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 98343 mov     ax, es:[bx+2FAh] ;~ 28F0:5429
cs=0x28f0;eip=0x00542e; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 98344 mov     dx, es:[bx+2FCh] ;~ 28F0:542E
cs=0x28f0;eip=0x005433; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 98345 add     ax, es:[bx+302h] ;~ 28F0:5433
cs=0x28f0;eip=0x005438; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 98346 adc     dx, es:[bx+304h] ;~ 28F0:5438
cs=0x28f0;eip=0x00543d; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 98347 les     bx, es:[bx+31Ch] ;~ 28F0:543D
cs=0x28f0;eip=0x005442; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 98348 cmp     dx, es:[bx+0Ch] ;~ 28F0:5442
cs=0x28f0;eip=0x005446; 	R(JG(loc_3c960));	// 98349 jg      short loc_3C960 ;~ 28F0:5446
cs=0x28f0;eip=0x005448; 	R(JL(loc_3c930));	// 98350 jl      short loc_3C930 ;~ 28F0:5448
cs=0x28f0;eip=0x00544a; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 98351 cmp     ax, es:[bx+0Ah] ;~ 28F0:544A
cs=0x28f0;eip=0x00544e; 	R(JNC(loc_3c960));	// 98352 jnb     short loc_3C960 ;~ 28F0:544E
loc_3c930:
	// 10635 
cs=0x28f0;eip=0x005450; 	T(MOV(ax, 0x100));	// 98355 mov     ax, 100h ;~ 28F0:5450
cs=0x28f0;eip=0x005453; 	T(CWD);	// 98356 cwd ;~ 28F0:5453
cs=0x28f0;eip=0x005454; 	X(PUSH(dx));	// 98357 push    dx ;~ 28F0:5454
cs=0x28f0;eip=0x005455; 	X(PUSH(ax));	// 98358 push    ax ;~ 28F0:5455
cs=0x28f0;eip=0x005456; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98359 mov     ax, word ptr unk_57111 ;~ 28F0:5456
cs=0x28f0;eip=0x005459; 	T(CWD);	// 98360 cwd ;~ 28F0:5459
cs=0x28f0;eip=0x00545a; 	X(PUSH(dx));	// 98361 push    dx ;~ 28F0:545A
cs=0x28f0;eip=0x00545b; 	X(PUSH(ax));	// 98362 push    ax ;~ 28F0:545B
cs=0x28f0;eip=0x00545c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98363 les     bx, [bp+arg_0] ;~ 28F0:545C
cs=0x28f0;eip=0x00545f; 	X(PUSH(*(dw*)(raddr(es,bx+0x42))));	// 98364 push    word ptr es:[bx+42h] ;~ 28F0:545F
cs=0x28f0;eip=0x005463; 	X(PUSH(*(dw*)(raddr(es,bx+0x40))));	// 98365 push    word ptr es:[bx+40h] ;~ 28F0:5463
cs=0x28f0;eip=0x005467; 	R(CALLF(sub_105c2,0));	// 98366 call    sub_105C2 ;~ 28F0:5467
cs=0x28f0;eip=0x00546c; 	X(PUSH(dx));	// 98367 push    dx ;~ 28F0:546C
cs=0x28f0;eip=0x00546d; 	X(PUSH(ax));	// 98368 push    ax ;~ 28F0:546D
cs=0x28f0;eip=0x00546e; 	R(CALLF(sub_10526,0));	// 98369 call    sub_10526 ;~ 28F0:546E
cs=0x28f0;eip=0x005473; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98370 les     bx, [bp+arg_0] ;~ 28F0:5473
cs=0x28f0;eip=0x005476; 	X(ADD(*(dw*)(raddr(es,bx+0x100)), ax));	// 98371 add     es:[bx+100h], ax ;~ 28F0:5476
cs=0x28f0;eip=0x00547b; 	X(ADC(*(dw*)(raddr(es,bx+0x102)), dx));	// 98372 adc     es:[bx+102h], dx ;~ 28F0:547B
loc_3c960:
	// 10636 
cs=0x28f0;eip=0x005480; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 98376 mov     ax, word ptr [bp+arg_0] ;~ 28F0:5480
cs=0x28f0;eip=0x005483; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 98377 mov     dx, word ptr [bp+arg_0+2] ;~ 28F0:5483
cs=0x28f0;eip=0x005486; 	T(ADD(ah, 1));	// 98378 add     ah, 1 ;~ 28F0:5486
cs=0x28f0;eip=0x005489; 	X(PUSH(dx));	// 98379 push    dx ;~ 28F0:5489
cs=0x28f0;eip=0x00548a; 	X(PUSH(ax));	// 98380 push    ax ;~ 28F0:548A
cs=0x28f0;eip=0x00548b; 	R(CALL(sub_3c2b6,0));	// 98381 call    sub_3C2B6 ;~ 28F0:548B
cs=0x28f0;eip=0x00548e; 	T(MOV(sp, bp));	// 98382 mov     sp, bp ;~ 28F0:548E
cs=0x28f0;eip=0x005490; 	X(POP(bp));	// 98383 pop     bp ;~ 28F0:5490
cs=0x28f0;eip=0x005491; 	R(RETN(4));	// 98384 retn    4 ;~ 28F0:5491
sub_3c974:
	// 98392 
#undef var_a
#define var_a -0x0A
	// 98394 var_A           = dword ptr -0Ah ;~ 28F0:5494
#undef var_6
#define var_6 -6
	// 98395 var_6           = word ptr -6 ;~ 28F0:5494
#undef var_4
#define var_4 -4
	// 98396 var_4           = word ptr -4 ;~ 28F0:5494
#undef var_2
#define var_2 -2
	// 98397 var_2           = word ptr -2 ;~ 28F0:5494
#undef arg_0
#define arg_0 4
	// 98398 arg_0           = dword ptr  4 ;~ 28F0:5494
cs=0x28f0;eip=0x005494; 	X(PUSH(bp));	// 98400 push    bp ;~ 28F0:5494
cs=0x28f0;eip=0x005495; 	T(MOV(bp, sp));	// 98401 mov     bp, sp ;~ 28F0:5495
cs=0x28f0;eip=0x005497; 	T(SUB(sp, 0x0A));	// 98402 sub     sp, 0Ah ;~ 28F0:5497
cs=0x28f0;eip=0x00549a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98403 les     bx, [bp+arg_0] ;~ 28F0:549A
cs=0x28f0;eip=0x00549d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 98404 mov     ax, es:[bx+31Ch] ;~ 28F0:549D
cs=0x28f0;eip=0x0054a2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 98405 mov     dx, es:[bx+31Eh] ;~ 28F0:54A2
cs=0x28f0;eip=0x0054a7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a))), ax));	// 98406 mov     word ptr [bp+var_A], ax ;~ 28F0:54A7
cs=0x28f0;eip=0x0054aa; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a+2))), dx));	// 98407 mov     word ptr [bp+var_A+2], dx ;~ 28F0:54AA
cs=0x28f0;eip=0x0054ad; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98408 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:54AD
cs=0x28f0;eip=0x0054b3; 	R(JZ(loc_3c998));	// 98409 jz      short loc_3C998 ;~ 28F0:54B3
cs=0x28f0;eip=0x0054b5; 	R(JMP(loc_3ca8f));	// 98410 jmp     loc_3CA8F ;~ 28F0:54B5
loc_3c998:
	// 10637 
cs=0x28f0;eip=0x0054b8; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 8));	// 98414 cmp     word ptr es:[bx+332h], 8 ;~ 28F0:54B8
cs=0x28f0;eip=0x0054be; 	R(JNZ(loc_3c9a3));	// 98415 jnz     short loc_3C9A3 ;~ 28F0:54BE
cs=0x28f0;eip=0x0054c0; 	R(JMP(loc_3ca8f));	// 98416 jmp     loc_3CA8F ;~ 28F0:54C0
loc_3c9a3:
	// 10638 
cs=0x28f0;eip=0x0054c3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 98420 les     bx, [bp+var_A] ;~ 28F0:54C3
cs=0x28f0;eip=0x0054c6; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 98421 mov     ax, es:[bx+12h] ;~ 28F0:54C6
cs=0x28f0;eip=0x0054ca; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 98422 mov     [bp+var_2], ax ;~ 28F0:54CA
cs=0x28f0;eip=0x0054cd; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98423 les     bx, [bp+arg_0] ;~ 28F0:54CD
cs=0x28f0;eip=0x0054d0; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E0))));	// 98424 mov     ax, es:[bx+1E0h] ;~ 28F0:54D0
cs=0x28f0;eip=0x0054d5; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E2))));	// 98425 mov     dx, es:[bx+1E2h] ;~ 28F0:54D5
cs=0x28f0;eip=0x0054da; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 98426 mov     [bp+var_6], ax ;~ 28F0:54DA
cs=0x28f0;eip=0x0054dd; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 98427 mov     [bp+var_4], dx ;~ 28F0:54DD
cs=0x28f0;eip=0x0054e0; 	T(OR(dx, dx));	// 98428 or      dx, dx ;~ 28F0:54E0
cs=0x28f0;eip=0x0054e2; 	R(JL(loc_3c9e3));	// 98429 jl      short loc_3C9E3 ;~ 28F0:54E2
cs=0x28f0;eip=0x0054e4; 	R(JG(loc_3c9ca));	// 98430 jg      short loc_3C9CA ;~ 28F0:54E4
cs=0x28f0;eip=0x0054e6; 	T(OR(ax, ax));	// 98431 or      ax, ax ;~ 28F0:54E6
cs=0x28f0;eip=0x0054e8; 	R(JZ(loc_3c9e3));	// 98432 jz      short loc_3C9E3 ;~ 28F0:54E8
loc_3c9ca:
	// 10639 
cs=0x28f0;eip=0x0054ea; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 98435 mov     ax, word ptr [bp+var_A] ;~ 28F0:54EA
cs=0x28f0;eip=0x0054ed; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 98436 mov     dx, word ptr [bp+var_A+2] ;~ 28F0:54ED
cs=0x28f0;eip=0x0054f0; 	T(ADD(ax, 6));	// 98437 add     ax, 6 ;~ 28F0:54F0
cs=0x28f0;eip=0x0054f3; 	X(PUSH(dx));	// 98438 push    dx ;~ 28F0:54F3
cs=0x28f0;eip=0x0054f4; 	X(PUSH(ax));	// 98439 push    ax ;~ 28F0:54F4
cs=0x28f0;eip=0x0054f5; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 98440 push    [bp+var_2] ;~ 28F0:54F5
cs=0x28f0;eip=0x0054f8; 	T(SUB(ax, ax));	// 98441 sub     ax, ax ;~ 28F0:54F8
cs=0x28f0;eip=0x0054fa; 	X(PUSH(ax));	// 98442 push    ax ;~ 28F0:54FA
cs=0x28f0;eip=0x0054fb; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 98443 push    [bp+var_4] ;~ 28F0:54FB
cs=0x28f0;eip=0x0054fe; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 98444 push    [bp+var_6] ;~ 28F0:54FE
cs=0x28f0;eip=0x005501; 	R(JMP(loc_3ca13));	// 98445 jmp     short loc_3CA13 ;~ 28F0:5501
loc_3c9e3:
	// 10640 
cs=0x28f0;eip=0x005503; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 98450 cmp     [bp+var_4], 0 ;~ 28F0:5503
cs=0x28f0;eip=0x005507; 	R(JGE(loc_3ca18));	// 98451 jge     short loc_3CA18 ;~ 28F0:5507
cs=0x28f0;eip=0x005509; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 98452 mov     ax, word ptr [bp+var_A] ;~ 28F0:5509
cs=0x28f0;eip=0x00550c; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 98453 mov     dx, word ptr [bp+var_A+2] ;~ 28F0:550C
cs=0x28f0;eip=0x00550f; 	T(ADD(ax, 6));	// 98454 add     ax, 6 ;~ 28F0:550F
cs=0x28f0;eip=0x005512; 	X(PUSH(dx));	// 98455 push    dx ;~ 28F0:5512
cs=0x28f0;eip=0x005513; 	X(PUSH(ax));	// 98456 push    ax ;~ 28F0:5513
cs=0x28f0;eip=0x005514; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 98457 mov     ax, [bp+var_2] ;~ 28F0:5514
cs=0x28f0;eip=0x005517; 	T(ADD(ax, 0x5A0));	// 98458 add     ax, 5A0h ;~ 28F0:5517
cs=0x28f0;eip=0x00551a; 	X(PUSH(ax));	// 98459 push    ax ;~ 28F0:551A
cs=0x28f0;eip=0x00551b; 	R(CALLF(sub_24cf8,0));	// 98460 call    sub_24CF8 ;~ 28F0:551B
cs=0x28f0;eip=0x005520; 	X(PUSH(ax));	// 98461 push    ax ;~ 28F0:5520
cs=0x28f0;eip=0x005521; 	T(SUB(ax, ax));	// 98462 sub     ax, ax ;~ 28F0:5521
cs=0x28f0;eip=0x005523; 	X(PUSH(ax));	// 98463 push    ax ;~ 28F0:5523
cs=0x28f0;eip=0x005524; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 98464 mov     ax, [bp+var_6] ;~ 28F0:5524
cs=0x28f0;eip=0x005527; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 98465 mov     dx, [bp+var_4] ;~ 28F0:5527
cs=0x28f0;eip=0x00552a; 	T(NEG(ax));	// 98466 neg     ax ;~ 28F0:552A
cs=0x28f0;eip=0x00552c; 	T(ADC(dx, 0));	// 98467 adc     dx, 0 ;~ 28F0:552C
cs=0x28f0;eip=0x00552f; 	T(NEG(dx));	// 98468 neg     dx ;~ 28F0:552F
cs=0x28f0;eip=0x005531; 	X(PUSH(dx));	// 98469 push    dx ;~ 28F0:5531
cs=0x28f0;eip=0x005532; 	X(PUSH(ax));	// 98470 push    ax ;~ 28F0:5532
loc_3ca13:
	// 10641 
cs=0x28f0;eip=0x005533; 	R(CALLF(sub_2f4ee,0));	// 98473 call    sub_2F4EE ;~ 28F0:5533
loc_3ca18:
	// 10642 
cs=0x28f0;eip=0x005538; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98476 les     bx, [bp+arg_0] ;~ 28F0:5538
cs=0x28f0;eip=0x00553b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E4))));	// 98477 mov     ax, es:[bx+1E4h] ;~ 28F0:553B
cs=0x28f0;eip=0x005540; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E6))));	// 98478 mov     dx, es:[bx+1E6h] ;~ 28F0:5540
cs=0x28f0;eip=0x005545; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 98479 mov     [bp+var_6], ax ;~ 28F0:5545
cs=0x28f0;eip=0x005548; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 98480 mov     [bp+var_4], dx ;~ 28F0:5548
cs=0x28f0;eip=0x00554b; 	T(OR(dx, dx));	// 98481 or      dx, dx ;~ 28F0:554B
cs=0x28f0;eip=0x00554d; 	R(JL(loc_3ca5d));	// 98482 jl      short loc_3CA5D ;~ 28F0:554D
cs=0x28f0;eip=0x00554f; 	R(JG(loc_3ca35));	// 98483 jg      short loc_3CA35 ;~ 28F0:554F
cs=0x28f0;eip=0x005551; 	T(OR(ax, ax));	// 98484 or      ax, ax ;~ 28F0:5551
cs=0x28f0;eip=0x005553; 	R(JZ(loc_3ca5d));	// 98485 jz      short loc_3CA5D ;~ 28F0:5553
loc_3ca35:
	// 10643 
cs=0x28f0;eip=0x005555; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 98488 mov     ax, word ptr [bp+var_A] ;~ 28F0:5555
cs=0x28f0;eip=0x005558; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 98489 mov     dx, word ptr [bp+var_A+2] ;~ 28F0:5558
cs=0x28f0;eip=0x00555b; 	T(ADD(ax, 6));	// 98490 add     ax, 6 ;~ 28F0:555B
cs=0x28f0;eip=0x00555e; 	X(PUSH(dx));	// 98491 push    dx ;~ 28F0:555E
cs=0x28f0;eip=0x00555f; 	X(PUSH(ax));	// 98492 push    ax ;~ 28F0:555F
cs=0x28f0;eip=0x005560; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 98493 mov     ax, [bp+var_2] ;~ 28F0:5560
cs=0x28f0;eip=0x005563; 	T(SUB(ax, 0x2D0));	// 98494 sub     ax, 2D0h ;~ 28F0:5563
cs=0x28f0;eip=0x005566; 	X(PUSH(ax));	// 98495 push    ax ;~ 28F0:5566
cs=0x28f0;eip=0x005567; 	R(CALLF(sub_24cf8,0));	// 98496 call    sub_24CF8 ;~ 28F0:5567
cs=0x28f0;eip=0x00556c; 	X(PUSH(ax));	// 98497 push    ax ;~ 28F0:556C
cs=0x28f0;eip=0x00556d; 	T(SUB(ax, ax));	// 98498 sub     ax, ax ;~ 28F0:556D
cs=0x28f0;eip=0x00556f; 	X(PUSH(ax));	// 98499 push    ax ;~ 28F0:556F
cs=0x28f0;eip=0x005570; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 98500 push    [bp+var_4] ;~ 28F0:5570
cs=0x28f0;eip=0x005573; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 98501 push    [bp+var_6] ;~ 28F0:5573
loc_3ca56:
	// 10644 
cs=0x28f0;eip=0x005576; 	R(CALLF(sub_2f4ee,0));	// 98504 call    sub_2F4EE ;~ 28F0:5576
cs=0x28f0;eip=0x00557b; 	R(JMP(loc_3cabf));	// 98505 jmp     short loc_3CABF ;~ 28F0:557B
loc_3ca5d:
	// 10645 
cs=0x28f0;eip=0x00557d; 	T(CMP(*(dw*)(raddr(ss,bp+var_4)), 0));	// 98510 cmp     [bp+var_4], 0 ;~ 28F0:557D
cs=0x28f0;eip=0x005581; 	R(JGE(loc_3cabf));	// 98511 jge     short loc_3CABF ;~ 28F0:5581
cs=0x28f0;eip=0x005583; 	T(MOV(ax, *(dw*)((dw*)(raddr(ss,bp+var_a)))));	// 98512 mov     ax, word ptr [bp+var_A] ;~ 28F0:5583
cs=0x28f0;eip=0x005586; 	T(MOV(dx, *(dw*)((dw*)(raddr(ss,bp+var_a+2)))));	// 98513 mov     dx, word ptr [bp+var_A+2] ;~ 28F0:5586
cs=0x28f0;eip=0x005589; 	T(ADD(ax, 6));	// 98514 add     ax, 6 ;~ 28F0:5589
cs=0x28f0;eip=0x00558c; 	X(PUSH(dx));	// 98515 push    dx ;~ 28F0:558C
cs=0x28f0;eip=0x00558d; 	X(PUSH(ax));	// 98516 push    ax ;~ 28F0:558D
cs=0x28f0;eip=0x00558e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 98517 mov     ax, [bp+var_2] ;~ 28F0:558E
cs=0x28f0;eip=0x005591; 	T(SUB(ax, 0x870));	// 98518 sub     ax, 870h ;~ 28F0:5591
cs=0x28f0;eip=0x005594; 	X(PUSH(ax));	// 98519 push    ax ;~ 28F0:5594
cs=0x28f0;eip=0x005595; 	R(CALLF(sub_24cf8,0));	// 98520 call    sub_24CF8 ;~ 28F0:5595
cs=0x28f0;eip=0x00559a; 	X(PUSH(ax));	// 98521 push    ax ;~ 28F0:559A
cs=0x28f0;eip=0x00559b; 	T(SUB(ax, ax));	// 98522 sub     ax, ax ;~ 28F0:559B
cs=0x28f0;eip=0x00559d; 	X(PUSH(ax));	// 98523 push    ax ;~ 28F0:559D
cs=0x28f0;eip=0x00559e; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 98524 mov     ax, [bp+var_6] ;~ 28F0:559E
cs=0x28f0;eip=0x0055a1; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4))));	// 98525 mov     dx, [bp+var_4] ;~ 28F0:55A1
cs=0x28f0;eip=0x0055a4; 	T(NEG(ax));	// 98526 neg     ax ;~ 28F0:55A4
cs=0x28f0;eip=0x0055a6; 	T(ADC(dx, 0));	// 98527 adc     dx, 0 ;~ 28F0:55A6
cs=0x28f0;eip=0x0055a9; 	T(NEG(dx));	// 98528 neg     dx ;~ 28F0:55A9
cs=0x28f0;eip=0x0055ab; 	X(PUSH(dx));	// 98529 push    dx ;~ 28F0:55AB
cs=0x28f0;eip=0x0055ac; 	X(PUSH(ax));	// 98530 push    ax ;~ 28F0:55AC
cs=0x28f0;eip=0x0055ad; 	R(JMP(loc_3ca56));	// 98531 jmp     short loc_3CA56 ;~ 28F0:55AD
loc_3ca8f:
	// 10646 
cs=0x28f0;eip=0x0055af; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98536 les     bx, [bp+arg_0] ;~ 28F0:55AF
cs=0x28f0;eip=0x0055b2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E0))));	// 98537 mov     ax, es:[bx+1E0h] ;~ 28F0:55B2
cs=0x28f0;eip=0x0055b7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E2))));	// 98538 mov     dx, es:[bx+1E2h] ;~ 28F0:55B7
cs=0x28f0;eip=0x0055bc; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 98539 les     bx, [bp+var_A] ;~ 28F0:55BC
cs=0x28f0;eip=0x0055bf; 	X(ADD(*(dw*)(raddr(es,bx+0x0E)), ax));	// 98540 add     es:[bx+0Eh], ax ;~ 28F0:55BF
cs=0x28f0;eip=0x0055c3; 	X(ADC(*(dw*)(raddr(es,bx+0x10)), dx));	// 98541 adc     es:[bx+10h], dx ;~ 28F0:55C3
cs=0x28f0;eip=0x0055c7; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98542 les     bx, [bp+arg_0] ;~ 28F0:55C7
cs=0x28f0;eip=0x0055ca; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E4))));	// 98543 mov     ax, es:[bx+1E4h] ;~ 28F0:55CA
cs=0x28f0;eip=0x0055cf; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1E6))));	// 98544 mov     dx, es:[bx+1E6h] ;~ 28F0:55CF
cs=0x28f0;eip=0x0055d4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 98545 les     bx, [bp+var_A] ;~ 28F0:55D4
cs=0x28f0;eip=0x0055d7; 	X(ADD(*(dw*)(raddr(es,bx+6)), ax));	// 98546 add     es:[bx+6], ax ;~ 28F0:55D7
cs=0x28f0;eip=0x0055db; 	X(ADC(*(dw*)(raddr(es,bx+8)), dx));	// 98547 adc     es:[bx+8], dx ;~ 28F0:55DB
loc_3cabf:
	// 10647 
cs=0x28f0;eip=0x0055df; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98551 les     bx, [bp+arg_0] ;~ 28F0:55DF
cs=0x28f0;eip=0x0055e2; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1E8))));	// 98552 mov     ax, es:[bx+1E8h] ;~ 28F0:55E2
cs=0x28f0;eip=0x0055e7; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1EA))));	// 98553 mov     dx, es:[bx+1EAh] ;~ 28F0:55E7
cs=0x28f0;eip=0x0055ec; 	T(NEG(ax));	// 98554 neg     ax ;~ 28F0:55EC
cs=0x28f0;eip=0x0055ee; 	T(ADC(dx, 0));	// 98555 adc     dx, 0 ;~ 28F0:55EE
cs=0x28f0;eip=0x0055f1; 	T(NEG(dx));	// 98556 neg     dx ;~ 28F0:55F1
cs=0x28f0;eip=0x0055f3; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 98557 les     bx, [bp+var_A] ;~ 28F0:55F3
cs=0x28f0;eip=0x0055f6; 	X(ADD(*(dw*)(raddr(es,bx+0x0A)), ax));	// 98558 add     es:[bx+0Ah], ax ;~ 28F0:55F6
cs=0x28f0;eip=0x0055fa; 	X(ADC(*(dw*)(raddr(es,bx+0x0C)), dx));	// 98559 adc     es:[bx+0Ch], dx ;~ 28F0:55FA
cs=0x28f0;eip=0x0055fe; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98560 les     bx, [bp+arg_0] ;~ 28F0:55FE
cs=0x28f0;eip=0x005601; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 98561 mov     ax, es:[bx+2FAh] ;~ 28F0:5601
cs=0x28f0;eip=0x005606; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 98562 mov     dx, es:[bx+2FCh] ;~ 28F0:5606
cs=0x28f0;eip=0x00560b; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 98563 add     ax, es:[bx+302h] ;~ 28F0:560B
cs=0x28f0;eip=0x005610; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 98564 adc     dx, es:[bx+304h] ;~ 28F0:5610
cs=0x28f0;eip=0x005615; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 98565 les     bx, [bp+var_A] ;~ 28F0:5615
cs=0x28f0;eip=0x005618; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 98566 cmp     dx, es:[bx+0Ch] ;~ 28F0:5618
cs=0x28f0;eip=0x00561c; 	R(JG(loc_3cb0e));	// 98567 jg      short loc_3CB0E ;~ 28F0:561C
cs=0x28f0;eip=0x00561e; 	R(JL(loc_3cb06));	// 98568 jl      short loc_3CB06 ;~ 28F0:561E
cs=0x28f0;eip=0x005620; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 98569 cmp     ax, es:[bx+0Ah] ;~ 28F0:5620
cs=0x28f0;eip=0x005624; 	R(JNC(loc_3cb0e));	// 98570 jnb     short loc_3CB0E ;~ 28F0:5624
loc_3cb06:
	// 10648 
cs=0x28f0;eip=0x005626; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 98573 mov     dx, es:[bx+0Ch] ;~ 28F0:5626
cs=0x28f0;eip=0x00562a; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 98574 mov     ax, es:[bx+0Ah] ;~ 28F0:562A
loc_3cb0e:
	// 10649 
cs=0x28f0;eip=0x00562e; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 98578 mov     es:[bx+0Ah], ax ;~ 28F0:562E
cs=0x28f0;eip=0x005632; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 98579 mov     es:[bx+0Ch], dx ;~ 28F0:5632
cs=0x28f0;eip=0x005636; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 98580 mov     ax, es:[bx+6] ;~ 28F0:5636
cs=0x28f0;eip=0x00563a; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 98581 mov     dx, es:[bx+8] ;~ 28F0:563A
cs=0x28f0;eip=0x00563e; 	T(CMP(dx, *(dw*)((&unk_57000))));	// 98582 cmp     dx, word ptr unk_57000 ;~ 28F0:563E
cs=0x28f0;eip=0x005642; 	R(JG(loc_3cb33));	// 98583 jg      short loc_3CB33 ;~ 28F0:5642
cs=0x28f0;eip=0x005644; 	R(JL(loc_3cb2c));	// 98584 jl      short loc_3CB2C ;~ 28F0:5644
cs=0x28f0;eip=0x005646; 	T(CMP(ax, *(dw*)((&unk_56ffe))));	// 98585 cmp     ax, word ptr unk_56FFE ;~ 28F0:5646
cs=0x28f0;eip=0x00564a; 	R(JNC(loc_3cb33));	// 98586 jnb     short loc_3CB33 ;~ 28F0:564A
loc_3cb2c:
	// 10650 
cs=0x28f0;eip=0x00564c; 	T(MOV(dx, *(dw*)((&unk_57000))));	// 98589 mov     dx, word ptr unk_57000 ;~ 28F0:564C
cs=0x28f0;eip=0x005650; 	T(MOV(ax, *(dw*)((&unk_56ffe))));	// 98590 mov     ax, word ptr unk_56FFE ;~ 28F0:5650
loc_3cb33:
	// 10651 
cs=0x28f0;eip=0x005653; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 98594 mov     es:[bx+6], ax ;~ 28F0:5653
cs=0x28f0;eip=0x005657; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 98595 mov     es:[bx+8], dx ;~ 28F0:5657
cs=0x28f0;eip=0x00565b; 	T(CMP(dx, *(dw*)((&unk_57004))));	// 98596 cmp     dx, word ptr unk_57004 ;~ 28F0:565B
cs=0x28f0;eip=0x00565f; 	R(JL(loc_3cb50));	// 98597 jl      short loc_3CB50 ;~ 28F0:565F
cs=0x28f0;eip=0x005661; 	R(JG(loc_3cb49));	// 98598 jg      short loc_3CB49 ;~ 28F0:5661
cs=0x28f0;eip=0x005663; 	T(CMP(ax, *(dw*)((&unk_57002))));	// 98599 cmp     ax, word ptr unk_57002 ;~ 28F0:5663
cs=0x28f0;eip=0x005667; 	R(JBE(loc_3cb50));	// 98600 jbe     short loc_3CB50 ;~ 28F0:5667
loc_3cb49:
	// 10652 
cs=0x28f0;eip=0x005669; 	T(MOV(dx, *(dw*)((&unk_57004))));	// 98603 mov     dx, word ptr unk_57004 ;~ 28F0:5669
cs=0x28f0;eip=0x00566d; 	T(MOV(ax, *(dw*)((&unk_57002))));	// 98604 mov     ax, word ptr unk_57002 ;~ 28F0:566D
loc_3cb50:
	// 10653 
cs=0x28f0;eip=0x005670; 	X(MOV(*(dw*)(raddr(es,bx+6)), ax));	// 98608 mov     es:[bx+6], ax ;~ 28F0:5670
cs=0x28f0;eip=0x005674; 	X(MOV(*(dw*)(raddr(es,bx+8)), dx));	// 98609 mov     es:[bx+8], dx ;~ 28F0:5674
cs=0x28f0;eip=0x005678; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 98610 mov     ax, es:[bx+0Eh] ;~ 28F0:5678
cs=0x28f0;eip=0x00567c; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 98611 mov     dx, es:[bx+10h] ;~ 28F0:567C
cs=0x28f0;eip=0x005680; 	T(CMP(dx, *(dw*)((&unk_57008))));	// 98612 cmp     dx, word ptr unk_57008 ;~ 28F0:5680
cs=0x28f0;eip=0x005684; 	R(JG(loc_3cb75));	// 98613 jg      short loc_3CB75 ;~ 28F0:5684
cs=0x28f0;eip=0x005686; 	R(JL(loc_3cb6e));	// 98614 jl      short loc_3CB6E ;~ 28F0:5686
cs=0x28f0;eip=0x005688; 	T(CMP(ax, *(dw*)((&unk_57006))));	// 98615 cmp     ax, word ptr unk_57006 ;~ 28F0:5688
cs=0x28f0;eip=0x00568c; 	R(JNC(loc_3cb75));	// 98616 jnb     short loc_3CB75 ;~ 28F0:568C
loc_3cb6e:
	// 10654 
cs=0x28f0;eip=0x00568e; 	T(MOV(dx, *(dw*)((&unk_57008))));	// 98619 mov     dx, word ptr unk_57008 ;~ 28F0:568E
cs=0x28f0;eip=0x005692; 	T(MOV(ax, *(dw*)((&unk_57006))));	// 98620 mov     ax, word ptr unk_57006 ;~ 28F0:5692
loc_3cb75:
	// 10655 
cs=0x28f0;eip=0x005695; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 98624 mov     es:[bx+0Eh], ax ;~ 28F0:5695
cs=0x28f0;eip=0x005699; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 98625 mov     es:[bx+10h], dx ;~ 28F0:5699
cs=0x28f0;eip=0x00569d; 	T(CMP(dx, *(dw*)((&unk_5700c))));	// 98626 cmp     dx, word ptr unk_5700C ;~ 28F0:569D
cs=0x28f0;eip=0x0056a1; 	R(JL(loc_3cb92));	// 98627 jl      short loc_3CB92 ;~ 28F0:56A1
cs=0x28f0;eip=0x0056a3; 	R(JG(loc_3cb8b));	// 98628 jg      short loc_3CB8B ;~ 28F0:56A3
cs=0x28f0;eip=0x0056a5; 	T(CMP(ax, *(dw*)((&unk_5700a))));	// 98629 cmp     ax, word ptr unk_5700A ;~ 28F0:56A5
cs=0x28f0;eip=0x0056a9; 	R(JBE(loc_3cb92));	// 98630 jbe     short loc_3CB92 ;~ 28F0:56A9
loc_3cb8b:
	// 10656 
cs=0x28f0;eip=0x0056ab; 	T(MOV(dx, *(dw*)((&unk_5700c))));	// 98633 mov     dx, word ptr unk_5700C ;~ 28F0:56AB
cs=0x28f0;eip=0x0056af; 	T(MOV(ax, *(dw*)((&unk_5700a))));	// 98634 mov     ax, word ptr unk_5700A ;~ 28F0:56AF
loc_3cb92:
	// 10657 
cs=0x28f0;eip=0x0056b2; 	X(MOV(*(dw*)(raddr(es,bx+0x0E)), ax));	// 98638 mov     es:[bx+0Eh], ax ;~ 28F0:56B2
cs=0x28f0;eip=0x0056b6; 	X(MOV(*(dw*)(raddr(es,bx+0x10)), dx));	// 98639 mov     es:[bx+10h], dx ;~ 28F0:56B6
cs=0x28f0;eip=0x0056ba; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98640 les     bx, [bp+arg_0] ;~ 28F0:56BA
cs=0x28f0;eip=0x0056bd; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0C0))));	// 98641 mov     ax, es:[bx+0C0h] ;~ 28F0:56BD
cs=0x28f0;eip=0x0056c2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C2))));	// 98642 mov     dx, es:[bx+0C2h] ;~ 28F0:56C2
cs=0x28f0;eip=0x0056c7; 	T(MOV(cl, 5));	// 98643 mov     cl, 5 ;~ 28F0:56C7
cs=0x28f0;eip=0x0056c9; 	R(CALLF(sub_10240,0));	// 98644 call    sub_10240 ;~ 28F0:56C9
cs=0x28f0;eip=0x0056ce; 	X(PUSH(ax));	// 98645 push    ax ;~ 28F0:56CE
cs=0x28f0;eip=0x0056cf; 	R(CALLF(sub_24cf8,0));	// 98646 call    sub_24CF8 ;~ 28F0:56CF
cs=0x28f0;eip=0x0056d4; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 98647 les     bx, [bp+var_A] ;~ 28F0:56D4
cs=0x28f0;eip=0x0056d7; 	X(MOV(*(dw*)(raddr(es,bx+0x16)), ax));	// 98648 mov     es:[bx+16h], ax ;~ 28F0:56D7
cs=0x28f0;eip=0x0056db; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98649 les     bx, [bp+arg_0] ;~ 28F0:56DB
cs=0x28f0;eip=0x0056de; 	T(MOV(al, *(raddr(es,bx+0x214))));	// 98650 mov     al, es:[bx+214h] ;~ 28F0:56DE
cs=0x28f0;eip=0x0056e3; 	T(CBW);	// 98651 cbw ;~ 28F0:56E3
cs=0x28f0;eip=0x0056e4; 	T(CWD);	// 98652 cwd ;~ 28F0:56E4
cs=0x28f0;eip=0x0056e5; 	T(MOV(dh, dl));	// 98653 mov     dh, dl ;~ 28F0:56E5
cs=0x28f0;eip=0x0056e7; 	T(MOV(dl, ah));	// 98654 mov     dl, ah ;~ 28F0:56E7
cs=0x28f0;eip=0x0056e9; 	T(MOV(ah, al));	// 98655 mov     ah, al ;~ 28F0:56E9
cs=0x28f0;eip=0x0056eb; 	T(SUB(al, al));	// 98656 sub     al, al ;~ 28F0:56EB
cs=0x28f0;eip=0x0056ed; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x0E0))));	// 98657 add     ax, es:[bx+0E0h] ;~ 28F0:56ED
cs=0x28f0;eip=0x0056f2; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x0E2))));	// 98658 adc     dx, es:[bx+0E2h] ;~ 28F0:56F2
cs=0x28f0;eip=0x0056f7; 	T(MOV(cl, 5));	// 98659 mov     cl, 5 ;~ 28F0:56F7
cs=0x28f0;eip=0x0056f9; 	R(CALLF(sub_10240,0));	// 98660 call    sub_10240 ;~ 28F0:56F9
cs=0x28f0;eip=0x0056fe; 	X(PUSH(ax));	// 98661 push    ax ;~ 28F0:56FE
cs=0x28f0;eip=0x0056ff; 	R(CALLF(sub_24cf8,0));	// 98662 call    sub_24CF8 ;~ 28F0:56FF
cs=0x28f0;eip=0x005704; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 98663 les     bx, [bp+var_A] ;~ 28F0:5704
cs=0x28f0;eip=0x005707; 	X(MOV(*(dw*)(raddr(es,bx+0x14)), ax));	// 98664 mov     es:[bx+14h], ax ;~ 28F0:5707
cs=0x28f0;eip=0x00570b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98665 les     bx, [bp+arg_0] ;~ 28F0:570B
cs=0x28f0;eip=0x00570e; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98666 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:570E
cs=0x28f0;eip=0x005714; 	R(JNZ(loc_3cc02));	// 98667 jnz     short loc_3CC02 ;~ 28F0:5714
cs=0x28f0;eip=0x005716; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 98668 mov     ax, es:[bx+100h] ;~ 28F0:5716
cs=0x28f0;eip=0x00571b; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 98669 mov     dx, es:[bx+102h] ;~ 28F0:571B
cs=0x28f0;eip=0x005720; 	R(JMP(loc_3cc13));	// 98670 jmp     short loc_3CC13 ;~ 28F0:5720
loc_3cc02:
	// 10658 
cs=0x28f0;eip=0x005722; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x100))));	// 98674 mov     ax, es:[bx+100h] ;~ 28F0:5722
cs=0x28f0;eip=0x005727; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x102))));	// 98675 mov     dx, es:[bx+102h] ;~ 28F0:5727
cs=0x28f0;eip=0x00572c; 	T(NEG(ax));	// 98676 neg     ax ;~ 28F0:572C
cs=0x28f0;eip=0x00572e; 	T(ADC(dx, 0));	// 98677 adc     dx, 0 ;~ 28F0:572E
cs=0x28f0;eip=0x005731; 	T(NEG(dx));	// 98678 neg     dx ;~ 28F0:5731
loc_3cc13:
	// 10659 
cs=0x28f0;eip=0x005733; 	T(MOV(cl, 5));	// 98681 mov     cl, 5 ;~ 28F0:5733
cs=0x28f0;eip=0x005735; 	R(CALLF(sub_10240,0));	// 98682 call    sub_10240 ;~ 28F0:5735
cs=0x28f0;eip=0x00573a; 	X(PUSH(ax));	// 98683 push    ax ;~ 28F0:573A
cs=0x28f0;eip=0x00573b; 	R(CALLF(sub_24cf8,0));	// 98684 call    sub_24CF8 ;~ 28F0:573B
cs=0x28f0;eip=0x005740; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a))));	// 98685 les     bx, [bp+var_A] ;~ 28F0:5740
cs=0x28f0;eip=0x005743; 	X(MOV(*(dw*)(raddr(es,bx+0x12)), ax));	// 98686 mov     es:[bx+12h], ax ;~ 28F0:5743
cs=0x28f0;eip=0x005747; 	T(MOV(sp, bp));	// 98687 mov     sp, bp ;~ 28F0:5747
cs=0x28f0;eip=0x005749; 	X(POP(bp));	// 98688 pop     bp ;~ 28F0:5749
cs=0x28f0;eip=0x00574a; 	R(RETN(4));	// 98689 retn    4 ;~ 28F0:574A
sub_3cc2d:
	// 98697 
#undef var_6
#define var_6 -6
	// 98699 var_6           = word ptr -6 ;~ 28F0:574D
#undef var_4
#define var_4 -4
	// 98700 var_4           = word ptr -4 ;~ 28F0:574D
#undef var_2
#define var_2 -2
	// 98701 var_2           = word ptr -2 ;~ 28F0:574D
#undef arg_0
#define arg_0 4
	// 98702 arg_0           = dword ptr  4 ;~ 28F0:574D
cs=0x28f0;eip=0x00574d; 	X(PUSH(bp));	// 98704 push    bp ;~ 28F0:574D
cs=0x28f0;eip=0x00574e; 	T(MOV(bp, sp));	// 98705 mov     bp, sp ;~ 28F0:574E
cs=0x28f0;eip=0x005750; 	T(SUB(sp, 6));	// 98706 sub     sp, 6 ;~ 28F0:5750
cs=0x28f0;eip=0x005753; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98707 les     bx, [bp+arg_0] ;~ 28F0:5753
cs=0x28f0;eip=0x005756; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 98708 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:5756
cs=0x28f0;eip=0x00575c; 	R(JG(loc_3cc65));	// 98709 jg      short loc_3CC65 ;~ 28F0:575C
cs=0x28f0;eip=0x00575e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 98710 mov     ax, es:[bx+2FAh] ;~ 28F0:575E
cs=0x28f0;eip=0x005763; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 98711 mov     dx, es:[bx+2FCh] ;~ 28F0:5763
cs=0x28f0;eip=0x005768; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 98712 add     ax, es:[bx+302h] ;~ 28F0:5768
cs=0x28f0;eip=0x00576d; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 98713 adc     dx, es:[bx+304h] ;~ 28F0:576D
cs=0x28f0;eip=0x005772; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 98714 les     bx, es:[bx+31Ch] ;~ 28F0:5772
cs=0x28f0;eip=0x005777; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 98715 cmp     dx, es:[bx+0Ch] ;~ 28F0:5777
cs=0x28f0;eip=0x00577b; 	R(JL(loc_3cc65));	// 98716 jl      short loc_3CC65 ;~ 28F0:577B
cs=0x28f0;eip=0x00577d; 	R(JG(loc_3ccd1));	// 98717 jg      short loc_3CCD1 ;~ 28F0:577D
cs=0x28f0;eip=0x00577f; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 98718 cmp     ax, es:[bx+0Ah] ;~ 28F0:577F
cs=0x28f0;eip=0x005783; 	R(JNC(loc_3ccd1));	// 98719 jnb     short loc_3CCD1 ;~ 28F0:5783
loc_3cc65:
	// 10660 
cs=0x28f0;eip=0x005785; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98723 les     bx, [bp+arg_0] ;~ 28F0:5785
cs=0x28f0;eip=0x005788; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 98724 cmp     word ptr es:[bx+306h], 1 ;~ 28F0:5788
cs=0x28f0;eip=0x00578e; 	R(JNZ(loc_3ccd1));	// 98725 jnz     short loc_3CCD1 ;~ 28F0:578E
cs=0x28f0;eip=0x005790; 	X(PUSH(*(dw*)(raddr(es,bx+0x1FC))));	// 98726 push    word ptr es:[bx+1FCh] ;~ 28F0:5790
cs=0x28f0;eip=0x005795; 	R(CALLF(sub_24cf8,0));	// 98727 call    sub_24CF8 ;~ 28F0:5795
cs=0x28f0;eip=0x00579a; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 98728 mov     [bp+var_2], ax ;~ 28F0:579A
cs=0x28f0;eip=0x00579d; 	T(MOV(ax, 0x100));	// 98729 mov     ax, 100h ;~ 28F0:579D
cs=0x28f0;eip=0x0057a0; 	T(CWD);	// 98730 cwd ;~ 28F0:57A0
cs=0x28f0;eip=0x0057a1; 	X(PUSH(dx));	// 98731 push    dx ;~ 28F0:57A1
cs=0x28f0;eip=0x0057a2; 	X(PUSH(ax));	// 98732 push    ax ;~ 28F0:57A2
cs=0x28f0;eip=0x0057a3; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98733 mov     ax, word ptr unk_57111 ;~ 28F0:57A3
cs=0x28f0;eip=0x0057a6; 	T(CWD);	// 98734 cwd ;~ 28F0:57A6
cs=0x28f0;eip=0x0057a7; 	X(PUSH(dx));	// 98735 push    dx ;~ 28F0:57A7
cs=0x28f0;eip=0x0057a8; 	X(PUSH(ax));	// 98736 push    ax ;~ 28F0:57A8
cs=0x28f0;eip=0x0057a9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98737 les     bx, [bp+arg_0] ;~ 28F0:57A9
cs=0x28f0;eip=0x0057ac; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1FE))));	// 98738 mov     ax, es:[bx+1FEh] ;~ 28F0:57AC
cs=0x28f0;eip=0x0057b1; 	T(CWD);	// 98739 cwd ;~ 28F0:57B1
cs=0x28f0;eip=0x0057b2; 	T(MOV(dh, dl));	// 98740 mov     dh, dl ;~ 28F0:57B2
cs=0x28f0;eip=0x0057b4; 	T(MOV(dl, ah));	// 98741 mov     dl, ah ;~ 28F0:57B4
cs=0x28f0;eip=0x0057b6; 	T(MOV(ah, al));	// 98742 mov     ah, al ;~ 28F0:57B6
cs=0x28f0;eip=0x0057b8; 	T(SUB(al, al));	// 98743 sub     al, al ;~ 28F0:57B8
cs=0x28f0;eip=0x0057ba; 	X(PUSH(dx));	// 98744 push    dx ;~ 28F0:57BA
cs=0x28f0;eip=0x0057bb; 	X(PUSH(ax));	// 98745 push    ax ;~ 28F0:57BB
cs=0x28f0;eip=0x0057bc; 	R(CALLF(sub_105c2,0));	// 98746 call    sub_105C2 ;~ 28F0:57BC
cs=0x28f0;eip=0x0057c1; 	X(PUSH(dx));	// 98747 push    dx ;~ 28F0:57C1
cs=0x28f0;eip=0x0057c2; 	X(PUSH(ax));	// 98748 push    ax ;~ 28F0:57C2
cs=0x28f0;eip=0x0057c3; 	R(CALLF(sub_10526,0));	// 98749 call    sub_10526 ;~ 28F0:57C3
cs=0x28f0;eip=0x0057c8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 98750 mov     [bp+var_6], ax ;~ 28F0:57C8
cs=0x28f0;eip=0x0057cb; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), dx));	// 98751 mov     [bp+var_4], dx ;~ 28F0:57CB
cs=0x28f0;eip=0x0057ce; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98752 les     bx, [bp+arg_0] ;~ 28F0:57CE
cs=0x28f0;eip=0x0057d1; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 98753 mov     ax, es:[bx+31Ch] ;~ 28F0:57D1
cs=0x28f0;eip=0x0057d6; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 98754 mov     dx, es:[bx+31Eh] ;~ 28F0:57D6
cs=0x28f0;eip=0x0057db; 	T(ADD(ax, 6));	// 98755 add     ax, 6 ;~ 28F0:57DB
cs=0x28f0;eip=0x0057de; 	X(PUSH(dx));	// 98756 push    dx ;~ 28F0:57DE
cs=0x28f0;eip=0x0057df; 	X(PUSH(ax));	// 98757 push    ax ;~ 28F0:57DF
cs=0x28f0;eip=0x0057e0; 	X(PUSH(*(dw*)(raddr(ss,bp+var_2))));	// 98758 push    [bp+var_2] ;~ 28F0:57E0
cs=0x28f0;eip=0x0057e3; 	T(SUB(ax, ax));	// 98759 sub     ax, ax ;~ 28F0:57E3
cs=0x28f0;eip=0x0057e5; 	X(PUSH(ax));	// 98760 push    ax ;~ 28F0:57E5
cs=0x28f0;eip=0x0057e6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_4))));	// 98761 push    [bp+var_4] ;~ 28F0:57E6
cs=0x28f0;eip=0x0057e9; 	X(PUSH(*(dw*)(raddr(ss,bp+var_6))));	// 98762 push    [bp+var_6] ;~ 28F0:57E9
cs=0x28f0;eip=0x0057ec; 	R(CALLF(sub_2f4ee,0));	// 98763 call    sub_2F4EE ;~ 28F0:57EC
loc_3ccd1:
	// 10661 
cs=0x28f0;eip=0x0057f1; 	T(MOV(sp, bp));	// 98767 mov     sp, bp ;~ 28F0:57F1
cs=0x28f0;eip=0x0057f3; 	X(POP(bp));	// 98768 pop     bp ;~ 28F0:57F3
cs=0x28f0;eip=0x0057f4; 	R(RETN(4));	// 98769 retn    4 ;~ 28F0:57F4
sub_3ccd7:
	// 98777 
#undef var_8
#define var_8 -8
	// 98779 var_8           = word ptr -8 ;~ 28F0:57F7
#undef var_6
#define var_6 -6
	// 98780 var_6           = word ptr -6 ;~ 28F0:57F7
#undef var_4
#define var_4 -4
	// 98781 var_4           = word ptr -4 ;~ 28F0:57F7
#undef var_2
#define var_2 -2
	// 98782 var_2           = word ptr -2 ;~ 28F0:57F7
#undef arg_0
#define arg_0 4
	// 98783 arg_0           = dword ptr  4 ;~ 28F0:57F7
cs=0x28f0;eip=0x0057f7; 	X(PUSH(bp));	// 98785 push    bp ;~ 28F0:57F7
cs=0x28f0;eip=0x0057f8; 	T(MOV(bp, sp));	// 98786 mov     bp, sp ;~ 28F0:57F8
cs=0x28f0;eip=0x0057fa; 	T(SUB(sp, 8));	// 98787 sub     sp, 8 ;~ 28F0:57FA
cs=0x28f0;eip=0x0057fd; 	X(PUSH(si));	// 98788 push    si ;~ 28F0:57FD
cs=0x28f0;eip=0x0057fe; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98789 les     bx, [bp+arg_0] ;~ 28F0:57FE
cs=0x28f0;eip=0x005801; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 98790 mov     ax, es:[bx+2FAh] ;~ 28F0:5801
cs=0x28f0;eip=0x005806; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 98791 mov     dx, es:[bx+2FCh] ;~ 28F0:5806
cs=0x28f0;eip=0x00580b; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 98792 add     ax, es:[bx+302h] ;~ 28F0:580B
cs=0x28f0;eip=0x005810; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 98793 adc     dx, es:[bx+304h] ;~ 28F0:5810
cs=0x28f0;eip=0x005815; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x1EC))));	// 98794 add     ax, es:[bx+1ECh] ;~ 28F0:5815
cs=0x28f0;eip=0x00581a; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x1EE))));	// 98795 adc     dx, es:[bx+1EEh] ;~ 28F0:581A
cs=0x28f0;eip=0x00581f; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 98796 mov     [bp+var_4], ax ;~ 28F0:581F
cs=0x28f0;eip=0x005822; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), dx));	// 98797 mov     [bp+var_2], dx ;~ 28F0:5822
cs=0x28f0;eip=0x005825; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 2));	// 98798 cmp     word ptr es:[bx+332h], 2 ;~ 28F0:5825
cs=0x28f0;eip=0x00582b; 	R(JG(loc_3cd3a));	// 98799 jg      short loc_3CD3A ;~ 28F0:582B
cs=0x28f0;eip=0x00582d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x2FA))));	// 98800 mov     ax, es:[bx+2FAh] ;~ 28F0:582D
cs=0x28f0;eip=0x005832; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x2FC))));	// 98801 mov     dx, es:[bx+2FCh] ;~ 28F0:5832
cs=0x28f0;eip=0x005837; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x302))));	// 98802 add     ax, es:[bx+302h] ;~ 28F0:5837
cs=0x28f0;eip=0x00583c; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x304))));	// 98803 adc     dx, es:[bx+304h] ;~ 28F0:583C
cs=0x28f0;eip=0x005841; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 98804 les     bx, es:[bx+31Ch] ;~ 28F0:5841
cs=0x28f0;eip=0x005846; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 98805 cmp     dx, es:[bx+0Ch] ;~ 28F0:5846
cs=0x28f0;eip=0x00584a; 	R(JL(loc_3cd3a));	// 98806 jl      short loc_3CD3A ;~ 28F0:584A
cs=0x28f0;eip=0x00584c; 	R(JLE(loc_3cd31));	// 98807 jle     short loc_3CD31 ;~ 28F0:584C
cs=0x28f0;eip=0x00584e; 	R(JMP(loc_3cf13));	// 98808 jmp     loc_3CF13 ;~ 28F0:584E
loc_3cd31:
	// 10662 
cs=0x28f0;eip=0x005851; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 98812 cmp     ax, es:[bx+0Ah] ;~ 28F0:5851
cs=0x28f0;eip=0x005855; 	R(JC(loc_3cd3a));	// 98813 jb      short loc_3CD3A ;~ 28F0:5855
cs=0x28f0;eip=0x005857; 	R(JMP(loc_3cf13));	// 98814 jmp     loc_3CF13 ;~ 28F0:5857
loc_3cd3a:
	// 10663 
cs=0x28f0;eip=0x00585a; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98819 les     bx, [bp+arg_0] ;~ 28F0:585A
cs=0x28f0;eip=0x00585d; 	T(MOV(ax, word_5705a));	// 98820 mov     ax, word_5705A ;~ 28F0:585D
cs=0x28f0;eip=0x005860; 	T(MOV(dx, word_5705c));	// 98821 mov     dx, word_5705C ;~ 28F0:5860
cs=0x28f0;eip=0x005864; 	T(CMP(*(dw*)(raddr(es,bx+0x1F6)), dx));	// 98822 cmp     es:[bx+1F6h], dx ;~ 28F0:5864
cs=0x28f0;eip=0x005869; 	R(JLE(loc_3cd4e));	// 98823 jle     short loc_3CD4E ;~ 28F0:5869
cs=0x28f0;eip=0x00586b; 	R(JMP(loc_3cf13));	// 98824 jmp     loc_3CF13 ;~ 28F0:586B
loc_3cd4e:
	// 10664 
cs=0x28f0;eip=0x00586e; 	R(JL(loc_3cd5a));	// 98828 jl      short loc_3CD5A ;~ 28F0:586E
cs=0x28f0;eip=0x005870; 	T(CMP(*(dw*)(raddr(es,bx+0x1F4)), ax));	// 98829 cmp     es:[bx+1F4h], ax ;~ 28F0:5870
cs=0x28f0;eip=0x005875; 	R(JBE(loc_3cd5a));	// 98830 jbe     short loc_3CD5A ;~ 28F0:5875
cs=0x28f0;eip=0x005877; 	R(JMP(loc_3cf13));	// 98831 jmp     loc_3CF13 ;~ 28F0:5877
loc_3cd5a:
	// 10665 
cs=0x28f0;eip=0x00587a; 	T(MOV(ax, word_5705a));	// 98836 mov     ax, word_5705A ;~ 28F0:587A
cs=0x28f0;eip=0x00587d; 	T(MOV(dx, word_5705c));	// 98837 mov     dx, word_5705C ;~ 28F0:587D
cs=0x28f0;eip=0x005881; 	T(CMP(*(dw*)(raddr(es,bx+0x1FA)), dx));	// 98838 cmp     es:[bx+1FAh], dx ;~ 28F0:5881
cs=0x28f0;eip=0x005886; 	R(JL(loc_3cda9));	// 98839 jl      short loc_3CDA9 ;~ 28F0:5886
cs=0x28f0;eip=0x005888; 	R(JG(loc_3cd71));	// 98840 jg      short loc_3CD71 ;~ 28F0:5888
cs=0x28f0;eip=0x00588a; 	T(CMP(*(dw*)(raddr(es,bx+0x1F8)), ax));	// 98841 cmp     es:[bx+1F8h], ax ;~ 28F0:588A
cs=0x28f0;eip=0x00588f; 	R(JBE(loc_3cda9));	// 98842 jbe     short loc_3CDA9 ;~ 28F0:588F
loc_3cd71:
	// 10666 
cs=0x28f0;eip=0x005891; 	T(MOV(ax, 0x100));	// 98845 mov     ax, 100h ;~ 28F0:5891
cs=0x28f0;eip=0x005894; 	T(CWD);	// 98846 cwd ;~ 28F0:5894
cs=0x28f0;eip=0x005895; 	X(PUSH(dx));	// 98847 push    dx ;~ 28F0:5895
cs=0x28f0;eip=0x005896; 	X(PUSH(ax));	// 98848 push    ax ;~ 28F0:5896
cs=0x28f0;eip=0x005897; 	T(MOV(ax, *(dw*)((&unk_57111))));	// 98849 mov     ax, word ptr unk_57111 ;~ 28F0:5897
cs=0x28f0;eip=0x00589a; 	T(CWD);	// 98850 cwd ;~ 28F0:589A
cs=0x28f0;eip=0x00589b; 	X(PUSH(dx));	// 98851 push    dx ;~ 28F0:589B
cs=0x28f0;eip=0x00589c; 	X(PUSH(ax));	// 98852 push    ax ;~ 28F0:589C
cs=0x28f0;eip=0x00589d; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1F2))));	// 98853 mov     ax, es:[bx+1F2h] ;~ 28F0:589D
cs=0x28f0;eip=0x0058a2; 	T(CWD);	// 98854 cwd ;~ 28F0:58A2
cs=0x28f0;eip=0x0058a3; 	T(MOV(dh, dl));	// 98855 mov     dh, dl ;~ 28F0:58A3
cs=0x28f0;eip=0x0058a5; 	T(MOV(dl, ah));	// 98856 mov     dl, ah ;~ 28F0:58A5
cs=0x28f0;eip=0x0058a7; 	T(MOV(ah, al));	// 98857 mov     ah, al ;~ 28F0:58A7
cs=0x28f0;eip=0x0058a9; 	T(SUB(al, al));	// 98858 sub     al, al ;~ 28F0:58A9
cs=0x28f0;eip=0x0058ab; 	X(PUSH(dx));	// 98859 push    dx ;~ 28F0:58AB
cs=0x28f0;eip=0x0058ac; 	X(PUSH(ax));	// 98860 push    ax ;~ 28F0:58AC
cs=0x28f0;eip=0x0058ad; 	R(CALLF(sub_105c2,0));	// 98861 call    sub_105C2 ;~ 28F0:58AD
cs=0x28f0;eip=0x0058b2; 	X(PUSH(dx));	// 98862 push    dx ;~ 28F0:58B2
cs=0x28f0;eip=0x0058b3; 	X(PUSH(ax));	// 98863 push    ax ;~ 28F0:58B3
cs=0x28f0;eip=0x0058b4; 	R(CALLF(sub_10526,0));	// 98864 call    sub_10526 ;~ 28F0:58B4
cs=0x28f0;eip=0x0058b9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98865 les     bx, [bp+arg_0] ;~ 28F0:58B9
cs=0x28f0;eip=0x0058bc; 	X(SUB(*(dw*)(raddr(es,bx+0x1C0)), ax));	// 98866 sub     es:[bx+1C0h], ax ;~ 28F0:58BC
cs=0x28f0;eip=0x0058c1; 	X(SBB(*(dw*)(raddr(es,bx+0x1C2)), dx));	// 98867 sbb     es:[bx+1C2h], dx ;~ 28F0:58C1
cs=0x28f0;eip=0x0058c6; 	R(JMP(loc_3cf13));	// 98868 jmp     loc_3CF13 ;~ 28F0:58C6
loc_3cda9:
	// 10667 
cs=0x28f0;eip=0x0058c9; 	T(MOV(ax, 0x200));	// 98873 mov     ax, 200h ;~ 28F0:58C9
cs=0x28f0;eip=0x0058cc; 	X(PUSH(ax));	// 98874 push    ax ;~ 28F0:58CC
cs=0x28f0;eip=0x0058cd; 	R(CALLF(sub_2937a,0));	// 98875 call    sub_2937A ;~ 28F0:58CD
cs=0x28f0;eip=0x0058d2; 	T(CWD);	// 98876 cwd ;~ 28F0:58D2
cs=0x28f0;eip=0x0058d3; 	T(ADD(ax, word_5705a));	// 98877 add     ax, word_5705A ;~ 28F0:58D3
cs=0x28f0;eip=0x0058d7; 	T(ADC(dx, word_5705c));	// 98878 adc     dx, word_5705C ;~ 28F0:58D7
cs=0x28f0;eip=0x0058db; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98879 les     bx, [bp+arg_0] ;~ 28F0:58DB
cs=0x28f0;eip=0x0058de; 	X(MOV(*(dw*)(raddr(es,bx+0x1F4)), ax));	// 98880 mov     es:[bx+1F4h], ax ;~ 28F0:58DE
cs=0x28f0;eip=0x0058e3; 	X(MOV(*(dw*)(raddr(es,bx+0x1F6)), dx));	// 98881 mov     es:[bx+1F6h], dx ;~ 28F0:58E3
cs=0x28f0;eip=0x0058e8; 	T(MOV(ax, 0x100));	// 98882 mov     ax, 100h ;~ 28F0:58E8
cs=0x28f0;eip=0x0058eb; 	X(PUSH(ax));	// 98883 push    ax ;~ 28F0:58EB
cs=0x28f0;eip=0x0058ec; 	R(CALLF(sub_2937a,0));	// 98884 call    sub_2937A ;~ 28F0:58EC
cs=0x28f0;eip=0x0058f1; 	T(CWD);	// 98885 cwd ;~ 28F0:58F1
cs=0x28f0;eip=0x0058f2; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98886 les     bx, [bp+arg_0] ;~ 28F0:58F2
cs=0x28f0;eip=0x0058f5; 	T(MOV(cx, *(dw*)(raddr(es,bx+0x1F4))));	// 98887 mov     cx, es:[bx+1F4h] ;~ 28F0:58F5
cs=0x28f0;eip=0x0058fa; 	T(MOV(si, *(dw*)(raddr(es,bx+0x1F6))));	// 98888 mov     si, es:[bx+1F6h] ;~ 28F0:58FA
cs=0x28f0;eip=0x0058ff; 	T(ADD(cx, ax));	// 98889 add     cx, ax ;~ 28F0:58FF
cs=0x28f0;eip=0x005901; 	T(ADC(si, dx));	// 98890 adc     si, dx ;~ 28F0:5901
cs=0x28f0;eip=0x005903; 	X(MOV(*(dw*)(raddr(es,bx+0x1F8)), cx));	// 98891 mov     es:[bx+1F8h], cx ;~ 28F0:5903
cs=0x28f0;eip=0x005908; 	X(MOV(*(dw*)(raddr(es,bx+0x1FA)), si));	// 98892 mov     es:[bx+1FAh], si ;~ 28F0:5908
cs=0x28f0;eip=0x00590d; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 5));	// 98893 cmp     word ptr es:[bx+332h], 5 ;~ 28F0:590D
cs=0x28f0;eip=0x005913; 	R(JZ(loc_3ce0f));	// 98894 jz      short loc_3CE0F ;~ 28F0:5913
cs=0x28f0;eip=0x005915; 	T(MOV(ax, 0x80));	// 98895 mov     ax, 80h ; '€' ;~ 28F0:5915
cs=0x28f0;eip=0x005918; 	X(PUSH(ax));	// 98896 push    ax ;~ 28F0:5918
cs=0x28f0;eip=0x005919; 	R(CALLF(sub_2937a,0));	// 98897 call    sub_2937A ;~ 28F0:5919
cs=0x28f0;eip=0x00591e; 	T(ADD(ax, 0x80));	// 98898 add     ax, 80h ; '€' ;~ 28F0:591E
cs=0x28f0;eip=0x005921; 	T(CWD);	// 98899 cwd ;~ 28F0:5921
cs=0x28f0;eip=0x005922; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98900 les     bx, [bp+arg_0] ;~ 28F0:5922
cs=0x28f0;eip=0x005925; 	X(ADD(*(dw*)(raddr(es,bx+0x1F8)), ax));	// 98901 add     es:[bx+1F8h], ax ;~ 28F0:5925
cs=0x28f0;eip=0x00592a; 	X(ADC(*(dw*)(raddr(es,bx+0x1FA)), dx));	// 98902 adc     es:[bx+1FAh], dx ;~ 28F0:592A
loc_3ce0f:
	// 10668 
cs=0x28f0;eip=0x00592f; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x120))));	// 98905 mov     ax, es:[bx+120h] ;~ 28F0:592F
cs=0x28f0;eip=0x005934; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x122))));	// 98906 mov     dx, es:[bx+122h] ;~ 28F0:5934
cs=0x28f0;eip=0x005939; 	T(MOV(cl, 8));	// 98907 mov     cl, 8 ;~ 28F0:5939
cs=0x28f0;eip=0x00593b; 	R(CALLF(sub_10240,0));	// 98908 call    sub_10240 ;~ 28F0:593B
cs=0x28f0;eip=0x005940; 	T(CWD);	// 98909 cwd ;~ 28F0:5940
cs=0x28f0;eip=0x005941; 	T(XOR(ax, dx));	// 98910 xor     ax, dx ;~ 28F0:5941
cs=0x28f0;eip=0x005943; 	T(SUB(ax, dx));	// 98911 sub     ax, dx ;~ 28F0:5943
cs=0x28f0;eip=0x005945; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 98912 mov     [bp+var_8], ax ;~ 28F0:5945
cs=0x28f0;eip=0x005948; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98913 les     bx, [bp+arg_0] ;~ 28F0:5948
cs=0x28f0;eip=0x00594b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x140))));	// 98914 mov     ax, es:[bx+140h] ;~ 28F0:594B
cs=0x28f0;eip=0x005950; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x142))));	// 98915 mov     dx, es:[bx+142h] ;~ 28F0:5950
cs=0x28f0;eip=0x005955; 	T(MOV(cl, 8));	// 98916 mov     cl, 8 ;~ 28F0:5955
cs=0x28f0;eip=0x005957; 	R(CALLF(sub_10240,0));	// 98917 call    sub_10240 ;~ 28F0:5957
cs=0x28f0;eip=0x00595c; 	T(CWD);	// 98918 cwd ;~ 28F0:595C
cs=0x28f0;eip=0x00595d; 	T(XOR(ax, dx));	// 98919 xor     ax, dx ;~ 28F0:595D
cs=0x28f0;eip=0x00595f; 	T(SUB(ax, dx));	// 98920 sub     ax, dx ;~ 28F0:595F
cs=0x28f0;eip=0x005961; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 98921 mov     [bp+var_6], ax ;~ 28F0:5961
cs=0x28f0;eip=0x005964; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 98922 cmp     [bp+var_8], ax ;~ 28F0:5964
cs=0x28f0;eip=0x005967; 	R(JGE(loc_3ce4c));	// 98923 jge     short loc_3CE4C ;~ 28F0:5967
cs=0x28f0;eip=0x005969; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 98924 mov     [bp+var_8], ax ;~ 28F0:5969
loc_3ce4c:
	// 10669 
cs=0x28f0;eip=0x00596c; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0x96));	// 98927 cmp     [bp+var_8], 96h ; '–' ;~ 28F0:596C
cs=0x28f0;eip=0x005971; 	R(JLE(loc_3ce58));	// 98928 jle     short loc_3CE58 ;~ 28F0:5971
cs=0x28f0;eip=0x005973; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), 0x96));	// 98929 mov     [bp+var_8], 96h ; '–' ;~ 28F0:5973
loc_3ce58:
	// 10670 
cs=0x28f0;eip=0x005978; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98932 les     bx, [bp+arg_0] ;~ 28F0:5978
cs=0x28f0;eip=0x00597b; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 98933 les     bx, es:[bx+31Ch] ;~ 28F0:597B
cs=0x28f0;eip=0x005980; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 98934 mov     ax, [bp+var_4] ;~ 28F0:5980
cs=0x28f0;eip=0x005983; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 98935 mov     dx, [bp+var_2] ;~ 28F0:5983
cs=0x28f0;eip=0x005986; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), dx));	// 98936 cmp     es:[bx+0Ch], dx ;~ 28F0:5986
cs=0x28f0;eip=0x00598a; 	R(JG(loc_3ced8));	// 98937 jg      short loc_3CED8 ;~ 28F0:598A
cs=0x28f0;eip=0x00598c; 	R(JL(loc_3ce74));	// 98938 jl      short loc_3CE74 ;~ 28F0:598C
cs=0x28f0;eip=0x00598e; 	T(CMP(*(dw*)(raddr(es,bx+0x0A)), ax));	// 98939 cmp     es:[bx+0Ah], ax ;~ 28F0:598E
cs=0x28f0;eip=0x005992; 	R(JNC(loc_3ced8));	// 98940 jnb     short loc_3CED8 ;~ 28F0:5992
loc_3ce74:
	// 10671 
cs=0x28f0;eip=0x005994; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98943 les     bx, [bp+arg_0] ;~ 28F0:5994
cs=0x28f0;eip=0x005997; 	X(PUSH(*(dw*)(raddr(es,bx+0x1F0))));	// 98944 push    word ptr es:[bx+1F0h] ;~ 28F0:5997
cs=0x28f0;eip=0x00599c; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 98945 push    [bp+var_8] ;~ 28F0:599C
cs=0x28f0;eip=0x00599f; 	T(MOV(ax, 0x96));	// 98946 mov     ax, 96h ; '–' ;~ 28F0:599F
cs=0x28f0;eip=0x0059a2; 	X(PUSH(ax));	// 98947 push    ax ;~ 28F0:59A2
cs=0x28f0;eip=0x0059a3; 	R(CALLF(sub_2f01c,0));	// 98948 call    sub_2F01C ;~ 28F0:59A3
cs=0x28f0;eip=0x0059a8; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 98949 mov     [bp+var_8], ax ;~ 28F0:59A8
cs=0x28f0;eip=0x0059ab; 	X(PUSH(ax));	// 98950 push    ax ;~ 28F0:59AB
cs=0x28f0;eip=0x0059ac; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98951 les     bx, [bp+arg_0] ;~ 28F0:59AC
cs=0x28f0;eip=0x0059af; 	T(LES(bx, *(dw*)(raddr(es,bx+0x31C))));	// 98952 les     bx, es:[bx+31Ch] ;~ 28F0:59AF
cs=0x28f0;eip=0x0059b4; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 98953 mov     ax, es:[bx+0Ah] ;~ 28F0:59B4
cs=0x28f0;eip=0x0059b8; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 98954 mov     dx, es:[bx+0Ch] ;~ 28F0:59B8
cs=0x28f0;eip=0x0059bc; 	T(MOV(cl, 8));	// 98955 mov     cl, 8 ;~ 28F0:59BC
cs=0x28f0;eip=0x0059be; 	R(CALLF(sub_10240,0));	// 98956 call    sub_10240 ;~ 28F0:59BE
cs=0x28f0;eip=0x0059c3; 	T(MOV(cx, ax));	// 98957 mov     cx, ax ;~ 28F0:59C3
cs=0x28f0;eip=0x0059c5; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 98958 mov     ax, [bp+var_4] ;~ 28F0:59C5
cs=0x28f0;eip=0x0059c8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_2))));	// 98959 mov     dx, [bp+var_2] ;~ 28F0:59C8
cs=0x28f0;eip=0x0059cb; 	T(MOV(bx, cx));	// 98960 mov     bx, cx ;~ 28F0:59CB
cs=0x28f0;eip=0x0059cd; 	T(MOV(cl, 8));	// 98961 mov     cl, 8 ;~ 28F0:59CD
cs=0x28f0;eip=0x0059cf; 	T(MOV(si, bx));	// 98962 mov     si, bx ;~ 28F0:59CF
cs=0x28f0;eip=0x0059d1; 	R(CALLF(sub_10240,0));	// 98963 call    sub_10240 ;~ 28F0:59D1
cs=0x28f0;eip=0x0059d6; 	T(SUB(ax, si));	// 98964 sub     ax, si ;~ 28F0:59D6
cs=0x28f0;eip=0x0059d8; 	X(PUSH(ax));	// 98965 push    ax ;~ 28F0:59D8
cs=0x28f0;eip=0x0059d9; 	T(MOV(ax, 0x64));	// 98966 mov     ax, 64h ; 'd' ;~ 28F0:59D9
cs=0x28f0;eip=0x0059dc; 	X(PUSH(ax));	// 98967 push    ax ;~ 28F0:59DC
cs=0x28f0;eip=0x0059dd; 	R(CALLF(sub_2f01c,0));	// 98968 call    sub_2F01C ;~ 28F0:59DD
cs=0x28f0;eip=0x0059e2; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 98969 mov     [bp+var_8], ax ;~ 28F0:59E2
cs=0x28f0;eip=0x0059e5; 	T(OR(ax, ax));	// 98970 or      ax, ax ;~ 28F0:59E5
cs=0x28f0;eip=0x0059e7; 	R(JZ(loc_3cf09));	// 98971 jz      short loc_3CF09 ;~ 28F0:59E7
loc_3cec9:
	// 10672 
cs=0x28f0;eip=0x0059e9; 	X(PUSH(ax));	// 98974 push    ax ;~ 28F0:59E9
cs=0x28f0;eip=0x0059ea; 	R(CALLF(sub_2937a,0));	// 98975 call    sub_2937A ;~ 28F0:59EA
cs=0x28f0;eip=0x0059ef; 	T(MOV(cx, *(dw*)(raddr(ss,bp+var_8))));	// 98976 mov     cx, [bp+var_8] ;~ 28F0:59EF
cs=0x28f0;eip=0x0059f2; 	T(SAR(cx, 1));	// 98977 sar     cx, 1 ;~ 28F0:59F2
cs=0x28f0;eip=0x0059f4; 	T(SUB(ax, cx));	// 98978 sub     ax, cx ;~ 28F0:59F4
cs=0x28f0;eip=0x0059f6; 	R(JMP(loc_3cf0b));	// 98979 jmp     short loc_3CF0B ;~ 28F0:59F6
loc_3ced8:
	// 10673 
cs=0x28f0;eip=0x0059f8; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 98984 les     bx, [bp+arg_0] ;~ 28F0:59F8
cs=0x28f0;eip=0x0059fb; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1F0))));	// 98985 mov     ax, es:[bx+1F0h] ;~ 28F0:59FB
cs=0x28f0;eip=0x005a00; 	T(SAR(ax, 1));	// 98986 sar     ax, 1 ;~ 28F0:5A00
cs=0x28f0;eip=0x005a02; 	T(SAR(ax, 1));	// 98987 sar     ax, 1 ;~ 28F0:5A02
cs=0x28f0;eip=0x005a04; 	X(PUSH(ax));	// 98988 push    ax ;~ 28F0:5A04
cs=0x28f0;eip=0x005a05; 	X(PUSH(*(dw*)(raddr(ss,bp+var_8))));	// 98989 push    [bp+var_8] ;~ 28F0:5A05
cs=0x28f0;eip=0x005a08; 	T(MOV(ax, 0x96));	// 98990 mov     ax, 96h ; '–' ;~ 28F0:5A08
cs=0x28f0;eip=0x005a0b; 	X(PUSH(ax));	// 98991 push    ax ;~ 28F0:5A0B
cs=0x28f0;eip=0x005a0c; 	R(CALLF(sub_2f01c,0));	// 98992 call    sub_2F01C ;~ 28F0:5A0C
cs=0x28f0;eip=0x005a11; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 98993 mov     [bp+var_8], ax ;~ 28F0:5A11
cs=0x28f0;eip=0x005a14; 	X(PUSH(ax));	// 98994 push    ax ;~ 28F0:5A14
cs=0x28f0;eip=0x005a15; 	T(MOV(ax, 0x0C8));	// 98995 mov     ax, 0C8h ; 'È' ;~ 28F0:5A15
cs=0x28f0;eip=0x005a18; 	X(PUSH(ax));	// 98996 push    ax ;~ 28F0:5A18
cs=0x28f0;eip=0x005a19; 	T(MOV(ax, 0x64));	// 98997 mov     ax, 64h ; 'd' ;~ 28F0:5A19
cs=0x28f0;eip=0x005a1c; 	X(PUSH(ax));	// 98998 push    ax ;~ 28F0:5A1C
cs=0x28f0;eip=0x005a1d; 	R(CALLF(sub_2f01c,0));	// 98999 call    sub_2F01C ;~ 28F0:5A1D
cs=0x28f0;eip=0x005a22; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 99000 mov     [bp+var_8], ax ;~ 28F0:5A22
cs=0x28f0;eip=0x005a25; 	T(OR(ax, ax));	// 99001 or      ax, ax ;~ 28F0:5A25
cs=0x28f0;eip=0x005a27; 	R(JNZ(loc_3cec9));	// 99002 jnz     short loc_3CEC9 ;~ 28F0:5A27
loc_3cf09:
	// 10674 
cs=0x28f0;eip=0x005a29; 	T(SUB(ax, ax));	// 99005 sub     ax, ax ;~ 28F0:5A29
loc_3cf0b:
	// 10675 
cs=0x28f0;eip=0x005a2b; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99008 les     bx, [bp+arg_0] ;~ 28F0:5A2B
cs=0x28f0;eip=0x005a2e; 	X(MOV(*(dw*)(raddr(es,bx+0x1F2)), ax));	// 99009 mov     es:[bx+1F2h], ax ;~ 28F0:5A2E
loc_3cf13:
	// 10676 
cs=0x28f0;eip=0x005a33; 	X(POP(si));	// 99013 pop     si ;~ 28F0:5A33
cs=0x28f0;eip=0x005a34; 	T(MOV(sp, bp));	// 99014 mov     sp, bp ;~ 28F0:5A34
cs=0x28f0;eip=0x005a36; 	X(POP(bp));	// 99015 pop     bp ;~ 28F0:5A36
cs=0x28f0;eip=0x005a37; 	R(RETN(4));	// 99016 retn    4 ;~ 28F0:5A37
sub_3cf1a:
	// 99024 
#undef var_5a
#define var_5a -0x5A
	// 99026 var_5A          = dword ptr -5Ah ;~ 28F0:5A3A
#undef var_56
#define var_56 -0x56
	// 99027 var_56          = dword ptr -56h ;~ 28F0:5A3A
#undef var_52
#define var_52 -0x52
	// 99028 var_52          = dword ptr -52h ;~ 28F0:5A3A
#undef var_4e
#define var_4e -0x4E
	// 99029 var_4E          = word ptr -4Eh ;~ 28F0:5A3A
#undef var_4c
#define var_4c -0x4C
	// 99030 var_4C          = word ptr -4Ch ;~ 28F0:5A3A
#undef var_1a
#define var_1a -0x1A
	// 99031 var_1A          = word ptr -1Ah ;~ 28F0:5A3A
#undef var_18
#define var_18 -0x18
	// 99032 var_18          = byte ptr -18h ;~ 28F0:5A3A
#undef var_c
#define var_c -0x0C
	// 99033 var_C           = byte ptr -0Ch ;~ 28F0:5A3A
#undef var_8
#define var_8 -8
	// 99034 var_8           = word ptr -8 ;~ 28F0:5A3A
#undef var_6
#define var_6 -6
	// 99035 var_6           = word ptr -6 ;~ 28F0:5A3A
#undef arg_0
#define arg_0 4
	// 99036 arg_0           = dword ptr  4 ;~ 28F0:5A3A
cs=0x28f0;eip=0x005a3a; 	X(PUSH(bp));	// 99038 push    bp ;~ 28F0:5A3A
cs=0x28f0;eip=0x005a3b; 	T(MOV(bp, sp));	// 99039 mov     bp, sp ;~ 28F0:5A3B
cs=0x28f0;eip=0x005a3d; 	T(SUB(sp, 0x5A));	// 99040 sub     sp, 5Ah ;~ 28F0:5A3D
cs=0x28f0;eip=0x005a40; 	X(PUSH(di));	// 99041 push    di ;~ 28F0:5A40
cs=0x28f0;eip=0x005a41; 	X(PUSH(si));	// 99042 push    si ;~ 28F0:5A41
cs=0x28f0;eip=0x005a42; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99043 les     bx, [bp+arg_0] ;~ 28F0:5A42
cs=0x28f0;eip=0x005a45; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x31C))));	// 99044 mov     ax, es:[bx+31Ch] ;~ 28F0:5A45
cs=0x28f0;eip=0x005a4a; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x31E))));	// 99045 mov     dx, es:[bx+31Eh] ;~ 28F0:5A4A
cs=0x28f0;eip=0x005a4f; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_52))), ax));	// 99046 mov     word ptr [bp+var_52], ax ;~ 28F0:5A4F
cs=0x28f0;eip=0x005a52; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_52+2))), dx));	// 99047 mov     word ptr [bp+var_52+2], dx ;~ 28F0:5A52
cs=0x28f0;eip=0x005a55; 	T(ADD(ax, 6));	// 99048 add     ax, 6 ;~ 28F0:5A55
cs=0x28f0;eip=0x005a58; 	T(di = bp+var_18);	// 99049 lea     di, [bp+var_18] ;~ 28F0:5A58
cs=0x28f0;eip=0x005a5b; 	T(MOV(si, ax));	// 99050 mov     si, ax ;~ 28F0:5A5B
cs=0x28f0;eip=0x005a5d; 	X(PUSH(ss));	// 99051 push    ss ;~ 28F0:5A5D
cs=0x28f0;eip=0x005a5e; 	X(POP(es));	// 99052 pop     es ;~ 28F0:5A5E
cs=0x28f0;eip=0x005a5f; 	X(PUSH(ds));	// 99053 push    ds ;~ 28F0:5A5F
cs=0x28f0;eip=0x005a60; 	T(MOV(ds, dx));	// 99054 mov     ds, dx ;~ 28F0:5A60
cs=0x28f0;eip=0x005a62; 	T(MOV(cx, 6));	// 99055 mov     cx, 6 ;~ 28F0:5A62
	// 99056 repne movsw ;~ 28F0:5A65
cs=0x28f0;eip=0x005a65; 	X(	REPNE MOVSW);	// 99056 repne movsw ;~ 28F0:5A65
cs=0x28f0;eip=0x005a67; 	X(POP(ds));	// 99057 pop     ds ;~ 28F0:5A67
cs=0x28f0;eip=0x005a68; 	T(MOV(es, *(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 99058 mov     es, word ptr [bp+arg_0+2] ;~ 28F0:5A68
cs=0x28f0;eip=0x005a6b; 	X(MOV(*(dw*)(raddr(es,bx+0x320)), 0));	// 99059 mov     word ptr es:[bx+320h], 0 ;~ 28F0:5A6B
cs=0x28f0;eip=0x005a72; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99060 les     bx, [bp+var_52] ;~ 28F0:5A72
cs=0x28f0;eip=0x005a75; 	T(CMP(*(dw*)(raddr(es,bx+0x0C)), 0));	// 99061 cmp     word ptr es:[bx+0Ch], 0 ;~ 28F0:5A75
cs=0x28f0;eip=0x005a7a; 	R(JGE(loc_3cf5f));	// 99062 jge     short loc_3CF5F ;~ 28F0:5A7A
cs=0x28f0;eip=0x005a7c; 	R(JMP(loc_3d1dc));	// 99063 jmp     loc_3D1DC ;~ 28F0:5A7C
loc_3cf5f:
	// 10677 
cs=0x28f0;eip=0x005a7f; 	X(PUSH(bx));	// 99067 push    bx ;~ 28F0:5A7F
cs=0x28f0;eip=0x005a80; 	T(ax = bp+var_18);	// 99068 lea     ax, [bp+var_18] ;~ 28F0:5A80
cs=0x28f0;eip=0x005a83; 	X(PUSH(ss));	// 99069 push    ss ;~ 28F0:5A83
cs=0x28f0;eip=0x005a84; 	X(PUSH(ax));	// 99070 push    ax ;~ 28F0:5A84
cs=0x28f0;eip=0x005a85; 	T(MOV(ax, bx));	// 99071 mov     ax, bx ;~ 28F0:5A85
cs=0x28f0;eip=0x005a87; 	T(ADD(ax, 6));	// 99072 add     ax, 6 ;~ 28F0:5A87
cs=0x28f0;eip=0x005a8a; 	X(PUSH(dx));	// 99073 push    dx ;~ 28F0:5A8A
cs=0x28f0;eip=0x005a8b; 	X(PUSH(ax));	// 99074 push    ax ;~ 28F0:5A8B
cs=0x28f0;eip=0x005a8c; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99075 les     bx, [bp+arg_0] ;~ 28F0:5A8C
cs=0x28f0;eip=0x005a8f; 	X(PUSH(*(dw*)(raddr(es,bx+0x304))));	// 99076 push    word ptr es:[bx+304h] ;~ 28F0:5A8F
cs=0x28f0;eip=0x005a94; 	X(PUSH(*(dw*)(raddr(es,bx+0x302))));	// 99077 push    word ptr es:[bx+302h] ;~ 28F0:5A94
cs=0x28f0;eip=0x005a99; 	T(ax = bp+var_c);	// 99078 lea     ax, [bp+var_C] ;~ 28F0:5A99
cs=0x28f0;eip=0x005a9c; 	X(PUSH(ax));	// 99079 push    ax ;~ 28F0:5A9C
cs=0x28f0;eip=0x005a9d; 	T(MOV(ax, 0x100));	// 99080 mov     ax, 100h ;~ 28F0:5A9D
cs=0x28f0;eip=0x005aa0; 	X(PUSH(ax));	// 99081 push    ax ;~ 28F0:5AA0
cs=0x28f0;eip=0x005aa1; 	T(SUB(ax, ax));	// 99082 sub     ax, ax ;~ 28F0:5AA1
cs=0x28f0;eip=0x005aa3; 	X(PUSH(ax));	// 99083 push    ax ;~ 28F0:5AA3
cs=0x28f0;eip=0x005aa4; 	T(MOV(ax, 1));	// 99084 mov     ax, 1 ;~ 28F0:5AA4
cs=0x28f0;eip=0x005aa7; 	X(PUSH(ax));	// 99085 push    ax ;~ 28F0:5AA7
cs=0x28f0;eip=0x005aa8; 	T(SUB(ax, ax));	// 99086 sub     ax, ax ;~ 28F0:5AA8
cs=0x28f0;eip=0x005aaa; 	X(PUSH(ax));	// 99087 push    ax ;~ 28F0:5AAA
cs=0x28f0;eip=0x005aab; 	X(PUSH(ax));	// 99088 push    ax ;~ 28F0:5AAB
cs=0x28f0;eip=0x005aac; 	R(CALLF(sub_35cf4,0));	// 99089 call    sub_35CF4 ;~ 28F0:5AAC
cs=0x28f0;eip=0x005ab1; 	X(MOV(*(dw*)(raddr(ss,bp+var_1a)), ax));	// 99090 mov     [bp+var_1A], ax ;~ 28F0:5AB1
cs=0x28f0;eip=0x005ab4; 	T(OR(ax, ax));	// 99091 or      ax, ax ;~ 28F0:5AB4
cs=0x28f0;eip=0x005ab6; 	R(JNZ(loc_3cf9b));	// 99092 jnz     short loc_3CF9B ;~ 28F0:5AB6
cs=0x28f0;eip=0x005ab8; 	R(JMP(loc_3d1c1));	// 99093 jmp     loc_3D1C1 ;~ 28F0:5AB8
loc_3cf9b:
	// 10678 
cs=0x28f0;eip=0x005abb; 	T(CMP(ax, 0x0FFFF));	// 99097 cmp     ax, 0FFFFh ;~ 28F0:5ABB
cs=0x28f0;eip=0x005abe; 	R(JNZ(loc_3cfa3));	// 99098 jnz     short loc_3CFA3 ;~ 28F0:5ABE
cs=0x28f0;eip=0x005ac0; 	R(JMP(loc_3d1c1));	// 99099 jmp     loc_3D1C1 ;~ 28F0:5AC0
loc_3cfa3:
	// 10679 
cs=0x28f0;eip=0x005ac3; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 99103 mov     dx, word ptr unk_47A9A ;~ 28F0:5AC3
cs=0x28f0;eip=0x005ac7; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56))), ax));	// 99104 mov     word ptr [bp+var_56], ax ;~ 28F0:5AC7
cs=0x28f0;eip=0x005aca; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_56+2))), dx));	// 99105 mov     word ptr [bp+var_56+2], dx ;~ 28F0:5ACA
cs=0x28f0;eip=0x005acd; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 99106 les     bx, [bp+var_56] ;~ 28F0:5ACD
cs=0x28f0;eip=0x005ad0; 	T(MOV(bx, *(dw*)(raddr(es,bx))));	// 99107 mov     bx, es:[bx] ;~ 28F0:5AD0
cs=0x28f0;eip=0x005ad3; 	T(MOV(ax, *(dw*)(raddr(ds,bx+0x38))));	// 99108 mov     ax, [bx+38h] ;~ 28F0:5AD3
cs=0x28f0;eip=0x005ad6; 	T(MOV(dx, *(dw*)(raddr(ds,bx+0x3A))));	// 99109 mov     dx, [bx+3Ah] ;~ 28F0:5AD6
cs=0x28f0;eip=0x005ad9; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_56)))));	// 99110 mov     bx, word ptr [bp+var_56] ;~ 28F0:5AD9
cs=0x28f0;eip=0x005adc; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99111 add     ax, es:[bx+0Ah] ;~ 28F0:5ADC
cs=0x28f0;eip=0x005ae0; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99112 adc     dx, es:[bx+0Ch] ;~ 28F0:5AE0
cs=0x28f0;eip=0x005ae4; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 99113 mov     [bp+var_4E], ax ;~ 28F0:5AE4
cs=0x28f0;eip=0x005ae7; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), dx));	// 99114 mov     [bp+var_4C], dx ;~ 28F0:5AE7
cs=0x28f0;eip=0x005aea; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99115 les     bx, [bp+arg_0] ;~ 28F0:5AEA
cs=0x28f0;eip=0x005aed; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x302))));	// 99116 mov     ax, es:[bx+302h] ;~ 28F0:5AED
cs=0x28f0;eip=0x005af2; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x304))));	// 99117 mov     dx, es:[bx+304h] ;~ 28F0:5AF2
cs=0x28f0;eip=0x005af7; 	T(ADD(ax, *(dw*)(raddr(es,bx+0x20E))));	// 99118 add     ax, es:[bx+20Eh] ;~ 28F0:5AF7
cs=0x28f0;eip=0x005afc; 	T(ADC(dx, *(dw*)(raddr(es,bx+0x210))));	// 99119 adc     dx, es:[bx+210h] ;~ 28F0:5AFC
cs=0x28f0;eip=0x005b01; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 99120 add     ax, [bp+var_4E] ;~ 28F0:5B01
cs=0x28f0;eip=0x005b04; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_4c))));	// 99121 adc     dx, [bp+var_4C] ;~ 28F0:5B04
cs=0x28f0;eip=0x005b07; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99122 les     bx, [bp+var_52] ;~ 28F0:5B07
cs=0x28f0;eip=0x005b0a; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99123 cmp     dx, es:[bx+0Ch] ;~ 28F0:5B0A
cs=0x28f0;eip=0x005b0e; 	R(JGE(loc_3cff3));	// 99124 jge     short loc_3CFF3 ;~ 28F0:5B0E
cs=0x28f0;eip=0x005b10; 	R(JMP(loc_3d18c));	// 99125 jmp     loc_3D18C ;~ 28F0:5B10
loc_3cff3:
	// 10680 
cs=0x28f0;eip=0x005b13; 	R(JG(loc_3cffe));	// 99129 jg      short loc_3CFFE ;~ 28F0:5B13
cs=0x28f0;eip=0x005b15; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99130 cmp     ax, es:[bx+0Ah] ;~ 28F0:5B15
cs=0x28f0;eip=0x005b19; 	R(JNC(loc_3cffe));	// 99131 jnb     short loc_3CFFE ;~ 28F0:5B19
cs=0x28f0;eip=0x005b1b; 	R(JMP(loc_3d18c));	// 99132 jmp     loc_3D18C ;~ 28F0:5B1B
loc_3cffe:
	// 10681 
cs=0x28f0;eip=0x005b1e; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_56))));	// 99137 les     bx, [bp+var_56] ;~ 28F0:5B1E
cs=0x28f0;eip=0x005b21; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x8000));	// 99138 test    word ptr es:[bx+2], 8000h ;~ 28F0:5B21
cs=0x28f0;eip=0x005b27; 	R(JNZ(loc_3d00c));	// 99139 jnz     short loc_3D00C ;~ 28F0:5B27
cs=0x28f0;eip=0x005b29; 	R(JMP(loc_3d18c));	// 99140 jmp     loc_3D18C ;~ 28F0:5B29
loc_3d00c:
	// 10682 
cs=0x28f0;eip=0x005b2c; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 99144 push    word ptr [bp+arg_0+2] ;~ 28F0:5B2C
cs=0x28f0;eip=0x005b2f; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 99145 push    word ptr [bp+arg_0] ;~ 28F0:5B2F
cs=0x28f0;eip=0x005b32; 	R(CALL(sub_37a1a,0));	// 99146 call    sub_37A1A ;~ 28F0:5B32
cs=0x28f0;eip=0x005b35; 	T(OR(ax, ax));	// 99147 or      ax, ax ;~ 28F0:5B35
cs=0x28f0;eip=0x005b37; 	R(JZ(loc_3d01c));	// 99148 jz      short loc_3D01C ;~ 28F0:5B37
cs=0x28f0;eip=0x005b39; 	R(JMP(loc_3d137));	// 99149 jmp     loc_3D137 ;~ 28F0:5B39
loc_3d01c:
	// 10683 
cs=0x28f0;eip=0x005b3c; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 99153 mov     dx, word ptr unk_47A9A ;~ 28F0:5B3C
cs=0x28f0;eip=0x005b40; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 99154 mov     ax, [bp+var_1A] ;~ 28F0:5B40
cs=0x28f0;eip=0x005b43; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_5a))), ax));	// 99155 mov     word ptr [bp+var_5A], ax ;~ 28F0:5B43
cs=0x28f0;eip=0x005b46; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_5a+2))), dx));	// 99156 mov     word ptr [bp+var_5A+2], dx ;~ 28F0:5B46
cs=0x28f0;eip=0x005b49; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_5a))));	// 99157 les     bx, [bp+var_5A] ;~ 28F0:5B49
cs=0x28f0;eip=0x005b4c; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 99158 mov     si, es:[bx] ;~ 28F0:5B4C
cs=0x28f0;eip=0x005b4f; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 99159 mov     ax, es:[bx+6] ;~ 28F0:5B4F
cs=0x28f0;eip=0x005b53; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 99160 mov     dx, es:[bx+8] ;~ 28F0:5B53
cs=0x28f0;eip=0x005b57; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x2C))));	// 99161 add     ax, [si+2Ch] ;~ 28F0:5B57
cs=0x28f0;eip=0x005b5a; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x2E))));	// 99162 adc     dx, [si+2Eh] ;~ 28F0:5B5A
cs=0x28f0;eip=0x005b5d; 	T(ADD(ax, 0x0A00));	// 99163 add     ax, 0A00h ;~ 28F0:5B5D
cs=0x28f0;eip=0x005b60; 	T(ADC(dx, 0));	// 99164 adc     dx, 0 ;~ 28F0:5B60
cs=0x28f0;eip=0x005b63; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99165 les     bx, [bp+var_52] ;~ 28F0:5B63
cs=0x28f0;eip=0x005b66; 	T(CMP(dx, *(dw*)(raddr(es,bx+8))));	// 99166 cmp     dx, es:[bx+8] ;~ 28F0:5B66
cs=0x28f0;eip=0x005b6a; 	R(JLE(loc_3d04f));	// 99167 jle     short loc_3D04F ;~ 28F0:5B6A
cs=0x28f0;eip=0x005b6c; 	R(JMP(loc_3d137));	// 99168 jmp     loc_3D137 ;~ 28F0:5B6C
loc_3d04f:
	// 10684 
cs=0x28f0;eip=0x005b6f; 	R(JL(loc_3d05a));	// 99172 jl      short loc_3D05A ;~ 28F0:5B6F
cs=0x28f0;eip=0x005b71; 	T(CMP(ax, *(dw*)(raddr(es,bx+6))));	// 99173 cmp     ax, es:[bx+6] ;~ 28F0:5B71
cs=0x28f0;eip=0x005b75; 	R(JBE(loc_3d05a));	// 99174 jbe     short loc_3D05A ;~ 28F0:5B75
cs=0x28f0;eip=0x005b77; 	R(JMP(loc_3d137));	// 99175 jmp     loc_3D137 ;~ 28F0:5B77
loc_3d05a:
	// 10685 
cs=0x28f0;eip=0x005b7a; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_5a))));	// 99180 les     bx, [bp+var_5A] ;~ 28F0:5B7A
cs=0x28f0;eip=0x005b7d; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 99181 mov     ax, es:[bx+6] ;~ 28F0:5B7D
cs=0x28f0;eip=0x005b81; 	T(MOV(dx, *(dw*)(raddr(es,bx+8))));	// 99182 mov     dx, es:[bx+8] ;~ 28F0:5B81
cs=0x28f0;eip=0x005b85; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x30))));	// 99183 add     ax, [si+30h] ;~ 28F0:5B85
cs=0x28f0;eip=0x005b88; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x32))));	// 99184 adc     dx, [si+32h] ;~ 28F0:5B88
cs=0x28f0;eip=0x005b8b; 	T(SUB(ax, 0x0A00));	// 99185 sub     ax, 0A00h ;~ 28F0:5B8B
cs=0x28f0;eip=0x005b8e; 	T(SBB(dx, 0));	// 99186 sbb     dx, 0 ;~ 28F0:5B8E
cs=0x28f0;eip=0x005b91; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99187 les     bx, [bp+var_52] ;~ 28F0:5B91
cs=0x28f0;eip=0x005b94; 	T(CMP(dx, *(dw*)(raddr(es,bx+8))));	// 99188 cmp     dx, es:[bx+8] ;~ 28F0:5B94
cs=0x28f0;eip=0x005b98; 	R(JGE(loc_3d07d));	// 99189 jge     short loc_3D07D ;~ 28F0:5B98
cs=0x28f0;eip=0x005b9a; 	R(JMP(loc_3d137));	// 99190 jmp     loc_3D137 ;~ 28F0:5B9A
loc_3d07d:
	// 10686 
cs=0x28f0;eip=0x005b9d; 	R(JG(loc_3d088));	// 99194 jg      short loc_3D088 ;~ 28F0:5B9D
cs=0x28f0;eip=0x005b9f; 	T(CMP(ax, *(dw*)(raddr(es,bx+6))));	// 99195 cmp     ax, es:[bx+6] ;~ 28F0:5B9F
cs=0x28f0;eip=0x005ba3; 	R(JNC(loc_3d088));	// 99196 jnb     short loc_3D088 ;~ 28F0:5BA3
cs=0x28f0;eip=0x005ba5; 	R(JMP(loc_3d137));	// 99197 jmp     loc_3D137 ;~ 28F0:5BA5
loc_3d088:
	// 10687 
cs=0x28f0;eip=0x005ba8; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_5a))));	// 99202 les     bx, [bp+var_5A] ;~ 28F0:5BA8
cs=0x28f0;eip=0x005bab; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 99203 mov     ax, es:[bx+0Eh] ;~ 28F0:5BAB
cs=0x28f0;eip=0x005baf; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 99204 mov     dx, es:[bx+10h] ;~ 28F0:5BAF
cs=0x28f0;eip=0x005bb3; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x3C))));	// 99205 add     ax, [si+3Ch] ;~ 28F0:5BB3
cs=0x28f0;eip=0x005bb6; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x3E))));	// 99206 adc     dx, [si+3Eh] ;~ 28F0:5BB6
cs=0x28f0;eip=0x005bb9; 	T(ADD(ax, 0x0A00));	// 99207 add     ax, 0A00h ;~ 28F0:5BB9
cs=0x28f0;eip=0x005bbc; 	T(ADC(dx, 0));	// 99208 adc     dx, 0 ;~ 28F0:5BBC
cs=0x28f0;eip=0x005bbf; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99209 les     bx, [bp+var_52] ;~ 28F0:5BBF
cs=0x28f0;eip=0x005bc2; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x10))));	// 99210 cmp     dx, es:[bx+10h] ;~ 28F0:5BC2
cs=0x28f0;eip=0x005bc6; 	R(JLE(loc_3d0ab));	// 99211 jle     short loc_3D0AB ;~ 28F0:5BC6
cs=0x28f0;eip=0x005bc8; 	R(JMP(loc_3d137));	// 99212 jmp     loc_3D137 ;~ 28F0:5BC8
loc_3d0ab:
	// 10688 
cs=0x28f0;eip=0x005bcb; 	R(JL(loc_3d0b6));	// 99216 jl      short loc_3D0B6 ;~ 28F0:5BCB
cs=0x28f0;eip=0x005bcd; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0E))));	// 99217 cmp     ax, es:[bx+0Eh] ;~ 28F0:5BCD
cs=0x28f0;eip=0x005bd1; 	R(JBE(loc_3d0b6));	// 99218 jbe     short loc_3D0B6 ;~ 28F0:5BD1
cs=0x28f0;eip=0x005bd3; 	R(JMP(loc_3d137));	// 99219 jmp     loc_3D137 ;~ 28F0:5BD3
loc_3d0b6:
	// 10689 
cs=0x28f0;eip=0x005bd6; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_5a))));	// 99224 les     bx, [bp+var_5A] ;~ 28F0:5BD6
cs=0x28f0;eip=0x005bd9; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0E))));	// 99225 mov     ax, es:[bx+0Eh] ;~ 28F0:5BD9
cs=0x28f0;eip=0x005bdd; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x10))));	// 99226 mov     dx, es:[bx+10h] ;~ 28F0:5BDD
cs=0x28f0;eip=0x005be1; 	T(ADD(ax, *(dw*)(raddr(ds,si+0x40))));	// 99227 add     ax, [si+40h] ;~ 28F0:5BE1
cs=0x28f0;eip=0x005be4; 	T(ADC(dx, *(dw*)(raddr(ds,si+0x42))));	// 99228 adc     dx, [si+42h] ;~ 28F0:5BE4
cs=0x28f0;eip=0x005be7; 	T(SUB(ax, 0x0A00));	// 99229 sub     ax, 0A00h ;~ 28F0:5BE7
cs=0x28f0;eip=0x005bea; 	T(SBB(dx, 0));	// 99230 sbb     dx, 0 ;~ 28F0:5BEA
cs=0x28f0;eip=0x005bed; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99231 les     bx, [bp+var_52] ;~ 28F0:5BED
cs=0x28f0;eip=0x005bf0; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x10))));	// 99232 cmp     dx, es:[bx+10h] ;~ 28F0:5BF0
cs=0x28f0;eip=0x005bf4; 	R(JL(loc_3d137));	// 99233 jl      short loc_3D137 ;~ 28F0:5BF4
cs=0x28f0;eip=0x005bf6; 	R(JG(loc_3d0de));	// 99234 jg      short loc_3D0DE ;~ 28F0:5BF6
cs=0x28f0;eip=0x005bf8; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0E))));	// 99235 cmp     ax, es:[bx+0Eh] ;~ 28F0:5BF8
cs=0x28f0;eip=0x005bfc; 	R(JC(loc_3d137));	// 99236 jb      short loc_3D137 ;~ 28F0:5BFC
loc_3d0de:
	// 10690 
cs=0x28f0;eip=0x005bfe; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99239 les     bx, [bp+arg_0] ;~ 28F0:5BFE
cs=0x28f0;eip=0x005c01; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x302))));	// 99240 mov     ax, es:[bx+302h] ;~ 28F0:5C01
cs=0x28f0;eip=0x005c06; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x304))));	// 99241 mov     dx, es:[bx+304h] ;~ 28F0:5C06
cs=0x28f0;eip=0x005c0b; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 99242 add     ax, [bp+var_4E] ;~ 28F0:5C0B
cs=0x28f0;eip=0x005c0e; 	T(ADC(dx, *(dw*)(raddr(ss,bp+var_4c))));	// 99243 adc     dx, [bp+var_4C] ;~ 28F0:5C0E
cs=0x28f0;eip=0x005c11; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99244 les     bx, [bp+var_52] ;~ 28F0:5C11
cs=0x28f0;eip=0x005c14; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99245 cmp     dx, es:[bx+0Ch] ;~ 28F0:5C14
cs=0x28f0;eip=0x005c18; 	R(JG(loc_3d10a));	// 99246 jg      short loc_3D10A ;~ 28F0:5C18
cs=0x28f0;eip=0x005c1a; 	R(JL(loc_3d102));	// 99247 jl      short loc_3D102 ;~ 28F0:5C1A
cs=0x28f0;eip=0x005c1c; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99248 cmp     ax, es:[bx+0Ah] ;~ 28F0:5C1C
cs=0x28f0;eip=0x005c20; 	R(JNC(loc_3d10a));	// 99249 jnb     short loc_3D10A ;~ 28F0:5C20
loc_3d102:
	// 10691 
cs=0x28f0;eip=0x005c22; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99252 mov     dx, es:[bx+0Ch] ;~ 28F0:5C22
cs=0x28f0;eip=0x005c26; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99253 mov     ax, es:[bx+0Ah] ;~ 28F0:5C26
loc_3d10a:
	// 10692 
cs=0x28f0;eip=0x005c2a; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 99257 mov     es:[bx+0Ah], ax ;~ 28F0:5C2A
cs=0x28f0;eip=0x005c2e; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 99258 mov     es:[bx+0Ch], dx ;~ 28F0:5C2E
cs=0x28f0;eip=0x005c32; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99259 les     bx, [bp+arg_0] ;~ 28F0:5C32
cs=0x28f0;eip=0x005c35; 	T(CMP(*(dw*)(raddr(es,bx+0x332)), 1));	// 99260 cmp     word ptr es:[bx+332h], 1 ;~ 28F0:5C35
cs=0x28f0;eip=0x005c3b; 	R(JNZ(loc_3d120));	// 99261 jnz     short loc_3D120 ;~ 28F0:5C3B
cs=0x28f0;eip=0x005c3d; 	R(JMP(loc_3d1c9));	// 99262 jmp     loc_3D1C9 ;~ 28F0:5C3D
loc_3d120:
	// 10693 
cs=0x28f0;eip=0x005c40; 	X(PUSH(es));	// 99266 push    es ;~ 28F0:5C40
cs=0x28f0;eip=0x005c41; 	X(PUSH(bx));	// 99267 push    bx ;~ 28F0:5C41
cs=0x28f0;eip=0x005c42; 	T(MOV(ax, 1));	// 99268 mov     ax, 1 ;~ 28F0:5C42
cs=0x28f0;eip=0x005c45; 	X(PUSH(ax));	// 99269 push    ax ;~ 28F0:5C45
cs=0x28f0;eip=0x005c46; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99270 les     bx, [bp+var_52] ;~ 28F0:5C46
cs=0x28f0;eip=0x005c49; 	X(PUSH(*(dw*)(raddr(es,bx+0x0C))));	// 99271 push    word ptr es:[bx+0Ch] ;~ 28F0:5C49
cs=0x28f0;eip=0x005c4d; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 99272 push    word ptr es:[bx+0Ah] ;~ 28F0:5C4D
cs=0x28f0;eip=0x005c51; 	R(CALL(sub_3842f,0));	// 99273 call    sub_3842F ;~ 28F0:5C51
cs=0x28f0;eip=0x005c54; 	R(JMP(loc_3d1c9));	// 99274 jmp     loc_3D1C9 ;~ 28F0:5C54
loc_3d137:
	// 10694 
cs=0x28f0;eip=0x005c57; 	T(SUB(ax, ax));	// 99279 sub     ax, ax ;~ 28F0:5C57
cs=0x28f0;eip=0x005c59; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 99280 mov     [bp+var_4C], ax ;~ 28F0:5C59
cs=0x28f0;eip=0x005c5c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 99281 mov     [bp+var_4E], ax ;~ 28F0:5C5C
cs=0x28f0;eip=0x005c5f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99282 les     bx, [bp+arg_0] ;~ 28F0:5C5F
cs=0x28f0;eip=0x005c62; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x302))));	// 99283 mov     ax, es:[bx+302h] ;~ 28F0:5C62
cs=0x28f0;eip=0x005c67; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x304))));	// 99284 mov     dx, es:[bx+304h] ;~ 28F0:5C67
cs=0x28f0;eip=0x005c6c; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_52))));	// 99285 les     bx, [bp+var_52] ;~ 28F0:5C6C
cs=0x28f0;eip=0x005c6f; 	T(CMP(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99286 cmp     dx, es:[bx+0Ch] ;~ 28F0:5C6F
cs=0x28f0;eip=0x005c73; 	R(JG(loc_3d165));	// 99287 jg      short loc_3D165 ;~ 28F0:5C73
cs=0x28f0;eip=0x005c75; 	R(JL(loc_3d15d));	// 99288 jl      short loc_3D15D ;~ 28F0:5C75
cs=0x28f0;eip=0x005c77; 	T(CMP(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99289 cmp     ax, es:[bx+0Ah] ;~ 28F0:5C77
cs=0x28f0;eip=0x005c7b; 	R(JNC(loc_3d165));	// 99290 jnb     short loc_3D165 ;~ 28F0:5C7B
loc_3d15d:
	// 10695 
cs=0x28f0;eip=0x005c7d; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x0C))));	// 99293 mov     dx, es:[bx+0Ch] ;~ 28F0:5C7D
cs=0x28f0;eip=0x005c81; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 99294 mov     ax, es:[bx+0Ah] ;~ 28F0:5C81
loc_3d165:
	// 10696 
cs=0x28f0;eip=0x005c85; 	X(MOV(*(dw*)(raddr(es,bx+0x0A)), ax));	// 99298 mov     es:[bx+0Ah], ax ;~ 28F0:5C85
cs=0x28f0;eip=0x005c89; 	X(MOV(*(dw*)(raddr(es,bx+0x0C)), dx));	// 99299 mov     es:[bx+0Ch], dx ;~ 28F0:5C89
cs=0x28f0;eip=0x005c8d; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0+2)))));	// 99300 push    word ptr [bp+arg_0+2] ;~ 28F0:5C8D
cs=0x28f0;eip=0x005c90; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+arg_0)))));	// 99301 push    word ptr [bp+arg_0] ;~ 28F0:5C90
cs=0x28f0;eip=0x005c93; 	T(MOV(ax, 2));	// 99302 mov     ax, 2 ;~ 28F0:5C93
cs=0x28f0;eip=0x005c96; 	X(PUSH(ax));	// 99303 push    ax ;~ 28F0:5C96
cs=0x28f0;eip=0x005c97; 	X(PUSH(dx));	// 99304 push    dx ;~ 28F0:5C97
cs=0x28f0;eip=0x005c98; 	X(PUSH(*(dw*)(raddr(es,bx+0x0A))));	// 99305 push    word ptr es:[bx+0Ah] ;~ 28F0:5C98
cs=0x28f0;eip=0x005c9c; 	R(CALL(sub_3842f,0));	// 99306 call    sub_3842F ;~ 28F0:5C9C
loc_3d17f:
	// 10697 
cs=0x28f0;eip=0x005c9f; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99309 les     bx, [bp+arg_0] ;~ 28F0:5C9F
cs=0x28f0;eip=0x005ca2; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 99310 mov     ax, [bp+var_1A] ;~ 28F0:5CA2
cs=0x28f0;eip=0x005ca5; 	X(MOV(*(dw*)(raddr(es,bx+0x320)), ax));	// 99311 mov     es:[bx+320h], ax ;~ 28F0:5CA5
cs=0x28f0;eip=0x005caa; 	R(JMP(loc_3d1c9));	// 99312 jmp     short loc_3D1C9 ;~ 28F0:5CAA
loc_3d18c:
	// 10698 
cs=0x28f0;eip=0x005cac; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 99317 mov     ax, [bp+var_4E] ;~ 28F0:5CAC
cs=0x28f0;eip=0x005caf; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4c))));	// 99318 mov     dx, [bp+var_4C] ;~ 28F0:5CAF
cs=0x28f0;eip=0x005cb2; 	T(SUB(ax, 0x100));	// 99319 sub     ax, 100h ;~ 28F0:5CB2
cs=0x28f0;eip=0x005cb5; 	T(SBB(dx, 0));	// 99320 sbb     dx, 0 ;~ 28F0:5CB5
cs=0x28f0;eip=0x005cb8; 	T(CMP(dx, *(dw*)(raddr(ss,bp+var_6))));	// 99321 cmp     dx, [bp+var_6] ;~ 28F0:5CB8
cs=0x28f0;eip=0x005cbb; 	R(JG(loc_3d1b7));	// 99322 jg      short loc_3D1B7 ;~ 28F0:5CBB
cs=0x28f0;eip=0x005cbd; 	R(JL(loc_3d1a4));	// 99323 jl      short loc_3D1A4 ;~ 28F0:5CBD
cs=0x28f0;eip=0x005cbf; 	T(CMP(ax, *(dw*)(raddr(ss,bp+var_8))));	// 99324 cmp     ax, [bp+var_8] ;~ 28F0:5CBF
cs=0x28f0;eip=0x005cc2; 	R(JA(loc_3d1b7));	// 99325 ja      short loc_3D1B7 ;~ 28F0:5CC2
loc_3d1a4:
	// 10699 
cs=0x28f0;eip=0x005cc4; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 99328 mov     dx, word ptr unk_47A9A ;~ 28F0:5CC4
cs=0x28f0;eip=0x005cc8; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 99329 mov     ax, [bp+var_1A] ;~ 28F0:5CC8
cs=0x28f0;eip=0x005ccb; 	T(MOV(es, dx));	// 99330 mov     es, dx ;~ 28F0:5CCB
cs=0x28f0;eip=0x005ccd; 	T(MOV(bx, ax));	// 99332 mov     bx, ax ;~ 28F0:5CCD
cs=0x28f0;eip=0x005ccf; 	T(TEST(*(dw*)(raddr(es,bx+2)), 0x8000));	// 99333 test    word ptr es:[bx+2], 8000h ;~ 28F0:5CCF
cs=0x28f0;eip=0x005cd5; 	R(JNZ(loc_3d1c9));	// 99334 jnz     short loc_3D1C9 ;~ 28F0:5CD5
loc_3d1b7:
	// 10700 
cs=0x28f0;eip=0x005cd7; 	T(SUB(ax, ax));	// 99338 sub     ax, ax ;~ 28F0:5CD7
cs=0x28f0;eip=0x005cd9; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 99339 mov     [bp+var_4C], ax ;~ 28F0:5CD9
cs=0x28f0;eip=0x005cdc; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 99340 mov     [bp+var_4E], ax ;~ 28F0:5CDC
cs=0x28f0;eip=0x005cdf; 	R(JMP(loc_3d17f));	// 99341 jmp     short loc_3D17F ;~ 28F0:5CDF
loc_3d1c1:
	// 10701 
cs=0x28f0;eip=0x005ce1; 	T(SUB(ax, ax));	// 99346 sub     ax, ax ;~ 28F0:5CE1
cs=0x28f0;eip=0x005ce3; 	X(MOV(*(dw*)(raddr(ss,bp+var_4c)), ax));	// 99347 mov     [bp+var_4C], ax ;~ 28F0:5CE3
cs=0x28f0;eip=0x005ce6; 	X(MOV(*(dw*)(raddr(ss,bp+var_4e)), ax));	// 99348 mov     [bp+var_4E], ax ;~ 28F0:5CE6
loc_3d1c9:
	// 10702 
cs=0x28f0;eip=0x005ce9; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 99352 les     bx, [bp+arg_0] ;~ 28F0:5CE9
cs=0x28f0;eip=0x005cec; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4e))));	// 99354 mov     ax, [bp+var_4E] ;~ 28F0:5CEC
cs=0x28f0;eip=0x005cef; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_4c))));	// 99355 mov     dx, [bp+var_4C] ;~ 28F0:5CEF
cs=0x28f0;eip=0x005cf2; 	X(MOV(*(dw*)(raddr(es,bx+0x2FA)), ax));	// 99356 mov     es:[bx+2FAh], ax ;~ 28F0:5CF2
cs=0x28f0;eip=0x005cf7; 	X(MOV(*(dw*)(raddr(es,bx+0x2FC)), dx));	// 99357 mov     es:[bx+2FCh], dx ;~ 28F0:5CF7
loc_3d1dc:
	// 10703 
cs=0x28f0;eip=0x005cfc; 	X(POP(si));	// 99360 pop     si ;~ 28F0:5CFC
cs=0x28f0;eip=0x005cfd; 	X(POP(di));	// 99361 pop     di ;~ 28F0:5CFD
cs=0x28f0;eip=0x005cfe; 	T(MOV(sp, bp));	// 99362 mov     sp, bp ;~ 28F0:5CFE
cs=0x28f0;eip=0x005d00; 	X(POP(bp));	// 99363 pop     bp ;~ 28F0:5D00
cs=0x28f0;eip=0x005d01; 	R(RETN(4));	// 99364 retn    4 ;~ 28F0:5D01

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_37514: 	goto loc_37514;
        case m2c::kloc_37544: 	goto loc_37544;
        case m2c::kloc_3756a: 	goto loc_3756a;
        case m2c::kloc_375bb: 	goto loc_375bb;
        case m2c::kloc_375cb: 	goto loc_375cb;
        case m2c::kloc_375d8: 	goto loc_375d8;
        case m2c::kloc_375e7: 	goto loc_375e7;
        case m2c::kloc_375f6: 	goto loc_375f6;
        case m2c::kloc_3761a: 	goto loc_3761a;
        case m2c::kloc_37625: 	goto loc_37625;
        case m2c::kloc_376d6: 	goto loc_376d6;
        case m2c::kloc_376f7: 	goto loc_376f7;
        case m2c::kloc_37700: 	goto loc_37700;
        case m2c::kloc_37747: 	goto loc_37747;
        case m2c::kloc_37751: 	goto loc_37751;
        case m2c::kloc_3775e: 	goto loc_3775e;
        case m2c::kloc_37778: 	goto loc_37778;
        case m2c::kloc_37784: 	goto loc_37784;
        case m2c::kloc_377d5: 	goto loc_377d5;
        case m2c::kloc_377df: 	goto loc_377df;
        case m2c::kloc_377ec: 	goto loc_377ec;
        case m2c::kloc_37806: 	goto loc_37806;
        case m2c::kloc_37812: 	goto loc_37812;
        case m2c::kloc_3784b: 	goto loc_3784b;
        case m2c::kloc_37857: 	goto loc_37857;
        case m2c::kloc_37887: 	goto loc_37887;
        case m2c::kloc_378a3: 	goto loc_378a3;
        case m2c::kloc_378ba: 	goto loc_378ba;
        case m2c::kloc_378e3: 	goto loc_378e3;
        case m2c::kloc_378fd: 	goto loc_378fd;
        case m2c::kloc_3793f: 	goto loc_3793f;
        case m2c::kloc_3794d: 	goto loc_3794d;
        case m2c::kloc_37979: 	goto loc_37979;
        case m2c::kloc_37981: 	goto loc_37981;
        case m2c::kloc_3798c: 	goto loc_3798c;
        case m2c::kloc_379b8: 	goto loc_379b8;
        case m2c::kloc_379c2: 	goto loc_379c2;
        case m2c::kloc_379f0: 	goto loc_379f0;
        case m2c::kloc_37a17: 	goto loc_37a17;
        case m2c::kloc_37a24: 	goto loc_37a24;
        case m2c::kloc_37a29: 	goto loc_37a29;
        case m2c::kloc_37a37: 	goto loc_37a37;
        case m2c::kloc_37a42: 	goto loc_37a42;
        case m2c::kloc_37a48: 	goto loc_37a48;
        case m2c::kloc_37a60: 	goto loc_37a60;
        case m2c::kloc_37a7c: 	goto loc_37a7c;
        case m2c::kloc_37a94: 	goto loc_37a94;
        case m2c::kloc_37ab0: 	goto loc_37ab0;
        case m2c::kloc_37ac8: 	goto loc_37ac8;
        case m2c::kloc_37ae1: 	goto loc_37ae1;
        case m2c::kloc_37aea: 	goto loc_37aea;
        case m2c::kloc_37b02: 	goto loc_37b02;
        case m2c::kloc_37b1b: 	goto loc_37b1b;
        case m2c::kloc_37b24: 	goto loc_37b24;
        case m2c::kloc_37b44: 	goto loc_37b44;
        case m2c::kloc_37b5d: 	goto loc_37b5d;
        case m2c::kloc_37b66: 	goto loc_37b66;
        case m2c::kloc_37b7c: 	goto loc_37b7c;
        case m2c::kloc_37b91: 	goto loc_37b91;
        case m2c::kloc_37baa: 	goto loc_37baa;
        case m2c::kloc_37baf: 	goto loc_37baf;
        case m2c::kloc_37bb6: 	goto loc_37bb6;
        case m2c::kloc_37bb9: 	goto loc_37bb9;
        case m2c::kloc_37beb: 	goto loc_37beb;
        case m2c::kloc_37bf1: 	goto loc_37bf1;
        case m2c::kloc_37bfb: 	goto loc_37bfb;
        case m2c::kloc_37c00: 	goto loc_37c00;
        case m2c::kloc_37c02: 	goto loc_37c02;
        case m2c::kloc_37c4b: 	goto loc_37c4b;
        case m2c::kloc_37c56: 	goto loc_37c56;
        case m2c::kloc_37c86: 	goto loc_37c86;
        case m2c::kloc_37c8e: 	goto loc_37c8e;
        case m2c::kloc_37cb5: 	goto loc_37cb5;
        case m2c::kloc_37cc2: 	goto loc_37cc2;
        case m2c::kloc_37d14: 	goto loc_37d14;
        case m2c::kloc_37d2f: 	goto loc_37d2f;
        case m2c::kloc_37d3d: 	goto loc_37d3d;
        case m2c::kloc_37d51: 	goto loc_37d51;
        case m2c::kloc_37d5f: 	goto loc_37d5f;
        case m2c::kloc_37d77: 	goto loc_37d77;
        case m2c::kloc_37d96: 	goto loc_37d96;
        case m2c::kloc_37dc3: 	goto loc_37dc3;
        case m2c::kloc_37dd4: 	goto loc_37dd4;
        case m2c::kloc_37dec: 	goto loc_37dec;
        case m2c::kloc_37e1b: 	goto loc_37e1b;
        case m2c::kloc_37e21: 	goto loc_37e21;
        case m2c::kloc_37e42: 	goto loc_37e42;
        case m2c::kloc_37e4d: 	goto loc_37e4d;
        case m2c::kloc_37e79: 	goto loc_37e79;
        case m2c::kloc_37e84: 	goto loc_37e84;
        case m2c::kloc_37eae: 	goto loc_37eae;
        case m2c::kloc_37eb6: 	goto loc_37eb6;
        case m2c::kloc_37efa: 	goto loc_37efa;
        case m2c::kloc_37f67: 	goto loc_37f67;
        case m2c::kloc_37f6f: 	goto loc_37f6f;
        case m2c::kloc_37f7d: 	goto loc_37f7d;
        case m2c::kloc_37f9a: 	goto loc_37f9a;
        case m2c::kloc_37fbc: 	goto loc_37fbc;
        case m2c::kloc_37fc5: 	goto loc_37fc5;
        case m2c::kloc_37fde: 	goto loc_37fde;
        case m2c::kloc_37fe4: 	goto loc_37fe4;
        case m2c::kloc_3800a: 	goto loc_3800a;
        case m2c::kloc_3802c: 	goto loc_3802c;
        case m2c::kloc_38051: 	goto loc_38051;
        case m2c::kloc_380a2: 	goto loc_380a2;
        case m2c::kloc_380bb: 	goto loc_380bb;
        case m2c::kloc_380f2: 	goto loc_380f2;
        case m2c::kloc_380fa: 	goto loc_380fa;
        case m2c::kloc_3813e: 	goto loc_3813e;
        case m2c::kloc_381ab: 	goto loc_381ab;
        case m2c::kloc_381b3: 	goto loc_381b3;
        case m2c::kloc_381d4: 	goto loc_381d4;
        case m2c::kloc_381da: 	goto loc_381da;
        case m2c::kloc_381e6: 	goto loc_381e6;
        case m2c::kloc_3820a: 	goto loc_3820a;
        case m2c::kloc_38243: 	goto loc_38243;
        case m2c::kloc_38257: 	goto loc_38257;
        case m2c::kloc_3825c: 	goto loc_3825c;
        case m2c::kloc_38275: 	goto loc_38275;
        case m2c::kloc_38282: 	goto loc_38282;
        case m2c::kloc_3828a: 	goto loc_3828a;
        case m2c::kloc_38292: 	goto loc_38292;
        case m2c::kloc_3829a: 	goto loc_3829a;
        case m2c::kloc_3829d: 	goto loc_3829d;
        case m2c::kloc_382e9: 	goto loc_382e9;
        case m2c::kloc_382ee: 	goto loc_382ee;
        case m2c::kloc_382fa: 	goto loc_382fa;
        case m2c::kloc_38329: 	goto loc_38329;
        case m2c::kloc_3832f: 	goto loc_3832f;
        case m2c::kloc_38356: 	goto loc_38356;
        case m2c::kloc_38374: 	goto loc_38374;
        case m2c::kloc_3837e: 	goto loc_3837e;
        case m2c::kloc_3838a: 	goto loc_3838a;
        case m2c::kloc_383d0: 	goto loc_383d0;
        case m2c::kloc_383d5: 	goto loc_383d5;
        case m2c::kloc_383ef: 	goto loc_383ef;
        case m2c::kloc_383fa: 	goto loc_383fa;
        case m2c::kloc_3842c: 	goto loc_3842c;
        case m2c::kloc_38447: 	goto loc_38447;
        case m2c::kloc_38450: 	goto loc_38450;
        case m2c::kloc_38459: 	goto loc_38459;
        case m2c::kloc_38469: 	goto loc_38469;
        case m2c::kloc_38471: 	goto loc_38471;
        case m2c::kloc_38479: 	goto loc_38479;
        case m2c::kloc_38481: 	goto loc_38481;
        case m2c::kloc_38484: 	goto loc_38484;
        case m2c::kloc_3849b: 	goto loc_3849b;
        case m2c::kloc_38557: 	goto loc_38557;
        case m2c::kloc_3855c: 	goto loc_3855c;
        case m2c::kloc_38562: 	goto loc_38562;
        case m2c::kloc_38590: 	goto loc_38590;
        case m2c::kloc_385bc: 	goto loc_385bc;
        case m2c::kloc_385c7: 	goto loc_385c7;
        case m2c::kloc_385f1: 	goto loc_385f1;
        case m2c::kloc_38615: 	goto loc_38615;
        case m2c::kloc_38657: 	goto loc_38657;
        case m2c::kloc_3866a: 	goto loc_3866a;
        case m2c::kloc_3867a: 	goto loc_3867a;
        case m2c::kloc_3868d: 	goto loc_3868d;
        case m2c::kloc_3869d: 	goto loc_3869d;
        case m2c::kloc_386a9: 	goto loc_386a9;
        case m2c::kloc_386fb: 	goto loc_386fb;
        case m2c::kloc_38709: 	goto loc_38709;
        case m2c::kloc_3871a: 	goto loc_3871a;
        case m2c::kloc_3873e: 	goto loc_3873e;
        case m2c::kloc_38749: 	goto loc_38749;
        case m2c::kloc_38779: 	goto loc_38779;
        case m2c::kloc_38796: 	goto loc_38796;
        case m2c::kloc_3879b: 	goto loc_3879b;
        case m2c::kloc_387f3: 	goto loc_387f3;
        case m2c::kloc_387fd: 	goto loc_387fd;
        case m2c::kloc_3880a: 	goto loc_3880a;
        case m2c::kloc_38818: 	goto loc_38818;
        case m2c::kloc_38845: 	goto loc_38845;
        case m2c::kloc_3886b: 	goto loc_3886b;
        case m2c::kloc_3887b: 	goto loc_3887b;
        case m2c::kloc_38947: 	goto loc_38947;
        case m2c::kloc_38964: 	goto loc_38964;
        case m2c::kloc_38991: 	goto loc_38991;
        case m2c::kloc_3899e: 	goto loc_3899e;
        case m2c::kloc_389c5: 	goto loc_389c5;
        case m2c::kloc_389f5: 	goto loc_389f5;
        case m2c::kloc_38a0f: 	goto loc_38a0f;
        case m2c::kloc_38a24: 	goto loc_38a24;
        case m2c::kloc_38a37: 	goto loc_38a37;
        case m2c::kloc_38a3a: 	goto loc_38a3a;
        case m2c::kloc_38a48: 	goto loc_38a48;
        case m2c::kloc_38a55: 	goto loc_38a55;
        case m2c::kloc_38a6e: 	goto loc_38a6e;
        case m2c::kloc_38a7c: 	goto loc_38a7c;
        case m2c::kloc_38aea: 	goto loc_38aea;
        case m2c::kloc_38b00: 	goto loc_38b00;
        case m2c::kloc_38b18: 	goto loc_38b18;
        case m2c::kloc_38b2b: 	goto loc_38b2b;
        case m2c::kloc_38b32: 	goto loc_38b32;
        case m2c::kloc_38b38: 	goto loc_38b38;
        case m2c::kloc_38b48: 	goto loc_38b48;
        case m2c::kloc_38ba7: 	goto loc_38ba7;
        case m2c::kloc_38bb9: 	goto loc_38bb9;
        case m2c::kloc_38bcb: 	goto loc_38bcb;
        case m2c::kloc_38bdd: 	goto loc_38bdd;
        case m2c::kloc_38bef: 	goto loc_38bef;
        case m2c::kloc_38bff: 	goto loc_38bff;
        case m2c::kloc_38c57: 	goto loc_38c57;
        case m2c::kloc_38d64: 	goto loc_38d64;
        case m2c::kloc_38d9a: 	goto loc_38d9a;
        case m2c::kloc_38e73: 	goto loc_38e73;
        case m2c::kloc_38e7f: 	goto loc_38e7f;
        case m2c::kloc_38e92: 	goto loc_38e92;
        case m2c::kloc_38ead: 	goto loc_38ead;
        case m2c::kloc_38eba: 	goto loc_38eba;
        case m2c::kloc_38ef7: 	goto loc_38ef7;
        case m2c::kloc_38f2b: 	goto loc_38f2b;
        case m2c::kloc_38f38: 	goto loc_38f38;
        case m2c::kloc_38f48: 	goto loc_38f48;
        case m2c::kloc_38fb2: 	goto loc_38fb2;
        case m2c::kloc_38fc7: 	goto loc_38fc7;
        case m2c::kloc_38fd7: 	goto loc_38fd7;
        case m2c::kloc_39039: 	goto loc_39039;
        case m2c::kloc_39057: 	goto loc_39057;
        case m2c::kloc_3907f: 	goto loc_3907f;
        case m2c::kloc_3908a: 	goto loc_3908a;
        case m2c::kloc_3910b: 	goto loc_3910b;
        case m2c::kloc_39147: 	goto loc_39147;
        case m2c::kloc_39154: 	goto loc_39154;
        case m2c::kloc_3919a: 	goto loc_3919a;
        case m2c::kloc_391af: 	goto loc_391af;
        case m2c::kloc_391d9: 	goto loc_391d9;
        case m2c::kloc_391de: 	goto loc_391de;
        case m2c::kloc_39209: 	goto loc_39209;
        case m2c::kloc_39222: 	goto loc_39222;
        case m2c::kloc_39253: 	goto loc_39253;
        case m2c::kloc_39258: 	goto loc_39258;
        case m2c::kloc_39278: 	goto loc_39278;
        case m2c::kloc_39289: 	goto loc_39289;
        case m2c::kloc_392b5: 	goto loc_392b5;
        case m2c::kloc_392c5: 	goto loc_392c5;
        case m2c::kloc_392d3: 	goto loc_392d3;
        case m2c::kloc_3931c: 	goto loc_3931c;
        case m2c::kloc_3934f: 	goto loc_3934f;
        case m2c::kloc_39357: 	goto loc_39357;
        case m2c::kloc_3936a: 	goto loc_3936a;
        case m2c::kloc_39389: 	goto loc_39389;
        case m2c::kloc_39394: 	goto loc_39394;
        case m2c::kloc_393cb: 	goto loc_393cb;
        case m2c::kloc_393fc: 	goto loc_393fc;
        case m2c::kloc_39470: 	goto loc_39470;
        case m2c::kloc_394ae: 	goto loc_394ae;
        case m2c::kloc_394b3: 	goto loc_394b3;
        case m2c::kloc_394b5: 	goto loc_394b5;
        case m2c::kloc_394c7: 	goto loc_394c7;
        case m2c::kloc_394df: 	goto loc_394df;
        case m2c::kloc_394f4: 	goto loc_394f4;
        case m2c::kloc_3951f: 	goto loc_3951f;
        case m2c::kloc_39543: 	goto loc_39543;
        case m2c::kloc_39548: 	goto loc_39548;
        case m2c::kloc_3954a: 	goto loc_3954a;
        case m2c::kloc_3954e: 	goto loc_3954e;
        case m2c::kloc_3956c: 	goto loc_3956c;
        case m2c::kloc_39575: 	goto loc_39575;
        case m2c::kloc_39593: 	goto loc_39593;
        case m2c::kloc_3959c: 	goto loc_3959c;
        case m2c::kloc_395aa: 	goto loc_395aa;
        case m2c::kloc_395b5: 	goto loc_395b5;
        case m2c::kloc_395bd: 	goto loc_395bd;
        case m2c::kloc_395f0: 	goto loc_395f0;
        case m2c::kloc_395f5: 	goto loc_395f5;
        case m2c::kloc_395f7: 	goto loc_395f7;
        case m2c::kloc_39609: 	goto loc_39609;
        case m2c::kloc_39621: 	goto loc_39621;
        case m2c::kloc_39636: 	goto loc_39636;
        case m2c::kloc_39661: 	goto loc_39661;
        case m2c::kloc_39685: 	goto loc_39685;
        case m2c::kloc_3968a: 	goto loc_3968a;
        case m2c::kloc_3968c: 	goto loc_3968c;
        case m2c::kloc_39690: 	goto loc_39690;
        case m2c::kloc_396ae: 	goto loc_396ae;
        case m2c::kloc_39723: 	goto loc_39723;
        case m2c::kloc_39790: 	goto loc_39790;
        case m2c::kloc_3979d: 	goto loc_3979d;
        case m2c::kloc_397b4: 	goto loc_397b4;
        case m2c::kloc_3989b: 	goto loc_3989b;
        case m2c::kloc_3993f: 	goto loc_3993f;
        case m2c::kloc_39949: 	goto loc_39949;
        case m2c::kloc_39965: 	goto loc_39965;
        case m2c::kloc_39972: 	goto loc_39972;
        case m2c::kloc_399af: 	goto loc_399af;
        case m2c::kloc_399b5: 	goto loc_399b5;
        case m2c::kloc_399dd: 	goto loc_399dd;
        case m2c::kloc_39a15: 	goto loc_39a15;
        case m2c::kloc_39a1a: 	goto loc_39a1a;
        case m2c::kloc_39a1c: 	goto loc_39a1c;
        case m2c::kloc_39a20: 	goto loc_39a20;
        case m2c::kloc_39a30: 	goto loc_39a30;
        case m2c::kloc_39a32: 	goto loc_39a32;
        case m2c::kloc_39a4b: 	goto loc_39a4b;
        case m2c::kloc_39a51: 	goto loc_39a51;
        case m2c::kloc_39a64: 	goto loc_39a64;
        case m2c::kloc_39a88: 	goto loc_39a88;
        case m2c::kloc_39a8d: 	goto loc_39a8d;
        case m2c::kloc_39ad2: 	goto loc_39ad2;
        case m2c::kloc_39ad4: 	goto loc_39ad4;
        case m2c::kloc_39ad8: 	goto loc_39ad8;
        case m2c::kloc_39afd: 	goto loc_39afd;
        case m2c::kloc_39b13: 	goto loc_39b13;
        case m2c::kloc_39b2d: 	goto loc_39b2d;
        case m2c::kloc_39b77: 	goto loc_39b77;
        case m2c::kloc_39b97: 	goto loc_39b97;
        case m2c::kloc_39bd7: 	goto loc_39bd7;
        case m2c::kloc_39bf7: 	goto loc_39bf7;
        case m2c::kloc_39c08: 	goto loc_39c08;
        case m2c::kloc_39c40: 	goto loc_39c40;
        case m2c::kloc_39c4b: 	goto loc_39c4b;
        case m2c::kloc_39c5d: 	goto loc_39c5d;
        case m2c::kloc_39c8f: 	goto loc_39c8f;
        case m2c::kloc_39cb7: 	goto loc_39cb7;
        case m2c::kloc_39cbd: 	goto loc_39cbd;
        case m2c::kloc_39cd0: 	goto loc_39cd0;
        case m2c::kloc_39d03: 	goto loc_39d03;
        case m2c::kloc_39d11: 	goto loc_39d11;
        case m2c::kloc_39d36: 	goto loc_39d36;
        case m2c::kloc_39d65: 	goto loc_39d65;
        case m2c::kloc_39d6a: 	goto loc_39d6a;
        case m2c::kloc_39d6c: 	goto loc_39d6c;
        case m2c::kloc_39d8d: 	goto loc_39d8d;
        case m2c::kloc_39d92: 	goto loc_39d92;
        case m2c::kloc_39d94: 	goto loc_39d94;
        case m2c::kloc_39d98: 	goto loc_39d98;
        case m2c::kloc_39da5: 	goto loc_39da5;
        case m2c::kloc_39dd0: 	goto loc_39dd0;
        case m2c::kloc_39dd5: 	goto loc_39dd5;
        case m2c::kloc_39dd7: 	goto loc_39dd7;
        case m2c::kloc_39ddb: 	goto loc_39ddb;
        case m2c::kloc_39deb: 	goto loc_39deb;
        case m2c::kloc_39ded: 	goto loc_39ded;
        case m2c::kloc_39e06: 	goto loc_39e06;
        case m2c::kloc_39e0c: 	goto loc_39e0c;
        case m2c::kloc_39e1f: 	goto loc_39e1f;
        case m2c::kloc_39e29: 	goto loc_39e29;
        case m2c::kloc_39e40: 	goto loc_39e40;
        case m2c::kloc_39e4c: 	goto loc_39e4c;
        case m2c::kloc_39e52: 	goto loc_39e52;
        case m2c::kloc_39e90: 	goto loc_39e90;
        case m2c::kloc_39e95: 	goto loc_39e95;
        case m2c::kloc_39e97: 	goto loc_39e97;
        case m2c::kloc_39e9b: 	goto loc_39e9b;
        case m2c::kloc_39eb5: 	goto loc_39eb5;
        case m2c::kloc_39ed5: 	goto loc_39ed5;
        case m2c::kloc_39edf: 	goto loc_39edf;
        case m2c::kloc_39ee1: 	goto loc_39ee1;
        case m2c::kloc_39ee5: 	goto loc_39ee5;
        case m2c::kloc_39f0a: 	goto loc_39f0a;
        case m2c::kloc_39f20: 	goto loc_39f20;
        case m2c::kloc_39f44: 	goto loc_39f44;
        case m2c::kloc_39f49: 	goto loc_39f49;
        case m2c::kloc_39f4b: 	goto loc_39f4b;
        case m2c::kloc_39f4f: 	goto loc_39f4f;
        case m2c::kloc_39f5c: 	goto loc_39f5c;
        case m2c::kloc_39f80: 	goto loc_39f80;
        case m2c::kloc_39f85: 	goto loc_39f85;
        case m2c::kloc_39f87: 	goto loc_39f87;
        case m2c::kloc_39fa8: 	goto loc_39fa8;
        case m2c::kloc_39fad: 	goto loc_39fad;
        case m2c::kloc_39faf: 	goto loc_39faf;
        case m2c::kloc_39fb3: 	goto loc_39fb3;
        case m2c::kloc_39fc5: 	goto loc_39fc5;
        case m2c::kloc_39fcf: 	goto loc_39fcf;
        case m2c::kloc_39fec: 	goto loc_39fec;
        case m2c::kloc_39ff1: 	goto loc_39ff1;
        case m2c::kloc_39ff3: 	goto loc_39ff3;
        case m2c::kloc_39ffa: 	goto loc_39ffa;
        case m2c::kloc_3a011: 	goto loc_3a011;
        case m2c::kloc_3a04f: 	goto loc_3a04f;
        case m2c::kloc_3a054: 	goto loc_3a054;
        case m2c::kloc_3a056: 	goto loc_3a056;
        case m2c::kloc_3a05a: 	goto loc_3a05a;
        case m2c::kloc_3a07f: 	goto loc_3a07f;
        case m2c::kloc_3a0a3: 	goto loc_3a0a3;
        case m2c::kloc_3a0a8: 	goto loc_3a0a8;
        case m2c::kloc_3a0aa: 	goto loc_3a0aa;
        case m2c::kloc_3a0d3: 	goto loc_3a0d3;
        case m2c::kloc_3a100: 	goto loc_3a100;
        case m2c::kloc_3a105: 	goto loc_3a105;
        case m2c::kloc_3a107: 	goto loc_3a107;
        case m2c::kloc_3a117: 	goto loc_3a117;
        case m2c::kloc_3a15c: 	goto loc_3a15c;
        case m2c::kloc_3a17c: 	goto loc_3a17c;
        case m2c::kloc_3a1b5: 	goto loc_3a1b5;
        case m2c::kloc_3a1d2: 	goto loc_3a1d2;
        case m2c::kloc_3a1dc: 	goto loc_3a1dc;
        case m2c::kloc_3a1e8: 	goto loc_3a1e8;
        case m2c::kloc_3a20f: 	goto loc_3a20f;
        case m2c::kloc_3a21e: 	goto loc_3a21e;
        case m2c::kloc_3a2e7: 	goto loc_3a2e7;
        case m2c::kloc_3a2f5: 	goto loc_3a2f5;
        case m2c::kloc_3a2fa: 	goto loc_3a2fa;
        case m2c::kloc_3a306: 	goto loc_3a306;
        case m2c::kloc_3a30c: 	goto loc_3a30c;
        case m2c::kloc_3a337: 	goto loc_3a337;
        case m2c::kloc_3a341: 	goto loc_3a341;
        case m2c::kloc_3a344: 	goto loc_3a344;
        case m2c::kloc_3a3b9: 	goto loc_3a3b9;
        case m2c::kloc_3a3bc: 	goto loc_3a3bc;
        case m2c::kloc_3a405: 	goto loc_3a405;
        case m2c::kloc_3a40b: 	goto loc_3a40b;
        case m2c::kloc_3a43c: 	goto loc_3a43c;
        case m2c::kloc_3a44f: 	goto loc_3a44f;
        case m2c::kloc_3a457: 	goto loc_3a457;
        case m2c::kloc_3a45a: 	goto loc_3a45a;
        case m2c::kloc_3a4f3: 	goto loc_3a4f3;
        case m2c::kloc_3a4fb: 	goto loc_3a4fb;
        case m2c::kloc_3a4fd: 	goto loc_3a4fd;
        case m2c::kloc_3a538: 	goto loc_3a538;
        case m2c::kloc_3a53e: 	goto loc_3a53e;
        case m2c::kloc_3a575: 	goto loc_3a575;
        case m2c::kloc_3a585: 	goto loc_3a585;
        case m2c::kloc_3a588: 	goto loc_3a588;
        case m2c::kloc_3a61a: 	goto loc_3a61a;
        case m2c::kloc_3a61c: 	goto loc_3a61c;
        case m2c::kloc_3a6be: 	goto loc_3a6be;
        case m2c::kloc_3a6e9: 	goto loc_3a6e9;
        case m2c::kloc_3a6f1: 	goto loc_3a6f1;
        case m2c::kloc_3a6fe: 	goto loc_3a6fe;
        case m2c::kloc_3a709: 	goto loc_3a709;
        case m2c::kloc_3a720: 	goto loc_3a720;
        case m2c::kloc_3a752: 	goto loc_3a752;
        case m2c::kloc_3a756: 	goto loc_3a756;
        case m2c::kloc_3a75b: 	goto loc_3a75b;
        case m2c::kloc_3a763: 	goto loc_3a763;
        case m2c::kloc_3a799: 	goto loc_3a799;
        case m2c::kloc_3a79e: 	goto loc_3a79e;
        case m2c::kloc_3a7d2: 	goto loc_3a7d2;
        case m2c::kloc_3a804: 	goto loc_3a804;
        case m2c::kloc_3a811: 	goto loc_3a811;
        case m2c::kloc_3a83b: 	goto loc_3a83b;
        case m2c::kloc_3a846: 	goto loc_3a846;
        case m2c::kloc_3a871: 	goto loc_3a871;
        case m2c::kloc_3a87e: 	goto loc_3a87e;
        case m2c::kloc_3a91a: 	goto loc_3a91a;
        case m2c::kloc_3a93c: 	goto loc_3a93c;
        case m2c::kloc_3a95d: 	goto loc_3a95d;
        case m2c::kloc_3a9b2: 	goto loc_3a9b2;
        case m2c::kloc_3a9be: 	goto loc_3a9be;
        case m2c::kloc_3aa25: 	goto loc_3aa25;
        case m2c::kloc_3aa30: 	goto loc_3aa30;
        case m2c::kloc_3aa3d: 	goto loc_3aa3d;
        case m2c::kloc_3aa96: 	goto loc_3aa96;
        case m2c::kloc_3ab7a: 	goto loc_3ab7a;
        case m2c::kloc_3ac59: 	goto loc_3ac59;
        case m2c::kloc_3ac69: 	goto loc_3ac69;
        case m2c::kloc_3ad12: 	goto loc_3ad12;
        case m2c::kloc_3ad1d: 	goto loc_3ad1d;
        case m2c::kloc_3ad2a: 	goto loc_3ad2a;
        case m2c::kloc_3adeb: 	goto loc_3adeb;
        case m2c::kloc_3adf3: 	goto loc_3adf3;
        case m2c::kloc_3ae6f: 	goto loc_3ae6f;
        case m2c::kloc_3aedb: 	goto loc_3aedb;
        case m2c::kloc_3aee9: 	goto loc_3aee9;
        case m2c::kloc_3af71: 	goto loc_3af71;
        case m2c::kloc_3afa7: 	goto loc_3afa7;
        case m2c::kloc_3afb2: 	goto loc_3afb2;
        case m2c::kloc_3afc0: 	goto loc_3afc0;
        case m2c::kloc_3aff9: 	goto loc_3aff9;
        case m2c::kloc_3b00d: 	goto loc_3b00d;
        case m2c::kloc_3b061: 	goto loc_3b061;
        case m2c::kloc_3b07c: 	goto loc_3b07c;
        case m2c::kloc_3b0c8: 	goto loc_3b0c8;
        case m2c::kloc_3b0e6: 	goto loc_3b0e6;
        case m2c::kloc_3b285: 	goto loc_3b285;
        case m2c::kloc_3b28f: 	goto loc_3b28f;
        case m2c::kloc_3b2aa: 	goto loc_3b2aa;
        case m2c::kloc_3b2b9: 	goto loc_3b2b9;
        case m2c::kloc_3b2bf: 	goto loc_3b2bf;
        case m2c::kloc_3b49b: 	goto loc_3b49b;
        case m2c::kloc_3b4b4: 	goto loc_3b4b4;
        case m2c::kloc_3b4fc: 	goto loc_3b4fc;
        case m2c::kloc_3b515: 	goto loc_3b515;
        case m2c::kloc_3b57d: 	goto loc_3b57d;
        case m2c::kloc_3b587: 	goto loc_3b587;
        case m2c::kloc_3b5c0: 	goto loc_3b5c0;
        case m2c::kloc_3b5cc: 	goto loc_3b5cc;
        case m2c::kloc_3b5f3: 	goto loc_3b5f3;
        case m2c::kloc_3b602: 	goto loc_3b602;
        case m2c::kloc_3b685: 	goto loc_3b685;
        case m2c::kloc_3b6b9: 	goto loc_3b6b9;
        case m2c::kloc_3b6cb: 	goto loc_3b6cb;
        case m2c::kloc_3b6dd: 	goto loc_3b6dd;
        case m2c::kloc_3b6f5: 	goto loc_3b6f5;
        case m2c::kloc_3b70b: 	goto loc_3b70b;
        case m2c::kloc_3b74f: 	goto loc_3b74f;
        case m2c::kloc_3b76a: 	goto loc_3b76a;
        case m2c::kloc_3b7e0: 	goto loc_3b7e0;
        case m2c::kloc_3b80d: 	goto loc_3b80d;
        case m2c::kloc_3b860: 	goto loc_3b860;
        case m2c::kloc_3b880: 	goto loc_3b880;
        case m2c::kloc_3b884: 	goto loc_3b884;
        case m2c::kloc_3b88a: 	goto loc_3b88a;
        case m2c::kloc_3b89d: 	goto loc_3b89d;
        case m2c::kloc_3b8c2: 	goto loc_3b8c2;
        case m2c::kloc_3b8f3: 	goto loc_3b8f3;
        case m2c::kloc_3b90d: 	goto loc_3b90d;
        case m2c::kloc_3b92f: 	goto loc_3b92f;
        case m2c::kloc_3b94c: 	goto loc_3b94c;
        case m2c::kloc_3b977: 	goto loc_3b977;
        case m2c::kloc_3b99a: 	goto loc_3b99a;
        case m2c::kloc_3b9e5: 	goto loc_3b9e5;
        case m2c::kloc_3ba3e: 	goto loc_3ba3e;
        case m2c::kloc_3ba4a: 	goto loc_3ba4a;
        case m2c::kloc_3ba5e: 	goto loc_3ba5e;
        case m2c::kloc_3ba76: 	goto loc_3ba76;
        case m2c::kloc_3ba86: 	goto loc_3ba86;
        case m2c::kloc_3bab6: 	goto loc_3bab6;
        case m2c::kloc_3babe: 	goto loc_3babe;
        case m2c::kloc_3bad1: 	goto loc_3bad1;
        case m2c::kloc_3bad7: 	goto loc_3bad7;
        case m2c::kloc_3baec: 	goto loc_3baec;
        case m2c::kloc_3bb1e: 	goto loc_3bb1e;
        case m2c::kloc_3bb28: 	goto loc_3bb28;
        case m2c::kloc_3bb3d: 	goto loc_3bb3d;
        case m2c::kloc_3bb45: 	goto loc_3bb45;
        case m2c::kloc_3bb4c: 	goto loc_3bb4c;
        case m2c::kloc_3bb6b: 	goto loc_3bb6b;
        case m2c::kloc_3bb75: 	goto loc_3bb75;
        case m2c::kloc_3bb8a: 	goto loc_3bb8a;
        case m2c::kloc_3bb92: 	goto loc_3bb92;
        case m2c::kloc_3bb99: 	goto loc_3bb99;
        case m2c::kloc_3bbb6: 	goto loc_3bbb6;
        case m2c::kloc_3bbbe: 	goto loc_3bbbe;
        case m2c::kloc_3bbd1: 	goto loc_3bbd1;
        case m2c::kloc_3bbd7: 	goto loc_3bbd7;
        case m2c::kloc_3bbde: 	goto loc_3bbde;
        case m2c::kloc_3bbfc: 	goto loc_3bbfc;
        case m2c::kloc_3bc04: 	goto loc_3bc04;
        case m2c::kloc_3bc18: 	goto loc_3bc18;
        case m2c::kloc_3bc1e: 	goto loc_3bc1e;
        case m2c::kloc_3bc26: 	goto loc_3bc26;
        case m2c::kloc_3bc50: 	goto loc_3bc50;
        case m2c::kloc_3bc73: 	goto loc_3bc73;
        case m2c::kloc_3bc8c: 	goto loc_3bc8c;
        case m2c::kloc_3bc9f: 	goto loc_3bc9f;
        case m2c::kloc_3bcc2: 	goto loc_3bcc2;
        case m2c::kloc_3bcdd: 	goto loc_3bcdd;
        case m2c::kloc_3bd05: 	goto loc_3bd05;
        case m2c::kloc_3bd28: 	goto loc_3bd28;
        case m2c::kloc_3bd41: 	goto loc_3bd41;
        case m2c::kloc_3bd54: 	goto loc_3bd54;
        case m2c::kloc_3bd77: 	goto loc_3bd77;
        case m2c::kloc_3bd92: 	goto loc_3bd92;
        case m2c::kloc_3bdc1: 	goto loc_3bdc1;
        case m2c::kloc_3bde6: 	goto loc_3bde6;
        case m2c::kloc_3bdf9: 	goto loc_3bdf9;
        case m2c::kloc_3be15: 	goto loc_3be15;
        case m2c::kloc_3be1c: 	goto loc_3be1c;
        case m2c::kloc_3be7c: 	goto loc_3be7c;
        case m2c::kloc_3bea1: 	goto loc_3bea1;
        case m2c::kloc_3beb4: 	goto loc_3beb4;
        case m2c::kloc_3bed0: 	goto loc_3bed0;
        case m2c::kloc_3bed7: 	goto loc_3bed7;
        case m2c::kloc_3bf38: 	goto loc_3bf38;
        case m2c::kloc_3bf5b: 	goto loc_3bf5b;
        case m2c::kloc_3bf74: 	goto loc_3bf74;
        case m2c::kloc_3bf87: 	goto loc_3bf87;
        case m2c::kloc_3bfaa: 	goto loc_3bfaa;
        case m2c::kloc_3bfc5: 	goto loc_3bfc5;
        case m2c::kloc_3bff4: 	goto loc_3bff4;
        case m2c::kloc_3c017: 	goto loc_3c017;
        case m2c::kloc_3c030: 	goto loc_3c030;
        case m2c::kloc_3c043: 	goto loc_3c043;
        case m2c::kloc_3c066: 	goto loc_3c066;
        case m2c::kloc_3c081: 	goto loc_3c081;
        case m2c::kloc_3c0a9: 	goto loc_3c0a9;
        case m2c::kloc_3c0cc: 	goto loc_3c0cc;
        case m2c::kloc_3c0e5: 	goto loc_3c0e5;
        case m2c::kloc_3c0f8: 	goto loc_3c0f8;
        case m2c::kloc_3c11b: 	goto loc_3c11b;
        case m2c::kloc_3c136: 	goto loc_3c136;
        case m2c::kloc_3c15e: 	goto loc_3c15e;
        case m2c::kloc_3c17c: 	goto loc_3c17c;
        case m2c::kloc_3c196: 	goto loc_3c196;
        case m2c::kloc_3c1b9: 	goto loc_3c1b9;
        case m2c::kloc_3c1c0: 	goto loc_3c1c0;
        case m2c::kloc_3c219: 	goto loc_3c219;
        case m2c::kloc_3c237: 	goto loc_3c237;
        case m2c::kloc_3c251: 	goto loc_3c251;
        case m2c::kloc_3c274: 	goto loc_3c274;
        case m2c::kloc_3c27b: 	goto loc_3c27b;
        case m2c::kloc_3c2d1: 	goto loc_3c2d1;
        case m2c::kloc_3c2e1: 	goto loc_3c2e1;
        case m2c::kloc_3c2ed: 	goto loc_3c2ed;
        case m2c::kloc_3c302: 	goto loc_3c302;
        case m2c::kloc_3c314: 	goto loc_3c314;
        case m2c::kloc_3c316: 	goto loc_3c316;
        case m2c::kloc_3c3f2: 	goto loc_3c3f2;
        case m2c::kloc_3c3fe: 	goto loc_3c3fe;
        case m2c::kloc_3c5e2: 	goto loc_3c5e2;
        case m2c::kloc_3c63c: 	goto loc_3c63c;
        case m2c::kloc_3c693: 	goto loc_3c693;
        case m2c::kloc_3c6a4: 	goto loc_3c6a4;
        case m2c::kloc_3c6d9: 	goto loc_3c6d9;
        case m2c::kloc_3c71a: 	goto loc_3c71a;
        case m2c::kloc_3c7e5: 	goto loc_3c7e5;
        case m2c::kloc_3c8cf: 	goto loc_3c8cf;
        case m2c::kloc_3c930: 	goto loc_3c930;
        case m2c::kloc_3c960: 	goto loc_3c960;
        case m2c::kloc_3c998: 	goto loc_3c998;
        case m2c::kloc_3c9a3: 	goto loc_3c9a3;
        case m2c::kloc_3c9ca: 	goto loc_3c9ca;
        case m2c::kloc_3c9e3: 	goto loc_3c9e3;
        case m2c::kloc_3ca13: 	goto loc_3ca13;
        case m2c::kloc_3ca18: 	goto loc_3ca18;
        case m2c::kloc_3ca35: 	goto loc_3ca35;
        case m2c::kloc_3ca56: 	goto loc_3ca56;
        case m2c::kloc_3ca5d: 	goto loc_3ca5d;
        case m2c::kloc_3ca8f: 	goto loc_3ca8f;
        case m2c::kloc_3cabf: 	goto loc_3cabf;
        case m2c::kloc_3cb06: 	goto loc_3cb06;
        case m2c::kloc_3cb0e: 	goto loc_3cb0e;
        case m2c::kloc_3cb2c: 	goto loc_3cb2c;
        case m2c::kloc_3cb33: 	goto loc_3cb33;
        case m2c::kloc_3cb49: 	goto loc_3cb49;
        case m2c::kloc_3cb50: 	goto loc_3cb50;
        case m2c::kloc_3cb6e: 	goto loc_3cb6e;
        case m2c::kloc_3cb75: 	goto loc_3cb75;
        case m2c::kloc_3cb8b: 	goto loc_3cb8b;
        case m2c::kloc_3cb92: 	goto loc_3cb92;
        case m2c::kloc_3cc02: 	goto loc_3cc02;
        case m2c::kloc_3cc13: 	goto loc_3cc13;
        case m2c::kloc_3cc65: 	goto loc_3cc65;
        case m2c::kloc_3ccd1: 	goto loc_3ccd1;
        case m2c::kloc_3cd31: 	goto loc_3cd31;
        case m2c::kloc_3cd3a: 	goto loc_3cd3a;
        case m2c::kloc_3cd4e: 	goto loc_3cd4e;
        case m2c::kloc_3cd5a: 	goto loc_3cd5a;
        case m2c::kloc_3cd71: 	goto loc_3cd71;
        case m2c::kloc_3cda9: 	goto loc_3cda9;
        case m2c::kloc_3ce0f: 	goto loc_3ce0f;
        case m2c::kloc_3ce4c: 	goto loc_3ce4c;
        case m2c::kloc_3ce58: 	goto loc_3ce58;
        case m2c::kloc_3ce74: 	goto loc_3ce74;
        case m2c::kloc_3cec9: 	goto loc_3cec9;
        case m2c::kloc_3ced8: 	goto loc_3ced8;
        case m2c::kloc_3cf09: 	goto loc_3cf09;
        case m2c::kloc_3cf0b: 	goto loc_3cf0b;
        case m2c::kloc_3cf13: 	goto loc_3cf13;
        case m2c::kloc_3cf5f: 	goto loc_3cf5f;
        case m2c::kloc_3cf9b: 	goto loc_3cf9b;
        case m2c::kloc_3cfa3: 	goto loc_3cfa3;
        case m2c::kloc_3cff3: 	goto loc_3cff3;
        case m2c::kloc_3cffe: 	goto loc_3cffe;
        case m2c::kloc_3d00c: 	goto loc_3d00c;
        case m2c::kloc_3d01c: 	goto loc_3d01c;
        case m2c::kloc_3d04f: 	goto loc_3d04f;
        case m2c::kloc_3d05a: 	goto loc_3d05a;
        case m2c::kloc_3d07d: 	goto loc_3d07d;
        case m2c::kloc_3d088: 	goto loc_3d088;
        case m2c::kloc_3d0ab: 	goto loc_3d0ab;
        case m2c::kloc_3d0b6: 	goto loc_3d0b6;
        case m2c::kloc_3d0de: 	goto loc_3d0de;
        case m2c::kloc_3d102: 	goto loc_3d102;
        case m2c::kloc_3d10a: 	goto loc_3d10a;
        case m2c::kloc_3d120: 	goto loc_3d120;
        case m2c::kloc_3d137: 	goto loc_3d137;
        case m2c::kloc_3d15d: 	goto loc_3d15d;
        case m2c::kloc_3d165: 	goto loc_3d165;
        case m2c::kloc_3d17f: 	goto loc_3d17f;
        case m2c::kloc_3d18c: 	goto loc_3d18c;
        case m2c::kloc_3d1a4: 	goto loc_3d1a4;
        case m2c::kloc_3d1b7: 	goto loc_3d1b7;
        case m2c::kloc_3d1c1: 	goto loc_3d1c1;
        case m2c::kloc_3d1c9: 	goto loc_3d1c9;
        case m2c::kloc_3d1dc: 	goto loc_3d1dc;
        case m2c::kseg026_proc: 	goto seg026_proc;
        case m2c::ksub_374e6: 	goto sub_374e6;
        case m2c::ksub_37550: 	goto sub_37550;
        case m2c::ksub_376e1: 	goto sub_376e1;
        case m2c::ksub_37a1a: 	goto sub_37a1a;
        case m2c::ksub_37bbd: 	goto sub_37bbd;
        case m2c::ksub_37c08: 	goto sub_37c08;
        case m2c::ksub_37df2: 	goto sub_37df2;
        case m2c::ksub_37e25: 	goto sub_37e25;
        case m2c::ksub_38229: 	goto sub_38229;
        case m2c::ksub_38247: 	goto sub_38247;
        case m2c::ksub_3842f: 	goto sub_3842f;
        case m2c::ksub_3884d: 	goto sub_3884d;
        case m2c::ksub_3887f: 	goto sub_3887f;
        case m2c::ksub_389a2: 	goto sub_389a2;
        case m2c::ksub_389a7: 	goto sub_389a7;
        case m2c::ksub_38b1c: 	goto sub_38b1c;
        case m2c::ksub_38b4f: 	goto sub_38b4f;
        case m2c::ksub_38ca4: 	goto sub_38ca4;
        case m2c::ksub_38eff: 	goto sub_38eff;
        case m2c::ksub_38f8e: 	goto sub_38f8e;
        case m2c::ksub_3901a: 	goto sub_3901a;
        case m2c::ksub_39113: 	goto sub_39113;
        case m2c::ksub_3915a: 	goto sub_3915a;
        case m2c::ksub_39478: 	goto sub_39478;
        case m2c::ksub_3957b: 	goto sub_3957b;
        case m2c::ksub_39729: 	goto sub_39729;
        case m2c::ksub_39765: 	goto sub_39765;
        case m2c::ksub_399d0: 	goto sub_399d0;
        case m2c::ksub_39b7b: 	goto sub_39b7b;
        case m2c::ksub_39bdb: 	goto sub_39bdb;
        case m2c::ksub_39c0c: 	goto sub_39c0c;
        case m2c::ksub_3a22e: 	goto sub_3a22e;
        case m2c::ksub_3a267: 	goto sub_3a267;
        case m2c::ksub_3a2a0: 	goto sub_3a2a0;
        case m2c::ksub_3a3c4: 	goto sub_3a3c4;
        case m2c::ksub_3a505: 	goto sub_3a505;
        case m2c::ksub_3a624: 	goto sub_3a624;
        case m2c::ksub_3a6c6: 	goto sub_3a6c6;
        case m2c::ksub_3a728: 	goto sub_3a728;
        case m2c::ksub_3a769: 	goto sub_3a769;
        case m2c::ksub_3a84e: 	goto sub_3a84e;
        case m2c::ksub_3aa0d: 	goto sub_3aa0d;
        case m2c::ksub_3ab80: 	goto sub_3ab80;
        case m2c::ksub_3af77: 	goto sub_3af77;
        case m2c::ksub_3b0ee: 	goto sub_3b0ee;
        case m2c::ksub_3b26b: 	goto sub_3b26b;
        case m2c::ksub_3b300: 	goto sub_3b300;
        case m2c::ksub_3b44e: 	goto sub_3b44e;
        case m2c::ksub_3b608: 	goto sub_3b608;
        case m2c::ksub_3b97e: 	goto sub_3b97e;
        case m2c::ksub_3b9eb: 	goto sub_3b9eb;
        case m2c::ksub_3ba8c: 	goto sub_3ba8c;
        case m2c::ksub_3bb03: 	goto sub_3bb03;
        case m2c::ksub_3bb9d: 	goto sub_3bb9d;
        case m2c::ksub_3bbe2: 	goto sub_3bbe2;
        case m2c::ksub_3bc2a: 	goto sub_3bc2a;
        case m2c::ksub_3bce6: 	goto sub_3bce6;
        case m2c::ksub_3bd9b: 	goto sub_3bd9b;
        case m2c::ksub_3be56: 	goto sub_3be56;
        case m2c::ksub_3bfce: 	goto sub_3bfce;
        case m2c::ksub_3c08a: 	goto sub_3c08a;
        case m2c::ksub_3c13f: 	goto sub_3c13f;
        case m2c::ksub_3c1fa: 	goto sub_3c1fa;
        case m2c::ksub_3c2b6: 	goto sub_3c2b6;
        case m2c::ksub_3c31a: 	goto sub_3c31a;
        case m2c::ksub_3c3de: 	goto sub_3c3de;
        case m2c::ksub_3c5a1: 	goto sub_3c5a1;
        case m2c::ksub_3c71e: 	goto sub_3c71e;
        case m2c::ksub_3c974: 	goto sub_3c974;
        case m2c::ksub_3cc2d: 	goto sub_3cc2d;
        case m2c::ksub_3ccd7: 	goto sub_3ccd7;
        case m2c::ksub_3cf1a: 	goto sub_3cf1a;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

