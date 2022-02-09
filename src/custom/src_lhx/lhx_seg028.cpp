/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "lhx.h"

                

 void _group26(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group26:
    _begin:
sub_3d480:
	// 99796 
cs=0x2eea;eip=0x000000; 	X(MOV(word_4ac6c, 0));	// 99798 mov     word_4AC6C, 0 ;~ 2EEA:0000
cs=0x2eea;eip=0x000006; 	R(RETF(0));	// 99799 retf ;~ 2EEA:0006
sub_3d488:
	// 99809 
#undef var_aa
#define var_aa -0x0AA
	// 99811 var_AA          = word ptr -0AAh ;~ 2EEA:0008
#undef var_a8
#define var_a8 -0x0A8
	// 99812 var_A8          = word ptr -0A8h ;~ 2EEA:0008
#undef var_a4
#define var_a4 -0x0A4
	// 99813 var_A4          = word ptr -0A4h ;~ 2EEA:0008
#undef var_a2
#define var_a2 -0x0A2
	// 99814 var_A2          = dword ptr -0A2h ;~ 2EEA:0008
#undef var_9e
#define var_9e -0x9E
	// 99815 var_9E          = byte ptr -9Eh ;~ 2EEA:0008
#undef var_9c
#define var_9c -0x9C
	// 99816 var_9C          = word ptr -9Ch ;~ 2EEA:0008
#undef var_96
#define var_96 -0x96
	// 99817 var_96          = byte ptr -96h ;~ 2EEA:0008
#undef var_46
#define var_46 -0x46
	// 99818 var_46          = byte ptr -46h ;~ 2EEA:0008
#undef var_45
#define var_45 -0x45
	// 99819 var_45          = byte ptr -45h ;~ 2EEA:0008
#undef var_44
#define var_44 -0x44
	// 99820 var_44          = byte ptr -44h ;~ 2EEA:0008
#undef var_43
#define var_43 -0x43
	// 99821 var_43          = byte ptr -43h ;~ 2EEA:0008
#undef var_42
#define var_42 -0x42
	// 99822 var_42          = byte ptr -42h ;~ 2EEA:0008
#undef var_41
#define var_41 -0x41
	// 99823 var_41          = byte ptr -41h ;~ 2EEA:0008
#undef var_40
#define var_40 -0x40
	// 99824 var_40          = byte ptr -40h ;~ 2EEA:0008
#undef var_3f
#define var_3f -0x3F
	// 99825 var_3F          = byte ptr -3Fh ;~ 2EEA:0008
#undef var_3e
#define var_3e -0x3E
	// 99826 var_3E          = byte ptr -3Eh ;~ 2EEA:0008
#undef var_3d
#define var_3d -0x3D
	// 99827 var_3D          = byte ptr -3Dh ;~ 2EEA:0008
#undef var_3c
#define var_3c -0x3C
	// 99828 var_3C          = byte ptr -3Ch ;~ 2EEA:0008
#undef var_3b
#define var_3b -0x3B
	// 99829 var_3B          = byte ptr -3Bh ;~ 2EEA:0008
#undef var_3a
#define var_3a -0x3A
	// 99830 var_3A          = byte ptr -3Ah ;~ 2EEA:0008
#undef var_1b
#define var_1b -0x1B
	// 99831 var_1B          = byte ptr -1Bh ;~ 2EEA:0008
#undef var_1a
#define var_1a -0x1A
	// 99832 var_1A          = word ptr -1Ah ;~ 2EEA:0008
#undef var_18
#define var_18 -0x18
	// 99833 var_18          = word ptr -18h ;~ 2EEA:0008
#undef var_16
#define var_16 -0x16
	// 99834 var_16          = byte ptr -16h ;~ 2EEA:0008
#undef var_15
#define var_15 -0x15
	// 99835 var_15          = byte ptr -15h ;~ 2EEA:0008
#undef var_14
#define var_14 -0x14
	// 99836 var_14          = byte ptr -14h ;~ 2EEA:0008
#undef var_13
#define var_13 -0x13
	// 99837 var_13          = byte ptr -13h ;~ 2EEA:0008
#undef var_12
#define var_12 -0x12
	// 99838 var_12          = byte ptr -12h ;~ 2EEA:0008
#undef var_11
#define var_11 -0x11
	// 99839 var_11          = byte ptr -11h ;~ 2EEA:0008
#undef var_4
#define var_4 -4
	// 99840 var_4           = byte ptr -4 ;~ 2EEA:0008
#undef var_2
#define var_2 -2
	// 99841 var_2           = word ptr -2 ;~ 2EEA:0008
#undef arg_0
#define arg_0 6
	// 99842 arg_0           = word ptr  6 ;~ 2EEA:0008
#undef arg_2
#define arg_2 8
	// 99843 arg_2           = word ptr  8 ;~ 2EEA:0008
cs=0x2eea;eip=0x000008; 	X(PUSH(bp));	// 99845 push    bp ;~ 2EEA:0008
cs=0x2eea;eip=0x000009; 	T(MOV(bp, sp));	// 99846 mov     bp, sp ;~ 2EEA:0009
cs=0x2eea;eip=0x00000b; 	T(SUB(sp, 0x0AA));	// 99847 sub     sp, 0AAh ;~ 2EEA:000B
cs=0x2eea;eip=0x00000f; 	X(PUSH(di));	// 99848 push    di ;~ 2EEA:000F
cs=0x2eea;eip=0x000010; 	X(PUSH(si));	// 99849 push    si ;~ 2EEA:0010
cs=0x2eea;eip=0x000011; 	T(ax = bp+var_9e);	// 99850 lea     ax, [bp+var_9E] ;~ 2EEA:0011
cs=0x2eea;eip=0x000015; 	X(PUSH(ax));	// 99851 push    ax ;~ 2EEA:0015
cs=0x2eea;eip=0x000016; 	T(ax = bp+var_2);	// 99852 lea     ax, [bp+var_2] ;~ 2EEA:0016
cs=0x2eea;eip=0x000019; 	X(PUSH(ax));	// 99853 push    ax ;~ 2EEA:0019
cs=0x2eea;eip=0x00001a; 	R(CALLF(sub_2f0ac,0));	// 99854 call    sub_2F0AC ;~ 2EEA:001A
cs=0x2eea;eip=0x00001f; 	T(ADD(sp, 4));	// 99855 add     sp, 4 ;~ 2EEA:001F
cs=0x2eea;eip=0x000022; 	X(MOV(*(dw*)((&unk_47ac6)), ax));	// 99856 mov     word ptr unk_47AC6, ax ;~ 2EEA:0022
cs=0x2eea;eip=0x000025; 	R(CALLF(sub_3134f,0));	// 99857 call    sub_3134F ;~ 2EEA:0025
cs=0x2eea;eip=0x00002a; 	T(MOV(bx, ax));	// 99858 mov     bx, ax ;~ 2EEA:002A
cs=0x2eea;eip=0x00002c; 	X(PUSH(si));	// 99859 push    si ;~ 2EEA:002C
cs=0x2eea;eip=0x00002d; 	T(MOV(di, bx));	// 99860 mov     di, bx ;~ 2EEA:002D
cs=0x2eea;eip=0x00002f; 	T(si = bp+var_96);	// 99861 lea     si, [bp+var_96] ;~ 2EEA:002F
cs=0x2eea;eip=0x000033; 	T(MOV(ax, ds));	// 99862 mov     ax, ds ;~ 2EEA:0033
cs=0x2eea;eip=0x000035; 	T(MOV(es, ax));	// 99863 mov     es, ax ;~ 2EEA:0035
cs=0x2eea;eip=0x000037; 	T(MOV(cx, 0x0FFFF));	// 99865 mov     cx, 0FFFFh ;~ 2EEA:0037
cs=0x2eea;eip=0x00003a; 	T(XOR(ax, ax));	// 99866 xor     ax, ax ;~ 2EEA:003A
	// 99867 repne scasb ;~ 2EEA:003C
cs=0x2eea;eip=0x00003c; 	T(	REPNE SCASB);	// 99867 repne scasb ;~ 2EEA:003C
cs=0x2eea;eip=0x00003e; 	T(NOT(cx));	// 99868 not     cx ;~ 2EEA:003E
cs=0x2eea;eip=0x000040; 	T(SUB(di, cx));	// 99869 sub     di, cx ;~ 2EEA:0040
cs=0x2eea;eip=0x000042; 	T(XCHG(di, si));	// 99870 xchg    di, si ;~ 2EEA:0042
cs=0x2eea;eip=0x000044; 	T(SHR(cx, 1));	// 99871 shr     cx, 1 ;~ 2EEA:0044
	// 99872 repne movsw ;~ 2EEA:0046
cs=0x2eea;eip=0x000046; 	X(	REPNE MOVSW);	// 99872 repne movsw ;~ 2EEA:0046
cs=0x2eea;eip=0x000048; 	T(ADC(cx, cx));	// 99873 adc     cx, cx ;~ 2EEA:0048
	// 99874 repne movsb ;~ 2EEA:004A
cs=0x2eea;eip=0x00004a; 	X(	REPNE MOVSB);	// 99874 repne movsb ;~ 2EEA:004A
cs=0x2eea;eip=0x00004c; 	X(POP(si));	// 99875 pop     si ;~ 2EEA:004C
cs=0x2eea;eip=0x00004d; 	X(PUSH(si));	// 99876 push    si ;~ 2EEA:004D
cs=0x2eea;eip=0x00004e; 	T(MOV(di, 0x3660));	// 99877 mov     di, 3660h ;~ 2EEA:004E
cs=0x2eea;eip=0x000051; 	T(si = bp+var_96);	// 99878 lea     si, [bp+var_96] ;~ 2EEA:0051
cs=0x2eea;eip=0x000055; 	T(MOV(ax, ds));	// 99879 mov     ax, ds ;~ 2EEA:0055
cs=0x2eea;eip=0x000057; 	T(MOV(cx, 0x0FFFF));	// 99880 mov     cx, 0FFFFh ;~ 2EEA:0057
cs=0x2eea;eip=0x00005a; 	T(XOR(ax, ax));	// 99881 xor     ax, ax ;~ 2EEA:005A
	// 99882 repne scasb ;~ 2EEA:005C
cs=0x2eea;eip=0x00005c; 	T(	REPNE SCASB);	// 99882 repne scasb ;~ 2EEA:005C
cs=0x2eea;eip=0x00005e; 	T(NOT(cx));	// 99883 not     cx ;~ 2EEA:005E
cs=0x2eea;eip=0x000060; 	T(SUB(di, cx));	// 99884 sub     di, cx ;~ 2EEA:0060
cs=0x2eea;eip=0x000062; 	T(MOV(bx, cx));	// 99885 mov     bx, cx ;~ 2EEA:0062
cs=0x2eea;eip=0x000064; 	T(XCHG(di, si));	// 99886 xchg    di, si ;~ 2EEA:0064
cs=0x2eea;eip=0x000066; 	T(MOV(cx, 0x0FFFF));	// 99887 mov     cx, 0FFFFh ;~ 2EEA:0066
	// 99888 repne scasb ;~ 2EEA:0069
cs=0x2eea;eip=0x000069; 	T(	REPNE SCASB);	// 99888 repne scasb ;~ 2EEA:0069
cs=0x2eea;eip=0x00006b; 	T(DEC(di));	// 99889 dec     di ;~ 2EEA:006B
cs=0x2eea;eip=0x00006c; 	T(MOV(cx, bx));	// 99890 mov     cx, bx ;~ 2EEA:006C
cs=0x2eea;eip=0x00006e; 	T(SHR(cx, 1));	// 99891 shr     cx, 1 ;~ 2EEA:006E
	// 99892 repne movsw ;~ 2EEA:0070
cs=0x2eea;eip=0x000070; 	X(	REPNE MOVSW);	// 99892 repne movsw ;~ 2EEA:0070
cs=0x2eea;eip=0x000072; 	T(ADC(cx, cx));	// 99893 adc     cx, cx ;~ 2EEA:0072
	// 99894 repne movsb ;~ 2EEA:0074
cs=0x2eea;eip=0x000074; 	X(	REPNE MOVSB);	// 99894 repne movsb ;~ 2EEA:0074
cs=0x2eea;eip=0x000076; 	X(POP(si));	// 99895 pop     si ;~ 2EEA:0076
cs=0x2eea;eip=0x000077; 	T(ax = bp+var_96);	// 99896 lea     ax, [bp+var_96] ;~ 2EEA:0077
cs=0x2eea;eip=0x00007b; 	X(PUSH(ax));	// 99897 push    ax ;~ 2EEA:007B
cs=0x2eea;eip=0x00007c; 	T(ax = bp+var_4);	// 99898 lea     ax, [bp+var_4] ;~ 2EEA:007C
cs=0x2eea;eip=0x00007f; 	X(PUSH(ax));	// 99899 push    ax ;~ 2EEA:007F
cs=0x2eea;eip=0x000080; 	R(CALLF(sub_30a14,0));	// 99900 call    sub_30A14 ;~ 2EEA:0080
cs=0x2eea;eip=0x000085; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a2))), ax));	// 99901 mov     word ptr [bp+var_A2], ax ;~ 2EEA:0085
cs=0x2eea;eip=0x000089; 	X(MOV(*(dw*)((dw*)(raddr(ss,bp+var_a2+2))), dx));	// 99902 mov     word ptr [bp+var_A2+2], dx ;~ 2EEA:0089
cs=0x2eea;eip=0x00008d; 	T(OR(ax, dx));	// 99903 or      ax, dx ;~ 2EEA:008D
cs=0x2eea;eip=0x00008f; 	R(JNZ(loc_3d514));	// 99904 jnz     short loc_3D514 ;~ 2EEA:008F
cs=0x2eea;eip=0x000091; 	R(JMP(loc_3d5f7));	// 99905 jmp     loc_3D5F7 ;~ 2EEA:0091
loc_3d514:
	// 10728 
