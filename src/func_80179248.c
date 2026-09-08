#include "common.h"
void func_80179248(u32 a0, u16 *a1, u32 a2, u16 *a3, u32 sp10, u32 sp14, void *dst)
{
    /* anim event builder: 3 words + 4x2 u16 pairs into dst. */
    u16 *d = (u16 *)dst;
    ((u32 *)dst)[0] = a0;
    ((u32 *)dst)[1] = sp10;
    ((u32 *)dst)[2] = a2;
    d[6] = a3[0];
    d[7] = a3[1];
    d[8] = a3[2];
    d[9] = a3[3];
    d[10] = a1[0];
    d[11] = a1[1];
    d[12] = a1[2];
    d[13] = a1[3];
}
