#include "common.h"
void func_800F9C98(void)
{
    u16 i;
    for (i = 0x2100; i < 0x2200; i++)
        *(u8 *)(0x800D0000u + i) = 0;
    for (i = 0x4200; i < 0x4400; i++)
        *(u8 *)(0x800D0000u + i) = 0;
}
