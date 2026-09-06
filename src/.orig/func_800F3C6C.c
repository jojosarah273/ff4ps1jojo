#include "common.h"
u32 func_800F3C6C(u32 a0) { u32 b = (a0 > 0x7FFF) ? 0x7FFC8000 : 0x800D0000; return *(u32 *)(b + a0); }
