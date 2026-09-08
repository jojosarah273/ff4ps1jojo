#include "common.h"
extern s32 D_8019D0F4[8];
extern u32 D_8019D0F8[8];
extern u32 D_8019DB50[8];
void func_80193588(s32 a0)
{
    if (a0 < 0)
        return;
    if ((s32)D_8019D0F4[0] < a0)
        return;
    D_8019D0F8[0] = (u32)a0;
    D_8019DB50[0] = (u32)func_80193C40;
}
