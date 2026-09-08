#include "common.h"
extern u8 D_800D16B6;
extern u16 *D_8019EF36;
void func_801875AC(void)
{
    u8 v = *(u8 *)(u32)D_800D16B6;
    *D_8019EF36 = v;
    if (v == 0)
        func_80188EF8(0x5F, 0, 0x7F, 0);
    else
        func_80188EF8(0x5F, 0x5F, 0x5F, 0x5F);
}
