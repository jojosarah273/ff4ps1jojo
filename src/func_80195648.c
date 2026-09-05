#include "common.h"
int func_80195648(int a0, int a1, u32 a2) {
    return 0xE1000000 | (a1 ? 0x200 : 0) | (a2 & 0x9FF) | (a0 ? 0x400 : 0);
}
