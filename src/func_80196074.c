#include "common.h"
extern u32 D_8019DC5C[8];
extern u32 D_8019DC60[8];
extern u32 D_8019DC64[8];
extern u32 D_8019DC68[8];
void func_80196074(u32 a0)
{
    ((volatile u8*)(D_8019DC5C[0]))[0x0] = (0x40000020000 | 0x4000002);
    ((volatile u8*)(D_8019DC60[0]))[0x0] = a0;
    ((volatile u8*)(D_8019DC64[0]))[0x0] = zero;
    return (((volatile u8*)(D_8019DC68[0]))[0x0] = (0x10004010000 | 0x1000401));
}
