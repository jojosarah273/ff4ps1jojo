#include "common.h"
void func_80189B28(s16 *a0, s16 *a1)
{
    s16 tmp[8];
    func_8018CB88(tmp);
    s16 x = tmp[2];
    if (x < 0)
        x += 0x7F;
    *a0 = (s16)(x >> 7);
    s16 y = tmp[3];
    if (y < 0)
        y += 0x7F;
    *a1 = (s16)(y >> 7);
}