cs=0x2eea;eip=0x000094; 	T(LES(bx, *(dd*)(raddr(ss,bp+var_a2))));	// 99909 les     bx, [bp+var_A2] ;~ 2EEA:0094
cs=0x2eea;eip=0x000098; 	T(CMP(*(raddr(es,bx)), 0x0FA));	// 99911 cmp     byte ptr es:[bx], 0FAh ; 'ú' ;~ 2EEA:0098
cs=0x2eea;eip=0x00009c; 	R(JZ(loc_3d521));	// 99912 jz      short loc_3D521 ;~ 2EEA:009C
cs=0x2eea;eip=0x00009e; 	R(JMP(loc_3d5f7));	// 99913 jmp     loc_3D5F7 ;~ 2EEA:009E
loc_3d521:
	// 10729 
cs=0x2eea;eip=0x0000a1; 	X(PUSH(dx));	// 99917 push    dx ;~ 2EEA:00A1
cs=0x2eea;eip=0x0000a2; 	X(PUSH(bx));	// 99918 push    bx ;~ 2EEA:00A2
cs=0x2eea;eip=0x0000a3; 	T(ax = bp+var_46);	// 99919 lea     ax, [bp+var_46] ;~ 2EEA:00A3
cs=0x2eea;eip=0x0000a6; 	X(PUSH(ss));	// 99920 push    ss ;~ 2EEA:00A6
cs=0x2eea;eip=0x0000a7; 	X(PUSH(ax));	// 99921 push    ax ;~ 2EEA:00A7
cs=0x2eea;eip=0x0000a8; 	T(MOV(ax, 0x41));	// 99922 mov     ax, 41h ; 'A' ;~ 2EEA:00A8
cs=0x2eea;eip=0x0000ab; 	X(PUSH(ax));	// 99923 push    ax ;~ 2EEA:00AB
cs=0x2eea;eip=0x0000ac; 	R(CALLF(sub_210f1,0));	// 99924 call    sub_210F1 ;~ 2EEA:00AC
cs=0x2eea;eip=0x0000b1; 	X(PUSH(*(dw*)((dw*)(raddr(ss,bp+var_a2+2)))));	// 99925 push    word ptr [bp+var_A2+2] ;~ 2EEA:00B1
cs=0x2eea;eip=0x0000b5; 	R(CALLF(sub_2397c,0));	// 99926 call    sub_2397C ;~ 2EEA:00B5
cs=0x2eea;eip=0x0000ba; 	T(MOV(al, *(raddr(ss,bp+var_45))));	// 99927 mov     al, [bp+var_45] ;~ 2EEA:00BA
cs=0x2eea;eip=0x0000bd; 	X(MOV(unk_5461a, al));	// 99928 mov     byte ptr unk_5461A, al ;~ 2EEA:00BD
cs=0x2eea;eip=0x0000c0; 	T(MOV(al, *(raddr(ss,bp+var_44))));	// 99929 mov     al, [bp+var_44] ;~ 2EEA:00C0
cs=0x2eea;eip=0x0000c3; 	X(MOV(byte_55204, al));	// 99930 mov     byte_55204, al ;~ 2EEA:00C3
cs=0x2eea;eip=0x0000c6; 	T(MOV(al, *(raddr(ss,bp+var_43))));	// 99931 mov     al, [bp+var_43] ;~ 2EEA:00C6
cs=0x2eea;eip=0x0000c9; 	X(MOV(unk_55212, al));	// 99932 mov     byte ptr unk_55212, al ;~ 2EEA:00C9
cs=0x2eea;eip=0x0000cc; 	T(MOV(al, *(raddr(ss,bp+var_42))));	// 99933 mov     al, [bp+var_42] ;~ 2EEA:00CC
cs=0x2eea;eip=0x0000cf; 	X(MOV(unk_55211, al));	// 99934 mov     byte ptr unk_55211, al ;~ 2EEA:00CF
cs=0x2eea;eip=0x0000d2; 	T(MOV(al, *(raddr(ss,bp+var_41))));	// 99935 mov     al, [bp+var_41] ;~ 2EEA:00D2
cs=0x2eea;eip=0x0000d5; 	T(SUB(ah, ah));	// 99936 sub     ah, ah ;~ 2EEA:00D5
cs=0x2eea;eip=0x0000d7; 	X(PUSH(ax));	// 99937 push    ax ;~ 2EEA:00D7
cs=0x2eea;eip=0x0000d8; 	R(CALLF(sub_31828,0));	// 99938 call    sub_31828 ;~ 2EEA:00D8
cs=0x2eea;eip=0x0000dd; 	T(ADD(sp, 2));	// 99939 add     sp, 2 ;~ 2EEA:00DD
cs=0x2eea;eip=0x0000e0; 	T(MOV(al, *(raddr(ss,bp+var_40))));	// 99940 mov     al, [bp+var_40] ;~ 2EEA:00E0
cs=0x2eea;eip=0x0000e3; 	X(MOV(unk_56fe2, al));	// 99941 mov     byte ptr unk_56FE2, al ;~ 2EEA:00E3
cs=0x2eea;eip=0x0000e6; 	T(MOV(al, *(raddr(ss,bp+var_3c))));	// 99942 mov     al, [bp+var_3C] ;~ 2EEA:00E6
cs=0x2eea;eip=0x0000e9; 	X(MOV(unk_47ac4, al));	// 99943 mov     byte ptr unk_47AC4, al ;~ 2EEA:00E9
cs=0x2eea;eip=0x0000ec; 	T(MOV(al, *(raddr(ss,bp+var_3f))));	// 99944 mov     al, [bp+var_3F] ;~ 2EEA:00EC
cs=0x2eea;eip=0x0000ef; 	X(MOV(unk_47ac2, al));	// 99945 mov     byte ptr unk_47AC2, al ;~ 2EEA:00EF
cs=0x2eea;eip=0x0000f2; 	T(MOV(al, *(raddr(ss,bp+var_3e))));	// 99946 mov     al, [bp+var_3E] ;~ 2EEA:00F2
cs=0x2eea;eip=0x0000f5; 	X(MOV(unk_55206, al));	// 99947 mov     byte ptr unk_55206, al ;~ 2EEA:00F5
cs=0x2eea;eip=0x0000f8; 	T(MOV(al, *(raddr(ss,bp+var_3d))));	// 99948 mov     al, [bp+var_3D] ;~ 2EEA:00F8
cs=0x2eea;eip=0x0000fb; 	X(MOV(unk_47ac3, al));	// 99949 mov     byte ptr unk_47AC3, al ;~ 2EEA:00FB
cs=0x2eea;eip=0x0000fe; 	T(MOV(al, *(raddr(ss,bp+var_3b))));	// 99950 mov     al, [bp+var_3B] ;~ 2EEA:00FE
cs=0x2eea;eip=0x000101; 	X(MOV(unk_56eb2, al));	// 99951 mov     byte ptr unk_56EB2, al ;~ 2EEA:0101
cs=0x2eea;eip=0x000104; 	T(OR(al, al));	// 99952 or      al, al ;~ 2EEA:0104
cs=0x2eea;eip=0x000106; 	R(JZ(loc_3d5a9));	// 99953 jz      short loc_3D5A9 ;~ 2EEA:0106
cs=0x2eea;eip=0x000108; 	X(PUSH(si));	// 99954 push    si ;~ 2EEA:0108
cs=0x2eea;eip=0x000109; 	T(di = bp+var_3a);	// 99955 lea     di, [bp+var_3A] ;~ 2EEA:0109
cs=0x2eea;eip=0x00010c; 	T(MOV(si, 0x0F503));	// 99956 mov     si, 0F503h ;~ 2EEA:010C
cs=0x2eea;eip=0x00010f; 	T(MOV(ax, ss));	// 99957 mov     ax, ss ;~ 2EEA:010F
cs=0x2eea;eip=0x000111; 	T(MOV(es, ax));	// 99958 mov     es, ax ;~ 2EEA:0111
cs=0x2eea;eip=0x000113; 	T(MOV(cx, 0x0FFFF));	// 99959 mov     cx, 0FFFFh ;~ 2EEA:0113
cs=0x2eea;eip=0x000116; 	T(XOR(ax, ax));	// 99960 xor     ax, ax ;~ 2EEA:0116
	// 99961 repne scasb ;~ 2EEA:0118
