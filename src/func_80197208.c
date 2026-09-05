#include "common.h"
void func_80197208(u32 *prim, u32 *p) {
    *p = (*p & 0xFF000000) | (*prim & 0xFFFFFF);
    *prim = (*prim & 0xFF000000) | ((u32)p & 0xFFFFFF);
}
