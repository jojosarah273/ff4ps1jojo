#include "common.h"
void func_8011777C(void)
{
    func_80117594();
    func_800F8188(0x1800);
    func_800F6564(0x1701);
    if (func_800F6434(2) != 0)
        goto L7b8;
    func_800F654C(1);
L7b8:
    func_800F8188(0x1801);
    func_800F8FB8(0xE4);
    func_800F7500();
L7d4:
    for (;;) {
        func_800F6564(0x1800);
        func_800F5574();
        if (func_800F53D4() == 0)
            goto L84c;
        func_800F6564(0x1801);
        func_800F5574();
        if (func_800F53D4() != 0)
            goto L8f4;
    L84c:
        func_800F5A90(0x1A);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
L87c:
    if (func_800FC1CC() != 0)
        return;
    func_800F6630(0xE4);
    if (func_800F6434(2) == 0)
        func_80117CB8();
    func_80176060();
    func_800FAD48();
    func_800FED3C();
    func_80170C14();
    func_8010B010();
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_8011EA5C();
    return;
L8f4:
    func_800F5574();
    if (func_800F53D4() != 0) {
        func_800F5CCC();
        func_800F5CCC();
    }
    func_800F7864();
    func_800F824C(6);
    func_800F824C(0xE4);
    func_800F71DC();
    func_800F7500();
L970:
    for (;;) {
        func_800F6B68(0x1000);
        func_800F8960(0xAD6);
        func_80117DF8();
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F6630(6);
    func_800F5574(0xB);
    if (func_800F53D4() != 0)
        goto Lb74;
    func_800F71DC();
L9e8:
    for (;;) {
        func_800F5574(3);
        if (func_800F53D4() != 0)
            goto Lb1c;
        func_800F6B68(0x1000);
        func_800F4248(0x1F);
        func_800F5574();
        if (func_800F53D4() != 0)
            goto Lacc;
        func_800F5A90(0xB);
        if (func_800F53D4() == 0)
            goto Lab4;
        func_800F5574();
        if (func_800F53D4() != 0)
            goto Lacc;
    Lab4:
        func_800F654C();
        func_800F8768(0x1000);
        goto Lb4c;
    Lacc:
        func_80117E64();
        func_800F6B68(0x1009);
        func_800F8768(0x1007);
        func_800F6B68(0x100A);
        func_800F8768(0x1008);
        func_800F6B68(0x100D);
        func_800F8768(0x100B);
        func_800F6B68(0x100E);
        func_800F8768(0x100C);
        goto Lb4c;
    Lb1c:
        func_800F6B68(0x1000);
        func_800F4248(0x1F);
        func_800F5574(3);
        if (func_800F53D4() != 0)
            func_800F90EC(0x1000);
    Lb4c:
        func_80117DF8();
        func_800F5958(0x140);
        if (func_800F53D4() == 0)
            goto L9e8;
        goto L87c;
    }
Lb74:
    func_800F71DC();
    for (;;) {
        func_800F6B68(0x10C0);
        func_800F8768(0x1200);
        func_800F6364();
        func_800F5958(0x80);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC();
    for (;;) {
        func_800F90EC(0x1000);
        func_80117DF8();
        func_800F5958(0x140);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F71DC(0xC0);
    func_800F8D6C(0x3D);
    func_800F654C(0xD);
    func_80118244();
    func_800F71DC(0x100);
    func_800F8D6C(0x3D);
    func_800F654C(1);
    func_8011818C();
    func_800F71DC(0x100);
    func_80117E64();
    func_800F6B68(0x1009);
    func_800F8768(0x1007);
    func_800F6B68(0x100A);
    func_800F8768(0x1008);
    func_800F6B68(0x100D);
    func_800F8768(0x100B);
    func_800F6B68(0x100E);
    func_800F8768(0x100C);
    func_800F71DC(0x30);
    for (;;) {
        func_800F90EC(0x10C0);
        func_800F6364();
        func_800F5958(0x37);
        if (func_800F53D4() != 0)
            break;
    }
    goto L87c;
}
