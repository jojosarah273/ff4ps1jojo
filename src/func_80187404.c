#include "common.h"
extern s16 *D_8019EF0A;
extern s16 *D_8019EF30;
extern s16 *D_8019EF16;
extern s16 *D_8019EEB8;
void func_80187404(u16 a0)
{
    *D_8019EF30 = a0;
    if (*D_8019EF0A != 0) {
        *D_8019EF16 = (a0 == 0) ? 0x9F : 0x4F;
        return;
    }
    *D_8019EEB8 = (a0 == 0) ? 0x2FFF : 0x17FF;
    func_8018767C(*D_8019EEB8);
}
