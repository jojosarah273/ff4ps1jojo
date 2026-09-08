#include "common.h"
void func_801225C0(void)
{
    /* config confirm screen: 0x7E window, 0x1A03/0x16B7/0x1A76/0x1A77
       texts; 80123CB4 + 801386C8 preps; loops at L122620 with the
       8012B168/80120070 sub-dispatchers; 80126550/80122538 row draws. */
    func_800F654C(0x7E);
    func_800F9200();
    func_800F9448();
    func_80123CB4();
    func_801386C8();
    func_800F8F74(0x1A03);
    func_800F6564(0x16B7);
    if (func_800F6434(0x202) != 0)
        goto L122620;
    func_800F8F74(0x1A76);
    func_800F8F74(0x1A77);
L122620:
    for (;;) {
        func_800F6564(0x1A76);
        func_800F5140();
        func_800F4F4C();
        func_800F4008(0x10);
        func_800F824C(0x46);
        func_800F654C(0xB0);
        func_800F824C(0x45);
        func_8011F6D4();
        func_80122538();
        func_8011F684();
        func_80126550();
        func_8011EF0C();
        func_8011F884();
        func_800F6630(1);
        func_800F4248(8);
        if (func_800F4120(2) != 0)
            goto L1226F0;
        func_800F6564(0x1A76);
        func_800F5CCC();
        if (func_800F5B8C() != 0)
            goto L1226E8;
        func_800F654C(7);
    L1226E8:
        func_800F8188(0x1A76);
    L1226F0:
        func_800F6630(1);
        func_800F4248(4);
        if (func_800F4120(2) != 0)
            goto L122748;
        func_800F6564(0x1A76);
        func_800F61E8();
        func_800F5574(8);
        if (func_800F53C0() == 0)
            goto L122740;
        func_800F971C();
    L122740:
        func_800F8188(0x1A76);
    L122748:
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            goto L1227EC;
        func_8012B168();
        func_8011F684();
        func_800F6564(0x1A76);
        if (func_800F54D4(func_800F3B04(0x1A77)) != 0)
            goto L1227A8;
        func_80123CB4();
    L1227A8:
        func_800F8188(0x1A77);
        func_800F71DC();
        func_80120070();
        /* v0/v1 + a0/v1 gates -> L12280C (return) */
        func_80123CB4();
        continue;
    L1227EC:
        func_800F6630(1);
        func_800F4248(0x80);
        if (func_800F4120(2) != 0)
            continue;
        break;
    }
    return;
}
