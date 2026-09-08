#include "common.h"
void func_8014F2CC(void)
{
    func_800F6630(0x18);
    func_800F5140();
    func_800F6B68(0xF251);
    func_800F5410();
    func_800F3F38(func_800F3B04(0xF268));
    func_800F824C(0x12);
    func_800F6B68(0xF252);
    func_800F5410();
    func_800F3F38(func_800F3B04(0xF269));
    func_800F824C(0x13);
    func_800F71DC();
LF37C:
    for (;;) {
        func_800F6564(0x6CC0);
        if (func_800F6434(2) != 0)
            goto LF5ac;
        func_800F6B68(0xEBE6);
        func_800F5410();
        func_800F4008(0xF);
        if (func_800F53FC() == 0)
            goto LF46c;
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x12));
        if (func_800F53C0() != 0)
            goto LF4d4;
        goto LF544;
    LF46c:
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x12));
        if (func_800F53C0() != 0)
            goto LF544;
    LF4d4:
        func_800F8960(0x300);
        func_800F6B68(0xEBE7);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x13));
        func_800F5574(0x8C);
        if (func_800F53C0() == 0)
            goto LF564;
        func_800F5574(0xF8);
        if (func_800F53C0() != 0)
            goto LF564;
    LF544:
        func_800F654C(0xF0);
        func_800F8960(0x300);
        func_800F8960(0x301);
        goto LF56c;
    LF564:
        func_800F8960(0x301);
    LF56c:
        func_800F6B68(0xEBE8);
        func_800F8960(0x302);
        func_800F6B68(0xEBE9);
        func_800F8960(0x303);
        goto LF73c;
    LF5ac:
        func_800F6B68(0xEBE6);
        if (func_800F6434(0x8080) != 0)
            goto LF634;
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x12));
        if (func_800F53C0() != 0)
            goto LF69c;
        goto LF6f4;
    LF634:
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x12));
        if (func_800F53C0() != 0)
            goto LF6f4;
    LF69c:
        func_800F8960(0x300);
        func_800F6B68(0xEBE7);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x13));
        func_800F5574(0x8C);
        if (func_800F53C0() == 0)
            goto LF714;
        func_800F5574(0xF8);
        if (func_800F53C0() != 0)
            goto LF714;
    LF6f4:
        func_800F654C(0xF0);
        func_800F8960(0x300);
        func_800F8960(0x301);
        goto LF71c;
    LF714:
        func_800F8960(0x301);
    LF71c:
        func_800F6B68(0xEBE8);
        func_800F8960(0x302);
        func_800F6B68(0xEBE9);
        func_800F8960(0x303);
    LF73c:
        func_800F6240(0xF250);
        if (func_800F56AC(func_800F3C3C(0xE)) == 0)
            continue;
        break;
    }
    return;
}
