#include "common.h"
void func_8014F0BC(void)
{
    /* battle item-count detail: 8014EE20 row, 80148CAC close, 8014FA4C
       sub-list, 8014F2CC/8014F7A8 row handlers; loop L14F1CC picks
       rows on 4FAC keys. */
    func_800F6564();
    if (func_800F6434(2) != 0)
        goto L14F0E4;
    func_8014EE20();
L14F0E4:
    func_800F6564();
    if (func_800F6434(0x202) == 0)
        return;
    func_800F8188();
    func_8014EE20();
    func_800F6564();
    func_800F5CCC();
    if (func_800F5B8C(0x202) != 0)
        goto L14F144;
    func_800F6564();
    func_800F8188();
    func_80148CAC();
L14F144:
    func_800F8F74();
    func_800F6564();
    func_800F8188();
    func_800F8FB8(0x18);
    func_8014FA4C();
    func_800F7210();
    func_800F8D6C(0xE);
    func_800F6564();
    func_800F9644(0x20);
    func_800F971C();
    func_800F9660(0x20);
L14f1cc:
    for (;;) {
        func_800F4F28(func_800F3B04());
        if (func_800F4FAC(0x101) != 0)
            goto L14F20C;
        func_800F4F28(func_800F3B04());
        func_8014F7A8();
        goto L14F22C;
    L14F20C:
        func_800F4F28(func_800F3B04());
        if (func_800F4FAC(1) != 0)
            goto L14F294;
    L14F22C:
        func_800F62BC(0x18);
        func_800F6630(0x18);
        func_800F5574(8);
        if (func_800F53D4() == 0)
            continue;
        func_800F5D24();
        if (func_800F5B8C(0x202) != 0)
            return;
        func_800F6564();
        func_800F8188();
        func_800F6564();
        func_800F8188();
        return;
    L14F294:
        func_800F7210();
        if (func_800F7170(2) != 0)
            continue;
        func_8014F2CC();
    }
    return;
}
