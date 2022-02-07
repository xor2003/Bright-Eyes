/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group16(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group16:
    _begin:
sub_30b18:
	// 73681 
#undef arg_0
#define arg_0 6
	// 73683 arg_0           = word ptr  6 ;~ 2253:0008
cs=0x2253;eip=0x000008; 	X(PUSH(bp));	// 73685 push    bp ;~ 2253:0008
cs=0x2253;eip=0x000009; 	T(MOV(bp, sp));	// 73686 mov     bp, sp ;~ 2253:0009
cs=0x2253;eip=0x00000b; 	T(XOR(al, al));	// 73687 xor     al, al ;~ 2253:000B
cs=0x2253;eip=0x00000d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 73688 mov     dx, [bp+arg_0] ;~ 2253:000D
cs=0x2253;eip=0x000010; 	T(MOV(ah, 0x3D));	// 73689 mov     ah, 3Dh ;~ 2253:0010
cs=0x2253;eip=0x000012; 	R(_INT(0x21));	// 73690 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 2253:0012
cs=0x2253;eip=0x000014; 	R(JNC(loc_30b2f));	// 73694 jnb     short loc_30B2F ;~ 2253:0014
cs=0x2253;eip=0x000016; 	T(MOV(ax, 0x0FFFF));	// 73695 mov     ax, 0FFFFh ;~ 2253:0016
cs=0x2253;eip=0x000019; 	T(MOV(dx, 0x0FFFF));	// 73696 mov     dx, 0FFFFh ;~ 2253:0019
cs=0x2253;eip=0x00001c; 	R(JMP(loc_30b43));	// 73697 jmp     short loc_30B43 ;~ 2253:001C
loc_30b2f:
	// 9153 
cs=0x2253;eip=0x00001f; 	T(MOV(bx, ax));	// 73703 mov     bx, ax ;~ 2253:001F
cs=0x2253;eip=0x000021; 	T(MOV(ah, 0x42));	// 73704 mov     ah, 42h ; 'B' ;~ 2253:0021
cs=0x2253;eip=0x000023; 	T(MOV(al, 2));	// 73705 mov     al, 2 ;~ 2253:0023
cs=0x2253;eip=0x000025; 	T(XOR(cx, cx));	// 73706 xor     cx, cx ;~ 2253:0025
cs=0x2253;eip=0x000027; 	T(XOR(dx, dx));	// 73707 xor     dx, dx ;~ 2253:0027
cs=0x2253;eip=0x000029; 	R(_INT(0x21));	// 73708 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 2253:0029
cs=0x2253;eip=0x00002b; 	X(PUSH(ax));	// 73710 push    ax ;~ 2253:002B
cs=0x2253;eip=0x00002c; 	X(PUSH(dx));	// 73711 push    dx ;~ 2253:002C
cs=0x2253;eip=0x00002d; 	T(MOV(ah, 0x3E));	// 73712 mov     ah, 3Eh ;~ 2253:002D
cs=0x2253;eip=0x00002f; 	R(_INT(0x21));	// 73713 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 2253:002F
cs=0x2253;eip=0x000031; 	X(POP(dx));	// 73715 pop     dx ;~ 2253:0031
cs=0x2253;eip=0x000032; 	X(POP(ax));	// 73716 pop     ax ;~ 2253:0032
loc_30b43:
	// 9154 
cs=0x2253;eip=0x000033; 	X(POP(bp));	// 73719 pop     bp ;~ 2253:0033
cs=0x2253;eip=0x000034; 	R(RETF(2));	// 73720 retf    2 ;~ 2253:0034
sub_30b47:
	// 73728 
#undef arg_0
#define arg_0 6
	// 73731 arg_0           = byte ptr  6 ;~ 2253:0037
#undef arg_2
#define arg_2 8
	// 73732 arg_2           = word ptr  8 ;~ 2253:0037
cs=0x2253;eip=0x000037; 	X(PUSH(bp));	// 73734 push    bp ;~ 2253:0037
cs=0x2253;eip=0x000038; 	T(MOV(bp, sp));	// 73735 mov     bp, sp ;~ 2253:0038
cs=0x2253;eip=0x00003a; 	T(MOV(al, *(raddr(ss,bp+arg_0))));	// 73736 mov     al, [bp+arg_0] ;~ 2253:003A
cs=0x2253;eip=0x00003d; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 73737 mov     dx, [bp+arg_2] ;~ 2253:003D
cs=0x2253;eip=0x000040; 	T(MOV(ah, 0x3D));	// 73738 mov     ah, 3Dh ;~ 2253:0040
cs=0x2253;eip=0x000042; 	R(_INT(0x21));	// 73739 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 2253:0042
cs=0x2253;eip=0x000044; 	R(JNC(loc_30b59));	// 73743 jnb     short loc_30B59 ;~ 2253:0044
cs=0x2253;eip=0x000046; 	T(MOV(ax, 0x0FFFF));	// 73744 mov     ax, 0FFFFh ;~ 2253:0046
loc_30b59:
	// 9155 
cs=0x2253;eip=0x000049; 	X(POP(bp));	// 73747 pop     bp ;~ 2253:0049
cs=0x2253;eip=0x00004a; 	R(RETF(4));	// 73748 retf    4 ;~ 2253:004A
sub_30b5d:
	// 73756 
#undef arg_0
#define arg_0 6
	// 73758 arg_0           = word ptr  6 ;~ 2253:004D
cs=0x2253;eip=0x00004d; 	X(PUSH(bp));	// 73760 push    bp ;~ 2253:004D
cs=0x2253;eip=0x00004e; 	T(MOV(bp, sp));	// 73761 mov     bp, sp ;~ 2253:004E
cs=0x2253;eip=0x000050; 	T(XOR(cx, cx));	// 73762 xor     cx, cx ;~ 2253:0050
cs=0x2253;eip=0x000052; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 73763 mov     dx, [bp+arg_0] ;~ 2253:0052
cs=0x2253;eip=0x000055; 	T(MOV(ah, 0x3C));	// 73764 mov     ah, 3Ch ;~ 2253:0055
cs=0x2253;eip=0x000057; 	R(_INT(0x21));	// 73765 int     21h             ; DOS - 2+ - CREATE A FILE WITH HANDLE (CREAT) ;~ 2253:0057
cs=0x2253;eip=0x000059; 	R(JNC(loc_30b6e));	// 73768 jnb     short loc_30B6E ;~ 2253:0059
cs=0x2253;eip=0x00005b; 	T(MOV(ax, 0x0FFFF));	// 73769 mov     ax, 0FFFFh ;~ 2253:005B
loc_30b6e:
	// 9156 
cs=0x2253;eip=0x00005e; 	X(POP(bp));	// 73772 pop     bp ;~ 2253:005E
cs=0x2253;eip=0x00005f; 	R(RETF(2));	// 73773 retf    2 ;~ 2253:005F
sub_30b72:
	// 73781 
#undef arg_0
#define arg_0 6
	// 73784 arg_0           = word ptr  6 ;~ 2253:0062
cs=0x2253;eip=0x000062; 	X(PUSH(bp));	// 73786 push    bp ;~ 2253:0062
cs=0x2253;eip=0x000063; 	T(MOV(bp, sp));	// 73787 mov     bp, sp ;~ 2253:0063
cs=0x2253;eip=0x000065; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_0))));	// 73788 mov     bx, [bp+arg_0] ;~ 2253:0065
cs=0x2253;eip=0x000068; 	T(MOV(ah, 0x3E));	// 73789 mov     ah, 3Eh ;~ 2253:0068
cs=0x2253;eip=0x00006a; 	R(_INT(0x21));	// 73790 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 2253:006A
cs=0x2253;eip=0x00006c; 	X(POP(bp));	// 73792 pop     bp ;~ 2253:006C
cs=0x2253;eip=0x00006d; 	R(RETF(2));	// 73793 retf    2 ;~ 2253:006D
sub_30b80:
	// 73801 
