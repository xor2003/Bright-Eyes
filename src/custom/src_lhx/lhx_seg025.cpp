/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group23(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group23:
    _begin:
sub_36d7a:
	// 87346 
#undef var_4
#define var_4 -4
	// 87349 var_4           = word ptr -4 ;~ 2879:000A
#undef var_2
#define var_2 -2
	// 87350 var_2           = word ptr -2 ;~ 2879:000A
cs=0x2879;eip=0x00000a; 	X(PUSH(bp));	// 87352 push    bp ;~ 2879:000A
cs=0x2879;eip=0x00000b; 	T(MOV(bp, sp));	// 87353 mov     bp, sp ;~ 2879:000B
cs=0x2879;eip=0x00000d; 	T(SUB(sp, 4));	// 87354 sub     sp, 4 ;~ 2879:000D
cs=0x2879;eip=0x000010; 	T(CMP(*(dw*)((&unk_4a486)), 0));	// 87355 cmp     word ptr unk_4A486, 0 ;~ 2879:0010
cs=0x2879;eip=0x000015; 	R(JNZ(loc_36df3));	// 87356 jnz     short loc_36DF3 ;~ 2879:0015
cs=0x2879;eip=0x000017; 	T(CMP(unk_55211, 0));	// 87357 cmp     byte ptr unk_55211, 0 ;~ 2879:0017
cs=0x2879;eip=0x00001c; 	R(JZ(loc_36df3));	// 87358 jz      short loc_36DF3 ;~ 2879:001C
cs=0x2879;eip=0x00001e; 	T(MOV(bl, unk_55211));	// 87359 mov     bl, byte ptr unk_55211 ;~ 2879:001E
cs=0x2879;eip=0x000022; 	T(SUB(bh, bh));	// 87360 sub     bh, bh ;~ 2879:0022
cs=0x2879;eip=0x000024; 	T(SHL(bx, 1));	// 87361 shl     bx, 1 ;~ 2879:0024
cs=0x2879;eip=0x000026; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2ADA))));	// 87362 push    word ptr [bx+2ADAh] ;~ 2879:0026
cs=0x2879;eip=0x00002a; 	T(ax = bp+var_2);	// 87363 lea     ax, [bp+var_2] ;~ 2879:002A
cs=0x2879;eip=0x00002d; 	X(PUSH(ax));	// 87364 push    ax ;~ 2879:002D
cs=0x2879;eip=0x00002e; 	R(CALLF(sub_31643,0));	// 87365 call    sub_31643 ;~ 2879:002E
cs=0x2879;eip=0x000033; 	X(MOV(*(dw*)((&unk_4a484)), ax));	// 87366 mov     word ptr unk_4A484, ax ;~ 2879:0033
cs=0x2879;eip=0x000036; 	X(MOV(*(dw*)((&unk_4a486)), dx));	// 87367 mov     word ptr unk_4A486, dx ;~ 2879:0036
cs=0x2879;eip=0x00003a; 	T(MOV(ax, dx));	// 87368 mov     ax, dx ;~ 2879:003A
cs=0x2879;eip=0x00003c; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 87369 mov     [bp+var_4], ax ;~ 2879:003C
cs=0x2879;eip=0x00003f; 	T(LES(bx, *(dd*)((&unk_4a484))));	// 87370 les     bx, dword ptr unk_4A484 ;~ 2879:003F
cs=0x2879;eip=0x000043; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 87371 mov     ax, es:[bx+2] ;~ 2879:0043
cs=0x2879;eip=0x000047; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 87372 mov     [bp+var_2], ax ;~ 2879:0047
cs=0x2879;eip=0x00004a; 	T(ADD(ax, 0x0F));	// 87373 add     ax, 0Fh ;~ 2879:004A
cs=0x2879;eip=0x00004d; 	T(MOV(cl, 4));	// 87374 mov     cl, 4 ;~ 2879:004D
cs=0x2879;eip=0x00004f; 	T(SHR(ax, cl));	// 87375 shr     ax, cl ;~ 2879:004F
cs=0x2879;eip=0x000051; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_4))));	// 87376 add     ax, [bp+var_4] ;~ 2879:0051
cs=0x2879;eip=0x000054; 	T(MOV(dx, ax));	// 87377 mov     dx, ax ;~ 2879:0054
cs=0x2879;eip=0x000056; 	T(SUB(ax, ax));	// 87378 sub     ax, ax ;~ 2879:0056
cs=0x2879;eip=0x000058; 	X(MOV(*(dw*)((&unk_544e4)), ax));	// 87379 mov     word ptr unk_544E4, ax ;~ 2879:0058
cs=0x2879;eip=0x00005b; 	X(MOV(*(dw*)((&unk_544e6)), dx));	// 87380 mov     word ptr unk_544E6, dx ;~ 2879:005B
cs=0x2879;eip=0x00005f; 	T(MOV(ax, 0x12));	// 87381 mov     ax, 12h ;~ 2879:005F
cs=0x2879;eip=0x000062; 	X(PUSH(ax));	// 87382 push    ax ;~ 2879:0062
cs=0x2879;eip=0x000063; 	R(CALL(sub_36ee7,0));	// 87383 call    sub_36EE7 ;~ 2879:0063
cs=0x2879;eip=0x000066; 	T(ADD(sp, 2));	// 87384 add     sp, 2 ;~ 2879:0066
cs=0x2879;eip=0x000069; 	T(SUB(ax, ax));	// 87385 sub     ax, ax ;~ 2879:0069
cs=0x2879;eip=0x00006b; 	X(MOV(*(dw*)((&unk_544d8)), ax));	// 87386 mov     word ptr unk_544D8, ax ;~ 2879:006B
cs=0x2879;eip=0x00006e; 	X(MOV(*(dw*)((&unk_544dc)), ax));	// 87387 mov     word ptr unk_544DC, ax ;~ 2879:006E
cs=0x2879;eip=0x000071; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 87388 mov     word ptr unk_544E0, ax ;~ 2879:0071
cs=0x2879;eip=0x000074; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 87389 mov     word ptr unk_544DA, ax ;~ 2879:0074
cs=0x2879;eip=0x000077; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 87390 mov     word ptr unk_544DE, ax ;~ 2879:0077
cs=0x2879;eip=0x00007a; 	X(MOV(*(dw*)((&unk_544e2)), ax));	// 87391 mov     word ptr unk_544E2, ax ;~ 2879:007A
cs=0x2879;eip=0x00007d; 	X(MOV(*(dw*)((&unk_544ea)), ax));	// 87392 mov     word ptr unk_544EA, ax ;~ 2879:007D
cs=0x2879;eip=0x000080; 	X(MOV(*(dw*)((&unk_544e8)), ax));	// 87393 mov     word ptr unk_544E8, ax ;~ 2879:0080
loc_36df3:
	// 9962 
cs=0x2879;eip=0x000083; 	T(MOV(sp, bp));	// 87397 mov     sp, bp ;~ 2879:0083
cs=0x2879;eip=0x000085; 	X(POP(bp));	// 87398 pop     bp ;~ 2879:0085
cs=0x2879;eip=0x000086; 	R(RETF(0));	// 87399 retf ;~ 2879:0086
sub_36df7:
	// 87406 
cs=0x2879;eip=0x000087; 	X(PUSH(cs));	// 87408 push    cs ;~ 2879:0087
cs=0x2879;eip=0x000088; 	R(CALL(sub_36e60,0));	// 87409 call    near ptr sub_36E60 ;~ 2879:0088
cs=0x2879;eip=0x00008b; 	T(MOV(ax, 0x0A));	// 87410 mov     ax, 0Ah ;~ 2879:008B
cs=0x2879;eip=0x00008e; 	X(PUSH(ax));	// 87411 push    ax ;~ 2879:008E
cs=0x2879;eip=0x00008f; 	R(CALL(sub_36ee7,0));	// 87412 call    sub_36EE7 ;~ 2879:008F
cs=0x2879;eip=0x000092; 	T(ADD(sp, 2));	// 87413 add     sp, 2 ;~ 2879:0092
cs=0x2879;eip=0x000095; 	T(MOV(ax, 8));	// 87414 mov     ax, 8 ;~ 2879:0095
cs=0x2879;eip=0x000098; 	X(PUSH(ax));	// 87415 push    ax ;~ 2879:0098
cs=0x2879;eip=0x000099; 	R(CALL(sub_36ee7,0));	// 87416 call    sub_36EE7 ;~ 2879:0099
cs=0x2879;eip=0x00009c; 	T(ADD(sp, 2));	// 87417 add     sp, 2 ;~ 2879:009C
cs=0x2879;eip=0x00009f; 	T(MOV(ax, 6));	// 87418 mov     ax, 6 ;~ 2879:009F
cs=0x2879;eip=0x0000a2; 	X(PUSH(ax));	// 87419 push    ax ;~ 2879:00A2
cs=0x2879;eip=0x0000a3; 	R(CALL(sub_36ee7,0));	// 87420 call    sub_36EE7 ;~ 2879:00A3
cs=0x2879;eip=0x0000a6; 	T(ADD(sp, 2));	// 87421 add     sp, 2 ;~ 2879:00A6
cs=0x2879;eip=0x0000a9; 	T(MOV(ax, 6));	// 87422 mov     ax, 6 ;~ 2879:00A9
cs=0x2879;eip=0x0000ac; 	X(PUSH(ax));	// 87423 push    ax ;~ 2879:00AC
cs=0x2879;eip=0x0000ad; 	R(CALL(sub_36ee7,0));	// 87424 call    sub_36EE7 ;~ 2879:00AD
cs=0x2879;eip=0x0000b0; 	T(ADD(sp, 2));	// 87425 add     sp, 2 ;~ 2879:00B0
cs=0x2879;eip=0x0000b3; 	X(PUSH(*(dw*)((&unk_4a486))));	// 87426 push    word ptr unk_4A486 ;~ 2879:00B3
cs=0x2879;eip=0x0000b7; 	R(CALLF(sub_2397c,0));	// 87427 call    sub_2397C ;~ 2879:00B7
cs=0x2879;eip=0x0000bc; 	X(MOV(*(dw*)((&unk_4a486)), 0));	// 87428 mov     word ptr unk_4A486, 0 ;~ 2879:00BC
cs=0x2879;eip=0x0000c2; 	R(RETF(0));	// 87429 retf ;~ 2879:00C2
sub_36e33:
	// 87437 
#undef var_2
#define var_2 -2
	// 87439 var_2           = byte ptr -2 ;~ 2879:00C3
cs=0x2879;eip=0x0000c3; 	X(PUSH(bp));	// 87441 push    bp ;~ 2879:00C3
cs=0x2879;eip=0x0000c4; 	T(MOV(bp, sp));	// 87442 mov     bp, sp ;~ 2879:00C4
cs=0x2879;eip=0x0000c6; 	T(SUB(sp, 2));	// 87443 sub     sp, 2 ;~ 2879:00C6
cs=0x2879;eip=0x0000c9; 	T(CMP(*(dw*)((&unk_4a48a)), 0));	// 87444 cmp     word ptr unk_4A48A, 0 ;~ 2879:00C9
cs=0x2879;eip=0x0000ce; 	R(JNZ(loc_36e5c));	// 87445 jnz     short loc_36E5C ;~ 2879:00CE
cs=0x2879;eip=0x0000d0; 	T(MOV(bl, unk_55211));	// 87446 mov     bl, byte ptr unk_55211 ;~ 2879:00D0
cs=0x2879;eip=0x0000d4; 	T(SUB(bh, bh));	// 87447 sub     bh, bh ;~ 2879:00D4
cs=0x2879;eip=0x0000d6; 	T(SHL(bx, 1));	// 87448 shl     bx, 1 ;~ 2879:00D6
cs=0x2879;eip=0x0000d8; 	X(PUSH(*(dw*)(raddr(ds,bx+0x2B04))));	// 87449 push    word ptr [bx+2B04h] ;~ 2879:00D8
cs=0x2879;eip=0x0000dc; 	T(ax = bp+var_2);	// 87450 lea     ax, [bp+var_2] ;~ 2879:00DC
cs=0x2879;eip=0x0000df; 	X(PUSH(ax));	// 87451 push    ax ;~ 2879:00DF
cs=0x2879;eip=0x0000e0; 	R(CALLF(sub_31643,0));	// 87452 call    sub_31643 ;~ 2879:00E0
cs=0x2879;eip=0x0000e5; 	X(MOV(*(dw*)((&unk_4a488)), ax));	// 87453 mov     word ptr unk_4A488, ax ;~ 2879:00E5
cs=0x2879;eip=0x0000e8; 	X(MOV(*(dw*)((&unk_4a48a)), dx));	// 87454 mov     word ptr unk_4A48A, dx ;~ 2879:00E8
loc_36e5c:
	// 9963 
cs=0x2879;eip=0x0000ec; 	T(MOV(sp, bp));	// 87457 mov     sp, bp ;~ 2879:00EC
cs=0x2879;eip=0x0000ee; 	X(POP(bp));	// 87458 pop     bp ;~ 2879:00EE
cs=0x2879;eip=0x0000ef; 	R(RETF(0));	// 87459 retf ;~ 2879:00EF
sub_36e60:
	// 87466 
cs=0x2879;eip=0x0000f0; 	T(CMP(*(dw*)((&unk_4a48a)), 0));	// 87468 cmp     word ptr unk_4A48A, 0 ;~ 2879:00F0
cs=0x2879;eip=0x0000f5; 	R(JZ(locret_36e88));	// 87469 jz      short locret_36E88 ;~ 2879:00F5
cs=0x2879;eip=0x0000f7; 	X(PUSH(*(dw*)((&unk_4a48a))));	// 87470 push    word ptr unk_4A48A ;~ 2879:00F7
cs=0x2879;eip=0x0000fb; 	X(PUSH(*(dw*)((&unk_4a488))));	// 87471 push    word ptr unk_4A488 ;~ 2879:00FB
cs=0x2879;eip=0x0000ff; 	T(MOV(ax, 0x16));	// 87472 mov     ax, 16h ;~ 2879:00FF
cs=0x2879;eip=0x000102; 	X(PUSH(ax));	// 87473 push    ax ;~ 2879:0102
cs=0x2879;eip=0x000103; 	R(CALL(sub_36ee7,0));	// 87474 call    sub_36EE7 ;~ 2879:0103
cs=0x2879;eip=0x000106; 	T(ADD(sp, 6));	// 87475 add     sp, 6 ;~ 2879:0106
cs=0x2879;eip=0x000109; 	X(PUSH(*(dw*)((&unk_4a48a))));	// 87476 push    word ptr unk_4A48A ;~ 2879:0109
cs=0x2879;eip=0x00010d; 	R(CALLF(sub_2397c,0));	// 87477 call    sub_2397C ;~ 2879:010D
cs=0x2879;eip=0x000112; 	X(MOV(*(dw*)((&unk_4a48a)), 0));	// 87478 mov     word ptr unk_4A48A, 0 ;~ 2879:0112
locret_36e88:
	// 9964 
