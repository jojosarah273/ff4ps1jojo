#include "common.h"
void func_80197288(u32 *prim, u32 *p) {
    *prim = (*prim & 0xFF000000) | ((u32)p & 0xFFFFFF);
}
