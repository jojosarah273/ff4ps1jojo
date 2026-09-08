#include "common.h"
extern u16 D_8019EE26;
extern u16 D_801DFDE8[];
void func_80180EF0(u16 a0, s16 a1)
{
    /* window slot add: pushes (a0 & 0xFFF0, a1) and terminates the
       run with -1. */
    u16 n = D_8019EE26;
    if (n >= 0x20)
        return;
    if (a0 >= 0x6000)
        return;
    D_8019EE26 = n + 1;
    D_801DFDE8[n * 2] = a0 & 0xFFF0;
    D_801DFDE8[n * 2 + 1] = (u16)a1;
    D_801DFDE8[(n + 1) * 2] = 0xFFFF;
}
