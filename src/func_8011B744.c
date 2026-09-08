#include "common.h"
extern u32 D_8019ED40[8];
extern u32 D_8019ED44[8];
extern u32 D_8019ED58[8];
void func_8011B744(void)
{
    ((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)func_800F824C());
    return (((volatile u8 *)(D_8019ED58[0]))[0x0] = (u16)((volatile u8 *)(D_8019ED44[0]))[0x0]);
}