cs=0x2eea;eip=0x000118; 	T(	REPNE SCASB);	// 99961 repne scasb ;~ 2EEA:0118
cs=0x2eea;eip=0x00011a; 	T(NOT(cx));	// 99962 not     cx ;~ 2EEA:011A
cs=0x2eea;eip=0x00011c; 	T(SUB(di, cx));	// 99963 sub     di, cx ;~ 2EEA:011C
cs=0x2eea;eip=0x00011e; 	T(XCHG(di, si));	// 99964 xchg    di, si ;~ 2EEA:011E
cs=0x2eea;eip=0x000120; 	T(SHR(cx, 1));	// 99965 shr     cx, 1 ;~ 2EEA:0120
	// 99966 repne movsw ;~ 2EEA:0122
cs=0x2eea;eip=0x000122; 	X(	REPNE MOVSW);	// 99966 repne movsw ;~ 2EEA:0122
cs=0x2eea;eip=0x000124; 	T(ADC(cx, cx));	// 99967 adc     cx, cx ;~ 2EEA:0124
	// 99968 repne movsb ;~ 2EEA:0126
cs=0x2eea;eip=0x000126; 	X(	REPNE MOVSB);	// 99968 repne movsb ;~ 2EEA:0126
cs=0x2eea;eip=0x000128; 	X(POP(si));	// 99969 pop     si ;~ 2EEA:0128
loc_3d5a9:
	// 10730 
cs=0x2eea;eip=0x000129; 	T(MOV(al, *(raddr(ss,bp+var_1b))));	// 99972 mov     al, [bp+var_1B] ;~ 2EEA:0129
cs=0x2eea;eip=0x00012c; 	X(MOV(unk_56ed2, al));	// 99973 mov     byte ptr unk_56ED2, al ;~ 2EEA:012C
cs=0x2eea;eip=0x00012f; 	T(MOV(ax, *(dw*)(raddr(ss,bp+var_1a))));	// 99974 mov     ax, [bp+var_1A] ;~ 2EEA:012F
cs=0x2eea;eip=0x000132; 	T(MOV(dx, *(dw*)(raddr(ss,bp+var_18))));	// 99975 mov     dx, [bp+var_18] ;~ 2EEA:0132
cs=0x2eea;eip=0x000135; 	X(MOV(*(dw*)((&unk_56fe7)), ax));	// 99976 mov     word ptr unk_56FE7, ax ;~ 2EEA:0135
cs=0x2eea;eip=0x000138; 	X(MOV(*(dw*)((&unk_56fe9)), dx));	// 99977 mov     word ptr unk_56FE9, dx ;~ 2EEA:0138
cs=0x2eea;eip=0x00013c; 	T(MOV(al, *(raddr(ss,bp+var_16))));	// 99978 mov     al, [bp+var_16] ;~ 2EEA:013C
cs=0x2eea;eip=0x00013f; 	X(MOV(unk_56fec, al));	// 99979 mov     byte ptr unk_56FEC, al ;~ 2EEA:013F
cs=0x2eea;eip=0x000142; 	T(MOV(al, *(raddr(ss,bp+var_15))));	// 99980 mov     al, [bp+var_15] ;~ 2EEA:0142
cs=0x2eea;eip=0x000145; 	X(MOV(unk_56fee, al));	// 99981 mov     byte ptr unk_56FEE, al ;~ 2EEA:0145
cs=0x2eea;eip=0x000148; 	T(MOV(al, *(raddr(ss,bp+var_14))));	// 99982 mov     al, [bp+var_14] ;~ 2EEA:0148
cs=0x2eea;eip=0x00014b; 	X(MOV(unk_56fef, al));	// 99983 mov     byte ptr unk_56FEF, al ;~ 2EEA:014B
cs=0x2eea;eip=0x00014e; 	T(MOV(al, *(raddr(ss,bp+var_13))));	// 99984 mov     al, [bp+var_13] ;~ 2EEA:014E
cs=0x2eea;eip=0x000151; 	X(MOV(unk_57043, al));	// 99985 mov     byte ptr unk_57043, al ;~ 2EEA:0151
cs=0x2eea;eip=0x000154; 	T(MOV(al, *(raddr(ss,bp+var_12))));	// 99986 mov     al, [bp+var_12] ;~ 2EEA:0154
cs=0x2eea;eip=0x000157; 	X(MOV(unk_57042, al));	// 99987 mov     byte ptr unk_57042, al ;~ 2EEA:0157
cs=0x2eea;eip=0x00015a; 	T(ax = bp+var_11);	// 99988 lea     ax, [bp+var_11] ;~ 2EEA:015A
cs=0x2eea;eip=0x00015d; 	X(MOV(*(dw*)(raddr(ss,bp+var_a4)), ax));	// 99989 mov     [bp+var_A4], ax ;~ 2EEA:015D
cs=0x2eea;eip=0x000161; 	T(MOV(cx, 0x0C));	// 99990 mov     cx, 0Ch ;~ 2EEA:0161
cs=0x2eea;eip=0x000164; 	X(PUSH(si));	// 99991 push    si ;~ 2EEA:0164
cs=0x2eea;eip=0x000165; 	T(MOV(di, 0x0F782));	// 99992 mov     di, 0F782h ;~ 2EEA:0165
cs=0x2eea;eip=0x000168; 	T(MOV(si, ax));	// 99993 mov     si, ax ;~ 2EEA:0168
cs=0x2eea;eip=0x00016a; 	X(PUSH(ds));	// 99994 push    ds ;~ 2EEA:016A
cs=0x2eea;eip=0x00016b; 	X(POP(es));	// 99995 pop     es ;~ 2EEA:016B
cs=0x2eea;eip=0x00016c; 	T(SHR(cx, 1));	// 99997 shr     cx, 1 ;~ 2EEA:016C
	// 99998 repne movsw ;~ 2EEA:016E
cs=0x2eea;eip=0x00016e; 	X(	REPNE MOVSW);	// 99998 repne movsw ;~ 2EEA:016E
cs=0x2eea;eip=0x000170; 	T(ADC(cx, cx));	// 99999 adc     cx, cx ;~ 2EEA:0170
	// 100000 repne movsb ;~ 2EEA:0172
cs=0x2eea;eip=0x000172; 	X(	REPNE MOVSB);	// 100000 repne movsb ;~ 2EEA:0172
cs=0x2eea;eip=0x000174; 	X(POP(si));	// 100001 pop     si ;~ 2EEA:0174
cs=0x2eea;eip=0x000175; 	R(JMP(loc_3d662));	// 100002 jmp     short loc_3D662 ;~ 2EEA:0175
loc_3d5f7:
	// 10731 
cs=0x2eea;eip=0x000177; 	T(MOV(al, 0x0FF));	// 100007 mov     al, 0FFh ;~ 2EEA:0177
cs=0x2eea;eip=0x000179; 	X(MOV(byte_55204, al));	// 100008 mov     byte_55204, al ;~ 2EEA:0179
cs=0x2eea;eip=0x00017c; 	X(MOV(unk_5461a, al));	// 100009 mov     byte ptr unk_5461A, al ;~ 2EEA:017C
cs=0x2eea;eip=0x00017f; 	X(MOV(unk_47ac4, 0));	// 100010 mov     byte ptr unk_47AC4, 0 ;~ 2EEA:017F
cs=0x2eea;eip=0x000184; 	X(MOV(unk_55212, al));	// 100011 mov     byte ptr unk_55212, al ;~ 2EEA:0184
cs=0x2eea;eip=0x000187; 	X(MOV(unk_55211, al));	// 100012 mov     byte ptr unk_55211, al ;~ 2EEA:0187
cs=0x2eea;eip=0x00018a; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 0x0F));	// 100013 cmp     [bp+var_2], 0Fh ;~ 2EEA:018A
cs=0x2eea;eip=0x00018e; 	R(JL(loc_3d628));	// 100014 jl      short loc_3D628 ;~ 2EEA:018E
cs=0x2eea;eip=0x000190; 	T(MOV(ax, 2));	// 100015 mov     ax, 2 ;~ 2EEA:0190
cs=0x2eea;eip=0x000193; 	X(PUSH(ax));	// 100016 push    ax ;~ 2EEA:0193
cs=0x2eea;eip=0x000194; 	R(CALLF(sub_31828,0));	// 100017 call    sub_31828 ;~ 2EEA:0194
cs=0x2eea;eip=0x000199; 	T(ADD(sp, 2));	// 100018 add     sp, 2 ;~ 2EEA:0199
cs=0x2eea;eip=0x00019c; 	X(MOV(unk_56fe2, 1));	// 100019 mov     byte ptr unk_56FE2, 1 ;~ 2EEA:019C
cs=0x2eea;eip=0x0001a1; 	X(MOV(unk_47ac4, 1));	// 100020 mov     byte ptr unk_47AC4, 1 ;~ 2EEA:01A1
cs=0x2eea;eip=0x0001a6; 	R(JMP(loc_3d643));	// 100021 jmp     short loc_3D643 ;~ 2EEA:01A6
loc_3d628:
	// 10732 
cs=0x2eea;eip=0x0001a8; 	T(CMP(*(dw*)(raddr(ss,bp+var_2)), 5));	// 100025 cmp     [bp+var_2], 5 ;~ 2EEA:01A8
cs=0x2eea;eip=0x0001ac; 	R(JL(loc_3d633));	// 100026 jl      short loc_3D633 ;~ 2EEA:01AC
cs=0x2eea;eip=0x0001ae; 	T(MOV(ax, 1));	// 100027 mov     ax, 1 ;~ 2EEA:01AE
cs=0x2eea;eip=0x0001b1; 	R(JMP(loc_3d635));	// 100028 jmp     short loc_3D635 ;~ 2EEA:01B1
loc_3d633:
	// 10733 
cs=0x2eea;eip=0x0001b3; 	T(SUB(ax, ax));	// 100032 sub     ax, ax ;~ 2EEA:01B3
loc_3d635:
	// 10734 
cs=0x2eea;eip=0x0001b5; 	X(PUSH(ax));	// 100035 push    ax ;~ 2EEA:01B5
cs=0x2eea;eip=0x0001b6; 	R(CALLF(sub_31828,0));	// 100036 call    sub_31828 ;~ 2EEA:01B6
cs=0x2eea;eip=0x0001bb; 	T(ADD(sp, 2));	// 100037 add     sp, 2 ;~ 2EEA:01BB
cs=0x2eea;eip=0x0001be; 	X(MOV(unk_56fe2, 0));	// 100038 mov     byte ptr unk_56FE2, 0 ;~ 2EEA:01BE
loc_3d643:
	// 10735 
cs=0x2eea;eip=0x0001c3; 	X(MOV(unk_47ac2, 1));	// 100041 mov     byte ptr unk_47AC2, 1 ;~ 2EEA:01C3
cs=0x2eea;eip=0x0001c8; 	X(MOV(unk_55206, 0));	// 100042 mov     byte ptr unk_55206, 0 ;~ 2EEA:01C8
cs=0x2eea;eip=0x0001cd; 	X(MOV(unk_47ac3, 1));	// 100043 mov     byte ptr unk_47AC3, 1 ;~ 2EEA:01CD
cs=0x2eea;eip=0x0001d2; 	X(PUSH(cs));	// 100044 push    cs ;~ 2EEA:01D2
cs=0x2eea;eip=0x0001d3; 	R(CALL(sub_3d981,0));	// 100045 call    near ptr sub_3D981 ;~ 2EEA:01D3
cs=0x2eea;eip=0x0001d6; 	T(MOV(ax, 1));	// 100046 mov     ax, 1 ;~ 2EEA:01D6
cs=0x2eea;eip=0x0001d9; 	X(PUSH(ax));	// 100047 push    ax ;~ 2EEA:01D9
cs=0x2eea;eip=0x0001da; 	R(CALLF(sub_1d0e5,0));	// 100048 call    sub_1D0E5 ;~ 2EEA:01DA
cs=0x2eea;eip=0x0001df; 	T(ADD(sp, 2));	// 100049 add     sp, 2 ;~ 2EEA:01DF
loc_3d662:
	// 10736 
