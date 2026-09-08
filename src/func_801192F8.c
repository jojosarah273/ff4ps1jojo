#include "common.h"
void func_801192F8(void)
{
    /* battle rows: 0x6/0x1000 gate, 54D4(3C3C(6)) latch; loop
       L119320 ends with 0xCC window + 0x1703 text. */
    func_80117594();
    func_800F824C(6);
    func_800F71DC();
    func_800F7500();
L119320:
    for (;;) {
        func_800F6D70(0x1000);
        func_800F4248(0x1F);
        if (func_800F54D4(func_800F3C3C(6)) != 0)
            goto L1193B4;
        func_800F9644(0x20);
        func_800F5410();
        func_800F4064(0x40);
        func_800F6558();
        func_800F9660(0x20);
        func_800F6364();
    }
L1193B4:
    func_800F8188();
    func_800F654C(1);
    func_800F824C(0xCC);
    func_800FE778();
    return;
}
