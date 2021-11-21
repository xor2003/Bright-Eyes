/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */
#include <algorithm>
#include <iterator>

#include "blaster2_.h"
#include <curses.h>

//namespace c:\inertia_player\examples\demos\blaster\blaster2_ {
namespace m2c{ m2cf* _ENTRY_POINT_ = &start;}


 void sub_102ea(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_102ea, _state);}

 void sub_128cb(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_128cb, _state);}

 void sub_10424(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_10424, _state);}

 void sub_129a0(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_129a0, _state);}

 void sub_12b25(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_12b25, _state);}

 void sub_1053f(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_1053f, _state);}

 void sub_12984(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_12984, _state);}

 void sub_106b3(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_106b3, _state);}

 void sub_12897(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_12897, _state);}

 void sub_12b43(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_12b43, _state);}

 void sub_102a3(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_102a3, _state);}

 void sub_10309(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_10309, _state);}

 void sub_10303(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_10303, _state);}

 void sub_102f6(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_102f6, _state);}

 void sub_1066e(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_1066e, _state);}

 void sub_102fd(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_102fd, _state);}

 void sub_10255(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_10255, _state);}

 void sub_12b0c(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_12b0c, _state);}

 void mainproc(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::kmainproc, _state);}

 void sub_12966(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_12966, _state);}

 void sub_10697(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_10697, _state);}

 void sub_102d3(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_102d3, _state);}

 void start(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::kstart, _state);}

 void sub_12890(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_12890, _state);}

 void sub_10549(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_10549, _state);}

 void sub_128b4(m2c::_offsets, struct m2c::_STATE* _state){_group1(m2c::ksub_128b4, _state);}

#include "bios.h"
#include "callback.h"

static Bitu myINT8_Handler(void) {
struct m2c::_STATE* _state=0;
    X86_REGREF
printf("cool!\n");
cs=0x192;eip=0x00064e; 	// 4420 
cs=0x192;eip=0x00064e; 	R(CLI);	// 886 cli
cs=0x192;eip=0x00064f; 	R(PUSH(ax));	// 887 push    ax
cs=0x192;eip=0x000650; 	R(MOV(al, 0x20));	// 888 mov     al, 20h ; ' '
cs=0x192;eip=0x000652; 	R(OUT(0x20, al));	// 889 out     20h, al         ; Interrupt controller, 8259A.
	cs=seg_offset(_text);
cs=0x192;eip=0x000654; 	R(INC(*(dw*)(((db*)&word_17bde))));	// 890 inc     cs:word_17BDE
cs=0x192;eip=0x000659; __disp=m2c::ksub_129a0;
	R(CALL(_group1));	// 891 call    sub_129A0
cs=0x192;eip=0x00065c; 	R(POP(ax));	// 892 pop     ax
return CBRET_NONE;
}

 void _group1(m2c::_offsets _i, struct m2c::_STATE* _state){
    _group1:
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _begin:
mainproc:
cs=0x192;eip=0x00064e; loc_1065e:	// 4420 
cs=0x192;eip=0x00064e; 	R(CLI);	// 886 cli
cs=0x192;eip=0x00064f; 	R(PUSH(ax));	// 887 push    ax
cs=0x192;eip=0x000650; 	R(MOV(al, 0x20));	// 888 mov     al, 20h ; ' '
cs=0x192;eip=0x000652; 	R(OUT(0x20, al));	// 889 out     20h, al         ; Interrupt controller, 8259A.
	cs=seg_offset(_text);
cs=0x192;eip=0x000654; 	R(INC(*(dw*)(((db*)&word_17bde))));	// 890 inc     cs:word_17BDE
cs=0x192;eip=0x000659; __disp=m2c::ksub_129a0;
	R(CALL(_group1));	// 891 call    sub_129A0
cs=0x192;eip=0x00065c; 	R(POP(ax));	// 892 pop     ax
cs=0x192;eip=0x00065d; 	R(IRET);	// 893 iret
cs=0x192;eip=0x002ae6; adlend:	// 4443 
cs=0x192;eip=0x002ae6; 	R(XOR(*(dw*)(raddr(ss,bp+di)), ax));	// 2250 xor     [bp+di], ax
cs=0x192;eip=0x002ae8; 	R(ADD(*(dw*)(raddr(ds,bx+si)), ax));	// 2251 add     [bx+si], ax
__disp=m2c::kstart;
	R(CALL(_group1));
start:	// 14 
cs=0x192;eip=0x000100; 		R(JMP(loc_10173));	// 15 jmp     short loc_10173
cs=0x192;eip=0x000163; loc_10173:	// 4369 
cs=0x192;eip=0x000163; 	R(MOV(ax, cs));	// 22 mov     ax, cs
cs=0x192;eip=0x000165; 	R(MOV(es, ax));	// 23 mov     es, ax
cs=0x192;eip=0x000167; 	R(MOV(dx, ax));	// 25 mov     dx, ax
cs=0x192;eip=0x000169; 	R(CMP(ax, 0x7000));	// 26 cmp     ax, 7000h
cs=0x192;eip=0x00016c; 		R(JNC(loc_10197));	// 27 jnb     short loc_10197
cs=0x192;eip=0x00016e; 	R(ADD(ax, 0x1000));	// 28 add     ax, 1000h
cs=0x192;eip=0x000171; 	R(MOV(ss, ax));	// 29 mov     ss, ax
cs=0x192;eip=0x000173; 	R(MOV(sp, 0x0FFFE));	// 31 mov     sp, 0FFFEh
cs=0x192;eip=0x000176; 	bx = 0;AFFECT_ZFifz(0); AFFECT_SF(bx,0);	// 32 xor     bx, bx
cs=0x192;eip=0x000178; 	R(MOV(ax, 0x1A00));	// 33 mov     ax, 1A00h
cs=0x192;eip=0x00017b; 	R(_INT(0x10));	// 34 int     10h             ; - VIDEO - DISPLAY COMBINATION (PS,VGA/MCGA): read display combination code
cs=0x192;eip=0x00017d; 	R(CMP(bl, 7));	// 35 cmp     bl, 7
cs=0x192;eip=0x000180; 		R(JC(loc_10197));	// 36 jb      short loc_10197
cs=0x192;eip=0x000182; 	R(CMP(bl, 0x0D));	// 37 cmp     bl, 0Dh
cs=0x192;eip=0x000185; 		R(JC(loc_101a3));	// 38 jb      short loc_101A3
cs=0x192;eip=0x000187; loc_10197:	// 4370 
cs=0x192;eip=0x000187; 	R(MOV(dx, offset(_text,mpuend)));	// 42 mov     dx, offset MpuEnd ; "This intro requires 196Kb free and a VG"...
cs=0x192;eip=0x00018a; loc_1019a:	// 4371 
cs=0x192;eip=0x00018a; 	R(MOV(ah, 9));	// 45 mov     ah, 9
cs=0x192;eip=0x00018c; 	R(_INT(0x21));	// 46 int     21h             ; DOS - PRINT STRING
cs=0x192;eip=0x00018e; 	R(MOV(ax, 0x4C00));	// 48 mov     ax, 4C00h
cs=0x192;eip=0x000191; 	R(_INT(0x21));	// 49 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT)
cs=0x192;eip=0x000193; loc_101a3:	// 4372 
cs=0x192;eip=0x000193; 	R(CLD);	// 53 cld
cs=0x192;eip=0x000194; __disp=m2c::ksub_10255;
	R(CALL(_group1));	// 54 call    sub_10255
cs=0x192;eip=0x000197; 	R(MOV(di, offset(_text,dataend)));	// 55 mov     di, offset DataEnd
cs=0x192;eip=0x00019a; 	R(MOV(cx, 0x277C));	// 56 mov     cx, 277Ch
cs=0x192;eip=0x00019e; 	ax = 0;AFFECT_ZFifz(0); AFFECT_SF(ax,0);	// 58 xor     ax, ax
cs=0x192;eip=0x0001a0; 	REP STOSB;	// 59 rep stosb
cs=0x192;eip=0x0001a2; 	R(MOV(dx, ss));	// 60 mov     dx, ss
cs=0x192;eip=0x0001a4; 	R(MOV(es, dx));	// 61 mov     es, dx
cs=0x192;eip=0x0001a6; 	di = 0;AFFECT_ZFifz(0); AFFECT_SF(di,0);	// 63 xor     di, di
cs=0x192;eip=0x0001a8; 	R(MOV(cx, 0x7F00));	// 64 mov     cx, 7F00h
cs=0x192;eip=0x0001ab; 	REP STOSW;	// 65 rep stosw
cs=0x192;eip=0x0001ad; 	R(MOV(dx, cs));	// 66 mov     dx, cs
cs=0x192;eip=0x0001af; 	R(MOV(es, dx));	// 67 mov     es, dx
cs=0x192;eip=0x0001b1; 	R(MOV(di, offset(_text,word_17be4)));	// 69 mov     di, offset word_17BE4
cs=0x192;eip=0x0001b4; 	R(MOV(cx, 0x1E0));	// 70 mov     cx, 1E0h
cs=0x192;eip=0x0001b7; loc_101c7:	// 4373 
cs=0x192;eip=0x0001b7; STOSW;	// 73 stosw
cs=0x192;eip=0x0001b8; 	R(ADD(ax, 0x50));	// 74 add     ax, 50h ; 'P'
cs=0x192;eip=0x0001bb; 		R(LOOP(loc_101c7));	// 75 loop    loc_101C7
cs=0x192;eip=0x0001bd; 	R(MOV(bl, 0x2B));	// 76 mov     bl, 2Bh ; '+'
cs=0x192;eip=0x0001c1; 	R(MOV(di, offset(_text,word_15472)));	// 79 mov     di, offset word_15472
cs=0x192;eip=0x0001c4; 	R(MOV(si, offset(_text,byte_15072)));	// 80 mov     si, offset byte_15072
cs=0x192;eip=0x0001c7; 	R(MOV(ax, offset(_text,fontbeg)));	// 81 mov     ax, offset FontBeg
cs=0x192;eip=0x0001ca; loc_101da:	// 4374 
cs=0x192;eip=0x0001ca; STOSW;	// 84 stosw
cs=0x192;eip=0x0001cb; 	cx = 0;AFFECT_ZFifz(0); AFFECT_SF(cx,0);	// 85 xor     cx, cx
cs=0x192;eip=0x0001cd; 	R(MOV(cl, *(raddr(ds,si))));	// 86 mov     cl, [si]
cs=0x192;eip=0x0001cf; 	R(INC(si));	// 87 inc     si
cs=0x192;eip=0x0001d0; loc_101e0:	// 4375 
//cs=0x192;eip=0x0001d0; 	R(ADD(ax, 0x0C));	// 90 add     ax, 0Ch
//cs=0x192;eip=0x0001d3; 		R(LOOP(loc_101e0));	// 91 loop    loc_101E0
cs=0x192;eip=0x0001d0; 	ADD(ax, 0x0C);	// 90 add     ax, 0Ch
cs=0x192;eip=0x0001d3; 		LOOP(loc_101e0);	// 91 loop    loc_101E0

cs=0x192;eip=0x0001d5; 	R(DEC(bl));	// 92 dec     bl
cs=0x192;eip=0x0001d7; 		R(JNZ(loc_101da));	// 93 jnz     short loc_101DA
cs=0x192;eip=0x0001d9; 	R(MOV(es, word_150a3));	// 94 mov     es, word_150A3
cs=0x192;eip=0x0001dd; 	di = 0;AFFECT_ZFifz(0); AFFECT_SF(di,0);	// 96 xor     di, di
cs=0x192;eip=0x0001df; 	R(MOV(cx, 0x4B00));	// 97 mov     cx, 4B00h
cs=0x192;eip=0x0001e2; 	ax = 0;AFFECT_ZFifz(0); AFFECT_SF(ax,0);	// 98 xor     ax, ax
cs=0x192;eip=0x0001e4; 	REP STOSW;	// 99 rep stosw
cs=0x192;eip=0x0001e6; 	R(DEC(ax));	// 100 dec     ax
cs=0x192;eip=0x0001e7; 	R(MOV(cx, 0x0F0));	// 101 mov     cx, 0F0h
cs=0x192;eip=0x0001ea; loc_101fa:	// 4376 
cs=0x192;eip=0x0001ea; 	R(MOV(*(dw*)(raddr(ss,di)), ax));	// 104 mov     ss:[di], ax
cs=0x192;eip=0x0001ed; STOSW;	// 105 stosw
cs=0x192;eip=0x0001ee; 		R(LOOP(loc_101fa));	// 106 loop    loc_101FA
cs=0x192;eip=0x0001f0; __disp=m2c::ksub_10549;
	R(CALL(_group1));	// 107 call    sub_10549
cs=0x192;eip=0x0001f3; __disp=m2c::ksub_12b25;
	R(CALL(_group1));	// 108 call    sub_12B25
cs=0x192;eip=0x0001f6; __disp=m2c::ksub_128b4;
	R(CALL(_group1));	// 109 call    sub_128B4
cs=0x192;eip=0x0001f9; __disp=m2c::ksub_12966;
	R(CALL(_group1));	// 110 call    sub_12966
cs=0x192;eip=0x0001fc; __disp=m2c::ksub_1066e;
	R(CALL(_group1));	// 111 call    sub_1066E
cs=0x192;eip=0x0001ff; loc_1020f:	// 4377 
cs=0x192;eip=0x0001ff; 	R(MOV(ax, 0x1234));	// 115 mov     ax, 1234h
cs=0x192;eip=0x000202; loc_10212:	// 4378 
cs=0x192;eip=0x000202; 	R(CMP(ax, word_17bde));	// 118 cmp     ax, word_17BDE
cs=0x192;eip=0x000206; 		R(JZ(loc_10212));	// 119 jz      short loc_10212
cs=0x192;eip=0x000208; 	R(MOV(ax, word_17bde));	// 120 mov     ax, word_17BDE
cs=0x192;eip=0x00020b; 	R(MOV(*(dw*)(raddr(cs,m2c::kloc_1020f+1)), ax));	// 121 mov     word ptr cs:loc_1020F+1, ax
cs=0x192;eip=0x00020f; __disp=m2c::ksub_10309;
	R(CALL(_group1));	// 122 call    sub_10309
cs=0x192;eip=0x000212; __disp=m2c::ksub_10424;
	R(CALL(_group1));	// 123 call    sub_10424
cs=0x192;eip=0x000215; __disp=m2c::ksub_10424;
	R(CALL(_group1));	// 124 call    sub_10424
cs=0x192;eip=0x000218; __disp=m2c::ksub_10424;
	R(CALL(_group1));	// 125 call    sub_10424
cs=0x192;eip=0x00021b; 	ax = 0;AFFECT_ZFifz(0); AFFECT_SF(ax,0);	// 126 xor     ax, ax
cs=0x192;eip=0x00021d; 	R(MOV(es, ax));	// 127 mov     es, ax
cs=0x192;eip=0x00021f; 	R(MOV(ax, *(dw*)(raddr(es,0x41A))));	// 129 mov     ax, es:41Ah
cs=0x192;eip=0x000223; 	R(CMP(ax, *(dw*)(raddr(es,0x41C))));	// 130 cmp     ax, es:41Ch
cs=0x192;eip=0x000228; 		R(JZ(loc_1020f));	// 131 jz      short loc_1020F
cs=0x192;eip=0x00022a; 	ax = 0;AFFECT_ZFifz(0); AFFECT_SF(ax,0);	// 132 xor     ax, ax
cs=0x192;eip=0x00022c; 	R(_INT(0x16));	// 133 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY
cs=0x192;eip=0x00022e; __disp=m2c::ksub_10697;
	R(CALL(_group1));	// 135 call    sub_10697
cs=0x192;eip=0x000231; __disp=m2c::ksub_106b3;
	R(CALL(_group1));	// 136 call    sub_106B3
cs=0x192;eip=0x000234; __disp=m2c::ksub_128b4;
	R(CALL(_group1));	// 137 call    sub_128B4
cs=0x192;eip=0x000237; __disp=m2c::ksub_12b25;
	R(CALL(_group1));	// 138 call    sub_12B25
cs=0x192;eip=0x00023a; 	R(MOV(ax, 3));	// 139 mov     ax, 3
cs=0x192;eip=0x00023d; 	R(_INT(0x10));	// 140 int     10h             ; - VIDEO - SET VIDEO MODE
cs=0x192;eip=0x00023f; 	R(MOV(dx, offset(_text,mpuend)+0x30));	// 142 mov     dx, (offset MpuEnd+30h) ; "For hearing this intro's music you must"...
cs=0x192;eip=0x000242; 		R(JMP(loc_1019a));	// 143 jmp     loc_1019A
sub_10255:	// 150 
cs=0x192;eip=0x000245; 	R(MOV(ax, 0x11));	// 151 mov     ax, 11h
cs=0x192;eip=0x000248; 	R(_INT(0x10));	// 152 int     10h             ; - VIDEO - SET VIDEO MODE

for(int i=0;i<0xffff;i++) mem_writeb(0xa0000+i,0xA5);
ah=2;
R(_INT(0x16));

cs=0x192;eip=0x00024a; 	R(CLI);	// 154 cli
cs=0x192;eip=0x00024b; 	R(MOV(dx, 0x3DA));	// 155 mov     dx, 3DAh
cs=0x192;eip=0x00024e; 	R(IN(al, dx));	// 156 in      al, dx          ; Video status bits:
cs=0x192;eip=0x00024f; 	R(MOV(dx, 0x3C0));	// 161 mov     dx, 3C0h
cs=0x192;eip=0x000252; 	R(MOV(al, 0x10));	// 162 mov     al, 10h
cs=0x192;eip=0x000254; 	R(OUT(dx, al));	// 163 out     dx, al          ; EGA: mode control bits:
cs=0x192;eip=0x000255; 	R(INC(dx));	// 169 inc     dx
cs=0x192;eip=0x000256; 	R(IN(al, dx));	// 170 in      al, dx
cs=0x192;eip=0x000257; 	R(DEC(dx));	// 171 dec     dx
cs=0x192;eip=0x000258; 	R(MOV(ah, al));	// 172 mov     ah, al
cs=0x192;eip=0x00025a; 	R(MOV(dx, 0x3DA));	// 173 mov     dx, 3DAh
cs=0x192;eip=0x00025d; 	R(IN(al, dx));	// 174 in      al, dx          ; Video status bits:
cs=0x192;eip=0x00025e; 	R(MOV(dx, 0x3C0));	// 179 mov     dx, 3C0h
cs=0x192;eip=0x000261; 	R(MOV(al, 0x10));	// 180 mov     al, 10h
cs=0x192;eip=0x000263; 	R(OUT(dx, al));	// 181 out     dx, al          ; EGA: mode control bits:
cs=0x192;eip=0x000264; 	R(MOV(al, ah));	// 187 mov     al, ah
cs=0x192;eip=0x000266; 	R(OR(al, 0x80));	// 188 or      al, 80h
cs=0x192;eip=0x000268; 	R(OUT(dx, al));	// 189 out     dx, al          ; EGA: palette register: select colors for attribute AL:
cs=0x192;eip=0x000269; 	R(MOV(al, 0x14));	// 196 mov     al, 14h
cs=0x192;eip=0x00026b; 	R(OUT(dx, al));	// 197 out     dx, al          ; EGA: unknown data port
cs=0x192;eip=0x00026c; 	al = 0;AFFECT_ZFifz(0); AFFECT_SF(al,0);	// 198 xor     al, al
cs=0x192;eip=0x00026e; 	R(OUT(dx, al));	// 199 out     dx, al          ; EGA: palette register: select colors for attribute AL:
cs=0x192;eip=0x00026f; 	R(MOV(cx, 0x10));	// 206 mov     cx, 10h
cs=0x192;eip=0x000272; 	al = 0;AFFECT_ZFifz(0); AFFECT_SF(al,0);	// 207 xor     al, al
cs=0x192;eip=0x000274; loc_10284:	// 4379 
cs=0x192;eip=0x000274; 	R(OUT(dx, al));	// 210 out     dx, al          ; EGA: palette register: select colors for attribute AL:
cs=0x192;eip=0x000275; 	R(OUT(dx, al));	// 217 out     dx, al          ; EGA: palette register: select colors for attribute AL:
cs=0x192;eip=0x000276; 	R(INC(al));	// 224 inc     al
cs=0x192;eip=0x000278; 		R(LOOP(loc_10284));	// 225 loop    loc_10284
cs=0x192;eip=0x00027a; 	R(MOV(al, 0x34));	// 226 mov     al, 34h ; '4'
cs=0x192;eip=0x00027c; 	R(OUT(dx, al));	// 227 out     dx, al          ; EGA: unknown data port
cs=0x192;eip=0x00027d; 	al = 0;AFFECT_ZFifz(0); AFFECT_SF(al,0);	// 228 xor     al, al
cs=0x192;eip=0x00027f; 	R(OUT(dx, al));	// 229 out     dx, al          ; EGA: palette register: select colors for attribute AL:
cs=0x192;eip=0x000280; 	R(MOV(cx, 0x30));	// 236 mov     cx, 30h ; '0'
cs=0x192;eip=0x000283; 	R(MOV(dx, 0x3C8));	// 237 mov     dx, 3C8h
cs=0x192;eip=0x000286; 	al = 0;AFFECT_ZFifz(0); AFFECT_SF(al,0);	// 238 xor     al, al
cs=0x192;eip=0x000288; 	R(OUT(dx, al));	// 239 out     dx, al
cs=0x192;eip=0x000289; 	R(INC(dx));	// 240 inc     dx
cs=0x192;eip=0x00028a; 	R(MOV(si, offset(_text,asc_1303b)+3));	// 241 mov     si, (offset asc_1303B+3) ; ""
cs=0x192;eip=0x00028d; loc_1029d:	// 4380 
cs=0x192;eip=0x00028d; LODSB;	// 244 lodsb
cs=0x192;eip=0x00028e; 	R(OUT(dx, al));	// 245 out     dx, al
cs=0x192;eip=0x00028f; 		R(LOOP(loc_1029d));	// 246 loop    loc_1029D
cs=0x192;eip=0x000291; 	R(STI);	// 247 sti
cs=0x192;eip=0x000292; 	R(RETN);	// 248 retn
sub_102a3:	// 255 
cs=0x192;eip=0x000293; 	R(MOV(ax, fontend));	// 257 mov     ax, FontEnd
cs=0x192;eip=0x000296; 	R(MOV(bx, word_1509f));	// 258 mov     bx, word_1509F
cs=0x192;eip=0x00029a; 	R(MOV(bp, word_150a1));	// 259 mov     bp, word_150A1
cs=0x192;eip=0x00029e; 	R(ADD(ax, 0x0A137));	// 260 add     ax, 0A137h
cs=0x192;eip=0x0002a1; 	R(ADD(bx, 0x63F7));	// 261 add     bx, 63F7h
cs=0x192;eip=0x0002a5; 	R(ADD(bp, 0x784A));	// 262 add     bp, 784Ah
cs=0x192;eip=0x0002a9; 	R(ROL(ax, 1));	// 263 rol     ax, 1
cs=0x192;eip=0x0002ab; 	R(ROL(ax, 1));	// 264 rol     ax, 1
cs=0x192;eip=0x0002ad; 	R(MOV(fontend, ax));	// 265 mov     FontEnd, ax
cs=0x192;eip=0x0002b0; 	R(ADD(bx, ax));	// 266 add     bx, ax
cs=0x192;eip=0x0002b2; 	R(ROR(bx, 1));	// 267 ror     bx, 1
cs=0x192;eip=0x0002b4; 	R(MOV(word_1509f, bx));	// 268 mov     word_1509F, bx
cs=0x192;eip=0x0002b8; 	R(SUB(bp, bx));	// 269 sub     bp, bx
cs=0x192;eip=0x0002ba; 	R(XOR(ax, bp));	// 270 xor     ax, bp
cs=0x192;eip=0x0002bc; 	R(MOV(word_150a1, bp));	// 271 mov     word_150A1, bp
cs=0x192;eip=0x0002c0; 	R(ADD(ax, bx));	// 272 add     ax, bx
cs=0x192;eip=0x0002c2; 	R(RETN);	// 273 retn
sub_102d3:	// 280 
cs=0x192;eip=0x0002c3; __disp=m2c::ksub_102a3;
	R(CALL(_group1));	// 282 call    sub_102A3
cs=0x192;eip=0x0002c6; 	R(OR(ax, ax));	// 283 or      ax, ax
cs=0x192;eip=0x0002c8; 		R(JZ(sub_102d3));	// 284 jz      short sub_102D3
cs=0x192;eip=0x0002ca; loc_102da:	// 4381 
cs=0x192;eip=0x0002ca; 	R(TEST(al, 3));	// 287 test    al, 3
cs=0x192;eip=0x0002cc; 		R(JNZ(loc_102e6));	// 288 jnz     short loc_102E6
cs=0x192;eip=0x0002ce; 	R(SHR(ax, 1));	// 289 shr     ax, 1
cs=0x192;eip=0x0002d0; 	R(SHR(ax, 1));	// 290 shr     ax, 1
cs=0x192;eip=0x0002d2; 		R(JZ(sub_102d3));	// 291 jz      short sub_102D3
cs=0x192;eip=0x0002d4; 		R(JMP(loc_102da));	// 292 jmp     short loc_102DA
cs=0x192;eip=0x0002d6; loc_102e6:	// 4382 
cs=0x192;eip=0x0002d6; 	R(AND(ax, 3));	// 296 and     ax, 3
cs=0x192;eip=0x0002d9; 	R(RETN);	// 297 retn
sub_102ea:	// 304 
cs=0x192;eip=0x0002da; __disp=m2c::ksub_102a3;
	R(CALL(_group1));	// 306 call    sub_102A3
cs=0x192;eip=0x0002dd; 	R(AND(ax, 0x3FF));	// 307 and     ax, 3FFh
cs=0x192;eip=0x0002e0; 	R(CMP(ax, 0x280));	// 308 cmp     ax, 280h
cs=0x192;eip=0x0002e3; 		R(JNC(sub_102ea));	// 309 jnb     short sub_102EA
cs=0x192;eip=0x0002e5; 	R(RETN);	// 310 retn
sub_102f6:	// 317 
cs=0x192;eip=0x0002e6; 	R(AND(al, al));	// 318 and     al, al
cs=0x192;eip=0x0002e8; 		R(JS(sub_10303));	// 319 js      short sub_10303
cs=0x192;eip=0x0002ea; 		R(JNZ(sub_102fd));	// 320 jnz     short sub_102FD
cs=0x192;eip=0x0002ec; 	R(RETN);	// 321 retn
sub_102fd:	// 328 
cs=0x192;eip=0x0002ed; 	R(ROR(ah, 1));	// 330 ror     ah, 1
cs=0x192;eip=0x0002ef; 	R(ADC(di, 0));	// 331 adc     di, 0
cs=0x192;eip=0x0002f2; 	R(RETN);	// 332 retn
sub_10303:	// 339 
cs=0x192;eip=0x0002f3; 	R(ROL(ah, 1));	// 341 rol     ah, 1
cs=0x192;eip=0x0002f5; 	R(SBB(di, 0));	// 342 sbb     di, 0
cs=0x192;eip=0x0002f8; 	R(RETN);	// 343 retn
sub_10309:	// 350 
cs=0x192;eip=0x0002f9; 	R(MOV(es, word_150a3));	// 351 mov     es, word_150A3
cs=0x192;eip=0x0002fd; 	R(MOV(si, offset(_text,byte_154ce)));	// 353 mov     si, offset byte_154CE
cs=0x192;eip=0x000300; 	R(MOV(word_154cc, 0));	// 354 mov     word_154CC, 0
cs=0x192;eip=0x000306; 	R(MOV(ax, word_154ca));	// 355 mov     ax, word_154CA
cs=0x192;eip=0x000309; 	R(ADD(ax, 1));	// 356 add     ax, 1
cs=0x192;eip=0x00030c; 	R(CMP(ax, 0x7D0));	// 357 cmp     ax, 7D0h
cs=0x192;eip=0x00030f; 		R(JC(loc_10324));	// 358 jb      short loc_10324
cs=0x192;eip=0x000311; 	R(MOV(ax, 0x7D0));	// 359 mov     ax, 7D0h
cs=0x192;eip=0x000314; loc_10324:	// 4383 
cs=0x192;eip=0x000314; 	R(MOV(word_154ca, ax));	// 362 mov     word_154CA, ax
cs=0x192;eip=0x000317; 	R(MOV(word_154c8, ax));	// 363 mov     word_154C8, ax
cs=0x192;eip=0x00031a; 	R(MOV(dx, 0x3CE));	// 364 mov     dx, 3CEh
cs=0x192;eip=0x00031d; 	R(MOV(al, 4));	// 365 mov     al, 4
cs=0x192;eip=0x00031f; 	R(OUT(dx, al));	// 366 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x000320; 	R(INC(dx));	// 369 inc     dx
cs=0x192;eip=0x000321; 	R(MOV(al, 3));	// 370 mov     al, 3
cs=0x192;eip=0x000323; 	R(OUT(dx, al));	// 371 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x000324; 	R(DEC(dx));	// 372 dec     dx
cs=0x192;eip=0x000325; 	R(MOV(al, 5));	// 373 mov     al, 5
cs=0x192;eip=0x000327; 	R(OUT(dx, al));	// 374 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x000328; 	R(INC(dx));	// 381 inc     dx
cs=0x192;eip=0x000329; 	R(IN(al, dx));	// 382 in      al, dx          ; EGA port: graphics controller data register
cs=0x192;eip=0x00032a; 	R(AND(al, 0x0FC));	// 383 and     al, 0FCh
cs=0x192;eip=0x00032c; 	R(OUT(dx, al));	// 384 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x00032d; 	R(DEC(dx));	// 385 dec     dx
cs=0x192;eip=0x00032e; 	R(MOV(al, 8));	// 386 mov     al, 8
cs=0x192;eip=0x000330; 	R(OUT(dx, al));	// 387 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x000331; 	R(INC(dx));	// 390 inc     dx
cs=0x192;eip=0x000332; 	R(MOV(al, 0x0FF));	// 391 mov     al, 0FFh
cs=0x192;eip=0x000334; 	R(OUT(dx, al));	// 392 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x000335; 	R(MOV(dx, 0x3C4));	// 393 mov     dx, 3C4h
cs=0x192;eip=0x000338; 	R(MOV(al, 2));	// 394 mov     al, 2
cs=0x192;eip=0x00033a; 	R(OUT(dx, al));	// 395 out     dx, al          ; EGA: sequencer address reg
cs=0x192;eip=0x00033b; 	R(INC(dx));	// 397 inc     dx
cs=0x192;eip=0x00033c; 	R(MOV(al, 8));	// 398 mov     al, 8
cs=0x192;eip=0x00033e; 	R(OUT(dx, al));	// 399 out     dx, al          ; EGA port: sequencer data register
cs=0x192;eip=0x00033f; loc_1034f:	// 4384 
cs=0x192;eip=0x00033f; 	R(MOV(al, *(raddr(ds,si+3))));	// 402 mov     al, [si+3]
cs=0x192;eip=0x000342; 	R(OR(al, al));	// 403 or      al, al
cs=0x192;eip=0x000344; 		R(JNZ(loc_1038b));	// 404 jnz     short loc_1038B
cs=0x192;eip=0x000346; 	R(CMP(word_154cc, 0x0A));	// 405 cmp     word_154CC, 0Ah
cs=0x192;eip=0x00034b; 		R(JC(loc_10360));	// 406 jb      short loc_10360
cs=0x192;eip=0x00034d; 		R(JMP(loc_10411));	// 407 jmp     loc_10411
cs=0x192;eip=0x000350; loc_10360:	// 4385 
cs=0x192;eip=0x000350; __disp=m2c::ksub_102ea;
	R(CALL(_group1));	// 411 call    sub_102EA
cs=0x192;eip=0x000353; 	R(MOV(cl, al));	// 412 mov     cl, al
cs=0x192;eip=0x000355; 	R(AND(cl, 7));	// 413 and     cl, 7
cs=0x192;eip=0x000358; 	R(MOV(bl, 0x80));	// 414 mov     bl, 80h
cs=0x192;eip=0x00035a; 	R(SHR(bl, cl));	// 415 shr     bl, cl
cs=0x192;eip=0x00035c; 	R(MOV(*(raddr(ds,si+2)), bl));	// 416 mov     [si+2], bl
cs=0x192;eip=0x00035f; 	R(MOV(cl, 3));	// 417 mov     cl, 3
cs=0x192;eip=0x000361; 	R(SHR(ax, cl));	// 418 shr     ax, cl
cs=0x192;eip=0x000363; 	R(MOV(*(dw*)(raddr(ds,si)), ax));	// 419 mov     [si], ax
cs=0x192;eip=0x000365; __disp=m2c::ksub_102a3;
	R(CALL(_group1));	// 420 call    sub_102A3
cs=0x192;eip=0x000368; 	R(AND(ax, 3));	// 421 and     ax, 3
cs=0x192;eip=0x00036b; 	R(INC(al));	// 422 inc     al
cs=0x192;eip=0x00036d; 	R(ADD(al, al));	// 423 add     al, al
cs=0x192;eip=0x00036f; 	R(MOV(*(raddr(ds,si+3)), al));	// 424 mov     [si+3], al
cs=0x192;eip=0x000372; 	ax = 0;AFFECT_ZFifz(0); AFFECT_SF(ax,0);	// 425 xor     ax, ax
cs=0x192;eip=0x000374; 	R(MOV(*(raddr(ds,si+4)), al));	// 426 mov     [si+4], al
cs=0x192;eip=0x000377; 	R(INC(word_154cc));	// 427 inc     word_154CC
cs=0x192;eip=0x00037b; loc_1038b:	// 4386 
cs=0x192;eip=0x00037b; 	R(MOV(al, *(raddr(ds,si+4))));	// 430 mov     al, [si+4]
cs=0x192;eip=0x00037e; 	R(OR(al, al));	// 431 or      al, al
cs=0x192;eip=0x000380; 		R(JZ(loc_1039f));	// 432 jz      short loc_1039F
cs=0x192;eip=0x000382; 	R(MOV(di, *(dw*)(raddr(ds,si))));	// 433 mov     di, [si]
cs=0x192;eip=0x000384; 	R(MOV(ah, *(raddr(ds,si+2))));	// 434 mov     ah, [si+2]
cs=0x192;eip=0x000387; 	R(NOT(ah));	// 435 not     ah
cs=0x192;eip=0x000389; 	R(AND(*(raddr(es,di)), ah));	// 436 and     es:[di], ah
cs=0x192;eip=0x00038c; 	R(AND(*(raddr(ss,di)), ah));	// 437 and     ss:[di], ah
cs=0x192;eip=0x00038f; loc_1039f:	// 4387 
cs=0x192;eip=0x00038f; 	bh = 0;AFFECT_ZFifz(0); AFFECT_SF(bh,0);	// 440 xor     bh, bh
cs=0x192;eip=0x000391; 	R(MOV(*(raddr(ds,si+4)), bh));	// 441 mov     [si+4], bh
cs=0x192;eip=0x000394; 	R(MOV(bl, *(raddr(ds,si+3))));	// 442 mov     bl, [si+3]
cs=0x192;eip=0x000397; 	R(MOV(ax, *(dw*)(((db*)&word_17be4)+bx)));	// 443 mov     ax, word_17BE4[bx]
cs=0x192;eip=0x00039b; 	R(ADD(ax, *(dw*)(raddr(ds,si))));	// 444 add     ax, [si]
cs=0x192;eip=0x00039d; 	R(MOV(*(dw*)(raddr(ds,si)), ax));	// 445 mov     [si], ax
cs=0x192;eip=0x00039f; __disp=m2c::ksub_102d3;
	R(CALL(_group1));	// 446 call    sub_102D3
cs=0x192;eip=0x0003a2; 	R(SUB(al, 2));	// 447 sub     al, 2
cs=0x192;eip=0x0003a4; 	R(MOV(di, *(dw*)(raddr(ds,si))));	// 448 mov     di, [si]
cs=0x192;eip=0x0003a6; 	R(MOV(ah, *(raddr(ds,si+2))));	// 449 mov     ah, [si+2]
cs=0x192;eip=0x0003a9; __disp=m2c::ksub_102f6;
	R(CALL(_group1));	// 450 call    sub_102F6
cs=0x192;eip=0x0003ac; 	R(TEST(*(raddr(ss,di)), ah));	// 451 test    ss:[di], ah
cs=0x192;eip=0x0003af; 		R(JZ(loc_10403));	// 452 jz      short loc_10403
cs=0x192;eip=0x0003b1; 	R(MOV(di, *(dw*)(raddr(ds,si))));	// 453 mov     di, [si]
cs=0x192;eip=0x0003b3; 	R(MOV(ah, *(raddr(ds,si+2))));	// 454 mov     ah, [si+2]
cs=0x192;eip=0x0003b6; 	R(TEST(*(raddr(ss,di)), ah));	// 455 test    ss:[di], ah
cs=0x192;eip=0x0003b9; 		R(JZ(loc_10403));	// 456 jz      short loc_10403
cs=0x192;eip=0x0003bb; 	R(ADD(di, 0x50));	// 457 add     di, 50h ; 'P'
cs=0x192;eip=0x0003be; 	R(TEST(*(raddr(ss,di)), ah));	// 458 test    ss:[di], ah
cs=0x192;eip=0x0003c1; 		R(JZ(loc_10403));	// 459 jz      short loc_10403
cs=0x192;eip=0x0003c3; loc_103d3:	// 4388 
cs=0x192;eip=0x0003c3; 	R(SUB(di, 0x50));	// 462 sub     di, 50h ; 'P'
cs=0x192;eip=0x0003c6; 		R(JC(loc_1041e));	// 463 jb      short loc_1041E
cs=0x192;eip=0x0003c8; 	R(TEST(*(raddr(ss,di)), ah));	// 464 test    ss:[di], ah
cs=0x192;eip=0x0003cb; 		R(JNZ(loc_103d3));	// 465 jnz     short loc_103D3
cs=0x192;eip=0x0003cd; __disp=m2c::ksub_10303;
	R(CALL(_group1));	// 466 call    sub_10303
cs=0x192;eip=0x0003d0; 	R(TEST(*(raddr(ss,di)), ah));	// 467 test    ss:[di], ah
cs=0x192;eip=0x0003d3; 		R(JNZ(loc_103eb));	// 468 jnz     short loc_103EB
cs=0x192;eip=0x0003d5; 	R(TEST(*(raddr(ss,di+0x50)), ah));	// 469 test    ss:[di+50h], ah
cs=0x192;eip=0x0003d9; 		R(JZ(loc_10403));	// 470 jz      short loc_10403
cs=0x192;eip=0x0003db; loc_103eb:	// 4389 
cs=0x192;eip=0x0003db; __disp=m2c::ksub_102fd;
	R(CALL(_group1));	// 473 call    sub_102FD
cs=0x192;eip=0x0003de; __disp=m2c::ksub_102fd;
	R(CALL(_group1));	// 474 call    sub_102FD
cs=0x192;eip=0x0003e1; 	R(TEST(*(raddr(ss,di)), ah));	// 475 test    ss:[di], ah
cs=0x192;eip=0x0003e4; 		R(JNZ(loc_103fc));	// 476 jnz     short loc_103FC
cs=0x192;eip=0x0003e6; 	R(TEST(*(raddr(ss,di+0x50)), ah));	// 477 test    ss:[di+50h], ah
cs=0x192;eip=0x0003ea; 		R(JZ(loc_10403));	// 478 jz      short loc_10403
cs=0x192;eip=0x0003ec; loc_103fc:	// 4390 
cs=0x192;eip=0x0003ec; __disp=m2c::ksub_10303;
	R(CALL(_group1));	// 481 call    sub_10303
cs=0x192;eip=0x0003ef; 	R(MOV(*(raddr(ds,si+3)), 0));	// 482 mov     byte ptr [si+3], 0
cs=0x192;eip=0x0003f3; loc_10403:	// 4391 
cs=0x192;eip=0x0003f3; 	R(OR(*(raddr(es,di)), ah));	// 486 or      es:[di], ah
cs=0x192;eip=0x0003f6; 	R(OR(*(raddr(ss,di)), ah));	// 487 or      ss:[di], ah
cs=0x192;eip=0x0003f9; 	R(MOV(*(dw*)(raddr(ds,si)), di));	// 488 mov     [si], di
cs=0x192;eip=0x0003fb; 	R(MOV(*(raddr(ds,si+2)), ah));	// 489 mov     [si+2], ah
cs=0x192;eip=0x0003fe; 	R(MOV(*(raddr(ds,si+4)), ah));	// 490 mov     [si+4], ah
cs=0x192;eip=0x000401; loc_10411:	// 4392 
cs=0x192;eip=0x000401; 	R(ADD(si, 5));	// 494 add     si, 5
cs=0x192;eip=0x000404; 	R(DEC(word_154c8));	// 495 dec     word_154C8
cs=0x192;eip=0x000408; 		R(JZ(locret_1041d));	// 496 jz      short locret_1041D
cs=0x192;eip=0x00040a; 		R(JMP(loc_1034f));	// 497 jmp     loc_1034F
cs=0x192;eip=0x00040d; locret_1041d:	// 4393 
cs=0x192;eip=0x00040d; 	R(RETN);	// 501 retn
cs=0x192;eip=0x00040e; loc_1041e:	// 4394 
cs=0x192;eip=0x00040e; 	R(MOV(*(raddr(ds,si+3)), 0));	// 505 mov     byte ptr [si+3], 0
cs=0x192;eip=0x000412; 		R(JMP(loc_10411));	// 506 jmp     short loc_10411
sub_10424:	// 513 
cs=0x192;eip=0x000414; 	R(MOV(ax, word_1546d));	// 515 mov     ax, word_1546D
cs=0x192;eip=0x000417; 	R(OR(ax, ax));	// 516 or      ax, ax
cs=0x192;eip=0x000419; 		R(JZ(loc_10430));	// 517 jz      short loc_10430
cs=0x192;eip=0x00041b; 	R(DEC(word_1546d));	// 518 dec     word_1546D
cs=0x192;eip=0x00041f; 	R(RETN);	// 519 retn
cs=0x192;eip=0x000420; loc_10430:	// 4395 
cs=0x192;eip=0x000420; 	R(MOV(es, word_150a3));	// 523 mov     es, word_150A3
cs=0x192;eip=0x000424; 	R(MOV(dx, 0x3C4));	// 524 mov     dx, 3C4h
cs=0x192;eip=0x000427; 	R(MOV(al, 2));	// 525 mov     al, 2
cs=0x192;eip=0x000429; 	R(OUT(dx, al));	// 526 out     dx, al          ; EGA: sequencer address reg
cs=0x192;eip=0x00042a; 	R(INC(dx));	// 528 inc     dx
cs=0x192;eip=0x00042b; 	R(MOV(al, 7));	// 529 mov     al, 7
cs=0x192;eip=0x00042d; 	R(OUT(dx, al));	// 530 out     dx, al          ; EGA port: sequencer data register
cs=0x192;eip=0x00042e; 	R(MOV(dx, 0x3CE));	// 531 mov     dx, 3CEh
cs=0x192;eip=0x000431; 	R(MOV(al, 5));	// 532 mov     al, 5
cs=0x192;eip=0x000433; 	R(OUT(dx, al));	// 533 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x000434; 	R(INC(dx));	// 540 inc     dx
cs=0x192;eip=0x000435; 	R(IN(al, dx));	// 541 in      al, dx          ; EGA port: graphics controller data register
cs=0x192;eip=0x000436; 	R(AND(al, 0x0FC));	// 542 and     al, 0FCh
cs=0x192;eip=0x000438; 	R(OUT(dx, al));	// 543 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x000439; 	R(MOV(si, word_1546b));	// 544 mov     si, word_1546B
cs=0x192;eip=0x00043d; 	R(OR(si, si));	// 545 or      si, si
cs=0x192;eip=0x00043f; 		R(JZ(loc_10454));	// 546 jz      short loc_10454
cs=0x192;eip=0x000441; 		R(JMP(loc_104dc));	// 547 jmp     loc_104DC
cs=0x192;eip=0x000444; loc_10454:	// 4396 
cs=0x192;eip=0x000444; 	R(MOV(si, offset(_text,byte_150a5)));	// 551 mov     si, offset byte_150A5
cs=0x192;eip=0x000447; 		R(JMP(loc_1045c));	// 552 jmp     short loc_1045C
cs=0x192;eip=0x000449; loc_10459:	// 4397 
cs=0x192;eip=0x000449; 	R(MOV(si, offset(_text,byte_152b8)));	// 556 mov     si, offset byte_152B8
cs=0x192;eip=0x00044c; loc_1045c:	// 4398 
cs=0x192;eip=0x00044c; LODSW;	// 560 lodsw
cs=0x192;eip=0x00044d; 	R(CMP(ax, 0x0FFFF));	// 561 cmp     ax, 0FFFFh
cs=0x192;eip=0x000450; 		R(JZ(loc_10459));	// 562 jz      short loc_10459
cs=0x192;eip=0x000452; 	R(CMP(ax, 0x0FFFE));	// 563 cmp     ax, 0FFFEh
cs=0x192;eip=0x000455; 		R(JNZ(loc_1047d));	// 564 jnz     short loc_1047D
cs=0x192;eip=0x000457; 	R(MOV(dx, 0x3CE));	// 565 mov     dx, 3CEh
cs=0x192;eip=0x00045a; 	R(MOV(al, 8));	// 566 mov     al, 8
cs=0x192;eip=0x00045c; 	R(OUT(dx, al));	// 567 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x00045d; 	R(INC(dx));	// 570 inc     dx
cs=0x192;eip=0x00045e; 	R(MOV(al, 0x0FF));	// 571 mov     al, 0FFh
cs=0x192;eip=0x000460; 	R(OUT(dx, al));	// 572 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x000461; 	R(MOV(di, 0x3390));	// 573 mov     di, 3390h
cs=0x192;eip=0x000464; 	R(MOV(cx, 0x1CE8));	// 574 mov     cx, 1CE8h
cs=0x192;eip=0x000467; 	ax = 0;AFFECT_ZFifz(0); AFFECT_SF(ax,0);	// 575 xor     ax, ax
cs=0x192;eip=0x000469; 	REP STOSW;	// 576 rep stosw
cs=0x192;eip=0x00046b; 		R(JMP(loc_1045c));	// 577 jmp     short loc_1045C
cs=0x192;eip=0x00046d; loc_1047d:	// 4399 
cs=0x192;eip=0x00046d; 	R(MOV(bx, ax));	// 581 mov     bx, ax
cs=0x192;eip=0x00046f; 	R(SHR(bx, 1));	// 582 shr     bx, 1
cs=0x192;eip=0x000471; 	R(SHR(bx, 1));	// 583 shr     bx, 1
cs=0x192;eip=0x000473; 	R(SHR(bx, 1));	// 584 shr     bx, 1
cs=0x192;eip=0x000475; 	R(MOV(cl, al));	// 585 mov     cl, al
cs=0x192;eip=0x000477; 	R(MOV(al, 0x80));	// 586 mov     al, 80h
cs=0x192;eip=0x000479; 	R(AND(cl, 7));	// 587 and     cl, 7
cs=0x192;eip=0x00047c; 		R(JZ(loc_10490));	// 588 jz      short loc_10490
cs=0x192;eip=0x00047e; 	R(SHR(al, cl));	// 589 shr     al, cl
cs=0x192;eip=0x000480; loc_10490:	// 4400 
cs=0x192;eip=0x000480; 	R(MOV(dataend, al));	// 592 mov     DataEnd, al
cs=0x192;eip=0x000483; LODSW;	// 593 lodsw
cs=0x192;eip=0x000484; 	R(ADD(ax, ax));	// 594 add     ax, ax
cs=0x192;eip=0x000486; 	R(MOV(di, ax));	// 595 mov     di, ax
cs=0x192;eip=0x000488; 	R(MOV(ax, *(dw*)(((db*)&word_17be4)+di)));	// 596 mov     ax, word_17BE4[di]
cs=0x192;eip=0x00048c; 	R(ADD(bx, ax));	// 597 add     bx, ax
cs=0x192;eip=0x00048e; 	R(MOV(word_15469, bx));	// 598 mov     word_15469, bx
cs=0x192;eip=0x000492; loc_104a2:	// 4401 
cs=0x192;eip=0x000492; LODSB;	// 602 lodsb
cs=0x192;eip=0x000493; 	R(MOV(word_1546b, si));	// 603 mov     word_1546B, si
cs=0x192;eip=0x000497; 	R(OR(al, al));	// 604 or      al, al
cs=0x192;eip=0x000499; 		R(JZ(loc_1045c));	// 605 jz      short loc_1045C
cs=0x192;eip=0x00049b; 	R(CMP(al, 0x20));	// 606 cmp     al, 20h ; ' '
cs=0x192;eip=0x00049d; 		R(JZ(loc_104bc));	// 607 jz      short loc_104BC
cs=0x192;eip=0x00049f; 		R(JNC(loc_104c6));	// 608 jnb     short loc_104C6
cs=0x192;eip=0x0004a1; 	ah = 0;AFFECT_ZFifz(0); AFFECT_SF(ah,0);	// 609 xor     ah, ah
cs=0x192;eip=0x0004a3; 	R(MOV(dx, 0x3C));	// 610 mov     dx, 3Ch ; '<'
cs=0x192;eip=0x0004a6; 	R(MUL1_2(dx));	// 611 mul     dx
cs=0x192;eip=0x0004a8; 	R(MOV(word_1546d, ax));	// 612 mov     word_1546D, ax
cs=0x192;eip=0x0004ab; 	R(RETN);	// 613 retn
cs=0x192;eip=0x0004ac; loc_104bc:	// 4402 
cs=0x192;eip=0x0004ac; 	R(MOV(cx, 0x0F));	// 617 mov     cx, 0Fh
cs=0x192;eip=0x0004af; loc_104bf:	// 4403 
cs=0x192;eip=0x0004af; __disp=m2c::ksub_1053f;
	R(CALL(_group1));	// 620 call    sub_1053F
cs=0x192;eip=0x0004b2; 		R(LOOP(loc_104bf));	// 621 loop    loc_104BF
cs=0x192;eip=0x0004b4; 		R(JMP(loc_104a2));	// 622 jmp     short loc_104A2
cs=0x192;eip=0x0004b6; loc_104c6:	// 4404 
cs=0x192;eip=0x0004b6; 	R(SUB(al, 0x41));	// 626 sub     al, 41h ; 'A'
cs=0x192;eip=0x0004b8; 	bx = 0;AFFECT_ZFifz(0); AFFECT_SF(bx,0);	// 627 xor     bx, bx
cs=0x192;eip=0x0004ba; 	R(MOV(bl, al));	// 628 mov     bl, al
cs=0x192;eip=0x0004bc; 	R(MOV(al, *((&byte_15072)+bx)));	// 629 mov     al, byte_15072[bx]
cs=0x192;eip=0x0004c0; 	R(MOV(byte_15471, al));	// 630 mov     byte_15471, al
cs=0x192;eip=0x0004c3; 	R(ADD(bx, bx));	// 631 add     bx, bx
cs=0x192;eip=0x0004c5; 	R(MOV(ax, *(dw*)(((db*)&word_15472)+bx)));	// 632 mov     ax, word_15472[bx]
cs=0x192;eip=0x0004c9; 	R(MOV(word_1546f, ax));	// 633 mov     word_1546F, ax
cs=0x192;eip=0x0004cc; loc_104dc:	// 4405 
cs=0x192;eip=0x0004cc; 	R(MOV(al, byte_15471));	// 636 mov     al, byte_15471
cs=0x192;eip=0x0004cf; 	R(OR(al, al));	// 637 or      al, al
cs=0x192;eip=0x0004d1; 		R(JNZ(loc_104eb));	// 638 jnz     short loc_104EB
cs=0x192;eip=0x0004d3; __disp=m2c::ksub_1053f;
	R(CALL(_group1));	// 639 call    sub_1053F
cs=0x192;eip=0x0004d6; __disp=m2c::ksub_1053f;
	R(CALL(_group1));	// 640 call    sub_1053F
cs=0x192;eip=0x0004d9; 		R(JMP(loc_104a2));	// 641 jmp     short loc_104A2
cs=0x192;eip=0x0004db; loc_104eb:	// 4406 
cs=0x192;eip=0x0004db; 	R(DEC(byte_15471));	// 645 dec     byte_15471
cs=0x192;eip=0x0004df; 	R(MOV(dx, 0x3CE));	// 646 mov     dx, 3CEh
cs=0x192;eip=0x0004e2; 	R(MOV(al, 5));	// 647 mov     al, 5
cs=0x192;eip=0x0004e4; 	R(CLI);	// 648 cli
cs=0x192;eip=0x0004e5; 	R(OUT(dx, al));	// 649 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x0004e6; 	R(INC(dx));	// 656 inc     dx
cs=0x192;eip=0x0004e7; 	R(IN(al, dx));	// 657 in      al, dx          ; EGA port: graphics controller data register
cs=0x192;eip=0x0004e8; 	R(AND(al, 0x0FC));	// 658 and     al, 0FCh
cs=0x192;eip=0x0004ea; 	R(OR(al, 2));	// 659 or      al, 2
cs=0x192;eip=0x0004ec; 	R(OUT(dx, al));	// 660 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x0004ed; 	R(DEC(dx));	// 661 dec     dx
cs=0x192;eip=0x0004ee; 	R(MOV(al, 8));	// 662 mov     al, 8
cs=0x192;eip=0x0004f0; 	R(OUT(dx, al));	// 663 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x0004f1; 	R(INC(dx));	// 666 inc     dx
cs=0x192;eip=0x0004f2; 	R(MOV(al, dataend));	// 667 mov     al, DataEnd
cs=0x192;eip=0x0004f5; 	R(OUT(dx, al));	// 668 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x0004f6; 	R(STI);	// 669 sti
cs=0x192;eip=0x0004f7; 	R(MOV(si, word_1546f));	// 670 mov     si, word_1546F
cs=0x192;eip=0x0004fb; 	R(MOV(di, word_15469));	// 671 mov     di, word_15469
cs=0x192;eip=0x0004ff; 	R(MOV(cx, 0x0C));	// 672 mov     cx, 0Ch
cs=0x192;eip=0x000502; loc_10512:	// 4407 
cs=0x192;eip=0x000502; LODSB;	// 675 lodsb
cs=0x192;eip=0x000503; 	R(MOV(ah, al));	// 676 mov     ah, al
cs=0x192;eip=0x000505; 	R(SHR(al, 1));	// 677 shr     al, 1
cs=0x192;eip=0x000507; 	R(SHR(al, 1));	// 678 shr     al, 1
cs=0x192;eip=0x000509; 	R(SHR(al, 1));	// 679 shr     al, 1
cs=0x192;eip=0x00050b; 	R(SHR(al, 1));	// 680 shr     al, 1
cs=0x192;eip=0x00050d; 	R(AND(al, 7));	// 681 and     al, 7
cs=0x192;eip=0x00050f; 		R(JZ(loc_10527));	// 682 jz      short loc_10527
cs=0x192;eip=0x000511; 	R(MOV(bl, *(raddr(es,di))));	// 683 mov     bl, es:[di]
cs=0x192;eip=0x000514; 	R(MOV(*(raddr(es,di)), al));	// 684 mov     es:[di], al
cs=0x192;eip=0x000517; loc_10527:	// 4408 
cs=0x192;eip=0x000517; 	R(ADD(di, 0x50));	// 687 add     di, 50h ; 'P'
cs=0x192;eip=0x00051a; 	R(MOV(al, ah));	// 688 mov     al, ah
cs=0x192;eip=0x00051c; 	R(AND(al, 7));	// 689 and     al, 7
cs=0x192;eip=0x00051e; 		R(JZ(loc_10536));	// 690 jz      short loc_10536
cs=0x192;eip=0x000520; 	R(MOV(bl, *(raddr(es,di))));	// 691 mov     bl, es:[di]
cs=0x192;eip=0x000523; 	R(MOV(*(raddr(es,di)), al));	// 692 mov     es:[di], al
cs=0x192;eip=0x000526; loc_10536:	// 4409 
cs=0x192;eip=0x000526; 	R(ADD(di, 0x50));	// 695 add     di, 50h ; 'P'
cs=0x192;eip=0x000529; 		R(LOOP(loc_10512));	// 696 loop    loc_10512
cs=0x192;eip=0x00052b; 	R(MOV(word_1546f, si));	// 697 mov     word_1546F, si
sub_1053f:	// 704 
cs=0x192;eip=0x00052f; 	R(ROR(dataend, 1));	// 706 ror     DataEnd, 1
cs=0x192;eip=0x000533; 	R(ADC(word_15469, 0));	// 707 adc     word_15469, 0
cs=0x192;eip=0x000538; 	R(RETN);	// 708 retn
sub_10549:	// 715 
cs=0x192;eip=0x000539; 	R(MOV(es, word_150a3));	// 716 mov     es, word_150A3
cs=0x192;eip=0x00053d; 	R(MOV(dx, 0x3C4));	// 717 mov     dx, 3C4h
cs=0x192;eip=0x000540; 	R(MOV(al, 2));	// 718 mov     al, 2
cs=0x192;eip=0x000542; 	R(OUT(dx, al));	// 719 out     dx, al          ; EGA: sequencer address reg
cs=0x192;eip=0x000543; 	R(INC(dx));	// 721 inc     dx
cs=0x192;eip=0x000544; 	R(MOV(al, 0x0F));	// 722 mov     al, 0Fh
cs=0x192;eip=0x000546; 	R(OUT(dx, al));	// 723 out     dx, al          ; EGA port: sequencer data register
cs=0x192;eip=0x000547; 	R(MOV(dx, 0x3CE));	// 724 mov     dx, 3CEh
cs=0x192;eip=0x00054a; 	R(MOV(al, 5));	// 725 mov     al, 5
cs=0x192;eip=0x00054c; 	R(OUT(dx, al));	// 726 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x00054d; 	R(INC(dx));	// 733 inc     dx
cs=0x192;eip=0x00054e; 	R(IN(al, dx));	// 734 in      al, dx          ; EGA port: graphics controller data register
cs=0x192;eip=0x00054f; 	R(AND(al, 0x0FC));	// 735 and     al, 0FCh
cs=0x192;eip=0x000551; 	R(OR(al, 2));	// 736 or      al, 2
cs=0x192;eip=0x000553; 	R(OUT(dx, al));	// 737 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x000554; 	R(MOV(di, 0x7D07));	// 738 mov     di, 7D07h
cs=0x192;eip=0x000557; 	R(MOV(ah, 0x0C0));	// 739 mov     ah, 0C0h
cs=0x192;eip=0x000559; 	R(MOV(si, offset(_text,ablastersound)));	// 740 mov     si, offset aBlastersound ; "BLASTERSOUND"
cs=0x192;eip=0x00055c; loc_1056c:	// 4410 
cs=0x192;eip=0x00055c; LODSB;	// 743 lodsb
cs=0x192;eip=0x00055d; 	R(SUB(al, 0x41));	// 744 sub     al, 41h ; 'A'
cs=0x192;eip=0x00055f; 		R(JC(loc_105e5));	// 745 jb      short loc_105E5
cs=0x192;eip=0x000561; 	bx = 0;AFFECT_ZFifz(0); AFFECT_SF(bx,0);	// 746 xor     bx, bx
cs=0x192;eip=0x000563; 	R(MOV(bl, al));	// 747 mov     bl, al
cs=0x192;eip=0x000565; 	R(MOV(ch, *((&byte_15072)+bx)));	// 748 mov     ch, byte_15072[bx]
cs=0x192;eip=0x000569; 	R(ADD(bl, bl));	// 749 add     bl, bl
cs=0x192;eip=0x00056b; 	R(MOV(bx, *(dw*)(((db*)&word_15472)+bx)));	// 750 mov     bx, word_15472[bx]
cs=0x192;eip=0x00056f; loc_1057f:	// 4411 
cs=0x192;eip=0x00056f; 	R(MOV(dx, 0x3CE));	// 753 mov     dx, 3CEh
cs=0x192;eip=0x000572; 	R(MOV(al, 8));	// 754 mov     al, 8
cs=0x192;eip=0x000574; 	R(OUT(dx, al));	// 755 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x000575; 	R(INC(dx));	// 758 inc     dx
cs=0x192;eip=0x000576; 	R(MOV(al, ah));	// 759 mov     al, ah
cs=0x192;eip=0x000578; 	R(OUT(dx, al));	// 760 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x000579; 	R(MOV(cl, 0x0C));	// 761 mov     cl, 0Ch
cs=0x192;eip=0x00057b; loc_1058b:	// 4412 
cs=0x192;eip=0x00057b; 	R(MOV(al, *(raddr(ds,bx))));	// 764 mov     al, [bx]
cs=0x192;eip=0x00057d; 	R(INC(bx));	// 765 inc     bx
cs=0x192;eip=0x00057e; 	R(MOV(dl, al));	// 766 mov     dl, al
cs=0x192;eip=0x000580; 	R(SHR(al, 1));	// 767 shr     al, 1
cs=0x192;eip=0x000582; 	R(SHR(al, 1));	// 768 shr     al, 1
cs=0x192;eip=0x000584; 	R(SHR(al, 1));	// 769 shr     al, 1
cs=0x192;eip=0x000586; 	R(SHR(al, 1));	// 770 shr     al, 1
cs=0x192;eip=0x000588; 	R(AND(al, 7));	// 771 and     al, 7
cs=0x192;eip=0x00058a; 		R(JZ(loc_105af));	// 772 jz      short loc_105AF
cs=0x192;eip=0x00058c; 	R(OR(al, 8));	// 773 or      al, 8
cs=0x192;eip=0x00058e; 	R(MOV(dh, *(raddr(es,di))));	// 774 mov     dh, es:[di]
cs=0x192;eip=0x000591; 	R(MOV(*(raddr(es,di)), al));	// 775 mov     es:[di], al
cs=0x192;eip=0x000594; 	R(MOV(*(raddr(es,di+0x50)), al));	// 776 mov     es:[di+50h], al
cs=0x192;eip=0x000598; 	R(OR(*(raddr(ss,di)), ah));	// 777 or      ss:[di], ah
cs=0x192;eip=0x00059b; 	R(OR(*(raddr(ss,di+0x50)), ah));	// 778 or      ss:[di+50h], ah
cs=0x192;eip=0x00059f; loc_105af:	// 4413 
cs=0x192;eip=0x00059f; 	R(ADD(di, 0x0A0));	// 781 add     di, 0A0h
cs=0x192;eip=0x0005a3; 	R(MOV(al, dl));	// 782 mov     al, dl
cs=0x192;eip=0x0005a5; 	R(AND(al, 7));	// 783 and     al, 7
cs=0x192;eip=0x0005a7; 		R(JZ(loc_105cc));	// 784 jz      short loc_105CC
cs=0x192;eip=0x0005a9; 	R(OR(al, 8));	// 785 or      al, 8
cs=0x192;eip=0x0005ab; 	R(MOV(dh, *(raddr(es,di))));	// 786 mov     dh, es:[di]
cs=0x192;eip=0x0005ae; 	R(MOV(*(raddr(es,di)), al));	// 787 mov     es:[di], al
cs=0x192;eip=0x0005b1; 	R(MOV(*(raddr(es,di+0x50)), al));	// 788 mov     es:[di+50h], al
cs=0x192;eip=0x0005b5; 	R(OR(*(raddr(ss,di)), ah));	// 789 or      ss:[di], ah
cs=0x192;eip=0x0005b8; 	R(OR(*(raddr(ss,di+0x50)), ah));	// 790 or      ss:[di+50h], ah
cs=0x192;eip=0x0005bc; loc_105cc:	// 4414 
cs=0x192;eip=0x0005bc; 	R(ADD(di, 0x0A0));	// 793 add     di, 0A0h
cs=0x192;eip=0x0005c0; 	R(DEC(cl));	// 794 dec     cl
cs=0x192;eip=0x0005c2; 		R(JNZ(loc_1058b));	// 795 jnz     short loc_1058B
cs=0x192;eip=0x0005c4; 	R(SUB(di, 0x0F00));	// 796 sub     di, 0F00h
cs=0x192;eip=0x0005c8; 	R(ROR(ah, 1));	// 797 ror     ah, 1
cs=0x192;eip=0x0005ca; 	R(ROR(ah, 1));	// 798 ror     ah, 1
cs=0x192;eip=0x0005cc; 	R(ADC(di, 0));	// 799 adc     di, 0
cs=0x192;eip=0x0005cf; 	R(DEC(ch));	// 800 dec     ch
cs=0x192;eip=0x0005d1; 		R(JNZ(loc_1057f));	// 801 jnz     short loc_1057F
cs=0x192;eip=0x0005d3; 		R(JMP(loc_1056c));	// 802 jmp     short loc_1056C
cs=0x192;eip=0x0005d5; loc_105e5:	// 4415 
cs=0x192;eip=0x0005d5; 	R(MOV(dx, 0x3CE));	// 806 mov     dx, 3CEh
cs=0x192;eip=0x0005d8; 	R(MOV(al, 5));	// 807 mov     al, 5
cs=0x192;eip=0x0005da; 	R(OUT(dx, al));	// 808 out     dx, al          ; EGA: graph 1 and 2 addr reg:
cs=0x192;eip=0x0005db; 	R(INC(dx));	// 815 inc     dx
cs=0x192;eip=0x0005dc; 	R(IN(al, dx));	// 816 in      al, dx          ; EGA port: graphics controller data register
cs=0x192;eip=0x0005dd; 	R(AND(al, 0x0FC));	// 817 and     al, 0FCh
cs=0x192;eip=0x0005df; 	R(OUT(dx, al));	// 818 out     dx, al          ; EGA port: graphics controller data register
cs=0x192;eip=0x0005e0; 	R(MOV(di, 0x7D07));	// 819 mov     di, 7D07h
cs=0x192;eip=0x0005e3; 	R(MOV(cl, 0x18));	// 820 mov     cl, 18h
cs=0x192;eip=0x0005e5; loc_105f5:	// 4416 
cs=0x192;eip=0x0005e5; 	R(PUSH(di));	// 823 push    di
cs=0x192;eip=0x0005e6; 	R(MOV(ah, 0x80));	// 824 mov     ah, 80h
cs=0x192;eip=0x0005e8; 	R(MOV(si, 0x124));	// 825 mov     si, 124h
cs=0x192;eip=0x0005eb; loc_105fb:	// 4417 
cs=0x192;eip=0x0005eb; 	R(TEST(*(raddr(ss,di)), ah));	// 828 test    ss:[di], ah
cs=0x192;eip=0x0005ee; 		R(JZ(loc_10623));	// 829 jz      short loc_10623
cs=0x192;eip=0x0005f0; 	R(TEST(*(raddr(ss,di-0x50)), ah));	// 830 test    ss:[di-50h], ah
cs=0x192;eip=0x0005f4; 		R(JNZ(loc_10623));	// 831 jnz     short loc_10623
cs=0x192;eip=0x0005f6; __disp=m2c::ksub_10303;
	R(CALL(_group1));	// 832 call    sub_10303
cs=0x192;eip=0x0005f9; 	R(TEST(*(raddr(ss,di)), ah));	// 833 test    ss:[di], ah
cs=0x192;eip=0x0005fc; 	R(PUSHF);	// 834 pushf
cs=0x192;eip=0x0005fd; __disp=m2c::ksub_102fd;
	R(CALL(_group1));	// 835 call    sub_102FD
cs=0x192;eip=0x000600; 	R(POPF);	// 836 popf
cs=0x192;eip=0x000601; 		R(JNZ(loc_10623));	// 837 jnz     short loc_10623
cs=0x192;eip=0x000603; 	R(DEC(dx));	// 838 dec     dx
cs=0x192;eip=0x000604; 	R(MOV(al, 8));	// 839 mov     al, 8
cs=0x192;eip=0x000606; 	R(OUT(dx, al));	// 840 out     dx, al
cs=0x192;eip=0x000607; 	R(INC(dx));	// 841 inc     dx
cs=0x192;eip=0x000608; 	R(MOV(al, ah));	// 842 mov     al, ah
cs=0x192;eip=0x00060a; 	R(OUT(dx, al));	// 843 out     dx, al
cs=0x192;eip=0x00060b; 	R(NOT(al));	// 844 not     al
cs=0x192;eip=0x00060d; 	R(AND(*(raddr(ss,di)), al));	// 845 and     ss:[di], al
cs=0x192;eip=0x000610; 	R(AND(*(raddr(es,di)), al));	// 846 and     es:[di], al
cs=0x192;eip=0x000613; loc_10623:	// 4418 
cs=0x192;eip=0x000613; __disp=m2c::ksub_102fd;
	R(CALL(_group1));	// 850 call    sub_102FD
cs=0x192;eip=0x000616; 	R(TEST(*(raddr(ss,di)), ah));	// 851 test    ss:[di], ah
cs=0x192;eip=0x000619; 		R(JZ(loc_1064e));	// 852 jz      short loc_1064E
cs=0x192;eip=0x00061b; 	R(TEST(*(raddr(ss,di-0x50)), ah));	// 853 test    ss:[di-50h], ah
cs=0x192;eip=0x00061f; 		R(JNZ(loc_1064e));	// 854 jnz     short loc_1064E
cs=0x192;eip=0x000621; __disp=m2c::ksub_102fd;
	R(CALL(_group1));	// 855 call    sub_102FD
cs=0x192;eip=0x000624; 	R(TEST(*(raddr(ss,di)), ah));	// 856 test    ss:[di], ah
cs=0x192;eip=0x000627; 	R(PUSHF);	// 857 pushf
cs=0x192;eip=0x000628; __disp=m2c::ksub_10303;
	R(CALL(_group1));	// 858 call    sub_10303
cs=0x192;eip=0x00062b; 	R(POPF);	// 859 popf
cs=0x192;eip=0x00062c; 		R(JNZ(loc_1064e));	// 860 jnz     short loc_1064E
cs=0x192;eip=0x00062e; 	R(DEC(dx));	// 861 dec     dx
cs=0x192;eip=0x00062f; 	R(MOV(al, 8));	// 862 mov     al, 8
cs=0x192;eip=0x000631; 	R(OUT(dx, al));	// 863 out     dx, al
cs=0x192;eip=0x000632; 	R(INC(dx));	// 864 inc     dx
cs=0x192;eip=0x000633; 	R(MOV(al, ah));	// 865 mov     al, ah
cs=0x192;eip=0x000635; 	R(OUT(dx, al));	// 866 out     dx, al
cs=0x192;eip=0x000636; 	R(NOT(al));	// 867 not     al
cs=0x192;eip=0x000638; 	R(AND(*(raddr(ss,di)), al));	// 868 and     ss:[di], al
cs=0x192;eip=0x00063b; 	R(AND(*(raddr(es,di)), al));	// 869 and     es:[di], al
cs=0x192;eip=0x00063e; loc_1064e:	// 4419 
cs=0x192;eip=0x00063e; __disp=m2c::ksub_102fd;
	R(CALL(_group1));	// 873 call    sub_102FD
cs=0x192;eip=0x000641; 	R(DEC(si));	// 874 dec     si
cs=0x192;eip=0x000642; 		R(JNZ(loc_105fb));	// 875 jnz     short loc_105FB
cs=0x192;eip=0x000644; 	R(POP(di));	// 876 pop     di
cs=0x192;eip=0x000645; 	R(ADD(di, 0x0A0));	// 877 add     di, 0A0h
cs=0x192;eip=0x000649; 	R(DEC(cl));	// 878 dec     cl
cs=0x192;eip=0x00064b; 		R(JNZ(loc_105f5));	// 879 jnz     short loc_105F5
cs=0x192;eip=0x00064d; 	R(RETN);	// 880 retn
sub_1066e:	// 898 
cs=0x192;eip=0x00065e; 	R(MOV(ax, 0x3508));	// 899 mov     ax, 3508h
cs=0x192;eip=0x000661; 	R(_INT(0x21));	// 900 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR
cs=0x192;eip=0x000663; 	R(MOV(word_17be0, bx));	// 903 mov     word_17BE0, bx
cs=0x192;eip=0x000667; 	R(MOV(word_17be2, es));	// 904 mov     word_17BE2, es
cs=0x192;eip=0x00066b; 	R(MOV(dx, m2c::kloc_1065e));	// 905 mov     dx, offset loc_1065E
cs=0x192;eip=0x00066e; 	R(MOV(ax, cs));	// 906 mov     ax, cs
cs=0x192;eip=0x000670; 	R(MOV(ds, ax));	// 907 mov     ds, ax
cs=0x192;eip=0x000672; 	R(MOV(ax, 0x2508));	// 909 mov     ax, 2508h
cs=0x192;eip=0x000675; 	R(_INT(0x21));	// 910 int     21h             ; DOS - SET INTERRUPT VECTOR
{
		Bitu call_irq0_=CALLBACK_Allocate();	
		CALLBACK_Setup(call_irq0_,myINT8_Handler,CB_IRQ0,Real2Phys(RealMake(cs,m2c::kloc_1065e)),"my IRQ 0 Clock");
//		RealSetVec(0x08,(RealMake(0x0192,0x064e)));
}
ah=2;
R(_INT(0x16));

cs=0x192;eip=0x000677; 	R(MOV(bx, 0x5D37));	// 913 mov     bx, 5D37h
cs=0x192;eip=0x00067a; 	R(MOV(al, 0x36));	// 914 mov     al, 36h ; '6'
cs=0x192;eip=0x00067c; 	R(OUT(0x43, al));	// 915 out     43h, al         ; Timer 8253-5 (AT: 8254.2).
cs=0x192;eip=0x00067e; 	R(MOV(al, bl));	// 916 mov     al, bl
cs=0x192;eip=0x000680; 	R(OUT(0x40, al));	// 917 out     40h, al         ; Timer 8253-5 (AT: 8254.2).
cs=0x192;eip=0x000682; 	R(MOV(al, bh));	// 918 mov     al, bh
cs=0x192;eip=0x000684; 	R(OUT(0x40, al));	// 919 out     40h, al         ; Timer 8253-5 (AT: 8254.2).
cs=0x192;eip=0x000686; 	R(RETN);	// 920 retn
sub_10697:	// 927 
cs=0x192;eip=0x000687; 	R(MOV(dx, *(dw*)(((db*)&word_17be0))));	// 928 mov     dx, ds:word_17BE0
cs=0x192;eip=0x00068b; 	R(MOV(ds, *(dw*)(((db*)&word_17be2))));	// 929 mov     ds, ds:word_17BE2
cs=0x192;eip=0x00068f; 	R(MOV(ax, 0x2508));	// 931 mov     ax, 2508h
cs=0x192;eip=0x000692; 	R(_INT(0x21));	// 932 int     21h             ; DOS - SET INTERRUPT VECTOR
cs=0x192;eip=0x000694; 	R(MOV(ax, cs));	// 935 mov     ax, cs
cs=0x192;eip=0x000696; 	R(MOV(ds, ax));	// 936 mov     ds, ax
cs=0x192;eip=0x000698; 	R(MOV(al, 0x36));	// 938 mov     al, 36h ; '6'
cs=0x192;eip=0x00069a; 	R(OUT(0x43, al));	// 939 out     43h, al         ; Timer 8253-5 (AT: 8254.2).
cs=0x192;eip=0x00069c; 	al = 0;AFFECT_ZFifz(0); AFFECT_SF(al,0);	// 940 xor     al, al
cs=0x192;eip=0x00069e; 	R(OUT(0x40, al));	// 941 out     40h, al         ; Timer 8253-5 (AT: 8254.2).
cs=0x192;eip=0x0006a0; 	R(OUT(0x40, al));	// 942 out     40h, al         ; Timer 8253-5 (AT: 8254.2).
cs=0x192;eip=0x0006a2; 	R(RETN);	// 943 retn
sub_106b3:	// 950 
cs=0x192;eip=0x0006a3; 	al = 0;AFFECT_ZFifz(0); AFFECT_SF(al,0);	// 951 xor     al, al
cs=0x192;eip=0x0006a5; 	R(OUT(0x70, al));	// 952 out     70h, al         ; CMOS Memory/RTC Index Register:
cs=0x192;eip=0x0006a7; 	R(IN(al, 0x71));	// 954 in      al, 71h         ; CMOS Memory/RTC Data Register
cs=0x192;eip=0x0006a9; 	R(MOV(dh, al));	// 955 mov     dh, al
cs=0x192;eip=0x0006ab; 	R(AND(dh, 0x0F));	// 956 and     dh, 0Fh
cs=0x192;eip=0x0006ae; 	R(SHR(al, 1));	// 957 shr     al, 1
cs=0x192;eip=0x0006b0; 	R(SHR(al, 1));	// 958 shr     al, 1
cs=0x192;eip=0x0006b2; 	R(SHR(al, 1));	// 959 shr     al, 1
cs=0x192;eip=0x0006b4; 	R(SHR(al, 1));	// 960 shr     al, 1
cs=0x192;eip=0x0006b6; 	R(MOV(dl, 0x0A));	// 961 mov     dl, 0Ah
cs=0x192;eip=0x0006b8; 	R(MUL1_1(dl));	// 962 mul     dl
cs=0x192;eip=0x0006ba; 	R(ADD(dh, al));	// 963 add     dh, al
cs=0x192;eip=0x0006bc; 	R(MOV(al, 2));	// 964 mov     al, 2
cs=0x192;eip=0x0006be; 	R(OUT(0x70, al));	// 965 out     70h, al         ; CMOS Memory/RTC Index Register:
cs=0x192;eip=0x0006c0; 	R(IN(al, 0x71));	// 967 in      al, 71h         ; CMOS Memory/RTC Data Register
cs=0x192;eip=0x0006c2; 	R(MOV(cl, al));	// 968 mov     cl, al
cs=0x192;eip=0x0006c4; 	R(AND(cl, 0x0F));	// 969 and     cl, 0Fh
cs=0x192;eip=0x0006c7; 	R(SHR(al, 1));	// 970 shr     al, 1
cs=0x192;eip=0x0006c9; 	R(SHR(al, 1));	// 971 shr     al, 1
cs=0x192;eip=0x0006cb; 	R(SHR(al, 1));	// 972 shr     al, 1
cs=0x192;eip=0x0006cd; 	R(SHR(al, 1));	// 973 shr     al, 1
cs=0x192;eip=0x0006cf; 	R(MOV(dl, 0x0A));	// 974 mov     dl, 0Ah
cs=0x192;eip=0x0006d1; 	R(MUL1_1(dl));	// 975 mul     dl
cs=0x192;eip=0x0006d3; 	R(ADD(cl, al));	// 976 add     cl, al
cs=0x192;eip=0x0006d5; 	R(MOV(al, 4));	// 977 mov     al, 4
cs=0x192;eip=0x0006d7; 	R(OUT(0x70, al));	// 978 out     70h, al         ; CMOS Memory/RTC Index Register:
cs=0x192;eip=0x0006d9; 	R(IN(al, 0x71));	// 980 in      al, 71h         ; CMOS Memory/RTC Data Register
cs=0x192;eip=0x0006db; 	R(MOV(ch, al));	// 981 mov     ch, al
cs=0x192;eip=0x0006dd; 	R(AND(ch, 0x0F));	// 982 and     ch, 0Fh
cs=0x192;eip=0x0006e0; 	R(SHR(al, 1));	// 983 shr     al, 1
cs=0x192;eip=0x0006e2; 	R(SHR(al, 1));	// 984 shr     al, 1
cs=0x192;eip=0x0006e4; 	R(SHR(al, 1));	// 985 shr     al, 1
cs=0x192;eip=0x0006e6; 	R(SHR(al, 1));	// 986 shr     al, 1
cs=0x192;eip=0x0006e8; 	R(MOV(dl, 0x0A));	// 987 mov     dl, 0Ah
cs=0x192;eip=0x0006ea; 	R(MUL1_1(dl));	// 988 mul     dl
cs=0x192;eip=0x0006ec; 	R(ADD(ch, al));	// 989 add     ch, al
cs=0x192;eip=0x0006ee; 	dl = 0;AFFECT_ZFifz(0); AFFECT_SF(dl,0);	// 990 xor     dl, dl
cs=0x192;eip=0x0006f0; 	R(MOV(ah, 0x2D));	// 991 mov     ah, 2Dh ; '-'
cs=0x192;eip=0x0006f2; 	R(_INT(0x21));	// 992 int     21h             ; DOS - SET CURRENT TIME
cs=0x192;eip=0x0006f4; 	R(MOV(al, 7));	// 995 mov     al, 7
cs=0x192;eip=0x0006f6; 	R(OUT(0x70, al));	// 996 out     70h, al         ; CMOS Memory/RTC Index Register:
cs=0x192;eip=0x0006f8; 	R(IN(al, 0x71));	// 998 in      al, 71h         ; CMOS Memory/RTC Data Register
cs=0x192;eip=0x0006fa; 	R(MOV(dl, al));	// 999 mov     dl, al
cs=0x192;eip=0x0006fc; 	R(AND(dl, 0x0F));	// 1000 and     dl, 0Fh
cs=0x192;eip=0x0006ff; 	R(SHR(al, 1));	// 1001 shr     al, 1
cs=0x192;eip=0x000701; 	R(SHR(al, 1));	// 1002 shr     al, 1
cs=0x192;eip=0x000703; 	R(SHR(al, 1));	// 1003 shr     al, 1
cs=0x192;eip=0x000705; 	R(SHR(al, 1));	// 1004 shr     al, 1
cs=0x192;eip=0x000707; 	R(MOV(ch, 0x0A));	// 1005 mov     ch, 0Ah
cs=0x192;eip=0x000709; 	R(MUL1_1(ch));	// 1006 mul     ch
cs=0x192;eip=0x00070b; 	R(ADD(dl, al));	// 1007 add     dl, al
cs=0x192;eip=0x00070d; 	R(MOV(al, 8));	// 1008 mov     al, 8
cs=0x192;eip=0x00070f; 	R(OUT(0x70, al));	// 1009 out     70h, al         ; CMOS Memory/RTC Index Register:
cs=0x192;eip=0x000711; 	R(IN(al, 0x71));	// 1011 in      al, 71h         ; CMOS Memory/RTC Data Register
cs=0x192;eip=0x000713; 	R(MOV(dh, al));	// 1012 mov     dh, al
cs=0x192;eip=0x000715; 	R(AND(dh, 0x0F));	// 1013 and     dh, 0Fh
cs=0x192;eip=0x000718; 	R(SHR(al, 1));	// 1014 shr     al, 1
cs=0x192;eip=0x00071a; 	R(SHR(al, 1));	// 1015 shr     al, 1
cs=0x192;eip=0x00071c; 	R(SHR(al, 1));	// 1016 shr     al, 1
cs=0x192;eip=0x00071e; 	R(SHR(al, 1));	// 1017 shr     al, 1
cs=0x192;eip=0x000720; 	R(MOV(ch, 0x0A));	// 1018 mov     ch, 0Ah
cs=0x192;eip=0x000722; 	R(MUL1_1(ch));	// 1019 mul     ch
cs=0x192;eip=0x000724; 	R(ADD(dh, al));	// 1020 add     dh, al
cs=0x192;eip=0x000726; 	R(MOV(al, 4));	// 1021 mov     al, 4
cs=0x192;eip=0x000728; 	R(OUT(0x70, al));	// 1022 out     70h, al         ; CMOS Memory/RTC Index Register:
cs=0x192;eip=0x00072a; 	R(IN(al, 0x71));	// 1024 in      al, 71h         ; CMOS Memory/RTC Data Register
cs=0x192;eip=0x00072c; 	R(MOV(cl, al));	// 1025 mov     cl, al
cs=0x192;eip=0x00072e; 	R(AND(cl, 0x0F));	// 1026 and     cl, 0Fh
cs=0x192;eip=0x000731; 	R(SHR(al, 1));	// 1027 shr     al, 1
cs=0x192;eip=0x000733; 	R(SHR(al, 1));	// 1028 shr     al, 1
cs=0x192;eip=0x000735; 	R(SHR(al, 1));	// 1029 shr     al, 1
cs=0x192;eip=0x000737; 	R(SHR(al, 1));	// 1030 shr     al, 1
cs=0x192;eip=0x000739; 	R(MOV(ch, 0x0A));	// 1031 mov     ch, 0Ah
cs=0x192;eip=0x00073b; 	R(MUL1_1(ch));	// 1032 mul     ch
cs=0x192;eip=0x00073d; 	R(ADD(cl, al));	// 1033 add     cl, al
cs=0x192;eip=0x00073f; 	ch = 0;AFFECT_ZFifz(0); AFFECT_SF(ch,0);	// 1034 xor     ch, ch
cs=0x192;eip=0x000741; 	R(ADD(cx, 0x76C));	// 1035 add     cx, 76Ch
cs=0x192;eip=0x000745; 	R(MOV(ah, 0x2B));	// 1036 mov     ah, 2Bh ; '+'
cs=0x192;eip=0x000747; 	R(_INT(0x21));	// 1037 int     21h             ; DOS - SET CURRENT DATE
cs=0x192;eip=0x000749; 	R(RETN);	// 1040 retn
sub_12890:	// 1860 
cs=0x192;eip=0x002880; 	R(MOV(dx, 0x3C0));	// 1862 mov     dx, 3C0h
cs=0x192;eip=0x002883; loc_12893:	// 4421 
cs=0x192;eip=0x002883; 	R(IN(al, dx));	// 1865 in      al, dx          ; EGA port
cs=0x192;eip=0x002884; 		R(LOOP(loc_12893));	// 1866 loop    loc_12893
cs=0x192;eip=0x002886; 	R(RETN);	// 1867 retn
sub_12897:	// 1874 
cs=0x192;eip=0x002887; 	R(MOV(bx, ax));	// 1876 mov     bx, ax
cs=0x192;eip=0x002889; 	bh = 0;AFFECT_ZFifz(0); AFFECT_SF(bh,0);	// 1877 xor     bh, bh
cs=0x192;eip=0x00288b; 	R(MOV(*((&byte_1278e)+bx), ah));	// 1878 mov     ds:byte_1278E[bx], ah
cs=0x192;eip=0x00288f; 	R(MOV(dx, 0x388));	// 1879 mov     dx, 388h
cs=0x192;eip=0x002892; 	R(OUT(dx, al));	// 1880 out     dx, al
cs=0x192;eip=0x002893; 	R(MOV(cx, 6));	// 1881 mov     cx, 6
cs=0x192;eip=0x002896; __disp=m2c::ksub_12890;
	R(CALL(_group1));	// 1882 call    sub_12890
cs=0x192;eip=0x002899; 	R(MOV(dx, 0x389));	// 1883 mov     dx, 389h
cs=0x192;eip=0x00289c; 	R(MOV(al, ah));	// 1884 mov     al, ah
cs=0x192;eip=0x00289e; 	R(OUT(dx, al));	// 1885 out     dx, al
cs=0x192;eip=0x00289f; 	R(MOV(cx, 0x23));	// 1886 mov     cx, 23h ; '#'
cs=0x192;eip=0x0028a2; 		R(JMP(sub_12890));	// 1887 jmp     short sub_12890
sub_128b4:	// 1894 
cs=0x192;eip=0x0028a4; 	R(MOV(bx, 1));	// 1896 mov     bx, 1
cs=0x192;eip=0x0028a7; loc_128b7:	// 4422 
cs=0x192;eip=0x0028a7; 	R(MOV(ax, bx));	// 1899 mov     ax, bx
cs=0x192;eip=0x0028a9; 	R(AND(al, 0x0E0));	// 1900 and     al, 0E0h
cs=0x192;eip=0x0028ab; 	R(CMP(al, 0x40));	// 1901 cmp     al, 40h ; '@'
cs=0x192;eip=0x0028ad; 		R(JNZ(loc_128c1));	// 1902 jnz     short loc_128C1
cs=0x192;eip=0x0028af; 	R(MOV(ah, 0x3F));	// 1903 mov     ah, 3Fh ; '?'
cs=0x192;eip=0x0028b1; loc_128c1:	// 4423 
cs=0x192;eip=0x0028b1; 	R(MOV(al, bl));	// 1906 mov     al, bl
cs=0x192;eip=0x0028b3; __disp=m2c::ksub_12897;
	R(CALL(_group1));	// 1907 call    sub_12897
cs=0x192;eip=0x0028b6; 	R(INC(bl));	// 1908 inc     bl
cs=0x192;eip=0x0028b8; 		R(JNZ(loc_128b7));	// 1909 jnz     short loc_128B7
cs=0x192;eip=0x0028ba; 	R(RETN);	// 1910 retn
sub_128cb:	// 1917 
cs=0x192;eip=0x0028bb; 	R(PUSH(ax));	// 1919 push    ax
cs=0x192;eip=0x0028bc; 	R(ADD(al, 0x0C0));	// 1920 add     al, 0C0h
cs=0x192;eip=0x0028be; __disp=m2c::ksub_12b43;
	R(CALL(_group1));	// 1921 call    sub_12B43
cs=0x192;eip=0x0028c1; 	R(POP(ax));	// 1922 pop     ax
cs=0x192;eip=0x0028c2; 	R(PUSH(ax));	// 1923 push    ax
cs=0x192;eip=0x0028c3; 	R(MOV(bl, ah));	// 1924 mov     bl, ah
cs=0x192;eip=0x0028c5; 	bh = 0;AFFECT_ZFifz(0); AFFECT_SF(bh,0);	// 1925 xor     bh, bh
cs=0x192;eip=0x0028c7; 	R(MOV(al, *((&byte_10786)+bx)));	// 1926 mov     al, ds:byte_10786[bx]
cs=0x192;eip=0x0028cb; __disp=m2c::ksub_12b43;
	R(CALL(_group1));	// 1927 call    sub_12B43
cs=0x192;eip=0x0028ce; 	R(POP(ax));	// 1928 pop     ax
cs=0x192;eip=0x0028cf; 	ah = 0;AFFECT_ZFifz(0); AFFECT_SF(ah,0);	// 1929 xor     ah, ah
cs=0x192;eip=0x0028d1; 	R(PUSH(ax));	// 1930 push    ax
cs=0x192;eip=0x0028d2; 	R(MOV(ah, 3));	// 1931 mov     ah, 3
cs=0x192;eip=0x0028d4; 	R(MUL1_1(ah));	// 1932 mul     ah
cs=0x192;eip=0x0028d6; 	R(MOV(di, ax));	// 1933 mov     di, ax
cs=0x192;eip=0x0028d8; 	R(ADD(di, offset(_text,adlbeg)));	// 1934 add     di, offset AdlBeg
cs=0x192;eip=0x0028dc; 	R(POP(ax));	// 1935 pop     ax
cs=0x192;eip=0x0028dd; 	R(MOV(bx, ax));	// 1936 mov     bx, ax
cs=0x192;eip=0x0028df; 	R(MOV(ah, *(raddr(ds,si+0x0A))));	// 1937 mov     ah, [si+0Ah]
cs=0x192;eip=0x0028e2; 	R(MOV(*((&byte_1274e)+bx), ah));	// 1938 mov     ds:byte_1274E[bx], ah
cs=0x192;eip=0x0028e6; 	R(MOV(ah, *((&byte_1273e)+bx)));	// 1939 mov     ah, ds:byte_1273E[bx]
cs=0x192;eip=0x0028ea; 	R(AND(ah, 0x0DF));	// 1940 and     ah, 0DFh
cs=0x192;eip=0x0028ed; __disp=m2c::ksub_12897;
	R(CALL(_group1));	// 1941 call    sub_12897
cs=0x192;eip=0x0028f0; 	R(MOV(ah, *(raddr(ds,si+3))));	// 1942 mov     ah, [si+3]
cs=0x192;eip=0x0028f3; 	R(NOT(ah));	// 1943 not     ah
cs=0x192;eip=0x0028f5; 	R(AND(ah, 0x3F));	// 1944 and     ah, 3Fh
cs=0x192;eip=0x0028f8; 	R(MOV(*(raddr(ds,di)), ah));	// 1945 mov     [di], ah
cs=0x192;eip=0x0028fa; 	R(MOV(bl, *(raddr(ds,di+1))));	// 1946 mov     bl, [di+1]
cs=0x192;eip=0x0028fd; 	bh = 0;AFFECT_ZFifz(0); AFFECT_SF(bh,0);	// 1947 xor     bh, bh
cs=0x192;eip=0x0028ff; 	R(ADD(bx, offset(_text,byte_1268e)));	// 1948 add     bx, offset byte_1268E
cs=0x192;eip=0x002903; 	R(MOV(ah, *(raddr(ds,si+2))));	// 1949 mov     ah, [si+2]
cs=0x192;eip=0x002906; 	R(MOV(*(raddr(ds,bx+0x40)), ah));	// 1950 mov     [bx+40h], ah
cs=0x192;eip=0x002909; 	R(MOV(ah, *(raddr(ds,si))));	// 1951 mov     ah, [si]
cs=0x192;eip=0x00290b; 	R(MOV(*(raddr(ds,bx+0x20)), ah));	// 1952 mov     [bx+20h], ah
cs=0x192;eip=0x00290e; 	R(MOV(ah, *(raddr(ds,si+4))));	// 1953 mov     ah, [si+4]
cs=0x192;eip=0x002911; 	R(MOV(*(raddr(ds,bx+0x60)), ah));	// 1954 mov     [bx+60h], ah
cs=0x192;eip=0x002914; 	R(MOV(ah, *(raddr(ds,si+6))));	// 1955 mov     ah, [si+6]
cs=0x192;eip=0x002917; 	R(MOV(*(raddr(ds,bx+0x80)), ah));	// 1956 mov     [bx+80h], ah
cs=0x192;eip=0x00291b; 	R(MOV(ah, *(raddr(ds,si+8))));	// 1957 mov     ah, [si+8]
cs=0x192;eip=0x00291e; 	R(MOV(*(raddr(ds,bx+0x0E0)), ah));	// 1958 mov     [bx+0E0h], ah
cs=0x192;eip=0x002922; 	R(INC(si));	// 1959 inc     si
cs=0x192;eip=0x002923; 	R(MOV(bl, *(raddr(ds,di+2))));	// 1960 mov     bl, [di+2]
cs=0x192;eip=0x002926; 	bh = 0;AFFECT_ZFifz(0); AFFECT_SF(bh,0);	// 1961 xor     bh, bh
cs=0x192;eip=0x002928; 	R(ADD(bx, offset(_text,byte_1268e)));	// 1962 add     bx, offset byte_1268E
cs=0x192;eip=0x00292c; 	R(MOV(ah, *(raddr(ds,si+2))));	// 1963 mov     ah, [si+2]
cs=0x192;eip=0x00292f; 	R(AND(ah, 0x0C0));	// 1964 and     ah, 0C0h
cs=0x192;eip=0x002932; 	R(OR(ah, 0x3F));	// 1965 or      ah, 3Fh
cs=0x192;eip=0x002935; 	R(AND(*(raddr(ds,bx+0x40)), 0x3F));	// 1966 and     byte ptr [bx+40h], 3Fh
cs=0x192;eip=0x002939; 	R(OR(*(raddr(ds,bx+0x40)), ah));	// 1967 or      [bx+40h], ah
cs=0x192;eip=0x00293c; 	R(MOV(ah, *(raddr(ds,si))));	// 1968 mov     ah, [si]
cs=0x192;eip=0x00293e; 	R(MOV(*(raddr(ds,bx+0x20)), ah));	// 1969 mov     [bx+20h], ah
cs=0x192;eip=0x002941; 	R(MOV(ah, *(raddr(ds,si+4))));	// 1970 mov     ah, [si+4]
cs=0x192;eip=0x002944; 	R(MOV(*(raddr(ds,bx+0x60)), ah));	// 1971 mov     [bx+60h], ah
cs=0x192;eip=0x002947; 	R(MOV(ah, *(raddr(ds,si+6))));	// 1972 mov     ah, [si+6]
cs=0x192;eip=0x00294a; 	R(MOV(*(raddr(ds,bx+0x80)), ah));	// 1973 mov     [bx+80h], ah
cs=0x192;eip=0x00294e; 	R(MOV(ah, *(raddr(ds,si+8))));	// 1974 mov     ah, [si+8]
cs=0x192;eip=0x002951; 	R(MOV(*(raddr(ds,bx+0x0E0)), ah));	// 1975 mov     [bx+0E0h], ah
cs=0x192;eip=0x002955; 	R(RETN);	// 1976 retn
sub_12966:	// 1983 
cs=0x192;eip=0x002956; 	R(MOV(si, offset(_text,cmfbeg)));	// 1984 mov     si, offset CmfBeg
cs=0x192;eip=0x002959; 	R(MOV(cx, 9));	// 1985 mov     cx, 9
cs=0x192;eip=0x00295c; loc_1296c:	// 4424 
cs=0x192;eip=0x00295c; 	R(PUSH(cx));	// 1988 push    cx
cs=0x192;eip=0x00295d; 	R(PUSH(si));	// 1989 push    si
cs=0x192;eip=0x00295e; 	R(MOV(al, ch));	// 1990 mov     al, ch
cs=0x192;eip=0x002960; 	R(MOV(ah, al));	// 1991 mov     ah, al
cs=0x192;eip=0x002962; __disp=m2c::ksub_128cb;
	R(CALL(_group1));	// 1992 call    sub_128CB
cs=0x192;eip=0x002965; 	R(POP(si));	// 1993 pop     si
cs=0x192;eip=0x002966; 	R(ADD(si, 0x0B));	// 1994 add     si, 0Bh
cs=0x192;eip=0x002969; 	R(POP(cx));	// 1995 pop     cx
cs=0x192;eip=0x00296a; 	R(INC(ch));	// 1996 inc     ch
cs=0x192;eip=0x00296c; 	R(DEC(cl));	// 1997 dec     cl
cs=0x192;eip=0x00296e; 		R(JNZ(loc_1296c));	// 1998 jnz     short loc_1296C
cs=0x192;eip=0x002970; __disp=m2c::ksub_12984;
	R(CALL(_group1));	// 1999 call    sub_12984
cs=0x192;eip=0x002973; 	R(RETN);	// 2000 retn
sub_12984:	// 2007 
cs=0x192;eip=0x002974; 	R(MOV(si, offset(_text,byte_1268e)));	// 2009 mov     si, offset byte_1268E
cs=0x192;eip=0x002977; 	R(MOV(di, offset(_text,byte_1278e)));	// 2010 mov     di, offset byte_1278E
cs=0x192;eip=0x00297a; 	R(MOV(cx, 0x100));	// 2011 mov     cx, 100h
cs=0x192;eip=0x00297d; loc_1298d:	// 4425 	// 2014 repe cmpsb
cs=0x192;eip=0x00297d; 	REPE CMPSB;	// 2014 repe cmpsb
cs=0x192;eip=0x00297f; 		R(JCXZ(locret_1299f));	// 2015 jcxz    short locret_1299F
cs=0x192;eip=0x002981; 	R(MOV(ah, *(raddr(ds,si-1))));	// 2016 mov     ah, [si-1]
cs=0x192;eip=0x002984; 	R(MOV(al, 0x0FF));	// 2017 mov     al, 0FFh
cs=0x192;eip=0x002986; 	R(SUB(al, cl));	// 2018 sub     al, cl
cs=0x192;eip=0x002988; 	R(PUSH(cx));	// 2019 push    cx
cs=0x192;eip=0x002989; __disp=m2c::ksub_12897;
	R(CALL(_group1));	// 2020 call    sub_12897
cs=0x192;eip=0x00298c; 	R(POP(cx));	// 2021 pop     cx
cs=0x192;eip=0x00298d; 		R(JMP(loc_1298d));	// 2022 jmp     short loc_1298D
cs=0x192;eip=0x00298f; locret_1299f:	// 4426 
cs=0x192;eip=0x00298f; 	R(RETN);	// 2026 retn
sub_129a0:	// 2033 
cs=0x192;eip=0x002990; 	R(PUSH(ax));	// 2034 push    ax
cs=0x192;eip=0x002991; 	R(PUSH(bx));	// 2035 push    bx
cs=0x192;eip=0x002992; 	R(PUSH(cx));	// 2036 push    cx
cs=0x192;eip=0x002993; 	R(PUSH(dx));	// 2037 push    dx
cs=0x192;eip=0x002994; 	R(PUSH(si));	// 2038 push    si
cs=0x192;eip=0x002995; 	R(PUSH(di));	// 2039 push    di
cs=0x192;eip=0x002996; 	R(PUSH(bp));	// 2040 push    bp
cs=0x192;eip=0x002997; 	R(PUSH(ds));	// 2041 push    ds
cs=0x192;eip=0x002998; 	R(PUSH(es));	// 2042 push    es
cs=0x192;eip=0x002999; 	R(MOV(ax, cs));	// 2043 mov     ax, cs
cs=0x192;eip=0x00299b; 	R(MOV(ds, ax));	// 2044 mov     ds, ax
cs=0x192;eip=0x00299d; 	R(MOV(es, ax));	// 2045 mov     es, ax
cs=0x192;eip=0x00299f; 	R(MOV(bp, offset(_text,byte_12643)));	// 2047 mov     bp, offset byte_12643
cs=0x192;eip=0x0029a2; 	R(MOV(*(dw*)(((db*)&word_1288e)), 4));	// 2048 mov     ds:word_1288E, 4
cs=0x192;eip=0x0029a8; loc_129b8:	// 4427 
cs=0x192;eip=0x0029a8; 	R(DEC(*(dw*)(raddr(cs,bp+0))));	// 2051 dec     word ptr cs:[bp+0]
cs=0x192;eip=0x0029ac; 		R(JZ(loc_129c1));	// 2052 jz      short loc_129C1
cs=0x192;eip=0x0029ae; 		R(JMP(loc_12add));	// 2053 jmp     loc_12ADD
cs=0x192;eip=0x0029b1; loc_129c1:	// 4428 
cs=0x192;eip=0x0029b1; 	R(MOV(si, *(dw*)(raddr(cs,bp+2))));	// 2057 mov     si, cs:[bp+2]
cs=0x192;eip=0x0029b5; loc_129c5:	// 4429 
cs=0x192;eip=0x0029b5; LODSB;	// 2061 lodsb
cs=0x192;eip=0x0029b6; 	R(MOV(ah, al));	// 2062 mov     ah, al
cs=0x192;eip=0x0029b8; 	R(AND(ah, 0x0F0));	// 2063 and     ah, 0F0h
cs=0x192;eip=0x0029bb; 	R(CMP(ah, 0x90));	// 2064 cmp     ah, 90h
cs=0x192;eip=0x0029be; 		R(JC(loc_129eb));	// 2065 jb      short loc_129EB
cs=0x192;eip=0x0029c0; 		R(JNZ(loc_129d5));	// 2066 jnz     short loc_129D5
cs=0x192;eip=0x0029c2; 		R(JMP(loc_12aaf));	// 2067 jmp     loc_12AAF
cs=0x192;eip=0x0029c5; loc_129d5:	// 4430 
cs=0x192;eip=0x0029c5; 	R(CMP(ah, 0x0D0));	// 2071 cmp     ah, 0D0h
cs=0x192;eip=0x0029c8; 		R(JNZ(loc_129dd));	// 2072 jnz     short loc_129DD
cs=0x192;eip=0x0029ca; 		R(JMP(loc_12ace));	// 2073 jmp     loc_12ACE
cs=0x192;eip=0x0029cd; loc_129dd:	// 4431 
cs=0x192;eip=0x0029cd; 	R(CMP(ah, 0x0E0));	// 2077 cmp     ah, 0E0h
cs=0x192;eip=0x0029d0; 		R(JNZ(loc_129e5));	// 2078 jnz     short loc_129E5
cs=0x192;eip=0x0029d2; 		R(JMP(loc_12abd));	// 2079 jmp     loc_12ABD
cs=0x192;eip=0x0029d5; loc_129e5:	// 4432 
cs=0x192;eip=0x0029d5; 	R(MOV(si, *(dw*)(raddr(cs,bp+4))));	// 2083 mov     si, cs:[bp+4]
cs=0x192;eip=0x0029d9; 		R(JMP(loc_129c5));	// 2084 jmp     short loc_129C5
cs=0x192;eip=0x0029db; loc_129eb:	// 4433 
cs=0x192;eip=0x0029db; 	R(SHR(ah, 1));	// 2088 shr     ah, 1
cs=0x192;eip=0x0029dd; 	R(SHR(ah, 1));	// 2089 shr     ah, 1
cs=0x192;eip=0x0029df; 	R(SHR(ah, 1));	// 2090 shr     ah, 1
cs=0x192;eip=0x0029e1; 	R(SHR(ah, 1));	// 2091 shr     ah, 1
cs=0x192;eip=0x0029e3; 	R(PUSH(ax));	// 2092 push    ax
cs=0x192;eip=0x0029e4; 	R(MOV(al, ah));	// 2093 mov     al, ah
cs=0x192;eip=0x0029e6; 	R(ADD(al, 0x0B0));	// 2094 add     al, 0B0h
cs=0x192;eip=0x0029e8; 	ah = 0;AFFECT_ZFifz(0); AFFECT_SF(ah,0);	// 2095 xor     ah, ah
cs=0x192;eip=0x0029ea; __disp=m2c::ksub_12897;
	R(CALL(_group1));	// 2096 call    sub_12897
cs=0x192;eip=0x0029ed; 	R(POP(ax));	// 2097 pop     ax
cs=0x192;eip=0x0029ee; 	R(AND(al, 0x0F));	// 2098 and     al, 0Fh
cs=0x192;eip=0x0029f0; 		R(JZ(loc_12a1d));	// 2099 jz      short loc_12A1D
cs=0x192;eip=0x0029f2; 	R(PUSH(ax));	// 2100 push    ax
cs=0x192;eip=0x0029f3; 	R(PUSH(si));	// 2101 push    si
cs=0x192;eip=0x0029f4; 	R(DEC(al));	// 2102 dec     al
cs=0x192;eip=0x0029f6; 	R(MOV(bh, ah));	// 2103 mov     bh, ah
cs=0x192;eip=0x0029f8; 	R(PUSH(ax));	// 2104 push    ax
cs=0x192;eip=0x0029f9; 	R(MOV(ah, 0x0B));	// 2105 mov     ah, 0Bh
cs=0x192;eip=0x0029fb; 	R(MUL1_1(ah));	// 2106 mul     ah
cs=0x192;eip=0x0029fd; 	R(MOV(si, ax));	// 2107 mov     si, ax
cs=0x192;eip=0x0029ff; 	R(ADD(si, offset(_text,cmfbeg)));	// 2108 add     si, offset CmfBeg
cs=0x192;eip=0x002a03; 	R(MOV(al, bh));	// 2109 mov     al, bh
cs=0x192;eip=0x002a05; 	R(POP(bx));	// 2110 pop     bx
cs=0x192;eip=0x002a06; 	R(MOV(ah, bl));	// 2111 mov     ah, bl
cs=0x192;eip=0x002a08; __disp=m2c::ksub_128cb;
	R(CALL(_group1));	// 2112 call    sub_128CB
cs=0x192;eip=0x002a0b; 	R(POP(si));	// 2113 pop     si
cs=0x192;eip=0x002a0c; 	R(POP(ax));	// 2114 pop     ax
cs=0x192;eip=0x002a0d; loc_12a1d:	// 4434 
cs=0x192;eip=0x002a0d; LODSB;	// 2117 lodsb
cs=0x192;eip=0x002a0e; 	R(PUSH(ax));	// 2118 push    ax
cs=0x192;eip=0x002a0f; 	R(AND(al, 0x7F));	// 2119 and     al, 7Fh
cs=0x192;eip=0x002a11; 	R(SUB(al, 0x0D));	// 2120 sub     al, 0Dh
cs=0x192;eip=0x002a13; 	ah = 0;AFFECT_ZFifz(0); AFFECT_SF(ah,0);	// 2121 xor     ah, ah
cs=0x192;eip=0x002a15; 	R(MOV(bl, 0x0C));	// 2122 mov     bl, 0Ch
cs=0x192;eip=0x002a17; 	R(DIV1(bl));	// 2123 div     bl
cs=0x192;eip=0x002a19; 	R(MOV(bl, ah));	// 2124 mov     bl, ah
cs=0x192;eip=0x002a1b; 	bh = 0;AFFECT_ZFifz(0); AFFECT_SF(bh,0);	// 2125 xor     bh, bh
cs=0x192;eip=0x002a1d; 	R(ADD(bx, bx));	// 2126 add     bx, bx
cs=0x192;eip=0x002a1f; 	R(MOV(dx, *(dw*)(((db*)&word_12676)+bx)));	// 2127 mov     dx, ds:word_12676[bx]
cs=0x192;eip=0x002a23; 	R(ADD(al, al));	// 2128 add     al, al
cs=0x192;eip=0x002a25; 	R(ADD(al, al));	// 2129 add     al, al
cs=0x192;eip=0x002a27; 	R(OR(dh, al));	// 2130 or      dh, al
cs=0x192;eip=0x002a29; 	R(OR(dh, 0x20));	// 2131 or      dh, 20h
cs=0x192;eip=0x002a2c; 	R(POP(ax));	// 2132 pop     ax
cs=0x192;eip=0x002a2d; 	R(PUSH(ax));	// 2133 push    ax
cs=0x192;eip=0x002a2e; 	R(MOV(bl, ah));	// 2134 mov     bl, ah
cs=0x192;eip=0x002a30; 	bh = 0;AFFECT_ZFifz(0); AFFECT_SF(bh,0);	// 2135 xor     bh, bh
cs=0x192;eip=0x002a32; 	R(MOV(*((&byte_1272e)+bx), dl));	// 2136 mov     ds:byte_1272E[bx], dl
cs=0x192;eip=0x002a36; 	R(MOV(*((&byte_1273e)+bx), dh));	// 2137 mov     ds:byte_1273E[bx], dh
cs=0x192;eip=0x002a3a; 	R(ADD(al, al));	// 2138 add     al, al
cs=0x192;eip=0x002a3c; 		R(JNC(loc_12a6e));	// 2139 jnb     short loc_12A6E
cs=0x192;eip=0x002a3e; 	R(PUSH(ax));	// 2140 push    ax
cs=0x192;eip=0x002a3f; 	R(MOV(al, 3));	// 2141 mov     al, 3
cs=0x192;eip=0x002a41; 	R(MUL1_1(ah));	// 2142 mul     ah
cs=0x192;eip=0x002a43; 	R(MOV(di, ax));	// 2143 mov     di, ax
cs=0x192;eip=0x002a45; 	R(ADD(di, offset(_text,adlbeg)));	// 2144 add     di, offset AdlBeg
cs=0x192;eip=0x002a49; LODSB;	// 2145 lodsb
cs=0x192;eip=0x002a4a; 	R(MUL1_1(*(raddr(ds,di))));	// 2146 mul     byte ptr [di]
cs=0x192;eip=0x002a4c; 	R(XOR(ah, 0x3F));	// 2147 xor     ah, 3Fh
cs=0x192;eip=0x002a4f; 	bh = 0;AFFECT_ZFifz(0); AFFECT_SF(bh,0);	// 2148 xor     bh, bh
cs=0x192;eip=0x002a51; 	R(MOV(bl, *(raddr(ds,di+2))));	// 2149 mov     bl, [di+2]
cs=0x192;eip=0x002a54; 	R(AND(*((&byte_126ce)+bx), 0x0C0));	// 2150 and     ds:byte_126CE[bx], 0C0h
cs=0x192;eip=0x002a59; 	R(OR(*((&byte_126ce)+bx), ah));	// 2151 or      ds:byte_126CE[bx], ah
cs=0x192;eip=0x002a5d; 	R(POP(ax));	// 2152 pop     ax
cs=0x192;eip=0x002a5e; loc_12a6e:	// 4435 
cs=0x192;eip=0x002a5e; 	R(POP(ax));	// 2155 pop     ax
cs=0x192;eip=0x002a5f; 	R(PUSH(ax));	// 2156 push    ax
cs=0x192;eip=0x002a60; 	R(MOV(bl, ah));	// 2157 mov     bl, ah
cs=0x192;eip=0x002a62; 	bh = 0;AFFECT_ZFifz(0); AFFECT_SF(bh,0);	// 2158 xor     bh, bh
cs=0x192;eip=0x002a64; 	R(ADD(bx, offset(_text,byte_12afa)));	// 2159 add     bx, offset byte_12AFA
cs=0x192;eip=0x002a68; 	R(MOV(al, *(raddr(ds,bx))));	// 2160 mov     al, [bx]
cs=0x192;eip=0x002a6a; 	R(AND(al, al));	// 2161 and     al, al
cs=0x192;eip=0x002a6c; 		R(JZ(loc_12a96));	// 2162 jz      short loc_12A96
cs=0x192;eip=0x002a71; 	R(POP(ax));	// 2166 pop     ax
cs=0x192;eip=0x002a72; 	R(PUSH(ax));	// 2167 push    ax
cs=0x192;eip=0x002a73; 	R(MOV(al, ah));	// 2168 mov     al, ah
cs=0x192;eip=0x002a75; 	R(ADD(al, 0x80));	// 2169 add     al, 80h
cs=0x192;eip=0x002a77; __disp=m2c::ksub_12b43;
	R(CALL(_group1));	// 2170 call    sub_12B43
cs=0x192;eip=0x002a7a; 	R(POP(ax));	// 2171 pop     ax
cs=0x192;eip=0x002a7b; 	R(PUSH(ax));	// 2172 push    ax
cs=0x192;eip=0x002a7c; 	R(MOV(al, *(raddr(ds,bx))));	// 2173 mov     al, [bx]
cs=0x192;eip=0x002a7e; __disp=m2c::ksub_12b43;
	R(CALL(_group1));	// 2174 call    sub_12B43
cs=0x192;eip=0x002a81; 	R(MOV(al, 0x7F));	// 2175 mov     al, 7Fh
cs=0x192;eip=0x002a83; __disp=m2c::ksub_12b43;
	R(CALL(_group1));	// 2176 call    sub_12B43
cs=0x192;eip=0x002a86; loc_12a96:	// 4436 
cs=0x192;eip=0x002a86; 	R(POP(ax));	// 2179 pop     ax
cs=0x192;eip=0x002a87; 	R(PUSH(ax));	// 2180 push    ax
cs=0x192;eip=0x002a88; 	R(MOV(al, ah));	// 2181 mov     al, ah
cs=0x192;eip=0x002a8a; 	R(ADD(al, 0x90));	// 2182 add     al, 90h
cs=0x192;eip=0x002a8c; __disp=m2c::ksub_12b43;
	R(CALL(_group1));	// 2183 call    sub_12B43
cs=0x192;eip=0x002a8f; 	R(POP(ax));	// 2184 pop     ax
cs=0x192;eip=0x002a90; 	R(AND(al, 0x7F));	// 2185 and     al, 7Fh
cs=0x192;eip=0x002a92; 	R(MOV(*(raddr(ds,bx)), al));	// 2186 mov     [bx], al
cs=0x192;eip=0x002a94; __disp=m2c::ksub_12b43;
	R(CALL(_group1));	// 2187 call    sub_12B43
cs=0x192;eip=0x002a97; 	R(MOV(al, 0x7F));	// 2188 mov     al, 7Fh
cs=0x192;eip=0x002a99; __disp=m2c::ksub_12b43;
	R(CALL(_group1));	// 2189 call    sub_12B43
cs=0x192;eip=0x002a9c; 		R(JMP(loc_129c5));	// 2190 jmp     loc_129C5
cs=0x192;eip=0x002a9f; loc_12aaf:	// 4437 
cs=0x192;eip=0x002a9f; 	R(AND(al, 0x0F));	// 2194 and     al, 0Fh
cs=0x192;eip=0x002aa1; 	ah = 0;AFFECT_ZFifz(0); AFFECT_SF(ah,0);	// 2195 xor     ah, ah
cs=0x192;eip=0x002aa3; 	R(MOV(bx, ax));	// 2196 mov     bx, ax
cs=0x192;eip=0x002aa5; 	R(AND(*((&byte_1273e)+bx), 0x0DF));	// 2197 and     ds:byte_1273E[bx], 0DFh
cs=0x192;eip=0x002aaa; 		R(JMP(loc_129c5));	// 2198 jmp     loc_129C5
cs=0x192;eip=0x002aad; loc_12abd:	// 4438 
cs=0x192;eip=0x002aad; 	R(AND(al, 0x0F));	// 2202 and     al, 0Fh
cs=0x192;eip=0x002aaf; 	R(MOV(ah, al));	// 2203 mov     ah, al
cs=0x192;eip=0x002ab1; LODSB;	// 2204 lodsb
cs=0x192;eip=0x002ab2; 	R(INC(ax));	// 2205 inc     ax
cs=0x192;eip=0x002ab3; 	R(MOV(dx, 5));	// 2206 mov     dx, 5
cs=0x192;eip=0x002ab6; 	R(MUL1_2(dx));	// 2207 mul     dx
cs=0x192;eip=0x002ab8; 	R(MOV(*(dw*)(raddr(cs,bp+0)), ax));	// 2208 mov     cs:[bp+0], ax
cs=0x192;eip=0x002abc; 		R(JMP(loc_12ad9));	// 2209 jmp     short loc_12AD9
cs=0x192;eip=0x002abe; loc_12ace:	// 4439 
cs=0x192;eip=0x002abe; 	R(AND(al, 0x0F));	// 2213 and     al, 0Fh
cs=0x192;eip=0x002ac0; 	R(INC(ax));	// 2214 inc     ax
cs=0x192;eip=0x002ac1; 	R(MOV(ah, 5));	// 2215 mov     ah, 5
cs=0x192;eip=0x002ac3; 	R(MUL1_1(ah));	// 2216 mul     ah
cs=0x192;eip=0x002ac5; 	R(MOV(*(dw*)(raddr(cs,bp+0)), ax));	// 2217 mov     cs:[bp+0], ax
cs=0x192;eip=0x002ac9; loc_12ad9:	// 4440 
cs=0x192;eip=0x002ac9; 	R(MOV(*(dw*)(raddr(cs,bp+2)), si));	// 2220 mov     cs:[bp+2], si
cs=0x192;eip=0x002acd; loc_12add:	// 4441 
cs=0x192;eip=0x002acd; 	R(ADD(bp, 6));	// 2223 add     bp, 6
cs=0x192;eip=0x002ad0; 	R(DEC(*(dw*)(((db*)&word_1288e))));	// 2224 dec     ds:word_1288E
cs=0x192;eip=0x002ad4; 		R(JZ(loc_12ae9));	// 2225 jz      short loc_12AE9
cs=0x192;eip=0x002ad6; 		R(JMP(loc_129b8));	// 2226 jmp     loc_129B8
cs=0x192;eip=0x002ad9; loc_12ae9:	// 4442 
cs=0x192;eip=0x002ad9; __disp=m2c::ksub_12984;
	R(CALL(_group1));	// 2230 call    sub_12984
cs=0x192;eip=0x002adc; 	R(POP(es));	// 2231 pop     es
cs=0x192;eip=0x002add; 	R(POP(ds));	// 2233 pop     ds
cs=0x192;eip=0x002ade; 	R(POP(bp));	// 2235 pop     bp
cs=0x192;eip=0x002adf; 	R(POP(di));	// 2236 pop     di
cs=0x192;eip=0x002ae0; 	R(POP(si));	// 2237 pop     si
cs=0x192;eip=0x002ae1; 	R(POP(dx));	// 2238 pop     dx
cs=0x192;eip=0x002ae2; 	R(POP(cx));	// 2239 pop     cx
cs=0x192;eip=0x002ae3; 	R(POP(bx));	// 2240 pop     bx
cs=0x192;eip=0x002ae4; 	R(POP(ax));	// 2241 pop     ax
cs=0x192;eip=0x002ae5; 	R(RETN);	// 2242 retn
sub_12b0c:	// 2258 	// 2260 nop
cs=0x192;eip=0x002afd; 	ah = 0;AFFECT_ZFifz(0); AFFECT_SF(ah,0);	// 2261 xor     ah, ah
cs=0x192;eip=0x002aff; loc_12b0f:	// 4444 
cs=0x192;eip=0x002aff; 	R(DEC(ah));	// 2264 dec     ah
cs=0x192;eip=0x002b01; 		R(JZ(loc_12b1c));	// 2265 jz      short loc_12B1C
cs=0x192;eip=0x002b06; 	R(IN(al, dx));	// 2269 in      al, dx
cs=0x192;eip=0x002b07; 	R(SHL(al, cl));	// 2270 shl     al, cl
cs=0x192;eip=0x002b09; 		R(JC(loc_12b0f));	// 2271 jb      short loc_12B0F
cs=0x192;eip=0x002b0b; locret_12b1b:	// 4445 
cs=0x192;eip=0x002b0b; 	R(RETN);	// 2274 retn
cs=0x192;eip=0x002b0c; loc_12b1c:	// 4446 
cs=0x192;eip=0x002b0c; 	R(MOV(al, *(raddr(cs,m2c::klocret_12b1b))));	// 2278 mov     al, byte ptr cs:locret_12B1B
cs=0x192;eip=0x002b10; 	R(MOV(*(raddr(cs,m2c::ksub_12b0c)), al));	// 2279 mov     byte ptr cs:sub_12B0C, al
cs=0x192;eip=0x002b14; 	R(RETN);	// 2280 retn
sub_12b25:	// 2287 
cs=0x192;eip=0x002b15; 	R(MOV(dx, *(dw*)(raddr(cs,m2c::kadlend))));	// 2289 mov     dx, word ptr cs:AdlEnd
cs=0x192;eip=0x002b1a; 	R(MOV(al, 0x0FF));	// 2290 mov     al, 0FFh
cs=0x192;eip=0x002b1c; 	R(OUT(dx, al));	// 2291 out     dx, al
cs=0x192;eip=0x002b1d; 	R(MOV(cl, 1));	// 2292 mov     cl, 1
cs=0x192;eip=0x002b1f; __disp=m2c::ksub_12b0c;
	R(CALL(_group1));	// 2293 call    sub_12B0C
cs=0x192;eip=0x002b22; 	R(DEC(dx));	// 2294 dec     dx
cs=0x192;eip=0x002b23; 	R(IN(al, dx));	// 2295 in      al, dx
cs=0x192;eip=0x002b24; 	R(INC(dx));	// 2296 inc     dx
cs=0x192;eip=0x002b25; 	R(MOV(al, 0x3F));	// 2297 mov     al, 3Fh ; '?'
cs=0x192;eip=0x002b27; 	R(OUT(dx, al));	// 2298 out     dx, al
cs=0x192;eip=0x002b28; __disp=m2c::ksub_12b0c;
	R(CALL(_group1));	// 2299 call    sub_12B0C
cs=0x192;eip=0x002b2b; 	R(DEC(dx));	// 2300 dec     dx
cs=0x192;eip=0x002b2c; 	R(IN(al, dx));	// 2301 in      al, dx
cs=0x192;eip=0x002b2d; 	R(MOV(al, 0x0FF));	// 2302 mov     al, 0FFh
cs=0x192;eip=0x002b2f; __disp=m2c::ksub_12b43;
	R(CALL(_group1));	// 2303 call    sub_12B43
cs=0x192;eip=0x002b32; 	R(RETN);	// 2304 retn
sub_12b43:	// 2311 
cs=0x192;eip=0x002b33; 	R(MOV(dx, *(dw*)(raddr(cs,m2c::kadlend))));	// 2313 mov     dx, word ptr cs:AdlEnd
cs=0x192;eip=0x002b38; 	R(MOV(cl, 2));	// 2314 mov     cl, 2
cs=0x192;eip=0x002b3a; 	R(PUSH(ax));	// 2315 push    ax
cs=0x192;eip=0x002b3b; __disp=m2c::ksub_12b0c;
	R(CALL(_group1));	// 2316 call    sub_12B0C
cs=0x192;eip=0x002b3e; 	R(POP(ax));	// 2317 pop     ax
cs=0x192;eip=0x002b3f; 	R(DEC(dx));	// 2318 dec     dx
cs=0x192;eip=0x002b40; 	R(OUT(dx, al));	// 2319 out     dx, al
cs=0x192;eip=0x002b41; 	R(RETN);	// 2320 retn

    return;
    __dispatch_call:
    switch (__disp) {
        case m2c::kadlend: 	goto adlend;
        case m2c::kloc_10173: 	goto loc_10173;
        case m2c::kloc_10197: 	goto loc_10197;
        case m2c::kloc_1019a: 	goto loc_1019a;
        case m2c::kloc_101a3: 	goto loc_101a3;
        case m2c::kloc_101c7: 	goto loc_101c7;
        case m2c::kloc_101da: 	goto loc_101da;
        case m2c::kloc_101e0: 	goto loc_101e0;
        case m2c::kloc_101fa: 	goto loc_101fa;
        case m2c::kloc_1020f: 	goto loc_1020f;
        case m2c::kloc_10212: 	goto loc_10212;
        case m2c::kloc_10284: 	goto loc_10284;
        case m2c::kloc_1029d: 	goto loc_1029d;
        case m2c::kloc_102da: 	goto loc_102da;
        case m2c::kloc_102e6: 	goto loc_102e6;
        case m2c::kloc_10324: 	goto loc_10324;
        case m2c::kloc_1034f: 	goto loc_1034f;
        case m2c::kloc_10360: 	goto loc_10360;
        case m2c::kloc_1038b: 	goto loc_1038b;
        case m2c::kloc_1039f: 	goto loc_1039f;
        case m2c::kloc_103d3: 	goto loc_103d3;
        case m2c::kloc_103eb: 	goto loc_103eb;
        case m2c::kloc_103fc: 	goto loc_103fc;
        case m2c::kloc_10403: 	goto loc_10403;
        case m2c::kloc_10411: 	goto loc_10411;
        case m2c::kloc_1041e: 	goto loc_1041e;
        case m2c::kloc_10430: 	goto loc_10430;
        case m2c::kloc_10454: 	goto loc_10454;
        case m2c::kloc_10459: 	goto loc_10459;
        case m2c::kloc_1045c: 	goto loc_1045c;
        case m2c::kloc_1047d: 	goto loc_1047d;
        case m2c::kloc_10490: 	goto loc_10490;
        case m2c::kloc_104a2: 	goto loc_104a2;
        case m2c::kloc_104bc: 	goto loc_104bc;
        case m2c::kloc_104bf: 	goto loc_104bf;
        case m2c::kloc_104c6: 	goto loc_104c6;
        case m2c::kloc_104dc: 	goto loc_104dc;
        case m2c::kloc_104eb: 	goto loc_104eb;
        case m2c::kloc_10512: 	goto loc_10512;
        case m2c::kloc_10527: 	goto loc_10527;
        case m2c::kloc_10536: 	goto loc_10536;
        case m2c::kloc_1056c: 	goto loc_1056c;
        case m2c::kloc_1057f: 	goto loc_1057f;
        case m2c::kloc_1058b: 	goto loc_1058b;
        case m2c::kloc_105af: 	goto loc_105af;
        case m2c::kloc_105cc: 	goto loc_105cc;
        case m2c::kloc_105e5: 	goto loc_105e5;
        case m2c::kloc_105f5: 	goto loc_105f5;
        case m2c::kloc_105fb: 	goto loc_105fb;
        case m2c::kloc_10623: 	goto loc_10623;
        case m2c::kloc_1064e: 	goto loc_1064e;
        case m2c::kloc_1065e: 	goto loc_1065e;
        case m2c::kloc_12893: 	goto loc_12893;
        case m2c::kloc_128b7: 	goto loc_128b7;
        case m2c::kloc_128c1: 	goto loc_128c1;
        case m2c::kloc_1296c: 	goto loc_1296c;
        case m2c::kloc_1298d: 	goto loc_1298d;
        case m2c::kloc_129b8: 	goto loc_129b8;
        case m2c::kloc_129c1: 	goto loc_129c1;
        case m2c::kloc_129c5: 	goto loc_129c5;
        case m2c::kloc_129d5: 	goto loc_129d5;
        case m2c::kloc_129dd: 	goto loc_129dd;
        case m2c::kloc_129e5: 	goto loc_129e5;
        case m2c::kloc_129eb: 	goto loc_129eb;
        case m2c::kloc_12a1d: 	goto loc_12a1d;
        case m2c::kloc_12a6e: 	goto loc_12a6e;
        case m2c::kloc_12a96: 	goto loc_12a96;
        case m2c::kloc_12aaf: 	goto loc_12aaf;
        case m2c::kloc_12abd: 	goto loc_12abd;
        case m2c::kloc_12ace: 	goto loc_12ace;
        case m2c::kloc_12ad9: 	goto loc_12ad9;
        case m2c::kloc_12add: 	goto loc_12add;
        case m2c::kloc_12ae9: 	goto loc_12ae9;
        case m2c::kloc_12b0f: 	goto loc_12b0f;
        case m2c::kloc_12b1c: 	goto loc_12b1c;
        case m2c::klocret_1041d: 	goto locret_1041d;
        case m2c::klocret_1299f: 	goto locret_1299f;
        case m2c::klocret_12b1b: 	goto locret_12b1b;
        case m2c::kmainproc: 	goto mainproc;
        case m2c::kstart: 	goto start;
        case m2c::ksub_10255: 	goto sub_10255;
        case m2c::ksub_102a3: 	goto sub_102a3;
        case m2c::ksub_102d3: 	goto sub_102d3;
        case m2c::ksub_102ea: 	goto sub_102ea;
        case m2c::ksub_102f6: 	goto sub_102f6;
        case m2c::ksub_102fd: 	goto sub_102fd;
        case m2c::ksub_10303: 	goto sub_10303;
        case m2c::ksub_10309: 	goto sub_10309;
        case m2c::ksub_10424: 	goto sub_10424;
        case m2c::ksub_1053f: 	goto sub_1053f;
        case m2c::ksub_10549: 	goto sub_10549;
        case m2c::ksub_1066e: 	goto sub_1066e;
        case m2c::ksub_10697: 	goto sub_10697;
        case m2c::ksub_106b3: 	goto sub_106b3;
        case m2c::ksub_12890: 	goto sub_12890;
        case m2c::ksub_12897: 	goto sub_12897;
        case m2c::ksub_128b4: 	goto sub_128b4;
        case m2c::ksub_128cb: 	goto sub_128cb;
        case m2c::ksub_12966: 	goto sub_12966;
        case m2c::ksub_12984: 	goto sub_12984;
        case m2c::ksub_129a0: 	goto sub_129a0;
        case m2c::ksub_12b0c: 	goto sub_12b0c;
        case m2c::ksub_12b25: 	goto sub_12b25;
        case m2c::ksub_12b43: 	goto sub_12b43;
        default: m2c::log_error("Jump to nowhere to 0x%x. See line %d\n", __disp, __LINE__);/*stackDump(_state);*/ abort();
    };
}


bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state){
    switch (__disp) {
        case m2c::kloc_103fc: 	_group1(__disp, _state); break;
        case m2c::kloc_102e6: 	_group1(__disp, _state); break;
        case m2c::ksub_10424: 	_group1(__disp, _state); break;
        case m2c::kloc_1056c: 	_group1(__disp, _state); break;
        case m2c::kloc_101e0: 	_group1(__disp, _state); break;
        case m2c::kloc_101fa: 	_group1(__disp, _state); break;
        case m2c::kloc_102da: 	_group1(__disp, _state); break;
        case m2c::kloc_104bf: 	_group1(__disp, _state); break;
        case m2c::ksub_129a0: 	_group1(__disp, _state); break;
        case m2c::kloc_12a1d: 	_group1(__disp, _state); break;
        case m2c::ksub_1066e: 	_group1(__disp, _state); break;
        case m2c::ksub_102fd: 	_group1(__disp, _state); break;
        case m2c::ksub_10255: 	_group1(__disp, _state); break;
        case m2c::kloc_1038b: 	_group1(__disp, _state); break;
        case m2c::kloc_1039f: 	_group1(__disp, _state); break;
        case m2c::ksub_12b0c: 	_group1(__disp, _state); break;
        case m2c::kloc_103eb: 	_group1(__disp, _state); break;
        case m2c::kloc_101da: 	_group1(__disp, _state); break;
        case m2c::klocret_1041d: 	_group1(__disp, _state); break;
        case m2c::ksub_102d3: 	_group1(__disp, _state); break;
        case m2c::kloc_104c6: 	_group1(__disp, _state); break;
        case m2c::kloc_10527: 	_group1(__disp, _state); break;
        case m2c::kloc_12abd: 	_group1(__disp, _state); break;
        case m2c::kloc_1298d: 	_group1(__disp, _state); break;
        case m2c::ksub_10549: 	_group1(__disp, _state); break;
        case m2c::kloc_10173: 	_group1(__disp, _state); break;
        case m2c::kloc_1064e: 	_group1(__disp, _state); break;
        case m2c::kloc_1019a: 	_group1(__disp, _state); break;
        case m2c::ksub_102ea: 	_group1(__disp, _state); break;
        case m2c::klocret_1299f: 	_group1(__disp, _state); break;
        case m2c::kloc_1047d: 	_group1(__disp, _state); break;
        case m2c::kadlend: 	_group1(__disp, _state); break;
        case m2c::kloc_10197: 	_group1(__disp, _state); break;
        case m2c::ksub_106b3: 	_group1(__disp, _state); break;
        case m2c::kloc_1020f: 	_group1(__disp, _state); break;
        case m2c::kloc_12ad9: 	_group1(__disp, _state); break;
        case m2c::kloc_12add: 	_group1(__disp, _state); break;
        case m2c::ksub_10309: 	_group1(__disp, _state); break;
        case m2c::kloc_129dd: 	_group1(__disp, _state); break;
        case m2c::ksub_102f6: 	_group1(__disp, _state); break;
        case m2c::kloc_1057f: 	_group1(__disp, _state); break;
        case m2c::kloc_10454: 	_group1(__disp, _state); break;
        case m2c::kloc_105cc: 	_group1(__disp, _state); break;
        case m2c::kloc_128b7: 	_group1(__disp, _state); break;
        case m2c::klocret_12b1b: 	_group1(__disp, _state); break;
        case m2c::kmainproc: 	_group1(__disp, _state); break;
        case m2c::kloc_104a2: 	_group1(__disp, _state); break;
        case m2c::ksub_10697: 	_group1(__disp, _state); break;
        case m2c::kloc_1045c: 	_group1(__disp, _state); break;
        case m2c::kloc_129d5: 	_group1(__disp, _state); break;
        case m2c::kloc_1065e: 	_group1(__disp, _state); break;
        case m2c::kloc_103d3: 	_group1(__disp, _state); break;
        case m2c::kloc_10459: 	_group1(__disp, _state); break;
        case m2c::kloc_10284: 	_group1(__disp, _state); break;
        case m2c::kstart: 	_group1(__disp, _state); break;
        case m2c::ksub_12890: 	_group1(__disp, _state); break;
        case m2c::kloc_129e5: 	_group1(__disp, _state); break;
        case m2c::kloc_128c1: 	_group1(__disp, _state); break;
        case m2c::kloc_1058b: 	_group1(__disp, _state); break;
        case m2c::ksub_128cb: 	_group1(__disp, _state); break;
        case m2c::ksub_1053f: 	_group1(__disp, _state); break;
        case m2c::ksub_12b25: 	_group1(__disp, _state); break;
        case m2c::ksub_12984: 	_group1(__disp, _state); break;
        case m2c::kloc_105f5: 	_group1(__disp, _state); break;
        case m2c::kloc_10212: 	_group1(__disp, _state); break;
        case m2c::kloc_104bc: 	_group1(__disp, _state); break;
        case m2c::kloc_10512: 	_group1(__disp, _state); break;
        case m2c::kloc_10411: 	_group1(__disp, _state); break;
        case m2c::ksub_12897: 	_group1(__disp, _state); break;
        case m2c::kloc_10430: 	_group1(__disp, _state); break;
        case m2c::ksub_102a3: 	_group1(__disp, _state); break;
        case m2c::kloc_129b8: 	_group1(__disp, _state); break;
        case m2c::kloc_12b1c: 	_group1(__disp, _state); break;
        case m2c::kloc_104eb: 	_group1(__disp, _state); break;
        case m2c::kloc_105af: 	_group1(__disp, _state); break;
        case m2c::ksub_12966: 	_group1(__disp, _state); break;
        case m2c::kloc_12893: 	_group1(__disp, _state); break;
        case m2c::kloc_104dc: 	_group1(__disp, _state); break;
        case m2c::kloc_12ace: 	_group1(__disp, _state); break;
        case m2c::kloc_101c7: 	_group1(__disp, _state); break;
        case m2c::kloc_12b0f: 	_group1(__disp, _state); break;
        case m2c::kloc_1034f: 	_group1(__disp, _state); break;
        case m2c::ksub_128b4: 	_group1(__disp, _state); break;
        case m2c::kloc_129c5: 	_group1(__disp, _state); break;
        case m2c::kloc_101a3: 	_group1(__disp, _state); break;
        case m2c::kloc_129c1: 	_group1(__disp, _state); break;
        case m2c::kloc_12a6e: 	_group1(__disp, _state); break;
        case m2c::kloc_12aaf: 	_group1(__disp, _state); break;
        case m2c::kloc_129eb: 	_group1(__disp, _state); break;
        case m2c::kloc_10360: 	_group1(__disp, _state); break;
        case m2c::kloc_10403: 	_group1(__disp, _state); break;
        case m2c::ksub_12b43: 	_group1(__disp, _state); break;
        case m2c::kloc_1296c: 	_group1(__disp, _state); break;
        case m2c::kloc_10623: 	_group1(__disp, _state); break;
        case m2c::ksub_10303: 	_group1(__disp, _state); break;
        case m2c::kloc_12a96: 	_group1(__disp, _state); break;
        case m2c::kloc_1029d: 	_group1(__disp, _state); break;
        case m2c::kloc_105e5: 	_group1(__disp, _state); break;
        case m2c::kloc_12ae9: 	_group1(__disp, _state); break;
        case m2c::kloc_10324: 	_group1(__disp, _state); break;
        case m2c::kloc_10536: 	_group1(__disp, _state); break;
        case m2c::kloc_10490: 	_group1(__disp, _state); break;
        case m2c::kloc_1041e: 	_group1(__disp, _state); break;
        case m2c::kloc_105fb: 	_group1(__disp, _state); break;
        default: return false;//m2c::log_error("Call to nowhere to 0x%x. See line %d\n", __disp, __LINE__);stackDump(_state); abort();
     };
     return true;
}

#include <algorithm>
#include <iterator>
#define MYCOPY(x) {int res = std::inner_product(std::begin(tmp999),std::end(tmp999),std::begin(x), 0, std::plus<int>(), std::not_equal_to<int>());\
if (res) {printf("not equal "#x);abort();};std::copy(std::begin(tmp999),std::end(tmp999),std::begin(x));}

namespace m2c {
//struct Initializer {
void   Initializer()
   {
/*
    {db tmp999[7200]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1)}
    {db tmp999[2]={0,0};MYCOPY(dummy2)}
    dummy3=144;
    {db tmp999[96]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy4)}
    {db tmp999[1511]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy5)}
*/
    cmfbeg=50;
    dummy6=17;
    dummy7=68;
    dummy9=248;
    dummy10=245;
    {db tmp999[11]={255,127,0,0,14,2,2,34,0,242,245};MYCOPY(dummy11)}
    {db tmp999[12]={19,67,0,0,14,5,1,78,0,218,249,37};MYCOPY(dummy12)}
    {db tmp999[11]={21,0,0,10,17,1,138,64,241,241,17};MYCOPY(dummy13)}
    {db tmp999[4]={179,0,0,1};MYCOPY(dummy14)}
    byte_10786=12;
    {char tmp999[16]={'u',0,' ',224,255,97,203,254,209,96,'?',209,96,'?',209,96};MYCOPY(au)}
    {char tmp999[16]={'K',211,96,'?',211,96,'K',211,96,'?',211,96,'?',209,96,'K'};MYCOPY(dummy15)}
    {char tmp999[17]={211,96,'?',211,96,'I',209,96,'=',209,96,'=',209,96,'I',211,96};MYCOPY(dummy16)}
    {char tmp999[16]={'=',211,96,'I',211,96,'=',211,96,'=',209,96,'I',211,96,'='};MYCOPY(dummy17)}
    {char tmp999[17]={211,96,'K',209,96,'?',209,96,'?',209,96,'K',211,96,'?',211,96};MYCOPY(dummy18)}
    {char tmp999[16]={'K',211,96,'?',211,96,'?',209,96,'K',211,96,'?',211,96,'I'};MYCOPY(dummy19)}
    {char tmp999[17]={209,96,'=',209,96,'=',209,96,'I',211,96,'=',211,96,'I',211,96};MYCOPY(dummy20)}
    {char tmp999[16]={'=',211,96,'=',209,96,'I',211,96,'=',211,96,'I',209,96,'='};MYCOPY(dummy21)}
    {char tmp999[17]={209,96,'=',209,96,'I',211,96,'=',211,96,'I',211,96,'=',211,96};MYCOPY(dummy22)}
    {char tmp999[17]={'=',209,96,'I',211,96,'=',211,96,'W',209,96,'K',209,113,210,254};MYCOPY(dummy23)}
    {char tmp999[17]={209,96,'U',209,112,'K',209,96,'P',209,112,'K',209,96,'R',209,112};MYCOPY(dummy24)}
    {char tmp999[16]={'K',209,96,'N',209,112,'K',209,96,'P',209,112,'K',209,96,'N'};MYCOPY(dummy25)}
    {char tmp999[17]={209,112,'K',211,96,'W',209,112,'K',209,96,'R',209,112,'U',209,96};MYCOPY(dummy26)}
    {char tmp999[16]={'K',209,112,'P',209,96,'K',209,112,'R',209,96,'K',209,112,'N'};MYCOPY(dummy27)}
    {char tmp999[17]={209,96,'K',209,112,'P',209,96,'K',209,112,'N',209,96,'K',211,96};MYCOPY(dummy28)}
    {char tmp999[25]={'K','p','U',209,96,'U','p','K',211,96,'K','p','R',209,96,'R','p','K',211,96,'P','p','K',209,96};MYCOPY(dummy29)}
    {char tmp999[25]={'P','p','K',211,96,'K','p','N',209,96,'N','p','K',211,96,'K','p','N',211,96,'N','p','K',211,96};MYCOPY(dummy30)}
    {char tmp999[25]={'U','p','K',209,96,'U','p','K',211,96,'K','p','R',209,96,'R','p','K',211,96,'P','p','K',209,96};MYCOPY(dummy31)}
    {char tmp999[25]={'P','p','K',211,96,'K','p','N',209,96,'N','p','K',211,96,'K','p','N',211,96,'N','p','K',211,96};MYCOPY(dummy32)}
    {char tmp999[16]={'W',209,112,'K',209,96,'R',209,112,'U',209,96,'K',209,112,'P'};MYCOPY(dummy33)}
    {char tmp999[17]={209,96,'K',209,112,'R',209,96,'K',209,112,'N',209,96,'K',209,112};MYCOPY(dummy34)}
    {char tmp999[16]={'P',209,96,'K',209,112,'N',209,96,'K',211,112,'W',209,96,'K'};MYCOPY(dummy35)}
    {char tmp999[17]={209,112,'R',209,96,'U',209,112,'K',209,96,'P',209,112,'K',209,96};MYCOPY(dummy36)}
    {char tmp999[16]={'R',209,112,'K',209,96,'N',209,112,'K',209,96,'P',209,112,'K'};MYCOPY(dummy37)}
    {char tmp999[19]={209,96,'N',209,112,'K',211,96,'U','p','K',209,96,'U','p','K',211,96,'K'};MYCOPY(dummy38)}
    {char tmp999[24]={'p','R',209,96,'R','p','K',211,96,'P','p','K',209,96,'P','p','K',211,96,'K','p','N',209,96};MYCOPY(dummy39)}
    {char tmp999[25]={'N','p','K',211,96,'K','p','N',211,96,'N','p','K',211,96,'U','p','K',209,96,'U','p','K',211,96};MYCOPY(dummy40)}
    {char tmp999[21]={'K','p','R',209,96,'R','p','K',211,96,'P','p','K',209,96,'P','p','K',211,96,'K'};MYCOPY(dummy41)}
    {db tmp999[10]={112,78,209,96,78,112,75,211,96,75};MYCOPY(dummy42)}
    {db tmp999[10]={112,78,211,96,78,112,75,211,96,87};MYCOPY(dummy43)}
    {db tmp999[10]={209,112,85,209,96,82,209,112,85,209};MYCOPY(dummy44)}
    {db tmp999[10]={96,82,209,112,80,209,96,82,209,112};MYCOPY(dummy45)}
    {db tmp999[10]={80,209,96,78,209,112,80,209,96,78};MYCOPY(dummy46)}
    {db tmp999[10]={209,112,75,209,96,78,209,112,75,209};MYCOPY(dummy47)}
    {db tmp999[10]={96,73,211,112,87,209,96,85,209,112};MYCOPY(dummy48)}
    {db tmp999[10]={82,209,96,85,209,112,82,209,96,80};MYCOPY(dummy49)}
    {db tmp999[10]={209,112,82,209,96,80,209,112,78,209};MYCOPY(dummy50)}
    {db tmp999[10]={96,80,209,112,78,209,96,75,209,112};MYCOPY(dummy51)}
    {db tmp999[10]={78,209,96,75,209,112,73,211,96,87};MYCOPY(dummy52)}
    {db tmp999[10]={209,112,85,209,96,82,209,112,85,209};MYCOPY(dummy53)}
    {db tmp999[10]={96,82,209,112,80,209,96,82,209,112};MYCOPY(dummy54)}
    {db tmp999[10]={80,209,96,78,209,112,80,209,96,78};MYCOPY(dummy55)}
    {db tmp999[10]={209,112,75,209,96,78,209,112,75,209};MYCOPY(dummy56)}
    {db tmp999[10]={96,73,211,112,87,209,96,85,209,112};MYCOPY(dummy57)}
    {db tmp999[10]={82,209,96,85,209,112,82,209,96,80};MYCOPY(dummy58)}
    {db tmp999[10]={209,112,82,209,96,80,209,112,78,209};MYCOPY(dummy59)}
    {db tmp999[10]={96,80,209,112,78,209,96,75,209,112};MYCOPY(dummy60)}
    {db tmp999[10]={78,209,96,75,209,112,73,211,96,73};MYCOPY(dummy61)}
    {db tmp999[10]={209,112,75,209,96,78,209,112,75,209};MYCOPY(dummy62)}
    {db tmp999[10]={96,78,209,112,80,209,96,78,209,112};MYCOPY(dummy63)}
    {db tmp999[10]={80,209,96,82,209,112,80,209,96,82};MYCOPY(dummy64)}
    {db tmp999[10]={209,112,85,209,96,82,209,112,85,209};MYCOPY(dummy65)}
    {db tmp999[10]={96,87,211,112,73,209,96,75,209,112};MYCOPY(dummy66)}
    {db tmp999[10]={78,209,96,75,209,112,78,209,96,80};MYCOPY(dummy67)}
    {db tmp999[10]={209,112,78,209,96,80,209,112,82,209};MYCOPY(dummy68)}
    {db tmp999[10]={96,80,209,112,82,209,96,85,209,112};MYCOPY(dummy69)}
    {db tmp999[10]={82,209,96,85,209,112,87,211,96,73};MYCOPY(dummy70)}
    {db tmp999[10]={209,112,75,209,96,78,209,112,75,209};MYCOPY(dummy71)}
    {db tmp999[10]={96,78,209,112,80,209,96,78,209,112};MYCOPY(dummy72)}
    {db tmp999[10]={80,209,96,82,209,112,80,209,96,82};MYCOPY(dummy73)}
    {db tmp999[10]={209,112,85,209,96,82,209,112,85,209};MYCOPY(dummy74)}
    {db tmp999[10]={96,87,211,112,73,209,96,75,209,112};MYCOPY(dummy75)}
    {db tmp999[10]={78,209,96,75,209,112,78,209,96,80};MYCOPY(dummy76)}
    {db tmp999[10]={209,112,78,209,96,80,209,112,82,209};MYCOPY(dummy77)}
    {db tmp999[10]={96,80,209,112,82,209,96,85,209,112};MYCOPY(dummy78)}
    {db tmp999[10]={82,209,96,85,209,112,87,211,96,87};MYCOPY(dummy79)}
    {db tmp999[10]={209,112,85,209,96,82,209,112,85,209};MYCOPY(dummy80)}
    {db tmp999[10]={96,82,209,112,80,209,96,82,209,112};MYCOPY(dummy81)}
    {db tmp999[10]={80,209,96,78,209,112,80,209,96,78};MYCOPY(dummy82)}
    {db tmp999[10]={209,112,75,209,96,78,209,112,75,209};MYCOPY(dummy83)}
    {db tmp999[10]={96,73,211,112,87,209,96,85,209,112};MYCOPY(dummy84)}
    {db tmp999[10]={82,209,96,85,209,112,82,209,96,80};MYCOPY(dummy85)}
    {db tmp999[10]={209,112,82,209,96,80,209,112,78,209};MYCOPY(dummy86)}
    {db tmp999[10]={96,80,209,112,78,209,96,75,209,112};MYCOPY(dummy87)}
    {db tmp999[10]={78,209,96,75,209,112,73,211,96,73};MYCOPY(dummy88)}
    {db tmp999[10]={209,112,75,209,96,78,209,112,75,209};MYCOPY(dummy89)}
    {db tmp999[10]={96,78,209,112,80,209,96,78,209,112};MYCOPY(dummy90)}
    {db tmp999[10]={80,209,96,82,209,112,80,209,96,82};MYCOPY(dummy91)}
    {db tmp999[10]={209,112,85,209,96,82,209,112,85,209};MYCOPY(dummy92)}
    {db tmp999[2]={96,87};MYCOPY(dummy93)}
    {db tmp999[10]={211,112,73,209,96,75,209,112,78,209};MYCOPY(dummy94)}
    {db tmp999[10]={96,75,209,112,78,209,96,80,209,112};MYCOPY(dummy95)}
    {db tmp999[10]={78,209,96,80,209,112,82,209,96,80};MYCOPY(dummy96)}
    {db tmp999[10]={209,112,82,209,96,85,209,112,82,209};MYCOPY(dummy97)}
    {db tmp999[10]={96,85,209,112,87,211,96,87,209,112};MYCOPY(dummy98)}
    {db tmp999[10]={85,209,96,82,209,112,85,209,96,82};MYCOPY(dummy99)}
    {db tmp999[10]={209,112,80,209,96,82,209,112,80,209};MYCOPY(dummy100)}
    {db tmp999[10]={96,78,209,112,80,209,96,78,209,112};MYCOPY(dummy101)}
    {db tmp999[10]={75,209,96,78,209,112,75,209,96,73};MYCOPY(dummy102)}
    {db tmp999[10]={211,112,87,209,96,85,209,112,82,209};MYCOPY(dummy103)}
    {db tmp999[10]={96,85,209,112,82,209,96,80,209,112};MYCOPY(dummy104)}
    {db tmp999[10]={82,209,96,80,209,112,78,209,96,80};MYCOPY(dummy105)}
    {db tmp999[10]={209,112,78,209,96,75,209,112,78,209};MYCOPY(dummy106)}
    {db tmp999[10]={96,75,209,112,73,211,96,87,209,112};MYCOPY(dummy107)}
    {db tmp999[10]={85,209,96,82,209,112,85,209,96,82};MYCOPY(dummy108)}
    {db tmp999[10]={209,112,80,209,96,82,209,112,80,209};MYCOPY(dummy109)}
    {db tmp999[10]={96,78,209,112,80,209,96,78,209,112};MYCOPY(dummy110)}
    {db tmp999[10]={75,209,96,78,209,112,75,209,96,73};MYCOPY(dummy111)}
    {db tmp999[10]={211,112,87,209,96,85,209,112,82,209};MYCOPY(dummy112)}
    {db tmp999[10]={96,85,209,112,82,209,96,80,209,112};MYCOPY(dummy113)}
    {db tmp999[10]={82,209,96,80,209,112,78,209,96,80};MYCOPY(dummy114)}
    {db tmp999[10]={209,112,78,209,96,75,209,112,78,209};MYCOPY(dummy115)}
    {db tmp999[10]={96,75,209,112,73,211,96,73,209,112};MYCOPY(dummy116)}
    {db tmp999[10]={75,209,96,78,209,112,75,209,96,78};MYCOPY(dummy117)}
    {db tmp999[10]={209,112,80,209,96,78,209,112,80,209};MYCOPY(dummy118)}
    {db tmp999[10]={96,82,209,112,80,209,96,82,209,112};MYCOPY(dummy119)}
    {db tmp999[10]={85,209,96,82,209,112,85,209,96,87};MYCOPY(dummy120)}
    {db tmp999[10]={211,112,73,209,96,75,209,112,78,209};MYCOPY(dummy121)}
    {db tmp999[10]={96,75,209,112,78,209,96,80,209,112};MYCOPY(dummy122)}
    {db tmp999[10]={78,209,96,80,209,112,82,209,96,80};MYCOPY(dummy123)}
    {db tmp999[10]={209,112,82,209,96,85,209,112,82,209};MYCOPY(dummy124)}
    {db tmp999[10]={96,85,209,112,87,211,96,73,209,112};MYCOPY(dummy125)}
    {db tmp999[10]={75,209,96,78,209,112,75,209,96,78};MYCOPY(dummy126)}
    {db tmp999[10]={209,112,80,209,96,78,209,112,80,209};MYCOPY(dummy127)}
    {db tmp999[10]={96,82,209,112,80,209,96,82,209,112};MYCOPY(dummy128)}
    {db tmp999[10]={85,209,96,82,209,112,85,209,96,87};MYCOPY(dummy129)}
    {db tmp999[10]={211,112,73,209,96,75,209,112,78,209};MYCOPY(dummy130)}
    {db tmp999[10]={96,75,209,112,78,209,96,80,209,112};MYCOPY(dummy131)}
    {db tmp999[10]={78,209,96,80,209,112,82,209,96,80};MYCOPY(dummy132)}
    {db tmp999[10]={209,112,82,209,96,85,209,112,82,209};MYCOPY(dummy133)}
    {db tmp999[10]={96,85,209,112,87,211,96,75,209,112};MYCOPY(dummy134)}
    {db tmp999[10]={63,209,96,63,209,112,75,211,96,63};MYCOPY(dummy135)}
    {db tmp999[10]={211,112,75,211,96,63,211,112,63,209};MYCOPY(dummy136)}
    {db tmp999[10]={96,75,211,112,63,211,96,75,209,112};MYCOPY(dummy137)}
    {db tmp999[10]={63,209,96,63,209,112,75,211,96,63};MYCOPY(dummy138)}
    {db tmp999[10]={211,112,75,211,96,63,211,112,63,209};MYCOPY(dummy139)}
    {db tmp999[10]={96,75,211,112,63,211,96,73,209,112};MYCOPY(dummy140)}
    {db tmp999[10]={61,209,96,61,209,112,73,211,96,61};MYCOPY(dummy141)}
    {db tmp999[10]={211,112,73,211,96,61,211,112,61,209};MYCOPY(dummy142)}
    {db tmp999[10]={96,73,211,112,61,211,96,73,209,112};MYCOPY(dummy143)}
    {db tmp999[10]={61,209,96,61,209,112,73,211,96,61};MYCOPY(dummy144)}
    {db tmp999[2]={211,112};MYCOPY(dummy145)}
    {db tmp999[10]={73,211,96,61,211,112,61,209,96,73};MYCOPY(dummy146)}
    {db tmp999[10]={211,112,61,211,96,87,209,112,75,209};MYCOPY(dummy147)}
    {db tmp999[10]={96,82,209,112,85,209,96,75,209,112};MYCOPY(dummy148)}
    {db tmp999[10]={80,209,96,75,209,112,82,209,96,75};MYCOPY(dummy149)}
    {db tmp999[10]={209,112,78,209,96,75,209,112,80,209};MYCOPY(dummy150)}
    {db tmp999[10]={96,75,209,112,78,209,96,75,211,112};MYCOPY(dummy151)}
    {db tmp999[10]={87,209,96,75,209,112,82,209,96,85};MYCOPY(dummy152)}
    {db tmp999[10]={209,112,75,209,96,80,209,112,75,209};MYCOPY(dummy153)}
    {db tmp999[10]={96,82,209,112,75,209,96,78,209,112};MYCOPY(dummy154)}
    {db tmp999[10]={75,209,96,80,209,112,75,209,96,78};MYCOPY(dummy155)}
    {db tmp999[10]={209,112,75,211,96,85,112,75,209,96};MYCOPY(dummy156)}
    {db tmp999[10]={85,112,75,211,96,75,112,82,209,96};MYCOPY(dummy157)}
    {db tmp999[10]={82,112,75,211,96,80,112,75,209,96};MYCOPY(dummy158)}
    {db tmp999[10]={80,112,75,211,96,75,112,78,209,96};MYCOPY(dummy159)}
    {db tmp999[10]={78,112,75,211,96,75,112,78,211,96};MYCOPY(dummy160)}
    {db tmp999[10]={78,112,75,211,96,85,112,75,209,96};MYCOPY(dummy161)}
    {db tmp999[10]={85,112,75,211,96,75,112,82,209,96};MYCOPY(dummy162)}
    {db tmp999[10]={82,112,75,211,96,80,112,75,209,96};MYCOPY(dummy163)}
    {db tmp999[10]={80,112,75,211,96,75,112,78,209,96};MYCOPY(dummy164)}
    {db tmp999[10]={78,112,75,211,96,75,112,78,211,96};MYCOPY(dummy165)}
    {db tmp999[10]={78,112,75,211,96,87,209,112,75,209};MYCOPY(dummy166)}
    {db tmp999[10]={96,82,209,112,85,209,96,75,209,112};MYCOPY(dummy167)}
    {db tmp999[10]={80,209,96,75,209,112,82,209,96,75};MYCOPY(dummy168)}
    {db tmp999[10]={209,112,78,209,96,75,209,112,80,209};MYCOPY(dummy169)}
    {db tmp999[10]={96,75,209,112,78,209,96,75,211,112};MYCOPY(dummy170)}
    {db tmp999[10]={87,209,96,75,209,112,82,209,96,85};MYCOPY(dummy171)}
    {db tmp999[10]={209,112,75,209,96,80,209,112,75,209};MYCOPY(dummy172)}
    {db tmp999[10]={96,82,209,112,75,209,96,78,209,112};MYCOPY(dummy173)}
    {db tmp999[10]={75,209,96,80,209,112,75,209,96,78};MYCOPY(dummy174)}
    {db tmp999[10]={209,112,75,211,96,85,112,75,209,96};MYCOPY(dummy175)}
    {db tmp999[10]={85,112,75,211,96,75,112,82,209,96};MYCOPY(dummy176)}
    {db tmp999[10]={82,112,75,211,96,80,112,75,209,96};MYCOPY(dummy177)}
    {db tmp999[10]={80,112,75,211,96,75,112,78,209,96};MYCOPY(dummy178)}
    {db tmp999[10]={78,112,75,211,96,75,112,78,211,96};MYCOPY(dummy179)}
    {db tmp999[10]={78,112,75,211,96,85,112,75,209,96};MYCOPY(dummy180)}
    {db tmp999[10]={85,112,75,211,96,75,112,82,209,96};MYCOPY(dummy181)}
    {db tmp999[10]={82,112,75,211,96,80,112,75,209,96};MYCOPY(dummy182)}
    {db tmp999[10]={80,112,75,211,96,75,112,78,209,96};MYCOPY(dummy183)}
    {db tmp999[10]={78,112,75,211,96,75,112,78,211,96};MYCOPY(dummy184)}
    {db tmp999[10]={78,112,75,211,96,87,209,112,85,209};MYCOPY(dummy185)}
    {db tmp999[10]={96,82,209,112,85,209,96,82,209,112};MYCOPY(dummy186)}
    {db tmp999[10]={80,209,96,82,209,112,80,209,96,78};MYCOPY(dummy187)}
    {db tmp999[10]={209,112,80,209,96,78,209,112,75,209};MYCOPY(dummy188)}
    {db tmp999[10]={96,78,209,112,75,209,96,73,211,112};MYCOPY(dummy189)}
    {db tmp999[10]={87,209,96,85,209,112,82,209,96,85};MYCOPY(dummy190)}
    {db tmp999[10]={209,112,82,209,96,80,209,112,82,209};MYCOPY(dummy191)}
    {db tmp999[10]={96,80,209,112,78,209,96,80,209,112};MYCOPY(dummy192)}
    {db tmp999[10]={78,209,96,75,209,112,78,209,96,75};MYCOPY(dummy193)}
    {db tmp999[10]={209,112,73,211,96,87,209,112,85,209};MYCOPY(dummy194)}
    {db tmp999[10]={96,82,209,112,85,209,96,82,209,112};MYCOPY(dummy195)}
    {db tmp999[10]={80,209,96,82,209,112,80,209,96,78};MYCOPY(dummy196)}
    {db tmp999[2]={209,112};MYCOPY(dummy197)}
    {db tmp999[10]={80,209,96,78,209,112,75,209,96,78};MYCOPY(byte_10f8e)}
    {db tmp999[10]={209,112,75,209,96,73,211,112,87,209};MYCOPY(dummy198)}
    {db tmp999[10]={96,85,209,112,82,209,96,85,209,112};MYCOPY(dummy199)}
    {db tmp999[10]={82,209,96,80,209,112,82,209,96,80};MYCOPY(dummy200)}
    {db tmp999[10]={209,112,78,209,96,80,209,112,78,209};MYCOPY(dummy201)}
    {db tmp999[10]={96,75,209,112,78,209,96,75,209,112};MYCOPY(dummy202)}
    {db tmp999[10]={73,211,96,73,209,112,75,209,96,78};MYCOPY(dummy203)}
    {db tmp999[10]={209,112,75,209,96,78,209,112,80,209};MYCOPY(dummy204)}
    {db tmp999[10]={96,78,209,112,80,209,96,82,209,112};MYCOPY(dummy205)}
    {db tmp999[10]={80,209,96,82,209,112,85,209,96,82};MYCOPY(dummy206)}
    {db tmp999[10]={209,112,85,209,96,87,211,112,73,209};MYCOPY(dummy207)}
    {db tmp999[10]={96,75,209,112,78,209,96,75,209,112};MYCOPY(dummy208)}
    {db tmp999[10]={78,209,96,80,209,112,78,209,96,80};MYCOPY(dummy209)}
    {db tmp999[10]={209,112,82,209,96,80,209,112,82,209};MYCOPY(dummy210)}
    {db tmp999[10]={96,85,209,112,82,209,96,85,209,112};MYCOPY(dummy211)}
    {db tmp999[10]={87,211,96,73,209,112,75,209,96,78};MYCOPY(dummy212)}
    {db tmp999[10]={209,112,75,209,96,78,209,112,80,209};MYCOPY(dummy213)}
    {db tmp999[10]={96,78,209,112,80,209,96,82,209,112};MYCOPY(dummy214)}
    {db tmp999[10]={80,209,96,82,209,112,85,209,96,82};MYCOPY(dummy215)}
    {db tmp999[10]={209,112,85,209,96,87,211,112,73,209};MYCOPY(dummy216)}
    {db tmp999[10]={96,75,209,112,78,209,96,75,209,112};MYCOPY(dummy217)}
    {db tmp999[10]={78,209,96,80,209,112,78,209,96,80};MYCOPY(dummy218)}
    {db tmp999[10]={209,112,82,209,96,80,209,112,82,209};MYCOPY(dummy219)}
    {db tmp999[10]={96,85,209,112,82,209,96,85,209,112};MYCOPY(dummy220)}
    {db tmp999[10]={87,218,255,2,167,254,16,179,254,224};MYCOPY(dummy221)}
    {db tmp999[11]={31,0,51,16,39,224,31,0,42,16,54};MYCOPY(dummy222)}
    {db tmp999[11]={224,31,0,42,16,54,224,31,0,56,16};MYCOPY(dummy223)}
    {db tmp999[11]={44,224,31,0,56,16,44,224,31,0,58};MYCOPY(dummy224)}
    {db tmp999[11]={16,46,224,31,0,46,16,58,224,31,0};MYCOPY(dummy225)}
    {db tmp999[11]={39,16,51,224,31,0,54,16,42,224,31};MYCOPY(dummy226)}
    {db tmp999[11]={0,56,16,44,224,31,0,58,16,46,224};MYCOPY(dummy227)}
    {db tmp999[11]={31,0,46,16,58,224,31,0,39,16,51};MYCOPY(dummy228)}
    {db tmp999[11]={224,31,0,39,16,51,224,31,0,37,16};MYCOPY(dummy229)}
    {db tmp999[11]={49,224,31,0,49,16,37,224,31,0,56};MYCOPY(dummy230)}
    {db tmp999[11]={16,44,224,31,0,56,16,44,224,31,0};MYCOPY(dummy231)}
    {db tmp999[11]={58,16,46,224,31,0,61,16,49,224,31};MYCOPY(dummy232)}
    {db tmp999[11]={0,39,209,16,46,209,0,51,209,16,46};MYCOPY(dummy233)}
    {db tmp999[11]={209,0,39,209,16,46,209,0,51,209,16};MYCOPY(dummy234)}
    {db tmp999[11]={46,209,0,39,209,16,46,209,0,51,209};MYCOPY(dummy235)}
    {db tmp999[11]={16,46,209,0,39,209,16,46,209,0,51};MYCOPY(dummy236)}
    {db tmp999[10]={209,16,46,209,0,42,209,16,49,209};MYCOPY(dummy237)}
    {db tmp999[11]={0,54,209,16,49,209,0,42,209,16,49};MYCOPY(dummy238)}
    {db tmp999[11]={209,0,54,209,16,49,209,0,44,209,16};MYCOPY(dummy239)}
    {db tmp999[11]={51,209,0,56,209,16,51,209,0,44,209};MYCOPY(dummy240)}
    {db tmp999[11]={16,51,209,0,56,209,16,51,209,0,39};MYCOPY(dummy241)}
    {db tmp999[10]={209,16,46,209,0,51,209,16,46,209};MYCOPY(dummy242)}
    {db tmp999[11]={0,39,209,16,46,209,0,51,209,16,46};MYCOPY(dummy243)}
    {db tmp999[11]={209,0,39,209,16,46,209,0,51,209,16};MYCOPY(dummy244)}
    {db tmp999[11]={46,209,0,39,209,16,46,209,0,51,209};MYCOPY(dummy245)}
    {db tmp999[11]={16,46,209,0,42,209,16,49,209,0,54};MYCOPY(dummy246)}
    {db tmp999[10]={209,16,49,209,0,42,209,16,49,209};MYCOPY(dummy247)}
    {db tmp999[11]={0,54,209,16,49,209,0,44,209,16,51};MYCOPY(dummy248)}
    {db tmp999[11]={209,0,56,209,16,51,209,0,44,209,16};MYCOPY(dummy249)}
    {db tmp999[11]={51,209,0,56,209,16,51,209,0,39,209};MYCOPY(dummy250)}
    {db tmp999[11]={16,46,209,0,51,209,16,46,209,0,39};MYCOPY(dummy251)}
    {db tmp999[10]={209,16,46,209,0,51,209,16,46,209};MYCOPY(dummy252)}
    {db tmp999[11]={0,39,209,16,46,209,0,51,209,16,46};MYCOPY(dummy253)}
    {db tmp999[11]={209,0,39,209,16,46,209,0,51,209,16};MYCOPY(dummy254)}
    {db tmp999[11]={46,209,0,42,209,16,49,209,0,54,209};MYCOPY(dummy255)}
    {db tmp999[11]={16,49,209,0,42,209,16,49,209,0,54};MYCOPY(dummy256)}
    {db tmp999[10]={209,16,49,209,0,44,209,16,51,209};MYCOPY(dummy257)}
    {db tmp999[11]={0,56,209,16,51,209,0,44,209,16,51};MYCOPY(dummy258)}
    {db tmp999[11]={209,0,56,209,16,51,209,0,39,209,16};MYCOPY(dummy259)}
    {db tmp999[11]={46,209,0,51,209,16,46,209,0,39,209};MYCOPY(dummy260)}
    {db tmp999[11]={16,46,209,0,51,209,16,46,209,0,39};MYCOPY(dummy261)}
    {db tmp999[10]={209,16,46,209,0,51,209,16,46,209};MYCOPY(dummy262)}
    {db tmp999[11]={0,39,209,16,46,209,0,51,209,16,46};MYCOPY(dummy263)}
    {db tmp999[11]={209,0,42,209,16,49,209,0,54,209,16};MYCOPY(dummy264)}
    {db tmp999[11]={49,209,0,42,209,16,49,209,0,54,209};MYCOPY(dummy265)}
    {db tmp999[11]={16,49,209,0,44,209,16,51,209,0,56};MYCOPY(dummy266)}
    {db tmp999[10]={209,16,51,209,0,44,209,16,51,209};MYCOPY(dummy267)}
    {db tmp999[11]={0,56,209,16,51,209,223,0,51,16,39};MYCOPY(dummy268)}
    {db tmp999[10]={223,223,0,39,16,51,223,223,0,54};MYCOPY(dummy269)}
    {db tmp999[11]={16,42,223,223,0,49,16,37,223,0,39};MYCOPY(dummy270)}
    {db tmp999[10]={209,16,46,209,0,51,209,16,46,209};MYCOPY(dummy271)}
    {db tmp999[11]={0,39,209,16,46,209,0,51,209,16,46};MYCOPY(dummy272)}
    {db tmp999[11]={209,0,39,209,16,46,209,0,51,209,16};MYCOPY(dummy273)}
    {db tmp999[11]={46,209,0,39,209,16,46,209,0,51,209};MYCOPY(dummy274)}
    {db tmp999[11]={16,46,209,0,42,209,16,49,209,0,54};MYCOPY(dummy275)}
    {db tmp999[10]={209,16,49,209,0,42,209,16,49,209};MYCOPY(dummy276)}
    {db tmp999[11]={0,54,209,16,49,209,0,44,209,16,51};MYCOPY(dummy277)}
    {db tmp999[11]={209,0,56,209,16,51,209,0,44,209,16};MYCOPY(dummy278)}
    {db tmp999[11]={51,209,0,56,209,16,51,209,0,39,209};MYCOPY(dummy279)}
    {db tmp999[11]={16,46,209,0,51,209,16,46,209,0,39};MYCOPY(dummy280)}
    {db tmp999[10]={209,16,46,209,0,51,209,16,46,209};MYCOPY(dummy281)}
    {db tmp999[11]={0,39,209,16,46,209,0,51,209,16,46};MYCOPY(dummy282)}
    {db tmp999[11]={209,0,39,209,16,46,209,0,51,209,16};MYCOPY(dummy283)}
    {db tmp999[11]={46,209,0,42,209,16,49,209,0,54,209};MYCOPY(dummy284)}
    {db tmp999[11]={16,49,209,0,42,209,16,49,209,0,54};MYCOPY(dummy285)}
    {db tmp999[10]={209,16,49,209,0,44,209,16,51,209};MYCOPY(dummy286)}
    {db tmp999[11]={0,56,209,16,51,209,0,44,209,16,51};MYCOPY(dummy287)}
    {db tmp999[11]={209,0,56,209,16,51,209,0,39,209,16};MYCOPY(dummy288)}
    {db tmp999[11]={46,209,0,51,209,16,46,209,0,39,209};MYCOPY(dummy289)}
    {db tmp999[11]={16,46,209,0,51,209,16,46,209,0,39};MYCOPY(dummy290)}
    {db tmp999[10]={209,16,46,209,0,51,209,16,46,209};MYCOPY(dummy291)}
    {db tmp999[11]={0,39,209,16,46,209,0,51,209,16,46};MYCOPY(dummy292)}
    {db tmp999[9]={209,0,42,209,16,49,209,0,54};MYCOPY(dummy293)}
    {db tmp999[10]={209,16,49,209,0,42,209,16,49,209};MYCOPY(dummy294)}
    {db tmp999[11]={0,54,209,16,49,209,0,44,209,16,51};MYCOPY(dummy295)}
    {db tmp999[11]={209,0,56,209,16,51,209,0,44,209,16};MYCOPY(dummy296)}
    {db tmp999[11]={51,209,0,56,209,16,51,209,0,39,209};MYCOPY(dummy297)}
    {db tmp999[11]={16,46,209,0,51,209,16,46,209,0,39};MYCOPY(dummy298)}
    {db tmp999[10]={209,16,46,209,0,51,209,16,46,209};MYCOPY(dummy299)}
    {db tmp999[11]={0,39,209,16,46,209,0,51,209,16,46};MYCOPY(dummy300)}
    {db tmp999[11]={209,0,39,209,16,46,209,0,51,209,16};MYCOPY(dummy301)}
    {db tmp999[11]={46,209,0,42,209,16,49,209,0,54,209};MYCOPY(dummy302)}
    {db tmp999[11]={16,49,209,0,42,209,16,49,209,0,54};MYCOPY(dummy303)}
    {db tmp999[10]={209,16,49,209,0,44,209,16,51,209};MYCOPY(dummy304)}
    {db tmp999[11]={0,56,209,16,51,209,0,44,209,16,51};MYCOPY(dummy305)}
    {db tmp999[11]={209,0,56,209,16,51,209,223,0,51,16};MYCOPY(dummy306)}
    {db tmp999[10]={39,223,223,0,39,16,51,223,223,0};MYCOPY(dummy307)}
    {db tmp999[10]={54,16,42,223,223,0,49,16,37,223};MYCOPY(dummy308)}
    {db tmp999[11]={0,39,16,51,224,31,0,39,16,51,224};MYCOPY(dummy309)}
    {db tmp999[11]={31,0,37,16,49,224,31,0,49,16,37};MYCOPY(dummy310)}
    {db tmp999[11]={224,31,0,56,16,44,224,31,0,56,16};MYCOPY(dummy311)}
    {db tmp999[11]={44,224,31,0,58,16,46,224,31,0,61};MYCOPY(dummy312)}
    {db tmp999[11]={16,49,224,31,0,39,209,16,46,209,0};MYCOPY(dummy313)}
    {db tmp999[11]={51,209,16,46,209,0,39,209,16,46,209};MYCOPY(dummy314)}
    {db tmp999[11]={0,51,209,16,46,209,0,39,209,16,46};MYCOPY(dummy315)}
    {db tmp999[11]={209,0,51,209,16,46,209,0,39,209,16};MYCOPY(dummy316)}
    {db tmp999[11]={46,209,0,51,209,16,46,209,0,42,209};MYCOPY(dummy317)}
    {db tmp999[11]={16,49,209,0,54,209,16,49,209,0,42};MYCOPY(dummy318)}
    {db tmp999[10]={209,16,49,209,0,54,209,16,49,209};MYCOPY(dummy319)}
    {db tmp999[11]={0,44,209,16,51,209,0,56,209,16,51};MYCOPY(dummy320)}
    {db tmp999[11]={209,0,44,209,16,51,209,0,56,209,16};MYCOPY(dummy321)}
    {db tmp999[11]={51,209,0,39,209,16,46,209,0,51,209};MYCOPY(dummy322)}
    {db tmp999[11]={16,46,209,0,39,209,16,46,209,0,51};MYCOPY(dummy323)}
    {db tmp999[10]={209,16,46,209,0,39,209,16,46,209};MYCOPY(dummy324)}
    {db tmp999[11]={0,51,209,16,46,209,0,39,209,16,46};MYCOPY(dummy325)}
    {db tmp999[11]={209,0,51,209,16,46,209,0,42,209,16};MYCOPY(dummy326)}
    {db tmp999[11]={49,209,0,54,209,16,49,209,0,42,209};MYCOPY(dummy327)}
    {db tmp999[11]={16,49,209,0,54,209,16,49,209,0,44};MYCOPY(dummy328)}
    {db tmp999[10]={209,16,51,209,0,56,209,16,51,209};MYCOPY(dummy329)}
    {db tmp999[11]={0,44,209,16,51,209,0,56,209,16,51};MYCOPY(dummy330)}
    {db tmp999[11]={209,0,39,209,16,46,209,0,51,209,16};MYCOPY(dummy331)}
    {db tmp999[11]={46,209,0,39,209,16,46,209,0,51,209};MYCOPY(dummy332)}
    {db tmp999[11]={16,46,209,0,39,209,16,46,209,0,51};MYCOPY(dummy333)}
    {db tmp999[10]={209,16,46,209,0,39,209,16,46,209};MYCOPY(dummy334)}
    {db tmp999[11]={0,51,209,16,46,209,0,42,209,16,49};MYCOPY(dummy335)}
    {db tmp999[11]={209,0,54,209,16,49,209,0,42,209,16};MYCOPY(dummy336)}
    {db tmp999[11]={49,209,0,54,209,16,49,209,0,44,209};MYCOPY(dummy337)}
    {db tmp999[11]={16,51,209,0,56,209,16,51,209,0,44};MYCOPY(dummy338)}
    {db tmp999[10]={209,16,51,209,0,56,209,16,51,209};MYCOPY(dummy339)}
    {db tmp999[11]={0,39,209,16,46,209,0,51,209,16,46};MYCOPY(dummy340)}
    {db tmp999[8]={209,0,39,209,16,46,209,0};MYCOPY(dummy341)}
    {db tmp999[11]={51,209,16,46,209,0,39,209,16,46,209};MYCOPY(byte_11594)}
    {db tmp999[11]={0,51,209,16,46,209,0,39,209,16,46};MYCOPY(dummy342)}
    {db tmp999[11]={209,0,51,209,16,46,209,0,42,209,16};MYCOPY(dummy343)}
    {db tmp999[11]={49,209,0,54,209,16,49,209,0,42,209};MYCOPY(dummy344)}
    {db tmp999[11]={16,49,209,0,54,209,16,49,209,0,44};MYCOPY(dummy345)}
    {db tmp999[10]={209,16,51,209,0,56,209,16,51,209};MYCOPY(dummy346)}
    {db tmp999[11]={0,44,209,16,51,209,0,56,209,16,51};MYCOPY(dummy347)}
    {db tmp999[10]={216,255,32,215,254,209,32,75,209,83};MYCOPY(dummy348)}
    {db tmp999[10]={208,254,209,32,82,209,80,75,209,32};MYCOPY(dummy349)}
    {db tmp999[10]={80,209,80,75,209,32,87,209,80,75};MYCOPY(dummy350)}
    {db tmp999[10]={209,32,80,209,80,75,209,32,82,209};MYCOPY(dummy351)}
    {db tmp999[10]={80,75,209,32,80,209,80,75,211,32};MYCOPY(dummy352)}
    {db tmp999[10]={87,209,80,75,209,32,80,209,80,82};MYCOPY(dummy353)}
    {db tmp999[10]={209,32,75,209,80,80,209,32,75,209};MYCOPY(dummy354)}
    {db tmp999[10]={80,87,209,32,75,209,80,80,209,32};MYCOPY(dummy355)}
    {db tmp999[10]={75,209,80,82,209,32,75,209,80,80};MYCOPY(dummy356)}
    {db tmp999[10]={209,32,75,211,80,85,209,32,75,209};MYCOPY(dummy357)}
    {db tmp999[10]={80,80,209,32,82,209,80,75,209,32};MYCOPY(dummy358)}
    {db tmp999[10]={80,209,80,75,209,32,85,209,80,75};MYCOPY(dummy359)}
    {db tmp999[10]={209,32,80,209,80,75,209,32,82,209};MYCOPY(dummy360)}
    {db tmp999[10]={80,75,209,32,80,209,80,75,211,32};MYCOPY(dummy361)}
    {db tmp999[10]={85,209,80,75,209,32,80,209,80,82};MYCOPY(dummy362)}
    {db tmp999[10]={209,32,75,209,80,80,209,32,75,209};MYCOPY(dummy363)}
    {db tmp999[10]={80,85,209,32,75,209,80,80,209,32};MYCOPY(dummy364)}
    {db tmp999[10]={75,209,80,82,209,32,75,209,80,80};MYCOPY(dummy365)}
    {db tmp999[10]={209,32,75,211,80,87,209,32,75,209};MYCOPY(dummy366)}
    {db tmp999[10]={80,80,209,32,82,209,80,75,209,32};MYCOPY(dummy367)}
    {db tmp999[10]={80,209,80,75,209,32,87,209,80,75};MYCOPY(dummy368)}
    {db tmp999[10]={209,32,80,209,80,75,209,32,82,209};MYCOPY(dummy369)}
    {db tmp999[10]={80,75,209,32,80,209,80,75,211,32};MYCOPY(dummy370)}
    {db tmp999[10]={87,209,80,75,209,32,80,209,80,82};MYCOPY(dummy371)}
    {db tmp999[10]={209,32,75,209,80,80,209,32,75,209};MYCOPY(dummy372)}
    {db tmp999[10]={80,87,209,32,75,209,80,80,209,32};MYCOPY(dummy373)}
    {db tmp999[10]={75,209,80,82,209,32,75,209,80,80};MYCOPY(dummy374)}
    {db tmp999[10]={209,32,75,211,80,85,209,32,75,209};MYCOPY(dummy375)}
    {db tmp999[10]={80,80,209,32,82,209,80,75,209,32};MYCOPY(dummy376)}
    {db tmp999[10]={80,209,80,75,209,32,85,209,80,75};MYCOPY(dummy377)}
    {db tmp999[10]={209,32,80,209,80,75,209,32,82,209};MYCOPY(dummy378)}
    {db tmp999[10]={80,75,209,32,80,209,80,75,211,32};MYCOPY(dummy379)}
    {db tmp999[10]={85,209,80,75,209,32,80,209,80,82};MYCOPY(dummy380)}
    {db tmp999[10]={209,32,75,209,80,80,209,32,75,209};MYCOPY(dummy381)}
    {db tmp999[10]={80,85,209,32,75,209,80,80,209,32};MYCOPY(dummy382)}
    {db tmp999[10]={75,209,80,82,209,32,75,209,80,80};MYCOPY(dummy383)}
    {db tmp999[10]={209,32,75,211,80,87,209,32,75,209};MYCOPY(dummy384)}
    {db tmp999[10]={80,80,209,32,82,209,80,75,209,32};MYCOPY(dummy385)}
    {db tmp999[10]={80,209,80,75,209,32,87,209,80,75};MYCOPY(dummy386)}
    {db tmp999[10]={209,32,80,209,80,75,209,32,82,209};MYCOPY(dummy387)}
    {db tmp999[10]={80,75,209,32,80,209,80,75,211,32};MYCOPY(dummy388)}
    {db tmp999[10]={85,209,80,75,209,32,80,209,80,82};MYCOPY(dummy389)}
    {db tmp999[10]={209,32,75,209,80,80,209,32,75,209};MYCOPY(dummy390)}
    {db tmp999[10]={80,85,209,32,75,209,80,80,209,32};MYCOPY(dummy391)}
    {db tmp999[10]={75,209,80,82,209,32,75,209,80,80};MYCOPY(dummy392)}
    {db tmp999[5]={209,32,75,211,80};MYCOPY(dummy393)}
    {db tmp999[10]={87,209,32,75,209,80,80,209,32,82};MYCOPY(dummy394)}
    {db tmp999[10]={209,80,75,209,32,80,209,80,75,209};MYCOPY(dummy395)}
    {db tmp999[10]={32,87,209,80,75,209,32,80,209,80};MYCOPY(dummy396)}
    {db tmp999[10]={75,209,32,82,209,80,75,209,32,80};MYCOPY(dummy397)}
    {db tmp999[10]={209,80,75,211,32,85,209,80,75,209};MYCOPY(dummy398)}
    {db tmp999[11]={32,80,209,80,82,209,32,75,209,80,80};MYCOPY(dummy399)}
    {db tmp999[10]={209,32,75,209,80,85,209,32,75,209};MYCOPY(dummy400)}
    {db tmp999[10]={80,80,209,32,75,209,80,82,209,32};MYCOPY(dummy401)}
    {db tmp999[10]={75,209,80,80,209,32,75,211,80,85};MYCOPY(dummy402)}
    {db tmp999[10]={209,32,75,209,80,80,209,32,82,209};MYCOPY(dummy403)}
    {db tmp999[10]={80,75,209,32,80,209,80,75,209,32};MYCOPY(dummy404)}
    {db tmp999[10]={85,209,80,75,209,32,80,209,80,75};MYCOPY(dummy405)}
    {db tmp999[10]={209,32,82,209,80,75,209,32,80,209};MYCOPY(dummy406)}
    {db tmp999[10]={80,75,211,209,32,63,209,80,68,209};MYCOPY(dummy407)}
    {db tmp999[10]={32,70,209,80,63,209,32,68,209,80};MYCOPY(dummy408)}
    {db tmp999[10]={63,209,32,75,209,80,63,209,32,68};MYCOPY(dummy409)}
    {db tmp999[10]={209,80,63,209,32,70,209,80,63,209};MYCOPY(dummy410)}
    {db tmp999[10]={32,68,209,80,63,211,32,75,209,80};MYCOPY(dummy411)}
    {db tmp999[10]={63,209,32,68,209,80,70,209,32,63};MYCOPY(dummy412)}
    {db tmp999[10]={209,80,68,209,32,63,209,80,75,209};MYCOPY(dummy413)}
    {db tmp999[10]={32,63,209,80,68,209,32,63,209,80};MYCOPY(dummy414)}
    {db tmp999[10]={70,209,32,63,209,80,68,209,32,63};MYCOPY(dummy415)}
    {db tmp999[10]={211,80,73,209,32,63,209,80,68,209};MYCOPY(dummy416)}
    {db tmp999[10]={32,70,209,80,63,209,32,68,209,80};MYCOPY(dummy417)}
    {db tmp999[10]={63,209,32,73,209,80,63,209,32,68};MYCOPY(dummy418)}
    {db tmp999[10]={209,80,63,209,32,70,209,80,63,209};MYCOPY(dummy419)}
    {db tmp999[10]={32,68,209,80,63,211,32,73,209,80};MYCOPY(dummy420)}
    {db tmp999[10]={63,209,32,68,209,80,70,209,32,63};MYCOPY(dummy421)}
    {db tmp999[10]={209,80,68,209,32,63,209,80,73,209};MYCOPY(dummy422)}
    {db tmp999[10]={32,63,209,80,68,209,32,63,209,80};MYCOPY(dummy423)}
    {db tmp999[10]={70,209,32,63,209,80,68,209,32,63};MYCOPY(dummy424)}
    {db tmp999[10]={211,80,75,209,32,63,209,80,68,209};MYCOPY(dummy425)}
    {db tmp999[10]={32,70,209,80,63,209,32,68,209,80};MYCOPY(dummy426)}
    {db tmp999[10]={63,209,32,75,209,80,63,209,32,68};MYCOPY(dummy427)}
    {db tmp999[10]={209,80,63,209,32,70,209,80,63,209};MYCOPY(dummy428)}
    {db tmp999[10]={32,68,209,80,63,211,32,75,209,80};MYCOPY(dummy429)}
    {db tmp999[10]={63,209,32,68,209,80,70,209,32,63};MYCOPY(dummy430)}
    {db tmp999[10]={209,80,68,209,32,63,209,80,75,209};MYCOPY(dummy431)}
    {db tmp999[10]={32,63,209,80,68,209,32,63,209,80};MYCOPY(dummy432)}
    {db tmp999[10]={70,209,32,63,209,80,68,209,32,63};MYCOPY(dummy433)}
    {db tmp999[10]={211,80,73,209,32,63,209,80,68,209};MYCOPY(dummy434)}
    {db tmp999[10]={32,70,209,80,63,209,32,68,209,80};MYCOPY(dummy435)}
    {db tmp999[10]={63,209,32,73,209,80,63,209,32,68};MYCOPY(dummy436)}
    {db tmp999[10]={209,80,63,209,32,70,209,80,63,209};MYCOPY(dummy437)}
    {db tmp999[10]={32,68,209,80,63,211,32,73,209,80};MYCOPY(dummy438)}
    {db tmp999[10]={63,209,32,68,209,80,70,209,32,63};MYCOPY(dummy439)}
    {db tmp999[10]={209,80,68,209,32,63,209,80,73,209};MYCOPY(dummy440)}
    {db tmp999[10]={32,63,209,80,68,209,32,63,209,80};MYCOPY(dummy441)}
    {db tmp999[10]={70,209,32,63,209,80,68,209,32,63};MYCOPY(dummy442)}
    {db tmp999[10]={211,80,75,209,32,63,209,80,70,209};MYCOPY(dummy443)}
    {db tmp999[10]={32,73,209,80,63,209,32,68,209,80};MYCOPY(dummy444)}
    {db tmp999[6]={63,209,32,70,209,80};MYCOPY(dummy445)}
    {db tmp999[10]={63,209,32,66,209,80,63,209,32,68};MYCOPY(dummy446)}
    {db tmp999[10]={209,80,63,209,32,66,209,80,63,211};MYCOPY(dummy447)}
    {db tmp999[10]={32,75,209,80,63,209,32,70,209,80};MYCOPY(dummy448)}
    {db tmp999[10]={73,209,32,63,209,80,68,209,32,63};MYCOPY(dummy449)}
    {db tmp999[10]={209,80,70,209,32,63,209,80,66,209};MYCOPY(dummy450)}
    {db tmp999[10]={32,63,209,80,68,209,32,63,209,80};MYCOPY(dummy451)}
    {db tmp999[10]={66,209,32,63,211,80,75,209,32,63};MYCOPY(dummy452)}
    {db tmp999[10]={209,80,70,209,32,73,209,80,63,209};MYCOPY(dummy453)}
    {db tmp999[10]={32,68,209,80,63,209,32,70,209,80};MYCOPY(dummy454)}
    {db tmp999[10]={63,209,32,66,209,80,63,209,32,68};MYCOPY(dummy455)}
    {db tmp999[10]={209,80,63,209,32,66,209,80,63,211};MYCOPY(dummy456)}
    {db tmp999[10]={32,75,209,80,63,209,32,70,209,80};MYCOPY(dummy457)}
    {db tmp999[10]={73,209,32,63,209,80,68,209,32,63};MYCOPY(dummy458)}
    {db tmp999[10]={209,80,70,209,32,63,209,80,66,209};MYCOPY(dummy459)}
    {db tmp999[10]={32,63,209,80,68,209,32,63,209,80};MYCOPY(dummy460)}
    {db tmp999[10]={66,209,32,63,211,32,73,80,63,209};MYCOPY(dummy461)}
    {db tmp999[10]={32,73,80,63,211,32,63,80,70,209};MYCOPY(dummy462)}
    {db tmp999[10]={32,63,80,70,211,32,63,80,68,209};MYCOPY(dummy463)}
    {db tmp999[10]={32,68,80,63,211,32,63,80,66,209};MYCOPY(dummy464)}
    {db tmp999[10]={32,66,80,63,211,32,66,80,63,211};MYCOPY(dummy465)}
    {db tmp999[10]={32,63,80,66,211,32,63,80,73,209};MYCOPY(dummy466)}
    {db tmp999[10]={32,73,80,63,211,32,63,80,70,209};MYCOPY(dummy467)}
    {db tmp999[10]={32,63,80,70,211,32,63,80,68,209};MYCOPY(dummy468)}
    {db tmp999[10]={32,68,80,63,211,32,63,80,66,209};MYCOPY(dummy469)}
    {db tmp999[10]={32,66,80,63,211,32,66,80,63,211};MYCOPY(dummy470)}
    {db tmp999[10]={32,63,80,66,211,32,63,80,73,209};MYCOPY(dummy471)}
    {db tmp999[10]={32,73,80,63,211,32,63,80,70,209};MYCOPY(dummy472)}
    {db tmp999[10]={32,63,80,70,211,32,63,80,68,209};MYCOPY(dummy473)}
    {db tmp999[10]={32,68,80,63,211,32,63,80,66,209};MYCOPY(dummy474)}
    {db tmp999[10]={32,66,80,63,211,32,66,80,63,211};MYCOPY(dummy475)}
    {db tmp999[10]={32,63,80,66,211,32,63,80,73,209};MYCOPY(dummy476)}
    {db tmp999[10]={32,73,80,63,211,32,63,80,70,209};MYCOPY(dummy477)}
    {db tmp999[10]={32,63,80,70,211,32,63,80,68,209};MYCOPY(dummy478)}
    {db tmp999[10]={32,68,80,63,211,32,63,80,66,209};MYCOPY(dummy479)}
    {db tmp999[10]={32,66,80,63,211,32,66,80,63,211};MYCOPY(dummy480)}
    {db tmp999[10]={32,63,80,66,211,32,75,209,80,63};MYCOPY(dummy481)}
    {db tmp999[10]={209,32,70,209,80,73,209,32,63,209};MYCOPY(dummy482)}
    {db tmp999[10]={80,68,209,32,63,209,80,70,209,32};MYCOPY(dummy483)}
    {db tmp999[10]={63,209,80,66,209,32,63,209,80,68};MYCOPY(dummy484)}
    {db tmp999[10]={209,32,63,209,80,66,209,32,63,211};MYCOPY(dummy485)}
    {db tmp999[10]={80,75,209,32,63,209,80,70,209,32};MYCOPY(dummy486)}
    {db tmp999[10]={73,209,80,63,209,32,68,209,80,63};MYCOPY(dummy487)}
    {db tmp999[10]={209,32,70,209,80,63,209,32,66,209};MYCOPY(dummy488)}
    {db tmp999[10]={80,63,209,32,68,209,80,63,209,32};MYCOPY(dummy489)}
    {db tmp999[10]={66,209,80,63,211,32,63,80,73,209};MYCOPY(dummy490)}
    {db tmp999[10]={32,73,80,63,211,32,63,80,70,209};MYCOPY(dummy491)}
    {db tmp999[10]={32,63,80,70,211,32,63,80,68,209};MYCOPY(dummy492)}
    {db tmp999[10]={32,68,80,63,211,32,63,80,66,209};MYCOPY(dummy493)}
    {db tmp999[10]={32,66,80,63,211,32,66,80,63,211};MYCOPY(dummy494)}
    {db tmp999[10]={32,63,80,66,211,32,63,80,73,209};MYCOPY(dummy495)}
    {db tmp999[10]={32,73,80,63,211,32,63,80,70,209};MYCOPY(dummy496)}
    {db tmp999[2]={32,63};MYCOPY(dummy497)}
    {db tmp999[10]={80,70,211,32,63,80,68,209,32,68};MYCOPY(dummy498)}
    {db tmp999[10]={80,63,211,32,63,80,66,209,32,66};MYCOPY(dummy499)}
    {db tmp999[10]={80,63,211,32,66,80,63,211,32,63};MYCOPY(dummy500)}
    {db tmp999[10]={80,66,211,32,75,209,80,63,209,32};MYCOPY(dummy501)}
    {db tmp999[10]={70,209,80,73,209,32,63,209,80,68};MYCOPY(dummy502)}
    {db tmp999[10]={209,32,63,209,80,70,209,32,63,209};MYCOPY(dummy503)}
    {db tmp999[10]={80,66,209,32,63,209,80,68,209,32};MYCOPY(dummy504)}
    {db tmp999[10]={63,209,80,66,209,32,63,211,80,75};MYCOPY(dummy505)}
    {db tmp999[10]={209,32,63,209,80,70,209,32,73,209};MYCOPY(dummy506)}
    {db tmp999[10]={80,63,209,32,68,209,80,63,209,32};MYCOPY(dummy507)}
    {db tmp999[10]={70,209,80,63,209,32,66,209,80,63};MYCOPY(dummy508)}
    {db tmp999[10]={209,32,68,209,80,63,209,32,66,209};MYCOPY(dummy509)}
    {db tmp999[10]={80,63,211,32,75,209,80,63,209,32};MYCOPY(dummy510)}
    {db tmp999[10]={70,209,80,73,209,32,63,209,80,68};MYCOPY(dummy511)}
    {db tmp999[10]={209,32,63,209,80,70,209,32,63,209};MYCOPY(dummy512)}
    {db tmp999[10]={80,66,209,32,63,209,80,68,209,32};MYCOPY(dummy513)}
    {db tmp999[10]={63,209,80,66,209,32,63,211,80,75};MYCOPY(dummy514)}
    {db tmp999[10]={209,32,63,209,80,70,209,32,73,209};MYCOPY(dummy515)}
    {db tmp999[10]={80,63,209,32,68,209,80,63,209,32};MYCOPY(dummy516)}
    {db tmp999[10]={70,209,80,63,209,32,66,209,80,63};MYCOPY(dummy517)}
    {db tmp999[10]={209,32,68,209,80,63,209,32,66,209};MYCOPY(dummy518)}
    {db tmp999[10]={80,63,211,32,63,80,73,209,32,73};MYCOPY(dummy519)}
    {db tmp999[10]={80,63,211,32,63,80,70,209,32,63};MYCOPY(dummy520)}
    {db tmp999[10]={80,70,211,32,63,80,68,209,32,68};MYCOPY(dummy521)}
    {db tmp999[10]={80,63,211,32,63,80,66,209,32,66};MYCOPY(dummy522)}
    {db tmp999[10]={80,63,211,32,66,80,63,211,32,63};MYCOPY(dummy523)}
    {db tmp999[10]={80,66,211,32,63,80,73,209,32,73};MYCOPY(dummy524)}
    {db tmp999[10]={80,63,211,32,63,80,70,209,32,63};MYCOPY(dummy525)}
    {db tmp999[10]={80,70,211,32,63,80,68,209,32,68};MYCOPY(dummy526)}
    {db tmp999[10]={80,63,211,32,63,80,66,209,32,66};MYCOPY(dummy527)}
    {db tmp999[10]={80,63,211,32,66,80,63,211,32,63};MYCOPY(dummy528)}
    {db tmp999[10]={80,66,211,32,63,80,73,209,32,73};MYCOPY(dummy529)}
    {db tmp999[10]={80,63,211,32,63,80,70,209,32,63};MYCOPY(dummy530)}
    {db tmp999[10]={80,70,211,32,63,80,68,209,32,68};MYCOPY(dummy531)}
    {db tmp999[10]={80,63,211,32,63,80,66,209,32,66};MYCOPY(dummy532)}
    {db tmp999[10]={80,63,211,32,66,80,63,211,32,63};MYCOPY(dummy533)}
    {db tmp999[10]={80,66,211,32,63,80,73,209,32,73};MYCOPY(dummy534)}
    {db tmp999[10]={80,63,211,32,63,80,70,209,32,63};MYCOPY(dummy535)}
    {db tmp999[10]={80,70,211,32,63,80,68,209,32,68};MYCOPY(dummy536)}
    {db tmp999[10]={80,63,211,32,63,80,66,209,32,66};MYCOPY(dummy537)}
    {db tmp999[10]={80,63,211,32,66,80,63,211,32,63};MYCOPY(dummy538)}
    {db tmp999[10]={80,66,211,32,75,209,80,63,209,32};MYCOPY(dummy539)}
    {db tmp999[10]={68,209,80,70,209,32,63,209,80,68};MYCOPY(dummy540)}
    {db tmp999[10]={209,32,63,209,80,75,209,32,63,209};MYCOPY(dummy541)}
    {db tmp999[10]={80,68,209,32,63,209,80,70,209,32};MYCOPY(dummy542)}
    {db tmp999[10]={63,209,80,68,209,32,63,211,80,75};MYCOPY(dummy543)}
    {db tmp999[10]={209,32,63,209,80,68,209,32,70,209};MYCOPY(dummy544)}
    {db tmp999[10]={80,63,209,32,68,209,80,63,209,32};MYCOPY(dummy545)}
    {db tmp999[10]={75,209,80,63,209,32,68,209,80,63};MYCOPY(dummy546)}
    {db tmp999[10]={209,32,70,209,80,63,209,32,68,209};MYCOPY(dummy547)}
    {db tmp999[10]={80,63,211,32,73,209,80,63,209,32};MYCOPY(dummy548)}
    {db tmp999[2]={68,209};MYCOPY(dummy549)}
    {db tmp999[10]={80,70,209,32,63,209,80,68,209,32};MYCOPY(dummy550)}
    {db tmp999[10]={63,209,80,73,209,32,63,209,80,68};MYCOPY(dummy551)}
    {db tmp999[10]={209,32,63,209,80,70,209,32,63,209};MYCOPY(dummy552)}
    {db tmp999[10]={80,68,209,32,63,211,80,73,209,32};MYCOPY(dummy553)}
    {db tmp999[10]={63,209,80,68,209,32,70,209,80,63};MYCOPY(dummy554)}
    {db tmp999[10]={209,32,68,209,80,63,209,32,73,209};MYCOPY(dummy555)}
    {db tmp999[10]={80,63,209,32,68,209,80,63,209,32};MYCOPY(dummy556)}
    {db tmp999[10]={70,209,80,63,209,32,68,209,80,63};MYCOPY(dummy557)}
    {db tmp999[10]={211,32,75,209,80,63,209,32,68,209};MYCOPY(dummy558)}
    {db tmp999[10]={80,70,209,32,63,209,80,68,209,32};MYCOPY(dummy559)}
    {db tmp999[10]={63,209,80,75,209,32,63,209,80,68};MYCOPY(dummy560)}
    {db tmp999[10]={209,32,63,209,80,70,209,32,63,209};MYCOPY(dummy561)}
    {db tmp999[10]={80,68,209,32,63,211,80,75,209,32};MYCOPY(dummy562)}
    {db tmp999[10]={63,209,80,68,209,32,70,209,80,63};MYCOPY(dummy563)}
    {db tmp999[10]={209,32,68,209,80,63,209,32,75,209};MYCOPY(dummy564)}
    {db tmp999[10]={80,63,209,32,68,209,80,63,209,32};MYCOPY(dummy565)}
    {db tmp999[10]={70,209,80,63,209,32,68,209,80,63};MYCOPY(dummy566)}
    {db tmp999[10]={211,32,73,209,80,63,209,32,68,209};MYCOPY(dummy567)}
    {db tmp999[10]={80,70,209,32,63,209,80,68,209,32};MYCOPY(dummy568)}
    {db tmp999[10]={63,209,80,73,209,32,63,209,80,68};MYCOPY(dummy569)}
    {db tmp999[10]={209,32,63,209,80,70,209,32,63,209};MYCOPY(dummy570)}
    {db tmp999[10]={80,68,209,32,63,211,80,73,209,32};MYCOPY(dummy571)}
    {db tmp999[10]={63,209,80,68,209,32,70,209,80,63};MYCOPY(dummy572)}
    {db tmp999[10]={209,32,68,209,80,63,209,32,73,209};MYCOPY(dummy573)}
    {db tmp999[10]={80,63,209,32,68,209,80,63,209,32};MYCOPY(dummy574)}
    {db tmp999[10]={70,209,80,63,209,32,68,209,80,63};MYCOPY(dummy575)}
    {db tmp999[10]={211,32,75,209,80,63,209,32,68,209};MYCOPY(dummy576)}
    {db tmp999[10]={80,70,209,32,63,209,80,68,209,32};MYCOPY(dummy577)}
    {db tmp999[10]={63,209,80,75,209,32,63,209,80,68};MYCOPY(dummy578)}
    {db tmp999[10]={209,32,63,209,80,70,209,32,63,209};MYCOPY(dummy579)}
    {db tmp999[10]={80,68,209,32,63,211,80,75,209,32};MYCOPY(dummy580)}
    {db tmp999[10]={63,209,80,68,209,32,70,209,80,63};MYCOPY(dummy581)}
    {db tmp999[10]={209,32,68,209,80,63,209,32,75,209};MYCOPY(dummy582)}
    {db tmp999[10]={80,63,209,32,68,209,80,63,209,32};MYCOPY(dummy583)}
    {db tmp999[10]={70,209,80,63,209,32,68,209,80,63};MYCOPY(dummy584)}
    {db tmp999[10]={211,32,73,209,80,63,209,32,68,209};MYCOPY(dummy585)}
    {db tmp999[10]={80,70,209,32,63,209,80,68,209,32};MYCOPY(dummy586)}
    {db tmp999[10]={63,209,80,73,209,32,63,209,80,68};MYCOPY(dummy587)}
    {db tmp999[10]={209,32,63,209,80,70,209,32,63,209};MYCOPY(dummy588)}
    {db tmp999[10]={80,68,209,32,63,211,80,73,209,32};MYCOPY(dummy589)}
    {db tmp999[10]={63,209,80,68,209,32,70,209,80,63};MYCOPY(dummy590)}
    {db tmp999[10]={209,32,68,209,80,63,209,32,73,209};MYCOPY(dummy591)}
    {db tmp999[10]={80,63,209,32,68,209,80,63,209,32};MYCOPY(dummy592)}
    {db tmp999[10]={70,209,80,63,209,32,68,209,80,63};MYCOPY(dummy593)}
    {db tmp999[10]={211,32,75,209,80,63,209,32,70,209};MYCOPY(dummy594)}
    {db tmp999[10]={80,73,209,32,63,209,80,68,209,32};MYCOPY(dummy595)}
    {db tmp999[10]={63,209,80,70,209,32,63,209,80,66};MYCOPY(dummy596)}
    {db tmp999[10]={209,32,63,209,80,68,209,32,63,209};MYCOPY(dummy597)}
    {db tmp999[10]={80,66,209,32,63,211,80,75,209,32};MYCOPY(dummy598)}
    {db tmp999[10]={63,209,80,70,209,32,73,209,80,63};MYCOPY(dummy599)}
    {db tmp999[10]={209,32,68,209,80,63,209,32,70,209};MYCOPY(dummy600)}
    {db tmp999[2]={80,63};MYCOPY(dummy601)}
    {db tmp999[10]={209,32,66,209,80,63,209,32,68,209};MYCOPY(byte_11fac)}
    {db tmp999[10]={80,63,209,32,66,209,80,63,211,32};MYCOPY(dummy602)}
    {db tmp999[10]={75,209,80,63,209,32,70,209,80,73};MYCOPY(dummy603)}
    {db tmp999[10]={209,32,63,209,80,68,209,32,63,209};MYCOPY(dummy604)}
    {db tmp999[10]={80,70,209,32,63,209,80,66,209,32};MYCOPY(dummy605)}
    {db tmp999[10]={63,209,80,68,209,32,63,209,80,66};MYCOPY(dummy606)}
    {db tmp999[10]={209,32,63,211,80,75,209,32,63,209};MYCOPY(dummy607)}
    {db tmp999[10]={80,70,209,32,73,209,80,63,209,32};MYCOPY(dummy608)}
    {db tmp999[10]={68,209,80,63,209,32,70,209,80,63};MYCOPY(dummy609)}
    {db tmp999[10]={209,32,66,209,80,63,209,32,68,209};MYCOPY(dummy610)}
    {db tmp999[10]={80,63,209,32,66,209,80,63,211,32};MYCOPY(dummy611)}
    {db tmp999[10]={63,80,73,209,32,73,80,63,211,32};MYCOPY(dummy612)}
    {db tmp999[10]={63,80,70,209,32,63,80,70,211,32};MYCOPY(dummy613)}
    {db tmp999[10]={63,80,68,209,32,68,80,63,211,32};MYCOPY(dummy614)}
    {db tmp999[10]={63,80,66,209,32,66,80,63,211,32};MYCOPY(dummy615)}
    {db tmp999[10]={66,80,63,211,32,63,80,66,211,32};MYCOPY(dummy616)}
    {db tmp999[10]={63,80,73,209,32,73,80,63,211,32};MYCOPY(dummy617)}
    {db tmp999[10]={63,80,70,209,32,63,80,70,211,32};MYCOPY(dummy618)}
    {db tmp999[10]={63,80,68,209,32,68,80,63,211,32};MYCOPY(dummy619)}
    {db tmp999[10]={63,80,66,209,32,66,80,63,211,32};MYCOPY(dummy620)}
    {db tmp999[10]={66,80,63,211,32,63,80,66,211,32};MYCOPY(dummy621)}
    {db tmp999[10]={63,80,73,209,32,73,80,63,211,32};MYCOPY(dummy622)}
    {db tmp999[10]={63,80,70,209,32,63,80,70,211,32};MYCOPY(dummy623)}
    {db tmp999[10]={63,80,68,209,32,68,80,63,211,32};MYCOPY(dummy624)}
    {db tmp999[10]={63,80,66,209,32,66,80,63,211,32};MYCOPY(dummy625)}
    {db tmp999[10]={66,80,63,211,32,63,80,66,211,32};MYCOPY(dummy626)}
    {db tmp999[10]={63,80,73,209,32,73,80,63,211,32};MYCOPY(dummy627)}
    {db tmp999[10]={63,80,70,209,32,63,80,70,211,32};MYCOPY(dummy628)}
    {db tmp999[10]={63,80,68,209,32,68,80,63,211,32};MYCOPY(dummy629)}
    {db tmp999[10]={63,80,66,209,32,66,80,63,211,32};MYCOPY(dummy630)}
    {db tmp999[10]={66,80,63,211,32,63,80,66,218,255};MYCOPY(dummy631)}
    {db tmp999[10]={48,179,254,68,167,254,224,31,48,51};MYCOPY(dummy632)}
    {db tmp999[10]={64,39,224,31,48,42,64,54,224,31};MYCOPY(dummy633)}
    {db tmp999[11]={48,42,64,54,224,31,48,56,64,44,224};MYCOPY(dummy634)}
    {db tmp999[11]={31,48,56,64,44,224,31,48,58,64,46};MYCOPY(dummy635)}
    {db tmp999[10]={224,31,48,46,64,58,224,31,48,39};MYCOPY(dummy636)}
    {db tmp999[10]={64,51,224,31,48,54,64,42,224,31};MYCOPY(dummy637)}
    {db tmp999[11]={48,56,64,44,224,31,48,58,64,46,224};MYCOPY(dummy638)}
    {db tmp999[11]={31,48,46,64,58,224,31,48,39,64,51};MYCOPY(dummy639)}
    {db tmp999[10]={224,31,48,39,64,51,224,31,48,37};MYCOPY(dummy640)}
    {db tmp999[10]={64,49,224,31,48,49,64,37,224,31};MYCOPY(dummy641)}
    {db tmp999[11]={48,56,64,44,224,31,48,56,64,44,224};MYCOPY(dummy642)}
    {db tmp999[11]={31,48,58,64,46,224,31,48,61,64,49};MYCOPY(dummy643)}
    {db tmp999[10]={224,31,48,39,209,64,46,209,48,51};MYCOPY(dummy644)}
    {db tmp999[10]={209,64,46,209,48,39,209,64,46,209};MYCOPY(dummy645)}
    {db tmp999[10]={48,51,209,64,46,209,48,39,209,64};MYCOPY(dummy646)}
    {db tmp999[10]={46,209,48,51,209,64,46,209,48,39};MYCOPY(dummy647)}
    {db tmp999[10]={209,64,46,209,48,51,209,64,46,209};MYCOPY(dummy648)}
    {db tmp999[10]={48,42,209,64,49,209,48,54,209,64};MYCOPY(dummy649)}
    {db tmp999[10]={49,209,48,42,209,64,49,209,48,54};MYCOPY(dummy650)}
    {db tmp999[6]={209,64,49,209,48,44};MYCOPY(dummy651)}
    {db tmp999[10]={209,64,51,209,48,56,209,64,51,209};MYCOPY(dummy652)}
    {db tmp999[10]={48,44,209,64,51,209,48,56,209,64};MYCOPY(dummy653)}
    {db tmp999[10]={51,209,48,39,209,64,46,209,48,51};MYCOPY(dummy654)}
    {db tmp999[10]={209,64,46,209,48,39,209,64,46,209};MYCOPY(dummy655)}
    {db tmp999[10]={48,51,209,64,46,209,48,39,209,64};MYCOPY(dummy656)}
    {db tmp999[10]={46,209,48,51,209,64,46,209,48,39};MYCOPY(dummy657)}
    {db tmp999[10]={209,64,46,209,48,51,209,64,46,209};MYCOPY(dummy658)}
    {db tmp999[10]={48,42,209,64,49,209,48,54,209,64};MYCOPY(dummy659)}
    {db tmp999[10]={49,209,48,42,209,64,49,209,48,54};MYCOPY(dummy660)}
    {db tmp999[10]={209,64,49,209,48,44,209,64,51,209};MYCOPY(dummy661)}
    {db tmp999[10]={48,56,209,64,51,209,48,44,209,64};MYCOPY(dummy662)}
    {db tmp999[10]={51,209,48,56,209,64,51,209,48,39};MYCOPY(dummy663)}
    {db tmp999[10]={209,64,46,209,48,51,209,64,46,209};MYCOPY(dummy664)}
    {db tmp999[10]={48,39,209,64,46,209,48,51,209,64};MYCOPY(dummy665)}
    {db tmp999[10]={46,209,48,39,209,64,46,209,48,51};MYCOPY(dummy666)}
    {db tmp999[10]={209,64,46,209,48,39,209,64,46,209};MYCOPY(dummy667)}
    {db tmp999[10]={48,51,209,64,46,209,48,42,209,64};MYCOPY(dummy668)}
    {db tmp999[10]={49,209,48,54,209,64,49,209,48,42};MYCOPY(dummy669)}
    {db tmp999[10]={209,64,49,209,48,54,209,64,49,209};MYCOPY(dummy670)}
    {db tmp999[10]={48,44,209,64,51,209,48,56,209,64};MYCOPY(dummy671)}
    {db tmp999[10]={51,209,48,44,209,64,51,209,48,56};MYCOPY(dummy672)}
    {db tmp999[10]={209,64,51,209,48,39,209,64,46,209};MYCOPY(dummy673)}
    {db tmp999[10]={48,51,209,64,46,209,48,39,209,64};MYCOPY(dummy674)}
    {db tmp999[10]={46,209,48,51,209,64,46,209,48,39};MYCOPY(dummy675)}
    {db tmp999[10]={209,64,46,209,48,51,209,64,46,209};MYCOPY(dummy676)}
    {db tmp999[10]={48,39,209,64,46,209,48,51,209,64};MYCOPY(dummy677)}
    {db tmp999[10]={46,209,48,42,209,64,49,209,48,54};MYCOPY(dummy678)}
    {db tmp999[10]={209,64,49,209,48,42,209,64,49,209};MYCOPY(dummy679)}
    {db tmp999[10]={48,54,209,64,49,209,48,44,209,64};MYCOPY(dummy680)}
    {db tmp999[10]={51,209,48,56,209,64,51,209,48,44};MYCOPY(dummy681)}
    {db tmp999[10]={209,64,51,209,48,56,209,64,51,209};MYCOPY(dummy682)}
    {db tmp999[10]={223,48,51,64,39,223,223,48,39,64};MYCOPY(dummy683)}
    {db tmp999[10]={51,223,223,48,54,64,42,223,223,48};MYCOPY(dummy684)}
    {db tmp999[10]={49,64,37,223,48,39,209,64,46,209};MYCOPY(dummy685)}
    {db tmp999[10]={48,51,209,64,46,209,48,39,209,64};MYCOPY(dummy686)}
    {db tmp999[10]={46,209,48,51,209,64,46,209,48,39};MYCOPY(dummy687)}
    {db tmp999[10]={209,64,46,209,48,51,209,64,46,209};MYCOPY(dummy688)}
    {db tmp999[10]={48,39,209,64,46,209,48,51,209,64};MYCOPY(dummy689)}
    {db tmp999[10]={46,209,48,42,209,64,49,209,48,54};MYCOPY(dummy690)}
    {db tmp999[10]={209,64,49,209,48,42,209,64,49,209};MYCOPY(dummy691)}
    {db tmp999[10]={48,54,209,64,49,209,48,44,209,64};MYCOPY(dummy692)}
    {db tmp999[10]={51,209,48,56,209,64,51,209,48,44};MYCOPY(dummy693)}
    {db tmp999[10]={209,64,51,209,48,56,209,64,51,209};MYCOPY(dummy694)}
    {db tmp999[10]={48,39,209,64,46,209,48,51,209,64};MYCOPY(dummy695)}
    {db tmp999[10]={46,209,48,39,209,64,46,209,48,51};MYCOPY(dummy696)}
    {db tmp999[10]={209,64,46,209,48,39,209,64,46,209};MYCOPY(dummy697)}
    {db tmp999[10]={48,51,209,64,46,209,48,39,209,64};MYCOPY(dummy698)}
    {db tmp999[10]={46,209,48,51,209,64,46,209,48,42};MYCOPY(dummy699)}
    {db tmp999[10]={209,64,49,209,48,54,209,64,49,209};MYCOPY(dummy700)}
    {db tmp999[10]={48,42,209,64,49,209,48,54,209,64};MYCOPY(dummy701)}
    {db tmp999[10]={49,209,48,44,209,64,51,209,48,56};MYCOPY(dummy702)}
    {db tmp999[5]={209,64,51,209,48};MYCOPY(dummy703)}
    {db tmp999[10]={44,209,64,51,209,48,56,209,64,51};MYCOPY(dummy704)}
    {db tmp999[10]={209,48,39,209,64,46,209,48,51,209};MYCOPY(dummy705)}
    {db tmp999[10]={64,46,209,48,39,209,64,46,209,48};MYCOPY(dummy706)}
    {db tmp999[10]={51,209,64,46,209,48,39,209,64,46};MYCOPY(dummy707)}
    {db tmp999[10]={209,48,51,209,64,46,209,48,39,209};MYCOPY(dummy708)}
    {db tmp999[10]={64,46,209,48,51,209,64,46,209,48};MYCOPY(dummy709)}
    {db tmp999[10]={42,209,64,49,209,48,54,209,64,49};MYCOPY(dummy710)}
    {db tmp999[10]={209,48,42,209,64,49,209,48,54,209};MYCOPY(dummy711)}
    {db tmp999[10]={64,49,209,48,44,209,64,51,209,48};MYCOPY(dummy712)}
    {db tmp999[10]={56,209,64,51,209,48,44,209,64,51};MYCOPY(dummy713)}
    {db tmp999[10]={209,48,56,209,64,51,209,48,39,209};MYCOPY(dummy714)}
    {db tmp999[10]={64,46,209,48,51,209,64,46,209,48};MYCOPY(dummy715)}
    {db tmp999[10]={39,209,64,46,209,48,51,209,64,46};MYCOPY(dummy716)}
    {db tmp999[10]={209,48,39,209,64,46,209,48,51,209};MYCOPY(dummy717)}
    {db tmp999[10]={64,46,209,48,39,209,64,46,209,48};MYCOPY(dummy718)}
    {db tmp999[10]={51,209,64,46,209,48,42,209,64,49};MYCOPY(dummy719)}
    {db tmp999[10]={209,48,54,209,64,49,209,48,42,209};MYCOPY(dummy720)}
    {db tmp999[10]={64,49,209,48,54,209,64,49,209,48};MYCOPY(dummy721)}
    {db tmp999[10]={44,209,64,51,209,48,56,209,64,51};MYCOPY(dummy722)}
    {db tmp999[10]={209,48,44,209,64,51,209,48,56,209};MYCOPY(dummy723)}
    {db tmp999[10]={64,51,209,223,48,51,64,39,223,223};MYCOPY(dummy724)}
    {db tmp999[10]={48,39,64,51,223,223,48,54,64,42};MYCOPY(dummy725)}
    {db tmp999[10]={223,223,48,49,64,37,223,48,39,64};MYCOPY(dummy726)}
    {db tmp999[10]={51,224,31,48,39,64,51,224,31,48};MYCOPY(dummy727)}
    {db tmp999[10]={37,64,49,224,31,48,49,64,37,224};MYCOPY(dummy728)}
    {db tmp999[11]={31,48,56,64,44,224,31,48,56,64,44};MYCOPY(dummy729)}
    {db tmp999[10]={224,31,48,58,64,46,224,31,48,61};MYCOPY(dummy730)}
    {db tmp999[10]={64,49,224,31,48,39,209,64,46,209};MYCOPY(dummy731)}
    {db tmp999[10]={48,51,209,64,46,209,48,39,209,64};MYCOPY(dummy732)}
    {db tmp999[10]={46,209,48,51,209,64,46,209,48,39};MYCOPY(dummy733)}
    {db tmp999[10]={209,64,46,209,48,51,209,64,46,209};MYCOPY(dummy734)}
    {db tmp999[10]={48,39,209,64,46,209,48,51,209,64};MYCOPY(dummy735)}
    {db tmp999[10]={46,209,48,42,209,64,49,209,48,54};MYCOPY(dummy736)}
    {db tmp999[10]={209,64,49,209,48,42,209,64,49,209};MYCOPY(dummy737)}
    {db tmp999[10]={48,54,209,64,49,209,48,44,209,64};MYCOPY(dummy738)}
    {db tmp999[10]={51,209,48,56,209,64,51,209,48,44};MYCOPY(dummy739)}
    {db tmp999[10]={209,64,51,209,48,56,209,64,51,209};MYCOPY(dummy740)}
    {db tmp999[10]={48,39,209,64,46,209,48,51,209,64};MYCOPY(dummy741)}
    {db tmp999[10]={46,209,48,39,209,64,46,209,48,51};MYCOPY(dummy742)}
    {db tmp999[10]={209,64,46,209,48,39,209,64,46,209};MYCOPY(dummy743)}
    {db tmp999[10]={48,51,209,64,46,209,48,39,209,64};MYCOPY(dummy744)}
    {db tmp999[10]={46,209,48,51,209,64,46,209,48,42};MYCOPY(dummy745)}
    {db tmp999[10]={209,64,49,209,48,54,209,64,49,209};MYCOPY(dummy746)}
    {db tmp999[10]={48,42,209,64,49,209,48,54,209,64};MYCOPY(dummy747)}
    {db tmp999[10]={49,209,48,44,209,64,51,209,48,56};MYCOPY(dummy748)}
    {db tmp999[10]={209,64,51,209,48,44,209,64,51,209};MYCOPY(dummy749)}
    {db tmp999[10]={48,56,209,64,51,209,48,39,209,64};MYCOPY(dummy750)}
    {db tmp999[10]={46,209,48,51,209,64,46,209,48,39};MYCOPY(dummy751)}
    {db tmp999[10]={209,64,46,209,48,51,209,64,46,209};MYCOPY(dummy752)}
    {db tmp999[10]={48,39,209,64,46,209,48,51,209,64};MYCOPY(dummy753)}
    {db tmp999[10]={46,209,48,39,209,64,46,209,48,51};MYCOPY(dummy754)}
    {db tmp999[4]={209,64,46,209};MYCOPY(dummy755)}
    {db tmp999[10]={48,42,209,64,49,209,48,54,209,64};MYCOPY(dummy756)}
    {db tmp999[10]={49,209,48,42,209,64,49,209,48,54};MYCOPY(dummy757)}
    {db tmp999[10]={209,64,49,209,48,44,209,64,51,209};MYCOPY(dummy758)}
    {db tmp999[10]={48,56,209,64,51,209,48,44,209,64};MYCOPY(dummy759)}
    {db tmp999[10]={51,209,48,56,209,64,51,209,48,39};MYCOPY(dummy760)}
    {db tmp999[10]={209,64,46,209,48,51,209,64,46,209};MYCOPY(dummy761)}
    {db tmp999[10]={48,39,209,64,46,209,48,51,209,64};MYCOPY(dummy762)}
    {db tmp999[10]={46,209,48,39,209,64,46,209,48,51};MYCOPY(dummy763)}
    {db tmp999[10]={209,64,46,209,48,39,209,64,46,209};MYCOPY(dummy764)}
    {db tmp999[10]={48,51,209,64,46,209,48,42,209,64};MYCOPY(dummy765)}
    {db tmp999[10]={49,209,48,54,209,64,49,209,48,42};MYCOPY(dummy766)}
    {db tmp999[10]={209,64,49,209,48,54,209,64,49,209};MYCOPY(dummy767)}
    {db tmp999[10]={48,44,209,64,51,209,48,56,209,64};MYCOPY(dummy768)}
    {db tmp999[10]={51,209,48,44,209,64,51,209,48,56};MYCOPY(dummy769)}
    {db tmp999[5]={209,64,51,216,255};MYCOPY(dummy770)}
    {db tmp999[2]={1,0};MYCOPY(byte_12643)}
    dummy771=offset(_text,au)+3;
    dummy772=offset(_text,au)+3;
    {db tmp999[2]={1,0};MYCOPY(dummy773)}
    dummy774=offset(_text,byte_10f8e)+243;
    dummy775=offset(_text,byte_10f8e)+243;
    {db tmp999[2]={1,0};MYCOPY(dummy776)}
    dummy777=offset(_text,byte_11594)+78;
    dummy778=offset(_text,byte_11594)+78;
    {db tmp999[2]={1,0};MYCOPY(dummy779)}
    dummy780=offset(_text,byte_11fac)+310;
    dummy781=offset(_text,byte_11fac)+310;
    {db tmp999[15]={0,0,3,0,1,4,0,2,5,0,8,11,0,9,12};MYCOPY(adlbeg)}
    {db tmp999[12]={0,10,13,0,16,19,0,17,20,0,18,21};MYCOPY(dummy782)}
    word_12676=363;
    {db tmp999[12]={129,1,152,1,176,1,202,1,229,1,2,2};MYCOPY(dummy783)}
    {db tmp999[10]={32,2,65,2,99,2,135,2,174,2};MYCOPY(dummy784)}
    {db tmp999[64]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(byte_1268e)}
    byte_126ce=0;
    {db tmp999[95]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy785)}
    byte_1272e=0;
    {db tmp999[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy786)}
    byte_1273e=0;
    {db tmp999[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy787)}
    byte_1274e=0;
    {db tmp999[63]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy788)}
    byte_1278e=0;
    {db tmp999[255]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy789)}
    word_1288e=0;
//    {db tmp999[614]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy790)}
    {db tmp999[4]={0x31,3,1,0};MYCOPY(dummy790_)}
    {db tmp999[18]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(byte_12afa)}
//    {db tmp999[70]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy791)}
    {char tmp999[47]={'T','h','i','s',' ','i','n','t','r','o',' ','r','e','q','u','i','r','e','s',' ','1','9','6','K','b',' ','f','r','e','e',' ','a','n','d',' ','a',' ','V','G','A',' ','c','a','r','d','.','\n'};MYCOPY(mpuend)}
    {char tmp999[56]={'\r','F','o','r',' ','h','e','a','r','i','n','g',' ','t','h','i','s',' ','i','n','t','r','o',39,'s',' ','m','u','s','i','c',' ','y','o','u',' ','m','u','s','t',' ','u','s','e',' ','a','n',' ','O','P','L','2',' ','(','A','d'};MYCOPY(dummy792)}
    {char tmp999[9]={'L','i','b',')',' ','o','r',' ','\n'};MYCOPY(dummy793)}
    {char tmp999[62]={'\r','G','e','n','e','r','a','l',' ','M','i','d','i',' ','(','M','P','U',')',' ','d','e','v','i','c','e','.',' ','E','v','e','r','y',' ','s','o','u','n','d',' ','c','a','r','d',' ','s','u','p','p','o','r','t','s',' ','o','n','e',' ','o','f',' ','t'};MYCOPY(dummy794)}
    {char tmp999[5]={'h','e','m','.','\n'};MYCOPY(dummy795)}
    dummy796=10;
    {char tmp999[62]={'\r','G','r','e','e','t','i','n','g','s',' ','f','r','o','m',' ','I','g','u','a','n','a',' ','t','o',' ','a','l','l',' ','o','u','r',' ','f','r','i','e','n','d','s',' ','a','l','l',' ','o','v','e','r',' ','t','h','e',' ','w','o','r','l','d','.','\n'};MYCOPY(dummy797)}
    {db tmp999[2]={10,13};MYCOPY(dummy798)}
    dummy799=196;
    dummy800=196;
    {db tmp999[8]={196,196,196,196,196,196,196,196};MYCOPY(dummy801)}
    {db tmp999[2]={196,196};MYCOPY(dummy802)}
    {db tmp999[4]={196,196,196,196};MYCOPY(dummy803)}
    {db tmp999[3]={196,196,196};MYCOPY(dummy804)}
    {db tmp999[3]={196,196,196};MYCOPY(dummy805)}
    {db tmp999[7]={196,196,196,196,196,196,196};MYCOPY(dummy806)}
    {db tmp999[7]={196,196,196,196,196,196,196};MYCOPY(dummy807)}
    {db tmp999[12]={196,196,196,196,196,196,196,196,196,196,196,196};MYCOPY(dummy808)}
    {db tmp999[5]={196,196,196,196,196};MYCOPY(dummy809)}
    {db tmp999[8]={196,196,196,196,196,196,196,196};MYCOPY(dummy810)}
    {db tmp999[17]={196,196,196,196,196,196,196,10,13,32,32,32,32,32,32,32,32};MYCOPY(dummy811)}
    {char tmp999[47]={' ',' ',' ',' ',' ',' ',' ',' ','T','H','E',' ','F','I','N','E','S','T',' ','D','E','M','O',' ','O','R','I','E','N','T','E','D',' ','B','B','S',' ','I','N',' ','S','P','A','I','N','\n','\r'};MYCOPY(athefinestdemoo_0)}
    dummy812=205;
    dummy813=205;
    dummy814=205;
    dummy815=205;
    dummy816=205;
    dummy817=205;
    dummy818=205;
    dummy819=205;
    dummy820=205;
    dummy821=205;
    dummy822=205;
    dummy823=205;
    dummy824=205;
    dummy825=205;
    dummy826=205;
    dummy827=205;
    dummy828=205;
    dummy829=205;
    dummy830=205;
    dummy831=205;
    dummy832=205;
    dummy833=205;
    dummy834=205;
    dummy835=205;
    dummy836=205;
    dummy837=205;
    dummy838=205;
    dummy839=205;
    dummy840=205;
    dummy841=205;
    dummy842=205;
    dummy843=205;
    dummy844=205;
    dummy845=205;
    dummy846=205;
    dummy847=205;
    dummy848=205;
    dummy849=205;
    dummy850=205;
    dummy851=205;
    dummy852=205;
    dummy853=205;
    dummy854=205;
    dummy855=205;
    dummy856=205;
    dummy857=205;
    dummy858=205;
    dummy859=205;
    dummy860=205;
    dummy861=205;
    dummy862=205;
    dummy863=205;
    dummy864=205;
    dummy865=205;
    dummy866=205;
    dummy867=205;
    dummy868=205;
    dummy869=205;
    dummy870=205;
    dummy871=205;
    dummy872=205;
    dummy873=205;
    dummy874=205;
    dummy875=205;
    dummy876=205;
    dummy877=205;
    dummy878=205;
    dummy879=205;
    ablastersoundbb=10;
    {char tmp999[56]={'\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B','L','A','S','T','E','R','S','O','U','N','D',' ','B','B','S',' ',' ',' ',' ',' ',' ',' ',' ','+','3','4','-','5','8','-','2','9','3','5','8','3','\n','\r'};MYCOPY(dummy880)}
    dummy881=205;
    dummy882=205;
    dummy883=205;
    dummy884=205;
    dummy885=205;
    dummy886=205;
    dummy887=205;
    dummy888=205;
    dummy889=205;
    dummy890=205;
    dummy891=205;
    dummy892=205;
    dummy893=205;
    dummy894=205;
    dummy895=205;
    dummy896=205;
    dummy897=205;
    dummy898=205;
    dummy899=205;
    dummy900=205;
    dummy901=205;
    dummy902=205;
    dummy903=205;
    dummy904=205;
    dummy905=205;
    dummy906=205;
    dummy907=205;
    dummy908=205;
    dummy909=205;
    dummy910=205;
    dummy911=205;
    dummy912=205;
    dummy913=205;
    dummy914=205;
    dummy915=205;
    dummy916=205;
    dummy917=205;
    dummy918=205;
    dummy919=205;
    dummy920=205;
    dummy921=205;
    dummy922=205;
    dummy923=205;
    dummy924=205;
    dummy925=205;
    dummy926=205;
    dummy927=205;
    dummy928=205;
    dummy929=205;
    dummy930=205;
    dummy931=205;
    dummy932=205;
    dummy933=205;
    dummy934=205;
    dummy935=205;
    dummy936=205;
    dummy937=205;
    dummy938=205;
    dummy939=205;
    dummy940=205;
    dummy941=205;
    dummy942=205;
    dummy943=205;
    dummy944=205;
    dummy945=205;
    dummy946=205;
    dummy947=205;
    dummy948=205;
    asoundblasterco=10;
    {char tmp999[62]={'\r',' ',' ',' ','S','o','u','n','d',' ','B','l','a','s','t','e','r',' ','C','o','n','n','e','c','t','i','o','n',' ','1','4',':','4','5','0','0','/','2','0','0',' ','&',' ','2','0','1',' ','H','u','b',' ','G','r','a','n','a','d','a',' ','(','S','p'};MYCOPY(dummy949)}
    {char tmp999[6]={'a','i','n',')','.','\n'};MYCOPY(dummy950)}
    {char tmp999[62]={'\r',' ',' ',' ',' ',' ',' ','C','r','e','a','t','i','v','i','t','y',' ','D','e','m','o',' ','N','e','t',' ','9','4',':','6','2','0','/','2','0','0',' ','&',' ','2','0','1',' ','H','u','b',' ','G','r','a','n','a','d','a',' ','(','S','p','a','i','n'};MYCOPY(dummy951)}
    {char tmp999[3]={')','.','\n'};MYCOPY(dummy952)}
    {char tmp999[28]={'\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','S','o','u','n','d','N','e','t',' ','E','s','p','a'};MYCOPY(dummy953)}
    dummy954=164;
    {char tmp999[28]={'a',' ','3','4',':','3','4','/','0',' ','C','o','o','r','d','i','n','a','t','o','r','/','H','o','s','t','.','\n'};MYCOPY(aa34340coordina)}
    {char tmp999[45]={'\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','F','i','d','o','n','e','t',' ','2',':','3','4','5','/','8','0','5','\n'};MYCOPY(dummy955)}
    {char tmp999[50]={'\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','I','G','U','A','N','A',' ',' ','W','o','r','l','d',' ','H','e','a','d','Q','u','a','r','t','e','r','s','\n'};MYCOPY(dummy956)}
    {char tmp999[52]={'\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','V','a','n','g','e','l','i','S','T','e','a','m',' ','D','i','s','t','r','i','b','u','t','i','o','n',' ','S','i','t','e','\n'};MYCOPY(dummy957)}
    {char tmp999[48]={'\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D','U','S','T',' ','D','i','s','t','r','i','b','u','t','i','o','n',' ','S','i','t','e','\n'};MYCOPY(dummy958)}
    {char tmp999[54]={'\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A','u','t','h','o','r','i','z','e','d',' ','P','r','o','d','u','c','t',' ','S','u','p','p','o','r','t',' ','N','o','d','e',' ','f','o','r','\n'};MYCOPY(dummy959)}
    {char tmp999[58]={'\r',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','A','d','v','a','n','c','e','d',' ','G','r','a','v','i','s',' ','C','o','m','p','u','t','e','r',' ','T','e','c','h','n','o','l','o','g','y',' ','L','t','d','.','\n','\r'};MYCOPY(dummy960)}
    {db tmp999[6]={196,196,196,196,196,196};MYCOPY(dummy961)}
    {db tmp999[8]={196,196,196,196,196,196,196,196};MYCOPY(dummy962)}
    dummy963=196;
    dummy964=196;
    {db tmp999[2]={196,196};MYCOPY(dummy965)}
    {db tmp999[4]={196,196,196,196};MYCOPY(dummy966)}
    {db tmp999[4]={196,196,196,196};MYCOPY(dummy967)}
    {db tmp999[14]={196,196,196,196,196,196,196,196,196,196,196,196,196,196};MYCOPY(dummy968)}
    dummy969=196;
    {db tmp999[7]={196,196,196,196,196,196,196};MYCOPY(dummy970)}
    {db tmp999[11]={196,196,196,196,196,196,196,196,196,196,196};MYCOPY(dummy971)}
    {db tmp999[18]={196,196,196,196,196,196,196,196,196,10,13,32,32,32,32,32,32,32};MYCOPY(dummy972)}
    {char tmp999[52]={' ',' ',' ',' ',' ',' ','B','a','u','d','r','a','t','e',':',' ','1','9','k','2',' ','Z','y','X','E','L','/',' ','2','4',' ','O','p','e','n','/',' ','+','1',' ','G','b',' ','O','n','-','l','i','n','e','\n','\r'};MYCOPY(abaudrate19k2zy)}
    dummy973=205;
    dummy974=205;
    dummy975=205;
    dummy976=205;
    dummy977=205;
    dummy978=205;
    dummy979=205;
    dummy980=205;
    dummy981=205;
    dummy982=205;
    dummy983=205;
    dummy984=205;
    dummy985=205;
    dummy986=205;
    dummy987=205;
    dummy988=205;
    dummy989=205;
    dummy990=205;
    dummy991=205;
    dummy992=205;
    dummy993=205;
    dummy994=205;
    dummy995=205;
    dummy996=205;
    dummy997=205;
    dummy998=205;
    dummy999=205;
    dummy1000=205;
    dummy1001=205;
    dummy1002=205;
    dummy1003=205;
    dummy1004=205;
    dummy1005=205;
    dummy1006=205;
    dummy1007=205;
    dummy1008=205;
    dummy1009=205;
    dummy1010=205;
    dummy1011=205;
    dummy1012=205;
    dummy1013=205;
    dummy1014=205;
    dummy1015=205;
    dummy1016=205;
    dummy1017=205;
    dummy1018=205;
    dummy1019=205;
    dummy1020=205;
    dummy1021=205;
    dummy1022=205;
    dummy1023=205;
    dummy1024=205;
    dummy1025=205;
    dummy1026=205;
    dummy1027=205;
    dummy1028=205;
    dummy1029=205;
    dummy1030=205;
    dummy1031=205;
    dummy1032=205;
    dummy1033=205;
    dummy1034=205;
    dummy1035=205;
    dummy1036=205;
    dummy1037=205;
    dummy1038=205;
    dummy1039=205;
    dummy1040=205;
    asc_1303b=10;
    {char tmp999[3]="\r$";MYCOPY(dummy1041)}
    {db tmp999[3]={0,0,12};MYCOPY(dummy1042)}
    {char tmp999[2]={' ',11};MYCOPY(dummy1043)}
    dummy1044=20;
    dummy1045=37;
    dummy1046=20;
    dummy1047=28;
    dummy1048=44;
    dummy1049=28;
    dummy1050=36;
    dummy1051=51;
    dummy1052=36;
    dummy1053=46;
    dummy1054=56;
    dummy1055=44;
    dummy1056=52;
    dummy1057=59;
    dummy1058=52;
    dummy1059=60;
    dummy1060=60;
    dummy1061=60;
    dummy1062=63;
    dummy1063=63;
    dummy1064=63;
    dummy1065=12;
    dummy1066=12;
    dummy1067=40;
    dummy1068=20;
    dummy1069=20;
    dummy1070=44;
    dummy1071=28;
    dummy1072=28;
    dummy1073=52;
    dummy1074=36;
    dummy1075=36;
    dummy1076=56;
    dummy1077=44;
    dummy1078=44;
    dummy1079=56;
    dummy1080=52;
    dummy1081=52;
    dummy1082=60;
    dummy1083=60;
    dummy1084=60;
    dummy1085=60;
    {db tmp999[33]={0,0,0,0,0,0,0,0,0,0,5,96,0,0,0,0,0,0,0,0,0,0,100,64,0,0,0,0,0,0,0,0,0};MYCOPY(fontbeg)}
    {db tmp999[23]={6,84,64,0,0,0,0,0,0,0,0,5,117,84,64,0,0,0,0,0,0,0,5};MYCOPY(dummy1086)}
    {db tmp999[13]={118,53,85,64,0,0,6,0,0,0,5,117,35};MYCOPY(dummy1087)}
    {db tmp999[11]={51,85,64,0,0,117,0,0,4,117,33};MYCOPY(dummy1088)}
    {db tmp999[13]={16,0,69,64,0,7,84,0,4,118,65,17,16};MYCOPY(dummy1089)}
    {db tmp999[12]={0,52,64,0,102,68,86,103,85,34,65,16};MYCOPY(dummy1090)}
    {db tmp999[15]={0,0,0,0,117,68,86,118,66,0,97,16,0,0,0};MYCOPY(dummy1091)}
    {db tmp999[12]={6,84,69,86,66,0,0,97,16,0,0,0};MYCOPY(dummy1092)}
    {db tmp999[13]={7,68,69,86,100,50,0,113,16,0,0,0,5};MYCOPY(dummy1093)}
    {db tmp999[12]={68,85,85,102,116,87,113,16,0,0,0,0};MYCOPY(dummy1094)}
    {db tmp999[11]={52,85,85,86,119,33,17,16,0,6,96};MYCOPY(dummy1095)}
    {db tmp999[12]={0,3,69,85,86,103,97,17,16,0,99,48};MYCOPY(dummy1096)}
    {db tmp999[11]={0,0,3,69,86,103,116,17,19,102,51};MYCOPY(dummy1097)}
    {db tmp999[12]={48,0,0,0,3,69,102,119,49,17,18,35};MYCOPY(dummy1098)}
    {db tmp999[13]={48,0,0,0,0,3,69,103,115,17,18,34,48};MYCOPY(dummy1099)}
    {db tmp999[18]={0,0,0,0,0,3,70,119,33,17,34,48,0,0,0,0,0,0};MYCOPY(dummy1100)}
    {db tmp999[17]={3,70,81,17,34,48,0,0,0,0,0,0,0,3,68,17,34};MYCOPY(dummy1101)}
    {db tmp999[25]={48,0,0,0,0,0,0,0,0,3,65,18,48,0,0,0,0,0,0,0,0,0,1,19,48};MYCOPY(dummy1102)}
    {db tmp999[27]={0,0,0,0,0,0,0,0,0,0,0,48,7,100,0,0,0,0,0,0,0,0,6,96,6,85,64};MYCOPY(dummy1103)}
    {db tmp999[16]={0,0,0,0,0,0,0,100,64,7,85,85,102,102,102,103};MYCOPY(dummy1104)}
    {db tmp999[11]={118,119,102,52,64,6,85,85,86,102,103};MYCOPY(dummy1105)}
    {db tmp999[11]={117,49,18,35,52,64,7,69,85,102,102};MYCOPY(dummy1106)}
    {db tmp999[11]={119,82,17,34,35,52,64,7,69,85,102};MYCOPY(dummy1107)}
    {db tmp999[11]={103,119,65,17,34,35,51,64,7,68,85};MYCOPY(dummy1108)}
    {db tmp999[10]={102,102,119,50,17,34,34,51,64,6};MYCOPY(dummy1109)}
    {db tmp999[11]={68,85,86,102,119,117,33,18,34,51,64};MYCOPY(dummy1110)}
    {db tmp999[10]={6,68,85,85,102,119,119,114,17,34};MYCOPY(dummy1111)}
    {db tmp999[11]={35,64,6,68,82,34,34,71,114,34,34};MYCOPY(dummy1112)}
    {db tmp999[12]={36,35,48,6,68,82,0,0,103,114,0,0};MYCOPY(dummy1113)}
    {db tmp999[12]={6,35,48,6,68,83,0,0,118,114,0,0};MYCOPY(dummy1114)}
    {db tmp999[12]={7,35,48,6,84,85,102,103,86,119,102,103};MYCOPY(dummy1115)}
    {db tmp999[12]={115,35,48,5,100,85,85,85,86,103,119,33};MYCOPY(dummy1116)}
    {db tmp999[11]={34,35,48,0,100,69,85,85,102,103,119};MYCOPY(dummy1117)}
    {db tmp999[12]={65,18,51,48,0,68,69,85,86,101,102,102};MYCOPY(dummy1118)}
    {db tmp999[11]={99,18,35,0,0,4,85,85,86,80,102};MYCOPY(dummy1119)}
    {db tmp999[13]={103,116,17,48,0,0,0,5,69,96,0,54,102};MYCOPY(dummy1120)}
    {db tmp999[23]={118,17,0,0,0,0,0,0,0,0,0,87,119,0,0,0,0,0,0,0,4,103,118};MYCOPY(dummy1121)}
    {db tmp999[19]={83,0,0,0,0,0,0,0,4,119,102,103,119,83,0,0,0,0,0};MYCOPY(dummy1122)}
    {db tmp999[12]={3,103,102,102,119,119,101,64,0,0,0,0};MYCOPY(dummy1123)}
    {db tmp999[11]={55,101,102,119,119,117,33,20,0,0,0};MYCOPY(dummy1124)}
    {db tmp999[12]={3,118,86,103,119,117,50,17,18,64,0,0};MYCOPY(dummy1125)}
    {db tmp999[12]={7,101,86,118,67,1,17,17,34,51,0,0};MYCOPY(dummy1126)}
    {db tmp999[12]={86,85,67,0,0,1,17,18,34,36,0,0};MYCOPY(dummy1127)}
    {db tmp999[13]={117,84,0,0,0,0,50,34,34,51,48,4,100};MYCOPY(dummy1128)}
    {db tmp999[18]={83,0,0,0,0,4,50,34,51,48,6,100,80,0,0,0,0,0};MYCOPY(dummy1129)}
    {db tmp999[15]={67,35,51,64,6,68,80,0,0,0,0,0,5,51,51};MYCOPY(dummy1130)}
    {db tmp999[15]={64,7,68,80,0,0,0,0,0,3,67,52,64,6,68};MYCOPY(dummy1131)}
    {db tmp999[19]={83,0,0,0,0,0,0,99,52,64,4,84,85,84,0,0,0,0,0};MYCOPY(dummy1132)}
    {db tmp999[13]={115,52,64,0,101,85,102,80,0,0,0,0,115};MYCOPY(dummy1133)}
    {db tmp999[13]={52,48,3,118,85,102,80,0,0,0,0,115,52};MYCOPY(dummy1134)}
    {db tmp999[15]={0,6,85,85,84,0,0,0,0,0,99,51,0,4,85};MYCOPY(dummy1135)}
    {db tmp999[20]={67,0,0,0,0,0,4,67,48,0,0,0,0,0,0,0,0,0,54,51};MYCOPY(dummy1136)}
    {db tmp999[27]={0,0,0,0,0,0,0,0,0,0,100,48,0,0,0,0,0,0,0,0,0,3,64,0,0,0,7};MYCOPY(dummy1137)}
    {db tmp999[23]={101,0,0,0,0,0,0,0,0,6,96,6,85,80,0,0,0,0,0,0,0,100,48};MYCOPY(dummy1138)}
    {db tmp999[12]={7,85,85,102,102,102,102,103,118,102,51,48};MYCOPY(dummy1139)}
    {db tmp999[11]={7,69,86,102,119,119,118,83,17,34,51};MYCOPY(dummy1140)}
    {db tmp999[12]={48,7,69,86,102,119,119,119,118,33,34,35};MYCOPY(dummy1141)}
    {db tmp999[12]={48,7,69,86,102,103,119,119,119,49,18,35};MYCOPY(dummy1142)}
    {db tmp999[12]={48,7,68,86,102,119,119,119,118,33,18,35};MYCOPY(dummy1143)}
    {db tmp999[11]={48,6,68,85,102,119,119,118,66,17,18};MYCOPY(dummy1144)}
    {db tmp999[11]={34,48,7,68,85,103,103,101,67,33,17};MYCOPY(dummy1145)}
    {db tmp999[14]={34,34,48,6,68,68,34,34,34,34,34,34,50,34};MYCOPY(dummy1146)}
    {db tmp999[16]={48,7,68,66,0,0,0,0,0,0,5,35,48,6,68,66};MYCOPY(dummy1147)}
    {db tmp999[19]={0,0,0,0,0,0,6,35,64,6,84,68,32,0,0,0,0,0,54};MYCOPY(dummy1148)}
    {db tmp999[12]={35,64,5,100,85,67,32,0,0,0,36,99};MYCOPY(dummy1149)}
    {db tmp999[12]={35,64,3,100,85,85,102,102,102,102,100,50};MYCOPY(dummy1150)}
    {db tmp999[11]={52,64,0,86,85,85,86,102,103,119,33};MYCOPY(dummy1151)}
    {db tmp999[10]={34,52,0,0,54,85,85,102,102,119};MYCOPY(dummy1152)}
    {db tmp999[11]={117,17,35,52,0,0,5,85,86,102,102};MYCOPY(dummy1153)}
    {db tmp999[12]={119,115,18,35,48,0,0,0,85,86,102,103};MYCOPY(dummy1154)}
    {db tmp999[12]={119,81,18,35,48,0,0,0,5,102,102,103};MYCOPY(dummy1155)}
    {db tmp999[15]={118,49,17,35,0,0,0,0,0,70,102,119,99,17,17};MYCOPY(dummy1156)}
    {db tmp999[17]={48,0,0,0,0,0,0,86,118,67,17,0,0,0,0,7,101};MYCOPY(dummy1157)}
    {db tmp999[23]={0,0,0,0,0,0,0,0,6,96,6,85,80,0,0,0,0,0,0,0,100,48,7};MYCOPY(dummy1158)}
    {db tmp999[15]={85,85,102,102,102,102,102,102,102,51,48,6,69,86,102};MYCOPY(dummy1159)}
    {db tmp999[11]={119,101,67,33,17,34,51,48,7,69,86};MYCOPY(dummy1160)}
    {db tmp999[11]={102,119,119,118,66,17,34,35,48,7,68};MYCOPY(dummy1161)}
    {db tmp999[10]={86,102,103,119,119,118,33,18,35,48};MYCOPY(dummy1162)}
    {db tmp999[13]={7,68,86,102,119,119,119,119,49,18,35,48,6};MYCOPY(dummy1163)}
    {db tmp999[11]={68,85,102,119,119,119,118,33,18,34,48};MYCOPY(dummy1164)}
    {db tmp999[11]={7,68,85,103,103,119,118,83,19,50,34};MYCOPY(dummy1165)}
    {db tmp999[12]={64,6,68,64,0,0,71,112,0,0,3,34};MYCOPY(dummy1166)}
    {db tmp999[13]={48,6,68,0,0,0,103,112,0,0,0,82,64};MYCOPY(dummy1167)}
    {db tmp999[14]={6,68,0,0,0,103,112,0,0,0,99,48,6,68};MYCOPY(dummy1168)}
    {db tmp999[13]={0,0,3,103,112,0,0,0,98,64,6,68,48};MYCOPY(dummy1169)}
    {db tmp999[13]={0,6,119,112,0,0,0,99,64,6,68,64,0};MYCOPY(dummy1170)}
    {db tmp999[13]={4,119,116,0,0,5,82,64,6,68,83,0,0};MYCOPY(dummy1171)}
    {db tmp999[12]={87,119,0,0,6,51,64,6,68,85,0,0};MYCOPY(dummy1172)}
    {db tmp999[13]={5,118,0,0,85,35,64,4,69,85,80,0,0};MYCOPY(dummy1173)}
    {db tmp999[14]={67,0,3,98,52,64,0,4,85,84,0,0,0,0};MYCOPY(dummy1174)}
    {db tmp999[14]={6,50,52,48,0,0,4,102,0,0,0,0,99,51};MYCOPY(dummy1175)}
    {db tmp999[16]={67,0,0,0,0,3,0,0,0,0,64,51,0,0,7,101};MYCOPY(dummy1176)}
    {db tmp999[23]={0,0,0,0,0,0,0,0,6,96,6,85,80,0,0,0,0,0,0,0,100,64,7};MYCOPY(dummy1177)}
    {db tmp999[15]={85,85,102,102,102,102,102,102,102,52,64,6,69,86,102};MYCOPY(dummy1178)}
    {db tmp999[11]={119,101,67,33,17,35,52,64,7,69,86};MYCOPY(dummy1179)}
    {db tmp999[11]={102,119,119,118,66,17,35,52,64,7,68};MYCOPY(dummy1180)}
    {db tmp999[10]={86,102,103,119,119,118,33,35,51,64};MYCOPY(dummy1181)}
    {db tmp999[13]={7,68,86,102,119,119,119,119,49,34,51,64,6};MYCOPY(dummy1182)}
    {db tmp999[11]={68,85,102,119,119,119,118,33,34,51,64};MYCOPY(dummy1183)}
    {db tmp999[11]={7,68,85,103,103,119,118,83,17,50,35};MYCOPY(dummy1184)}
    {db tmp999[12]={48,6,68,64,0,0,71,112,0,0,3,35};MYCOPY(dummy1185)}
    {db tmp999[13]={48,6,68,0,0,0,103,112,0,0,0,51,48};MYCOPY(dummy1186)}
    {db tmp999[16]={6,68,0,0,0,103,112,0,0,0,0,0,6,68,0,0};MYCOPY(dummy1187)}
    {db tmp999[15]={3,103,112,0,0,0,0,0,6,68,48,0,6,119,112};MYCOPY(dummy1188)}
    {db tmp999[18]={0,0,0,0,0,6,68,64,0,4,119,116,0,0,0,0,0,6};MYCOPY(dummy1189)}
    dummy1190=68;
    {db tmp999[15]={83,0,0,87,119,0,0,0,0,0,6,68,85,0,0};MYCOPY(dummy1191)}
    {db tmp999[20]={5,118,0,0,0,0,0,4,69,85,80,0,0,67,0,0,0,0,0,0};MYCOPY(dummy1192)}
    {db tmp999[39]={4,85,84,0,0,0,0,0,0,0,0,0,0,4,102,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1193)}
    {db tmp999[17]={4,103,118,83,0,0,0,0,0,0,0,4,119,102,103,119,83};MYCOPY(dummy1194)}
    {db tmp999[13]={0,0,0,0,0,3,103,102,102,119,119,101,64};MYCOPY(dummy1195)}
    {db tmp999[12]={0,0,0,0,55,101,102,119,119,117,33,20};MYCOPY(dummy1196)}
    {db tmp999[12]={0,0,0,3,118,86,103,119,117,50,17,18};MYCOPY(dummy1197)}
    {db tmp999[11]={64,0,0,7,101,86,118,67,49,17,17};MYCOPY(dummy1198)}
    {db tmp999[11]={34,51,0,0,86,85,67,0,0,1,17};MYCOPY(dummy1199)}
    {db tmp999[14]={18,34,36,0,0,117,84,0,0,0,0,50,34,34};MYCOPY(dummy1200)}
    {db tmp999[14]={51,48,4,100,83,0,0,0,0,4,50,34,51,48};MYCOPY(dummy1201)}
    {db tmp999[15]={6,100,80,0,0,0,0,0,67,34,51,64,6,68,80};MYCOPY(dummy1202)}
    {db tmp999[15]={0,0,0,0,0,5,50,51,64,7,68,80,0,0,7};MYCOPY(dummy1203)}
    {db tmp999[12]={102,0,3,66,51,64,6,68,83,0,0,7};MYCOPY(dummy1204)}
    {db tmp999[12]={34,80,0,82,51,64,4,84,85,84,0,6};MYCOPY(dummy1205)}
    {db tmp999[11]={17,38,101,50,52,64,0,101,85,102,80};MYCOPY(dummy1206)}
    {db tmp999[11]={6,17,17,34,35,52,64,3,118,85,102};MYCOPY(dummy1207)}
    {db tmp999[11]={80,6,17,17,34,51,52,48,6,85,85};MYCOPY(dummy1208)}
    {db tmp999[12]={84,0,6,17,18,35,51,52,0,4,85,67};MYCOPY(dummy1209)}
    {db tmp999[16]={0,0,6,17,34,51,51,51,0,0,0,0,0,0,6,18};MYCOPY(dummy1210)}
    {db tmp999[22]={35,51,52,48,0,0,0,0,0,0,6,18,48,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1211)}
    {db tmp999[21]={5,51,0,0,0,0,0,7,100,0,0,0,0,0,0,0,0,6,96,6,85};MYCOPY(dummy1212)}
    {db tmp999[16]={64,0,0,0,0,0,0,0,100,64,7,85,85,102,102,102};MYCOPY(dummy1213)}
    {db tmp999[11]={103,118,119,102,52,64,6,85,85,102,102};MYCOPY(dummy1214)}
    {db tmp999[11]={103,117,49,18,35,52,64,7,69,85,102};MYCOPY(dummy1215)}
    {db tmp999[11]={103,119,82,17,34,35,52,64,7,85,85};MYCOPY(dummy1216)}
    {db tmp999[11]={86,103,119,65,17,34,35,51,64,6,68};MYCOPY(dummy1217)}
    {db tmp999[11]={69,86,102,119,114,17,34,35,51,64,6};MYCOPY(dummy1218)}
    {db tmp999[11]={68,69,85,103,119,118,17,18,34,51,64};MYCOPY(dummy1219)}
    {db tmp999[10]={6,68,68,85,86,119,119,49,17,50};MYCOPY(dummy1220)}
    {db tmp999[11]={35,48,6,68,64,0,0,71,112,0,0};MYCOPY(dummy1221)}
    {db tmp999[14]={3,35,48,6,68,0,0,0,103,112,0,0,0,51};MYCOPY(dummy1222)}
    {db tmp999[25]={48,0,0,0,0,0,103,112,0,0,0,0,0,0,0,0,0,0,103,112,0,0,0,0,0};MYCOPY(dummy1223)}
    {db tmp999[14]={7,100,0,0,0,103,112,0,0,0,6,96,6,85};MYCOPY(dummy1224)}
    {db tmp999[12]={64,0,0,103,112,0,0,0,100,64,7,69};MYCOPY(dummy1225)}
    {db tmp999[10]={85,102,102,103,116,118,119,102,52,64};MYCOPY(dummy1226)}
    {db tmp999[10]={7,85,85,102,102,103,117,49,18,35};MYCOPY(dummy1227)}
    {db tmp999[11]={52,64,7,68,85,102,103,119,114,17,34};MYCOPY(dummy1228)}
    {db tmp999[11]={35,52,64,7,68,85,86,102,119,81,17};MYCOPY(dummy1229)}
    {db tmp999[11]={34,35,52,64,6,68,69,86,103,118,33};MYCOPY(dummy1230)}
    {db tmp999[11]={17,34,35,51,64,6,68,69,87,103,116};MYCOPY(dummy1231)}
    {db tmp999[11]={17,18,34,35,51,64,6,68,85,86,87};MYCOPY(dummy1232)}
    {db tmp999[16]={81,17,19,51,51,51,64,6,69,80,0,0,0,0,0,0};MYCOPY(dummy1233)}
    {db tmp999[25]={3,51,64,6,85,0,0,0,0,0,0,0,0,51,48,7,100,0,0,0,0,0,0,0,0};MYCOPY(dummy1234)}
    {db tmp999[17]={6,96,6,85,64,0,0,0,0,0,0,0,100,64,7,85,85};MYCOPY(dummy1235)}
    {db tmp999[12]={102,102,102,103,118,119,102,52,64,6,85,85};MYCOPY(dummy1236)}
    {db tmp999[11]={102,102,103,117,49,18,35,52,64,7,69};MYCOPY(dummy1237)}
    {db tmp999[11]={85,102,103,119,82,17,34,35,52,64,7};MYCOPY(dummy1238)}
    {db tmp999[10]={85,85,86,103,119,65,17,34,35,51};MYCOPY(dummy1239)}
    {db tmp999[11]={64,6,68,69,86,102,119,114,17,34,35};MYCOPY(dummy1240)}
    {db tmp999[11]={51,64,6,68,69,85,103,119,118,17,18};MYCOPY(dummy1241)}
    {db tmp999[10]={34,51,64,6,68,68,85,86,119,119};MYCOPY(dummy1242)}
    {db tmp999[2]={49,17};MYCOPY(dummy1243)}
    {db tmp999[16]={50,35,48,6,68,64,0,0,0,0,0,0,3,35,48,6};MYCOPY(dummy1244)}
    {db tmp999[29]={68,0,0,0,0,0,0,0,0,51,48,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1245)}
    {db tmp999[21]={48,0,0,0,0,0,7,100,0,0,0,0,0,0,0,0,6,96,6,85,64};MYCOPY(dummy1246)}
    {db tmp999[20]={0,0,0,0,0,0,0,100,48,7,85,85,102,102,102,102,102,102,102,51};MYCOPY(dummy1247)}
    {db tmp999[11]={48,7,85,85,102,103,101,67,33,17,34};MYCOPY(dummy1248)}
    {db tmp999[11]={51,48,6,69,85,102,119,119,118,66,17};MYCOPY(dummy1249)}
    {db tmp999[10]={34,35,48,6,85,85,86,102,119,119};MYCOPY(dummy1250)}
    {db tmp999[13]={118,33,18,35,48,6,68,69,86,103,119,119,119};MYCOPY(dummy1251)}
    {db tmp999[11]={49,18,35,48,6,68,69,85,103,119,119};MYCOPY(dummy1252)}
    {db tmp999[11]={118,33,18,34,48,6,68,68,85,87,119};MYCOPY(dummy1253)}
    {db tmp999[15]={118,83,17,18,34,64,6,68,64,0,0,0,0,0,0};MYCOPY(dummy1254)}
    {db tmp999[25]={3,34,48,6,68,0,0,0,0,0,0,0,0,82,64,4,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1255)}
    {db tmp999[26]={99,48,0,0,0,0,0,0,0,0,0,0,98,64,0,0,0,0,0,0,0,0,0,0,99,64};MYCOPY(dummy1256)}
    {db tmp999[33]={0,0,0,0,0,0,0,0,0,5,82,64,0,0,0,0,0,0,0,0,0,6,51,64,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1257)}
    {db tmp999[23]={85,35,64,0,0,0,0,0,0,0,0,3,98,52,64,0,0,0,0,0,0,0,0};MYCOPY(dummy1258)}
    {db tmp999[24]={6,50,52,48,0,0,0,0,0,0,0,0,99,51,67,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1259)}
    {db tmp999[29]={51,51,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,5,96,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1260)}
    {db tmp999[17]={85,84,0,0,0,0,0,0,0,6,96,5,101,85,102,102,102};MYCOPY(dummy1261)}
    {db tmp999[11]={119,103,102,102,51,64,6,69,85,102,102};MYCOPY(dummy1262)}
    {db tmp999[12]={119,115,19,51,51,51,64,6,84,85,86,83};MYCOPY(dummy1263)}
    {db tmp999[13]={0,0,0,51,0,52,64,0,100,68,85,86,102};MYCOPY(dummy1264)}
    {db tmp999[20]={64,0,0,0,0,0,0,6,68,85,86,102,119,64,0,0,0,0,0,0};MYCOPY(dummy1265)}
    {db tmp999[15]={6,84,85,102,103,116,48,0,0,0,0,0,0,54,85};MYCOPY(dummy1266)}
    {db tmp999[16]={102,103,113,19,51,0,0,0,0,0,0,0,53,103,115,18};MYCOPY(dummy1267)}
    {db tmp999[15]={35,52,64,0,0,0,0,0,0,53,118,17,35,52,64};MYCOPY(dummy1268)}
    {db tmp999[20]={0,0,0,0,0,0,54,117,17,35,48,0,0,0,0,0,0,54,119,119};MYCOPY(dummy1269)}
    {db tmp999[18]={51,48,0,0,0,0,0,6,101,102,102,64,0,0,0,0,0,0};MYCOPY(dummy1270)}
    {db tmp999[13]={4,117,85,102,64,0,0,0,6,96,0,5,101};MYCOPY(dummy1271)}
    {db tmp999[11]={85,67,69,103,118,119,102,52,64,0,54};MYCOPY(dummy1272)}
    {db tmp999[10]={69,85,103,103,117,49,18,35,52,64};MYCOPY(dummy1273)}
    {db tmp999[11]={5,100,85,86,103,103,65,17,34,35,51};MYCOPY(dummy1274)}
    {db tmp999[11]={64,6,68,85,102,103,103,118,17,18,34};MYCOPY(dummy1275)}
    {db tmp999[12]={51,64,5,84,85,102,102,119,119,51,51,51};MYCOPY(dummy1276)}
    {db tmp999[17]={35,48,0,69,64,0,0,0,0,0,0,0,51,48,0,5,64};MYCOPY(dummy1277)}
    {db tmp999[33]={0,0,0,0,0,0,0,0,0,0,0,80,0,0,0,0,0,0,0,0,0,0,5,96,0,0,0,0,0,0,0,6,96};MYCOPY(dummy1278)}
    {db tmp999[17]={0,85,84,0,0,0,0,0,0,0,99,48,0,117,85,86,118};MYCOPY(dummy1279)}
    {db tmp999[10]={102,119,103,102,102,51,64,7,85,85};MYCOPY(dummy1280)}
    {db tmp999[12]={102,102,119,81,18,34,35,51,64,6,85,85};MYCOPY(dummy1281)}
    {db tmp999[10]={102,102,103,116,17,51,51,52,64,6};MYCOPY(dummy1282)}
    {db tmp999[14]={69,85,100,48,0,0,0,0,0,52,64,6,68,85};MYCOPY(dummy1283)}
    {db tmp999[15]={102,84,0,0,0,0,0,4,64,4,100,69,86,101,48};MYCOPY(dummy1284)}
    {db tmp999[21]={0,0,0,0,0,0,0,86,68,86,102,100,0,0,0,0,0,0,0,5,100};MYCOPY(dummy1285)}
    {db tmp999[15]={85,102,102,80,0,0,0,0,0,0,0,86,85,102,103};MYCOPY(dummy1286)}
    {db tmp999[21]={86,48,0,0,0,0,0,0,4,101,86,103,119,99,0,0,0,0,0,0,0};MYCOPY(dummy1287)}
    {db tmp999[16]={54,118,103,118,17,51,0,0,0,0,0,0,0,103,119,116};MYCOPY(dummy1288)}
    {db tmp999[15]={17,18,48,0,0,0,0,0,0,4,119,99,17,18,35};MYCOPY(dummy1289)}
    {db tmp999[13]={0,0,7,101,0,0,0,6,113,17,34,35,51};MYCOPY(dummy1290)}
    {db tmp999[13]={0,6,68,80,0,0,0,97,18,34,35,51,48};MYCOPY(dummy1291)}
    {db tmp999[11]={6,68,85,103,118,118,102,98,34,51,51};MYCOPY(dummy1292)}
    {db tmp999[11]={64,6,68,85,86,102,119,49,18,35,51};MYCOPY(dummy1293)}
    {db tmp999[12]={52,64,6,68,85,102,103,117,17,19,51,51};MYCOPY(dummy1294)}
    {db tmp999[16]={68,48,6,85,80,0,0,0,0,0,0,52,67,0,6,85};MYCOPY(dummy1295)}
    {db tmp999[28]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,86,102,83,0,0,0,0,0,0,0,4,86,119};MYCOPY(dummy1296)}
    {db tmp999[10]={65,18,51,0,0,0,0,0,0,103};MYCOPY(dummy1297)}
    {db tmp999[13]={103,117,33,18,34,64,0,0,0,0,7,119,103};MYCOPY(dummy1298)}
    {db tmp999[12]={115,17,17,34,36,0,0,0,0,103,102,119};MYCOPY(dummy1299)}
    {db tmp999[11]={116,17,17,34,35,64,0,0,6,117,102};MYCOPY(dummy1300)}
    {db tmp999[10]={118,118,49,17,34,35,51,0,0,71};MYCOPY(dummy1301)}
    {db tmp999[11]={85,100,50,53,98,17,34,51,51,0,0};MYCOPY(dummy1302)}
    {db tmp999[10]={102,85,66,0,0,33,18,34,51,51};MYCOPY(dummy1303)}
    {db tmp999[12]={48,4,116,85,48,0,0,0,34,34,51,51};MYCOPY(dummy1304)}
    {db tmp999[13]={64,6,100,69,32,0,0,0,0,34,35,52,64};MYCOPY(dummy1305)}
    {db tmp999[14]={7,84,69,48,0,0,0,0,3,35,52,64,7,68};MYCOPY(dummy1306)}
    {db tmp999[14]={69,82,0,0,0,0,2,67,52,64,7,68,69,84};MYCOPY(dummy1307)}
    {db tmp999[17]={0,0,0,0,0,99,52,64,6,84,69,85,82,0,0,0,0};MYCOPY(dummy1308)}
    {db tmp999[11]={115,68,64,4,117,69,85,101,32,0,0};MYCOPY(dummy1309)}
    {db tmp999[11]={2,99,68,64,0,86,85,85,102,102,32};MYCOPY(dummy1310)}
    {db tmp999[11]={0,39,67,68,0,0,55,85,85,102,103};MYCOPY(dummy1311)}
    {db tmp999[11]={81,87,116,51,52,0,0,5,85,86,102};MYCOPY(dummy1312)}
    {db tmp999[12]={103,97,18,34,51,48,0,0,0,85,86,102};MYCOPY(dummy1313)}
    {db tmp999[13]={103,116,17,34,35,0,0,0,0,5,102,102,103};MYCOPY(dummy1314)}
    {db tmp999[14]={118,33,19,48,0,0,0,0,0,70,102,118,119,82};MYCOPY(dummy1315)}
    {db tmp999[18]={50,0,0,0,0,0,0,3,70,118,119,114,0,0,0,0,7,100};MYCOPY(dummy1316)}
    {db tmp999[23]={0,0,0,0,0,0,0,0,6,96,6,85,64,0,0,0,0,0,0,0,100,64,7};MYCOPY(dummy1317)}
    {db tmp999[11]={85,85,102,102,102,103,118,119,102,52,64};MYCOPY(dummy1318)}
    {db tmp999[11]={6,85,85,86,102,103,117,49,18,35,52};MYCOPY(dummy1319)}
    {db tmp999[11]={64,7,69,85,102,102,119,82,17,34,35};MYCOPY(dummy1320)}
    {db tmp999[11]={52,64,6,69,85,102,103,119,65,17,34};MYCOPY(dummy1321)}
    {db tmp999[11]={35,51,64,6,68,85,102,102,119,50,17};MYCOPY(dummy1322)}
    {db tmp999[11]={34,34,51,64,6,68,85,86,102,119,117};MYCOPY(dummy1323)}
    {db tmp999[11]={33,18,34,51,64,6,68,85,85,102,118};MYCOPY(dummy1324)}
    {db tmp999[11]={119,112,17,34,35,48,6,68,83,34,34};MYCOPY(dummy1325)}
    {db tmp999[13]={35,71,34,0,3,35,48,6,84,66,0,0,0};MYCOPY(dummy1326)}
    {db tmp999[12]={87,82,0,0,51,48,6,100,67,32,0,2};MYCOPY(dummy1327)}
    {db tmp999[12]={103,114,0,0,3,0,5,116,69,103,119,102};MYCOPY(dummy1328)}
    {db tmp999[14]={119,117,0,0,0,0,0,116,69,85,86,103,119,118};MYCOPY(dummy1329)}
    {db tmp999[17]={0,0,0,0,0,86,85,85,102,103,119,118,0,0,0,0,0};MYCOPY(dummy1330)}
    {db tmp999[14]={7,101,85,102,119,119,112,0,0,0,0,0,3,118};MYCOPY(dummy1331)}
    {db tmp999[15]={86,102,103,119,80,0,0,0,0,0,0,55,118,102,103};MYCOPY(dummy1332)}
    {db tmp999[25]={100,0,0,0,0,0,0,0,0,87,118,101,0,0,0,0,0,0,0,0,0,0,3,86,102};MYCOPY(dummy1333)}
    {db tmp999[20]={83,0,0,0,0,0,0,0,4,86,119,65,18,51,0,0,0,0,0,0};MYCOPY(dummy1334)}
    {db tmp999[13]={103,103,117,33,18,34,64,0,0,0,0,7,119};MYCOPY(dummy1335)}
    {db tmp999[12]={103,115,17,17,34,36,0,0,0,0,103,102};MYCOPY(dummy1336)}
    {db tmp999[11]={119,116,17,17,34,35,64,0,0,6,117};MYCOPY(dummy1337)}
    {db tmp999[10]={102,118,118,49,17,34,35,51,0,0};MYCOPY(dummy1338)}
    {db tmp999[10]={71,85,100,50,53,98,17,34,51,51};MYCOPY(dummy1339)}
    {db tmp999[12]={0,0,102,85,66,0,0,33,18,34,51,51};MYCOPY(dummy1340)}
    {db tmp999[12]={48,4,116,85,48,0,0,0,34,34,51,51};MYCOPY(dummy1341)}
    {db tmp999[13]={64,6,100,69,32,0,0,0,0,34,35,52,64};MYCOPY(dummy1342)}
    {db tmp999[14]={7,84,69,48,0,0,0,0,3,35,52,64,7,68};MYCOPY(dummy1343)}
    {db tmp999[14]={69,82,0,0,0,0,2,67,52,64,7,68,69,84};MYCOPY(dummy1344)}
    {db tmp999[13]={0,0,0,2,102,67,52,64,6,84,69,85,82};MYCOPY(dummy1345)}
    {db tmp999[11]={0,0,34,34,99,68,64,4,117,69,85};MYCOPY(dummy1346)}
    {db tmp999[12]={101,32,0,114,34,51,68,64,0,86,85,85};MYCOPY(dummy1347)}
    {db tmp999[12]={102,102,33,98,35,51,66,48,0,55,85,85};MYCOPY(dummy1348)}
    {db tmp999[11]={102,103,81,86,51,51,68,0,0,5,85};MYCOPY(dummy1349)}
    {db tmp999[11]={86,102,103,97,18,51,51,68,48,0,0};MYCOPY(dummy1350)}
    {db tmp999[5]={85,86,102,103,116};MYCOPY(dummy1351)}
    {db tmp999[11]={17,35,52,68,64,0,0,5,102,102,103};MYCOPY(dummy1352)}
    {db tmp999[12]={118,33,18,68,69,80,0,0,0,70,102,118};MYCOPY(dummy1353)}
    {db tmp999[13]={119,82,34,0,69,80,0,0,0,3,70,118,119};MYCOPY(dummy1354)}
    {db tmp999[19]={118,48,0,5,48,7,100,0,0,0,0,0,0,0,0,6,96,6,85};MYCOPY(dummy1355)}
    {db tmp999[18]={64,0,0,0,0,0,0,0,100,64,7,69,85,102,102,102,102,118};MYCOPY(dummy1356)}
    {db tmp999[10]={119,102,52,64,7,85,85,102,102,103};MYCOPY(dummy1357)}
    {db tmp999[11]={117,49,18,35,52,64,7,68,85,102,103};MYCOPY(dummy1358)}
    {db tmp999[11]={119,114,17,34,35,52,64,7,68,85,86};MYCOPY(dummy1359)}
    {db tmp999[11]={102,119,81,17,34,35,52,64,6,68,69};MYCOPY(dummy1360)}
    {db tmp999[11]={86,103,118,33,17,34,35,51,64,6,68};MYCOPY(dummy1361)}
    {db tmp999[10]={69,87,103,116,17,18,34,51,51,64};MYCOPY(dummy1362)}
    {db tmp999[12]={6,68,85,86,87,82,17,19,51,51,51,64};MYCOPY(dummy1363)}
    {db tmp999[12]={6,68,82,34,34,36,17,0,0,0,51,64};MYCOPY(dummy1364)}
    {db tmp999[12]={6,68,82,0,0,6,17,48,0,0,3,48};MYCOPY(dummy1365)}
    {db tmp999[14]={6,68,83,0,0,7,17,35,0,0,0,0,5,68};MYCOPY(dummy1366)}
    {db tmp999[12]={86,86,103,115,17,34,51,0,0,0,3,84};MYCOPY(dummy1367)}
    {db tmp999[11]={86,102,118,33,18,34,51,51,0,0,0};MYCOPY(dummy1368)}
    {db tmp999[10]={84,85,102,119,49,18,34,34,51,48};MYCOPY(dummy1369)}
    {db tmp999[12]={0,0,53,85,102,119,81,19,67,34,51,51};MYCOPY(dummy1370)}
    {db tmp999[11]={0,0,4,85,102,103,97,38,86,67,51};MYCOPY(dummy1371)}
    {db tmp999[11]={52,64,0,0,69,86,103,115,48,0,100};MYCOPY(dummy1372)}
    {db tmp999[12]={51,68,64,0,0,0,70,103,116,0,0,6};MYCOPY(dummy1373)}
    {db tmp999[24]={67,68,64,0,0,0,0,51,0,0,0,0,101,68,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1374)}
    {db tmp999[17]={4,80,0,0,0,0,52,67,0,0,0,2,32,0,0,0,0};MYCOPY(dummy1375)}
    {db tmp999[13]={4,103,118,83,0,0,36,84,0,0,0,3,87};MYCOPY(dummy1376)}
    {db tmp999[12]={101,85,102,48,0,83,35,48,0,0,5,117};MYCOPY(dummy1377)}
    {db tmp999[11]={68,85,86,96,0,6,51,51,0,0,71};MYCOPY(dummy1378)}
    {db tmp999[11]={68,69,85,86,100,0,0,99,51,48,3};MYCOPY(dummy1379)}
    {db tmp999[10]={116,68,85,85,86,102,0,0,69,51};MYCOPY(dummy1380)}
    {db tmp999[12]={48,6,100,67,52,85,102,103,64,0,6,67};MYCOPY(dummy1381)}
    {db tmp999[13]={0,7,68,48,0,85,102,119,80,0,4,83,0};MYCOPY(dummy1382)}
    {db tmp999[11]={7,68,0,0,70,102,119,115,0,0,99};MYCOPY(dummy1383)}
    {db tmp999[12]={48,6,68,0,0,6,102,119,115,0,0,99};MYCOPY(dummy1384)}
    {db tmp999[12]={64,5,68,0,0,5,102,119,114,48,0,99};MYCOPY(dummy1385)}
    {db tmp999[12]={64,3,84,0,0,3,102,119,97,64,0,99};MYCOPY(dummy1386)}
    {db tmp999[12]={64,0,100,48,0,0,87,119,81,37,3,83};MYCOPY(dummy1387)}
    {db tmp999[11]={64,0,100,64,0,0,71,119,65,19,101};MYCOPY(dummy1388)}
    {db tmp999[12]={52,48,4,84,83,0,0,6,119,49,18,35};MYCOPY(dummy1389)}
    {db tmp999[12]={52,48,5,68,85,0,0,4,119,33,34,51};MYCOPY(dummy1390)}
    {db tmp999[11]={67,0,0,52,69,80,0,0,87,17,34};MYCOPY(dummy1391)}
    {db tmp999[12]={52,64,0,0,3,69,100,0,0,5,33,35};MYCOPY(dummy1392)}
    {db tmp999[18]={68,0,0,0,0,4,84,0,0,0,51,68,48,0,0,0,0,0};MYCOPY(dummy1393)}
    {db tmp999[25]={86,0,0,0,0,0,0,0,0,0,0,87,101,0,0,0,0,0,0,0,0,0,87,101,85};MYCOPY(dummy1394)}
    {db tmp999[23]={0,0,0,0,0,0,0,0,7,101,85,85,0,0,0,0,0,0,0,0,7,69,85};MYCOPY(dummy1395)}
    {db tmp999[31]={80,0,0,0,0,0,0,0,0,6,69,85,0,0,0,0,0,0,0,0,0,7,69,84,0,0,0,0,0,0,0};MYCOPY(dummy1396)}
    {db tmp999[17]={6,96,6,68,83,0,0,0,0,0,0,0,100,64,6,68,84};MYCOPY(dummy1397)}
    {db tmp999[13]={102,102,102,102,118,119,118,52,64,6,68,85,85};MYCOPY(dummy1398)}
    {db tmp999[11]={102,119,117,49,18,35,52,64,6,68,85};MYCOPY(dummy1399)}
    {db tmp999[11]={86,102,119,82,17,34,35,52,64,6,68};MYCOPY(dummy1400)}
    {db tmp999[11]={85,86,102,119,65,17,34,35,51,64,6};MYCOPY(dummy1401)}
    {db tmp999[11]={68,85,86,102,119,114,17,18,34,51,64};MYCOPY(dummy1402)}
    {db tmp999[3]={6,68,85};MYCOPY(dummy1403)}
    {db tmp999[11]={86,102,103,118,17,17,34,51,64,6,68};MYCOPY(dummy1404)}
    {db tmp999[10]={85,85,102,103,119,49,17,50,35,48};MYCOPY(dummy1405)}
    {db tmp999[22]={6,68,0,0,0,0,0,0,0,3,35,48,6,68,48,0,0,0,0,0,0,0};MYCOPY(dummy1406)}
    {db tmp999[26]={51,48,6,68,64,0,0,0,0,0,0,0,0,0,6,68,83,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1407)}
    {db tmp999[26]={6,68,85,0,0,0,0,0,0,0,0,0,4,69,85,80,0,0,0,0,0,0,0,0,0,4};MYCOPY(dummy1408)}
    {db tmp999[35]={85,84,0,0,0,0,0,0,0,0,0,0,4,102,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1409)}
    {db tmp999[26]={3,96,0,0,0,0,0,0,0,0,0,0,87,84,0,0,0,0,0,0,0,0,0,3,117,85};MYCOPY(dummy1410)}
    {db tmp999[13]={102,102,102,102,103,118,80,0,0,7,68,85,85};MYCOPY(dummy1411)}
    {db tmp999[12]={102,103,118,65,18,52,48,0,6,68,69,85};MYCOPY(dummy1412)}
    {db tmp999[12]={102,119,115,17,34,51,68,0,6,68,69,85};MYCOPY(dummy1413)}
    {db tmp999[12]={102,119,113,17,34,35,52,0,6,68,85,85};MYCOPY(dummy1414)}
    {db tmp999[12]={102,103,114,17,18,35,52,64,5,68,85,85};MYCOPY(dummy1415)}
    {db tmp999[12]={86,103,117,33,17,34,52,64,0,69,85,85};MYCOPY(dummy1416)}
    {db tmp999[18]={86,103,119,99,49,18,52,64,0,0,0,0,0,0,0,0,0,4};MYCOPY(dummy1417)}
    {db tmp999[23]={52,64,0,0,0,0,0,0,0,0,0,6,52,64,0,3,96,0,0,0,0,0,0};MYCOPY(dummy1418)}
    {db tmp999[16]={6,52,0,0,87,83,0,0,0,0,0,0,100,51,0,3};MYCOPY(dummy1419)}
    {db tmp999[10]={117,84,86,102,102,103,118,118,67,64};MYCOPY(dummy1420)}
    {db tmp999[12]={0,7,68,85,86,103,119,81,17,34,51,68};MYCOPY(dummy1421)}
    {db tmp999[11]={0,7,68,85,85,102,119,98,17,34,35};MYCOPY(dummy1422)}
    {db tmp999[12]={52,0,6,68,69,85,102,119,115,17,18,34};MYCOPY(dummy1423)}
    {db tmp999[11]={51,64,6,68,69,85,86,103,118,33,18};MYCOPY(dummy1424)}
    {db tmp999[11]={34,51,64,5,68,69,85,86,102,119,65};MYCOPY(dummy1425)}
    {db tmp999[11]={17,34,51,64,0,68,69,85,85,102,119};MYCOPY(dummy1426)}
    {db tmp999[27]={97,17,50,52,0,0,0,0,0,0,0,0,0,0,3,52,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1427)}
    {db tmp999[27]={64,0,0,0,96,0,0,0,0,0,0,0,0,0,0,7,67,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1428)}
    {db tmp999[25]={86,68,0,0,0,0,0,0,0,0,0,0,117,69,67,0,0,0,0,0,0,0,0,6,84};MYCOPY(dummy1429)}
    {db tmp999[15]={85,85,67,0,0,0,0,0,0,0,7,68,85,85,102};MYCOPY(dummy1430)}
    {db tmp999[20]={67,0,0,0,0,0,0,6,68,85,85,102,103,83,0,0,0,0,0,0};MYCOPY(dummy1431)}
    {db tmp999[14]={84,69,86,102,103,119,64,0,0,0,0,0,5,69};MYCOPY(dummy1432)}
    {db tmp999[14]={102,102,119,118,19,48,0,0,0,0,0,53,102,102};MYCOPY(dummy1433)}
    {db tmp999[13]={119,115,17,35,48,0,0,0,0,0,69,103,103};MYCOPY(dummy1434)}
    {db tmp999[14]={82,17,34,35,48,0,0,0,0,0,69,103,33,17};MYCOPY(dummy1435)}
    {db tmp999[15]={34,35,52,0,0,0,0,0,0,69,33,18,34,35,52};MYCOPY(dummy1436)}
    {db tmp999[19]={64,0,0,0,0,0,0,67,18,34,51,52,64,0,0,0,0,0,0};MYCOPY(dummy1437)}
    {db tmp999[16]={3,50,34,51,68,48,0,0,0,0,0,0,0,83,35,52};MYCOPY(dummy1438)}
    {db tmp999[16]={67,0,0,0,6,0,0,0,67,34,51,67,0,0,0,0};MYCOPY(dummy1439)}
    {db tmp999[13]={117,0,0,69,17,19,48,0,0,0,0,7,84};MYCOPY(dummy1440)}
    {db tmp999[15]={48,69,119,81,48,0,0,0,0,0,102,68,85,102,102};MYCOPY(dummy1441)}
    {db tmp999[19]={64,0,0,0,0,0,0,117,68,85,86,64,0,0,0,0,0,0,6};MYCOPY(dummy1442)}
    {db tmp999[24]={84,69,85,64,0,0,0,0,0,0,0,7,68,69,64,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1443)}
    {db tmp999[35]={68,48,0,0,0,0,0,0,0,0,0,0,0,96,0,0,0,0,0,0,0,0,0,0,86,68,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1444)}
    {db tmp999[16]={6,84,85,85,67,0,0,0,0,0,0,0,7,68,85,85};MYCOPY(dummy1445)}
    {db tmp999[16]={102,67,0,0,0,0,0,0,0,84,69,86,102,118,119,64};MYCOPY(dummy1446)}
    {db tmp999[14]={0,0,0,0,0,0,53,102,102,119,115,17,35,48};MYCOPY(dummy1447)}
    {db tmp999[13]={0,0,0,0,0,69,103,103,82,17,34,35,48};MYCOPY(dummy1448)}
    {db tmp999[16]={0,0,0,0,0,0,69,33,18,34,35,52,64,0,7,67};MYCOPY(dummy1449)}
    {db tmp999[16]={0,0,0,3,50,34,51,68,48,0,86,68,0,0,0,0};MYCOPY(dummy1450)}
    {db tmp999[11]={83,35,52,67,0,6,84,85,85,67,53};MYCOPY(dummy1451)}
    {db tmp999[11]={35,48,48,0,0,0,6,68,85,85,102};MYCOPY(dummy1452)}
    {db tmp999[14]={103,80,0,0,0,0,0,0,84,69,86,102,119,119};MYCOPY(dummy1453)}
    {db tmp999[14]={64,0,0,0,0,0,0,53,102,102,119,115,17,35};MYCOPY(dummy1454)}
    {db tmp999[15]={48,0,0,0,0,0,0,69,103,1,17,34,35,52,48};MYCOPY(dummy1455)}
    {db tmp999[18]={0,0,0,0,0,69,1,18,34,35,52,64,0,0,0,0,0,0};MYCOPY(dummy1456)}
    {db tmp999[10]={3,50,34,51,68,48,0,0,6,0};MYCOPY(dummy1457)}
    {db tmp999[13]={0,0,67,35,51,67,0,0,0,0,117,0,0};MYCOPY(dummy1458)}
    {db tmp999[13]={69,51,48,48,0,0,0,0,102,68,85,102,102};MYCOPY(dummy1459)}
    {db tmp999[20]={64,0,0,0,0,0,6,84,69,85,64,0,0,0,0,0,0,0,7,68};MYCOPY(dummy1460)}
    {db tmp999[40]={69,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1461)}
    {db tmp999[21]={48,0,0,0,0,0,0,0,0,0,4,86,102,84,0,0,86,0,0,0,0};MYCOPY(dummy1462)}
    {db tmp999[11]={5,103,119,119,114,48,5,99,64,0,0};MYCOPY(dummy1463)}
    {db tmp999[12]={3,103,118,102,119,115,16,86,51,48,0,0};MYCOPY(dummy1464)}
    {db tmp999[11]={71,117,102,102,119,116,17,51,51,0,0};MYCOPY(dummy1465)}
    {db tmp999[12]={4,118,85,86,102,103,118,33,51,52,0,0};MYCOPY(dummy1466)}
    {db tmp999[10]={71,101,85,102,102,103,119,65,19,66};MYCOPY(dummy1467)}
    {db tmp999[10]={0,0,102,85,86,102,102,103,119,97};MYCOPY(dummy1468)}
    {db tmp999[12]={19,51,0,5,117,85,67,34,35,69,119,114};MYCOPY(dummy1469)}
    {db tmp999[11]={19,51,64,7,100,84,50,0,0,103,119};MYCOPY(dummy1470)}
    {db tmp999[12]={101,67,51,64,7,69,83,0,0,6,119,115};MYCOPY(dummy1471)}
    {db tmp999[12]={0,4,51,64,7,69,82,0,0,87,119,32};MYCOPY(dummy1472)}
    {db tmp999[13]={0,5,51,64,6,68,82,0,55,102,114,0,0};MYCOPY(dummy1473)}
    {db tmp999[12]={70,52,64,6,68,85,102,118,102,32,0,53};MYCOPY(dummy1474)}
    {db tmp999[11]={100,52,64,5,68,69,85,86,101,69,102};MYCOPY(dummy1475)}
    {db tmp999[12]={101,50,52,64,3,84,68,85,86,103,119,119};MYCOPY(dummy1476)}
    {db tmp999[11]={49,34,52,0,0,84,68,85,102,103,119};MYCOPY(dummy1477)}
    {db tmp999[11]={118,33,34,52,0,0,5,68,85,102,102};MYCOPY(dummy1478)}
    {db tmp999[12]={119,117,18,34,48,0,0,6,84,85,102,102};MYCOPY(dummy1479)}
    {db tmp999[12]={119,97,18,51,0,0,0,54,68,52,86,102};MYCOPY(dummy1480)}
    {db tmp999[14]={119,81,19,0,0,0,0,100,67,0,4,86,119,1};MYCOPY(dummy1481)}
    {db tmp999[41]={0,0,0,0,0,4,48,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,101,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1482)}
    {db tmp999[21]={5,101,0,0,0,0,0,0,0,6,96,0,6,85,48,0,0,0,0,0,0};MYCOPY(dummy1483)}
    {db tmp999[11]={100,64,0,102,69,84,86,118,103,118,119};MYCOPY(dummy1484)}
    {db tmp999[11]={102,52,64,0,100,69,86,102,119,117,49};MYCOPY(dummy1485)}
    {db tmp999[11]={18,35,52,64,0,84,85,86,103,119,82};MYCOPY(dummy1486)}
    {db tmp999[11]={17,34,35,52,64,0,68,85,102,103,119};MYCOPY(dummy1487)}
    {db tmp999[11]={65,17,34,35,51,64,0,68,85,102,103};MYCOPY(dummy1488)}
    {db tmp999[11]={119,114,17,34,35,51,64,0,69,85,102};MYCOPY(dummy1489)}
    {db tmp999[11]={103,119,118,17,18,34,51,64,0,53,85};MYCOPY(dummy1490)}
    {db tmp999[18]={102,118,119,119,49,17,50,35,48,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1491)}
    {db tmp999[19]={3,35,48,0,0,0,0,0,0,0,0,0,0,51,48,0,0,3,48};MYCOPY(dummy1492)}
    {db tmp999[19]={0,0,0,0,0,0,5,96,0,0,86,84,0,0,0,0,0,4,83};MYCOPY(dummy1493)}
    {db tmp999[15]={48,0,5,117,85,0,0,0,0,0,85,34,48,0,55};MYCOPY(dummy1494)}
    {db tmp999[14]={69,85,0,0,0,0,6,50,34,48,0,101,68,80};MYCOPY(dummy1495)}
    {db tmp999[15]={0,0,0,0,114,18,34,48,0,116,68,0,0,0,0};MYCOPY(dummy1496)}
    {db tmp999[13]={6,17,17,34,48,0,84,64,0,0,0,0,103};MYCOPY(dummy1497)}
    {db tmp999[12]={17,17,34,48,0,68,64,0,0,0,6,119};MYCOPY(dummy1498)}
    {db tmp999[12]={113,17,34,48,0,68,67,0,0,0,103,119};MYCOPY(dummy1499)}
    {db tmp999[12]={113,18,34,48,0,84,67,0,0,6,119,119};MYCOPY(dummy1500)}
    {db tmp999[10]={113,38,34,48,0,100,69,69,102,102};MYCOPY(dummy1501)}
    {db tmp999[11]={119,119,112,22,34,48,0,101,69,85,85};MYCOPY(dummy1502)}
    {db tmp999[12]={102,102,119,0,6,35,48,0,54,68,85,85};MYCOPY(dummy1503)}
    {db tmp999[12]={102,102,112,0,52,35,48,0,5,100,85,86};MYCOPY(dummy1504)}
    {db tmp999[10]={102,102,0,0,99,35,48,0,0,86};MYCOPY(dummy1505)}
    {db tmp999[11]={69,102,102,80,0,6,66,51,48,0,0};MYCOPY(dummy1506)}
    {db tmp999[14]={3,102,101,83,0,0,100,35,51,0,0,0,0,0};MYCOPY(dummy1507)}
    {db tmp999[22]={51,0,0,0,99,51,0,0,0,0,0,0,0,0,0,0,0,6,80,0,0,0};MYCOPY(dummy1508)}
    {db tmp999[18]={101,0,0,0,0,0,0,99,53,0,0,7,101,64,0,0,0,0};MYCOPY(dummy1509)}
    {db tmp999[3]={6,66,36};MYCOPY(dummy1510)}
    {db tmp999[13]={0,0,102,85,80,0,0,0,0,6,51,51,64};MYCOPY(dummy1511)}
    {db tmp999[15]={3,116,85,80,0,0,0,0,0,99,51,64,6,100,85};MYCOPY(dummy1512)}
    {db tmp999[14]={0,0,4,0,0,0,6,51,48,6,68,80,0,0};MYCOPY(dummy1513)}
    {db tmp999[13]={71,0,0,0,6,51,48,7,68,64,0,0,103};MYCOPY(dummy1514)}
    {db tmp999[12]={80,0,0,6,51,48,7,68,64,0,54,119};MYCOPY(dummy1515)}
    {db tmp999[11]={116,0,0,100,51,48,6,68,69,102,102};MYCOPY(dummy1516)}
    {db tmp999[11]={103,119,102,102,50,35,48,5,84,69,85};MYCOPY(dummy1517)}
    {db tmp999[10]={102,103,119,119,33,34,35,0,0,100};MYCOPY(dummy1518)}
    {db tmp999[11]={85,86,102,100,119,116,18,34,35,0,0};MYCOPY(dummy1519)}
    {db tmp999[12]={70,85,86,102,83,119,114,17,34,48,0,0};MYCOPY(dummy1520)}
    {db tmp999[14]={5,102,102,102,0,55,49,17,19,0,0,0,0,52};MYCOPY(dummy1521)}
    {db tmp999[27]={84,48,0,3,49,17,0,0,0,0,0,0,0,0,0,3,85,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1522)}
    {db tmp999[23]={70,103,64,0,0,0,0,0,0,0,0,5,86,103,112,0,0,0,0,0,0,0,0};MYCOPY(dummy1523)}
    {db tmp999[16]={101,86,103,112,0,0,0,0,0,0,0,6,85,86,102,112};MYCOPY(dummy1524)}
    {db tmp999[22]={0,0,0,0,0,0,0,101,85,85,102,112,0,0,0,0,0,0,6,85,85,85};MYCOPY(dummy1525)}
    {db tmp999[14]={102,112,0,0,0,0,0,0,101,85,85,37,102,112};MYCOPY(dummy1526)}
    {db tmp999[17]={0,0,0,0,0,6,85,85,82,6,103,112,0,0,0,0,0};MYCOPY(dummy1527)}
    {db tmp999[12]={100,85,85,32,6,103,96,0,6,96,0,5};MYCOPY(dummy1528)}
    {db tmp999[12]={84,85,82,0,6,103,64,0,100,64,0,70};MYCOPY(dummy1529)}
    {db tmp999[10]={68,85,86,102,102,119,52,102,52,64};MYCOPY(dummy1530)}
    {db tmp999[11]={0,100,68,85,86,102,103,119,33,34,52};MYCOPY(dummy1531)}
    {db tmp999[11]={64,4,84,68,85,85,102,103,117,17,34};MYCOPY(dummy1532)}
    {db tmp999[10]={51,64,6,68,68,85,85,102,119,115};MYCOPY(dummy1533)}
    {db tmp999[11]={17,34,51,64,6,68,69,85,86,102,119};MYCOPY(dummy1534)}
    {db tmp999[11]={114,17,34,51,64,5,68,69,85,102,102};MYCOPY(dummy1535)}
    {db tmp999[12]={103,97,17,18,35,64,0,52,69,86,102,102};MYCOPY(dummy1536)}
    {db tmp999[15]={103,65,17,18,35,48,0,0,0,0,0,0,4,33,16};MYCOPY(dummy1537)}
    {db tmp999[20]={3,35,48,0,0,0,0,0,0,6,17,16,0,51,48,0,0,0,0,0};MYCOPY(dummy1538)}
    {db tmp999[14]={86,118,0,0,6,96,0,0,0,0,0,86,118,102};MYCOPY(dummy1539)}
    {db tmp999[13]={0,0,50,37,0,0,0,0,70,118,86,101,0};MYCOPY(dummy1540)}
    {db tmp999[11]={6,34,35,48,0,0,86,118,85,86,96};MYCOPY(dummy1541)}
    {db tmp999[12]={0,6,34,35,48,0,87,118,85,85,102,80};MYCOPY(dummy1542)}
    {db tmp999[11]={0,0,50,35,48,5,118,69,85,85,102};MYCOPY(dummy1543)}
    {db tmp999[11]={48,0,0,6,35,48,7,84,69,85,85};MYCOPY(dummy1544)}
    {db tmp999[13]={102,0,0,0,6,35,48,7,68,69,99,69,102};MYCOPY(dummy1545)}
    {db tmp999[15]={0,0,0,6,35,48,6,68,69,48,101,102,0,0,0};MYCOPY(dummy1546)}
    {db tmp999[12]={6,35,48,6,68,64,0,101,102,80,0,0};MYCOPY(dummy1547)}
    {db tmp999[13]={116,35,48,6,68,64,0,101,102,102,102,102,66};MYCOPY(dummy1548)}
    {db tmp999[12]={51,48,6,84,64,0,101,102,119,114,17,34};MYCOPY(dummy1549)}
    {db tmp999[12]={51,48,5,100,64,0,86,102,103,117,17,35};MYCOPY(dummy1550)}
    {db tmp999[12]={51,0,3,100,67,0,7,102,103,119,17,35};MYCOPY(dummy1551)}
    {db tmp999[12]={48,0,0,86,69,0,5,118,103,118,17,35};MYCOPY(dummy1552)}
    {db tmp999[12]={0,0,0,4,84,0,0,87,102,116,17,48};MYCOPY(dummy1553)}
    {db tmp999[30]={0,0,0,0,0,0,0,3,87,114,16,0,0,0,0,0,0,0,0,0,0,51,0,0,0,0,0,0,0,0};MYCOPY(dummy1554)}
    {db tmp999[15]={4,86,102,102,84,0,0,0,0,0,0,5,103,119,113};MYCOPY(dummy1555)}
    {db tmp999[13]={18,53,99,0,0,0,0,3,103,118,103,115,17};MYCOPY(dummy1556)}
    {db tmp999[12]={34,53,64,0,0,0,71,117,102,103,117,17};MYCOPY(dummy1557)}
    {db tmp999[11]={34,34,84,0,0,4,118,85,86,103,119};MYCOPY(dummy1558)}
    {db tmp999[11]={65,18,34,52,0,0,71,101,85,86,103};MYCOPY(dummy1559)}
    {db tmp999[11]={119,97,17,34,35,64,0,102,85,85,86};MYCOPY(dummy1560)}
    {db tmp999[11]={102,119,115,17,34,35,64,5,117,85,83};MYCOPY(dummy1561)}
    {db tmp999[6]={3,86,115,34,34,50};MYCOPY(dummy1562)}
    {db tmp999[12]={35,48,7,100,84,0,6,102,114,0,0,5};MYCOPY(dummy1563)}
    {db tmp999[12]={35,48,7,69,80,0,7,102,114,0,0,6};MYCOPY(dummy1564)}
    {db tmp999[12]={35,48,6,69,80,0,7,102,115,0,0,6};MYCOPY(dummy1565)}
    {db tmp999[12]={35,48,6,68,80,0,7,102,118,0,0,70};MYCOPY(dummy1566)}
    {db tmp999[12]={35,48,6,68,80,0,7,102,119,102,102,99};MYCOPY(dummy1567)}
    {db tmp999[12]={35,48,6,68,64,0,5,118,119,119,65,18};MYCOPY(dummy1568)}
    {db tmp999[11]={35,48,5,68,64,0,0,118,119,118,33};MYCOPY(dummy1569)}
    {db tmp999[12]={18,35,0,0,52,0,0,0,71,119,117,17};MYCOPY(dummy1570)}
    {db tmp999[21]={34,51,0,0,0,0,0,0,4,118,115,17,35,48,0,0,0,0,0,0,0};MYCOPY(dummy1571)}
    {db tmp999[25]={6,115,19,48,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,86,84,0,0};MYCOPY(dummy1572)}
    {db tmp999[14]={3,86,64,0,0,0,0,87,118,102,64,0,86,33};MYCOPY(dummy1573)}
    {db tmp999[12]={36,64,0,0,5,118,85,86,100,4,103,65};MYCOPY(dummy1574)}
    {db tmp999[10]={34,36,0,0,87,85,85,86,102,71};MYCOPY(dummy1575)}
    {db tmp999[10]={119,97,18,35,0,0,118,85,85,86};MYCOPY(dummy1576)}
    {db tmp999[11]={102,87,119,115,18,35,64,6,100,84,35};MYCOPY(dummy1577)}
    {db tmp999[11]={86,102,119,100,35,34,35,48,7,84,66};MYCOPY(dummy1578)}
    {db tmp999[12]={0,70,103,119,48,2,34,35,48,7,68,66};MYCOPY(dummy1579)}
    {db tmp999[12]={0,5,103,119,32,0,37,35,48,6,68,67};MYCOPY(dummy1580)}
    {db tmp999[12]={0,3,102,119,98,0,6,35,48,6,68,68};MYCOPY(dummy1581)}
    {db tmp999[12]={0,0,102,119,116,0,7,35,48,6,84,68};MYCOPY(dummy1582)}
    {db tmp999[11]={48,0,118,119,119,80,39,35,48,5,100};MYCOPY(dummy1583)}
    {db tmp999[10]={68,85,103,118,119,119,53,100,35,48};MYCOPY(dummy1584)}
    {db tmp999[11]={0,100,69,85,86,102,87,116,17,34,51};MYCOPY(dummy1585)}
    {db tmp999[11]={0,0,86,69,85,86,102,54,82,17,34};MYCOPY(dummy1586)}
    {db tmp999[12]={51,0,0,5,101,85,85,96,0,1,18,35};MYCOPY(dummy1587)}
    {db tmp999[17]={48,0,0,0,6,101,84,0,0,0,19,48,0,0,0,0,0};MYCOPY(dummy1588)}
    {db tmp999[16]={70,118,64,0,0,0,0,0,0,0,0,71,118,85,85,48};MYCOPY(dummy1589)}
    {db tmp999[16]={0,0,0,0,0,0,4,118,68,85,85,84,0,0,0,3};MYCOPY(dummy1590)}
    {db tmp999[11]={0,0,55,100,69,85,85,102,48,0,0};MYCOPY(dummy1591)}
    {db tmp999[13]={85,80,0,103,68,85,85,85,102,64,0,4,100};MYCOPY(dummy1592)}
    {db tmp999[12]={64,3,118,68,85,85,86,102,80,0,6,52};MYCOPY(dummy1593)}
    {db tmp999[12]={64,5,117,68,50,34,54,102,96,0,6,51};MYCOPY(dummy1594)}
    {db tmp999[12]={64,6,100,67,0,0,5,102,112,0,6,51};MYCOPY(dummy1595)}
    {db tmp999[12]={64,7,68,66,0,0,6,119,112,0,6,35};MYCOPY(dummy1596)}
    {db tmp999[12]={48,6,68,66,0,0,6,119,112,0,54,35};MYCOPY(dummy1597)}
    {db tmp999[12]={48,6,84,67,0,0,6,119,112,5,115,35};MYCOPY(dummy1598)}
    {db tmp999[11]={48,5,100,69,86,102,102,119,86,101,50};MYCOPY(dummy1599)}
    {db tmp999[11]={35,48,4,100,85,86,102,119,119,65,18};MYCOPY(dummy1600)}
    {db tmp999[10]={34,51,0,0,102,85,102,102,119,118};MYCOPY(dummy1601)}
    {db tmp999[10]={49,18,34,48,0,0,54,85,102,102};MYCOPY(dummy1602)}
    {db tmp999[12]={119,100,17,17,35,0,0,0,5,101,86,103};MYCOPY(dummy1603)}
    {db tmp999[12]={118,66,17,17,16,0,0,0,0,70,102,119};MYCOPY(dummy1604)}
    {db tmp999[15]={100,33,17,16,0,0,0,0,0,0,102,118,65,17,16};MYCOPY(dummy1605)}
    {db tmp999[15]={0,0,0,0,0,6,102,102,102,118,118,0,0,6,96};MYCOPY(dummy1606)}
    {db tmp999[11]={0,0,118,85,103,117,66,17,51,0,116};MYCOPY(dummy1607)}
    {db tmp999[12]={34,0,6,101,86,102,119,119,66,49,6,50};MYCOPY(dummy1608)}
    {db tmp999[13]={34,48,6,69,86,102,103,119,116,49,6,34,34};MYCOPY(dummy1609)}
    {db tmp999[11]={48,6,69,85,102,103,119,119,65,6,34};MYCOPY(dummy1610)}
    {db tmp999[11]={35,48,0,52,85,102,103,119,119,113,0};MYCOPY(dummy1611)}
    {db tmp999[11]={35,51,0,0,3,69,86,102,119,119,16};MYCOPY(dummy1612)}
    {db tmp999[28]={0,3,48,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,101,64};MYCOPY(dummy1613)}
    {db tmp999[32]={0,0,0,0,0,0,0,0,0,6,84,64,0,0,0,0,0,0,0,0,3,99,68,64,0,0,0,0,0,0,0,0};MYCOPY(dummy1614)}
    {db tmp999[16]={85,51,52,64,0,0,0,0,0,0,0,6,66,51,52,64};MYCOPY(dummy1615)}
    {db tmp999[21]={0,0,0,0,0,0,3,99,34,51,52,0,0,0,0,0,0,0,86,34,34};MYCOPY(dummy1616)}
    {db tmp999[19]={35,48,0,0,0,0,0,0,54,115,33,34,51,0,0,0,0,0,0};MYCOPY(dummy1617)}
    {db tmp999[16]={5,119,117,33,19,0,0,0,0,0,0,0,103,119,119,65};MYCOPY(dummy1618)}
    {db tmp999[19]={16,0,0,0,0,0,0,54,102,103,119,97,0,0,0,0,0,0,4};MYCOPY(dummy1619)}
    {db tmp999[15]={101,102,102,119,64,0,0,0,0,0,0,86,85,102,102};MYCOPY(dummy1620)}
    {db tmp999[20]={100,0,0,0,0,0,0,6,101,85,86,102,0,0,0,0,0,0,0,100};MYCOPY(dummy1621)}
    {db tmp999[14]={69,85,85,64,0,0,0,0,0,0,6,68,68,85};MYCOPY(dummy1622)}
    {db tmp999[23]={83,0,0,0,0,0,0,0,6,68,68,84,0,0,0,0,0,0,0,0,6,68,68};MYCOPY(dummy1623)}
    {db tmp999[38]={48,0,0,0,0,0,0,0,0,6,68,48,0,0,0,0,0,0,0,0,0,0,67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1624)}
    {db tmp999[36]={2,32,0,0,0,0,0,0,0,0,0,0,39,2,0,0,0,0,0,0,0,0,0,0,32,35,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1625)}
    {db tmp999[22]={2,49,0,0,0,0,0,0,0,0,0,69,102,119,101,64,0,0,0,0,0,0};MYCOPY(dummy1626)}
    {db tmp999[13]={86,102,103,119,49,36,64,0,0,0,0,7,101};MYCOPY(dummy1627)}
    {db tmp999[14]={86,103,119,82,17,4,0,0,0,0,117,85,102,102};MYCOPY(dummy1628)}
    {db tmp999[12]={119,117,17,0,48,0,0,7,85,85,102,102};MYCOPY(dummy1629)}
    {db tmp999[12]={119,118,49,16,4,0,0,86,85,86,102,102};MYCOPY(dummy1630)}
    {db tmp999[12]={119,119,97,16,3,0,0,101,69,86,102,102};MYCOPY(dummy1631)}
    {db tmp999[14]={118,119,114,17,0,64,5,100,69,86,83,0,0,0};MYCOPY(dummy1632)}
    {db tmp999[14]={52,33,0,64,6,84,69,64,0,0,0,0,3,64};MYCOPY(dummy1633)}
    {db tmp999[17]={0,48,6,68,67,0,0,0,0,0,0,0,3,48,6,68,48};MYCOPY(dummy1634)}
    {db tmp999[23]={0,0,0,0,0,0,0,67,48,7,68,0,0,0,0,0,0,0,0,84,48,7,67};MYCOPY(dummy1635)}
    {db tmp999[33]={0,0,0,0,0,0,0,0,6,48,0,64,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,4};MYCOPY(dummy1636)}
    {db tmp999[23]={0,0,96,0,0,0,0,0,0,0,0,7,0,0,64,0,0,0,0,0,0,0,0};MYCOPY(dummy1637)}
    {db tmp999[24]={6,0,7,67,0,0,0,0,0,0,0,0,54,48,7,68,48,0,0,0,0,0,0,0};MYCOPY(dummy1638)}
    {db tmp999[16]={85,48,6,68,64,0,0,0,0,0,0,3,100,48,6,68};MYCOPY(dummy1639)}
    {db tmp999[15]={85,0,0,0,0,0,0,51,50,48,6,84,85,84,48};MYCOPY(dummy1640)}
    {db tmp999[12]={0,0,0,69,99,35,48,5,100,69,85,102};MYCOPY(dummy1641)}
    {db tmp999[11]={119,102,102,99,34,35,48,0,101,69,85};MYCOPY(dummy1642)}
    {db tmp999[11]={86,102,103,119,49,18,35,0,0,70,68};MYCOPY(dummy1643)}
    {db tmp999[11]={85,86,102,103,118,33,18,51,0,0,4};MYCOPY(dummy1644)}
    {db tmp999[12]={68,85,102,102,119,117,17,18,48,0,0,0};MYCOPY(dummy1645)}
    {db tmp999[13]={68,69,86,102,119,115,17,35,0,0,0,0,4};MYCOPY(dummy1646)}
    {db tmp999[14]={68,86,102,119,82,19,48,0,0,0,0,0,3,85};MYCOPY(dummy1647)}
    {db tmp999[22]={102,119,1,16,0,0,0,0,0,0,0,102,0,0,0,6,96,0,0,0,0,0};MYCOPY(dummy1648)}
    {db tmp999[14]={7,69,80,0,0,116,34,0,0,0,0,0,100,85};MYCOPY(dummy1649)}
    {db tmp999[14]={86,0,6,50,34,48,0,0,0,0,101,85,86,0};MYCOPY(dummy1650)}
    {db tmp999[14]={6,34,34,48,0,0,0,0,101,85,102,0,6,34};MYCOPY(dummy1651)}
    {db tmp999[13]={35,48,0,0,0,0,5,86,96,0,0,34,51};MYCOPY(dummy1652)}
    {db tmp999[25]={0,0,0,0,0,0,102,0,0,0,3,48,0,0,0,0,0,0,0,0,0,0,0,6,96};MYCOPY(dummy1653)}
    {db tmp999[33]={0,0,0,0,0,0,0,0,0,0,116,34,0,0,0,0,0,0,0,0,0,6,50,34,48,0,0,0,0,0,0,0,0};MYCOPY(dummy1654)}
    {db tmp999[25]={6,34,34,48,0,0,0,0,0,0,0,0,6,34,35,48,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1655)}
    {db tmp999[15]={34,51,0,0,0,0,0,0,0,0,0,0,3,48,0};MYCOPY(dummy1656)}
    byte_15072=24;
    {db tmp999[12]={19,21,22,21,21,21,24,11,1,1,22,22};MYCOPY(dummy1657)}
    {db tmp999[13]={23,22,19,22,21,19,24,22,24,22,1,1,1};MYCOPY(dummy1658)}
    {db tmp999[11]={21,13,17,15,20,18,18,1,16,18,7};MYCOPY(dummy1659)}
    {db tmp999[6]={21,4,15,14,7,7};MYCOPY(dummy1660)}
    fontend=13451;
    word_1509f=32564;
    word_150a1=12991;
    word_150a3=40960;
    {db tmp999[5]={25,0,115,0,3};MYCOPY(byte_150a5)}
    {char tmp999[31]="BLASTERSOUNDe  h^_i `cg]d^g`c^";MYCOPY(ablastersoundeh)}
    {db tmp999[4]={0,0,95,0};MYCOPY(dummy1661)}
    {char tmp999[65]={'g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g'};MYCOPY(agggggggggggggg)}
    {char tmp999[43]="gggggggggggggggggggggggggggggggggggggggggg";MYCOPY(dummy1662)}
    {db tmp999[4]={0,0,135,0};MYCOPY(dummy1663)}
    {char tmp999[65]={'g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g'};MYCOPY(agggggggggggggg_0)}
    {char tmp999[43]="gggggggggggggggggggggggggggggggggggggggggg";MYCOPY(dummy1664)}
    {db tmp999[4]={0,0,0,0};MYCOPY(dummy1665)}
    {char tmp999[65]={'g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g'};MYCOPY(agggggggggggggg_1)}
    {char tmp999[43]="gggggggggggggggggggggggggggggggggggggggggg";MYCOPY(dummy1666)}
    {db tmp999[4]={0,0,94,1};MYCOPY(dummy1667)}
    {char tmp999[65]={'g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g','g'};MYCOPY(agggggggggggggg_2)}
    {char tmp999[43]="gggggggggggggggggggggggggggggggggggggggggg";MYCOPY(dummy1668)}
    {db tmp999[4]={11,0,34,0};MYCOPY(dummy1669)}
    {char tmp999[29]="THE FINEST DEMO ORIENTED BBS";MYCOPY(athefinestdemoo)}
    {db tmp999[11]={230,0,60,0,73,78,32,83,80,65,73};MYCOPY(dummy1670)}
    {db tmp999[3]={78,3,0};MYCOPY(dummy1671)}
    {db tmp999[4]={30,0,165,0};MYCOPY(byte_152b8)}
    {char tmp999[26]="IGUANA WORLD HEADQUARTERS";MYCOPY(aiguanaworldhea)}
    {char tmp999[2]="2";MYCOPY(a2)}
    {db tmp999[2]={205,0};MYCOPY(dummy1672)}
    {char tmp999[25]="VANGELISTEAM DISTRO SITE";MYCOPY(avangelisteamdi)}
    {char tmp999[2]="P";MYCOPY(ap)}
    {db tmp999[2]={245,0};MYCOPY(dummy1673)}
    {char tmp999[23]="DUST DISTRIBUTION SITE";MYCOPY(adustdistributi)}
    {char tmp999[2]=",";MYCOPY(dummy1674)}
    {db tmp999[2]={29,1};MYCOPY(dummy1675)}
    {char tmp999[25]="PRODUCT SUPPORT NODE FOR";MYCOPY(aproductsupport)}
    {char tmp999[2]="Z";MYCOPY(az)}
    {db tmp999[2]={59,1};MYCOPY(dummy1676)}
    {char tmp999[22]="ADVANCED GRAVIS LTDk\n";MYCOPY(aadvancedgravis)}
    {db tmp999[6]={254,255,0,0,165,0};MYCOPY(dummy1677)}
    {char tmp999[19]="SOUNDNET   ^_j^_f[";MYCOPY(asoundnetjf)}
    {db tmp999[2]={215,0};MYCOPY(dummy1680)}
    {char tmp999[25]="SBCNET       \\_j_`[[f][[";MYCOPY(asbcnetjf)}
    {db tmp999[4]={0,0,9,1};MYCOPY(dummy1681)}
    {char tmp999[24]="CDNET        d_ja][f][[";MYCOPY(acdnetdjaf)}
    {db tmp999[4]={0,0,59,1};MYCOPY(dummy1682)}
    {char tmp999[25]="FIDONET       ]j^_`fc[`\n";MYCOPY(afidonetjfc)}
    {db tmp999[11]={254,255,200,0,165,0,92,100,93,91,91};MYCOPY(dummy1683)}
    {db tmp999[12]={32,66,65,85,68,0,170,0,205,0,79,80};MYCOPY(dummy1684)}
    {db tmp999[11]={69,78,32,93,95,32,72,79,85,82,83};MYCOPY(dummy1685)}
    {db tmp999[12]={0,192,0,245,0,92,32,71,66,32,79,78};MYCOPY(dummy1686)}
    {db tmp999[10]={32,76,73,78,69,0,203,0,29,1};MYCOPY(dummy1687)}
    {char tmp999[38]="ggggggggggggggggggggggggggggggggggggg";MYCOPY(agggggggggggggg_3)}
    {db tmp999[13]={198,0,44,1,103,103,103,103,67,65,76,76,32};MYCOPY(dummy1688)}
    {db tmp999[12]={78,79,87,103,103,103,103,0,203,0,59,1};MYCOPY(dummy1689)}
    {char tmp999[38]="ggggggggggggggggggggggggggggggggggggg";MYCOPY(agggggggggggggg_4)}
    {db tmp999[10]={0,0,0,0,10,0,254,255,255,255};MYCOPY(dummy1690)}
    {char tmp999[13]="BLASTERSOUND";MYCOPY(ablastersound)}
    dataend=0;
    word_15469=0;
    word_1546b=0;
    word_1546d=0;
    word_1546f=0;
    byte_15471=0;
    word_15472=0;
    {db tmp999[84]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1691)}
    word_154c8=0;
    word_154ca=0;
    word_154cc=0;
    {db tmp999[10000]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(byte_154ce)}
    word_17bde=0;
    word_17be0=0;
    word_17be2=0;
    word_17be4=0;
    {db tmp999[958]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};MYCOPY(dummy1692)}

   }

 }


//} // End of namespace
