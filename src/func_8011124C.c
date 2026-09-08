#include "common.h"
void func_8011124C(void)
{
    func_80111B14();
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800F8FB8(0xAC);
    func_800F8FB8(0x79);
    func_800F8FB8(0x20);
    func_800F8FB8(0x7A);
L1294:
    for (;;) {
        func_800F6630(0x7A);
        func_800F4248(3);
        func_800F8188(0x1705);
        func_80111ADC();
        func_800F6630(0x7A);
        func_800F4248(1);
        if (func_800F4120(0x202) != 0)
            goto L1318;
        func_800F654C(4);
        goto L1320;
    L1318:
        func_800F654C();
    L1320:
        func_800F824C(0xAB);
        func_80102770();
        func_80111C2C();
        func_800F6630(0x2C);
        func_800F8188(0x340);
        func_800F8188(0x300);
        func_800F5410();
        func_800F4008(0x10);
        func_800F8188(0x344);
        func_800F8188(0x304);
        func_800F5410();
        func_800F4008(0x10);
        func_800F8188(0x348);
        func_800F8188(0x308);
        func_800F5410();
        func_800F4008(0x10);
        func_800F8188(0x34C);
        func_800F8188(0x30C);
        func_800F654C(0x68);
        func_800F5410();
        func_800F3F38(func_800F3C3C(0x20));
        func_800F5574(0x78);
        if (func_800F53C0() == 0)
            goto L13f0;
        func_800F654C(0x78);
    L13f0:
        func_800F8188(0x341);
        func_800F8188(0x345);
        func_800F8188(0x349);
        func_800F8188(0x34D);
        func_800F654C(0x30);
        func_800F8188(0x342);
        func_800F654C(0x32);
        func_800F8188(0x346);
        func_800F654C(0x34);
        func_800F8188(0x34A);
        func_800F654C(0x36);
        func_800F8188(0x34E);
        func_800F654C(0x37);
        func_800F8188(0x343);
        func_800F8188(0x303);
        func_800F8188(0x347);
        func_800F8188(0x307);
        func_800F8188(0x34B);
        func_800F8188(0x30B);
        func_800F8188(0x34F);
        func_800F8188(0x30F);
        func_800F654C(0x70);
        func_800F8188(0x301);
        func_800F8188(0x305);
        func_800F8188(0x309);
        func_800F8188(0x30D);
        func_800F6630(0x7A);
        func_800F4248(2);
        func_800F5410();
        func_800F4008(0xE4);
        func_800F8188(0x302);
        func_800F8188(0x306);
        func_800F8188(0x30A);
        func_800F8188(0x30E);
        func_800F8188();
        func_800F6630(0x7A);
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            goto L1588;
        func_800F62BC(0x20);
    L1588:
        func_800F6630(0x7A);
        func_800F4248(3);
        if (func_800F4120(0x202) != 0)
            goto L15b0;
        func_800F62BC(0x2C);
    L15b0:
        func_800F6630(0x20);
        func_800F5574(0x20);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F8F74(0x1728);
    func_8011EA5C();
    return;
}
