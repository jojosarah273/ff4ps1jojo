#include "common.h"
void func_80118938(void)
{
    /* battle rows: 0x79/0x83/0x82/0x81 windows, 0x212D/0xFE4/0x2130/
       0x2131 texts, 8017EA90 icon; loops L118948 on 4120(0x202)/
       5B8C. */
    func_800F8FB8(0x79);
L118948:
    for (;;) {
        func_800FE7D8();
        func_800F6630(0x83);
        func_800F4248(0xE0);
        func_800F78C4(func_800F3C3C(0x81));
        func_8017EA90();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F4370(0x82);
        if (func_800F4120(0x202) != 0)
            continue;
        func_800F5DA0(0x81);
        if (func_800F5B8C() != 0)
            continue;
        break;
    }
    func_800F8FB8(0x81);
    func_800F654C(0x11);
    func_800F8188(0x212D);
    func_800F6564(0xFE4);
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto L118A28;
    func_800F654C(2);
    func_800F8188(0x2130);
    func_800F654C(0x43);
    func_800F8188(0x2131);
    return;
L118A28:
    func_800F8F74(0x2131);
    return;
}
