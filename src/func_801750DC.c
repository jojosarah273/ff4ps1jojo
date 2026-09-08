#include "common.h"
void func_801750DC(void)
{
    func_800F6564(0xFDD);
    func_800F5574(9);
    if (func_800F53D4() != 0)
        goto L5374;
    func_800F5574(8);
    if (func_800F53D4() != 0)
        goto L514C;
    func_800F5574(10);
    if (func_800F53C0() == 0)
        return;
    func_800F5574(12);
    if (func_800F53C0() != 0)
        return;
L514C:
    func_800F6630(0x7A);
    func_800F4248(0x20);
    func_800F9644();
    func_800F6CF4();
    func_800F81B0(0xCFD);
    func_800F6CF4();
    func_800F81B0(0xD1D);
    func_800F6CF4();
    func_800F81B0(0xD5D);
    func_800F6558();
    func_800F9660(0x20);
    func_800F6564(0xFDD);
    func_800F5574(11);
    if (func_800F53D4() != 0)
        goto L52C4;
    func_800F6630(0x7A);
    func_800F4248();
    func_800F5574(8);
    if (func_800F53C0() == 0)
        goto L5268;
    func_800F5410();
    func_800F4008(9);
L5268:
    func_800F5140();
    func_800F7500();
L5290:
    for (;;) {
        func_800F6C68();
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() != 0)
            break;
    }
L52C4:
    func_800F6630(0x7A);
    func_800F7864();
    func_800F4248(0x1E);
    func_800F7500();
L5300:
    for (;;) {
        func_800F6C68();
        func_800F8960(0xDBD);
        func_800F6364();
        func_800F4248(0x1F);
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() != 0)
            break;
    }
    return;
L5374:
    func_800F6630(0x7A);
    func_800F4248();
    func_800F6564(0xFE0);
    func_800F5574(0xF);
    if (func_800F53D4() == 0)
        goto L5414;
    func_800F5410();
    func_800F4008(0x40);
L5414:
    func_800F9644(0x20);
    func_800F6CF4();
    func_800F81B0(0xCFD);
    func_800F6CF4();
    func_800F81B0(0xCF7);
    func_800F81B0(0xD7F);
    func_800F6CF4();
    func_800F81B0(0xD01);
    func_800F6CF4();
    func_800F81B0(0xD7D);
    func_800F6558();
    func_800F9660(0x20);
    return;
}
