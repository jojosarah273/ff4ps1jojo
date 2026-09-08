#include "common.h"
void func_80160B8C(void)
{
    func_800F6564(0x38FE);
    func_800F5574(2);
    if (func_800F53D4() == 0)
        return;
    func_800F6564(0x2721);
    func_800F4280(0x28A2);
    if (func_800F4120(2) == 0) {
        func_800F654C(8);
        func_800F8188(0x38FE);
        return;
    }
    func_800F6564(0x2720);
    func_800F4280(0x28A2);
    if (func_800F4120(2) == 0) {
        func_800F654C(4);
        func_800F8188(0x38FE);
    }
}