cs=0x2eea;eip=0x0001e2; 	T(MOV(si, 1));	// 100052 mov     si, 1 ;~ 2EEA:01E2
cs=0x2eea;eip=0x0001e5; 	T(CMP(*(dw*)(raddr(ss,bp+arg_0)), si));	// 100053 cmp     [bp+arg_0], si ;~ 2EEA:01E5
cs=0x2eea;eip=0x0001e8; 	R(JLE(loc_3d6e1));	// 100054 jle     short loc_3D6E1 ;~ 2EEA:01E8
cs=0x2eea;eip=0x0001ea; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_2))));	// 100055 mov     ax, [bp+arg_2] ;~ 2EEA:01EA
cs=0x2eea;eip=0x0001ed; 	T(MOV(cx, si));	// 100056 mov     cx, si ;~ 2EEA:01ED
cs=0x2eea;eip=0x0001ef; 	T(SHL(cx, 1));	// 100057 shl     cx, 1 ;~ 2EEA:01EF
cs=0x2eea;eip=0x0001f1; 	T(ADD(ax, cx));	// 100058 add     ax, cx ;~ 2EEA:01F1
cs=0x2eea;eip=0x0001f3; 	X(MOV(*(dw*)(raddr(ss,bp+var_a8)), ax));	// 100059 mov     [bp+var_A8], ax ;~ 2EEA:01F3
cs=0x2eea;eip=0x0001f7; 	T(MOV(ax, *(dw*)(raddr(ss,bp+arg_0))));	// 100060 mov     ax, [bp+arg_0] ;~ 2EEA:01F7
cs=0x2eea;eip=0x0001fa; 	T(DEC(ax));	// 100061 dec     ax ;~ 2EEA:01FA
cs=0x2eea;eip=0x0001fb; 	X(MOV(*(dw*)(raddr(ss,bp+var_aa)), ax));	// 100062 mov     [bp+var_AA], ax ;~ 2EEA:01FB
cs=0x2eea;eip=0x0001ff; 	T(ADD(si, ax));	// 100063 add     si, ax ;~ 2EEA:01FF
loc_3d681:
	// 10737 
cs=0x2eea;eip=0x000201; 	T(MOV(bx, *(dw*)(raddr(ss,bp+var_a8))));	// 100066 mov     bx, [bp+var_A8] ;~ 2EEA:0201
cs=0x2eea;eip=0x000205; 	T(MOV(ax, *(dw*)(raddr(ds,bx))));	// 100067 mov     ax, [bx] ;~ 2EEA:0205
cs=0x2eea;eip=0x000207; 	X(MOV(*(dw*)(raddr(ss,bp+var_9c)), ax));	// 100068 mov     [bp+var_9C], ax ;~ 2EEA:0207
cs=0x2eea;eip=0x00020b; 	T(MOV(di, 0x3668));	// 100069 mov     di, 3668h ;~ 2EEA:020B
cs=0x2eea;eip=0x00020e; 	R(JMP(loc_3d693));	// 100070 jmp     short loc_3D693 ;~ 2EEA:020E
loc_3d690:
	// 10738 
cs=0x2eea;eip=0x000210; 	T(ADD(di, 5));	// 100074 add     di, 5 ;~ 2EEA:0210
loc_3d693:
	// 10739 
cs=0x2eea;eip=0x000213; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 100077 cmp     word ptr [di], 0 ;~ 2EEA:0213
cs=0x2eea;eip=0x000216; 	R(JZ(loc_3d6b2));	// 100078 jz      short loc_3D6B2 ;~ 2EEA:0216
cs=0x2eea;eip=0x000218; 	X(PUSH(*(dw*)(raddr(ds,di))));	// 100079 push    word ptr [di] ;~ 2EEA:0218
cs=0x2eea;eip=0x00021a; 	X(PUSH(*(dw*)(raddr(ss,bp+var_9c))));	// 100080 push    [bp+var_9C] ;~ 2EEA:021A
cs=0x2eea;eip=0x00021e; 	R(CALLF(sub_10454,0));	// 100081 call    sub_10454 ;~ 2EEA:021E
cs=0x2eea;eip=0x000223; 	T(ADD(sp, 4));	// 100082 add     sp, 4 ;~ 2EEA:0223
cs=0x2eea;eip=0x000226; 	T(OR(ax, ax));	// 100083 or      ax, ax ;~ 2EEA:0226
cs=0x2eea;eip=0x000228; 	R(JNZ(loc_3d690));	// 100084 jnz     short loc_3D690 ;~ 2EEA:0228
cs=0x2eea;eip=0x00022a; 	T(MOV(bx, *(dw*)(raddr(ds,di+2))));	// 100085 mov     bx, [di+2] ;~ 2EEA:022A
cs=0x2eea;eip=0x00022d; 	T(MOV(al, *(raddr(ds,di+4))));	// 100086 mov     al, [di+4] ;~ 2EEA:022D
cs=0x2eea;eip=0x000230; 	X(MOV(*(raddr(ds,bx)), al));	// 100087 mov     [bx], al ;~ 2EEA:0230
loc_3d6b2:
	// 10740 
cs=0x2eea;eip=0x000232; 	T(CMP(*(dw*)(raddr(ds,di)), 0));	// 100090 cmp     word ptr [di], 0 ;~ 2EEA:0232
cs=0x2eea;eip=0x000235; 	R(JNZ(loc_3d6d6));	// 100091 jnz     short loc_3D6D6 ;~ 2EEA:0235
cs=0x2eea;eip=0x000237; 	X(PUSH(*(dw*)(raddr(ss,bp+var_9c))));	// 100092 push    [bp+var_9C] ;~ 2EEA:0237
cs=0x2eea;eip=0x00023b; 	T(MOV(ax, 0x361E));	// 100093 mov     ax, 361Eh ;~ 2EEA:023B
cs=0x2eea;eip=0x00023e; 	X(PUSH(ax));	// 100094 push    ax ;~ 2EEA:023E
cs=0x2eea;eip=0x00023f; 	T(ax = bp+var_96);	// 100095 lea     ax, [bp+var_96] ;~ 2EEA:023F
cs=0x2eea;eip=0x000243; 	X(PUSH(ax));	// 100096 push    ax ;~ 2EEA:0243
cs=0x2eea;eip=0x000244; 	R(CALLF(sub_2f1d9,0));	// 100097 call    sub_2F1D9 ;~ 2EEA:0244
cs=0x2eea;eip=0x000249; 	T(ADD(sp, 6));	// 100098 add     sp, 6 ;~ 2EEA:0249
cs=0x2eea;eip=0x00024c; 	T(ax = bp+var_96);	// 100099 lea     ax, [bp+var_96] ;~ 2EEA:024C
cs=0x2eea;eip=0x000250; 	X(PUSH(ax));	// 100100 push    ax ;~ 2EEA:0250
cs=0x2eea;eip=0x000251; 	R(CALLF(sub_2f7e0,0));	// 100101 call    sub_2F7E0 ;~ 2EEA:0251
loc_3d6d6:
	// 10741 
cs=0x2eea;eip=0x000256; 	X(ADD(*(dw*)(raddr(ss,bp+var_a8)), 2));	// 100105 add     [bp+var_A8], 2 ;~ 2EEA:0256
cs=0x2eea;eip=0x00025b; 	X(DEC(*(dw*)(raddr(ss,bp+var_aa))));	// 100106 dec     [bp+var_AA] ;~ 2EEA:025B
cs=0x2eea;eip=0x00025f; 	R(JNZ(loc_3d681));	// 100107 jnz     short loc_3D681 ;~ 2EEA:025F
loc_3d6e1:
	// 10742 
cs=0x2eea;eip=0x000261; 	T(MOV(al, unk_57041));	// 100110 mov     al, byte ptr unk_57041 ;~ 2EEA:0261
cs=0x2eea;eip=0x000264; 	T(SUB(ah, ah));	// 100111 sub     ah, ah ;~ 2EEA:0264
cs=0x2eea;eip=0x000266; 	X(PUSH(ax));	// 100112 push    ax ;~ 2EEA:0266
cs=0x2eea;eip=0x000267; 	R(CALLF(sub_31828,0));	// 100113 call    sub_31828 ;~ 2EEA:0267
cs=0x2eea;eip=0x00026c; 	T(ADD(sp, 2));	// 100114 add     sp, 2 ;~ 2EEA:026C
cs=0x2eea;eip=0x00026f; 	T(MOV(ax, 1));	// 100115 mov     ax, 1 ;~ 2EEA:026F
cs=0x2eea;eip=0x000272; 	T(MOV(cl, unk_5461a));	// 100116 mov     cl, byte ptr unk_5461A ;~ 2EEA:0272
cs=0x2eea;eip=0x000276; 	T(SHL(ax, cl));	// 100117 shl     ax, cl ;~ 2EEA:0276
cs=0x2eea;eip=0x000278; 	T(TEST(*(dw*)((&unk_569c6)), ax));	// 100118 test    word ptr unk_569C6, ax ;~ 2EEA:0278
cs=0x2eea;eip=0x00027c; 	R(JNZ(loc_3d703));	// 100119 jnz     short loc_3D703 ;~ 2EEA:027C
cs=0x2eea;eip=0x00027e; 	X(MOV(unk_5461a, 0x0FF));	// 100120 mov     byte ptr unk_5461A, 0FFh ;~ 2EEA:027E
loc_3d703:
	// 10743 
cs=0x2eea;eip=0x000283; 	T(CMP(byte_55204, 1));	// 100123 cmp     byte_55204, 1 ;~ 2EEA:0283
cs=0x2eea;eip=0x000288; 	R(JNZ(loc_3d713));	// 100124 jnz     short loc_3D713 ;~ 2EEA:0288
cs=0x2eea;eip=0x00028a; 	R(CALLF(sub_2f60c,0));	// 100125 call    sub_2F60C ;~ 2EEA:028A
cs=0x2eea;eip=0x00028f; 	T(OR(ax, ax));	// 100126 or      ax, ax ;~ 2EEA:028F
cs=0x2eea;eip=0x000291; 	R(JLE(loc_3d733));	// 100127 jle     short loc_3D733 ;~ 2EEA:0291
loc_3d713:
	// 10744 
cs=0x2eea;eip=0x000293; 	T(CMP(byte_55204, 3));	// 100130 cmp     byte_55204, 3 ;~ 2EEA:0293
cs=0x2eea;eip=0x000298; 	R(JZ(loc_3d721));	// 100131 jz      short loc_3D721 ;~ 2EEA:0298
cs=0x2eea;eip=0x00029a; 	T(CMP(byte_55204, 4));	// 100132 cmp     byte_55204, 4 ;~ 2EEA:029A
cs=0x2eea;eip=0x00029f; 	R(JNZ(loc_3d738));	// 100133 jnz     short loc_3D738 ;~ 2EEA:029F
loc_3d721:
	// 10745 
