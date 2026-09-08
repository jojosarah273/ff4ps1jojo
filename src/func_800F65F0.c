#include "common.h"
extern int func_800F3B9C(void);
void func_800F65F0(void)
{
    u8 *p = (u8 *)func_800F3B9C;
    ((volatile u8 *)0x1F8003C0u)[0] = p[0];
    ((volatile u8 *)0x1F8003C0u)[1] = p[1];
}
