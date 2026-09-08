#include "common.h"
u32 func_8012CE00(void)
{
    func_800F6564(0x1A04);
    func_800F4248(0x20);
    if (func_800F4120(2) == 0) {
        func_8012CEA8();
        return 1;
    }
    func_8012CC4C();
    return 2;
}
