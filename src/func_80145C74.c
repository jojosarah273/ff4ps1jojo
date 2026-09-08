#include "common.h"
void func_80145C74(void)
{
    /* battle status detail: 6434(2) gate spin (8007259C), then the stat
       block (8007411C + 76BC pairs) and the L145D4C refresh loop with
       658C/81B0/4064(0x40/0x100/0x80/0x20) row reads, 5D24/5B8C(0x202)
       latch. */
L145c7c:
    for (;;) {
        func_800F6564();
        if (func_800F6434(2) != 0)
            goto L145CA4;
        func_8007259C();
    }
L145CA4:
    func_800F6564();
    func_800F8D6C();
    func_800F71DC();
    func_800F7534();
    func_800F6564();
    func_8007411C();
    func_800F76BC(func_800F3B04());
    func_800F76BC(func_800F3B04());
    func_800F71DC();
    func_800F8D00();
    func_800F71DC(0x40);
    func_800F8D00();
    func_800F8D00();
    func_800F654C(0x7E);
    func_800F8188();
    func_800F8188();
L145d4c:
    for (;;) {
        func_8007259C();
        func_800F9644(0x20);
        func_800F658C();
        func_800F81B0();
        func_800F5410();
        func_800F4064(0x40);
        func_800F81B0();
        func_800F658C();
        func_800F81B0();
        func_800F5410();
        func_800F4064(0x100);
        func_800F81B0();
        func_800F658C();
        func_800F5410();
        func_800F4064(0x80);
        func_800F81B0();
        func_800F658C();
        func_800F5410();
        func_800F4064(0x20);
        func_800F81B0();
        func_800F971C();
        func_800F9660(0x20);
        func_800F5D24();
        if (func_800F5B8C(0x202) != 0)
            goto L145E5C;
        func_800F654C(8);
        func_800F8188();
        func_800F9644(0x20);
        func_800F658C();
        func_800F5410();
        func_800F4064(0x100);
        func_800F81B0();
        func_800F971C();
        func_800F9660(0x20);
    L145E5C:
        func_800F654C(1);
        func_800F8188();
        func_800F8188();
        func_800F5D24();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_8007259C();
    return;
}
