#include "common.h"
void func_80125934(void)
{
    /* sub-menu: 0x1A73/0x1A75 texts, 80125130 row; loop L1259C4
       (6DE8/8274(0x1D)/8274(2) cells) on 5C64(0x202). */
    func_800F6564(0x1A73);
    if (func_800F6434(2) != 0)
        goto L125964;
    func_800F5D24(0x1A73);
    return;
L125964:
    func_800F654C(0xA);
    func_800F8188(0x1A73);
    func_800F654C(0xFF);
    func_800F5ECC(func_800F3B04(0x1A75));
    func_800F8188(0x1A75);
    if (func_800F5F20(2) != 0)
        goto L1259B4;
    func_800F7500();
    goto L1259BC;
L1259B4:
    func_800F7500();
L1259BC:
    func_800F71DC(5);
L1259c4:
    for (;;) {
        func_800F9644(0x20);
        func_800F6DE8();
        func_800F8274(0x1D);
        func_800F6DE8();
        func_800F8274(2);
        func_800F9660(0x20);
        func_800F9330();
        func_800F939C();
        func_80125130();
        func_800F960C();
        func_800F95A0();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F63BC();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    return;
}
