#include "common.h"
void func_800FE870(void)
{
    s32 i = 0x1FC;
    u8 *p = (u8 *)0x800D04FD;
    do {
        *p = 0xF0;
        i -= 4;
        p -= 4;
    } while (i >= 0);
    s32 j = 0x1F;
    u8 *q = (u8 *)0x800D051F;
    do {
        *q = 0;
        j--;
        q--;
    } while (j >= 0);
}