#undef arg_0
#define arg_0 6
	// 73803 arg_0           = word ptr  6 ;~ 2253:0070
cs=0x2253;eip=0x000070; 	X(PUSH(bp));	// 73805 push    bp ;~ 2253:0070
cs=0x2253;eip=0x000071; 	T(MOV(bp, sp));	// 73806 mov     bp, sp ;~ 2253:0071
cs=0x2253;eip=0x000073; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 73807 mov     dx, [bp+arg_0] ;~ 2253:0073
cs=0x2253;eip=0x000076; 	T(MOV(ah, 0x41));	// 73808 mov     ah, 41h ;~ 2253:0076
cs=0x2253;eip=0x000078; 	R(_INT(0x21));	// 73809 int     21h             ; DOS - 2+ - DELETE A FILE (UNLINK) ;~ 2253:0078
cs=0x2253;eip=0x00007a; 	X(POP(bp));	// 73811 pop     bp ;~ 2253:007A
cs=0x2253;eip=0x00007b; 	R(RETF(2));	// 73812 retf    2 ;~ 2253:007B
sub_30b8e:
	// 73820 
#undef arg_0
#define arg_0 6
	// 73823 arg_0           = word ptr  6 ;~ 2253:007E
#undef arg_2
#define arg_2 8
	// 73824 arg_2           = word ptr  8 ;~ 2253:007E