cs=0x2879;eip=0x000118; 	R(RETF(0));	// 87481 retf ;~ 2879:0118
sub_36e89:
	// 87488 
cs=0x2879;eip=0x000119; 	X(PUSH(*(dw*)((&unk_4a48a))));	// 87489 push    word ptr unk_4A48A ;~ 2879:0119
cs=0x2879;eip=0x00011d; 	X(PUSH(*(dw*)((&unk_4a488))));	// 87490 push    word ptr unk_4A488 ;~ 2879:011D
cs=0x2879;eip=0x000121; 	T(MOV(ax, 0x14));	// 87491 mov     ax, 14h ;~ 2879:0121
cs=0x2879;eip=0x000124; 	X(PUSH(ax));	// 87492 push    ax ;~ 2879:0124
cs=0x2879;eip=0x000125; 	R(CALL(sub_36f0c,0));	// 87493 call    sub_36F0C ;~ 2879:0125
cs=0x2879;eip=0x000128; 	T(ADD(sp, 6));	// 87494 add     sp, 6 ;~ 2879:0128
cs=0x2879;eip=0x00012b; 	R(RETF(0));	// 87495 retf ;~ 2879:012B
sub_36e9c:
	// 87502 
cs=0x2879;eip=0x00012c; 	T(TEST(unk_55212, 1));	// 87503 test    byte ptr unk_55212, 1 ;~ 2879:012C
cs=0x2879;eip=0x000131; 	R(JZ(loc_36ea8));	// 87504 jz      short loc_36EA8 ;~ 2879:0131
cs=0x2879;eip=0x000133; 	T(MOV(ax, 0x0C));	// 87505 mov     ax, 0Ch ;~ 2879:0133
cs=0x2879;eip=0x000136; 	R(JMP(loc_36eb5));	// 87506 jmp     short loc_36EB5 ;~ 2879:0136
loc_36ea8:
	// 9965 
cs=0x2879;eip=0x000138; 	T(MOV(ax, 8));	// 87510 mov     ax, 8 ;~ 2879:0138
cs=0x2879;eip=0x00013b; 	X(PUSH(ax));	// 87511 push    ax ;~ 2879:013B
cs=0x2879;eip=0x00013c; 	R(CALL(sub_36ee7,0));	// 87512 call    sub_36EE7 ;~ 2879:013C
cs=0x2879;eip=0x00013f; 	T(ADD(sp, 2));	// 87513 add     sp, 2 ;~ 2879:013F
cs=0x2879;eip=0x000142; 	T(MOV(ax, 0x0A));	// 87514 mov     ax, 0Ah ;~ 2879:0142
loc_36eb5:
	// 9966 
cs=0x2879;eip=0x000145; 	X(PUSH(ax));	// 87517 push    ax ;~ 2879:0145
cs=0x2879;eip=0x000146; 	R(CALL(sub_36ee7,0));	// 87518 call    sub_36EE7 ;~ 2879:0146
cs=0x2879;eip=0x000149; 	T(ADD(sp, 2));	// 87519 add     sp, 2 ;~ 2879:0149
cs=0x2879;eip=0x00014c; 	R(RETF(0));	// 87520 retf ;~ 2879:014C
sub_36ebd:
	// 87527 
cs=0x2879;eip=0x00014d; 	T(MOV(ax, 0x0A));	// 87529 mov     ax, 0Ah ;~ 2879:014D
cs=0x2879;eip=0x000150; 	X(PUSH(ax));	// 87530 push    ax ;~ 2879:0150
cs=0x2879;eip=0x000151; 	R(CALL(sub_36ee7,0));	// 87531 call    sub_36EE7 ;~ 2879:0151
cs=0x2879;eip=0x000154; 	T(ADD(sp, 2));	// 87532 add     sp, 2 ;~ 2879:0154
cs=0x2879;eip=0x000157; 	T(MOV(ax, 6));	// 87533 mov     ax, 6 ;~ 2879:0157
cs=0x2879;eip=0x00015a; 	X(PUSH(ax));	// 87534 push    ax ;~ 2879:015A
cs=0x2879;eip=0x00015b; 	R(CALL(sub_36ee7,0));	// 87535 call    sub_36EE7 ;~ 2879:015B
cs=0x2879;eip=0x00015e; 	T(ADD(sp, 2));	// 87536 add     sp, 2 ;~ 2879:015E
cs=0x2879;eip=0x000161; 	R(RETF(0));	// 87537 retf ;~ 2879:0161
sub_36ed2:
	// 87544 
cs=0x2879;eip=0x000162; 	T(MOV(ax, 0x0C));	// 87546 mov     ax, 0Ch ;~ 2879:0162
cs=0x2879;eip=0x000165; 	X(PUSH(ax));	// 87547 push    ax ;~ 2879:0165
cs=0x2879;eip=0x000166; 	R(CALL(sub_36ee7,0));	// 87548 call    sub_36EE7 ;~ 2879:0166
cs=0x2879;eip=0x000169; 	T(ADD(sp, 2));	// 87549 add     sp, 2 ;~ 2879:0169
cs=0x2879;eip=0x00016c; 	T(MOV(ax, 6));	// 87550 mov     ax, 6 ;~ 2879:016C
cs=0x2879;eip=0x00016f; 	X(PUSH(ax));	// 87551 push    ax ;~ 2879:016F
cs=0x2879;eip=0x000170; 	R(CALL(sub_36ee7,0));	// 87552 call    sub_36EE7 ;~ 2879:0170
cs=0x2879;eip=0x000173; 	T(ADD(sp, 2));	// 87553 add     sp, 2 ;~ 2879:0173
cs=0x2879;eip=0x000176; 	R(RETF(0));	// 87554 retf ;~ 2879:0176
sub_36ee7:
	// 87562 
#undef arg_0
#define arg_0 4
	// 87565 arg_0           = word ptr  4 ;~ 2879:0177
#undef arg_2
#define arg_2 6
	// 87566 arg_2           = word ptr  6 ;~ 2879:0177
#undef arg_4
#define arg_4 8
	// 87567 arg_4           = word ptr  8 ;~ 2879:0177
cs=0x2879;eip=0x000177; 	X(PUSH(bp));	// 87569 push    bp ;~ 2879:0177
cs=0x2879;eip=0x000178; 	T(MOV(bp, sp));	// 87570 mov     bp, sp ;~ 2879:0178
cs=0x2879;eip=0x00017a; 	T(CMP(*(dw*)((&unk_4a486)), 0));	// 87571 cmp     word ptr unk_4A486, 0 ;~ 2879:017A
cs=0x2879;eip=0x00017f; 	R(JZ(loc_36f0a));	// 87572 jz      short loc_36F0A ;~ 2879:017F
cs=0x2879;eip=0x000181; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 87573 push    [bp+arg_4] ;~ 2879:0181
cs=0x2879;eip=0x000184; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 87574 push    [bp+arg_2] ;~ 2879:0184
cs=0x2879;eip=0x000187; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 87575 push    [bp+arg_0] ;~ 2879:0187
cs=0x2879;eip=0x00018a; 	X(PUSH(*(dw*)((&unk_544e6))));	// 87576 push    word ptr unk_544E6 ;~ 2879:018A
cs=0x2879;eip=0x00018e; 	X(PUSH(*(dw*)((&unk_544e4))));	// 87577 push    word ptr unk_544E4 ;~ 2879:018E
cs=0x2879;eip=0x000192; 	R(CALLF(sub_2f484,0));	// 87578 call    sub_2F484 ;~ 2879:0192
cs=0x2879;eip=0x000197; 	T(ADD(sp, 0x0A));	// 87579 add     sp, 0Ah ;~ 2879:0197
loc_36f0a:
	// 9967 
cs=0x2879;eip=0x00019a; 	X(POP(bp));	// 87582 pop     bp ;~ 2879:019A
cs=0x2879;eip=0x00019b; 	R(RETN(0));	// 87583 retn ;~ 2879:019B
sub_36f0c:
	// 87591 
#undef arg_0
#define arg_0 4
	// 87594 arg_0           = word ptr  4 ;~ 2879:019C
#undef arg_2
#define arg_2 6
	// 87595 arg_2           = word ptr  6 ;~ 2879:019C
#undef arg_4
#define arg_4 8
	// 87596 arg_4           = word ptr  8 ;~ 2879:019C
cs=0x2879;eip=0x00019c; 	X(PUSH(bp));	// 87598 push    bp ;~ 2879:019C
cs=0x2879;eip=0x00019d; 	T(MOV(bp, sp));	// 87599 mov     bp, sp ;~ 2879:019D
cs=0x2879;eip=0x00019f; 	T(TEST(unk_55212, 1));	// 87600 test    byte ptr unk_55212, 1 ;~ 2879:019F
cs=0x2879;eip=0x0001a4; 	R(JZ(loc_36f36));	// 87601 jz      short loc_36F36 ;~ 2879:01A4
cs=0x2879;eip=0x0001a6; 	T(CMP(*(dw*)((&unk_4a486)), 0));	// 87602 cmp     word ptr unk_4A486, 0 ;~ 2879:01A6
cs=0x2879;eip=0x0001ab; 	R(JZ(loc_36f36));	// 87603 jz      short loc_36F36 ;~ 2879:01AB
cs=0x2879;eip=0x0001ad; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_4))));	// 87604 push    [bp+arg_4] ;~ 2879:01AD
cs=0x2879;eip=0x0001b0; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 87605 push    [bp+arg_2] ;~ 2879:01B0
cs=0x2879;eip=0x0001b3; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 87606 push    [bp+arg_0] ;~ 2879:01B3
cs=0x2879;eip=0x0001b6; 	X(PUSH(*(dw*)((&unk_544e6))));	// 87607 push    word ptr unk_544E6 ;~ 2879:01B6
cs=0x2879;eip=0x0001ba; 	X(PUSH(*(dw*)((&unk_544e4))));	// 87608 push    word ptr unk_544E4 ;~ 2879:01BA
cs=0x2879;eip=0x0001be; 	R(CALLF(sub_2f484,0));	// 87609 call    sub_2F484 ;~ 2879:01BE
cs=0x2879;eip=0x0001c3; 	T(ADD(sp, 0x0A));	// 87610 add     sp, 0Ah ;~ 2879:01C3
loc_36f36:
	// 9968 
cs=0x2879;eip=0x0001c6; 	X(POP(bp));	// 87614 pop     bp ;~ 2879:01C6
cs=0x2879;eip=0x0001c7; 	R(RETN(0));	// 87615 retn ;~ 2879:01C7
sub_36f38:
	// 87622 
cs=0x2879;eip=0x0001c8; 	T(MOV(ax, 6));	// 87623 mov     ax, 6 ;~ 2879:01C8
cs=0x2879;eip=0x0001cb; 	X(PUSH(ax));	// 87624 push    ax ;~ 2879:01CB
cs=0x2879;eip=0x0001cc; 	R(CALL(sub_36f0c,0));	// 87625 call    sub_36F0C ;~ 2879:01CC
cs=0x2879;eip=0x0001cf; 	T(ADD(sp, 2));	// 87626 add     sp, 2 ;~ 2879:01CF
cs=0x2879;eip=0x0001d2; 	R(RETF(0));	// 87627 retf ;~ 2879:01D2
sub_36f43:
	// 87634 
cs=0x2879;eip=0x0001d3; 	T(MOV(ax, 0x0E));	// 87635 mov     ax, 0Eh ;~ 2879:01D3
cs=0x2879;eip=0x0001d6; 	X(PUSH(ax));	// 87636 push    ax ;~ 2879:01D6
cs=0x2879;eip=0x0001d7; 	T(SUB(ax, ax));	// 87637 sub     ax, ax ;~ 2879:01D7
cs=0x2879;eip=0x0001d9; 	X(PUSH(ax));	// 87638 push    ax ;~ 2879:01D9
cs=0x2879;eip=0x0001da; 	R(CALL(sub_36f0c,0));	// 87639 call    sub_36F0C ;~ 2879:01DA
cs=0x2879;eip=0x0001dd; 	T(ADD(sp, 4));	// 87640 add     sp, 4 ;~ 2879:01DD
cs=0x2879;eip=0x0001e0; 	R(RETF(0));	// 87641 retf ;~ 2879:01E0
sub_36f51:
	// 87648 
