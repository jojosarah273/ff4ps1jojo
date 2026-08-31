#include "common.h"
extern u16 D_8019EE7A;
extern u16 D_8019EE7C;
extern u16 D_8019EE7E;
void func_8017EA90(u8 a0) { if (a0 & 0x80) { u16 v = a0 & 0x1F; D_8019EE7A = v; if (a0 & 0x40) { D_8019EE7C = v; if (a0 & 0x20) D_8019EE7E = v; } } }
