#include "common.h"
void func_800F3D48(void)
{
    volatile u8 *p = (volatile u8 *)0x1F8003C0u;
    u8 b0 = p[8];
    u8 b1 = p[9];
    p[8] = b1;
    p[9] = b0;
}
