#include "_data.h"
namespace m2c{
static struct Memory mm;
struct Memory& m = mm;

static struct Memory t;
struct Memory& types = t;

db(& stack)[STACK_SIZE]=m.stack;
db(& heap)[HEAP_SIZE]=m.heap;
}
db (& dummy1)[0x1920] = m2c::m.dummy1;
db (& _text)[0] = m2c::m._text;
db (& dummy2)[84] = m2c::m.dummy2;
char (& byte_10164)[1] = m2c::m.byte_10164;

        

//} // End of namespace
