/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group11(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group11:
    _begin:
sub_2f74d:
	// 70556 
cs=0x2116;eip=0x00000d; 	R(_INT(0x12));	// 70557 int     12h             ; MEMORY SIZE - ;~ 2116:000D
cs=0x2116;eip=0x00000f; 	R(RETF(0));	// 70559 retf ;~ 2116:000F
sub_2f750:
	// 70566 
cs=0x2116;eip=0x000010; 	T(MOV(ax, 0x7000));	// 70567 mov     ax, 7000h ;~ 2116:0010
cs=0x2116;eip=0x000013; 	T(MOV(bx, 1));	// 70568 mov     bx, 1 ;~ 2116:0013
cs=0x2116;eip=0x000016; 	R(_INT(0x15));	// 70569 int     15h ;~ 2116:0016
cs=0x2116;eip=0x000018; 	T(STI);	// 70570 sti ;~ 2116:0018
cs=0x2116;eip=0x000019; 	T(MOV(ax, 0x10));	// 70571 mov     ax, 10h ;~ 2116:0019
cs=0x2116;eip=0x00001c; 	R(JC(locret_2f765));	// 70572 jb      short locret_2F765 ;~ 2116:001C
cs=0x2116;eip=0x00001e; 	T(AND(dh, 3));	// 70573 and     dh, 3 ;~ 2116:001E
cs=0x2116;eip=0x000021; 	T(MOV(cl, dh));	// 70574 mov     cl, dh ;~ 2116:0021
cs=0x2116;eip=0x000023; 	T(SHL(ax, cl));	// 70575 shl     ax, cl ;~ 2116:0023
locret_2f765:
	// 8896 
cs=0x2116;eip=0x000025; 	R(RETF(0));	// 70578 retf ;~ 2116:0025
sub_2f766:
	// 70586 
#undef arg_0
#define arg_0 6
	// 70588 arg_0           = word ptr  6 ;~ 2116:0026
cs=0x2116;eip=0x000026; 	X(PUSH(bp));	// 70590 push    bp ;~ 2116:0026
cs=0x2116;eip=0x000027; 	T(MOV(bp, sp));	// 70591 mov     bp, sp ;~ 2116:0027
cs=0x2116;eip=0x000029; 	X(PUSH(si));	// 70592 push    si ;~ 2116:0029
cs=0x2116;eip=0x00002a; 	X(PUSH(di));	// 70593 push    di ;~ 2116:002A
cs=0x2116;eip=0x00002b; 	X(PUSH(ds));	// 70594 push    ds ;~ 2116:002B
cs=0x2116;eip=0x00002c; 	T(MOV(ax, 0x5200));	// 70595 mov     ax, 5200h ;~ 2116:002C
cs=0x2116;eip=0x00002f; 	R(_INT(0x21));	// 70596 int     21h             ; DOS - 2+ internal - GET LIST OF LISTS ;~ 2116:002F
cs=0x2116;eip=0x000031; 	T(MOV(cx, *(dw*)(raddr(es,bx-2))));	// 70598 mov     cx, es:[bx-2] ;~ 2116:0031
cs=0x2116;eip=0x000035; 	T(XOR(si, si));	// 70599 xor     si, si ;~ 2116:0035
cs=0x2116;eip=0x000037; 	T(XOR(dx, dx));	// 70600 xor     dx, dx ;~ 2116:0037
loc_2f779:
	// 8897 
cs=0x2116;eip=0x000039; 	T(MOV(ds, cx));	// 70603 mov     ds, cx ;~ 2116:0039
cs=0x2116;eip=0x00003b; 	T(MOV(bx, word_479b1));	// 70604 mov     bx, word_479B1 ;~ 2116:003B
cs=0x2116;eip=0x00003f; 	T(MOV(ax, word_479b3));	// 70605 mov     ax, word_479B3 ;~ 2116:003F
cs=0x2116;eip=0x000042; 	T(INC(ax));	// 70606 inc     ax ;~ 2116:0042
cs=0x2116;eip=0x000043; 	T(TEST(bx, bx));	// 70607 test    bx, bx ;~ 2116:0043
cs=0x2116;eip=0x000045; 	R(JNZ(loc_2f78c));	// 70608 jnz     short loc_2F78C ;~ 2116:0045
cs=0x2116;eip=0x000047; 	T(ADD(dx, ax));	// 70609 add     dx, ax ;~ 2116:0047
cs=0x2116;eip=0x000049; 	R(JMP(loc_2f78e));	// 70610 jmp     short loc_2F78E ;~ 2116:0049
loc_2f78c:
	// 8898 
cs=0x2116;eip=0x00004c; 	T(MOV(di, bx));	// 70615 mov     di, bx ;~ 2116:004C
loc_2f78e:
	// 8899 
cs=0x2116;eip=0x00004e; 	T(CMP(ax, 1));	// 70618 cmp     ax, 1 ;~ 2116:004E
cs=0x2116;eip=0x000051; 	R(JBE(loc_2f7d8));	// 70619 jbe     short loc_2F7D8 ;~ 2116:0051
cs=0x2116;eip=0x000053; 	T(INC(si));	// 70620 inc     si ;~ 2116:0053
cs=0x2116;eip=0x000054; 	T(CMP(si, 0x7D0));	// 70621 cmp     si, 7D0h ;~ 2116:0054
cs=0x2116;eip=0x000058; 	R(JNC(loc_2f7d8));	// 70622 jnb     short loc_2F7D8 ;~ 2116:0058
cs=0x2116;eip=0x00005a; 	T(ADD(cx, ax));	// 70623 add     cx, ax ;~ 2116:005A
cs=0x2116;eip=0x00005c; 	T(CMP(byte_479b0, 0x5A));	// 70624 cmp     byte_479B0, 5Ah ; 'Z' ;~ 2116:005C
cs=0x2116;eip=0x000061; 	R(JNZ(loc_2f779));	// 70625 jnz     short loc_2F779 ;~ 2116:0061
cs=0x2116;eip=0x000063; 	T(TEST(bx, bx));	// 70626 test    bx, bx ;~ 2116:0063
cs=0x2116;eip=0x000065; 	R(JNZ(loc_2f7d8));	// 70627 jnz     short loc_2F7D8 ;~ 2116:0065
cs=0x2116;eip=0x000067; 	T(DEC(ax));	// 70628 dec     ax ;~ 2116:0067
cs=0x2116;eip=0x000068; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 70629 sub     ax, [bp+arg_0] ;~ 2116:0068
cs=0x2116;eip=0x00006b; 	R(JBE(loc_2f7d8));	// 70630 jbe     short loc_2F7D8 ;~ 2116:006B
cs=0x2116;eip=0x00006d; 	T(MOV(cx, ds));	// 70631 mov     cx, ds ;~ 2116:006D
cs=0x2116;eip=0x00006f; 	T(ADD(cx, ax));	// 70632 add     cx, ax ;~ 2116:006F
cs=0x2116;eip=0x000071; 	T(MOV(es, cx));	// 70633 mov     es, cx ;~ 2116:0071
cs=0x2116;eip=0x000073; 	X(MOV(*(raddr(es,0)), 0x5A));	// 70634 mov     byte ptr es:0, 5Ah ; 'Z' ;~ 2116:0073
cs=0x2116;eip=0x000079; 	X(PUSH(ax));	// 70635 push    ax ;~ 2116:0079
cs=0x2116;eip=0x00007a; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 70636 mov     ax, [bp+arg_0] ;~ 2116:007A
cs=0x2116;eip=0x00007d; 	X(MOV(*(dw*)(raddr(es,3)), ax));	// 70637 mov     es:3, ax ;~ 2116:007D
cs=0x2116;eip=0x000081; 	X(POP(ax));	// 70638 pop     ax ;~ 2116:0081
cs=0x2116;eip=0x000082; 	X(MOV(*(dw*)(raddr(es,1)), di));	// 70639 mov     es:1, di ;~ 2116:0082
cs=0x2116;eip=0x000087; 	T(DEC(ax));	// 70640 dec     ax ;~ 2116:0087
cs=0x2116;eip=0x000088; 	X(MOV(word_479b3, ax));	// 70641 mov     word_479B3, ax ;~ 2116:0088
cs=0x2116;eip=0x00008b; 	X(MOV(byte_479b0, 0x4D));	// 70642 mov     byte_479B0, 4Dh ; 'M' ;~ 2116:008B
cs=0x2116;eip=0x000090; 	X(POP(ds));	// 70643 pop     ds ;~ 2116:0090
cs=0x2116;eip=0x000091; 	X(POP(di));	// 70644 pop     di ;~ 2116:0091
cs=0x2116;eip=0x000092; 	X(POP(si));	// 70645 pop     si ;~ 2116:0092
cs=0x2116;eip=0x000093; 	X(POP(bp));	// 70646 pop     bp ;~ 2116:0093
cs=0x2116;eip=0x000094; 	T(MOV(ax, es));	// 70647 mov     ax, es ;~ 2116:0094
cs=0x2116;eip=0x000096; 	T(INC(ax));	// 70648 inc     ax ;~ 2116:0096
cs=0x2116;eip=0x000097; 	R(RETF(0));	// 70649 retf ;~ 2116:0097
loc_2f7d8:
	// 8900 
cs=0x2116;eip=0x000098; 	X(POP(ds));	// 70654 pop     ds ;~ 2116:0098
cs=0x2116;eip=0x000099; 	X(POP(di));	// 70655 pop     di ;~ 2116:0099
cs=0x2116;eip=0x00009a; 	X(POP(si));	// 70656 pop     si ;~ 2116:009A
cs=0x2116;eip=0x00009b; 	X(POP(bp));	// 70657 pop     bp ;~ 2116:009B
cs=0x2116;eip=0x00009c; 	T(XOR(ax, ax));	// 70658 xor     ax, ax ;~ 2116:009C
cs=0x2116;eip=0x00009e; 	R(RETF(0));	// 70659 retf ;~ 2116:009E

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2f779: 	goto loc_2f779;
        case m2c::kloc_2f78c: 	goto loc_2f78c;
        case m2c::kloc_2f78e: 	goto loc_2f78e;
        case m2c::kloc_2f7d8: 	goto loc_2f7d8;
        case m2c::klocret_2f765: 	goto locret_2f765;
        case m2c::ksub_2f74d: 	goto sub_2f74d;
        case m2c::ksub_2f750: 	goto sub_2f750;
        case m2c::ksub_2f766: 	goto sub_2f766;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

