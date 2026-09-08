#include "common.h"
void func_8016E0F8(void)
{
    /* battle monster status: 0x95 window + 0x2303/0x2384 gate texts,
       0x300-0x303 cells with 8016B650 prep; loop L16E168 (5A90/53D4)
       polls 6434(2). */
    func_800F6630(0x95);
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8FB8(0x95);
    func_8016B650();
    func_800F971C();
L16e168:
    for (;;) {
        func_800F9330();
        func_800F6B68(0x2303);
        if (func_800F6434(2) != 0)
            goto L16E318;
        func_800F9330();
        func_800F5140();
        func_800F6B68(0x2384);
        func_800F78C4(func_800F3B04());
        if (func_800F7918(2) != 0)
            goto L16E21C;
        func_800F654C(0xF0);
        func_800F8960(0x300);
        func_800F8960(0x301);
        goto L16E23C;
    L16E21C:
        func_800F6B68(0x2383);
        func_800F8960(0x300);
        func_800F6B68(0x2483);
        func_800F8960(0x301);
    L16E23C:
        func_800F95A0();
        func_800F6B68(0x2683);
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F6C68();
        func_800F824C(0x28);
        func_800F4248(0x3F);
        func_800F8960(0x302);
        func_800F6630(0x28);
        func_800F4248(0xC0);
        func_800F8960(0x303);
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
    L16E318:
        func_800F95A0();
        func_800F6364();
        if (func_800F56AC(func_800F3C3C(0x96)) == 0)
            continue;
        break;
    }
    return;
}
