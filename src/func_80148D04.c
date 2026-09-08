#include "common.h"
void func_80148D04(void)
{
    /* battle rows (clear variant): 17 zero bytes at 0x800D0515. */
    s32 i;
    func_800F9330();
    func_800F6240(0xF42B);
    for (i = 0; i < 17; i++)
        *(volatile u8 *)(0x800D0515 - i) = 0;
    func_80148C28();
    func_800F95A0();
}
