#include "common.h"
extern int func_800F3B04(void);
void func_800F8598(void)
{
    u8 *p = (u8 *)func_800F3B04;
    p[0] = ((volatile u8 *)0x1F8003C0u)[8];
    p[1] = ((volatile u8 *)0x1F8003C0u)[9];
}