cs=0x2879;eip=0x0001e1; 	T(MOV(ax, 7));	// 87650 mov     ax, 7 ;~ 2879:01E1
cs=0x2879;eip=0x0001e4; 	X(PUSH(ax));	// 87651 push    ax ;~ 2879:01E4
cs=0x2879;eip=0x0001e5; 	T(SUB(ax, ax));	// 87652 sub     ax, ax ;~ 2879:01E5
cs=0x2879;eip=0x0001e7; 	X(PUSH(ax));	// 87653 push    ax ;~ 2879:01E7
cs=0x2879;eip=0x0001e8; 	R(CALL(sub_36f0c,0));	// 87654 call    sub_36F0C ;~ 2879:01E8
cs=0x2879;eip=0x0001eb; 	T(ADD(sp, 4));	// 87655 add     sp, 4 ;~ 2879:01EB
cs=0x2879;eip=0x0001ee; 	X(MOV(*(dw*)((&unk_544da)), 0x0FFFF));	// 87656 mov     word ptr unk_544DA, 0FFFFh ;~ 2879:01EE
cs=0x2879;eip=0x0001f4; 	T(MOV(ax, word_5705a));	// 87657 mov     ax, word_5705A ;~ 2879:01F4
cs=0x2879;eip=0x0001f7; 	T(MOV(dx, word_5705c));	// 87658 mov     dx, word_5705C ;~ 2879:01F7
cs=0x2879;eip=0x0001fb; 	T(ADD(ax, 0x100));	// 87659 add     ax, 100h ;~ 2879:01FB
cs=0x2879;eip=0x0001fe; 	T(ADC(dx, 0));	// 87660 adc     dx, 0 ;~ 2879:01FE
cs=0x2879;eip=0x000201; 	X(MOV(*(dw*)((&unk_544e8)), ax));	// 87661 mov     word ptr unk_544E8, ax ;~ 2879:0201
cs=0x2879;eip=0x000204; 	X(MOV(*(dw*)((&unk_544ea)), dx));	// 87662 mov     word ptr unk_544EA, dx ;~ 2879:0204
cs=0x2879;eip=0x000208; 	R(RETF(0));	// 87663 retf ;~ 2879:0208
sub_36f79:
	// 87670 
cs=0x2879;eip=0x000209; 	T(MOV(ax, 1));	// 87672 mov     ax, 1 ;~ 2879:0209
cs=0x2879;eip=0x00020c; 	X(PUSH(ax));	// 87673 push    ax ;~ 2879:020C
cs=0x2879;eip=0x00020d; 	T(SUB(ax, ax));	// 87674 sub     ax, ax ;~ 2879:020D
cs=0x2879;eip=0x00020f; 	X(PUSH(ax));	// 87675 push    ax ;~ 2879:020F
cs=0x2879;eip=0x000210; 	R(CALL(sub_36f0c,0));	// 87676 call    sub_36F0C ;~ 2879:0210
cs=0x2879;eip=0x000213; 	T(ADD(sp, 4));	// 87677 add     sp, 4 ;~ 2879:0213
cs=0x2879;eip=0x000216; 	R(RETF(0));	// 87678 retf ;~ 2879:0216
sub_36f87:
	// 87685 
cs=0x2879;eip=0x000217; 	T(MOV(ax, 2));	// 87686 mov     ax, 2 ;~ 2879:0217
cs=0x2879;eip=0x00021a; 	X(PUSH(ax));	// 87687 push    ax ;~ 2879:021A
cs=0x2879;eip=0x00021b; 	T(SUB(ax, ax));	// 87688 sub     ax, ax ;~ 2879:021B
cs=0x2879;eip=0x00021d; 	X(PUSH(ax));	// 87689 push    ax ;~ 2879:021D
cs=0x2879;eip=0x00021e; 	R(CALL(sub_36f0c,0));	// 87690 call    sub_36F0C ;~ 2879:021E
cs=0x2879;eip=0x000221; 	T(ADD(sp, 4));	// 87691 add     sp, 4 ;~ 2879:0221
cs=0x2879;eip=0x000224; 	R(RETF(0));	// 87692 retf ;~ 2879:0224
sub_36f95:
	// 87700 
#undef arg_0
#define arg_0 6
	// 87703 arg_0           = word ptr  6 ;~ 2879:0225
cs=0x2879;eip=0x000225; 	X(PUSH(bp));	// 87705 push    bp ;~ 2879:0225
cs=0x2879;eip=0x000226; 	T(MOV(bp, sp));	// 87706 mov     bp, sp ;~ 2879:0226
cs=0x2879;eip=0x000228; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x136C));	// 87707 cmp     [bp+arg_0], 136Ch ;~ 2879:0228
cs=0x2879;eip=0x00022d; 	R(JZ(loc_36fa6));	// 87708 jz      short loc_36FA6 ;~ 2879:022D
cs=0x2879;eip=0x00022f; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0x1398));	// 87709 cmp     [bp+arg_0], 1398h ;~ 2879:022F
cs=0x2879;eip=0x000234; 	R(JNZ(loc_36fb9));	// 87710 jnz     short loc_36FB9 ;~ 2879:0234
loc_36fa6:
	// 9969 
cs=0x2879;eip=0x000236; 	T(MOV(ax, 3));	// 87713 mov     ax, 3 ;~ 2879:0236
cs=0x2879;eip=0x000239; 	X(PUSH(ax));	// 87714 push    ax ;~ 2879:0239
cs=0x2879;eip=0x00023a; 	T(MOV(ax, 0x0F));	// 87715 mov     ax, 0Fh ;~ 2879:023A
loc_36fad:
	// 9970 
cs=0x2879;eip=0x00023d; 	X(PUSH(ax));	// 87718 push    ax ;~ 2879:023D
cs=0x2879;eip=0x00023e; 	T(SUB(ax, ax));	// 87719 sub     ax, ax ;~ 2879:023E
cs=0x2879;eip=0x000240; 	X(PUSH(ax));	// 87720 push    ax ;~ 2879:0240
cs=0x2879;eip=0x000241; 	R(CALL(sub_36f0c,0));	// 87721 call    sub_36F0C ;~ 2879:0241
cs=0x2879;eip=0x000244; 	T(ADD(sp, 6));	// 87722 add     sp, 6 ;~ 2879:0244
cs=0x2879;eip=0x000247; 	R(JMP(loc_36fd9));	// 87723 jmp     short loc_36FD9 ;~ 2879:0247
loc_36fb9:
	// 9971 
cs=0x2879;eip=0x000249; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 87727 mov     bx, [bp+arg_0] ;~ 2879:0249
cs=0x2879;eip=0x00024c; 	T(CMP(*(dw*)(raddr(ds,bx+0x16)), 0x6E48));	// 87728 cmp     word ptr [bx+16h], 6E48h ;~ 2879:024C
cs=0x2879;eip=0x000251; 	R(JNZ(loc_36fcc));	// 87729 jnz     short loc_36FCC ;~ 2879:0251
cs=0x2879;eip=0x000253; 	T(MOV(ax, 3));	// 87730 mov     ax, 3 ;~ 2879:0253
cs=0x2879;eip=0x000256; 	X(PUSH(ax));	// 87731 push    ax ;~ 2879:0256
cs=0x2879;eip=0x000257; 	T(MOV(ax, 8));	// 87732 mov     ax, 8 ;~ 2879:0257
cs=0x2879;eip=0x00025a; 	R(JMP(loc_36fad));	// 87733 jmp     short loc_36FAD ;~ 2879:025A
loc_36fcc:
	// 9972 
cs=0x2879;eip=0x00025c; 	T(MOV(ax, 9));	// 87737 mov     ax, 9 ;~ 2879:025C
cs=0x2879;eip=0x00025f; 	X(PUSH(ax));	// 87738 push    ax ;~ 2879:025F
cs=0x2879;eip=0x000260; 	T(SUB(ax, ax));	// 87739 sub     ax, ax ;~ 2879:0260
cs=0x2879;eip=0x000262; 	X(PUSH(ax));	// 87740 push    ax ;~ 2879:0262
cs=0x2879;eip=0x000263; 	R(CALL(sub_36f0c,0));	// 87741 call    sub_36F0C ;~ 2879:0263
cs=0x2879;eip=0x000266; 	T(ADD(sp, 4));	// 87742 add     sp, 4 ;~ 2879:0266
loc_36fd9:
	// 9973 
cs=0x2879;eip=0x000269; 	X(POP(bp));	// 87745 pop     bp ;~ 2879:0269
cs=0x2879;eip=0x00026a; 	R(RETF(0));	// 87746 retf ;~ 2879:026A
sub_36fdb:
	// 87754 
#undef arg_0
#define arg_0 6
	// 87756 arg_0           = word ptr  6 ;~ 2879:026B
#undef arg_2
#define arg_2 8
	// 87757 arg_2           = word ptr  8 ;~ 2879:026B
cs=0x2879;eip=0x00026b; 	X(PUSH(bp));	// 87759 push    bp ;~ 2879:026B
cs=0x2879;eip=0x00026c; 	T(MOV(bp, sp));	// 87760 mov     bp, sp ;~ 2879:026C
cs=0x2879;eip=0x00026e; 	T(MOV(ax, *(dw*)((&unk_47ace))));	// 87761 mov     ax, word ptr unk_47ACE ;~ 2879:026E
cs=0x2879;eip=0x000271; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 87762 cmp     [bp+arg_0], ax ;~ 2879:0271
cs=0x2879;eip=0x000274; 	R(JNZ(loc_36ffe));	// 87763 jnz     short loc_36FFE ;~ 2879:0274
cs=0x2879;eip=0x000276; 	T(CMP(*(dw*)((&unk_564ee)), 7));	// 87764 cmp     word ptr unk_564EE, 7 ;~ 2879:0276
cs=0x2879;eip=0x00027b; 	R(JZ(loc_36ff4));	// 87765 jz      short loc_36FF4 ;~ 2879:027B
cs=0x2879;eip=0x00027d; 	T(CMP(*(dw*)((&unk_564ee)), 8));	// 87766 cmp     word ptr unk_564EE, 8 ;~ 2879:027D
cs=0x2879;eip=0x000282; 	R(JNZ(loc_36ffe));	// 87767 jnz     short loc_36FFE ;~ 2879:0282
loc_36ff4:
	// 9974 
cs=0x2879;eip=0x000284; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_2))));	// 87770 push    [bp+arg_2] ;~ 2879:0284
cs=0x2879;eip=0x000287; 	X(PUSH(cs));	// 87771 push    cs ;~ 2879:0287
cs=0x2879;eip=0x000288; 	R(CALL(sub_36f95,0));	// 87772 call    near ptr sub_36F95 ;~ 2879:0288
cs=0x2879;eip=0x00028b; 	T(ADD(sp, 2));	// 87773 add     sp, 2 ;~ 2879:028B
loc_36ffe:
	// 9975 
cs=0x2879;eip=0x00028e; 	X(POP(bp));	// 87777 pop     bp ;~ 2879:028E
cs=0x2879;eip=0x00028f; 	R(RETF(0));	// 87778 retf ;~ 2879:028F
sub_37000:
	// 87785 
cs=0x2879;eip=0x000290; 	T(MOV(ax, 0x13));	// 87787 mov     ax, 13h ;~ 2879:0290
cs=0x2879;eip=0x000293; 	X(PUSH(ax));	// 87788 push    ax ;~ 2879:0293
cs=0x2879;eip=0x000294; 	T(SUB(ax, ax));	// 87789 sub     ax, ax ;~ 2879:0294
cs=0x2879;eip=0x000296; 	X(PUSH(ax));	// 87790 push    ax ;~ 2879:0296
cs=0x2879;eip=0x000297; 	R(CALL(sub_36f0c,0));	// 87791 call    sub_36F0C ;~ 2879:0297
cs=0x2879;eip=0x00029a; 	T(ADD(sp, 4));	// 87792 add     sp, 4 ;~ 2879:029A
cs=0x2879;eip=0x00029d; 	R(RETF(0));	// 87793 retf ;~ 2879:029D
sub_3700e:
	// 87800 
cs=0x2879;eip=0x00029e; 	T(MOV(ax, 9));	// 87802 mov     ax, 9 ;~ 2879:029E
cs=0x2879;eip=0x0002a1; 	X(PUSH(ax));	// 87803 push    ax ;~ 2879:02A1
cs=0x2879;eip=0x0002a2; 	T(SUB(ax, ax));	// 87804 sub     ax, ax ;~ 2879:02A2
cs=0x2879;eip=0x0002a4; 	X(PUSH(ax));	// 87805 push    ax ;~ 2879:02A4
cs=0x2879;eip=0x0002a5; 	R(CALL(sub_36f0c,0));	// 87806 call    sub_36F0C ;~ 2879:02A5
cs=0x2879;eip=0x0002a8; 	T(ADD(sp, 4));	// 87807 add     sp, 4 ;~ 2879:02A8
cs=0x2879;eip=0x0002ab; 	R(RETF(0));	// 87808 retf ;~ 2879:02AB
sub_3701c:
	// 87815 
cs=0x2879;eip=0x0002ac; 	T(MOV(ax, 0x0A));	// 87817 mov     ax, 0Ah ;~ 2879:02AC
cs=0x2879;eip=0x0002af; 	X(PUSH(ax));	// 87818 push    ax ;~ 2879:02AF
cs=0x2879;eip=0x0002b0; 	T(SUB(ax, ax));	// 87819 sub     ax, ax ;~ 2879:02B0
cs=0x2879;eip=0x0002b2; 	X(PUSH(ax));	// 87820 push    ax ;~ 2879:02B2
cs=0x2879;eip=0x0002b3; 	R(CALL(sub_36f0c,0));	// 87821 call    sub_36F0C ;~ 2879:02B3
cs=0x2879;eip=0x0002b6; 	T(ADD(sp, 4));	// 87822 add     sp, 4 ;~ 2879:02B6
cs=0x2879;eip=0x0002b9; 	R(RETF(0));	// 87823 retf ;~ 2879:02B9
sub_3702a:
	// 87831 
#undef arg_0
#define arg_0 6
	// 87833 arg_0           = dword ptr  6 ;~ 2879:02BA
#undef arg_4
#define arg_4 0x0A
	// 87834 arg_4           = byte ptr  0Ah ;~ 2879:02BA
