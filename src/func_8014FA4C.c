#include "common.h"
void func_8014FA4C(void)
{
    func_800F6564(0xF2D0);
    func_800F5574(7);
    if (func_800F53D4() != 0)
        goto Lfab4;
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto Lfab4;
    func_800F5574(4);
    if (func_800F53D4() != 0)
        goto Lfab4;
    func_800F654C(0x30);
    goto Lfabc;
Lfab4:
    func_800F654C(0x20);
Lfabc:
    func_800F824C(0x1A);
    func_800F6564(0xF24D);
    func_800F824C(0x12);
    func_800F6564(0xF24E);
    func_800F824C(0x13);
    func_800F6564(0xF24A);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0x12));
    func_800F824C(0x12);
    func_800F6564(0xF24B);
    func_800F5480();
    func_800F7F48(func_800F3C3C(0x13));
    func_800F824C(0x13);
    func_800F6564(0xF248);
    func_800F8D6C(0x1C);
    func_800F6564(0xF249);
    func_800F9644(0x20);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x1C));
    func_800F516C();
    func_800F971C();
    func_800F9660(0x20);
    func_800F6C68();
    func_800F824C(0x1C);
    func_800F6C68();
    func_800F824C(0x1D);
    func_800F654C(0xF);
    func_800F824C(0x1E);
    func_800F7210(0xF24D);
    func_800F8D6C(0x10);
    func_800F7270(0x12);
    func_800F8D6C(0x14);
    func_800F7500();
Lfc58:
    for (;;) {
        func_800F6EA8(0x1C);
        if (func_800F6434(0x80) != 0)
            goto Lfca8;
        func_800F7270(0x1C);
        func_800F6364();
        func_800F8D6C(0x1C);
        func_801665C0();
        if (func_800F53C0() == 0)
            goto Lfd48;
        continue;
    }
Lfca8:
    func_800F5574(0xFF);
    if (func_800F53D4() != 0)
        goto Lfd48;
    func_800F824C(0x16);
    func_800F7270(0x1C);
    func_800F6364();
    func_800F8D6C(0x1C);
    func_800F6EA8(0x1C);
    func_800F824C(0x17);
    func_800F7270(0x1C);
    func_800F6364();
    func_800F8D6C(0x1C);
Lfd08:
    for (;;) {
        func_800F6630(0x16);
        func_801665C0();
        if (func_800F53C0() == 0)
            goto Lfd48;
        func_800F5DA0(0x17);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    goto Lfc58;
Lfd48:
    func_800F8E50(0xF2B2);
    func_800F6564(0xF2A0);
    func_800F5574(4);
    if (func_800F53D4() != 0)
        goto Lfda0;
    func_800F5574(3);
    if (func_800F53D4() != 0)
        goto Lfda0;
    func_800F5574(2);
    if (func_800F53D4() == 0)
        return;
Lfda0:
    func_800F71DC();
    func_800F7500();
Lfdb0:
    for (;;) {
        func_800F6D70(0xEBE6);
        func_800F5410();
        func_800F3F38(func_800F3B04(0xF3B0));
        func_800F8960(0xEBE6);
        func_800F6D70(0xEBE7);
        func_800F5410();
        func_800F3F38(func_800F3B04(0xF3B1));
        func_800F8960(0xEBE7);
        func_800F5A90(0x24);
        if (func_800F53D4() != 0)
            break;
    }
    return;
}
