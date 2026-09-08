#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_80140A5C(void)
{
    func_800F971C();
    *D_8019ED54 = *D_8019ED44;
    func_800F5CCC();
    do {
        func_800F8768(0xF2B4);
        func_800F6364();
        func_800F5958(8);
    } while (func_800F53D4() == 0);
}