cs=0x2879;eip=0x0002ba; 	X(PUSH(bp));	// 87836 push    bp ;~ 2879:02BA
cs=0x2879;eip=0x0002bb; 	T(MOV(bp, sp));	// 87837 mov     bp, sp ;~ 2879:02BB
cs=0x2879;eip=0x0002bd; 	T(CMP(byte_55209, 0));	// 87838 cmp     byte_55209, 0 ;~ 2879:02BD
cs=0x2879;eip=0x0002c2; 	R(JNZ(loc_3707d));	// 87839 jnz     short loc_3707D ;~ 2879:02C2
cs=0x2879;eip=0x0002c4; 	T(LES(bx, *(dd*)(raddr(ss,bp+arg_0))));	// 87840 les     bx, [bp+arg_0] ;~ 2879:02C4
cs=0x2879;eip=0x0002c7; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x0A))));	// 87841 mov     ax, es:[bx+0Ah] ;~ 2879:02C7
cs=0x2879;eip=0x0002cb; 	T(SUB(ax, *(dw*)((&unk_564fc))));	// 87842 sub     ax, word ptr unk_564FC ;~ 2879:02CB
cs=0x2879;eip=0x0002cf; 	T(CWD);	// 87843 cwd ;~ 2879:02CF
cs=0x2879;eip=0x0002d0; 	T(XOR(ax, dx));	// 87844 xor     ax, dx ;~ 2879:02D0
cs=0x2879;eip=0x0002d2; 	T(SUB(ax, dx));	// 87845 sub     ax, dx ;~ 2879:02D2
cs=0x2879;eip=0x0002d4; 	T(MOV(cx, ax));	// 87846 mov     cx, ax ;~ 2879:02D4
cs=0x2879;eip=0x0002d6; 	T(MOV(ax, *(dw*)(raddr(es,bx+6))));	// 87847 mov     ax, es:[bx+6] ;~ 2879:02D6
cs=0x2879;eip=0x0002da; 	T(SUB(ax, *(dw*)((&unk_564f8))));	// 87848 sub     ax, word ptr unk_564F8 ;~ 2879:02DA
cs=0x2879;eip=0x0002de; 	T(CWD);	// 87849 cwd ;~ 2879:02DE
cs=0x2879;eip=0x0002df; 	T(XOR(ax, dx));	// 87850 xor     ax, dx ;~ 2879:02DF
cs=0x2879;eip=0x0002e1; 	T(SUB(ax, dx));	// 87851 sub     ax, dx ;~ 2879:02E1
cs=0x2879;eip=0x0002e3; 	T(MOV(dx, ax));	// 87852 mov     dx, ax ;~ 2879:02E3
cs=0x2879;eip=0x0002e5; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 87853 mov     ax, es:[bx+2] ;~ 2879:02E5
cs=0x2879;eip=0x0002e9; 	T(SUB(ax, *(dw*)((&unk_564f4))));	// 87854 sub     ax, word ptr unk_564F4 ;~ 2879:02E9
cs=0x2879;eip=0x0002ed; 	T(MOV(bx, dx));	// 87855 mov     bx, dx ;~ 2879:02ED
cs=0x2879;eip=0x0002ef; 	T(CWD);	// 87856 cwd ;~ 2879:02EF
cs=0x2879;eip=0x0002f0; 	T(XOR(ax, dx));	// 87857 xor     ax, dx ;~ 2879:02F0
cs=0x2879;eip=0x0002f2; 	T(SUB(ax, dx));	// 87858 sub     ax, dx ;~ 2879:02F2
cs=0x2879;eip=0x0002f4; 	T(ADD(ax, bx));	// 87859 add     ax, bx ;~ 2879:02F4
cs=0x2879;eip=0x0002f6; 	T(ADD(ax, cx));	// 87860 add     ax, cx ;~ 2879:02F6
cs=0x2879;eip=0x0002f8; 	T(CMP(ax, 4));	// 87861 cmp     ax, 4 ;~ 2879:02F8
cs=0x2879;eip=0x0002fb; 	R(JGE(loc_3707d));	// 87862 jge     short loc_3707D ;~ 2879:02FB
cs=0x2879;eip=0x0002fd; 	T(CMP(*(raddr(ss,bp+arg_4)), 0));	// 87863 cmp     [bp+arg_4], 0 ;~ 2879:02FD
cs=0x2879;eip=0x000301; 	R(JZ(loc_37079));	// 87864 jz      short loc_37079 ;~ 2879:0301
cs=0x2879;eip=0x000303; 	X(PUSH(cs));	// 87865 push    cs ;~ 2879:0303
cs=0x2879;eip=0x000304; 	R(CALL(sub_3700e,0));	// 87866 call    near ptr sub_3700E ;~ 2879:0304
cs=0x2879;eip=0x000307; 	R(JMP(loc_3707d));	// 87867 jmp     short loc_3707D ;~ 2879:0307
loc_37079:
	// 9976 
cs=0x2879;eip=0x000309; 	X(PUSH(cs));	// 87871 push    cs ;~ 2879:0309
cs=0x2879;eip=0x00030a; 	R(CALL(sub_37000,0));	// 87872 call    near ptr sub_37000 ;~ 2879:030A
loc_3707d:
	// 9977 
cs=0x2879;eip=0x00030d; 	X(POP(bp));	// 87876 pop     bp ;~ 2879:030D
cs=0x2879;eip=0x00030e; 	R(RETF(0));	// 87877 retf ;~ 2879:030E
nullsub_14:
	// 87884 
cs=0x2879;eip=0x00030f; 	R(RETF(0));	// 87886 retf ;~ 2879:030F
sub_37080:
	// 87894 
#undef var_16
#define var_16 -0x16
	// 87896 var_16          = word ptr -16h ;~ 2879:0310
#undef var_14
#define var_14 -0x14
	// 87897 var_14          = dword ptr -14h ;~ 2879:0310
#undef var_10
#define var_10 -0x10
	// 87898 var_10          = word ptr -10h ;~ 2879:0310
#undef var_e
#define var_e -0x0E
	// 87899 var_E           = word ptr -0Eh ;~ 2879:0310
#undef var_c
#define var_c -0x0C
	// 87900 var_C           = word ptr -0Ch ;~ 2879:0310
#undef var_a
#define var_a -0x0A
	// 87901 var_A           = word ptr -0Ah ;~ 2879:0310
#undef var_8
#define var_8 -8
	// 87902 var_8           = word ptr -8 ;~ 2879:0310
#undef var_6
#define var_6 -6
	// 87903 var_6           = word ptr -6 ;~ 2879:0310
#undef var_4
#define var_4 -4
	// 87904 var_4           = dword ptr -4 ;~ 2879:0310
cs=0x2879;eip=0x000310; 	X(PUSH(bp));	// 87906 push    bp ;~ 2879:0310
cs=0x2879;eip=0x000311; 	T(MOV(bp, sp));	// 87907 mov     bp, sp ;~ 2879:0311
cs=0x2879;eip=0x000313; 	T(SUB(sp, 0x16));	// 87908 sub     sp, 16h ;~ 2879:0313
cs=0x2879;eip=0x000316; 	X(PUSH(si));	// 87909 push    si ;~ 2879:0316
cs=0x2879;eip=0x000317; 	T(CMP(*(dw*)((&unk_4a486)), 0));	// 87910 cmp     word ptr unk_4A486, 0 ;~ 2879:0317
cs=0x2879;eip=0x00031c; 	R(JNZ(loc_37091));	// 87911 jnz     short loc_37091 ;~ 2879:031C
cs=0x2879;eip=0x00031e; 	R(JMP(loc_374e0));	// 87912 jmp     loc_374E0 ;~ 2879:031E
loc_37091:
	// 9978 
cs=0x2879;eip=0x000321; 	T(TEST(unk_55212, 1));	// 87916 test    byte ptr unk_55212, 1 ;~ 2879:0321
cs=0x2879;eip=0x000326; 	R(JNZ(loc_370af));	// 87917 jnz     short loc_370AF ;~ 2879:0326
cs=0x2879;eip=0x000328; 	T(SUB(ax, ax));	// 87918 sub     ax, ax ;~ 2879:0328
cs=0x2879;eip=0x00032a; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 87919 mov     word ptr unk_544DA, ax ;~ 2879:032A
cs=0x2879;eip=0x00032d; 	X(MOV(*(dw*)((&unk_544d8)), ax));	// 87920 mov     word ptr unk_544D8, ax ;~ 2879:032D
cs=0x2879;eip=0x000330; 	X(MOV(*(dw*)((&unk_544dc)), ax));	// 87921 mov     word ptr unk_544DC, ax ;~ 2879:0330
loc_370a3:
	// 9979 
cs=0x2879;eip=0x000333; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 87924 mov     word ptr unk_544E0, ax ;~ 2879:0333
cs=0x2879;eip=0x000336; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 87925 mov     word ptr unk_544DE, ax ;~ 2879:0336
loc_370a9:
	// 9980 
cs=0x2879;eip=0x000339; 	X(MOV(*(dw*)((&unk_544e2)), ax));	// 87928 mov     word ptr unk_544E2, ax ;~ 2879:0339
cs=0x2879;eip=0x00033c; 	R(JMP(loc_374e0));	// 87929 jmp     loc_374E0 ;~ 2879:033C
loc_370af:
	// 9981 
cs=0x2879;eip=0x00033f; 	T(SUB(ax, ax));	// 87933 sub     ax, ax ;~ 2879:033F
cs=0x2879;eip=0x000341; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), ax));	// 87934 mov     [bp+var_E], ax ;~ 2879:0341
cs=0x2879;eip=0x000344; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), ax));	// 87935 mov     [bp+var_16], ax ;~ 2879:0344
cs=0x2879;eip=0x000347; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), ax));	// 87936 mov     [bp+var_C], ax ;~ 2879:0347
cs=0x2879;eip=0x00034a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 87937 mov     [bp+var_A], ax ;~ 2879:034A
cs=0x2879;eip=0x00034d; 	T(TEST(unk_55212, 2));	// 87938 test    byte ptr unk_55212, 2 ;~ 2879:034D
cs=0x2879;eip=0x000352; 	R(JNZ(loc_370c7));	// 87939 jnz     short loc_370C7 ;~ 2879:0352
cs=0x2879;eip=0x000354; 	R(JMP(loc_37247));	// 87940 jmp     loc_37247 ;~ 2879:0354
loc_370c7:
	// 9982 
cs=0x2879;eip=0x000357; 	T(MOV(ax, *(dw*)((&unk_564ee))));	// 87944 mov     ax, word ptr unk_564EE ;~ 2879:0357
cs=0x2879;eip=0x00035a; 	T(CMP(ax, 0x0E));	// 87945 cmp     ax, 0Eh ;~ 2879:035A
cs=0x2879;eip=0x00035d; 	R(JBE(loc_370d2));	// 87946 jbe     short loc_370D2 ;~ 2879:035D
cs=0x2879;eip=0x00035f; 	R(JMP(loc_37247));	// 87947 jmp     loc_37247 ;~ 2879:035F
loc_370d2:
	// 9983 
cs=0x2879;eip=0x000362; 	T(ADD(ax, ax));	// 87951 add     ax, ax ;~ 2879:0362
cs=0x2879;eip=0x000364; 	T(XCHG(ax, bx));	// 87952 xchg    ax, bx ;~ 2879:0364
	cs=seg_offset(seg025);
cs=0x2879;eip=0x000365; __disp=*(dw*)(((db*)&off_37229)+bx);
	R(JMP(__dispatch_call));	// 87953 jmp     cs:off_37229[bx] ;~ 2879:0365
loc_370da:
	// 9984 
cs=0x2879;eip=0x00036a; 	T(LES(bx, *(dd*)((&unk_47ad0))));	// 87958 les     bx, dword ptr unk_47AD0 ;~ 2879:036A
cs=0x2879;eip=0x00036e; 	T(TEST(*(raddr(es,bx+2)), 1));	// 87959 test    byte ptr es:[bx+2], 1 ;~ 2879:036E
cs=0x2879;eip=0x000373; 	R(JNZ(loc_370e8));	// 87960 jnz     short loc_370E8 ;~ 2879:0373
cs=0x2879;eip=0x000375; 	R(JMP(loc_37247));	// 87961 jmp     loc_37247 ;~ 2879:0375
loc_370e8:
	// 9985 
cs=0x2879;eip=0x000378; 	T(CMP(unk_5716f, 0));	// 87965 cmp     byte ptr unk_5716F, 0 ;~ 2879:0378
cs=0x2879;eip=0x00037d; 	R(JZ(loc_370f2));	// 87966 jz      short loc_370F2 ;~ 2879:037D
cs=0x2879;eip=0x00037f; 	R(JMP(loc_37247));	// 87967 jmp     loc_37247 ;~ 2879:037F
loc_370f2:
	// 9986 
cs=0x2879;eip=0x000382; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 87971 mov     [bp+var_A], 0FFFFh ;~ 2879:0382
cs=0x2879;eip=0x000387; 	R(JMP(loc_37247));	// 87972 jmp     loc_37247 ;~ 2879:0387
loc_370fa:
	// 9987 
cs=0x2879;eip=0x00038a; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 87977 mov     dx, word ptr unk_47A9A ;~ 2879:038A
cs=0x2879;eip=0x00038e; 	T(MOV(ax, *(dw*)((&unk_47ace))));	// 87978 mov     ax, word ptr unk_47ACE ;~ 2879:038E
cs=0x2879;eip=0x000391; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4))), ax));	// 87979 mov     word ptr [bp+var_4], ax ;~ 2879:0391
cs=0x2879;eip=0x000394; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_4+2))), dx));	// 87980 mov     word ptr [bp+var_4+2], dx ;~ 2879:0394
cs=0x2879;eip=0x000397; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 87981 les     bx, [bp+var_4] ;~ 2879:0397
cs=0x2879;eip=0x00039a; 	T(MOV(ax, *(dw*)(raddr(es,bx+2))));	// 87982 mov     ax, es:[bx+2] ;~ 2879:039A
cs=0x2879;eip=0x00039e; 	T(AND(ax, 0x801));	// 87983 and     ax, 801h ;~ 2879:039E
cs=0x2879;eip=0x0003a1; 	T(CMP(ax, 0x801));	// 87984 cmp     ax, 801h ;~ 2879:03A1
cs=0x2879;eip=0x0003a4; 	R(JZ(loc_37119));	// 87985 jz      short loc_37119 ;~ 2879:03A4
cs=0x2879;eip=0x0003a6; 	R(JMP(loc_37247));	// 87986 jmp     loc_37247 ;~ 2879:03A6
loc_37119:
	// 9988 
