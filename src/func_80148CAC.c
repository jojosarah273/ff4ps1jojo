#include "common.h"
void func_80148CAC(void)
{
    /* battle rows: 0xF42B text; 17 x 0xAA bytes at 0x800D0515
       (descending); 80148C28 + 95A0 close. */
    s32 i;
    func_800F9330();
    func_800F6240(0xF42B);
    for (i = 0; i < 17; i++)
        *(volatile u8 *)(0x800D0515 - i) = 0xAA;
    func_80148C28();
    func_800F95A0();
}
