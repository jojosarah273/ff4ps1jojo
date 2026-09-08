#include "common.h"
extern u8 D_8019DB56;
extern u32 D_8019DB50;
extern u8 D_800F38CC;
s32 func_8019429C(u32 a0)
{
    /* state slot: dispatch while the phase is low, then store a0. */
    u8 *p = &D_8019DB56;
    u8 st = p[0];
    if (st < 2)
        ((void (*)(u32, u32))D_8019DB50)((u32)&D_800F38CC, a0);
    {
        s32 old = *(s32 *)&p[0xA];
        *(s32 *)&p[0xA] = (s32)a0;
        return old;
    }
}
