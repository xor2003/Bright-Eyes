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


extern db (& dummy1)[0x1a20];
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
static const dd kbegin = 0x1001;
static const dd kmainproc = 0x1002;
static const dd kmain = 0x01b20000;
static const dd kloc_1012d = 0x01b2002d;
static const dd kloc_10156 = 0x01b20056;
static const dd kloc_1016f = 0x01b2006f;
static const dd kloc_10188 = 0x01b20088;
static const dd kdelay = 0x01b20089;
static const dd kloc_10198 = 0x01b20098;
static const dd kfruitgeneration = 0x01b20099;
static const dd kloc_101ab = 0x01b200ab;
static const dd kloc_101ec = 0x01b200ec;
static const dd klocret_10221 = 0x01b20121;
static const dd kdispdigit = 0x01b20122;
static const dd kdispnum = 0x01b20123;
static const dd kloc_1023e = 0x01b2013e;
static const dd ksetcursorpos = 0x01b2013f;
static const dd kdraw = 0x01b20140;
static const dd kloc_10268 = 0x01b20168;
static const dd kloc_10279 = 0x01b20179;
static const dd kreadchar = 0x01b2017a;
static const dd kloc_10295 = 0x01b20195;
static const dd kkeyboardfunctions = 0x01b20196;
static const dd kloc_102b6 = 0x01b201b6;
static const dd kloc_102c8 = 0x01b201c8;
static const dd kloc_102da = 0x01b201da;
static const dd kloc_102eb = 0x01b201eb;
static const dd kloc_102f1 = 0x01b201f1;
static const dd kshiftsnake = 0x01b201f2;
static const dd kloc_10305 = 0x01b20205;
static const dd kloc_10317 = 0x01b20217;
static const dd kloc_1032a = 0x01b2022a;
static const dd kloc_10334 = 0x01b20234;
static const dd kloc_1033c = 0x01b2023c;
static const dd kloc_1033e = 0x01b2023e;
static const dd kloc_1036c = 0x01b2026c;
static const dd kloc_10371 = 0x01b20271;
static const dd kprintbox = 0x01b20272;
static const dd kloc_103a8 = 0x01b202a8;
static const dd kloc_103b2 = 0x01b202b2;
static const dd kloc_103bc = 0x01b202bc;
static const dd kloc_103c6 = 0x01b202c6;
static const dd kwritecharat = 0x01b202c7;
static const dd kreadcharat = 0x01b202c8;
static const dd kwritestringat = 0x01b202c9;
static const dd kloc_1044a = 0x01b2034a;
static const dd kloc_10458 = 0x01b20358;
static const dd k_group1 = 0x01b20000;
void   Initializer();
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
bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE* _state);

//};

//} // End of namespace

#endif
