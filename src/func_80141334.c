#include "common.h"
void func_80141334(void)
{
    /* battle cast: 0x4800/0x4880 text gates, 0x1A window, 800723D0 +
       800761C8 rows; loop L141390 on 5A90(8). */
    func_800F971C();
L141390:
    for (;;) {
        func_800F6C68();
        func_800F8960();
        func_800F6364();
        func_800F63BC();
        func_800F5A90(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F71DC(0x100);
    func_800F8D6C();
    func_800F7210();
    func_800F7500(0x4800);
    func_800F654C(0x1A);
    func_800723D0();
    func_800F71DC(0x100);
    func_800F8D6C();
    func_800F7210();
    func_800F7500(0x4880);
    func_800F654C(0x1A);
    func_800723D0();
    func_800F6564();
    func_800F71DC(4);
    func_800761C8();
    func_800F6564();
    func_800F71DC(5);
    func_800761C8();
    return;
}
