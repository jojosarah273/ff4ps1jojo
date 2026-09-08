#include "common.h"
void func_8013B270(void)
{
    func_801210AC();
    func_800F7500();
    func_8011EF30();
    func_800F7500();
    func_8011FB74();
    func_800F8FB8(0x48);
    func_800F8FB8(0x49);
    func_800F7500(0x212);
L2cc:
    for (;;) {
        func_800F7270(0x48);
        func_800F6C68();
        func_800F939C();
        func_80124EAC();
        func_800F6B68();
        func_80120A0C();
        func_800F960C();
        func_800F939C();
        func_801224F8();
        func_80122518();
        func_800F7500();
        func_8011F8D4();
        func_800F960C();
        func_80122334();
        func_80122334();
        func_800F62BC(0x48);
        func_800F6630(0x48);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6564(0x1BC7);
    func_800F824C(0x45);
L3bc:
    for (;;) {
        func_800F6630(0x45);
        func_8012D1D0();
        if (func_800F53D4() == 0)
            goto L414;
        func_800F62BC(0x45);
        func_800F6630(0x45);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            goto L3bc;
        func_800F8FB8(0x45);
    }
L414:
    func_800F6630(0x45);
    func_800F8188(0x1BC7);
    func_801241B8();
    func_8011F684();
    func_80120B6C();
L458:
    for (;;) {
        func_8013B764();
        func_8013B7B8(0xFF);
        func_800F6564(0x1BC7);
        func_800F5140();
        func_800F4F4C();
        func_800F4008(0x4A);
        func_800F824C(0x46);
        func_800F654C(0x38);
        func_800F824C(0x45);
        func_8011F6D4();
        func_800F8FB8(0x45);
        func_800F8FB8(0x46);
    L4d0:
        for (;;) {
            func_800F6630(0x45);
            func_800F5140();
            func_801224D0();
            func_800F9644(0x20);
            func_800F9660(0x20);
            func_800F6630(0x45);
            func_8013B804();
            func_800F7864();
            func_800F5410();
            func_800F4008(0x81);
            func_800F8960(0xA602);
            func_800F62BC(0x45);
            func_800F6630(0x45);
            func_800F5574(5);
            if (func_800F53D4() != 0)
                break;
        }
        func_8013B764();
        func_801263F0();
        func_8011F6A4();
        func_8011F884();
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L618;
        func_8013B764();
        func_8013B7B8(0xFF);
        func_801263C8();
        return;
    L618:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L680;
        for (;;) {
            func_800F6564(0x1BC7);
            func_800F5CCC();
            if (func_800F5B8C(0x8080) != 0)
                goto L660;
            func_800F654C(4);
        L660:
            func_800F8188(0x1BC7);
            func_8013B840();
            if (func_800F53D4() != 0)
                continue;
            break;
        }
    L680:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto L6f0;
        for (;;) {
            func_800F6564(0x1BC7);
            func_800F61E8();
            func_800F5574(5);
            if (func_800F53D4() == 0)
                goto L6d0;
            func_800F654C();
        L6d0:
            func_800F8188(0x1BC7);
            func_8013B840();
            if (func_800F53D4() != 0)
                continue;
            break;
        }
    L6f0:
        func_800F6630(1);
        func_800F4248(3);
        if (func_800F4120(2) != 0)
            goto L458;
        func_8013B7C0();
        func_800F5CCC();
        func_800F5CCC();
        if (func_800F5B8C(0x8080) != 0)
            goto L740;
        func_800F654C(2);
    L740:
        func_800F8768(0x16B9);
        goto L458;
    }
}
