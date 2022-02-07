/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void sub_2edd8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_2edd8:
    _begin:
#undef var_6
#define var_6 -6
	// 68741 var_6           = word ptr -6 ;~ 207F:0008
#undef var_4
#define var_4 -4
	// 68742 var_4           = word ptr -4 ;~ 207F:0008
#undef var_2
#define var_2 -2
	// 68743 var_2           = word ptr -2 ;~ 207F:0008
#undef arg_0
#define arg_0 6
	// 68744 arg_0           = word ptr  6 ;~ 207F:0008
#undef arg_2
#define arg_2 8
	// 68745 arg_2           = word ptr  8 ;~ 207F:0008
cs=0x207f;eip=0x000008; 	X(PUSH(bp));	// 68747 push    bp ;~ 207F:0008
cs=0x207f;eip=0x000009; 	T(MOV(bp, sp));	// 68748 mov     bp, sp ;~ 207F:0009
cs=0x207f;eip=0x00000b; 	T(SUB(sp, 6));	// 68749 sub     sp, 6 ;~ 207F:000B
cs=0x207f;eip=0x00000e; 	X(PUSH(si));	// 68750 push    si ;~ 207F:000E
cs=0x207f;eip=0x00000f; 	R(CALLF(sub_2f750,0));	// 68751 call    sub_2F750 ;~ 207F:000F
cs=0x207f;eip=0x000014; 	X(MOV(*(dw*)(raddr(ss,bp+var_4)), ax));	// 68752 mov     [bp+var_4], ax ;~ 207F:0014
cs=0x207f;eip=0x000017; 	R(CALLF(sub_2f74d,0));	// 68753 call    sub_2F74D ;~ 207F:0017
cs=0x207f;eip=0x00001c; 	X(MOV(*(dw*)(raddr(ss,bp+var_6)), ax));	// 68754 mov     [bp+var_6], ax ;~ 207F:001C
cs=0x207f;eip=0x00001f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 68755 mov     ax, [bp+var_4] ;~ 207F:001F
cs=0x207f;eip=0x000022; 	T(ADD(ax, *(dw*)(raddr(ss,bp+var_6))));	// 68756 add     ax, [bp+var_6] ;~ 207F:0022
cs=0x207f;eip=0x000025; 	X(MOV(*(dw*)(raddr(ss,bp+var_2)), ax));	// 68757 mov     [bp+var_2], ax ;~ 207F:0025
cs=0x207f;eip=0x000028; 	T(CMP(*(dw*)(raddr(ss,bp+var_6)), 0x280));	// 68758 cmp     [bp+var_6], 280h ;~ 207F:0028
cs=0x207f;eip=0x00002d; 	R(JNZ(loc_2ee0b));	// 68759 jnz     short loc_2EE0B ;~ 207F:002D
cs=0x207f;eip=0x00002f; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 68760 mov     bx, [bp+arg_2] ;~ 207F:002F
cs=0x207f;eip=0x000032; 	X(MOV(*(dw*)(raddr(ds,bx)), 0x0B800));	// 68761 mov     word ptr [bx], 0B800h ;~ 207F:0032
cs=0x207f;eip=0x000036; 	T(MOV(ax, 0x80));	// 68762 mov     ax, 80h ; '€' ;~ 207F:0036
cs=0x207f;eip=0x000039; 	R(JMP(loc_2ee68));	// 68763 jmp     short loc_2EE68 ;~ 207F:0039
loc_2ee0b:
	// 8795 
cs=0x207f;eip=0x00003b; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 68767 mov     ax, [bp+var_4] ;~ 207F:003B
cs=0x207f;eip=0x00003e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), ax));	// 68768 cmp     [bp+arg_0], ax ;~ 207F:003E
cs=0x207f;eip=0x000041; 	R(JA(loc_2ee27));	// 68769 ja      short loc_2EE27 ;~ 207F:0041
cs=0x207f;eip=0x000043; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 68770 mov     bx, [bp+arg_2] ;~ 207F:0043
cs=0x207f;eip=0x000046; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 68771 mov     ax, [bp+var_2] ;~ 207F:0046
cs=0x207f;eip=0x000049; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 68772 sub     ax, [bp+arg_0] ;~ 207F:0049
cs=0x207f;eip=0x00004c; 	T(MOV(cl, 6));	// 68773 mov     cl, 6 ;~ 207F:004C
cs=0x207f;eip=0x00004e; 	T(SHL(ax, cl));	// 68774 shl     ax, cl ;~ 207F:004E
cs=0x207f;eip=0x000050; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 68775 mov     [bx], ax ;~ 207F:0050
cs=0x207f;eip=0x000052; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_4))));	// 68776 mov     ax, [bp+var_4] ;~ 207F:0052
cs=0x207f;eip=0x000055; 	R(JMP(loc_2ee68));	// 68777 jmp     short loc_2EE68 ;~ 207F:0055
loc_2ee27:
	// 8796 