cs=0x2879;eip=0x0003a9; 	X(PUSH(*(dw*)((&unk_47ace))));	// 87990 push    word ptr unk_47ACE ;~ 2879:03A9
cs=0x2879;eip=0x0003ad; 	R(CALLF(sub_17a1a,0));	// 87991 call    sub_17A1A ;~ 2879:03AD
cs=0x2879;eip=0x0003b2; 	T(MOV(bx, *(dw*)((&unk_47a9a))));	// 87992 mov     bx, word ptr unk_47A9A ;~ 2879:03B2
cs=0x2879;eip=0x0003b6; 	T(SUB(cx, cx));	// 87993 sub     cx, cx ;~ 2879:03B6
cs=0x2879;eip=0x0003b8; 	T(MOV(dx, bx));	// 87994 mov     dx, bx ;~ 2879:03B8
cs=0x2879;eip=0x0003ba; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14))), ax));	// 87995 mov     word ptr [bp+var_14], ax ;~ 2879:03BA
cs=0x2879;eip=0x0003bd; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_14+2))), dx));	// 87996 mov     word ptr [bp+var_14+2], dx ;~ 2879:03BD
cs=0x2879;eip=0x0003c0; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 87997 les     bx, [bp+var_14] ;~ 2879:03C0
cs=0x2879;eip=0x0003c3; 	T(CMP(*(raddr(es,bx+0x0C)), 0));	// 87998 cmp     byte ptr es:[bx+0Ch], 0 ;~ 2879:03C3
cs=0x2879;eip=0x0003c8; 	R(JNZ(loc_3713d));	// 87999 jnz     short loc_3713D ;~ 2879:03C8
cs=0x2879;eip=0x0003ca; 	R(JMP(loc_37247));	// 88000 jmp     loc_37247 ;~ 2879:03CA
loc_3713d:
	// 9989 
cs=0x2879;eip=0x0003cd; 	X(PUSH(*(dw*)((&unk_47ace))));	// 88004 push    word ptr unk_47ACE ;~ 2879:03CD
cs=0x2879;eip=0x0003d1; 	R(CALLF(sub_17a0c,0));	// 88005 call    sub_17A0C ;~ 2879:03D1
cs=0x2879;eip=0x0003d6; 	T(MOV(bx, ax));	// 88006 mov     bx, ax ;~ 2879:03D6
cs=0x2879;eip=0x0003d8; 	T(MOV(al, *(raddr(ds,bx+0x12))));	// 88007 mov     al, [bx+12h] ;~ 2879:03D8
cs=0x2879;eip=0x0003db; 	T(SUB(ah, ah));	// 88008 sub     ah, ah ;~ 2879:03DB
cs=0x2879;eip=0x0003dd; 	T(OR(ax, ax));	// 88009 or      ax, ax ;~ 2879:03DD
cs=0x2879;eip=0x0003df; 	R(JZ(loc_37166));	// 88010 jz      short loc_37166 ;~ 2879:03DF
cs=0x2879;eip=0x0003e1; 	T(CMP(ax, 1));	// 88011 cmp     ax, 1 ;~ 2879:03E1
cs=0x2879;eip=0x0003e4; 	R(JZ(loc_37178));	// 88012 jz      short loc_37178 ;~ 2879:03E4
cs=0x2879;eip=0x0003e6; 	T(CMP(ax, 2));	// 88013 cmp     ax, 2 ;~ 2879:03E6
cs=0x2879;eip=0x0003e9; 	R(JNZ(loc_3715e));	// 88014 jnz     short loc_3715E ;~ 2879:03E9
cs=0x2879;eip=0x0003eb; 	R(JMP(loc_3721b));	// 88015 jmp     loc_3721B ;~ 2879:03EB
loc_3715e:
	// 9990 
cs=0x2879;eip=0x0003ee; 	T(CMP(ax, 4));	// 88019 cmp     ax, 4 ;~ 2879:03EE
cs=0x2879;eip=0x0003f1; 	R(JZ(loc_371a8));	// 88020 jz      short loc_371A8 ;~ 2879:03F1
cs=0x2879;eip=0x0003f3; 	R(JMP(loc_37247));	// 88021 jmp     loc_37247 ;~ 2879:03F3
loc_37166:
	// 9991 
cs=0x2879;eip=0x0003f6; 	T(CMP(*(dw*)((&unk_564ee)), 8));	// 88025 cmp     word ptr unk_564EE, 8 ;~ 2879:03F6
cs=0x2879;eip=0x0003fb; 	R(JZ(loc_37170));	// 88026 jz      short loc_37170 ;~ 2879:03FB
cs=0x2879;eip=0x0003fd; 	R(JMP(loc_37222));	// 88027 jmp     loc_37222 ;~ 2879:03FD
loc_37170:
	// 9992 
cs=0x2879;eip=0x000400; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), 0x0FFFF));	// 88031 mov     [bp+var_16], 0FFFFh ;~ 2879:0400
cs=0x2879;eip=0x000405; 	R(JMP(loc_37247));	// 88032 jmp     loc_37247 ;~ 2879:0405
loc_37178:
	// 9993 
cs=0x2879;eip=0x000408; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 88036 les     bx, [bp+var_14] ;~ 2879:0408
cs=0x2879;eip=0x00040b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1A))));	// 88037 mov     ax, es:[bx+1Ah] ;~ 2879:040B
cs=0x2879;eip=0x00040f; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C))));	// 88038 mov     dx, es:[bx+1Ch] ;~ 2879:040F
cs=0x2879;eip=0x000413; 	T(MOV(cl, 8));	// 88039 mov     cl, 8 ;~ 2879:0413
cs=0x2879;eip=0x000415; 	R(CALLF(sub_10240,0));	// 88040 call    sub_10240 ;~ 2879:0415
cs=0x2879;eip=0x00041a; 	T(CWD);	// 88041 cwd ;~ 2879:041A
cs=0x2879;eip=0x00041b; 	T(MOV(cx, 6));	// 88042 mov     cx, 6 ;~ 2879:041B
cs=0x2879;eip=0x00041e; 	T(IDIV2(cx));	// 88043 idiv    cx ;~ 2879:041E
cs=0x2879;eip=0x000420; 	T(SUB(ax, 0x32));	// 88044 sub     ax, 32h ; '2' ;~ 2879:0420
cs=0x2879;eip=0x000423; 	T(NEG(ax));	// 88045 neg     ax ;~ 2879:0423
cs=0x2879;eip=0x000425; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88046 mov     [bp+var_A], ax ;~ 2879:0425
cs=0x2879;eip=0x000428; 	T(CMP(ax, 4));	// 88047 cmp     ax, 4 ;~ 2879:0428
cs=0x2879;eip=0x00042b; 	R(JL(loc_371a0));	// 88048 jl      short loc_371A0 ;~ 2879:042B
cs=0x2879;eip=0x00042d; 	R(JMP(loc_37247));	// 88049 jmp     loc_37247 ;~ 2879:042D
loc_371a0:
	// 9994 
cs=0x2879;eip=0x000430; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 4));	// 88053 mov     [bp+var_A], 4 ;~ 2879:0430
cs=0x2879;eip=0x000435; 	R(JMP(loc_37247));	// 88054 jmp     loc_37247 ;~ 2879:0435
loc_371a8:
	// 9995 
cs=0x2879;eip=0x000438; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_14))));	// 88058 les     bx, [bp+var_14] ;~ 2879:0438
cs=0x2879;eip=0x00043b; 	T(CMP(*(raddr(es,bx+0x0D)), 0));	// 88059 cmp     byte ptr es:[bx+0Dh], 0 ;~ 2879:043B
cs=0x2879;eip=0x000440; 	R(JNZ(loc_371b5));	// 88060 jnz     short loc_371B5 ;~ 2879:0440
cs=0x2879;eip=0x000442; 	R(JMP(loc_37247));	// 88061 jmp     loc_37247 ;~ 2879:0442
loc_371b5:
	// 9996 
cs=0x2879;eip=0x000445; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_4))));	// 88065 les     bx, [bp+var_4] ;~ 2879:0445
cs=0x2879;eip=0x000448; 	T(MOV(si, *(dw*)(raddr(es,bx))));	// 88066 mov     si, es:[bx] ;~ 2879:0448
cs=0x2879;eip=0x00044b; 	T(CMP(si, 0x754C));	// 88067 cmp     si, 754Ch ;~ 2879:044B
cs=0x2879;eip=0x00044f; 	R(JNZ(loc_371c4));	// 88068 jnz     short loc_371C4 ;~ 2879:044F
cs=0x2879;eip=0x000451; 	R(JMP(loc_37247));	// 88069 jmp     loc_37247 ;~ 2879:0451
loc_371c4:
	// 9997 
cs=0x2879;eip=0x000454; 	T(CMP(si, 0x0B478));	// 88073 cmp     si, 0B478h ;~ 2879:0454
cs=0x2879;eip=0x000458; 	R(JZ(loc_37247));	// 88074 jz      short loc_37247 ;~ 2879:0458
cs=0x2879;eip=0x00045a; 	T(CMP(si, 0x64FA));	// 88075 cmp     si, 64FAh ;~ 2879:045A
cs=0x2879;eip=0x00045e; 	R(JZ(loc_37247));	// 88076 jz      short loc_37247 ;~ 2879:045E
cs=0x2879;eip=0x000460; 	T(MOV(ax, *(dw*)((&unk_4a4bc))));	// 88077 mov     ax, word ptr unk_4A4BC ;~ 2879:0460
cs=0x2879;eip=0x000463; 	T(CWD);	// 88078 cwd ;~ 2879:0463
cs=0x2879;eip=0x000464; 	T(XOR(ax, dx));	// 88079 xor     ax, dx ;~ 2879:0464
cs=0x2879;eip=0x000466; 	T(SUB(ax, dx));	// 88080 sub     ax, dx ;~ 2879:0466
cs=0x2879;eip=0x000468; 	T(MOV(cx, 3));	// 88081 mov     cx, 3 ;~ 2879:0468
cs=0x2879;eip=0x00046b; 	T(SAR(ax, cl));	// 88082 sar     ax, cl ;~ 2879:046B
cs=0x2879;eip=0x00046d; 	T(XOR(ax, dx));	// 88083 xor     ax, dx ;~ 2879:046D
cs=0x2879;eip=0x00046f; 	T(SUB(ax, dx));	// 88084 sub     ax, dx ;~ 2879:046F
cs=0x2879;eip=0x000471; 	T(MOV(cx, ax));	// 88085 mov     cx, ax ;~ 2879:0471
cs=0x2879;eip=0x000473; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 88086 mov     ax, es:[bx+12h] ;~ 2879:0473
cs=0x2879;eip=0x000477; 	T(MOV(bx, cx));	// 88087 mov     bx, cx ;~ 2879:0477
cs=0x2879;eip=0x000479; 	T(CWD);	// 88088 cwd ;~ 2879:0479
cs=0x2879;eip=0x00047a; 	T(XOR(ax, dx));	// 88089 xor     ax, dx ;~ 2879:047A
cs=0x2879;eip=0x00047c; 	T(SUB(ax, dx));	// 88090 sub     ax, dx ;~ 2879:047C
cs=0x2879;eip=0x00047e; 	T(MOV(cx, 3));	// 88091 mov     cx, 3 ;~ 2879:047E
cs=0x2879;eip=0x000481; 	T(SAR(ax, cl));	// 88092 sar     ax, cl ;~ 2879:0481
cs=0x2879;eip=0x000483; 	T(XOR(ax, dx));	// 88093 xor     ax, dx ;~ 2879:0483
cs=0x2879;eip=0x000485; 	T(SUB(ax, dx));	// 88094 sub     ax, dx ;~ 2879:0485
cs=0x2879;eip=0x000487; 	T(CMP(ax, bx));	// 88095 cmp     ax, bx ;~ 2879:0487
cs=0x2879;eip=0x000489; 	R(JZ(loc_37247));	// 88096 jz      short loc_37247 ;~ 2879:0489
cs=0x2879;eip=0x00048b; 	T(MOV(bx, *(dw*)((dw*)(raddr(ss,bp+var_4)))));	// 88097 mov     bx, word ptr [bp+var_4] ;~ 2879:048B
cs=0x2879;eip=0x00048e; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x12))));	// 88098 mov     ax, es:[bx+12h] ;~ 2879:048E
cs=0x2879;eip=0x000492; 	X(MOV(*(dw*)((&unk_4a4bc)), ax));	// 88099 mov     word ptr unk_4A4BC, ax ;~ 2879:0492
cs=0x2879;eip=0x000495; 	T(MOV(ax, word_5705a));	// 88100 mov     ax, word_5705A ;~ 2879:0495
cs=0x2879;eip=0x000498; 	T(MOV(dx, word_5705c));	// 88101 mov     dx, word_5705C ;~ 2879:0498
cs=0x2879;eip=0x00049c; 	T(ADD(ax, 0x100));	// 88102 add     ax, 100h ;~ 2879:049C
cs=0x2879;eip=0x00049f; 	T(ADC(dx, 0));	// 88103 adc     dx, 0 ;~ 2879:049F
cs=0x2879;eip=0x0004a2; 	X(MOV(*(dw*)((&unk_544e8)), ax));	// 88104 mov     word ptr unk_544E8, ax ;~ 2879:04A2
cs=0x2879;eip=0x0004a5; 	X(MOV(*(dw*)((&unk_544ea)), dx));	// 88105 mov     word ptr unk_544EA, dx ;~ 2879:04A5
cs=0x2879;eip=0x0004a9; 	R(JMP(loc_37247));	// 88106 jmp     short loc_37247 ;~ 2879:04A9
loc_3721b:
	// 9998 
cs=0x2879;eip=0x0004ab; 	X(MOV(*(dw*)(raddr(ss,bp+var_e)), 0x0FFFF));	// 88110 mov     [bp+var_E], 0FFFFh ;~ 2879:04AB
cs=0x2879;eip=0x0004b0; 	R(JMP(loc_37247));	// 88111 jmp     short loc_37247 ;~ 2879:04B0
loc_37222:
	// 9999 
cs=0x2879;eip=0x0004b2; 	X(MOV(*(dw*)(raddr(ss,bp+var_c)), 0x0FFFF));	// 88117 mov     [bp+var_C], 0FFFFh ;~ 2879:04B2
cs=0x2879;eip=0x0004b7; 	R(JMP(loc_37247));	// 88118 jmp     short loc_37247 ;~ 2879:04B7
loc_37247:
	// 10000 
