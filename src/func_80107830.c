#include "common.h"
void func_80107830(void)
{
    func_800F71DC();
    func_800F654C(0xFF);
    for (;;) {
        func_800F8768(0x774);
        func_800F6364();
        func_800F5958(0x180);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6630(0xBA);
    func_800F8D6C(0x3D);
    func_800F7500();
    func_800F8EBC(0x40);
    func_800F654C(8);
    func_800F824C(7);
L78e0:
    for (;;) {
        func_800F7270(0x3D);
        func_800F6B68(0x712);
        if (func_800F6434(0x202) == 0)
            goto L7b54;
        func_800F8FB8(0x19);
        func_800F5140();
        func_800F4F4C();
        func_800F7A40(func_800F3C3C(0x19));
        func_800F5140();
        func_800F4F4C();
        func_800F7A40(func_800F3C3C(0x19));
        func_800F5140();
        func_800F4F4C();
        func_800F7A40(func_800F3C3C(0x19));
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F824C(0x18);
        func_800F6630(0x19);
        func_800F4008();
        func_800F824C(0x19);
        func_800F7270(0x18);
        func_800F6364();
        func_800F7594(0x40);
        func_800F654C(8);
        func_800F824C(8);
        for (;;) {
            func_800F6C68();
            func_801093B8();
            func_800F8960(0x774);
            func_800F3D48();
            func_800F8960(0x834);
            func_800F654C();
            func_800F3D48();
            func_800F63BC();
            func_800F6364();
            func_800F5DA0(8);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        func_800F7594(0x40);
        func_800F654C(0xC8);
        func_800F8960(0x77C);
        func_800F7270(0x3D);
        func_800F6B68(0x713);
        func_800F824C(0x30);
        func_800F8FB8(0x31);
        func_800F8FB8(0x32);
        func_80174CE4();
        func_800F7594(0x40);
        func_800F6630(0x3A);
        func_800F8960(0x77D);
        func_800F6630(0x3B);
        func_800F8960(0x77E);
        func_800F6630(7);
        func_800F4248(1);
        if (func_800F4120(0x202) != 0)
            goto L7af4;
        func_800F6630(0x40);
        func_800F5410();
        func_800F4008(0xD);
        func_800F824C(0x40);
        goto L7b14;
    L7af4:
        func_800F6630(0x40);
        func_800F5410();
        func_800F4008(0xB);
        func_800F824C(0x40);
    L7b14:
        func_800F7270(0x3D);
        func_800F8D6C(0x3D);
        func_800F5DA0(7);
        if (func_800F5B8C(2) == 0)
            continue;
        break;
    }
L7b54:
    func_800F654C(1);
    func_800F824C(0xE6);
    return;
}
