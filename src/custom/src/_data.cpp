#include "_data.h"
namespace m2c{
static struct Memory mm;
struct Memory& m = mm;

db(& stack)[STACK_SIZE]=m.stack;
db(& heap)[HEAP_SIZE]=m.heap;
}
db (& dummy1)[0x1a20] = m2c::m.dummy1;
db (& data)[0] = m2c::m.data;
char (& msg)[28] = m2c::m.msg;
db& instructions = m2c::m.instructions;
char (& dummy2)[41] = m2c::m.dummy2;
char (& dummy3)[24] = m2c::m.dummy3;
char (& dummy4)[26] = m2c::m.dummy4;
char (& athanksforplayi)[37] = m2c::m.athanksforplayi;
char (& gameovermsg)[28] = m2c::m.gameovermsg;
char (& scoremsg)[8] = m2c::m.scoremsg;
char (& head)[1] = m2c::m.head;
db& dummy5 = m2c::m.dummy5;
db& dummy6 = m2c::m.dummy6;
char (& body)[1] = m2c::m.body;
db& dummy7 = m2c::m.dummy7;
db& dummy8 = m2c::m.dummy8;
db& dummy9 = m2c::m.dummy9;
db& dummy10 = m2c::m.dummy10;
db& dummy11 = m2c::m.dummy11;
db& dummy12 = m2c::m.dummy12;
db& dummy13 = m2c::m.dummy13;
db& dummy14 = m2c::m.dummy14;
db& dummy15 = m2c::m.dummy15;
db& dummy16 = m2c::m.dummy16;
db& dummy17 = m2c::m.dummy17;
db& dummy18 = m2c::m.dummy18;
db& dummy19 = m2c::m.dummy19;
db& dummy20 = m2c::m.dummy20;
db& dummy21 = m2c::m.dummy21;
db& dummy22 = m2c::m.dummy22;
db& dummy23 = m2c::m.dummy23;
db& dummy24 = m2c::m.dummy24;
db& dummy25 = m2c::m.dummy25;
db& dummy26 = m2c::m.dummy26;
db& dummy27 = m2c::m.dummy27;
db& dummy28 = m2c::m.dummy28;
db& dummy29 = m2c::m.dummy29;
db& dummy30 = m2c::m.dummy30;
db& dummy31 = m2c::m.dummy31;
db& dummy32 = m2c::m.dummy32;
db& dummy33 = m2c::m.dummy33;
db& dummy34 = m2c::m.dummy34;
db& dummy35 = m2c::m.dummy35;
db& dummy36 = m2c::m.dummy36;
db& dummy37 = m2c::m.dummy37;
db& dummy38 = m2c::m.dummy38;
db& dummy39 = m2c::m.dummy39;
db& dummy40 = m2c::m.dummy40;
db& dummy41 = m2c::m.dummy41;
db& dummy42 = m2c::m.dummy42;
db& dummy43 = m2c::m.dummy43;
db& dummy44 = m2c::m.dummy44;
db& dummy45 = m2c::m.dummy45;
db& dummy46 = m2c::m.dummy46;
db& dummy47 = m2c::m.dummy47;
db& dummy48 = m2c::m.dummy48;
db& dummy49 = m2c::m.dummy49;
db& dummy50 = m2c::m.dummy50;
db& dummy51 = m2c::m.dummy51;
db& dummy52 = m2c::m.dummy52;
db& dummy53 = m2c::m.dummy53;
db& segmentcount = m2c::m.segmentcount;
db& fruitactive = m2c::m.fruitactive;
db& fruitx = m2c::m.fruitx;
db& fruity = m2c::m.fruity;
db& gameover = m2c::m.gameover;
db& quit = m2c::m.quit;
db& delaytime = m2c::m.delaytime;
db& dummy54 = m2c::m.dummy54;
db& dummy55 = m2c::m.dummy55;
db& dummy56 = m2c::m.dummy56;
db& dummy57 = m2c::m.dummy57;
db& dummy58 = m2c::m.dummy58;
db (& seg001)[0] = m2c::m.seg001;

        

//} // End of namespace