#undef arg_4
#define arg_4 0x0A
	// 73825 arg_4           = word ptr  0Ah ;~ 2253:007E
#undef arg_6
#define arg_6 0x0C
	// 73826 arg_6           = word ptr  0Ch ;~ 2253:007E
cs=0x2253;eip=0x00007e; 	X(PUSH(bp));	// 73828 push    bp ;~ 2253:007E
cs=0x2253;eip=0x00007f; 	T(MOV(bp, sp));	// 73829 mov     bp, sp ;~ 2253:007F
cs=0x2253;eip=0x000081; 	X(PUSH(ds));	// 73830 push    ds ;~ 2253:0081
cs=0x2253;eip=0x000082; 	T(MOV(ah, 0x3F));	// 73831 mov     ah, 3Fh ; '?' ;~ 2253:0082
cs=0x2253;eip=0x000084; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 73832 mov     bx, [bp+arg_6] ;~ 2253:0084
cs=0x2253;eip=0x000087; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 73833 mov     cx, [bp+arg_0] ;~ 2253:0087
cs=0x2253;eip=0x00008a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 73834 mov     dx, [bp+arg_2] ;~ 2253:008A
cs=0x2253;eip=0x00008d; 	T(MOV(ds, *(dw*)(raddr(ss,bp+arg_4))));	// 73835 mov     ds, [bp+arg_4] ;~ 2253:008D
cs=0x2253;eip=0x000090; 	R(_INT(0x21));	// 73836 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 2253:0090
cs=0x2253;eip=0x000092; 	R(JNC(loc_30ba7));	// 73839 jnb     short loc_30BA7 ;~ 2253:0092
cs=0x2253;eip=0x000094; 	T(MOV(ax, 0x0FFFF));	// 73840 mov     ax, 0FFFFh ;~ 2253:0094
loc_30ba7:
	// 9157 
cs=0x2253;eip=0x000097; 	X(POP(ds));	// 73843 pop     ds ;~ 2253:0097
cs=0x2253;eip=0x000098; 	X(POP(bp));	// 73844 pop     bp ;~ 2253:0098
cs=0x2253;eip=0x000099; 	R(RETF(8));	// 73845 retf    8 ;~ 2253:0099
sub_30bac:
	// 73853 
#undef arg_0
#define arg_0 6
	// 73855 arg_0           = word ptr  6 ;~ 2253:009C
#undef arg_2
#define arg_2 8
	// 73856 arg_2           = word ptr  8 ;~ 2253:009C
#undef arg_4
#define arg_4 0x0A
	// 73857 arg_4           = word ptr  0Ah ;~ 2253:009C
#undef arg_6
#define arg_6 0x0C
	// 73858 arg_6           = word ptr  0Ch ;~ 2253:009C
cs=0x2253;eip=0x00009c; 	X(PUSH(bp));	// 73860 push    bp ;~ 2253:009C
cs=0x2253;eip=0x00009d; 	T(MOV(bp, sp));	// 73861 mov     bp, sp ;~ 2253:009D
cs=0x2253;eip=0x00009f; 	X(PUSH(ds));	// 73862 push    ds ;~ 2253:009F
cs=0x2253;eip=0x0000a0; 	T(MOV(ah, 0x40));	// 73863 mov     ah, 40h ; '@' ;~ 2253:00A0
cs=0x2253;eip=0x0000a2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 73864 mov     bx, [bp+arg_6] ;~ 2253:00A2
cs=0x2253;eip=0x0000a5; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_0))));	// 73865 mov     cx, [bp+arg_0] ;~ 2253:00A5
cs=0x2253;eip=0x0000a8; 	T(MOV(ds, *(dw*)(raddr(ss,bp+arg_4))));	// 73866 mov     ds, [bp+arg_4] ;~ 2253:00A8
cs=0x2253;eip=0x0000ab; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_2))));	// 73867 mov     dx, [bp+arg_2] ;~ 2253:00AB
cs=0x2253;eip=0x0000ae; 	R(_INT(0x21));	// 73868 int     21h             ; DOS - 2+ - WRITE TO FILE WITH HANDLE ;~ 2253:00AE
cs=0x2253;eip=0x0000b0; 	R(JNC(loc_30bc5));	// 73870 jnb     short loc_30BC5 ;~ 2253:00B0
cs=0x2253;eip=0x0000b2; 	T(MOV(ax, 0x0FFFF));	// 73871 mov     ax, 0FFFFh ;~ 2253:00B2
loc_30bc5:
	// 9158 
