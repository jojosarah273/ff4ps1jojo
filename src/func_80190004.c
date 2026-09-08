#include "common.h"
u32 func_80190004(u32 a0, u32 a1, u32 a2)
{
    s16 tmp[8];
    func_80191638(a1, (u32)tmp);
    func_80191878(2, (u32)tmp, 0);
    func_80192478(a0, a2, 0x80);
    return func_80192614(0, 0) < 1;
}
