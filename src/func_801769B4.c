#include "common.h"
void func_801769B4(void)
{
    /* shop sell-flow: 0x1700 header, 0x7A/0x12/0x13 rows, 0x2115/0x420B/
       0x4300/0x4301/0x4304 titles with 800F9868 catalog + 80181DA4
       commit; loop L176AF4 polls 5C64(0x202). */
    func_800F6564(0x1700);
    func_800F5574(3);
    if (func_800F53D4() == 0)
        return;
    func_800F6630(0x7A);
    func_800F4248(6);
    if (func_800F4120(2) == 0)
        return;
    func_800F6630(0x7A);
    func_800F4248(0x18);
    func_800F824C(0x12);
    func_800F8FB8(0x13);
    func_800F9644(0x20);
    func_800F5024(func_800F3C3C(0x12));
    func_800F5024(func_800F3C3C(0x12));
    func_800F5024(func_800F3C3C(0x12));
    func_800F5024(func_800F3C3C(0x12));
    func_800F6658(0x12);
    func_800F5410();
    func_800F4064(0x5000);
    func_800F8274(0x12);
    func_800F6558();
    func_800F9660(0x20);
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F8F74(0x420B);
    func_800F654C(1);
    func_800F8188(0x4300);
    func_800F654C(0x18);
    func_800F8188(0x4301);
    func_800F71DC(0x1200);
    func_800F8D00(0x2116);
    func_800F654C(0x7F);
    func_800F8188(0x4304);
    func_800F7500(4);
L176af4:
    for (;;) {
        func_800F7270(0x12);
        func_800F8D00(0x4302);
        func_800F71DC(0x80);
        func_800F8D00(0x4305);
        func_800F9868();
        func_800F6630(0x13);
        func_800F5410();
        func_800F4008(2);
        func_800F824C(0x13);
        func_800F5EA0();
        if (func_800F5C64(0x202) != 0)
            continue;
        break;
    }
    func_80181DA4();
    return;
}