cs=0x2253;eip=0x0000b5; 	X(POP(ds));	// 73874 pop     ds ;~ 2253:00B5
cs=0x2253;eip=0x0000b6; 	X(POP(bp));	// 73875 pop     bp ;~ 2253:00B6
cs=0x2253;eip=0x0000b7; 	R(RETF(8));	// 73876 retf    8 ;~ 2253:00B7
sub_30bca:
	// 73884 
#undef arg_0
#define arg_0 6
	// 73887 arg_0           = word ptr  6 ;~ 2253:00BA
#undef arg_2
#define arg_2 8
	// 73888 arg_2           = word ptr  8 ;~ 2253:00BA
#undef arg_4
#define arg_4 0x0A
	// 73889 arg_4           = byte ptr  0Ah ;~ 2253:00BA
#undef arg_6
#define arg_6 0x0C
	// 73890 arg_6           = word ptr  0Ch ;~ 2253:00BA
cs=0x2253;eip=0x0000ba; 	X(PUSH(bp));	// 73892 push    bp ;~ 2253:00BA
cs=0x2253;eip=0x0000bb; 	T(MOV(bp, sp));	// 73893 mov     bp, sp ;~ 2253:00BB
cs=0x2253;eip=0x0000bd; 	T(MOV(ah, 0x42));	// 73894 mov     ah, 42h ; 'B' ;~ 2253:00BD
cs=0x2253;eip=0x0000bf; 	T(MOV(al, *(raddr(ss,bp+arg_4))));	// 73895 mov     al, [bp+arg_4] ;~ 2253:00BF
cs=0x2253;eip=0x0000c2; 	T(MOV(bx, *(dw*)(raddr(ss,bp+arg_6))));	// 73896 mov     bx, [bp+arg_6] ;~ 2253:00C2
cs=0x2253;eip=0x0000c5; 	T(MOV(cx, *(dw*)(raddr(ss,bp+arg_2))));	// 73897 mov     cx, [bp+arg_2] ;~ 2253:00C5
cs=0x2253;eip=0x0000c8; 	T(MOV(dx, *(dw*)(raddr(ss,bp+arg_0))));	// 73898 mov     dx, [bp+arg_0] ;~ 2253:00C8
cs=0x2253;eip=0x0000cb; 	R(_INT(0x21));	// 73899 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 2253:00CB
cs=0x2253;eip=0x0000cd; 	R(JC(loc_30be5));	// 73902 jb      short loc_30BE5 ;~ 2253:00CD
cs=0x2253;eip=0x0000cf; 	T(XOR(ax, ax));	// 73903 xor     ax, ax ;~ 2253:00CF
cs=0x2253;eip=0x0000d1; 	X(POP(bp));	// 73904 pop     bp ;~ 2253:00D1
cs=0x2253;eip=0x0000d2; 	R(RETF(8));	// 73905 retf    8 ;~ 2253:00D2
loc_30be5:
	// 9159 
cs=0x2253;eip=0x0000d5; 	T(MOV(ax, 0x0FFFF));	// 73909 mov     ax, 0FFFFh ;~ 2253:00D5
cs=0x2253;eip=0x0000d8; 	X(POP(bp));	// 73910 pop     bp ;~ 2253:00D8
cs=0x2253;eip=0x0000d9; 	R(RETF(8));	// 73911 retf    8 ;~ 2253:00D9
seg018_proc:
	// 73915 
