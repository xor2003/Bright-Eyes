/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group12(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group12:
    _begin:
sub_2f7e0:
	// 70677 
#undef arg_0
#define arg_0 6
	// 70680 arg_0           = word ptr  6 ;~ 2120:0000
cs=0x2120;eip=0x000000; 	X(PUSH(bp));	// 70682 push    bp ;~ 2120:0000
cs=0x2120;eip=0x000001; 	T(MOV(bp, sp));	// 70683 mov     bp, sp ;~ 2120:0001
cs=0x2120;eip=0x000003; 	T(SUB(ax, ax));	// 70684 sub     ax, ax ;~ 2120:0003
cs=0x2120;eip=0x000005; 	X(PUSH(ax));	// 70685 push    ax ;~ 2120:0005
cs=0x2120;eip=0x000006; 	R(CALLF(sub_3e446,0));	// 70686 call    sub_3E446 ;~ 2120:0006
cs=0x2120;eip=0x00000b; 	R(CALLF(sub_3d3bb,0));	// 70687 call    sub_3D3BB ;~ 2120:000B
cs=0x2120;eip=0x000010; 	R(CALLF(sub_3102a,0));	// 70688 call    sub_3102A ;~ 2120:0010
cs=0x2120;eip=0x000015; 	R(CALLF(sub_36df7,0));	// 70689 call    sub_36DF7 ;~ 2120:0015
cs=0x2120;eip=0x00001a; 	R(CALLF(sub_36b22,0));	// 70690 call    sub_36B22 ;~ 2120:001A
cs=0x2120;eip=0x00001f; 	R(CALLF(sub_3e3be,0));	// 70691 call    sub_3E3BE ;~ 2120:001F
cs=0x2120;eip=0x000024; 	R(CALLF(sub_20ff0,0));	// 70692 call    sub_20FF0 ;~ 2120:0024
cs=0x2120;eip=0x000029; 	R(CALLF(sub_238a4,0));	// 70693 call    sub_238A4 ;~ 2120:0029
cs=0x2120;eip=0x00002e; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), 0));	// 70694 cmp     [bp+arg_0], 0 ;~ 2120:002E
cs=0x2120;eip=0x000032; 	R(JZ(loc_2f81f));	// 70695 jz      short loc_2F81F ;~ 2120:0032
cs=0x2120;eip=0x000034; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 70696 push    [bp+arg_0] ;~ 2120:0034
cs=0x2120;eip=0x000037; 	R(CALLF(sub_2f3f8,0));	// 70697 call    sub_2F3F8 ;~ 2120:0037
cs=0x2120;eip=0x00003c; 	T(ADD(sp, 2));	// 70698 add     sp, 2 ;~ 2120:003C
loc_2f81f:
	// 8901 
cs=0x2120;eip=0x00003f; 	T(SUB(ax, ax));	// 70701 sub     ax, ax ;~ 2120:003F
cs=0x2120;eip=0x000041; 	X(PUSH(ax));	// 70702 push    ax ;~ 2120:0041
cs=0x2120;eip=0x000042; 	R(CALLF(sub_100f9,0));	// 70703 call    far ptr sub_100F9 ;~ 2120:0042
seg014_proc:
	// 70707 
cs=0x2120;eip=0x000047; 	T(ADD(sp, 2));	// 70707 add     sp, 2 ;~ 2120:0047
cs=0x2120;eip=0x00004a; 	X(POP(bp));	// 70708 pop     bp ;~ 2120:004A
cs=0x2120;eip=0x00004b; 	R(RETF(2));	// 70709 retf    2 ;~ 2120:004B
cs=0x2120;eip=0x000056; 	R(RETF(0));	// 70724 retf ;~ 2120:0056
cs=0x2120;eip=0x000079; 	T(MOV(sp, bp));	// 70755 mov     sp, bp ;~ 2120:0079
cs=0x2120;eip=0x00007b; 	X(POP(bp));	// 70756 pop     bp ;~ 2120:007B
cs=0x2120;eip=0x00007c; 	R(RETF(2));	// 70757 retf    2 ;~ 2120:007C
sub_2f82e:
	// 70715 
cs=0x2120;eip=0x00004e; 	T(MOV(ax, 0x0DEA));	// 70717 mov     ax, 0DEAh ;~ 2120:004E
cs=0x2120;eip=0x000051; 	X(PUSH(ax));	// 70718 push    ax ;~ 2120:0051
cs=0x2120;eip=0x000052; 	X(PUSH(cs));	// 70719 push    cs ;~ 2120:0052
cs=0x2120;eip=0x000053; 	R(CALL(sub_2f7e0,0));	// 70720 call    near ptr sub_2F7E0 ;~ 2120:0053
sub_2f838:
	// 70732 
#undef var_50
#define var_50 -0x50
	// 70735 var_50          = byte ptr -50h ;~ 2120:0058
#undef arg_0
#define arg_0 6
	// 70736 arg_0           = word ptr  6 ;~ 2120:0058
cs=0x2120;eip=0x000058; 	X(PUSH(bp));	// 70738 push    bp ;~ 2120:0058
cs=0x2120;eip=0x000059; 	T(MOV(bp, sp));	// 70739 mov     bp, sp ;~ 2120:0059
cs=0x2120;eip=0x00005b; 	T(SUB(sp, 0x50));	// 70740 sub     sp, 50h ;~ 2120:005B
cs=0x2120;eip=0x00005e; 	X(PUSH(*(dw*)(raddr(ss,bp+arg_0))));	// 70741 push    [bp+arg_0] ;~ 2120:005E
cs=0x2120;eip=0x000061; 	T(MOV(ax, 0x0DFD));	// 70742 mov     ax, 0DFDh ;~ 2120:0061
cs=0x2120;eip=0x000064; 	X(PUSH(ax));	// 70743 push    ax ;~ 2120:0064
cs=0x2120;eip=0x000065; 	T(ax = bp+var_50);	// 70744 lea     ax, [bp+var_50] ;~ 2120:0065
cs=0x2120;eip=0x000068; 	X(PUSH(ax));	// 70745 push    ax ;~ 2120:0068
cs=0x2120;eip=0x000069; 	R(CALLF(sub_2f1d9,0));	// 70746 call    sub_2F1D9 ;~ 2120:0069
cs=0x2120;eip=0x00006e; 	T(ADD(sp, 6));	// 70747 add     sp, 6 ;~ 2120:006E
cs=0x2120;eip=0x000071; 	T(ax = bp+var_50);	// 70748 lea     ax, [bp+var_50] ;~ 2120:0071
cs=0x2120;eip=0x000074; 	X(PUSH(ax));	// 70749 push    ax ;~ 2120:0074
cs=0x2120;eip=0x000075; 	X(PUSH(cs));	// 70750 push    cs ;~ 2120:0075
cs=0x2120;eip=0x000076; 	R(CALL(sub_2f7e0,0));	// 70751 call    near ptr sub_2F7E0 ;~ 2120:0076

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_2f81f: 	goto loc_2f81f;
        case m2c::kseg014_proc: 	goto seg014_proc;
        case m2c::ksub_2f7e0: 	goto sub_2f7e0;
        case m2c::ksub_2f82e: 	goto sub_2f82e;
        case m2c::ksub_2f838: 	goto sub_2f838;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

