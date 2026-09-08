#include "common.h"
void func_80148C28(void)
{
    s32 i;
    for (i = 0x40; i < 0x160; i++)
        *(u8 *)(0x800D0300u + i) = 0xF0;
    func_800F8F74(0xF42B);
}
