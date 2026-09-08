#include "common.h"
void func_8010E878(void)
{
    /* battle rows: 0x300-0x303/0x200 cells, 0xFF window, 8010D9D4
       rows; loop L10E898 on 5A90(0x200). */
    func_80103F40();
    func_800F7500(0x10);
    func_800F71DC();
L10e898:
    for (;;) {
        func_8010D9D4();
        func_800F7864();
        func_800F5410();
        func_800F4008(0x40);
        func_800F8960(0x300);
        func_8010D9D4();
        func_800F7864();
        func_800F5410();
        func_800F4008(0x40);
        func_800F8960(0x301);
        func_800F654C(0xFF);
        func_800F8960(0x302);
        func_8010D9D4();
        func_800F4248(7);
        func_800F5140();
        func_800F8960(0x303);
        func_800F8960(0x200);
        func_800F5A90(0x200);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
