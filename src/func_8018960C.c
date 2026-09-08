#include "common.h"
extern s32 *D_8019EF48;
extern u32 *D_8019EF4C;
void func_8018960C(u8 a0)
{
    if (a0 == 1) {
        if (*D_8019EF48 <= 0)
            return;
        (*D_8019EF48)--;
        func_80191C58();
        *D_8019EF4C += 0x800;
        return;
    }
    *D_8019EF48 = -1;
}
