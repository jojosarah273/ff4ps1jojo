#include "common.h"
void func_8013EB2C(void)
{
    /* battle rows: 0x16/0x2/0x4/0x5 windows, 0x6EFD cells, 67FC row
       reads; loop L13EBD4 on 5958(0x280). */
    func_800F9330();
    func_800F9644(0x20);
    func_800F5410();
    func_800F4064();
    func_800F8274();
    func_800F971C();
    func_800F9660(0x20);
    func_800F654C(0x16);
    func_800F824C(2);
    func_800F971C();
L13ebd4:
    for (;;) {
        func_800F67FC();
        func_800F824C(4);
        func_800F4248(0x80);
        func_800F824C(5);
        func_800F6630(4);
        func_800F4248(0x3F);
        func_800F61E8();
        func_800F5410();
        func_800F3F38(func_800F3C3C(6));
        func_800F8768(0x6EFD);
        func_800F6364();
        func_800F6630(4);
        func_800F4248(0x40);
        func_800F5410();
        func_800F4008(4);
        func_800F78C4(func_800F3C3C(5));
        func_800F8768(0x6EFD);
        func_800F6364();
        func_800F63BC();
        func_800F4248(0x3F);
        func_800F5958(0x280);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F95A0();
    return;
}