cs=0x2eea;eip=0x0002a1; 	T(MOV(al, byte_55204));	// 100136 mov     al, byte_55204 ;~ 2EEA:02A1
cs=0x2eea;eip=0x0002a4; 	T(SUB(ah, ah));	// 100137 sub     ah, ah ;~ 2EEA:02A4
cs=0x2eea;eip=0x0002a6; 	X(PUSH(ax));	// 100138 push    ax ;~ 2EEA:02A6
cs=0x2eea;eip=0x0002a7; 	R(CALLF(sub_3e2aa,0));	// 100139 call    sub_3E2AA ;~ 2EEA:02A7
cs=0x2eea;eip=0x0002ac; 	T(ADD(sp, 2));	// 100140 add     sp, 2 ;~ 2EEA:02AC
cs=0x2eea;eip=0x0002af; 	T(OR(ax, ax));	// 100141 or      ax, ax ;~ 2EEA:02AF
cs=0x2eea;eip=0x0002b1; 	R(JNZ(loc_3d738));	// 100142 jnz     short loc_3D738 ;~ 2EEA:02B1
loc_3d733:
	// 10746 
cs=0x2eea;eip=0x0002b3; 	X(MOV(byte_55204, 0x0FF));	// 100145 mov     byte_55204, 0FFh ;~ 2EEA:02B3
loc_3d738:
	// 10747 
cs=0x2eea;eip=0x0002b8; 	T(CMP(unk_55211, 3));	// 100149 cmp     byte ptr unk_55211, 3 ;~ 2EEA:02B8
cs=0x2eea;eip=0x0002bd; 	R(JNZ(loc_3d746));	// 100150 jnz     short loc_3D746 ;~ 2EEA:02BD
cs=0x2eea;eip=0x0002bf; 	T(TEST(unk_569c6, 0x20));	// 100151 test    byte ptr unk_569C6, 20h ;~ 2EEA:02BF
cs=0x2eea;eip=0x0002c4; 	R(JZ(loc_3d756));	// 100152 jz      short loc_3D756 ;~ 2EEA:02C4
loc_3d746:
	// 10748 
cs=0x2eea;eip=0x0002c6; 	T(CMP(unk_55211, 2));	// 100155 cmp     byte ptr unk_55211, 2 ;~ 2EEA:02C6
cs=0x2eea;eip=0x0002cb; 	R(JNZ(loc_3d75b));	// 100156 jnz     short loc_3D75B ;~ 2EEA:02CB
cs=0x2eea;eip=0x0002cd; 	R(CALLF(sub_3f80e,0));	// 100157 call    sub_3F80E ;~ 2EEA:02CD
cs=0x2eea;eip=0x0002d2; 	T(OR(ax, ax));	// 100158 or      ax, ax ;~ 2EEA:02D2
cs=0x2eea;eip=0x0002d4; 	R(JNZ(loc_3d75b));	// 100159 jnz     short loc_3D75B ;~ 2EEA:02D4
loc_3d756:
	// 10749 
cs=0x2eea;eip=0x0002d6; 	X(MOV(unk_55211, 0x0FF));	// 100162 mov     byte ptr unk_55211, 0FFh ;~ 2EEA:02D6
loc_3d75b:
	// 10750 
cs=0x2eea;eip=0x0002db; 	T(CMP(unk_5461a, 0x0FF));	// 100166 cmp     byte ptr unk_5461A, 0FFh ;~ 2EEA:02DB
cs=0x2eea;eip=0x0002e0; 	R(JNZ(loc_3d7ae));	// 100167 jnz     short loc_3D7AE ;~ 2EEA:02E0
cs=0x2eea;eip=0x0002e2; 	T(TEST(unk_569c6, 2));	// 100168 test    byte ptr unk_569C6, 2 ;~ 2EEA:02E2
cs=0x2eea;eip=0x0002e7; 	R(JZ(loc_3d770));	// 100169 jz      short loc_3D770 ;~ 2EEA:02E7
cs=0x2eea;eip=0x0002e9; 	X(MOV(unk_5461a, 1));	// 100170 mov     byte ptr unk_5461A, 1 ;~ 2EEA:02E9
cs=0x2eea;eip=0x0002ee; 	R(JMP(loc_3d7ae));	// 100171 jmp     short loc_3D7AE ;~ 2EEA:02EE
loc_3d770:
	// 10751 
cs=0x2eea;eip=0x0002f0; 	T(TEST(unk_569c6, 0x10));	// 100175 test    byte ptr unk_569C6, 10h ;~ 2EEA:02F0
cs=0x2eea;eip=0x0002f5; 	R(JZ(loc_3d77e));	// 100176 jz      short loc_3D77E ;~ 2EEA:02F5
cs=0x2eea;eip=0x0002f7; 	X(MOV(unk_5461a, 4));	// 100177 mov     byte ptr unk_5461A, 4 ;~ 2EEA:02F7
cs=0x2eea;eip=0x0002fc; 	R(JMP(loc_3d7ae));	// 100178 jmp     short loc_3D7AE ;~ 2EEA:02FC
loc_3d77e:
	// 10752 
cs=0x2eea;eip=0x0002fe; 	T(TEST(unk_569c6, 0x20));	// 100182 test    byte ptr unk_569C6, 20h ;~ 2EEA:02FE
cs=0x2eea;eip=0x000303; 	R(JZ(loc_3d78c));	// 100183 jz      short loc_3D78C ;~ 2EEA:0303
cs=0x2eea;eip=0x000305; 	X(MOV(unk_5461a, 5));	// 100184 mov     byte ptr unk_5461A, 5 ;~ 2EEA:0305
cs=0x2eea;eip=0x00030a; 	R(JMP(loc_3d7ae));	// 100185 jmp     short loc_3D7AE ;~ 2EEA:030A
loc_3d78c:
	// 10753 
cs=0x2eea;eip=0x00030c; 	T(TEST(unk_569c6, 1));	// 100189 test    byte ptr unk_569C6, 1 ;~ 2EEA:030C
cs=0x2eea;eip=0x000311; 	R(JZ(loc_3d79a));	// 100190 jz      short loc_3D79A ;~ 2EEA:0311
cs=0x2eea;eip=0x000313; 	X(MOV(unk_5461a, 0));	// 100191 mov     byte ptr unk_5461A, 0 ;~ 2EEA:0313
cs=0x2eea;eip=0x000318; 	R(JMP(loc_3d7ae));	// 100192 jmp     short loc_3D7AE ;~ 2EEA:0318
loc_3d79a:
	// 10754 
cs=0x2eea;eip=0x00031a; 	T(MOV(ax, 0x3633));	// 100196 mov     ax, 3633h ;~ 2EEA:031A
cs=0x2eea;eip=0x00031d; 	X(PUSH(ax));	// 100197 push    ax ;~ 2EEA:031D
cs=0x2eea;eip=0x00031e; 	R(CALLF(sub_2f3f8,0));	// 100198 call    sub_2F3F8 ;~ 2EEA:031E
cs=0x2eea;eip=0x000323; 	T(ADD(sp, 2));	// 100199 add     sp, 2 ;~ 2EEA:0323
cs=0x2eea;eip=0x000326; 	T(SUB(ax, ax));	// 100200 sub     ax, ax ;~ 2EEA:0326
cs=0x2eea;eip=0x000328; 	X(PUSH(ax));	// 100201 push    ax ;~ 2EEA:0328
cs=0x2eea;eip=0x000329; 	R(CALLF(sub_2f7e0,0));	// 100202 call    sub_2F7E0 ;~ 2EEA:0329
loc_3d7ae:
	// 10755 
cs=0x2eea;eip=0x00032e; 	T(CMP(byte_55204, 0x0FF));	// 100207 cmp     byte_55204, 0FFh ;~ 2EEA:032E
cs=0x2eea;eip=0x000333; 	R(JNZ(loc_3d7e8));	// 100208 jnz     short loc_3D7E8 ;~ 2EEA:0333
cs=0x2eea;eip=0x000335; 	R(CALLF(sub_2f60c,0));	// 100209 call    sub_2F60C ;~ 2EEA:0335
cs=0x2eea;eip=0x00033a; 	T(OR(ax, ax));	// 100210 or      ax, ax ;~ 2EEA:033A
cs=0x2eea;eip=0x00033c; 	R(JLE(loc_3d7cc));	// 100211 jle     short loc_3D7CC ;~ 2EEA:033C
cs=0x2eea;eip=0x00033e; 	T(TEST(unk_569c6, 0x20));	// 100212 test    byte ptr unk_569C6, 20h ;~ 2EEA:033E
cs=0x2eea;eip=0x000343; 	R(JNZ(loc_3d7cc));	// 100213 jnz     short loc_3D7CC ;~ 2EEA:0343
cs=0x2eea;eip=0x000345; 	X(MOV(byte_55204, 1));	// 100214 mov     byte_55204, 1 ;~ 2EEA:0345
cs=0x2eea;eip=0x00034a; 	R(JMP(loc_3d7e8));	// 100215 jmp     short loc_3D7E8 ;~ 2EEA:034A
loc_3d7cc:
	// 10756 
cs=0x2eea;eip=0x00034c; 	T(MOV(ax, 3));	// 100220 mov     ax, 3 ;~ 2EEA:034C
cs=0x2eea;eip=0x00034f; 	X(PUSH(ax));	// 100221 push    ax ;~ 2EEA:034F
cs=0x2eea;eip=0x000350; 	R(CALLF(sub_3e2aa,0));	// 100222 call    sub_3E2AA ;~ 2EEA:0350
cs=0x2eea;eip=0x000355; 	T(ADD(sp, 2));	// 100223 add     sp, 2 ;~ 2EEA:0355
cs=0x2eea;eip=0x000358; 	T(OR(ax, ax));	// 100224 or      ax, ax ;~ 2EEA:0358
cs=0x2eea;eip=0x00035a; 	R(JZ(loc_3d7e3));	// 100225 jz      short loc_3D7E3 ;~ 2EEA:035A
cs=0x2eea;eip=0x00035c; 	X(MOV(byte_55204, 3));	// 100226 mov     byte_55204, 3 ;~ 2EEA:035C
cs=0x2eea;eip=0x000361; 	R(JMP(loc_3d7e8));	// 100227 jmp     short loc_3D7E8 ;~ 2EEA:0361
loc_3d7e3:
	// 10757 
cs=0x2eea;eip=0x000363; 	X(MOV(byte_55204, 2));	// 100231 mov     byte_55204, 2 ;~ 2EEA:0363
loc_3d7e8:
	// 10758 
cs=0x2eea;eip=0x000368; 	T(CMP(unk_55211, 0x0FF));	// 100235 cmp     byte ptr unk_55211, 0FFh ;~ 2EEA:0368
cs=0x2eea;eip=0x00036d; 	R(JNZ(loc_3d80e));	// 100236 jnz     short loc_3D80E ;~ 2EEA:036D
cs=0x2eea;eip=0x00036f; 	X(MOV(unk_55211, 1));	// 100237 mov     byte ptr unk_55211, 1 ;~ 2EEA:036F
cs=0x2eea;eip=0x000374; 	T(TEST(unk_569c6, 0x20));	// 100238 test    byte ptr unk_569C6, 20h ;~ 2EEA:0374
cs=0x2eea;eip=0x000379; 	R(JZ(loc_3d800));	// 100239 jz      short loc_3D800 ;~ 2EEA:0379
cs=0x2eea;eip=0x00037b; 	X(MOV(unk_55211, 3));	// 100240 mov     byte ptr unk_55211, 3 ;~ 2EEA:037B
loc_3d800:
	// 10759 
