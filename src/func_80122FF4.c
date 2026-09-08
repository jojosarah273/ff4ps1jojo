#include "common.h"
void func_80122FF4(void)
{
L2FFC:
    for (;;) {
        func_800F6630(0xE7);
        func_801224D0();
        func_8012D1D0();
        if (func_800F53D4() == 0)
            goto L3064;
        func_800F6630(0xE7);
        func_800F61E8();
        func_800F5574(5);
        if (func_800F53D4() == 0)
            goto L3054;
        func_800F654C();
    L3054:
        func_800F824C(0xE7);
    }
L3064:
    func_800F6630(0xE7);
    func_800F824C(0x45);
    func_800F5140();
    func_800F4F4C();
    func_800F3F38(func_800F3C3C(0x45));
    func_800F4008(0x10);
    func_800F824C(0x46);
    func_800F654C(2);
    func_800F824C(0x45);
    func_8011F6D4();
    func_8011F684();
    func_8011F884();
    func_800F6630(1);
    func_800F4248(8);
    if (func_800F4120(2) != 0)
        goto L31A0;
L311C:
    for (;;) {
        func_800F6630(0xE7);
        func_800F5CCC();
        if (func_800F5B8C(0x8080) != 0)
            goto L3144;
        func_800F654C(4);
    L3144:
        func_800F824C(0xE7);
        func_801224D0();
        func_800F6C68();
        func_80124EAC();
        func_800F6564(0x1BB8);
        if (func_800F6434(0x202) != 0)
            goto L31A0;
        func_800F6B68();
        func_800F4248(0x1F);
        if (func_800F4120(2) != 0)
            continue;
        break;
    }
L31A0:
    func_800F6630(1);
    func_800F4248(4);
    if (func_800F4120(2) != 0)
        goto L324C;
L31C0:
    for (;;) {
        func_800F6630(0xE7);
        func_800F61E8();
        func_800F5574(5);
        if (func_800F53D4() == 0)
            goto L31F0;
        func_800F971C();
    L31F0:
        func_800F824C(0xE7);
        func_801224D0();
        func_800F6C68();
        func_80124EAC();
        func_800F6564(0x1BB8);
        if (func_800F6434(0x202) != 0)
            goto L324C;
        func_800F6B68();
        func_800F4248(0x1F);
        if (func_800F4120(2) != 0)
            continue;
        break;
    }
L324C:
    func_800F6564(0x1B27);
    if (func_800F6434(2) != 0)
        goto L3294;
    func_800F6630(1);
    func_800F4248(3);
    if (func_800F4120(2) != 0)
        goto L3294;
    func_800F654C(0x7F);
    goto L32D0;
L3294:
    func_800F6630();
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto L32E0;
    func_800F6630(0xE7);
    func_801224D0();
    func_800F6C68();
L32D0:
    func_800F824C(0xE8);
    return;
L32E0:
    func_800F6630(1);
    func_800F4248(0x80);
    if (func_800F4120(2) != 0)
        goto L3064;
    func_800F654C(0xFF);
    func_800F824C(0xE8);
    return;
}
