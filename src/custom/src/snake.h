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
static const dd kbegin = 0x1001;
static const dd kmainproc = 0x1002;
static const dd kmain = 0x01fd0000;
static const dd kloc_1012d = 0x01fd002d;
static const dd kloc_10156 = 0x01fd0056;
static const dd kloc_1016f = 0x01fd006f;
static const dd kloc_10188 = 0x01fd0088;
static const dd kdelay = 0x01fd0089;
static const dd kloc_10198 = 0x01fd0098;
static const dd kfruitgeneration = 0x01fd0099;
static const dd kloc_101ab = 0x01fd00ab;
static const dd kloc_101ec = 0x01fd00ec;
static const dd klocret_10221 = 0x01fd0121;
static const dd kdispdigit = 0x01fd0122;
static const dd kdispnum = 0x01fd0123;
static const dd kloc_1023e = 0x01fd013e;
static const dd ksetcursorpos = 0x01fd013f;
static const dd kdraw = 0x01fd0140;
static const dd kloc_10268 = 0x01fd0168;
static const dd kloc_10279 = 0x01fd0179;
static const dd kreadchar = 0x01fd017a;
static const dd kloc_10295 = 0x01fd0195;
static const dd kkeyboardfunctions = 0x01fd0196;
static const dd kloc_102b6 = 0x01fd01b6;
static const dd kloc_102c8 = 0x01fd01c8;
static const dd kloc_102da = 0x01fd01da;
static const dd kloc_102eb = 0x01fd01eb;
static const dd kloc_102f1 = 0x01fd01f1;
static const dd kshiftsnake = 0x01fd01f2;
static const dd kloc_10305 = 0x01fd0205;
static const dd kloc_10317 = 0x01fd0217;
static const dd kloc_1032a = 0x01fd022a;
static const dd kloc_10334 = 0x01fd0234;
static const dd kloc_1033c = 0x01fd023c;
static const dd kloc_1033e = 0x01fd023e;
static const dd kloc_1036c = 0x01fd026c;
static const dd kloc_10371 = 0x01fd0271;
static const dd kprintbox = 0x01fd0272;
static const dd kloc_103a8 = 0x01fd02a8;
static const dd kloc_103b2 = 0x01fd02b2;
static const dd kloc_103bc = 0x01fd02bc;
static const dd kloc_103c6 = 0x01fd02c6;
static const dd kwritecharat = 0x01fd02c7;
static const dd kreadcharat = 0x01fd02c8;
static const dd kwritestringat = 0x01fd02c9;
static const dd kloc_1044a = 0x01fd034a;
static const dd kloc_10458 = 0x01fd0358;
static const dd k_group1 = 0x01fd0000;
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