cs=0x2eea;eip=0x000380; 	R(CALLF(sub_3f80e,0));	// 100243 call    sub_3F80E ;~ 2EEA:0380
cs=0x2eea;eip=0x000385; 	T(OR(ax, ax));	// 100244 or      ax, ax ;~ 2EEA:0385
cs=0x2eea;eip=0x000387; 	R(JZ(loc_3d80e));	// 100245 jz      short loc_3D80E ;~ 2EEA:0387
cs=0x2eea;eip=0x000389; 	X(MOV(unk_55211, 2));	// 100246 mov     byte ptr unk_55211, 2 ;~ 2EEA:0389
loc_3d80e:
	// 10760 
cs=0x2eea;eip=0x00038e; 	T(MOV(al, unk_5461a));	// 100250 mov     al, byte ptr unk_5461A ;~ 2EEA:038E
cs=0x2eea;eip=0x000391; 	T(SUB(ah, ah));	// 100251 sub     ah, ah ;~ 2EEA:0391
cs=0x2eea;eip=0x000393; 	X(POP(si));	// 100252 pop     si ;~ 2EEA:0393
cs=0x2eea;eip=0x000394; 	X(POP(di));	// 100253 pop     di ;~ 2EEA:0394
cs=0x2eea;eip=0x000395; 	T(MOV(sp, bp));	// 100254 mov     sp, bp ;~ 2EEA:0395
cs=0x2eea;eip=0x000397; 	X(POP(bp));	// 100255 pop     bp ;~ 2EEA:0397
cs=0x2eea;eip=0x000398; 	R(RETF(0));	// 100256 retf ;~ 2EEA:0398
sub_3d819:
	// 100264 
#undef var_94
#define var_94 -0x94
	// 100267 var_94          = byte ptr -94h ;~ 2EEA:0399
#undef var_44
#define var_44 -0x44
	// 100268 var_44          = byte ptr -44h ;~ 2EEA:0399
#undef var_43
#define var_43 -0x43
	// 100269 var_43          = byte ptr -43h ;~ 2EEA:0399
#undef var_42
#define var_42 -0x42
	// 100270 var_42          = byte ptr -42h ;~ 2EEA:0399
#undef var_41
#define var_41 -0x41
	// 100271 var_41          = byte ptr -41h ;~ 2EEA:0399
#undef var_40
#define var_40 -0x40
	// 100272 var_40          = byte ptr -40h ;~ 2EEA:0399
#undef var_3f
#define var_3f -0x3F
	// 100273 var_3F          = byte ptr -3Fh ;~ 2EEA:0399
#undef var_3e
#define var_3e -0x3E
	// 100274 var_3E          = byte ptr -3Eh ;~ 2EEA:0399
#undef var_3d
#define var_3d -0x3D
	// 100275 var_3D          = byte ptr -3Dh ;~ 2EEA:0399
#undef var_3c
#define var_3c -0x3C
	// 100276 var_3C          = byte ptr -3Ch ;~ 2EEA:0399
#undef var_3b
#define var_3b -0x3B
	// 100277 var_3B          = byte ptr -3Bh ;~ 2EEA:0399
#undef var_3a
#define var_3a -0x3A
	// 100278 var_3A          = byte ptr -3Ah ;~ 2EEA:0399
#undef var_39
#define var_39 -0x39
	// 100279 var_39          = byte ptr -39h ;~ 2EEA:0399
#undef var_38
#define var_38 -0x38
	// 100280 var_38          = byte ptr -38h ;~ 2EEA:0399
#undef var_19
#define var_19 -0x19
	// 100281 var_19          = byte ptr -19h ;~ 2EEA:0399
#undef var_18
#define var_18 -0x18
	// 100282 var_18          = word ptr -18h ;~ 2EEA:0399
#undef var_16
#define var_16 -0x16
	// 100283 var_16          = word ptr -16h ;~ 2EEA:0399
#undef var_14
#define var_14 -0x14
	// 100284 var_14          = byte ptr -14h ;~ 2EEA:0399
#undef var_13
#define var_13 -0x13
	// 100285 var_13          = byte ptr -13h ;~ 2EEA:0399
#undef var_12
#define var_12 -0x12
	// 100286 var_12          = byte ptr -12h ;~ 2EEA:0399
#undef var_11
#define var_11 -0x11
	// 100287 var_11          = byte ptr -11h ;~ 2EEA:0399
#undef var_10
#define var_10 -0x10
	// 100288 var_10          = byte ptr -10h ;~ 2EEA:0399
#undef var_f
#define var_f -0x0F
	// 100289 var_F           = byte ptr -0Fh ;~ 2EEA:0399
cs=0x2eea;eip=0x000399; 	X(PUSH(bp));	// 100291 push    bp ;~ 2EEA:0399
cs=0x2eea;eip=0x00039a; 	T(MOV(bp, sp));	// 100292 mov     bp, sp ;~ 2EEA:039A
cs=0x2eea;eip=0x00039c; 	T(SUB(sp, 0x94));	// 100293 sub     sp, 94h ;~ 2EEA:039C
cs=0x2eea;eip=0x0003a0; 	X(PUSH(di));	// 100294 push    di ;~ 2EEA:03A0
cs=0x2eea;eip=0x0003a1; 	X(PUSH(si));	// 100295 push    si ;~ 2EEA:03A1
cs=0x2eea;eip=0x0003a2; 	X(MOV(*(raddr(ss,bp+var_44)), 0x0FA));	// 100296 mov     [bp+var_44], 0FAh ; 'ú' ;~ 2EEA:03A2
cs=0x2eea;eip=0x0003a6; 	T(MOV(al, byte_47b2e));	// 100297 mov     al, byte_47B2E ;~ 2EEA:03A6
cs=0x2eea;eip=0x0003a9; 	X(MOV(*(raddr(ss,bp+var_43)), al));	// 100298 mov     [bp+var_43], al ;~ 2EEA:03A9
cs=0x2eea;eip=0x0003ac; 	T(MOV(al, byte_55204));	// 100299 mov     al, byte_55204 ;~ 2EEA:03AC
cs=0x2eea;eip=0x0003af; 	X(MOV(*(raddr(ss,bp+var_42)), al));	// 100300 mov     [bp+var_42], al ;~ 2EEA:03AF
cs=0x2eea;eip=0x0003b2; 	T(MOV(al, unk_55212));	// 100301 mov     al, byte ptr unk_55212 ;~ 2EEA:03B2
cs=0x2eea;eip=0x0003b5; 	X(MOV(*(raddr(ss,bp+var_41)), al));	// 100302 mov     [bp+var_41], al ;~ 2EEA:03B5
cs=0x2eea;eip=0x0003b8; 	T(MOV(al, unk_55211));	// 100303 mov     al, byte ptr unk_55211 ;~ 2EEA:03B8
cs=0x2eea;eip=0x0003bb; 	X(MOV(*(raddr(ss,bp+var_40)), al));	// 100304 mov     [bp+var_40], al ;~ 2EEA:03BB
cs=0x2eea;eip=0x0003be; 	T(MOV(al, unk_57041));	// 100305 mov     al, byte ptr unk_57041 ;~ 2EEA:03BE
cs=0x2eea;eip=0x0003c1; 	X(MOV(*(raddr(ss,bp+var_3f)), al));	// 100306 mov     [bp+var_3F], al ;~ 2EEA:03C1
cs=0x2eea;eip=0x0003c4; 	T(MOV(al, unk_56fe2));	// 100307 mov     al, byte ptr unk_56FE2 ;~ 2EEA:03C4
cs=0x2eea;eip=0x0003c7; 	X(MOV(*(raddr(ss,bp+var_3e)), al));	// 100308 mov     [bp+var_3E], al ;~ 2EEA:03C7
cs=0x2eea;eip=0x0003ca; 	T(MOV(al, unk_47ac2));	// 100309 mov     al, byte ptr unk_47AC2 ;~ 2EEA:03CA
cs=0x2eea;eip=0x0003cd; 	X(MOV(*(raddr(ss,bp+var_3d)), al));	// 100310 mov     [bp+var_3D], al ;~ 2EEA:03CD
cs=0x2eea;eip=0x0003d0; 	T(MOV(al, unk_55206));	// 100311 mov     al, byte ptr unk_55206 ;~ 2EEA:03D0
cs=0x2eea;eip=0x0003d3; 	X(MOV(*(raddr(ss,bp+var_3c)), al));	// 100312 mov     [bp+var_3C], al ;~ 2EEA:03D3
cs=0x2eea;eip=0x0003d6; 	T(MOV(al, unk_47ac3));	// 100313 mov     al, byte ptr unk_47AC3 ;~ 2EEA:03D6
cs=0x2eea;eip=0x0003d9; 	X(MOV(*(raddr(ss,bp+var_3b)), al));	// 100314 mov     [bp+var_3B], al ;~ 2EEA:03D9
cs=0x2eea;eip=0x0003dc; 	T(MOV(al, unk_47ac4));	// 100315 mov     al, byte ptr unk_47AC4 ;~ 2EEA:03DC
cs=0x2eea;eip=0x0003df; 	X(MOV(*(raddr(ss,bp+var_3a)), al));	// 100316 mov     [bp+var_3A], al ;~ 2EEA:03DF
cs=0x2eea;eip=0x0003e2; 	T(MOV(al, unk_56eb2));	// 100317 mov     al, byte ptr unk_56EB2 ;~ 2EEA:03E2
cs=0x2eea;eip=0x0003e5; 	X(MOV(*(raddr(ss,bp+var_39)), al));	// 100318 mov     [bp+var_39], al ;~ 2EEA:03E5
cs=0x2eea;eip=0x0003e8; 	T(OR(al, al));	// 100319 or      al, al ;~ 2EEA:03E8
cs=0x2eea;eip=0x0003ea; 	R(JZ(loc_3d88d));	// 100320 jz      short loc_3D88D ;~ 2EEA:03EA
cs=0x2eea;eip=0x0003ec; 	X(PUSH(si));	// 100321 push    si ;~ 2EEA:03EC
cs=0x2eea;eip=0x0003ed; 	T(MOV(di, 0x0F503));	// 100322 mov     di, 0F503h ;~ 2EEA:03ED
cs=0x2eea;eip=0x0003f0; 	T(si = bp+var_38);	// 100323 lea     si, [bp+var_38] ;~ 2EEA:03F0
cs=0x2eea;eip=0x0003f3; 	T(MOV(ax, ds));	// 100324 mov     ax, ds ;~ 2EEA:03F3
cs=0x2eea;eip=0x0003f5; 	T(MOV(es, ax));	// 100325 mov     es, ax ;~ 2EEA:03F5
cs=0x2eea;eip=0x0003f7; 	T(MOV(cx, 0x0FFFF));	// 100326 mov     cx, 0FFFFh ;~ 2EEA:03F7
cs=0x2eea;eip=0x0003fa; 	T(XOR(ax, ax));	// 100327 xor     ax, ax ;~ 2EEA:03FA
	// 100328 repne scasb ;~ 2EEA:03FC
