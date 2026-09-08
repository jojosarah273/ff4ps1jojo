#include "common.h"
s32 func_801987B0(s32 f0, s32 f1)
{
    /* float-bits compare (<=): handles zeros, signs, exponents. */
    u32 a = (u32)f0, b = (u32)f1;
    u32 sign = 0x80000000;
    if (a == b)
        return 0;
    if ((a & 0x7FFFFFFF) == 0 && (b & 0x7FFFFFFF) == 0)
        return 0;
    if ((a & sign) != (b & sign))
        return 0;
    {
        u32 ea = (a >> 23) & 0xFF, eb = (b >> 23) & 0xFF;
        if (ea == eb) {
            u32 ma = (a & 0x7FFFFF) | 0x800000;
            u32 mb = (b & 0x7FFFFF) | 0x800000;
            if (mb < ma)
                return (a & sign) ? 0 : 1;
        } else if (ea > eb) {
            return (a & sign) ? 0 : 1;
        }
        return 1;
    }
}
