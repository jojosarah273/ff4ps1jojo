#include "common.h"
void func_8014F7A8(void)
{
    /* battle item-count screen: 0x18 window, 0x18/0x19 rows, 0x6CC0
       gate picks the 300/301 vs 769/770/771 count cells; loop L14F850
       (6434(2)) polls. */
    func_800F6630(0x18);
    func_800F5140();
    func_800F6564();
    if (func_800F6434(0x202) != 0)
        goto L14F828;
    func_800F6B68();
    func_800F824C(0x12);
    func_800F6B68();
    func_800F5410();
    func_800F4008(6);
    func_800F824C(0x13);
    goto L14F848;
L14F828:
    func_800F6B68();
    func_800F824C(0x12);
    func_800F6B68();
    func_800F824C(0x13);
L14F848:
    func_800F71DC();
L14f850:
    for (;;) {
        func_800F6564(0x6CC0);
        if (func_800F6434(2) != 0)
            goto L14F92C;
        func_800F6C68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x12));
        func_800F5480();
        func_800F8058(0xF);
        func_800F8960(0x300);
        func_800F6C68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x13));
        func_800F8960(0x301);
        func_800F6C68();
        func_800F8960(0x302);
        func_800F6C68();
        func_800F8960(0x303);
        goto L14F9A8;
    L14F92C:
        func_800F6C68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x12));
        func_800F8960(0x300);
        func_800F6C68();
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x13));
        func_800F8960(0x301);
        func_800F6C68();
        func_800F8960(0x302);
        func_800F6C68();
        func_800F8960(0x303);
    L14F9A8:
        func_800F6564();
        if (func_800F6434(2) != 0)
            goto L14F9E8;
        func_800F6D70(0x303);
        func_800F8960(0x303);
    L14F9E8:
        func_800F6240(8);
        func_800F5958();
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