cs=0x2eea;eip=0x0003fc; 	T(	REPNE SCASB);	// 100328 repne scasb ;~ 2EEA:03FC
cs=0x2eea;eip=0x0003fe; 	T(NOT(cx));	// 100329 not     cx ;~ 2EEA:03FE
cs=0x2eea;eip=0x000400; 	T(SUB(di, cx));	// 100330 sub     di, cx ;~ 2EEA:0400
cs=0x2eea;eip=0x000402; 	T(XCHG(di, si));	// 100331 xchg    di, si ;~ 2EEA:0402
cs=0x2eea;eip=0x000404; 	T(SHR(cx, 1));	// 100332 shr     cx, 1 ;~ 2EEA:0404
	// 100333 repne movsw ;~ 2EEA:0406
cs=0x2eea;eip=0x000406; 	X(	REPNE MOVSW);	// 100333 repne movsw ;~ 2EEA:0406
cs=0x2eea;eip=0x000408; 	T(ADC(cx, cx));	// 100334 adc     cx, cx ;~ 2EEA:0408
	// 100335 repne movsb ;~ 2EEA:040A
cs=0x2eea;eip=0x00040a; 	X(	REPNE MOVSB);	// 100335 repne movsb ;~ 2EEA:040A
cs=0x2eea;eip=0x00040c; 	X(POP(si));	// 100336 pop     si ;~ 2EEA:040C
loc_3d88d:
	// 10761 
cs=0x2eea;eip=0x00040d; 	T(MOV(al, unk_56ed2));	// 100339 mov     al, byte ptr unk_56ED2 ;~ 2EEA:040D
cs=0x2eea;eip=0x000410; 	X(MOV(*(raddr(ss,bp+var_19)), al));	// 100340 mov     [bp+var_19], al ;~ 2EEA:0410
cs=0x2eea;eip=0x000413; 	T(MOV(ax, *(dw*)((&unk_56fe7))));	// 100341 mov     ax, word ptr unk_56FE7 ;~ 2EEA:0413
cs=0x2eea;eip=0x000416; 	T(MOV(dx, *(dw*)((&unk_56fe9))));	// 100342 mov     dx, word ptr unk_56FE9 ;~ 2EEA:0416
cs=0x2eea;eip=0x00041a; 	X(MOV(*(dw*)(raddr(ss,bp+var_18)), ax));	// 100343 mov     [bp+var_18], ax ;~ 2EEA:041A
cs=0x2eea;eip=0x00041d; 	X(MOV(*(dw*)(raddr(ss,bp+var_16)), dx));	// 100344 mov     [bp+var_16], dx ;~ 2EEA:041D
cs=0x2eea;eip=0x000420; 	T(MOV(al, unk_56fec));	// 100345 mov     al, byte ptr unk_56FEC ;~ 2EEA:0420
cs=0x2eea;eip=0x000423; 	X(MOV(*(raddr(ss,bp+var_14)), al));	// 100346 mov     [bp+var_14], al ;~ 2EEA:0423
cs=0x2eea;eip=0x000426; 	T(MOV(al, unk_56fee));	// 100347 mov     al, byte ptr unk_56FEE ;~ 2EEA:0426
cs=0x2eea;eip=0x000429; 	X(MOV(*(raddr(ss,bp+var_13)), al));	// 100348 mov     [bp+var_13], al ;~ 2EEA:0429
cs=0x2eea;eip=0x00042c; 	T(MOV(al, unk_56fef));	// 100349 mov     al, byte ptr unk_56FEF ;~ 2EEA:042C
cs=0x2eea;eip=0x00042f; 	X(MOV(*(raddr(ss,bp+var_12)), al));	// 100350 mov     [bp+var_12], al ;~ 2EEA:042F
cs=0x2eea;eip=0x000432; 	T(MOV(al, unk_57043));	// 100351 mov     al, byte ptr unk_57043 ;~ 2EEA:0432
cs=0x2eea;eip=0x000435; 	X(MOV(*(raddr(ss,bp+var_11)), al));	// 100352 mov     [bp+var_11], al ;~ 2EEA:0435
cs=0x2eea;eip=0x000438; 	T(MOV(al, unk_57042));	// 100353 mov     al, byte ptr unk_57042 ;~ 2EEA:0438
cs=0x2eea;eip=0x00043b; 	X(MOV(*(raddr(ss,bp+var_10)), al));	// 100354 mov     [bp+var_10], al ;~ 2EEA:043B
cs=0x2eea;eip=0x00043e; 	T(MOV(cx, 0x0C));	// 100355 mov     cx, 0Ch ;~ 2EEA:043E
cs=0x2eea;eip=0x000441; 	X(PUSH(si));	// 100356 push    si ;~ 2EEA:0441
cs=0x2eea;eip=0x000442; 	T(di = bp+var_f);	// 100357 lea     di, [bp+var_F] ;~ 2EEA:0442
cs=0x2eea;eip=0x000445; 	T(MOV(si, 0x0F782));	// 100358 mov     si, 0F782h ;~ 2EEA:0445
cs=0x2eea;eip=0x000448; 	T(MOV(ax, ss));	// 100359 mov     ax, ss ;~ 2EEA:0448
cs=0x2eea;eip=0x00044a; 	T(MOV(es, ax));	// 100360 mov     es, ax ;~ 2EEA:044A
cs=0x2eea;eip=0x00044c; 	T(SHR(cx, 1));	// 100362 shr     cx, 1 ;~ 2EEA:044C
	// 100363 repne movsw ;~ 2EEA:044E
cs=0x2eea;eip=0x00044e; 	X(	REPNE MOVSW);	// 100363 repne movsw ;~ 2EEA:044E
cs=0x2eea;eip=0x000450; 	T(ADC(cx, cx));	// 100364 adc     cx, cx ;~ 2EEA:0450
	// 100365 repne movsb ;~ 2EEA:0452
cs=0x2eea;eip=0x000452; 	X(	REPNE MOVSB);	// 100365 repne movsb ;~ 2EEA:0452
cs=0x2eea;eip=0x000454; 	X(POP(si));	// 100366 pop     si ;~ 2EEA:0454
cs=0x2eea;eip=0x000455; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 100367 mov     word ptr unk_571E7, 0 ;~ 2EEA:0455
cs=0x2eea;eip=0x00045b; 	R(CALLF(sub_3134f,0));	// 100368 call    sub_3134F ;~ 2EEA:045B
cs=0x2eea;eip=0x000460; 	T(MOV(bx, ax));	// 100369 mov     bx, ax ;~ 2EEA:0460
cs=0x2eea;eip=0x000462; 	X(PUSH(si));	// 100370 push    si ;~ 2EEA:0462
cs=0x2eea;eip=0x000463; 	T(MOV(di, bx));	// 100371 mov     di, bx ;~ 2EEA:0463
cs=0x2eea;eip=0x000465; 	T(si = bp+var_94);	// 100372 lea     si, [bp+var_94] ;~ 2EEA:0465
cs=0x2eea;eip=0x000469; 	T(MOV(ax, ds));	// 100373 mov     ax, ds ;~ 2EEA:0469
cs=0x2eea;eip=0x00046b; 	T(MOV(es, ax));	// 100374 mov     es, ax ;~ 2EEA:046B
cs=0x2eea;eip=0x00046d; 	T(MOV(cx, 0x0FFFF));	// 100376 mov     cx, 0FFFFh ;~ 2EEA:046D
cs=0x2eea;eip=0x000470; 	T(XOR(ax, ax));	// 100377 xor     ax, ax ;~ 2EEA:0470
	// 100378 repne scasb ;~ 2EEA:0472
cs=0x2eea;eip=0x000472; 	T(	REPNE SCASB);	// 100378 repne scasb ;~ 2EEA:0472
cs=0x2eea;eip=0x000474; 	T(NOT(cx));	// 100379 not     cx ;~ 2EEA:0474
cs=0x2eea;eip=0x000476; 	T(SUB(di, cx));	// 100380 sub     di, cx ;~ 2EEA:0476
cs=0x2eea;eip=0x000478; 	T(XCHG(di, si));	// 100381 xchg    di, si ;~ 2EEA:0478
cs=0x2eea;eip=0x00047a; 	T(SHR(cx, 1));	// 100382 shr     cx, 1 ;~ 2EEA:047A
	// 100383 repne movsw ;~ 2EEA:047C
cs=0x2eea;eip=0x00047c; 	X(	REPNE MOVSW);	// 100383 repne movsw ;~ 2EEA:047C
cs=0x2eea;eip=0x00047e; 	T(ADC(cx, cx));	// 100384 adc     cx, cx ;~ 2EEA:047E
	// 100385 repne movsb ;~ 2EEA:0480
cs=0x2eea;eip=0x000480; 	X(	REPNE MOVSB);	// 100385 repne movsb ;~ 2EEA:0480
cs=0x2eea;eip=0x000482; 	X(POP(si));	// 100386 pop     si ;~ 2EEA:0482
cs=0x2eea;eip=0x000483; 	X(PUSH(si));	// 100387 push    si ;~ 2EEA:0483
cs=0x2eea;eip=0x000484; 	T(MOV(di, 0x3660));	// 100388 mov     di, 3660h ;~ 2EEA:0484
cs=0x2eea;eip=0x000487; 	T(si = bp+var_94);	// 100389 lea     si, [bp+var_94] ;~ 2EEA:0487
cs=0x2eea;eip=0x00048b; 	T(MOV(ax, ds));	// 100390 mov     ax, ds ;~ 2EEA:048B
cs=0x2eea;eip=0x00048d; 	T(MOV(cx, 0x0FFFF));	// 100391 mov     cx, 0FFFFh ;~ 2EEA:048D
cs=0x2eea;eip=0x000490; 	T(XOR(ax, ax));	// 100392 xor     ax, ax ;~ 2EEA:0490
	// 100393 repne scasb ;~ 2EEA:0492
cs=0x2eea;eip=0x000492; 	T(	REPNE SCASB);	// 100393 repne scasb ;~ 2EEA:0492
cs=0x2eea;eip=0x000494; 	T(NOT(cx));	// 100394 not     cx ;~ 2EEA:0494
cs=0x2eea;eip=0x000496; 	T(SUB(di, cx));	// 100395 sub     di, cx ;~ 2EEA:0496
cs=0x2eea;eip=0x000498; 	T(MOV(bx, cx));	// 100396 mov     bx, cx ;~ 2EEA:0498
cs=0x2eea;eip=0x00049a; 	T(XCHG(di, si));	// 100397 xchg    di, si ;~ 2EEA:049A
cs=0x2eea;eip=0x00049c; 	T(MOV(cx, 0x0FFFF));	// 100398 mov     cx, 0FFFFh ;~ 2EEA:049C
	// 100399 repne scasb ;~ 2EEA:049F
