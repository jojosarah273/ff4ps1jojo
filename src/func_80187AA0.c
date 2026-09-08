#include "common.h"
extern u8 D_8019B074[];
extern u8 D_801F6230[];
extern u16 D_8019EF0A;
void func_80187AA0(void)
{
    /* copies two words (unaligned) from D_8019B074 to D_801F6230 and
       clears the layout latch. */
    *(u32 *)&D_801F6230[0x0] = *(u32 *)&D_8019B074[0x0];
    *(u32 *)&D_801F6230[0x18] = *(u32 *)&D_8019B074[0x10];
    D_8019EF0A = 0;
}