cs=0x2879;eip=0x0004d7; 	T(CMP(byte_55209, 0));	// 88139 cmp     byte_55209, 0 ;~ 2879:04D7
cs=0x2879;eip=0x0004dc; 	R(JZ(loc_3726d));	// 88140 jz      short loc_3726D ;~ 2879:04DC
cs=0x2879;eip=0x0004de; 	T(TEST(unk_55212, 4));	// 88141 test    byte ptr unk_55212, 4 ;~ 2879:04DE
cs=0x2879;eip=0x0004e3; 	R(JZ(loc_3726d));	// 88142 jz      short loc_3726D ;~ 2879:04E3
cs=0x2879;eip=0x0004e5; 	T(CMP(*(dw*)((&unk_5704e)), 1));	// 88143 cmp     word ptr unk_5704E, 1 ;~ 2879:04E5
cs=0x2879;eip=0x0004ea; 	T(SBB(ax, ax));	// 88144 sbb     ax, ax ;~ 2879:04EA
cs=0x2879;eip=0x0004ec; 	T(INC(ax));	// 88145 inc     ax ;~ 2879:04EC
cs=0x2879;eip=0x0004ed; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88146 mov     [bp+var_8], ax ;~ 2879:04ED
cs=0x2879;eip=0x0004f0; 	T(CMP(*(dw*)((&unk_57052)), 1));	// 88147 cmp     word ptr unk_57052, 1 ;~ 2879:04F0
cs=0x2879;eip=0x0004f5; 	T(SBB(ax, ax));	// 88148 sbb     ax, ax ;~ 2879:04F5
cs=0x2879;eip=0x0004f7; 	T(INC(ax));	// 88149 inc     ax ;~ 2879:04F7
cs=0x2879;eip=0x0004f8; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88150 mov     [bp+var_6], ax ;~ 2879:04F8
cs=0x2879;eip=0x0004fb; 	R(JMP(loc_37275));	// 88151 jmp     short loc_37275 ;~ 2879:04FB
loc_3726d:
	// 10001 
cs=0x2879;eip=0x0004fd; 	T(SUB(ax, ax));	// 88156 sub     ax, ax ;~ 2879:04FD
cs=0x2879;eip=0x0004ff; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88157 mov     [bp+var_6], ax ;~ 2879:04FF
cs=0x2879;eip=0x000502; 	X(MOV(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88158 mov     [bp+var_8], ax ;~ 2879:0502
loc_37275:
	// 10002 
cs=0x2879;eip=0x000505; 	T(MOV(ax, *(dw*)((&unk_544dc))));	// 88161 mov     ax, word ptr unk_544DC ;~ 2879:0505
cs=0x2879;eip=0x000508; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), ax));	// 88162 cmp     [bp+var_8], ax ;~ 2879:0508
cs=0x2879;eip=0x00050b; 	R(JZ(loc_3729b));	// 88163 jz      short loc_3729B ;~ 2879:050B
cs=0x2879;eip=0x00050d; 	T(MOV(ax, 3));	// 88164 mov     ax, 3 ;~ 2879:050D
cs=0x2879;eip=0x000510; 	X(PUSH(ax));	// 88165 push    ax ;~ 2879:0510
cs=0x2879;eip=0x000511; 	T(CMP(*(dw*)(raddr(ss,bp+var_8)), 0));	// 88166 cmp     [bp+var_8], 0 ;~ 2879:0511
cs=0x2879;eip=0x000515; 	R(JZ(loc_3728b));	// 88167 jz      short loc_3728B ;~ 2879:0515
cs=0x2879;eip=0x000517; 	T(SUB(ax, ax));	// 88168 sub     ax, ax ;~ 2879:0517
cs=0x2879;eip=0x000519; 	R(JMP(loc_3728e));	// 88169 jmp     short loc_3728E ;~ 2879:0519
loc_3728b:
	// 10003 
cs=0x2879;eip=0x00051b; 	T(MOV(ax, 2));	// 88173 mov     ax, 2 ;~ 2879:051B
loc_3728e:
	// 10004 
cs=0x2879;eip=0x00051e; 	X(PUSH(ax));	// 88176 push    ax ;~ 2879:051E
cs=0x2879;eip=0x00051f; 	R(CALL(sub_36f0c,0));	// 88177 call    sub_36F0C ;~ 2879:051F
cs=0x2879;eip=0x000522; 	T(ADD(sp, 4));	// 88178 add     sp, 4 ;~ 2879:0522
cs=0x2879;eip=0x000525; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_8))));	// 88179 mov     ax, [bp+var_8] ;~ 2879:0525
cs=0x2879;eip=0x000528; 	X(MOV(*(dw*)((&unk_544dc)), ax));	// 88180 mov     word ptr unk_544DC, ax ;~ 2879:0528
loc_3729b:
	// 10005 
cs=0x2879;eip=0x00052b; 	T(MOV(ax, *(dw*)((&unk_544d8))));	// 88183 mov     ax, word ptr unk_544D8 ;~ 2879:052B
cs=0x2879;eip=0x00052e; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), ax));	// 88184 cmp     [bp+var_6], ax ;~ 2879:052E
cs=0x2879;eip=0x000531; 	R(JZ(loc_372c1));	// 88185 jz      short loc_372C1 ;~ 2879:0531
cs=0x2879;eip=0x000533; 	T(MOV(ax, 6));	// 88186 mov     ax, 6 ;~ 2879:0533
cs=0x2879;eip=0x000536; 	X(PUSH(ax));	// 88187 push    ax ;~ 2879:0536
cs=0x2879;eip=0x000537; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0));	// 88188 cmp     [bp+var_6], 0 ;~ 2879:0537
cs=0x2879;eip=0x00053b; 	R(JZ(loc_372b1));	// 88189 jz      short loc_372B1 ;~ 2879:053B
cs=0x2879;eip=0x00053d; 	T(SUB(ax, ax));	// 88190 sub     ax, ax ;~ 2879:053D
cs=0x2879;eip=0x00053f; 	R(JMP(loc_372b4));	// 88191 jmp     short loc_372B4 ;~ 2879:053F
loc_372b1:
	// 10006 
cs=0x2879;eip=0x000541; 	T(MOV(ax, 2));	// 88195 mov     ax, 2 ;~ 2879:0541
loc_372b4:
	// 10007 
cs=0x2879;eip=0x000544; 	X(PUSH(ax));	// 88198 push    ax ;~ 2879:0544
cs=0x2879;eip=0x000545; 	R(CALL(sub_36f0c,0));	// 88199 call    sub_36F0C ;~ 2879:0545
cs=0x2879;eip=0x000548; 	T(ADD(sp, 4));	// 88200 add     sp, 4 ;~ 2879:0548
cs=0x2879;eip=0x00054b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_6))));	// 88201 mov     ax, [bp+var_6] ;~ 2879:054B
cs=0x2879;eip=0x00054e; 	X(MOV(*(dw*)((&unk_544d8)), ax));	// 88202 mov     word ptr unk_544D8, ax ;~ 2879:054E
loc_372c1:
	// 10008 
cs=0x2879;eip=0x000551; 	T(CMP(*(dw*)(raddr(ss,bp+var_e)), 0));	// 88205 cmp     [bp+var_E], 0 ;~ 2879:0551
cs=0x2879;eip=0x000555; 	R(JNZ(loc_372dc));	// 88206 jnz     short loc_372DC ;~ 2879:0555
cs=0x2879;eip=0x000557; 	T(MOV(ax, *(dw*)((&unk_544e8))));	// 88207 mov     ax, word ptr unk_544E8 ;~ 2879:0557
cs=0x2879;eip=0x00055a; 	T(MOV(dx, *(dw*)((&unk_544ea))));	// 88208 mov     dx, word ptr unk_544EA ;~ 2879:055A
cs=0x2879;eip=0x00055e; 	T(CMP(word_5705c, dx));	// 88209 cmp     word_5705C, dx ;~ 2879:055E
cs=0x2879;eip=0x000562; 	R(JG(loc_372fb));	// 88210 jg      short loc_372FB ;~ 2879:0562
cs=0x2879;eip=0x000564; 	R(JL(loc_372dc));	// 88211 jl      short loc_372DC ;~ 2879:0564
cs=0x2879;eip=0x000566; 	T(CMP(word_5705a, ax));	// 88212 cmp     word_5705A, ax ;~ 2879:0566
cs=0x2879;eip=0x00056a; 	R(JNC(loc_372fb));	// 88213 jnb     short loc_372FB ;~ 2879:056A
loc_372dc:
	// 10009 
cs=0x2879;eip=0x00056c; 	T(CMP(*(dw*)((&unk_544da)), 0));	// 88217 cmp     word ptr unk_544DA, 0 ;~ 2879:056C
cs=0x2879;eip=0x000571; 	R(JNZ(loc_372f6));	// 88218 jnz     short loc_372F6 ;~ 2879:0571
cs=0x2879;eip=0x000573; 	T(MOV(ax, 7));	// 88219 mov     ax, 7 ;~ 2879:0573
cs=0x2879;eip=0x000576; 	X(PUSH(ax));	// 88220 push    ax ;~ 2879:0576
cs=0x2879;eip=0x000577; 	T(SUB(ax, ax));	// 88221 sub     ax, ax ;~ 2879:0577
cs=0x2879;eip=0x000579; 	X(PUSH(ax));	// 88222 push    ax ;~ 2879:0579
cs=0x2879;eip=0x00057a; 	R(CALL(sub_36f0c,0));	// 88223 call    sub_36F0C ;~ 2879:057A
cs=0x2879;eip=0x00057d; 	T(ADD(sp, 4));	// 88224 add     sp, 4 ;~ 2879:057D
cs=0x2879;eip=0x000580; 	X(MOV(*(dw*)((&unk_544da)), 0x0FFFF));	// 88225 mov     word ptr unk_544DA, 0FFFFh ;~ 2879:0580
loc_372f6:
	// 10010 
cs=0x2879;eip=0x000586; 	T(SUB(ax, ax));	// 88228 sub     ax, ax ;~ 2879:0586
cs=0x2879;eip=0x000588; 	R(JMP(loc_370a3));	// 88229 jmp     loc_370A3 ;~ 2879:0588
loc_372fb:
	// 10011 
cs=0x2879;eip=0x00058b; 	T(CMP(*(dw*)((&unk_544da)), 0));	// 88234 cmp     word ptr unk_544DA, 0 ;~ 2879:058B
cs=0x2879;eip=0x000590; 	R(JZ(loc_37316));	// 88235 jz      short loc_37316 ;~ 2879:0590
cs=0x2879;eip=0x000592; 	T(MOV(ax, 7));	// 88236 mov     ax, 7 ;~ 2879:0592
cs=0x2879;eip=0x000595; 	X(PUSH(ax));	// 88237 push    ax ;~ 2879:0595
cs=0x2879;eip=0x000596; 	T(MOV(ax, 2));	// 88238 mov     ax, 2 ;~ 2879:0596
cs=0x2879;eip=0x000599; 	X(PUSH(ax));	// 88239 push    ax ;~ 2879:0599
cs=0x2879;eip=0x00059a; 	R(CALL(sub_36f0c,0));	// 88240 call    sub_36F0C ;~ 2879:059A
cs=0x2879;eip=0x00059d; 	T(ADD(sp, 4));	// 88241 add     sp, 4 ;~ 2879:059D
cs=0x2879;eip=0x0005a0; 	X(MOV(*(dw*)((&unk_544da)), 0));	// 88242 mov     word ptr unk_544DA, 0 ;~ 2879:05A0
loc_37316:
	// 10012 
cs=0x2879;eip=0x0005a6; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0));	// 88245 cmp     [bp+var_A], 0 ;~ 2879:05A6
cs=0x2879;eip=0x0005aa; 	R(JNZ(loc_3731f));	// 88246 jnz     short loc_3731F ;~ 2879:05AA
cs=0x2879;eip=0x0005ac; 	R(JMP(loc_37437));	// 88247 jmp     loc_37437 ;~ 2879:05AC
loc_3731f:
	// 10013 
cs=0x2879;eip=0x0005af; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 0x0FFFF));	// 88251 cmp     [bp+var_A], 0FFFFh ;~ 2879:05AF
cs=0x2879;eip=0x0005b3; 	R(JZ(loc_37328));	// 88252 jz      short loc_37328 ;~ 2879:05B3
cs=0x2879;eip=0x0005b5; 	R(JMP(loc_373ff));	// 88253 jmp     loc_373FF ;~ 2879:05B5
loc_37328:
	// 10014 
cs=0x2879;eip=0x0005b8; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 88257 les     bx, dword ptr unk_56FD6 ;~ 2879:05B8
cs=0x2879;eip=0x0005bc; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 88258 mov     ax, es:[bx+218h] ;~ 2879:05BC
cs=0x2879;eip=0x0005c1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 88259 mov     dx, es:[bx+21Ah] ;~ 2879:05C1
cs=0x2879;eip=0x0005c6; 	T(MOV(cl, 8));	// 88260 mov     cl, 8 ;~ 2879:05C6
cs=0x2879;eip=0x0005c8; 	R(CALLF(sub_10240,0));	// 88261 call    sub_10240 ;~ 2879:05C8
cs=0x2879;eip=0x0005cd; 	X(MOV(*(dw*)(raddr(ss,bp+var_10)), ax));	// 88262 mov     [bp+var_10], ax ;~ 2879:05CD
cs=0x2879;eip=0x0005d0; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 88263 les     bx, dword ptr unk_56FD6 ;~ 2879:05D0
cs=0x2879;eip=0x0005d4; 	T(CMP(*(dw*)(raddr(es,bx+0x306)), 1));	// 88264 cmp     word ptr es:[bx+306h], 1 ;~ 2879:05D4
cs=0x2879;eip=0x0005da; 	R(JNZ(loc_373b2));	// 88265 jnz     short loc_373B2 ;~ 2879:05DA
cs=0x2879;eip=0x0005dc; 	T(CMP(ax, 0x32));	// 88266 cmp     ax, 32h ; '2' ;~ 2879:05DC
cs=0x2879;eip=0x0005df; 	R(JLE(loc_3735c));	// 88267 jle     short loc_3735C ;~ 2879:05DF
cs=0x2879;eip=0x0005e1; 	T(CWD);	// 88268 cwd ;~ 2879:05E1
cs=0x2879;eip=0x0005e2; 	T(MOV(cx, 0x0A));	// 88269 mov     cx, 0Ah ;~ 2879:05E2
cs=0x2879;eip=0x0005e5; 	T(IDIV2(cx));	// 88270 idiv    cx ;~ 2879:05E5
cs=0x2879;eip=0x0005e7; 	T(SUB(ax, 0x0F));	// 88271 sub     ax, 0Fh ;~ 2879:05E7
cs=0x2879;eip=0x0005ea; 	R(JMP(loc_37370));	// 88272 jmp     short loc_37370 ;~ 2879:05EA
loc_3735c:
	// 10015 
