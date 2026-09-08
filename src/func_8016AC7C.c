#include "common.h"
void func_8016AC7C(void)
{
    /* shop status: 0x4A window, 0x2203/0x22C1/0x22A3/0x22B3 texts,
       gates 4120(0x202); loops L16ACFC (5A90(0x20)) and L16AD74
       (5958(0x12)). */
    func_800F6630(0x4A);
    func_800F7864();
    func_800F4248(1);
    func_800F6C68();
    func_800F971C();
L16acfc:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x2203);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x20);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6630(0x4A);
    func_800F4248(7);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F9644(0x20);
    func_800F658C(0x22C1);
    func_800F922C();
    func_800F71DC(0x1C);
L16ad74:
    for (;;) {
        func_800F6BE0(0x22A3);
        func_800F87DC(0x22A5);
        func_800F5E48();
        func_800F5E48();
        func_800F5958(0x12);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F9410();
    func_800F81B0(0x22B7);
    func_800F971C();
    func_800F9660(0x20);
    return;
}
