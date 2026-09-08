#include "common.h"
void func_80116DA0(void)
{
    func_800F824C(0xAE);
    func_800F654C();
Ldec:
    for (;;) {
        func_800F5A90();
        if (func_800F53D4() != 0)
            break;
        func_800F5EA0(0xA47);
        func_800F5410();
        func_800F4008(0xF);
    }
    func_800F8D00();
    func_800F654C(0x40);
    func_800F8768(0x908);
    func_800F6630(0xAE);
    func_800F4248(0xF);
    func_800F5574(4);
    if (func_800F53C0() != 0)
        goto Lee0;
    func_800F61E8();
    func_800F8768(0x902);
    func_800F6630(0xCF);
    if (func_800F6434(0x202) != 0)
        goto Leb8;
    func_800F6B68(0x902);
    func_800F5CCC();
    func_800F8768(0x909);
Leb8:
    func_800F6630(0xEA);
    if (func_800F6434(0x202) != 0)
        goto L29c;
    func_800F62BC(0xEA);
    goto L29c;
Lee0:
    func_800F5574(8);
    if (func_800F53C0() != 0)
        goto Lf10;
    func_800F5480();
    func_800F8058(4);
    goto L28c;
Lf10:
    func_800F5574(8);
    if (func_800F53D4() == 0)
        goto L0ec;
    func_800F90EC(0x902);
    func_800F6B68(0x906);
    func_800F824C(0x3E);
    func_800F8FB8(0x3D);
    func_800F76BC(func_800F3C3C(0x3E));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x3D));
    func_800F76BC(func_800F3C3C(0x3E));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x3D));
    func_800F76BC(func_800F3C3C(0x3E));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x3D));
    func_800F6630(0x3D);
    func_800F5410();
    func_800F3F38(func_800F3B04());
    func_800F824C(0x3D);
    func_800F6630(0xAE);
    func_800F5410();
    func_800F4008(0x80);
    func_800F824C(6);
    func_800F6B68(0x90B);
    if (func_800F6434(2) != 0)
        goto L0a8;
    func_800F90EC(0x90B);
    func_800F9330();
    func_800F7270(0x3D);
    func_800F6C68();
    if (func_800F54D4(func_800F3C3C(6)) == 0)
        goto L0dc;
    func_800F654C();
    func_800F885C();
    goto L0dc;
L0a8:
    func_800F654C(1);
    func_800F8768(0x90B);
    func_800F9330();
    func_800F7270(0x3D);
    func_800F6630(6);
    func_800F885C();
L0dc:
    func_800F95A0();
    goto L2c4;
L0ec:
    func_800F5574(9);
    if (func_800F53D4() == 0)
        goto L1b4;
    func_800F6B68(0x909);
    func_800F4248(1);
    if (func_800F4120(2) != 0)
        goto L18c;
    func_800F6B68(0x909);
    func_800F4248(2);
    if (func_800F4120(0x202) != 0)
        goto L16c;
    func_800F654C(2);
    func_800F8768(0x902);
    func_800F5CCC();
    func_800F8768(0x909);
    goto L18c;
L16c:
    func_800F654C(4);
    func_800F8768(0x902);
    func_800F5CCC();
    func_800F8768(0x909);
L18c:
    func_800F654C(1);
    func_800F8768(0x90C);
    func_800F654C(0x80);
    func_800F8768(0x908);
    goto L29c;
L1b4:
    func_800F5574(0xA);
    if (func_800F53D4() == 0)
        goto L1ec;
    func_800F90EC(0x8FF);
    func_800F654C(2);
    func_800F8768(0x90C);
    goto L220;
L1ec:
    func_800F5574(0xB);
    if (func_800F53D4() == 0)
        goto L238;
    func_800F90EC(0x8FF);
    func_800F654C(3);
    func_800F8768(0x90C);
L220:
    func_800F654C();
    func_800F8768(0x908);
    goto L2c4;
L238:
    func_800F5574(0xC);
    if (func_800F53D4() != 0)
        goto L284;
    func_800F5574(0xD);
    if (func_800F53D4() != 0)
        goto L284;
    func_800F5574(0xE);
    if (func_800F53D4() == 0)
        goto L284;
L284:
    func_800F654C();
L28c:
    func_800F8768(0x909);
    goto L2c4;
L29c:
    func_800F6B68(0x904);
    func_800F824C(0xC);
    func_800F6B68(0x906);
    func_800F824C(0xE);
    func_8010D2A0();
L2c4:
    func_800F90EC(0x8FF);
    return;
}
