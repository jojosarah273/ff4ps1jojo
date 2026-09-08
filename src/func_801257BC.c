#include "common.h"
void func_801257BC(void)
{
    /* status row: 0x16A8/0x1A71/0x1A73 texts, 0x45/0x41 windows,
       801224D0 cursor; loop L125810 on 5DD4(0x45)/5C64(0x202). */
    func_800F6564(0x16A8);
    if (func_800F6434(2) != 0)
        goto L1257E8;
    func_800F654C(0xA);
L1257E8:
    func_801224D0();
    func_800F9644(0x20);
    func_800F6558(5);
    func_800F8274(0x45);
    func_800F7594(0x41);
L125810:
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
    func_800F654C(0xA);
    func_800F8188(0x1A73);
    return;
}
