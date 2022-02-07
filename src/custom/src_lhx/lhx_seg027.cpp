/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group25(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group25:
    _begin:
sub_3d1e6:
	// 99382 
cs=0x2ec0;eip=0x000006; 	X(MOV(*(dw*)((&unk_56fde)), 0));	// 99383 mov     word ptr unk_56FDE, 0 ;~ 2EC0:0006
cs=0x2ec0;eip=0x00000c; 	X(MOV(*(dw*)((&unk_56fe0)), 0));	// 99384 mov     word ptr unk_56FE0, 0 ;~ 2EC0:000C
cs=0x2ec0;eip=0x000012; 	X(MOV(unk_4ac6b, 1));	// 99385 mov     byte ptr unk_4AC6B, 1 ;~ 2EC0:0012
cs=0x2ec0;eip=0x000017; 	X(MOV(*(dw*)((&unk_4ac6c)), 0));	// 99386 mov     word ptr unk_4AC6C, 0 ;~ 2EC0:0017
cs=0x2ec0;eip=0x00001d; 	T(CLI);	// 99387 cli ;~ 2EC0:001D
cs=0x2ec0;eip=0x00001e; 	X(PUSH(bp));	// 99388 push    bp ;~ 2EC0:001E
cs=0x2ec0;eip=0x00001f; 	T(MOV(bp, sp));	// 99389 mov     bp, sp ;~ 2EC0:001F
cs=0x2ec0;eip=0x000021; 	T(XOR(ax, ax));	// 99390 xor     ax, ax ;~ 2EC0:0021
cs=0x2ec0;eip=0x000023; 	T(MOV(es, ax));	// 99391 mov     es, ax ;~ 2EC0:0023
cs=0x2ec0;eip=0x000025; 	T(MOV(ax, *(dw*)(raddr(es,0x20))));	// 99393 mov     ax, es:20h ;~ 2EC0:0025
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000029; 	X(MOV(*(dw*)(((db*)&word_3d320)), ax));	// 99394 mov     cs:word_3D320, ax ;~ 2EC0:0029
cs=0x2ec0;eip=0x00002d; 	T(MOV(ax, *(dw*)(raddr(es,0x22))));	// 99395 mov     ax, es:22h ;~ 2EC0:002D
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000031; 	X(MOV(*(dw*)(((db*)&word_3d322)), ax));	// 99396 mov     cs:word_3D322, ax ;~ 2EC0:0031
cs=0x2ec0;eip=0x000035; 	X(MOV(*(dw*)(raddr(es,0x20)), offset(seg027,byte_3d25e)));	// 99397 mov     word ptr es:20h, offset byte_3D25E ;~ 2EC0:0035
cs=0x2ec0;eip=0x00003c; 	X(MOV(*(dw*)(raddr(es,0x22)), cs));	// 99398 mov     word ptr es:22h, cs ;~ 2EC0:003C
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000041; 	X(MOV(*(dw*)(((db*)&word_3d1e4)), 0));	// 99399 mov     cs:word_3D1E4, 0 ;~ 2EC0:0041
cs=0x2ec0;eip=0x000048; 	T(MOV(al, 0x36));	// 99400 mov     al, 36h ; '6' ;~ 2EC0:0048
cs=0x2ec0;eip=0x00004a; 	R(OUT(0x43, al));	// 99401 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:004A
cs=0x2ec0;eip=0x00004c; 	T(MOV(al, 0x33));	// 99402 mov     al, 33h ; '3' ;~ 2EC0:004C
cs=0x2ec0;eip=0x00004e; 	R(OUT(0x40, al));	// 99403 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:004E
cs=0x2ec0;eip=0x000050; 	T(MOV(al, 0x12));	// 99404 mov     al, 12h ;~ 2EC0:0050
cs=0x2ec0;eip=0x000052; 	R(OUT(0x40, al));	// 99405 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:0052
cs=0x2ec0;eip=0x000054; 	X(POP(bp));	// 99406 pop     bp ;~ 2EC0:0054
cs=0x2ec0;eip=0x000055; 	T(STI);	// 99407 sti ;~ 2EC0:0055
cs=0x2ec0;eip=0x000056; 	R(RETF(0));	// 99408 retf ;~ 2EC0:0056
sub_3d237:
	// 99415 
cs=0x2ec0;eip=0x000057; 	T(CLI);	// 99416 cli ;~ 2EC0:0057
cs=0x2ec0;eip=0x000058; 	X(MOV(unk_4ac6b, 0));	// 99417 mov     byte ptr unk_4AC6B, 0 ;~ 2EC0:0058
cs=0x2ec0;eip=0x00005d; 	T(SUB(ax, ax));	// 99418 sub     ax, ax ;~ 2EC0:005D
cs=0x2ec0;eip=0x00005f; 	T(MOV(es, ax));	// 99419 mov     es, ax ;~ 2EC0:005F
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000061; 	T(MOV(ax, *(dw*)(((db*)&word_3d320))));	// 99420 mov     ax, cs:word_3D320 ;~ 2EC0:0061
cs=0x2ec0;eip=0x000065; 	X(MOV(*(dw*)(raddr(es,0x20)), ax));	// 99421 mov     es:20h, ax ;~ 2EC0:0065
	cs=seg_offset(seg027);
cs=0x2ec0;eip=0x000069; 	T(MOV(ax, *(dw*)(((db*)&word_3d322))));	// 99422 mov     ax, cs:word_3D322 ;~ 2EC0:0069
cs=0x2ec0;eip=0x00006d; 	X(MOV(*(dw*)(raddr(es,0x22)), ax));	// 99423 mov     es:22h, ax ;~ 2EC0:006D
cs=0x2ec0;eip=0x000071; 	T(MOV(al, 0x36));	// 99424 mov     al, 36h ; '6' ;~ 2EC0:0071
cs=0x2ec0;eip=0x000073; 	R(OUT(0x43, al));	// 99425 out     43h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:0073
cs=0x2ec0;eip=0x000075; 	T(MOV(al, 0x0FF));	// 99426 mov     al, 0FFh ;~ 2EC0:0075
cs=0x2ec0;eip=0x000077; 	R(OUT(0x40, al));	// 99427 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:0077
cs=0x2ec0;eip=0x000079; 	R(OUT(0x40, al));	// 99428 out     40h, al         ; Timer 8253-5 (AT: 8254.2). ;~ 2EC0:0079
cs=0x2ec0;eip=0x00007b; 	T(STI);	// 99429 sti ;~ 2EC0:007B
cs=0x2ec0;eip=0x00007c; 	R(RETF(0));	// 99430 retf ;~ 2EC0:007C
sub_3d324:
	// 99465 
cs=0x2ec0;eip=0x000144; 	T(XOR(ax, ax));	// 99467 xor     ax, ax ;~ 2EC0:0144
cs=0x2ec0;eip=0x000146; 	X(MOV(*(dw*)((&unk_4ac62)), ax));	// 99468 mov     word ptr unk_4AC62, ax ;~ 2EC0:0146
cs=0x2ec0;eip=0x000149; 	X(MOV(*(dw*)((&unk_4ac64)), ax));	// 99469 mov     word ptr unk_4AC64, ax ;~ 2EC0:0149
cs=0x2ec0;eip=0x00014c; 	X(MOV(*(dw*)((&unk_4ac66)), ax));	// 99470 mov     word ptr unk_4AC66, ax ;~ 2EC0:014C
cs=0x2ec0;eip=0x00014f; 	X(MOV(*(dw*)((&unk_4ac68)), ax));	// 99471 mov     word ptr unk_4AC68, ax ;~ 2EC0:014F
cs=0x2ec0;eip=0x000152; 	X(MOV(*(dw*)((&unk_47b74)), ax));	// 99472 mov     word ptr unk_47B74, ax ;~ 2EC0:0152
cs=0x2ec0;eip=0x000155; 	R(RETF(0));	// 99473 retf ;~ 2EC0:0155
sub_3d336:
	// 99480 
cs=0x2ec0;eip=0x000156; 	T(MOV(al, unk_47b2e));	// 99482 mov     al, byte ptr unk_47B2E ;~ 2EC0:0156
cs=0x2ec0;eip=0x000159; 	T(CMP(al, 1));	// 99483 cmp     al, 1 ;~ 2EC0:0159
cs=0x2ec0;eip=0x00015b; 	R(JNZ(loc_3d355));	// 99484 jnz     short loc_3D355 ;~ 2EC0:015B
cs=0x2ec0;eip=0x00015d; 	T(MOV(al, unk_4ac61));	// 99485 mov     al, byte ptr unk_4AC61 ;~ 2EC0:015D
cs=0x2ec0;eip=0x000160; 	T(AND(al, 0x28));	// 99486 and     al, 28h ;~ 2EC0:0160
cs=0x2ec0;eip=0x000162; 	T(ADD(al, unk_4ac60));	// 99487 add     al, byte ptr unk_4AC60 ;~ 2EC0:0162
cs=0x2ec0;eip=0x000166; 	T(XOR(ah, ah));	// 99488 xor     ah, ah ;~ 2EC0:0166
cs=0x2ec0;eip=0x000168; 	X(MOV(*(dw*)((&unk_47b74)), ax));	// 99489 mov     word ptr unk_47B74, ax ;~ 2EC0:0168
cs=0x2ec0;eip=0x00016b; 	X(PUSH(*(dw*)((&unk_5651a))));	// 99490 push    word ptr unk_5651A ;~ 2EC0:016B
cs=0x2ec0;eip=0x00016f; 	R(CALLF(sub_20347,0));	// 99491 call    sub_20347 ;~ 2EC0:016F
cs=0x2ec0;eip=0x000174; 	R(RETF(0));	// 99492 retf ;~ 2EC0:0174
loc_3d355:
	// 10704 
cs=0x2ec0;eip=0x000175; 	T(CMP(al, 0));	// 99496 cmp     al, 0 ;~ 2EC0:0175
cs=0x2ec0;eip=0x000177; 	R(JNZ(loc_3d36d));	// 99497 jnz     short loc_3D36D ;~ 2EC0:0177
cs=0x2ec0;eip=0x000179; 	T(MOV(al, unk_4ac61));	// 99498 mov     al, byte ptr unk_4AC61 ;~ 2EC0:0179
cs=0x2ec0;eip=0x00017c; 	T(AND(al, 0x28));	// 99499 and     al, 28h ;~ 2EC0:017C
cs=0x2ec0;eip=0x00017e; 	T(ADD(al, unk_4ac60));	// 99500 add     al, byte ptr unk_4AC60 ;~ 2EC0:017E
cs=0x2ec0;eip=0x000182; 	T(XOR(ah, ah));	// 99501 xor     ah, ah ;~ 2EC0:0182
cs=0x2ec0;eip=0x000184; 	X(MOV(*(dw*)((&unk_47b74)), ax));	// 99502 mov     word ptr unk_47B74, ax ;~ 2EC0:0184
cs=0x2ec0;eip=0x000187; 	R(CALLF(sub_21297,0));	// 99503 call    sub_21297 ;~ 2EC0:0187
cs=0x2ec0;eip=0x00018c; 	R(RETF(0));	// 99504 retf ;~ 2EC0:018C
loc_3d36d:
	// 10705 
cs=0x2ec0;eip=0x00018d; 	T(CMP(al, 4));	// 99508 cmp     al, 4 ;~ 2EC0:018D
cs=0x2ec0;eip=0x00018f; 	R(JNZ(loc_3d38f));	// 99509 jnz     short loc_3D38F ;~ 2EC0:018F
cs=0x2ec0;eip=0x000191; 	T(MOV(al, unk_4ac60));	// 99510 mov     al, byte ptr unk_4AC60 ;~ 2EC0:0191
cs=0x2ec0;eip=0x000194; 	T(CMP(unk_569c8, 0));	// 99511 cmp     byte ptr unk_569C8, 0 ;~ 2EC0:0194
cs=0x2ec0;eip=0x000199; 	R(JZ(loc_3d384));	// 99512 jz      short loc_3D384 ;~ 2EC0:0199
cs=0x2ec0;eip=0x00019b; 	T(MOV(bl, unk_4ac61));	// 99513 mov     bl, byte ptr unk_4AC61 ;~ 2EC0:019B
cs=0x2ec0;eip=0x00019f; 	T(AND(bl, 0x50));	// 99514 and     bl, 50h ;~ 2EC0:019F
cs=0x2ec0;eip=0x0001a2; 	T(ADD(al, bl));	// 99515 add     al, bl ;~ 2EC0:01A2
loc_3d384:
	// 10706 
cs=0x2ec0;eip=0x0001a4; 	T(XOR(ah, ah));	// 99518 xor     ah, ah ;~ 2EC0:01A4
cs=0x2ec0;eip=0x0001a6; 	X(MOV(*(dw*)((&unk_47b74)), ax));	// 99519 mov     word ptr unk_47B74, ax ;~ 2EC0:01A6
cs=0x2ec0;eip=0x0001a9; 	R(CALLF(sub_21297,0));	// 99520 call    sub_21297 ;~ 2EC0:01A9
cs=0x2ec0;eip=0x0001ae; 	R(RETF(0));	// 99521 retf ;~ 2EC0:01AE
loc_3d38f:
	// 10707 
cs=0x2ec0;eip=0x0001af; 	T(CMP(al, 5));	// 99525 cmp     al, 5 ;~ 2EC0:01AF
cs=0x2ec0;eip=0x0001b1; 	R(JNZ(locret_3d3a0));	// 99526 jnz     short locret_3D3A0 ;~ 2EC0:01B1
cs=0x2ec0;eip=0x0001b3; 	T(MOV(al, unk_4ac60));	// 99527 mov     al, byte ptr unk_4AC60 ;~ 2EC0:01B3
cs=0x2ec0;eip=0x0001b6; 	T(XOR(ah, ah));	// 99528 xor     ah, ah ;~ 2EC0:01B6
cs=0x2ec0;eip=0x0001b8; 	X(MOV(*(dw*)((&unk_47b74)), ax));	// 99529 mov     word ptr unk_47B74, ax ;~ 2EC0:01B8
cs=0x2ec0;eip=0x0001bb; 	R(CALLF(sub_21297,0));	// 99530 call    sub_21297 ;~ 2EC0:01BB
locret_3d3a0:
	// 10708 
cs=0x2ec0;eip=0x0001c0; 	R(RETF(0));	// 99533 retf ;~ 2EC0:01C0
sub_3d3a1:
	// 99540 
cs=0x2ec0;eip=0x0001c1; 	T(XOR(ax, ax));	// 99541 xor     ax, ax ;~ 2EC0:01C1
cs=0x2ec0;eip=0x0001c3; 	X(MOV(*(dw*)((&unk_4ac62)), ax));	// 99542 mov     word ptr unk_4AC62, ax ;~ 2EC0:01C3
cs=0x2ec0;eip=0x0001c6; 	X(MOV(*(dw*)((&unk_4ac64)), ax));	// 99543 mov     word ptr unk_4AC64, ax ;~ 2EC0:01C6
cs=0x2ec0;eip=0x0001c9; 	X(MOV(*(dw*)((&unk_4ac66)), ax));	// 99544 mov     word ptr unk_4AC66, ax ;~ 2EC0:01C9
cs=0x2ec0;eip=0x0001cc; 	X(MOV(*(dw*)((&unk_4ac68)), ax));	// 99545 mov     word ptr unk_4AC68, ax ;~ 2EC0:01CC
cs=0x2ec0;eip=0x0001cf; 	X(MOV(unk_4ac61, al));	// 99546 mov     byte ptr unk_4AC61, al ;~ 2EC0:01CF
cs=0x2ec0;eip=0x0001d2; 	X(MOV(unk_4ac60, al));	// 99547 mov     byte ptr unk_4AC60, al ;~ 2EC0:01D2
cs=0x2ec0;eip=0x0001d5; 	R(CALLF(sub_3d336,0));	// 99548 call    sub_3D336 ;~ 2EC0:01D5
cs=0x2ec0;eip=0x0001da; 	R(RETF(0));	// 99549 retf ;~ 2EC0:01DA
sub_3d3bb:
	// 99556 
cs=0x2ec0;eip=0x0001db; 	R(CALLF(sub_3d3a1,0));	// 99558 call    sub_3D3A1 ;~ 2EC0:01DB
cs=0x2ec0;eip=0x0001e0; 	R(RETF(0));	// 99559 retf ;~ 2EC0:01E0
sub_3d3c1:
	// 99567 
#undef arg_0
#define arg_0 6
	// 99569 arg_0           = word ptr  6 ;~ 2EC0:01E1
cs=0x2ec0;eip=0x0001e1; 	X(PUSH(bp));	// 99571 push    bp ;~ 2EC0:01E1
cs=0x2ec0;eip=0x0001e2; 	T(MOV(bp, sp));	// 99572 mov     bp, sp ;~ 2EC0:01E2
cs=0x2ec0;eip=0x0001e4; 	X(MOV(unk_4ac60, 0));	// 99573 mov     byte ptr unk_4AC60, 0 ;~ 2EC0:01E4
cs=0x2ec0;eip=0x0001e9; 	T(MOV(ax, *(dw*)((&unk_5705a))));	// 99574 mov     ax, word ptr unk_5705A ;~ 2EC0:01E9
cs=0x2ec0;eip=0x0001ec; 	T(MOV(dx, *(dw*)((&unk_5705c))));	// 99575 mov     dx, word ptr unk_5705C ;~ 2EC0:01EC
cs=0x2ec0;eip=0x0001f0; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 99576 add     ax, [bp+arg_0] ;~ 2EC0:01F0
cs=0x2ec0;eip=0x0001f3; 	T(ADC(dx, 0));	// 99577 adc     dx, 0 ;~ 2EC0:01F3
cs=0x2ec0;eip=0x0001f6; 	T(CMP(dx, *(dw*)((&unk_4ac64))));	// 99578 cmp     dx, word ptr unk_4AC64 ;~ 2EC0:01F6
cs=0x2ec0;eip=0x0001fa; 	R(JG(loc_3d3e4));	// 99579 jg      short loc_3D3E4 ;~ 2EC0:01FA
cs=0x2ec0;eip=0x0001fc; 	R(JL(loc_3d3eb));	// 99580 jl      short loc_3D3EB ;~ 2EC0:01FC
cs=0x2ec0;eip=0x0001fe; 	T(CMP(ax, *(dw*)((&unk_4ac62))));	// 99581 cmp     ax, word ptr unk_4AC62 ;~ 2EC0:01FE
cs=0x2ec0;eip=0x000202; 	R(JBE(loc_3d3eb));	// 99582 jbe     short loc_3D3EB ;~ 2EC0:0202
loc_3d3e4:
	// 10709 
cs=0x2ec0;eip=0x000204; 	X(MOV(*(dw*)((&unk_4ac62)), ax));	// 99585 mov     word ptr unk_4AC62, ax ;~ 2EC0:0204
cs=0x2ec0;eip=0x000207; 	X(MOV(*(dw*)((&unk_4ac64)), dx));	// 99586 mov     word ptr unk_4AC64, dx ;~ 2EC0:0207
loc_3d3eb:
	// 10710 
cs=0x2ec0;eip=0x00020b; 	X(POP(bp));	// 99590 pop     bp ;~ 2EC0:020B
cs=0x2ec0;eip=0x00020c; 	R(RETF(0));	// 99591 retf ;~ 2EC0:020C
sub_3d3ed:
	// 99599 
#undef arg_0
#define arg_0 6
	// 99602 arg_0           = word ptr  6 ;~ 2EC0:020D
cs=0x2ec0;eip=0x00020d; 	X(PUSH(bp));	// 99604 push    bp ;~ 2EC0:020D
cs=0x2ec0;eip=0x00020e; 	T(MOV(bp, sp));	// 99605 mov     bp, sp ;~ 2EC0:020E
cs=0x2ec0;eip=0x000210; 	X(MOV(unk_4ac61, 0));	// 99606 mov     byte ptr unk_4AC61, 0 ;~ 2EC0:0210
cs=0x2ec0;eip=0x000215; 	T(MOV(ax, *(dw*)((&unk_5705a))));	// 99607 mov     ax, word ptr unk_5705A ;~ 2EC0:0215
cs=0x2ec0;eip=0x000218; 	T(MOV(dx, *(dw*)((&unk_5705c))));	// 99608 mov     dx, word ptr unk_5705C ;~ 2EC0:0218
cs=0x2ec0;eip=0x00021c; 	T(ADD(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 99609 add     ax, [bp+arg_0] ;~ 2EC0:021C
cs=0x2ec0;eip=0x00021f; 	T(ADC(dx, 0));	// 99610 adc     dx, 0 ;~ 2EC0:021F
cs=0x2ec0;eip=0x000222; 	T(CMP(dx, *(dw*)((&unk_4ac68))));	// 99611 cmp     dx, word ptr unk_4AC68 ;~ 2EC0:0222
cs=0x2ec0;eip=0x000226; 	R(JG(loc_3d410));	// 99612 jg      short loc_3D410 ;~ 2EC0:0226
cs=0x2ec0;eip=0x000228; 	R(JL(loc_3d417));	// 99613 jl      short loc_3D417 ;~ 2EC0:0228
cs=0x2ec0;eip=0x00022a; 	T(CMP(ax, *(dw*)((&unk_4ac66))));	// 99614 cmp     ax, word ptr unk_4AC66 ;~ 2EC0:022A
cs=0x2ec0;eip=0x00022e; 	R(JBE(loc_3d417));	// 99615 jbe     short loc_3D417 ;~ 2EC0:022E
loc_3d410:
	// 10711 
cs=0x2ec0;eip=0x000230; 	X(MOV(*(dw*)((&unk_4ac66)), ax));	// 99618 mov     word ptr unk_4AC66, ax ;~ 2EC0:0230
cs=0x2ec0;eip=0x000233; 	X(MOV(*(dw*)((&unk_4ac68)), dx));	// 99619 mov     word ptr unk_4AC68, dx ;~ 2EC0:0233
loc_3d417:
	// 10712 
cs=0x2ec0;eip=0x000237; 	X(POP(bp));	// 99623 pop     bp ;~ 2EC0:0237
cs=0x2ec0;eip=0x000238; 	R(RETF(0));	// 99624 retf ;~ 2EC0:0238
sub_3d419:
	// 99631 
cs=0x2ec0;eip=0x000239; 	T(CMP(unk_55209, 0));	// 99632 cmp     byte ptr unk_55209, 0 ;~ 2EC0:0239
cs=0x2ec0;eip=0x00023e; 	R(JZ(loc_3d45a));	// 99633 jz      short loc_3D45A ;~ 2EC0:023E
cs=0x2ec0;eip=0x000240; 	T(MOV(cx, *(dw*)((&unk_5705a))));	// 99634 mov     cx, word ptr unk_5705A ;~ 2EC0:0240
cs=0x2ec0;eip=0x000244; 	T(MOV(dx, *(dw*)((&unk_5705c))));	// 99635 mov     dx, word ptr unk_5705C ;~ 2EC0:0244
cs=0x2ec0;eip=0x000248; 	T(XOR(al, al));	// 99636 xor     al, al ;~ 2EC0:0248
cs=0x2ec0;eip=0x00024a; 	T(CMP(dx, *(dw*)((&unk_4ac64))));	// 99637 cmp     dx, word ptr unk_4AC64 ;~ 2EC0:024A
cs=0x2ec0;eip=0x00024e; 	R(JG(loc_3d43d));	// 99638 jg      short loc_3D43D ;~ 2EC0:024E
cs=0x2ec0;eip=0x000250; 	R(JL(loc_3d438));	// 99639 jl      short loc_3D438 ;~ 2EC0:0250
cs=0x2ec0;eip=0x000252; 	T(CMP(cx, *(dw*)((&unk_4ac62))));	// 99640 cmp     cx, word ptr unk_4AC62 ;~ 2EC0:0252
cs=0x2ec0;eip=0x000256; 	R(JNC(loc_3d43d));	// 99641 jnb     short loc_3D43D ;~ 2EC0:0256
loc_3d438:
	// 10713 
cs=0x2ec0;eip=0x000258; 	T(MOV(al, unk_4ac60));	// 99644 mov     al, byte ptr unk_4AC60 ;~ 2EC0:0258
cs=0x2ec0;eip=0x00025b; 	T(XOR(al, 1));	// 99645 xor     al, 1 ;~ 2EC0:025B
loc_3d43d:
	// 10714 
cs=0x2ec0;eip=0x00025d; 	X(MOV(unk_4ac60, al));	// 99649 mov     byte ptr unk_4AC60, al ;~ 2EC0:025D
cs=0x2ec0;eip=0x000260; 	T(XOR(al, al));	// 99650 xor     al, al ;~ 2EC0:0260
cs=0x2ec0;eip=0x000262; 	T(CMP(dx, *(dw*)((&unk_4ac68))));	// 99651 cmp     dx, word ptr unk_4AC68 ;~ 2EC0:0262
cs=0x2ec0;eip=0x000266; 	R(JG(loc_3d455));	// 99652 jg      short loc_3D455 ;~ 2EC0:0266
cs=0x2ec0;eip=0x000268; 	R(JL(loc_3d450));	// 99653 jl      short loc_3D450 ;~ 2EC0:0268
cs=0x2ec0;eip=0x00026a; 	T(CMP(cx, *(dw*)((&unk_4ac66))));	// 99654 cmp     cx, word ptr unk_4AC66 ;~ 2EC0:026A
cs=0x2ec0;eip=0x00026e; 	R(JNC(loc_3d455));	// 99655 jnb     short loc_3D455 ;~ 2EC0:026E
loc_3d450:
	// 10715 
cs=0x2ec0;eip=0x000270; 	T(MOV(al, unk_4ac61));	// 99658 mov     al, byte ptr unk_4AC61 ;~ 2EC0:0270
cs=0x2ec0;eip=0x000273; 	T(XOR(al, 0x0FF));	// 99659 xor     al, 0FFh ;~ 2EC0:0273
loc_3d455:
	// 10716 
cs=0x2ec0;eip=0x000275; 	X(MOV(unk_4ac61, al));	// 99663 mov     byte ptr unk_4AC61, al ;~ 2EC0:0275
cs=0x2ec0;eip=0x000278; 	R(JMP(loc_3d464));	// 99664 jmp     short loc_3D464 ;~ 2EC0:0278
loc_3d45a:
	// 10717 
cs=0x2ec0;eip=0x00027a; 	X(MOV(unk_4ac60, 0));	// 99668 mov     byte ptr unk_4AC60, 0 ;~ 2EC0:027A
cs=0x2ec0;eip=0x00027f; 	X(MOV(unk_4ac61, 0));	// 99669 mov     byte ptr unk_4AC61, 0 ;~ 2EC0:027F
loc_3d464:
	// 10718 
cs=0x2ec0;eip=0x000284; 	R(CALLF(sub_3d336,0));	// 99672 call    sub_3D336 ;~ 2EC0:0284
cs=0x2ec0;eip=0x000289; 	R(RETN(0));	// 99673 retn ;~ 2EC0:0289
sub_3d46a:
	// 99680 
cs=0x2ec0;eip=0x00028a; 	T(CMP(unk_4ac6b, 0));	// 99682 cmp     byte ptr unk_4AC6B, 0 ;~ 2EC0:028A
cs=0x2ec0;eip=0x00028f; 	R(JZ(locret_3d47f));	// 99683 jz      short locret_3D47F ;~ 2EC0:028F
cs=0x2ec0;eip=0x000291; 	T(TEST(unk_5687c, 2));	// 99684 test    byte ptr unk_5687C, 2 ;~ 2EC0:0291
cs=0x2ec0;eip=0x000296; 	R(JZ(locret_3d47f));	// 99685 jz      short locret_3D47F ;~ 2EC0:0296
loc_3d478:
	// 10719 
cs=0x2ec0;eip=0x000298; 	T(CMP(*(dw*)((&unk_4ac6c)), 5));	// 99688 cmp     word ptr unk_4AC6C, 5 ;~ 2EC0:0298
cs=0x2ec0;eip=0x00029d; 	R(JC(loc_3d478));	// 99689 jb      short loc_3D478 ;~ 2EC0:029D
locret_3d47f:
	// 10720 
cs=0x2ec0;eip=0x00029f; 	R(RETF(0));	// 99693 retf ;~ 2EC0:029F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3d355: 	goto loc_3d355;
        case m2c::kloc_3d36d: 	goto loc_3d36d;
        case m2c::kloc_3d384: 	goto loc_3d384;
        case m2c::kloc_3d38f: 	goto loc_3d38f;
        case m2c::kloc_3d3e4: 	goto loc_3d3e4;
        case m2c::kloc_3d3eb: 	goto loc_3d3eb;
        case m2c::kloc_3d410: 	goto loc_3d410;
        case m2c::kloc_3d417: 	goto loc_3d417;
        case m2c::kloc_3d438: 	goto loc_3d438;
        case m2c::kloc_3d43d: 	goto loc_3d43d;
        case m2c::kloc_3d450: 	goto loc_3d450;
        case m2c::kloc_3d455: 	goto loc_3d455;
        case m2c::kloc_3d45a: 	goto loc_3d45a;
        case m2c::kloc_3d464: 	goto loc_3d464;
        case m2c::kloc_3d478: 	goto loc_3d478;
        case m2c::klocret_3d3a0: 	goto locret_3d3a0;
        case m2c::klocret_3d47f: 	goto locret_3d47f;
        case m2c::ksub_3d1e6: 	goto sub_3d1e6;
        case m2c::ksub_3d237: 	goto sub_3d237;
        case m2c::ksub_3d324: 	goto sub_3d324;
        case m2c::ksub_3d336: 	goto sub_3d336;
        case m2c::ksub_3d3a1: 	goto sub_3d3a1;
        case m2c::ksub_3d3bb: 	goto sub_3d3bb;
        case m2c::ksub_3d3c1: 	goto sub_3d3c1;
        case m2c::ksub_3d3ed: 	goto sub_3d3ed;
        case m2c::ksub_3d419: 	goto sub_3d419;
        case m2c::ksub_3d46a: 	goto sub_3d46a;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

