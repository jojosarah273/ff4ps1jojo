#include "common.h"
s32 func_80198860(s32 f0, s32 f1)
{
    /* float-bits compare: -1/0 result for the +/- ordering. */
    u32 a = (u32)f0, b = (u32)f1;
    u32 sign = 0x80000000;
    if (a == b)
        return 0;
    if ((a & 0x7FFFFFFF) == 0 && (b & 0x7FFFFFFF) == 0)
        return 0;
    {
        u32 as = a & sign;
        if (as != (b & sign))
            return as ? -1 : 0;
        {
            u32 ea = (a >> 23) & 0xFF, eb = (b >> 23) & 0xFF;
            u32 ma = (a & 0x7FFFFF) | 0x800000;
            u32 mb = (b & 0x7FFFFF) | 0x800000;
            if (ea < eb || (ea == eb && ma < mb))
                return as ? 0 : -1;
            return (s32)a < 0 ? -1 : 0;
        }
    }
}
