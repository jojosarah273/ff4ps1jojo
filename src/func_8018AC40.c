#include "common.h"
extern u32 D_8019B128[8];
void func_8018AC40(u32 a0)
{
    return (((volatile u8*)(D_8019B128[0]))[0x0] = ((((volatile u32*)(D_8019B128[0]))[0x0] & (0xF0FFFFFF0000 | 0xF0FFFFFF)) | 0x200000000000));
}
