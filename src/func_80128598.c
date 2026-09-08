#include "common.h"
void func_80128598(void)
{
    /* party-stat block: 0x1B9A gate; main path renders the 0x88/0x4E
       windows and the L128628 row loop (801266C8 + 5DD4 cells) with the
       80128750/8016EA7C/80126590 variants; exit 8011F884/5C64 latch. */
    func_800F6564(0x1B9A);
    if (func_800F6434(2) != 0)
        goto L1285D8;
    func_80128750();
    func_8016EA7C();
    func_80126590();
    return;
L1285D8:
    func_800F6240(0x1B9A);
    func_800F971C();
    func_800F824C(0x88);
    func_800F71DC();
    func_800F8D6C(0x93);
    func_800F8D6C(0x99);
    func_800F8D6C(0x9F);
    func_800F654C(3);
    func_800F824C(0x4E);
    func_800F7500(0x30);
L128628:
    for (;;) {
        func_801266C8();
        func_800F9644(0x20);
        func_800F5DD4(0x93);
        func_800F5DD4(0x99);
        func_800F5DD4(0x99);
        func_800F5DD4(0x9F);
        func_800F5DD4(0x9F);
        func_800F5DD4(0x9F);
        func_800F9660(0x20);
        func_800F5DA0(0x4E);
        if (func_800F5B8C(0x202) != 0)
            goto L1286A0;
        func_800F654C(3);
        func_800F824C(0x4E);
        func_800F62BC(0x88);
    L1286A0:
        func_8011F884();
        func_800F6630();
        func_800F4248(0x80);
        if (func_800F4120(0x202) != 0)
            goto L1286E8;
        func_800F6630(1);
        func_800F4248(0xC);
        if (func_800F4120(2) != 0)
            goto L128718;
    L1286E8:
        func_80128750();
        func_800F654C(3);
        func_800F824C(0x4E);
        func_800F654C(0xF);
        func_800F824C(0x88);
        func_800F7500(2);
    L128718:
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_800F654C(0xF);
    func_800F824C(0x88);
    return;
}