cs=0x2eea;eip=0x00049f; 	T(	REPNE SCASB);	// 100399 repne scasb ;~ 2EEA:049F
cs=0x2eea;eip=0x0004a1; 	T(DEC(di));	// 100400 dec     di ;~ 2EEA:04A1
cs=0x2eea;eip=0x0004a2; 	T(MOV(cx, bx));	// 100401 mov     cx, bx ;~ 2EEA:04A2
cs=0x2eea;eip=0x0004a4; 	T(SHR(cx, 1));	// 100402 shr     cx, 1 ;~ 2EEA:04A4
	// 100403 repne movsw ;~ 2EEA:04A6
cs=0x2eea;eip=0x0004a6; 	X(	REPNE MOVSW);	// 100403 repne movsw ;~ 2EEA:04A6
cs=0x2eea;eip=0x0004a8; 	T(ADC(cx, cx));	// 100404 adc     cx, cx ;~ 2EEA:04A8
	// 100405 repne movsb ;~ 2EEA:04AA
cs=0x2eea;eip=0x0004aa; 	X(	REPNE MOVSB);	// 100405 repne movsb ;~ 2EEA:04AA
cs=0x2eea;eip=0x0004ac; 	X(POP(si));	// 100406 pop     si ;~ 2EEA:04AC
cs=0x2eea;eip=0x0004ad; 	T(ax = bp+var_94);	// 100407 lea     ax, [bp+var_94] ;~ 2EEA:04AD
cs=0x2eea;eip=0x0004b1; 	X(PUSH(ax));	// 100408 push    ax ;~ 2EEA:04B1
cs=0x2eea;eip=0x0004b2; 	R(CALLF(sub_30b5d,0));	// 100409 call    sub_30B5D ;~ 2EEA:04B2
cs=0x2eea;eip=0x0004b7; 	T(MOV(si, ax));	// 100410 mov     si, ax ;~ 2EEA:04B7
cs=0x2eea;eip=0x0004b9; 	T(INC(ax));	// 100411 inc     ax ;~ 2EEA:04B9
cs=0x2eea;eip=0x0004ba; 	R(JZ(loc_3d975));	// 100412 jz      short loc_3D975 ;~ 2EEA:04BA
cs=0x2eea;eip=0x0004bc; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 100413 cmp     word ptr unk_571E7, 0 ;~ 2EEA:04BC
cs=0x2eea;eip=0x0004c1; 	R(JNZ(loc_3d975));	// 100414 jnz     short loc_3D975 ;~ 2EEA:04C1
cs=0x2eea;eip=0x0004c3; 	X(PUSH(si));	// 100415 push    si ;~ 2EEA:04C3
cs=0x2eea;eip=0x0004c4; 	T(ax = bp+var_44);	// 100416 lea     ax, [bp+var_44] ;~ 2EEA:04C4
cs=0x2eea;eip=0x0004c7; 	X(PUSH(ss));	// 100417 push    ss ;~ 2EEA:04C7
cs=0x2eea;eip=0x0004c8; 	X(PUSH(ax));	// 100418 push    ax ;~ 2EEA:04C8
cs=0x2eea;eip=0x0004c9; 	T(MOV(ax, 0x41));	// 100419 mov     ax, 41h ; 'A' ;~ 2EEA:04C9
cs=0x2eea;eip=0x0004cc; 	X(PUSH(ax));	// 100420 push    ax ;~ 2EEA:04CC
cs=0x2eea;eip=0x0004cd; 	R(CALLF(sub_30bac,0));	// 100421 call    sub_30BAC ;~ 2EEA:04CD
cs=0x2eea;eip=0x0004d2; 	T(CMP(ax, 0x41));	// 100422 cmp     ax, 41h ; 'A' ;~ 2EEA:04D2
cs=0x2eea;eip=0x0004d5; 	R(JNZ(loc_3d95e));	// 100423 jnz     short loc_3D95E ;~ 2EEA:04D5
cs=0x2eea;eip=0x0004d7; 	T(CMP(*(dw*)((&unk_571e7)), 0));	// 100424 cmp     word ptr unk_571E7, 0 ;~ 2EEA:04D7
cs=0x2eea;eip=0x0004dc; 	R(JZ(loc_3d96f));	// 100425 jz      short loc_3D96F ;~ 2EEA:04DC
loc_3d95e:
	// 10762 
cs=0x2eea;eip=0x0004de; 	X(PUSH(si));	// 100428 push    si ;~ 2EEA:04DE
cs=0x2eea;eip=0x0004df; 	R(CALLF(sub_30b72,0));	// 100429 call    sub_30B72 ;~ 2EEA:04DF
cs=0x2eea;eip=0x0004e4; 	T(MOV(ax, 0x3660));	// 100430 mov     ax, 3660h ;~ 2EEA:04E4
cs=0x2eea;eip=0x0004e7; 	X(PUSH(ax));	// 100431 push    ax ;~ 2EEA:04E7
cs=0x2eea;eip=0x0004e8; 	R(CALLF(sub_30b80,0));	// 100432 call    sub_30B80 ;~ 2EEA:04E8
cs=0x2eea;eip=0x0004ed; 	R(JMP(loc_3d975));	// 100433 jmp     short loc_3D975 ;~ 2EEA:04ED
loc_3d96f:
	// 10763 
cs=0x2eea;eip=0x0004ef; 	X(PUSH(si));	// 100437 push    si ;~ 2EEA:04EF
cs=0x2eea;eip=0x0004f0; 	R(CALLF(sub_30b72,0));	// 100438 call    sub_30B72 ;~ 2EEA:04F0
loc_3d975:
	// 10764 
cs=0x2eea;eip=0x0004f5; 	X(MOV(*(dw*)((&unk_571e7)), 0));	// 100442 mov     word ptr unk_571E7, 0 ;~ 2EEA:04F5
cs=0x2eea;eip=0x0004fb; 	X(POP(si));	// 100443 pop     si ;~ 2EEA:04FB
cs=0x2eea;eip=0x0004fc; 	X(POP(di));	// 100444 pop     di ;~ 2EEA:04FC
cs=0x2eea;eip=0x0004fd; 	T(MOV(sp, bp));	// 100445 mov     sp, bp ;~ 2EEA:04FD
cs=0x2eea;eip=0x0004ff; 	X(POP(bp));	// 100446 pop     bp ;~ 2EEA:04FF
cs=0x2eea;eip=0x000500; 	R(RETF(0));	// 100447 retf ;~ 2EEA:0500
sub_3d981:
	// 100454 
cs=0x2eea;eip=0x000501; 	X(MOV(unk_56eb3, 0));	// 100456 mov     byte ptr unk_56EB3, 0 ;~ 2EEA:0501
cs=0x2eea;eip=0x000506; 	X(MOV(unk_56eb2, 0));	// 100457 mov     byte ptr unk_56EB2, 0 ;~ 2EEA:0506
cs=0x2eea;eip=0x00050b; 	X(MOV(unk_56ed2, 0));	// 100458 mov     byte ptr unk_56ED2, 0 ;~ 2EEA:050B
cs=0x2eea;eip=0x000510; 	T(SUB(ax, ax));	// 100459 sub     ax, ax ;~ 2EEA:0510
cs=0x2eea;eip=0x000512; 	X(MOV(*(dw*)((&unk_56fe9)), ax));	// 100460 mov     word ptr unk_56FE9, ax ;~ 2EEA:0512
cs=0x2eea;eip=0x000515; 	X(MOV(*(dw*)((&unk_56fe7)), ax));	// 100461 mov     word ptr unk_56FE7, ax ;~ 2EEA:0515
cs=0x2eea;eip=0x000518; 	X(MOV(unk_56fec, 0));	// 100462 mov     byte ptr unk_56FEC, 0 ;~ 2EEA:0518
cs=0x2eea;eip=0x00051d; 	X(MOV(unk_56fee, 0));	// 100463 mov     byte ptr unk_56FEE, 0 ;~ 2EEA:051D
cs=0x2eea;eip=0x000522; 	X(MOV(unk_56fef, 0));	// 100464 mov     byte ptr unk_56FEF, 0 ;~ 2EEA:0522
cs=0x2eea;eip=0x000527; 	X(MOV(unk_57043, 0));	// 100465 mov     byte ptr unk_57043, 0 ;~ 2EEA:0527
cs=0x2eea;eip=0x00052c; 	X(MOV(unk_57042, 2));	// 100466 mov     byte ptr unk_57042, 2 ;~ 2EEA:052C
cs=0x2eea;eip=0x000531; 	R(RETF(0));	// 100467 retf ;~ 2EEA:0531

    assert(0);
    __dispatch_call:
#ifdef DOSBOX
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return;}  // Jumping to BIOS
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
#endif
    switch (__disp) {
        case m2c::kloc_3d514: 	goto loc_3d514;
        case m2c::kloc_3d521: 	goto loc_3d521;
        case m2c::kloc_3d5a9: 	goto loc_3d5a9;
        case m2c::kloc_3d5f7: 	goto loc_3d5f7;
        case m2c::kloc_3d628: 	goto loc_3d628;
        case m2c::kloc_3d633: 	goto loc_3d633;
        case m2c::kloc_3d635: 	goto loc_3d635;
        case m2c::kloc_3d643: 	goto loc_3d643;
        case m2c::kloc_3d662: 	goto loc_3d662;
        case m2c::kloc_3d681: 	goto loc_3d681;
        case m2c::kloc_3d690: 	goto loc_3d690;
        case m2c::kloc_3d693: 	goto loc_3d693;
        case m2c::kloc_3d6b2: 	goto loc_3d6b2;
        case m2c::kloc_3d6d6: 	goto loc_3d6d6;
        case m2c::kloc_3d6e1: 	goto loc_3d6e1;
        case m2c::kloc_3d703: 	goto loc_3d703;
        case m2c::kloc_3d713: 	goto loc_3d713;
        case m2c::kloc_3d721: 	goto loc_3d721;
        case m2c::kloc_3d733: 	goto loc_3d733;
        case m2c::kloc_3d738: 	goto loc_3d738;
        case m2c::kloc_3d746: 	goto loc_3d746;
        case m2c::kloc_3d756: 	goto loc_3d756;
        case m2c::kloc_3d75b: 	goto loc_3d75b;
        case m2c::kloc_3d770: 	goto loc_3d770;
        case m2c::kloc_3d77e: 	goto loc_3d77e;
        case m2c::kloc_3d78c: 	goto loc_3d78c;
        case m2c::kloc_3d79a: 	goto loc_3d79a;
        case m2c::kloc_3d7ae: 	goto loc_3d7ae;
        case m2c::kloc_3d7cc: 	goto loc_3d7cc;
        case m2c::kloc_3d7e3: 	goto loc_3d7e3;
        case m2c::kloc_3d7e8: 	goto loc_3d7e8;
        case m2c::kloc_3d800: 	goto loc_3d800;
        case m2c::kloc_3d80e: 	goto loc_3d80e;
        case m2c::kloc_3d88d: 	goto loc_3d88d;
        case m2c::kloc_3d95e: 	goto loc_3d95e;
        case m2c::kloc_3d96f: 	goto loc_3d96f;
        case m2c::kloc_3d975: 	goto loc_3d975;
        case m2c::ksub_3d480: 	goto sub_3d480;
        case m2c::ksub_3d488: 	goto sub_3d488;
        case m2c::ksub_3d819: 	goto sub_3d819;
        case m2c::ksub_3d981: 	goto sub_3d981;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, _source);m2c::stackDump(_state); abort();
    };
}

