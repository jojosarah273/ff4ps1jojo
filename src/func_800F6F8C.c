#include "common.h"
extern u32 D_8019ED60;
void func_800F6F8C(void)
{
    *((volatile u8 *)((0x1F800000) | 0x1F8003C8)) = ((u8)(u8)((volatile u8 *)(func_800F3CC4()))[0x0]);
}
