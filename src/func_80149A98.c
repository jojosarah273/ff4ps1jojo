#include "common.h"
void func_80149A98(void)
{
    /* battle rows: 0x28/0x4/0x2B/0x5/0x2 windows, 80148FC0 row,
       7600 cells; loop L149B6C on 5DD4/5C64(0x202). */
    func_800F9200();
    func_800F654C(0x20);
    func_800F824C(0x28);
    func_800F93DC();
    func_80148FC0();
    func_800F824C(4);
    func_800F4F28(func_800F3C3C(0x2B));
    func_800F4F4C();
    func_800F7A40(func_800F3C3C(5));
    func_800F6630(5);
    func_800F4248(1);
    func_800F824C(5);
    func_800F7500(0x18);
    func_800F8EBC();
    func_800F6630(2);
    func_800F9644(0x20);
    func_800F6658(4);
L149b6c:
    for (;;) {
        func_800F89D4(0x7600);
        func_800F5DD4();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F9660(0x20);
    func_800F6630(2);
    func_800F5410();
    func_800F4008(0x18);
    func_800F824C(2);
    return;
}
