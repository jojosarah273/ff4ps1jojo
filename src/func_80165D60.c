#include "common.h"
void func_80165D60(void)
{
    func_800F9330();
    func_800F6564(0x2894);
    if (func_800F6434(0x202) != 0)
        goto L5d98;
    func_800F654C(0x80);
    goto L5e58;
L5d98:
    func_800F5574(0x44);
    if (func_800F53C0() != 0)
        goto L5dc0;
    func_800F654C(1);
    goto L5e58;
L5dc0:
    func_800F5574(0x4D);
    if (func_800F53C0() != 0)
        goto L5de8;
    func_800F654C(2);
    goto L5e58;
L5de8:
    func_800F5574(0x54);
    if (func_800F53C0() != 0)
        goto L5e10;
    func_800F654C(4);
    goto L5e58;
L5e10:
    func_800F5574(0x61);
    if (func_800F53C0() != 0)
        goto L5e38;
    func_800F654C(8);
    goto L5e58;
L5e38:
    func_800F5574(0x6D);
    if (func_800F53C0() != 0)
        goto L61b8;
    func_800F654C(0x10);
L5e58:
    func_800F824C(0xF);
    func_800F6564(0x2895);
    if (func_800F6434(0x202) != 0)
        goto L5e88;
    func_800F654C(0x80);
    goto L5f48;
L5e88:
    func_800F5574(0x44);
    if (func_800F53C0() != 0)
        goto L5eb0;
    func_800F654C(1);
    goto L5f48;
L5eb0:
    func_800F5574(0x4D);
    if (func_800F53C0() != 0)
        goto L5ed8;
    func_800F654C(2);
    goto L5f48;
L5ed8:
    func_800F5574(0x54);
    if (func_800F53C0() != 0)
        goto L5f00;
    func_800F654C(4);
    goto L5f48;
L5f00:
    func_800F5574(0x61);
    if (func_800F53C0() != 0)
        goto L5f28;
    func_800F654C(8);
    goto L5f48;
L5f28:
    func_800F5574(0x6D);
    if (func_800F53C0() != 0)
        goto L61b8;
    func_800F654C(0x10);
L5f48:
    func_800F824C(0xE);
    func_800F6564(0x1822);
    func_800F9644(0x20);
    func_800F971C();
    func_800F9660(0x20);
    func_800F6B68(0x2000);
    func_800F824C(0x10);
    func_800F4248(0xC0);
    func_800F5574(0xC0);
    if (func_800F53D4() != 0)
        goto L6078;
    func_800F6630(0x10);
    if (func_800F6434(0x80) != 0)
        goto L6030;
    func_800F9644(0x20);
    func_800F6658(0xE);
    func_800F55C0(0x8001);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x1001);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F654C(0x1080);
    goto L60b8;
L6030:
    func_800F9644(0x20);
    func_800F6658(0xE);
    func_800F55C0(0x180);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x110);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F654C(0x8010);
    goto L60b8;
L6078:
    func_800F9644(0x20);
    func_800F6658(0xE);
    func_800F55C0(0x101);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x180);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F654C(0x8001);
L60b8:
    func_800F55C0(0x8001);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x8080);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x804);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x408);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x280);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x8002);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x480);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x880);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x8008);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F55C0(0x8004);
    if (func_800F53D4() != 0)
        goto L61d8;
    func_800F971C();
    func_800F9660(0x20);
L61b8:
    func_800F654C(1);
    func_800F8188(0x2893);
    func_800F95A0();
    return;
L61d8:
    func_800F971C();
    func_800F9660(0x20);
    func_800F654C(1);
    func_800F8188(0x352B);
    func_800F8F74(0x2893);
    func_800F95A0();
    return;
}
