#include "common.h"
void func_801241B8(void)
{
    /* rows: 0x300/0x302/0x500 cells via 88E4(768/12288/770/1280);
       loops L1241D8/L124238 on 5C64(0x202). */
    func_800F9644(0x20);
    func_800F7500(0x80);
    func_800F71DC();
L1241d8:
    for (;;) {
        func_800F6558();
        func_800F88E4(0x300);
        func_800F6558(0x3000);
        func_800F88E4(0x302);
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F7500(0x10);
    func_800F6558();
L124238:
    for (;;) {
        func_800F88E4(0x300);
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F6558();
    func_800F8210(0x500);
    func_800F9660(0x20);
    return;
}
