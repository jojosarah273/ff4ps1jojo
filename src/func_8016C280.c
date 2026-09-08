#include "common.h"
void func_8016C280(void)
{
    /* battle row render: 0x74/0x76/0x70/0x72 stat windows with
       3F94(3C3C) / 4064(8) value cells, 0x5B/0x5D headers; then the
       0x61/0xA1 secondary cells and the 80C0 gate read (80176F60). */
    func_800F71DC();
    func_8016C734();
    func_800F9644(0x20);
    func_800F6658(0x74);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x6C));
    func_800F3F94(func_800F3C3C(0x7C));
    func_800F4064(8);
    func_800F8274(0x4B);
    func_800F6658(0x76);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x6E));
    func_800F3F94(func_800F3C3C(0x7E));
    func_800F4064(8);
    func_800F8274(0x4D);
    func_800F971C();
    func_800F9660(0x20);
    func_800F654C(4);
    func_800F824C(0x51);
    func_800F6564(0x5B);
    if (func_800F6434(2) != 0)
        goto L16C488;
    func_800F9644(0x20);
    func_800F6658(0x70);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x88));
    func_800F5480();
    func_800F7FCC(func_800F3C3C(0xA1));
    func_800F8274(0x5D);
    func_800F6658(0x72);
    func_800F5410();
    func_800F3F94(func_800F3C3C(0x8A));
    func_800F5480();
    func_800F7FCC(func_800F3C3C(0xA3));
    func_800F8274(0x5F);
    func_800F971C();
    func_800F9660(0x20);
    func_800F7210(0x61);
    func_800F5958(4);
    if (func_800F53C0() == 0)
        goto L16C490;
    func_800F5E48();
    func_800F5E48();
    func_800F5E48();
    func_800F8D00(0x61);
    func_800F7210(0x20C0);
    func_800F6364();
    func_800F6364();
    func_800F8D00(0x20C0);
    goto L16C490;
L16C488:
    func_80176F60();
L16C490:
    return;
}
