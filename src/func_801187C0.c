#include "common.h"
void func_801187C0(void)
{
    /* battle rows: 0x6/0x83/0x82/0x79/0x81 windows, 0x2130/0x212D
       texts, 8017EA90 icon; loop L118860 polls 4120(0x202) and
       54D4(3C3C(0x81)). */
    func_800F9200();
    func_800F9200();
    func_800F4248(0xE0);
    func_800F824C(6);
    func_800F93DC();
    func_800F4248(0xF);
    func_800F5140();
    func_800F5480();
    func_800F3F38(func_800F3C3C(6));
    func_800F824C(0x83);
    func_800F93DC();
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto L118848;
    func_800F654C(7);
L118848:
    func_800F824C(0x82);
    func_800F8FB8(0x79);
    func_800F8FB8(0x81);
L118860:
    for (;;) {
        func_800FE7D8();
        func_800F8F74(0x2130);
        func_800F8F74(0x212D);
        func_800F654C(0x83);
        func_800F8188(0x2131);
        func_800F6630(0x83);
        func_800F4248(0xE0);
        func_800F78C4(func_800F3C3C(0x81));
        func_8017EA90();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F4370(0x82);
        if (func_800F4120(0x202) != 0)
            continue;
        break;
    }
    func_800F62BC(0x81);
    func_800F6630(0x83);
    func_800F4248(0x1F);
    if (func_800F54D4(func_800F3C3C(0x81)) != 0)
        func_800F5DA0(0x81);
    return;
}
