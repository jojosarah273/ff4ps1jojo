#include "common.h"
void func_8017583C(void)
{
    /* shop/dungeon item menu: 0x93 window, 0x1281-0x1286 texts; 5574
       key-code ladders route through 885C color fills; exits at L75B50. */
    func_800F6630(0x93);
    func_800F4248(0x3F);
    func_800F824C(0x3E);
    func_800F8FB8(0x3D);
    func_800F7270(0x3D);
    func_800F6564(0x1282);
    func_800F4248(0x10);
    if (func_800F4120(2) != 0)
        goto L758F4;
    func_800F6630(0x93);
    func_800F5574(0x39);
    if (func_800F53D4() != 0)
        goto L758C4;
    func_800F5574(0x3A);
    if (func_800F53D4() == 0)
        goto L758F4;
L758C4:
    func_800F654C();
    func_800F885C();
    func_800F61E8();
    func_800F885C();
    return;
L758F4:
    func_800F6564(0x1281);
    func_800F4248(0x40);
    if (func_800F4120(2) != 0)
        goto L75A00;
    func_800F6630(0x93);
    func_800F5574(0x76);
    if (func_800F53D4() != 0)
        goto L759B4;
    func_800F5574(0x77);
    if (func_800F53D4() == 0)
        goto L7599C;
    func_800F654C(0x12);
    func_800F885C();
    func_800F654C(0x13);
    func_800F885C();
    func_800F885C();
    func_800F885C();
    func_800F654C(0x14);
    goto L759F0;
L7599C:
    func_800F5574(0x78);
    if (func_800F53D4() == 0)
        goto L75A00;
L759B4:
    func_800F654C(0x13);
    func_800F885C();
    func_800F885C();
    func_800F885C();
    func_800F885C();
L759F0:
    func_800F885C();
    return;
L75A00:
    func_800F6564(0x1286);
    func_800F4248(1);
    if (func_800F4120(0x202) != 0)
        return;
    func_800F6630(0x93);
    func_800F5574(0xD2);
    if (func_800F53D4() == 0)
        goto L75A5C;
    func_800F654C(0x13);
    func_800F885C();
    return;
L75A5C:
    func_800F5574(0xD3);
    if (func_800F53D4() != 0)
        goto L75AF0;
    func_800F5574(0xD4);
    if (func_800F53D4() == 0)
        goto L75AD8;
    func_800F654C(0x13);
    func_800F885C();
    func_800F885C();
    func_800F885C();
    func_800F885C();
    func_800F885C();
    return;
L75AD8:
    func_800F5574(0xD5);
    if (func_800F53D4() == 0)
        goto L75B24;
L75AF0:
    func_800F654C(0x13);
    func_800F885C();
    func_800F885C();
    func_800F885C();
    return;
L75B24:
    func_800F5574(0xD6);
    if (func_800F53D4() == 0)
        return;
    func_800F654C(0x13);
    func_800F885C();
    return;
}
