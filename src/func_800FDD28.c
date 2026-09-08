#include "common.h"
extern u16 D_801CFD68[];
extern u8 D_800E7C00[];
void func_800FDD28(void)
{
    u16 i;
    func_800F654C(0x80);
    func_800F8188(0x2115);
    for (i = 0; i < 0x100; i = (u16)(i + 1)) {
        D_800E7C00[i] = (u8)(D_801CFD68[(i + 0x3800) * 2] >> 8);
    }
}
