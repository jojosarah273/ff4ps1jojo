#include "common.h"
void func_80125670(void)
{
    /* status row: 0x1A71 text, 0x45/0x41 windows; loop L1256A8 on
       5DD4(0x45)/5C64(0x202). */
    func_800F7270(0x41);
    func_800F9644(0x20);
    func_800F6558(5);
    func_800F8274(0x45);
    func_800F7594(0x41);
L1256a8:
    for (;;) {
        func_800F5410();
        func_800F3F94(func_800F3B04(0x1A71));
        func_800F89D4();
        func_800F89D4();
        func_800F89D4();
        func_800F89D4();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F6364();
        func_800F6364();
        func_800F5DD4(0x45);
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F9660(0x20);
    return;
}
