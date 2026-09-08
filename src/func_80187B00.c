#include "common.h"
extern u32 *D_8019EF28;
extern u32 *D_8019EF24;
extern s16 *D_8019EF0A;
void func_80187B00(void)
{
    *D_8019EF28 = 0;
    *D_8019EF24 = 0;
    if (func_80188240() != 0)
        func_80187B50(1);
    if (*D_8019EF0A != 0)
        func_80187AEC();
}