cs=0x2253;eip=0x0000dc; 	X(PUSH(bp));	// 73915 push    bp ;~ 2253:00DC
cs=0x2253;eip=0x0000dd; 	T(MOV(bp, sp));	// 73916 mov     bp, sp ;~ 2253:00DD
cs=0x2253;eip=0x0000df; 	X(PUSH(ds));	// 73917 push    ds ;~ 2253:00DF
cs=0x2253;eip=0x0000e0; 	T(MOV(ah, 0x1A));	// 73918 mov     ah, 1Ah ;~ 2253:00E0
cs=0x2253;eip=0x0000e2; 	T(LDS(dx, *(dw*)(raddr(ss,bp+6))));	// 73919 lds     dx, [bp+6] ;~ 2253:00E2
cs=0x2253;eip=0x0000e5; 	R(_INT(0x21));	// 73920 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 2253:00E5
cs=0x2253;eip=0x0000e7; 	X(POP(ds));	// 73922 pop     ds ;~ 2253:00E7
cs=0x2253;eip=0x0000e8; 	X(POP(bp));	// 73923 pop     bp ;~ 2253:00E8
cs=0x2253;eip=0x0000e9; 	R(RETF(0));	// 73924 retf ;~ 2253:00E9
ret_2253_ea:
	// 9160 
cs=0x2253;eip=0x0000ea; 	X(PUSH(bp));	// 73926 push    bp ;~ 2253:00EA
cs=0x2253;eip=0x0000eb; 	T(MOV(bp, sp));	// 73927 mov     bp, sp ;~ 2253:00EB
cs=0x2253;eip=0x0000ed; 	T(MOV(ah, 0x2F));	// 73928 mov     ah, 2Fh ;~ 2253:00ED
cs=0x2253;eip=0x0000ef; 	R(_INT(0x21));	// 73929 int     21h             ; DOS - GET DISK TRANSFER AREA ADDRESS ;~ 2253:00EF
cs=0x2253;eip=0x0000f1; 	T(MOV(bp, *(dw*)(raddr(ss,bp+6))));	// 73931 mov     bp, [bp+6] ;~ 2253:00F1
cs=0x2253;eip=0x0000f4; 	X(MOV(*(dw*)(raddr(ss,bp+0)), es));	// 73932 mov     word ptr [bp+0], es ;~ 2253:00F4
cs=0x2253;eip=0x0000f7; 	X(MOV(*(dw*)(raddr(ss,bp+2)), bx));	// 73933 mov     [bp+2], bx ;~ 2253:00F7
cs=0x2253;eip=0x0000fa; 	X(POP(bp));	// 73934 pop     bp ;~ 2253:00FA
cs=0x2253;eip=0x0000fb; 	R(RETF(0));	// 73935 retf ;~ 2253:00FB
ret_2253_fc:
	// 9161 
cs=0x2253;eip=0x0000fc; 	X(PUSH(bp));	// 73937 push    bp ;~ 2253:00FC
cs=0x2253;eip=0x0000fd; 	T(MOV(bp, sp));	// 73938 mov     bp, sp ;~ 2253:00FD
cs=0x2253;eip=0x0000ff; 	X(PUSH(es));	// 73939 push    es ;~ 2253:00FF
cs=0x2253;eip=0x000100; 	X(PUSH(si));	// 73940 push    si ;~ 2253:0100
cs=0x2253;eip=0x000101; 	X(PUSH(di));	// 73941 push    di ;~ 2253:0101
cs=0x2253;eip=0x000102; 	T(MOV(di, *(dw*)(raddr(ss,bp+6))));	// 73942 mov     di, [bp+6] ;~ 2253:0102
cs=0x2253;eip=0x000105; 	T(MOV(ah, 0x2F));	// 73943 mov     ah, 2Fh ;~ 2253:0105
cs=0x2253;eip=0x000107; 	R(_INT(0x21));	// 73944 int     21h             ; DOS - GET DISK TRANSFER AREA ADDRESS ;~ 2253:0107
cs=0x2253;eip=0x000109; 	T(MOV(si, 0x1E));	// 73946 mov     si, 1Eh ;~ 2253:0109
cs=0x2253;eip=0x00010c; 	T(MOV(cx, 0x0D));	// 73947 mov     cx, 0Dh ;~ 2253:010C
loc_30c1f:
	// 9162 
