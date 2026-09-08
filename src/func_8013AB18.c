#include "common.h"
void func_8013AB18(void)
{
Lab24:
    for (;;) {
        func_800F6564(0x1BB9);
        func_800F5140();
        func_800F4F4C();
        func_800F4008(0x4B);
        func_800F824C(0x46);
        func_800F654C(0xA);
        func_800F824C(0x45);
        func_800F7500(0x314);
        func_8011F6FC();
        func_800F6564(0x16AE);
        func_8013B0C4();
        func_800F654C(0x4A);
        func_800F824C(0x46);
        func_8011F6D4();
        func_800F6564(0x16AF);
        func_8013B0C4();
        func_800F654C(0x5A);
        func_800F824C(0x46);
        func_8011F6AC();
        func_800F6564(0x16B0);
        func_8013B0C4();
        func_800F654C(0x6A);
        func_800F824C(0x46);
        func_800F7500(0x30C);
        func_8011F6FC();
        func_800F6564(0x16B1);
        func_801224D0();
        func_800F824C(0x45);
        func_800F654C(0x7A);
        func_800F824C(0x46);
        func_800F7500(0x308);
        func_8011F6FC();
        func_800F6564(0x16B2);
        func_801224D0();
        func_800F824C(0x45);
        func_800F654C(0x8A);
        func_800F824C(0x46);
        func_800F7500(0x318);
        func_8011F6FC();
        func_8011F684();
        func_8011F884();
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto Lad30;
        func_800F654C(5);
        func_800F8188(0x1BB9);
    Lad30:
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto Lad80;
        func_800F6564(0x1BB9);
        func_800F5CCC();
        if (func_800F5B8C(0x8080) != 0)
            goto Lad78;
        func_800F654C(5);
    Lad78:
        func_800F8188(0x1BB9);
    Lad80:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto Ladd8;
        func_800F6564(0x1BB9);
        func_800F61E8();
        func_800F5574(6);
        if (func_800F53D4() == 0)
            goto Ladd0;
        func_800F654C();
    Ladd0:
        func_800F8188(0x1BB9);
    Ladd8:
        func_800F6630(1);
        func_800F4248(1);
        if (func_800F4120(2) != 0)
            goto Lae74;
        func_800F6564(0x1BB9);
        func_800F5574(5);
        if (func_800F53D4() != 0)
            goto Laf0c;
        func_801224D0();
        func_800F6B68(0x16AE);
        func_800F61E8();
        func_800F5574();
        if (func_800F53D4() == 0)
            goto Lae6c;
        func_800F654C();
    Lae6c:
        func_800F8768(0x16AE);
    Lae74:
        func_800F6630(1);
        func_800F4248(2);
        if (func_800F4120(2) != 0)
            goto Laf0c;
        func_800F6564(0x1BB9);
        func_800F5574(5);
        if (func_800F53D4() != 0)
            goto Laf0c;
        func_801224D0();
        func_800F6B68(0x16AE);
        func_800F5CCC();
        if (func_800F5B8C(0x8080) != 0)
            goto Laf04;
        func_800F5CCC();
    Laf04:
        func_800F8768(0x16AE);
    Laf0c:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto Laf54;
        func_800F6564(0x1BB9);
        func_800F5574(5);
        if (func_800F53D4() != 0)
            func_8013AFA4();
    Laf54:
        func_800F6630(1);
        func_800F4248(0xC0);
        if (func_800F4120(0x202) != 0)
            goto Laf94;
        func_800F6630();
        func_800F4248(0xC0);
        if (func_800F4120(0x202) == 0)
            goto Lab24;
    Laf94:
        func_8013AFA4();
        goto Lab24;
    }
}
