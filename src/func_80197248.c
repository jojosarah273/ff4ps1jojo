#include "common.h"
void func_80197248(u32 *prim, u32 *p, u32 *p2) {
    *p2 = (*p2 & 0xFF000000) | (*prim & 0xFFFFFF);
    *prim = (*prim & 0xFF000000) | ((u32)p & 0xFFFFFF);
}
