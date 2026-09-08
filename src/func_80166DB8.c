#include "common.h"
extern u16 *D_8019ED54;
void func_80166DB8(void)
{
    u16 v;
    u16 e;
    v = *D_8019ED54;
    func_800F3F38(func_800F3B9C(0xF1F3F, v) + v);
    func_800F78C4(func_800F3B9C(func_800F3AB4(3), 0));
    v = *D_8019ED54;
    e = *(u16 *)(func_800F3C3C(0) + v);
    func_800F78C4(func_800F3B04(e));
    func_80166E58();
}
