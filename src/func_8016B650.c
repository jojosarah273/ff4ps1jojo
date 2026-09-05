#include "common.h"
extern int func_800F3B04(u32 v);
void func_8016B650(void) {
    u32 base = func_800F3B04(0x2FF);
    u16 k = 0x220;
    do {
        *(u8 *)(base + k) = 0;
        k = (k - 1) & 0xFFFF;
    } while (k != 0);
}
