#include "common.h"
void func_8012E5A8(void)
{
    /* party-formation screen: 0xD5/0xD7 rows, 0x1B9D/0x1B9F/0x1B9C
       texts, 8012E264/8012E7CC/8012E33C/8012E700/801255C0 rows;
       loops L12E5C0 (5DA0(0xD5)/5C64(0x202)) and L12E620 (5D24/5B8C). */
    func_8012E264();
    func_800F71DC(8);
L12e5c0:
    for (;;) {
        func_800F5DA0(0xD5);
        func_800F5DA0(0xD5);
        func_800F5DA0(0xD5);
        func_800F62BC(0xD7);
        func_800F62BC(0xD7);
        func_800F62BC(0xD7);
        func_8012E7CC();
        func_8011F684();
        func_800F5E48();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_8012E33C();
L12e620:
    for (;;) {
        func_800F9644(0x20);
        func_800F6658(0xD5);
        func_800F5410();
        func_800F3F94(func_800F3B04(0x1B9D));
        func_800F8274(0xD5);
        func_800F6658(0xD7);
        func_800F5410();
        func_800F3F94(func_800F3B04(0x1B9F));
        func_800F8274(0xD7);
        func_800F9660(0x20);
        func_8012E7CC();
        func_8011F684();
        func_800F5D24(0x1B9C);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    func_8012E700();
    func_800F6630(0xD9);
    func_800F824C(0x1D);
    func_801255C0();
    func_800F6630(0xDA);
    func_800F824C(0x1D);
    func_801255C0();
    func_8011F684();
    func_80126830();
    return;
}
