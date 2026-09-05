#include "common.h"
extern int func_801917F8(u32 a, u32 b);
extern int func_80191878(u32 a, u32 b, u32 c);
int func_80188EA8(u32 s) {
    do { } while (func_801917F8(1, s) != 0);
    do { } while (func_80191878(0x10, 0, s) != 0);
    return 0;
}
