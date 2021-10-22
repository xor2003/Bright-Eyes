
#ifndef ___DATA_H__
#define ___DATA_H__
#include "asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummy1[65536];
db data[0];
char msg[28];
db instructions;
char dummy2[41];
char dummy3[24];
char dummy4[26];
char athanksforplayi[37];
char gameovermsg[28];
char scoremsg[8];
char head[1];
db dummy5;
db dummy6;
char body[1];
db dummy7;
db dummy8;
db dummy9;
db dummy10;
db dummy11;
db dummy12;
db dummy13;
db dummy14;
db dummy15;
db dummy16;
db dummy17;
db dummy18;
db dummy19;
db dummy20;
db dummy21;
db dummy22;
db dummy23;
db dummy24;
db dummy25;
db dummy26;
db dummy27;
db dummy28;
db dummy29;
db dummy30;
db dummy31;
db dummy32;
db dummy33;
db dummy34;
db dummy35;
db dummy36;
db dummy37;
db dummy38;
db dummy39;
db dummy40;
db dummy41;
db dummy42;
db dummy43;
db dummy44;
db dummy45;
db dummy46;
db dummy47;
db dummy48;
db dummy49;
db dummy50;
db dummy51;
db dummy52;
db dummy53;
db segmentcount;
db fruitactive;
db fruitx;
db fruity;
db gameover;
db quit;
db delaytime;
db dummy54;
db dummy55;
db dummy56;
db dummy57;
db dummy58;
db seg001[0];

                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
