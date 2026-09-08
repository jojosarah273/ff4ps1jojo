#include "common.h"
extern u32 D_8019ED40;
extern u32 D_8019ED58;
void func_800F4E50(u32 a0, u32 a1)
{
    return (((volatile u8 *)(D_8019ED40))[0x0] = ((u8)((u8)((volatile u8 *)(D_8019ED40))[0x0] & a0)));
}