cs=0x2879;eip=0x0005ec; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 88276 mov     ax, es:[bx+218h] ;~ 2879:05EC
cs=0x2879;eip=0x0005f1; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 88277 mov     dx, es:[bx+21Ah] ;~ 2879:05F1
cs=0x2879;eip=0x0005f6; 	T(MOV(cl, 8));	// 88278 mov     cl, 8 ;~ 2879:05F6
cs=0x2879;eip=0x0005f8; 	R(CALLF(sub_10240,0));	// 88279 call    sub_10240 ;~ 2879:05F8
cs=0x2879;eip=0x0005fd; 	T(SUB(ax, 0x41));	// 88280 sub     ax, 41h ; 'A' ;~ 2879:05FD
loc_37370:
	// 10016 
cs=0x2879;eip=0x000600; 	T(NEG(ax));	// 88283 neg     ax ;~ 2879:0600
cs=0x2879;eip=0x000602; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88284 mov     [bp+var_A], ax ;~ 2879:0602
cs=0x2879;eip=0x000605; 	T(MOV(dx, *(dw*)((&unk_47a9a))));	// 88285 mov     dx, word ptr unk_47A9A ;~ 2879:0605
cs=0x2879;eip=0x000609; 	T(MOV(ax, *(dw*)((&unk_56fbf))));	// 88286 mov     ax, word ptr unk_56FBF ;~ 2879:0609
cs=0x2879;eip=0x00060c; 	T(MOV(es, dx));	// 88287 mov     es, dx ;~ 2879:060C
cs=0x2879;eip=0x00060e; 	T(MOV(bx, ax));	// 88289 mov     bx, ax ;~ 2879:060E
cs=0x2879;eip=0x000610; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x1A))));	// 88290 mov     ax, es:[bx+1Ah] ;~ 2879:0610
cs=0x2879;eip=0x000614; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x1C))));	// 88291 mov     dx, es:[bx+1Ch] ;~ 2879:0614
cs=0x2879;eip=0x000618; 	T(MOV(cl, 8));	// 88292 mov     cl, 8 ;~ 2879:0618
cs=0x2879;eip=0x00061a; 	R(CALLF(sub_10240,0));	// 88293 call    sub_10240 ;~ 2879:061A
cs=0x2879;eip=0x00061f; 	T(CWD);	// 88294 cwd ;~ 2879:061F
cs=0x2879;eip=0x000620; 	T(XOR(ax, dx));	// 88295 xor     ax, dx ;~ 2879:0620
cs=0x2879;eip=0x000622; 	T(SUB(ax, dx));	// 88296 sub     ax, dx ;~ 2879:0622
cs=0x2879;eip=0x000624; 	T(CWD);	// 88297 cwd ;~ 2879:0624
cs=0x2879;eip=0x000625; 	T(XOR(ax, dx));	// 88298 xor     ax, dx ;~ 2879:0625
cs=0x2879;eip=0x000627; 	T(SUB(ax, dx));	// 88299 sub     ax, dx ;~ 2879:0627
cs=0x2879;eip=0x000629; 	T(MOV(cx, 5));	// 88300 mov     cx, 5 ;~ 2879:0629
cs=0x2879;eip=0x00062c; 	T(SAR(ax, cl));	// 88301 sar     ax, cl ;~ 2879:062C
cs=0x2879;eip=0x00062e; 	T(XOR(ax, dx));	// 88302 xor     ax, dx ;~ 2879:062E
cs=0x2879;eip=0x000630; 	T(SUB(ax, dx));	// 88303 sub     ax, dx ;~ 2879:0630
cs=0x2879;eip=0x000632; 	X(SUB(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88304 sub     [bp+var_A], ax ;~ 2879:0632
cs=0x2879;eip=0x000635; 	T(CMP(unk_55211, 1));	// 88305 cmp     byte ptr unk_55211, 1 ;~ 2879:0635
cs=0x2879;eip=0x00063a; 	R(JZ(loc_373f4));	// 88306 jz      short loc_373F4 ;~ 2879:063A
cs=0x2879;eip=0x00063c; 	X(ADD(*(dw*)(raddr(ss,bp+var_a)), 0x0A));	// 88307 add     [bp+var_A], 0Ah ;~ 2879:063C
cs=0x2879;eip=0x000640; 	R(JMP(loc_373f4));	// 88308 jmp     short loc_373F4 ;~ 2879:0640
loc_373b2:
	// 10017 
cs=0x2879;eip=0x000642; 	T(CMP(*(dw*)(raddr(ss,bp+var_10)), 0x32));	// 88312 cmp     [bp+var_10], 32h ; '2' ;~ 2879:0642
cs=0x2879;eip=0x000646; 	R(JLE(loc_373d7));	// 88313 jle     short loc_373D7 ;~ 2879:0646
cs=0x2879;eip=0x000648; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 88314 les     bx, dword ptr unk_56FD6 ;~ 2879:0648
cs=0x2879;eip=0x00064c; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 88316 mov     ax, es:[bx+218h] ;~ 2879:064C
cs=0x2879;eip=0x000651; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 88317 mov     dx, es:[bx+21Ah] ;~ 2879:0651
cs=0x2879;eip=0x000656; 	T(MOV(cl, 8));	// 88318 mov     cl, 8 ;~ 2879:0656
cs=0x2879;eip=0x000658; 	R(CALLF(sub_10240,0));	// 88319 call    sub_10240 ;~ 2879:0658
cs=0x2879;eip=0x00065d; 	T(CWD);	// 88320 cwd ;~ 2879:065D
cs=0x2879;eip=0x00065e; 	T(MOV(cx, 0x0A));	// 88321 mov     cx, 0Ah ;~ 2879:065E
cs=0x2879;eip=0x000661; 	T(IDIV2(cx));	// 88322 idiv    cx ;~ 2879:0661
cs=0x2879;eip=0x000663; 	T(SUB(ax, cx));	// 88323 sub     ax, cx ;~ 2879:0663
cs=0x2879;eip=0x000665; 	R(JMP(loc_373ef));	// 88324 jmp     short loc_373EF ;~ 2879:0665
loc_373d7:
	// 10018 
cs=0x2879;eip=0x000667; 	T(LES(bx, *(dd*)((&unk_56fd6))));	// 88328 les     bx, dword ptr unk_56FD6 ;~ 2879:0667
cs=0x2879;eip=0x00066b; 	T(MOV(ax, *(dw*)(raddr(es,bx+0x218))));	// 88329 mov     ax, es:[bx+218h] ;~ 2879:066B
cs=0x2879;eip=0x000670; 	T(MOV(dx, *(dw*)(raddr(es,bx+0x21A))));	// 88330 mov     dx, es:[bx+21Ah] ;~ 2879:0670
cs=0x2879;eip=0x000675; 	T(MOV(cl, 8));	// 88331 mov     cl, 8 ;~ 2879:0675
cs=0x2879;eip=0x000677; 	R(CALLF(sub_10240,0));	// 88332 call    sub_10240 ;~ 2879:0677
cs=0x2879;eip=0x00067c; 	T(SUB(ax, 0x37));	// 88333 sub     ax, 37h ; '7' ;~ 2879:067C
loc_373ef:
	// 10019 
cs=0x2879;eip=0x00067f; 	T(NEG(ax));	// 88336 neg     ax ;~ 2879:067F
cs=0x2879;eip=0x000681; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88337 mov     [bp+var_A], ax ;~ 2879:0681
loc_373f4:
	// 10020 
cs=0x2879;eip=0x000684; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), 1));	// 88341 cmp     [bp+var_A], 1 ;~ 2879:0684
cs=0x2879;eip=0x000688; 	R(JGE(loc_373ff));	// 88342 jge     short loc_373FF ;~ 2879:0688
cs=0x2879;eip=0x00068a; 	X(MOV(*(dw*)(raddr(ss,bp+var_a)), 1));	// 88343 mov     [bp+var_A], 1 ;~ 2879:068A
loc_373ff:
	// 10021 
cs=0x2879;eip=0x00068f; 	T(CMP(*(dw*)((&unk_544e2)), 0));	// 88347 cmp     word ptr unk_544E2, 0 ;~ 2879:068F
cs=0x2879;eip=0x000694; 	R(JNZ(loc_3740e));	// 88348 jnz     short loc_3740E ;~ 2879:0694
cs=0x2879;eip=0x000696; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 88349 push    [bp+var_A] ;~ 2879:0696
cs=0x2879;eip=0x000699; 	T(SUB(ax, ax));	// 88350 sub     ax, ax ;~ 2879:0699
cs=0x2879;eip=0x00069b; 	X(PUSH(ax));	// 88351 push    ax ;~ 2879:069B
cs=0x2879;eip=0x00069c; 	R(JMP(loc_3741f));	// 88352 jmp     short loc_3741F ;~ 2879:069C
loc_3740e:
	// 10022 
cs=0x2879;eip=0x00069e; 	T(MOV(ax, *(dw*)((&unk_544e2))));	// 88356 mov     ax, word ptr unk_544E2 ;~ 2879:069E
cs=0x2879;eip=0x0006a1; 	T(CMP(*(dw*)(raddr(ss,bp+var_a)), ax));	// 88357 cmp     [bp+var_A], ax ;~ 2879:06A1
cs=0x2879;eip=0x0006a4; 	R(JZ(loc_37426));	// 88358 jz      short loc_37426 ;~ 2879:06A4
cs=0x2879;eip=0x0006a6; 	X(PUSH(*(dw*)(raddr(ss,bp+var_a))));	// 88359 push    [bp+var_A] ;~ 2879:06A6
cs=0x2879;eip=0x0006a9; 	T(SUB(ax, ax));	// 88360 sub     ax, ax ;~ 2879:06A9
cs=0x2879;eip=0x0006ab; 	X(PUSH(ax));	// 88361 push    ax ;~ 2879:06AB
cs=0x2879;eip=0x0006ac; 	T(MOV(ax, 4));	// 88362 mov     ax, 4 ;~ 2879:06AC
loc_3741f:
	// 10023 
cs=0x2879;eip=0x0006af; 	X(PUSH(ax));	// 88365 push    ax ;~ 2879:06AF
cs=0x2879;eip=0x0006b0; 	R(CALL(sub_36f0c,0));	// 88366 call    sub_36F0C ;~ 2879:06B0
cs=0x2879;eip=0x0006b3; 	T(ADD(sp, 6));	// 88367 add     sp, 6 ;~ 2879:06B3
loc_37426:
	// 10024 
cs=0x2879;eip=0x0006b6; 	T(SUB(ax, ax));	// 88370 sub     ax, ax ;~ 2879:06B6
cs=0x2879;eip=0x0006b8; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 88371 mov     word ptr unk_544DA, ax ;~ 2879:06B8
cs=0x2879;eip=0x0006bb; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 88372 mov     word ptr unk_544E0, ax ;~ 2879:06BB
cs=0x2879;eip=0x0006be; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 88373 mov     word ptr unk_544DE, ax ;~ 2879:06BE
cs=0x2879;eip=0x0006c1; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_a))));	// 88374 mov     ax, [bp+var_A] ;~ 2879:06C1
cs=0x2879;eip=0x0006c4; 	R(JMP(loc_370a9));	// 88375 jmp     loc_370A9 ;~ 2879:06C4
loc_37437:
	// 10025 
cs=0x2879;eip=0x0006c7; 	T(CMP(*(dw*)((&unk_544e2)), 0));	// 88379 cmp     word ptr unk_544E2, 0 ;~ 2879:06C7
cs=0x2879;eip=0x0006cc; 	R(JZ(loc_37451));	// 88380 jz      short loc_37451 ;~ 2879:06CC
cs=0x2879;eip=0x0006ce; 	T(SUB(ax, ax));	// 88381 sub     ax, ax ;~ 2879:06CE
cs=0x2879;eip=0x0006d0; 	X(PUSH(ax));	// 88382 push    ax ;~ 2879:06D0
cs=0x2879;eip=0x0006d1; 	T(MOV(ax, 2));	// 88383 mov     ax, 2 ;~ 2879:06D1
cs=0x2879;eip=0x0006d4; 	X(PUSH(ax));	// 88384 push    ax ;~ 2879:06D4
cs=0x2879;eip=0x0006d5; 	R(CALL(sub_36f0c,0));	// 88385 call    sub_36F0C ;~ 2879:06D5
cs=0x2879;eip=0x0006d8; 	T(ADD(sp, 4));	// 88386 add     sp, 4 ;~ 2879:06D8
cs=0x2879;eip=0x0006db; 	X(MOV(*(dw*)((&unk_544e2)), 0));	// 88387 mov     word ptr unk_544E2, 0 ;~ 2879:06DB
loc_37451:
	// 10026 
