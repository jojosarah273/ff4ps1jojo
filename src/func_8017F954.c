#include "common.h"
extern u8 D_800D2105;
void func_8017F954(u32 a0, u16 a1, u16 a2, s16 a3)
{
    if (((*(u8 *)(u32)D_800D2105) & 7) == 7)
        func_8017FFE8();
    else
        func_80181C20();
}
