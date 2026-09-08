#include "common.h"
extern int func_800F3B04(void);
void func_800F69E4(void)
{
    u8 *p = (u8 *)func_800F3B04;
    ((volatile u8 *)0x1F8003C0u)[0] = p[0];
    ((volatile u8 *)0x1F8003C0u)[1] = p[1];
}
