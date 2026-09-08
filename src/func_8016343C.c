#include "common.h"
void func_8016343C(void)
{
    func_800F971C();
    func_800F654C(0xA0);
    func_80152224();
    func_800F5574(8);
    if (func_800F53C0() != 0)
        goto L6349C;
    func_800F654C(0x2A);
    goto L635CC;
L6349C:
    func_800F5574(0x10);
    if (func_800F53C0() != 0)
        goto L634C4;
    func_800F654C(0x26);
    goto L635CC;
L634C4:
    func_800F5574(0x18);
    if (func_800F53C0() != 0)
        goto L634EC;
    func_800F654C(0x27);
    goto L635CC;
L634EC:
    func_800F5574(0x20);
    if (func_800F53C0() != 0)
        goto L63514;
    func_800F654C(0x2B);
    goto L635CC;
L63514:
    func_800F5574(0x38);
    if (func_800F53C0() != 0)
        goto L6353C;
    func_800F654C(0x1D);
    goto L635CC;
L6353C:
    func_800F5574(0x50);
    if (func_800F53C0() != 0)
        goto L63564;
    func_800F654C(0x20);
    goto L635CC;
L63564:
    func_800F5574(0x68);
    if (func_800F53C0() != 0)
        goto L6358C;
    func_800F654C(0x23);
    goto L635CC;
L6358C:
    func_800F5574(0x80);
    if (func_800F53C0() == 0)
        goto L635C4;
    func_800F654C(9);
    func_800F8188(0x34CA);
    func_801532D4();
    return;
L635C4:
    func_800F654C(0x19);
L635CC:
    func_800F9200();
    func_800F8D6C(0xE5);
    func_800F71DC();
    func_800F8D6C(0x80);
    func_800F654C(0xF);
    func_800F824C(0x82);
    func_800F654C(6);
    func_801526F8();
    func_800F6564(0x28A0);
    func_800F4248(0x7F);
    func_800F824C(0xDF);
    func_800F654C(3);
    func_800F824C(0xE1);
    func_8015240C();
    func_800F7270(0xE3);
    func_800F971C();
L63684:
    for (;;) {
        func_800F6C68();
        func_800F8960(0x28A2);
        func_800F63BC();
        func_800F6364();
        func_800F5A90(3);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6564(0x268B);
    func_800F824C(0xA9);
    func_800F6564(0x268C);
    if (func_800F6434(2) != 0)
        goto L636F4;
    func_800F654C(0xFF);
    func_800F824C(0xA9);
L636F4:
    func_800F6564(0x28A1);
    func_800F4248(0x7F);
    func_800F54D4(func_800F3C3C(0xA9));
    if (func_800F53D4() != 0)
        goto L63744;
    if (func_800F53C0() == 0)
        goto L63744;
    func_800F93DC();
    return;
L63744:
    func_800F93DC();
    func_800F8188(0x26D2);
    func_800F6240(0x355D);
    func_80062578();
    return;
}
