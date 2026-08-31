#include "common.h"
u32 func_80195798(u32 a0, u32 a1) { return 0xE5000000 | (a0 & 0x7FF) | ((a1 & 0x7FF) << 11); }
