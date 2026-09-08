#include "common.h"
extern u32 D_8019B13C;
extern u32 D_8019B17C;
s32 func_8018B9A8(u32 a0)
{
    /* region walk (shifted): like 8018B928 with a0 <<= bank shift. */
    u32 *p;
    if (D_8019B17C == 0) {
        (void)a0;
        return 0;
    }
    a0 <<= D_8019B13C;
    p = (u32 *)D_8019B17C;
    for (;;) {
        u32 w = p[0];
        if (w & 0x80000000) {
            p += 2;
            continue;
        }
        if (w & 0x40000000)
            return 0;
        {
            u32 lo = w & 0x0FFFFFFF;
            if (lo >= a0)
                return 1;
            if (a0 < lo + p[1])
                return 1;
        }
        p += 2;
    }
}
