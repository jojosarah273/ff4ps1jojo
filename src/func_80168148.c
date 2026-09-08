#include "common.h"
void func_80168148(void)
{
    func_800F6564(0x38E6);
    if (func_800F6434(0x202) == 0)
        func_801681C0();
    else {
        func_800F5574(1);
        if (func_800F53D4() != 0)
            func_801681C0();
        else {
            func_800F5574(2);
            func_801681C0();
        }
    }
}
