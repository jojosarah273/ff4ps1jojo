#include "common.h"
void func_8015B078(void)
{
    /* config status row: 0xA9/0xAA/0xAF windows, 0x1822 text, 0x2001
       gate; 80152CDC/8015B284 renders; loops L15B0DC (7A40/5C64) and
       L15B14C (6434(2) cursor gate). */
    func_800F8FB8(0xA9);
    func_800F8FB8(0xAA);
    func_800F6564(0x1822);
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F6B68(0x2001);
    func_800F4248(0xF);
    func_800F63BC();
    func_800F5480();
L15b0dc:
    for (;;) {
        func_800F7A40(func_800F3C3C(0xA9));
        func_800F7A68();
        func_800F7A40(func_800F3C3C(0xAA));
        func_800F7A68();
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F971C();
    func_800F8D6C(0xAF);
L15b14c:
    for (;;) {
        func_800F7270(0xAF);
        func_800F6B68(0x321B);
        if (func_800F6434(2) != 0)
            goto L15B23C;
        func_800F5574(0xC8);
        if (func_800F53D4() == 0)
            goto L15B1C4;
        func_800F7270(0xA6);
        func_800F6B68(0x2000);
        func_800F4248(0x1F);
        func_800F5574(0xB);
        if (func_800F53D4() == 0)
            goto L15B1E4;
        if (func_800F53D4() != 0)
            goto L15B21C;
    L15B1C4:
        func_8015B284();
        func_800F6564(0x353D);
        if (func_800F6434(2) != 0)
            goto L15B21C;
    L15B1E4:
        func_800F7270(0xAF);
        func_800F6B68(0x321A);
        func_800F8768();
        goto L15B23C;
    L15B21C:
        func_800F7270(0xAF);
        func_800F6B68(0x321A);
        func_800F4248(0x7F);
        func_800F8768(0x321A);
    L15B23C:
        func_800F5410();
        func_800F6630(0xAF);
        func_800F4008(4);
        func_800F824C(0xAF);
        func_800F5574(0xC0);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