cs=0x2253;eip=0x00010f; 	T(MOV(al, *(raddr(es,bx+si))));	// 73950 mov     al, es:[bx+si] ;~ 2253:010F
cs=0x2253;eip=0x000112; 	X(MOV(*(raddr(ds,di)), al));	// 73951 mov     [di], al ;~ 2253:0112
cs=0x2253;eip=0x000114; 	T(INC(di));	// 73952 inc     di ;~ 2253:0114
cs=0x2253;eip=0x000115; 	T(INC(si));	// 73953 inc     si ;~ 2253:0115
cs=0x2253;eip=0x000116; 	T(DEC(cx));	// 73954 dec     cx ;~ 2253:0116
cs=0x2253;eip=0x000117; 	R(JZ(loc_30c2d));	// 73955 jz      short loc_30C2D ;~ 2253:0117
cs=0x2253;eip=0x000119; 	T(AND(al, al));	// 73956 and     al, al ;~ 2253:0119
cs=0x2253;eip=0x00011b; 	R(JNZ(loc_30c1f));	// 73957 jnz     short loc_30C1F ;~ 2253:011B
loc_30c2d:
	// 9163 
cs=0x2253;eip=0x00011d; 	X(POP(di));	// 73960 pop     di ;~ 2253:011D
cs=0x2253;eip=0x00011e; 	X(POP(si));	// 73961 pop     si ;~ 2253:011E
cs=0x2253;eip=0x00011f; 	X(POP(es));	// 73962 pop     es ;~ 2253:011F
cs=0x2253;eip=0x000120; 	X(POP(bp));	// 73963 pop     bp ;~ 2253:0120
cs=0x2253;eip=0x000121; 	R(RETF(0));	// 73964 retf ;~ 2253:0121
ret_2253_122:
	// 9164 
cs=0x2253;eip=0x000122; 	X(PUSH(bp));	// 73966 push    bp ;~ 2253:0122
cs=0x2253;eip=0x000123; 	T(MOV(bp, sp));	// 73967 mov     bp, sp ;~ 2253:0123
cs=0x2253;eip=0x000125; 	T(XOR(al, al));	// 73968 xor     al, al ;~ 2253:0125
cs=0x2253;eip=0x000127; 	T(MOV(ah, *(raddr(ss,bp+6))));	// 73969 mov     ah, [bp+6] ;~ 2253:0127
cs=0x2253;eip=0x00012a; 	T(MOV(dx, *(dw*)(raddr(ss,bp+8))));	// 73970 mov     dx, [bp+8] ;~ 2253:012A
cs=0x2253;eip=0x00012d; 	T(MOV(cx, *(dw*)(raddr(ss,bp+0x0A))));	// 73971 mov     cx, [bp+0Ah] ;~ 2253:012D
cs=0x2253;eip=0x000130; 	R(_INT(0x21));	// 73972 int     21h             ; DOS - ;~ 2253:0130
cs=0x2253;eip=0x000132; 	R(JC(loc_30c46));	// 73973 jb      short loc_30C46 ;~ 2253:0132
cs=0x2253;eip=0x000134; 	T(XOR(ax, ax));	// 73974 xor     ax, ax ;~ 2253:0134
loc_30c46:
	// 9165 
cs=0x2253;eip=0x000136; 	X(POP(bp));	// 73977 pop     bp ;~ 2253:0136
cs=0x2253;eip=0x000137; 	R(RETF(0));	// 73978 retf ;~ 2253:0137

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_30b2f: 	goto loc_30b2f;
        case m2c::kloc_30b43: 	goto loc_30b43;
        case m2c::kloc_30b59: 	goto loc_30b59;
        case m2c::kloc_30b6e: 	goto loc_30b6e;
        case m2c::kloc_30ba7: 	goto loc_30ba7;
        case m2c::kloc_30bc5: 	goto loc_30bc5;
        case m2c::kloc_30be5: 	goto loc_30be5;
        case m2c::kloc_30c1f: 	goto loc_30c1f;
        case m2c::kloc_30c2d: 	goto loc_30c2d;
        case m2c::kloc_30c46: 	goto loc_30c46;
        case m2c::kret_2253_122: 	goto ret_2253_122;
        case m2c::kret_2253_ea: 	goto ret_2253_ea;
        case m2c::kret_2253_fc: 	goto ret_2253_fc;
        case m2c::kseg018_proc: 	goto seg018_proc;
        case m2c::ksub_30b18: 	goto sub_30b18;
        case m2c::ksub_30b47: 	goto sub_30b47;
        case m2c::ksub_30b5d: 	goto sub_30b5d;
        case m2c::ksub_30b72: 	goto sub_30b72;
        case m2c::ksub_30b80: 	goto sub_30b80;
        case m2c::ksub_30b8e: 	goto sub_30b8e;
        case m2c::ksub_30bac: 	goto sub_30bac;
        case m2c::ksub_30bca: 	goto sub_30bca;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);m2c::stackDump(_state); abort();
    };
}

