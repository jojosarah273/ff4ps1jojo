#include "common.h"
extern u8 *D_8019ED5C;
extern u8 *D_8019ED40;
void func_800F4928(u32 a0)
{
    u8 *p = D_8019ED5C;
    func_800F3B04(a0 + *p);
    *D_8019ED40 &= *p;
}
