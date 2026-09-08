#include "common.h"
extern u16 *D_8019ED54;
extern u8 *D_8019ED40;
void func_800F4960(u32 a0)
{
    u16 *p = D_8019ED54;
    func_800F3B04(a0 + *p);
    *D_8019ED40 &= (u8)*p;
}
