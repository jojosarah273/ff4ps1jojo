#include "common.h"
void func_8016D600(void)
{
    /* config map: 0x7D1D text, 0x39/0x3C windows, 8016D730/8016D768
       rows; 5574 ladder (1/0xA codes) with loop L16D660 on
       5B8C(0x202). */
    func_800F5574(1);
    if (func_800F53D4() != 0)
        goto L16D690;
    func_800F5574(0xA);
    if (func_800F53D4() == 0)
        goto L16D648;
    func_8016D730();
    return;
L16D648:
    func_8016D768();
    func_800F6EA8(0x36);
    func_800F824C();
L16d660:
    for (;;) {
        func_800F654C(0xFF);
        func_8016D730();
        func_800F5DA0();
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
L16D690:
    func_800F6564(0x7D1D);
    func_800F9644(0x20);
    func_800F922C();
    func_800F516C();
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x39));
    func_800F8274(0x39);
    func_800F9410();
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x39));
    func_800F8274(0x3C);
    func_800F971C();
    func_800F9660(0x20);
    return;
}
