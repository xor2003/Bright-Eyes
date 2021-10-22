#ifndef __M2C_SNAKE_STUBS_H__
#define __M2C_SNAKE_STUBS_H__

/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */
#include <algorithm>
#include <iterator>

#include "asm.h"

//namespace snake {


extern db (& dummy1)[65536];
extern db (& data)[0];
extern char (& msg)[28];
extern db& instructions;
extern char (& dummy2)[41];
extern char (& dummy3)[24];
extern char (& dummy4)[26];
extern char (& athanksforplayi)[37];
extern char (& gameovermsg)[28];
extern char (& scoremsg)[8];
extern char (& head)[1];
extern db& dummy5;
extern db& dummy6;
extern char (& body)[1];
extern db& dummy7;
extern db& dummy8;
extern db& dummy9;
extern db& dummy10;
extern db& dummy11;
extern db& dummy12;
extern db& dummy13;
extern db& dummy14;
extern db& dummy15;
extern db& dummy16;
extern db& dummy17;
extern db& dummy18;
extern db& dummy19;
extern db& dummy20;
extern db& dummy21;
extern db& dummy22;
extern db& dummy23;
extern db& dummy24;
extern db& dummy25;
extern db& dummy26;
extern db& dummy27;
extern db& dummy28;
extern db& dummy29;
extern db& dummy30;
extern db& dummy31;
extern db& dummy32;
extern db& dummy33;
extern db& dummy34;
extern db& dummy35;
extern db& dummy36;
extern db& dummy37;
extern db& dummy38;
extern db& dummy39;
extern db& dummy40;
extern db& dummy41;
extern db& dummy42;
extern db& dummy43;
extern db& dummy44;
extern db& dummy45;
extern db& dummy46;
extern db& dummy47;
extern db& dummy48;
extern db& dummy49;
extern db& dummy50;
extern db& dummy51;
extern db& dummy52;
extern db& dummy53;
extern db& segmentcount;
extern db& fruitactive;
extern db& fruitx;
extern db& fruity;
extern db& gameover;
extern db& quit;
extern db& delaytime;
extern db& dummy54;
extern db& dummy55;
extern db& dummy56;
extern db& dummy57;
extern db& dummy58;
extern db (& seg001)[0];
namespace m2c{
static const uint16_t kbegin = 0x1001;
static const uint16_t kmainproc = 0x1002;
static const uint16_t kmain = 0x0;
static const uint16_t kloc_1012d = 0x2d;
static const uint16_t kloc_10156 = 0x56;
static const uint16_t kloc_1016f = 0x6f;
static const uint16_t kloc_10188 = 0x88;
static const uint16_t kdelay = 0x89;
static const uint16_t kloc_10198 = 0x98;
static const uint16_t kfruitgeneration = 0x99;
static const uint16_t kloc_101ab = 0xab;
static const uint16_t kloc_101ec = 0xec;
static const uint16_t klocret_10221 = 0x121;
static const uint16_t kdispdigit = 0x122;
static const uint16_t kdispnum = 0x123;
static const uint16_t kloc_1023e = 0x13e;
static const uint16_t ksetcursorpos = 0x13f;
static const uint16_t kdraw = 0x140;
static const uint16_t kloc_10268 = 0x168;
static const uint16_t kloc_10279 = 0x179;
static const uint16_t kreadchar = 0x17a;
static const uint16_t kloc_10295 = 0x195;
static const uint16_t kkeyboardfunctions = 0x196;
static const uint16_t kloc_102b6 = 0x1b6;
static const uint16_t kloc_102c8 = 0x1c8;
static const uint16_t kloc_102da = 0x1da;
static const uint16_t kloc_102eb = 0x1eb;
static const uint16_t kloc_102f1 = 0x1f1;
static const uint16_t kshiftsnake = 0x1f2;
static const uint16_t kloc_10305 = 0x205;
static const uint16_t kloc_10317 = 0x217;
static const uint16_t kloc_1032a = 0x22a;
static const uint16_t kloc_10334 = 0x234;
static const uint16_t kloc_1033c = 0x23c;
static const uint16_t kloc_1033e = 0x23e;
static const uint16_t kloc_1036c = 0x26c;
static const uint16_t kloc_10371 = 0x271;
static const uint16_t kprintbox = 0x272;
static const uint16_t kloc_103a8 = 0x2a8;
static const uint16_t kloc_103b2 = 0x2b2;
static const uint16_t kloc_103bc = 0x2bc;
static const uint16_t kloc_103c6 = 0x2c6;
static const uint16_t kwritecharat = 0x2c7;
static const uint16_t kreadcharat = 0x2c8;
static const uint16_t kwritestringat = 0x2c9;
static const uint16_t kloc_1044a = 0x34a;
static const uint16_t kloc_10458 = 0x358;
static const uint16_t k_group1 = 0x0;
}
static void mainproc(m2c::_offsets, struct m2c::_STATE*);
void _group1(m2c::_offsets, struct m2c::_STATE*);
void draw(m2c::_offsets, struct m2c::_STATE*);
void asmmain(m2c::_offsets, struct m2c::_STATE*);
void fruitgeneration(m2c::_offsets, struct m2c::_STATE*);
void dispdigit(m2c::_offsets, struct m2c::_STATE*);
void printbox(m2c::_offsets, struct m2c::_STATE*);
void writestringat(m2c::_offsets, struct m2c::_STATE*);
void keyboardfunctions(m2c::_offsets, struct m2c::_STATE*);
void readchar(m2c::_offsets, struct m2c::_STATE*);
void readcharat(m2c::_offsets, struct m2c::_STATE*);
void dispnum(m2c::_offsets, struct m2c::_STATE*);
void writecharat(m2c::_offsets, struct m2c::_STATE*);
void delay(m2c::_offsets, struct m2c::_STATE*);
void setcursorpos(m2c::_offsets, struct m2c::_STATE*);
void shiftsnake(m2c::_offsets, struct m2c::_STATE*);
static void __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);

//};

//} // End of namespace

#endif
