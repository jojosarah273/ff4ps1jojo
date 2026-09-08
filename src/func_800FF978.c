#include "common.h"
void func_800FF978(void)
{
    /* shop inventory rows: 0x4C/0x4E/0x4A/0x49 windows, two 80170458
       renders (0x4200/0x4300 gates); loops LFFA20/LFFA24/LFFA6C poll
       the 0xE5B cells; 80174348 close. */
    func_800F71DC(0x4200);
    func_800F8D6C(0x4C);
    func_800F71DC(0x100);
    func_800F8D6C(0x4E);
    func_800F71DC();
    func_800F8D6C(0x4A);
    func_800F654C(0x1B);
    func_800F824C(0x49);
    func_80170458();
    func_800F71DC(0x4300);
    func_800F8D6C(0x4C);
    func_800F71DC(0x1D00);
    func_800F8D6C(0x4E);
    func_800F71DC();
    func_800F8D6C(0x4A);
    func_800F654C(0x1C);
    func_800F824C(0x49);
    func_80170458();
    func_800F7500();
    func_800F71DC();
L8FFA20:
    for (;;) {
    L8FFA24:
        for (;;) {
            func_800F6C68();
            func_800F8960(0xE5B);
            func_800F6364();
            func_800F63BC();
            func_800F4248(0xF);
            if (func_800F4120(0x202) != 0)
                goto L8FFA20;
            break;
        }
    L8FFa6c:
        for (;;) {
            func_800F654C();
            func_800F8960(0xE5B);
            func_800F63BC();
            func_800F4248(0xF);
            if (func_800F4120(0x202) != 0)
                continue;
            break;
        }
        func_800F5A90(0x80);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_80174348();
    return;
}