cs=0x207f;eip=0x000057; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 68781 mov     ax, [bp+arg_0] ;~ 207F:0057
cs=0x207f;eip=0x00005a; 	T(SUB(ax, *(dw*)(raddr(ss,bp+var_4))));	// 68782 sub     ax, [bp+var_4] ;~ 207F:005A
cs=0x207f;eip=0x00005d; 	T(MOV(cl, 6));	// 68783 mov     cl, 6 ;~ 207F:005D
cs=0x207f;eip=0x00005f; 	T(SHL(ax, cl));	// 68784 shl     ax, cl ;~ 207F:005F
cs=0x207f;eip=0x000061; 	X(PUSH(ax));	// 68785 push    ax ;~ 207F:0061
cs=0x207f;eip=0x000062; 	R(CALLF(sub_2f766,0));	// 68786 call    sub_2F766 ;~ 207F:0062
cs=0x207f;eip=0x000067; 	T(ADD(sp, 2));	// 68787 add     sp, 2 ;~ 207F:0067
cs=0x207f;eip=0x00006a; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 68788 mov     bx, [bp+arg_2] ;~ 207F:006A
cs=0x207f;eip=0x00006d; 	X(MOV(*(dw*)(raddr(ds,bx)), ax));	// 68789 mov     [bx], ax ;~ 207F:006D
cs=0x207f;eip=0x00006f; 	T(OR(ax, ax));	// 68790 or      ax, ax ;~ 207F:006F
cs=0x207f;eip=0x000071; 	R(JNZ(loc_2ee47));	// 68791 jnz     short loc_2EE47 ;~ 207F:0071
loc_2ee43:
	// 8797 
cs=0x207f;eip=0x000073; 	T(SUB(ax, ax));	// 68794 sub     ax, ax ;~ 207F:0073
cs=0x207f;eip=0x000075; 	R(JMP(loc_2ee68));	// 68795 jmp     short loc_2EE68 ;~ 207F:0075
loc_2ee47:
	// 8798 
cs=0x207f;eip=0x000077; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_2))));	// 68799 mov     bx, [bp+arg_2] ;~ 207F:0077
cs=0x207f;eip=0x00007a; 	T(MOV(si, *(dw*)(raddr(ds,bx))));	// 68800 mov     si, [bx] ;~ 207F:007A
cs=0x207f;eip=0x00007c; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_2))));	// 68801 mov     ax, [bp+var_2] ;~ 207F:007C
cs=0x207f;eip=0x00007f; 	T(SUB(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 68802 sub     ax, [bp+arg_0] ;~ 207F:007F
cs=0x207f;eip=0x000082; 	T(MOV(cl, 6));	// 68803 mov     cl, 6 ;~ 207F:0082
cs=0x207f;eip=0x000084; 	T(SHL(ax, cl));	// 68804 shl     ax, cl ;~ 207F:0084
cs=0x207f;eip=0x000086; 	T(CMP(ax, si));	// 68805 cmp     ax, si ;~ 207F:0086
cs=0x207f;eip=0x000088; 	R(JZ(loc_2ee65));	// 68806 jz      short loc_2EE65 ;~ 207F:0088
cs=0x207f;eip=0x00008a; 	X(PUSH(si));	// 68807 push    si ;~ 207F:008A
cs=0x207f;eip=0x00008b; 	R(CALLF(sub_10518,0));	// 68808 call    sub_10518 ;~ 207F:008B
cs=0x207f;eip=0x000090; 	T(ADD(sp, 2));	// 68809 add     sp, 2 ;~ 207F:0090
cs=0x207f;eip=0x000093; 	R(JMP(loc_2ee43));	// 68810 jmp     short loc_2EE43 ;~ 207F:0093
loc_2ee65:
	// 8799 
cs=0x207f;eip=0x000095; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 68814 mov     ax, [bp+arg_0] ;~ 207F:0095
loc_2ee68:
	// 8800 
cs=0x207f;eip=0x000098; 	X(POP(si));	// 68818 pop     si ;~ 207F:0098
cs=0x207f;eip=0x000099; 	T(MOV(sp, bp));	// 68819 mov     sp, bp ;~ 207F:0099
cs=0x207f;eip=0x00009b; 	X(POP(bp));	// 68820 pop     bp ;~ 207F:009B
cs=0x207f;eip=0x00009c; 	R(RETF(0));	// 68821 retf ;~ 207F:009C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2ee0b: 	goto loc_2ee0b;
        case m2c::kloc_2ee27: 	goto loc_2ee27;
        case m2c::kloc_2ee43: 	goto loc_2ee43;
        case m2c::kloc_2ee47: 	goto loc_2ee47;
        case m2c::kloc_2ee65: 	goto loc_2ee65;
        case m2c::kloc_2ee68: 	goto loc_2ee68;
        case m2c::ksub_2edd8: 	goto sub_2edd8;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

