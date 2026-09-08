#include "common.h"
extern s16 *D_8019EF02;
extern u16 *D_8019EEFE;
extern u32 *D_8019EF24;
extern u32 *D_8019EF28;
void func_80186024(u32 a0)
{
    if (*D_8019EF02 > 0) {
        *D_8019EF02 = (s16)((u16)*D_8019EF02 - 1);
        return;
    }
    if (a0 == 0)
        *D_8019EF02 = 10;
    if (a0 == 1)
        *D_8019EEFE += 1;
    else if (a0 == 2)
        *D_8019EEFE -= 1;
    else if (a0 == 3) {
        *D_8019EF24 = 2;
        *D_8019EF28 = *D_8019EEFE;
    }
}
