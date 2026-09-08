#include "common.h"
void func_8010408C(void)
{
    /* battle rows: 0x300/0x301/0x2F/0x303/0x200 cells via 8010D9D4;
       loop L1040A4 on 5A90(). */
    func_800F7500(0x10);
    func_800F71DC();
L1040a4:
    for (;;) {
        func_8010D9D4();
        func_800F8960(0x300);
        func_8010D9D4();
        func_800F8960(0x301);
        func_800F654C(0x2F);
        func_800F8960(0x302);
        func_8010D9D4();
        func_800F4248(7);
        func_800F5140();
        func_800F8960(0x303);
        func_800F8960(0x200);
        func_800F5A90();
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