cs=0x2879;eip=0x0006e1; 	T(CMP(*(dw*)(raddr(ss,bp+var_c)), 0));	// 88390 cmp     [bp+var_C], 0 ;~ 2879:06E1
cs=0x2879;eip=0x0006e5; 	R(JZ(loc_3747e));	// 88391 jz      short loc_3747E ;~ 2879:06E5
cs=0x2879;eip=0x0006e7; 	T(CMP(*(dw*)((&unk_544de)), 0));	// 88392 cmp     word ptr unk_544DE, 0 ;~ 2879:06E7
cs=0x2879;eip=0x0006ec; 	R(JNZ(loc_3746b));	// 88393 jnz     short loc_3746B ;~ 2879:06EC
cs=0x2879;eip=0x0006ee; 	T(MOV(ax, 0x0C));	// 88394 mov     ax, 0Ch ;~ 2879:06EE
cs=0x2879;eip=0x0006f1; 	X(PUSH(ax));	// 88395 push    ax ;~ 2879:06F1
cs=0x2879;eip=0x0006f2; 	T(SUB(ax, ax));	// 88396 sub     ax, ax ;~ 2879:06F2
cs=0x2879;eip=0x0006f4; 	X(PUSH(ax));	// 88397 push    ax ;~ 2879:06F4
cs=0x2879;eip=0x0006f5; 	R(CALL(sub_36f0c,0));	// 88398 call    sub_36F0C ;~ 2879:06F5
cs=0x2879;eip=0x0006f8; 	T(ADD(sp, 4));	// 88399 add     sp, 4 ;~ 2879:06F8
loc_3746b:
	// 10027 
cs=0x2879;eip=0x0006fb; 	T(SUB(ax, ax));	// 88402 sub     ax, ax ;~ 2879:06FB
cs=0x2879;eip=0x0006fd; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 88403 mov     word ptr unk_544DA, ax ;~ 2879:06FD
cs=0x2879;eip=0x000700; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 88404 mov     word ptr unk_544E0, ax ;~ 2879:0700
cs=0x2879;eip=0x000703; 	X(MOV(*(dw*)((&unk_544e2)), ax));	// 88405 mov     word ptr unk_544E2, ax ;~ 2879:0703
cs=0x2879;eip=0x000706; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_c))));	// 88406 mov     ax, [bp+var_C] ;~ 2879:0706
cs=0x2879;eip=0x000709; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 88407 mov     word ptr unk_544DE, ax ;~ 2879:0709
cs=0x2879;eip=0x00070c; 	R(JMP(loc_374e0));	// 88408 jmp     short loc_374E0 ;~ 2879:070C
loc_3747e:
	// 10028 
cs=0x2879;eip=0x00070e; 	T(CMP(*(dw*)((&unk_544de)), 0));	// 88412 cmp     word ptr unk_544DE, 0 ;~ 2879:070E
cs=0x2879;eip=0x000713; 	R(JZ(loc_37499));	// 88413 jz      short loc_37499 ;~ 2879:0713
cs=0x2879;eip=0x000715; 	T(MOV(ax, 0x0C));	// 88414 mov     ax, 0Ch ;~ 2879:0715
cs=0x2879;eip=0x000718; 	X(PUSH(ax));	// 88415 push    ax ;~ 2879:0718
cs=0x2879;eip=0x000719; 	T(MOV(ax, 2));	// 88416 mov     ax, 2 ;~ 2879:0719
cs=0x2879;eip=0x00071c; 	X(PUSH(ax));	// 88417 push    ax ;~ 2879:071C
cs=0x2879;eip=0x00071d; 	R(CALL(sub_36f0c,0));	// 88418 call    sub_36F0C ;~ 2879:071D
cs=0x2879;eip=0x000720; 	T(ADD(sp, 4));	// 88419 add     sp, 4 ;~ 2879:0720
cs=0x2879;eip=0x000723; 	X(MOV(*(dw*)((&unk_544de)), 0));	// 88420 mov     word ptr unk_544DE, 0 ;~ 2879:0723
loc_37499:
	// 10029 
cs=0x2879;eip=0x000729; 	T(CMP(*(dw*)(raddr(ss,bp+var_16)), 0));	// 88423 cmp     [bp+var_16], 0 ;~ 2879:0729
cs=0x2879;eip=0x00072d; 	R(JZ(loc_374c5));	// 88424 jz      short loc_374C5 ;~ 2879:072D
cs=0x2879;eip=0x00072f; 	T(SUB(ax, ax));	// 88425 sub     ax, ax ;~ 2879:072F
cs=0x2879;eip=0x000731; 	X(MOV(*(dw*)((&unk_544da)), ax));	// 88426 mov     word ptr unk_544DA, ax ;~ 2879:0731
cs=0x2879;eip=0x000734; 	X(MOV(*(dw*)((&unk_544de)), ax));	// 88427 mov     word ptr unk_544DE, ax ;~ 2879:0734
cs=0x2879;eip=0x000737; 	X(MOV(*(dw*)((&unk_544e2)), ax));	// 88428 mov     word ptr unk_544E2, ax ;~ 2879:0737
cs=0x2879;eip=0x00073a; 	T(CMP(*(dw*)((&unk_544e0)), ax));	// 88429 cmp     word ptr unk_544E0, ax ;~ 2879:073A
cs=0x2879;eip=0x00073e; 	R(JNZ(loc_374bd));	// 88430 jnz     short loc_374BD ;~ 2879:073E
cs=0x2879;eip=0x000740; 	T(MOV(ax, 0x0D));	// 88431 mov     ax, 0Dh ;~ 2879:0740
cs=0x2879;eip=0x000743; 	X(PUSH(ax));	// 88432 push    ax ;~ 2879:0743
cs=0x2879;eip=0x000744; 	T(SUB(ax, ax));	// 88433 sub     ax, ax ;~ 2879:0744
cs=0x2879;eip=0x000746; 	X(PUSH(ax));	// 88434 push    ax ;~ 2879:0746
cs=0x2879;eip=0x000747; 	R(CALL(sub_36f0c,0));	// 88435 call    sub_36F0C ;~ 2879:0747
cs=0x2879;eip=0x00074a; 	T(ADD(sp, 4));	// 88436 add     sp, 4 ;~ 2879:074A
loc_374bd:
	// 10030 
cs=0x2879;eip=0x00074d; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_16))));	// 88439 mov     ax, [bp+var_16] ;~ 2879:074D
cs=0x2879;eip=0x000750; 	X(MOV(*(dw*)((&unk_544e0)), ax));	// 88440 mov     word ptr unk_544E0, ax ;~ 2879:0750
cs=0x2879;eip=0x000753; 	R(JMP(loc_374e0));	// 88441 jmp     short loc_374E0 ;~ 2879:0753
loc_374c5:
	// 10031 
cs=0x2879;eip=0x000755; 	T(CMP(*(dw*)((&unk_544e0)), 0));	// 88445 cmp     word ptr unk_544E0, 0 ;~ 2879:0755
cs=0x2879;eip=0x00075a; 	R(JZ(loc_374e0));	// 88446 jz      short loc_374E0 ;~ 2879:075A
cs=0x2879;eip=0x00075c; 	T(MOV(ax, 0x0D));	// 88447 mov     ax, 0Dh ;~ 2879:075C
cs=0x2879;eip=0x00075f; 	X(PUSH(ax));	// 88448 push    ax ;~ 2879:075F
cs=0x2879;eip=0x000760; 	T(MOV(ax, 2));	// 88449 mov     ax, 2 ;~ 2879:0760
cs=0x2879;eip=0x000763; 	X(PUSH(ax));	// 88450 push    ax ;~ 2879:0763
cs=0x2879;eip=0x000764; 	R(CALL(sub_36f0c,0));	// 88451 call    sub_36F0C ;~ 2879:0764
cs=0x2879;eip=0x000767; 	T(ADD(sp, 4));	// 88452 add     sp, 4 ;~ 2879:0767
cs=0x2879;eip=0x00076a; 	X(MOV(*(dw*)((&unk_544e0)), 0));	// 88453 mov     word ptr unk_544E0, 0 ;~ 2879:076A
loc_374e0:
	// 10032 
cs=0x2879;eip=0x000770; 	X(POP(si));	// 88457 pop     si ;~ 2879:0770
cs=0x2879;eip=0x000771; 	T(MOV(sp, bp));	// 88458 mov     sp, bp ;~ 2879:0771
cs=0x2879;eip=0x000773; 	X(POP(bp));	// 88459 pop     bp ;~ 2879:0773
cs=0x2879;eip=0x000774; 	R(RETF(0));	// 88460 retf ;~ 2879:0774

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_36df3: 	goto loc_36df3;
        case m2c::kloc_36e5c: 	goto loc_36e5c;
        case m2c::kloc_36ea8: 	goto loc_36ea8;
        case m2c::kloc_36eb5: 	goto loc_36eb5;
        case m2c::kloc_36f0a: 	goto loc_36f0a;
        case m2c::kloc_36f36: 	goto loc_36f36;
        case m2c::kloc_36fa6: 	goto loc_36fa6;
        case m2c::kloc_36fad: 	goto loc_36fad;
        case m2c::kloc_36fb9: 	goto loc_36fb9;
        case m2c::kloc_36fcc: 	goto loc_36fcc;
        case m2c::kloc_36fd9: 	goto loc_36fd9;
        case m2c::kloc_36ff4: 	goto loc_36ff4;
        case m2c::kloc_36ffe: 	goto loc_36ffe;
        case m2c::kloc_37079: 	goto loc_37079;
        case m2c::kloc_3707d: 	goto loc_3707d;
        case m2c::kloc_37091: 	goto loc_37091;
        case m2c::kloc_370a3: 	goto loc_370a3;
        case m2c::kloc_370a9: 	goto loc_370a9;
        case m2c::kloc_370af: 	goto loc_370af;
        case m2c::kloc_370c7: 	goto loc_370c7;
        case m2c::kloc_370d2: 	goto loc_370d2;
        case m2c::kloc_370da: 	goto loc_370da;
        case m2c::kloc_370e8: 	goto loc_370e8;
        case m2c::kloc_370f2: 	goto loc_370f2;
        case m2c::kloc_370fa: 	goto loc_370fa;
        case m2c::kloc_37119: 	goto loc_37119;
        case m2c::kloc_3713d: 	goto loc_3713d;
        case m2c::kloc_3715e: 	goto loc_3715e;
        case m2c::kloc_37166: 	goto loc_37166;
        case m2c::kloc_37170: 	goto loc_37170;
        case m2c::kloc_37178: 	goto loc_37178;
        case m2c::kloc_371a0: 	goto loc_371a0;
        case m2c::kloc_371a8: 	goto loc_371a8;
        case m2c::kloc_371b5: 	goto loc_371b5;
        case m2c::kloc_371c4: 	goto loc_371c4;
        case m2c::kloc_3721b: 	goto loc_3721b;
        case m2c::kloc_37222: 	goto loc_37222;
        case m2c::kloc_37247: 	goto loc_37247;
        case m2c::kloc_3726d: 	goto loc_3726d;
        case m2c::kloc_37275: 	goto loc_37275;
        case m2c::kloc_3728b: 	goto loc_3728b;
        case m2c::kloc_3728e: 	goto loc_3728e;
        case m2c::kloc_3729b: 	goto loc_3729b;
        case m2c::kloc_372b1: 	goto loc_372b1;
        case m2c::kloc_372b4: 	goto loc_372b4;
        case m2c::kloc_372c1: 	goto loc_372c1;
        case m2c::kloc_372dc: 	goto loc_372dc;
        case m2c::kloc_372f6: 	goto loc_372f6;
        case m2c::kloc_372fb: 	goto loc_372fb;
        case m2c::kloc_37316: 	goto loc_37316;
        case m2c::kloc_3731f: 	goto loc_3731f;
        case m2c::kloc_37328: 	goto loc_37328;
        case m2c::kloc_3735c: 	goto loc_3735c;
        case m2c::kloc_37370: 	goto loc_37370;
        case m2c::kloc_373b2: 	goto loc_373b2;
        case m2c::kloc_373d7: 	goto loc_373d7;
        case m2c::kloc_373ef: 	goto loc_373ef;
        case m2c::kloc_373f4: 	goto loc_373f4;
        case m2c::kloc_373ff: 	goto loc_373ff;
        case m2c::kloc_3740e: 	goto loc_3740e;
        case m2c::kloc_3741f: 	goto loc_3741f;
        case m2c::kloc_37426: 	goto loc_37426;
        case m2c::kloc_37437: 	goto loc_37437;
        case m2c::kloc_37451: 	goto loc_37451;
        case m2c::kloc_3746b: 	goto loc_3746b;
        case m2c::kloc_3747e: 	goto loc_3747e;
        case m2c::kloc_37499: 	goto loc_37499;
        case m2c::kloc_374bd: 	goto loc_374bd;
        case m2c::kloc_374c5: 	goto loc_374c5;
        case m2c::kloc_374e0: 	goto loc_374e0;
        case m2c::klocret_36e88: 	goto locret_36e88;
        case m2c::knullsub_14: 	goto nullsub_14;
        case m2c::ksub_36d7a: 	goto sub_36d7a;
        case m2c::ksub_36df7: 	goto sub_36df7;
        case m2c::ksub_36e33: 	goto sub_36e33;
        case m2c::ksub_36e60: 	goto sub_36e60;
        case m2c::ksub_36e89: 	goto sub_36e89;
        case m2c::ksub_36e9c: 	goto sub_36e9c;
        case m2c::ksub_36ebd: 	goto sub_36ebd;
        case m2c::ksub_36ed2: 	goto sub_36ed2;
        case m2c::ksub_36ee7: 	goto sub_36ee7;
        case m2c::ksub_36f0c: 	goto sub_36f0c;
        case m2c::ksub_36f38: 	goto sub_36f38;
        case m2c::ksub_36f43: 	goto sub_36f43;
        case m2c::ksub_36f51: 	goto sub_36f51;
        case m2c::ksub_36f79: 	goto sub_36f79;
        case m2c::ksub_36f87: 	goto sub_36f87;
        case m2c::ksub_36f95: 	goto sub_36f95;
        case m2c::ksub_36fdb: 	goto sub_36fdb;
        case m2c::ksub_37000: 	goto sub_37000;
        case m2c::ksub_3700e: 	goto sub_3700e;
        case m2c::ksub_3701c: 	goto sub_3701c;
        case m2c::ksub_3702a: 	goto sub_3702a;
        case m2c::ksub_37080: 	goto sub_37080;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

