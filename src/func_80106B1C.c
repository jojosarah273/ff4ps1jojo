#include "common.h"
void func_80106B1C(void)
{
    /* shop detail: 0xDA/0xE7/0x8D/0xBA windows, 0x2115 title; 5574(8)
       gate; 3F38(3C3C)/76BC/7CC8 cell pairs on 0x8C/0x8B, 0x4B/0x4A;
       closes on 8D6C(0x8D). */
    func_800F6630(0xDA);
    func_800F5574(8);
    if (func_800F53D4() == 0)
        goto L106CC0;
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F6630(0xE7);
    if (func_800F6434(2) != 0)
        goto L106BA4;
    func_800F7270(0x8D);
    func_800F8FB8(0xE7);
L106BA4:
    func_800F6630(0xBA);
    func_800F5410();
    func_800F3F38(func_800F3C3C(0x8C));
    func_800F824C(0x4B);
    func_800F8FB8(0x4A);
    func_800F76BC(func_800F3C3C(0x4B));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x4A));
    func_800F76BC(func_800F3C3C(0x4B));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x4A));
    func_800F6630(0x8B);
    if (func_800F6434(2) != 0)
        goto L106C44;
    func_800F654C(0xD);
L106C44:
    func_800F5410();
    func_800F4008(0x23);
    func_800F3F38(func_800F3C3C(0x4A));
    func_800F824C(0x4A);
    func_800F6630(0x4B);
    func_800F4248(3);
    func_800F5410();
    func_800F4008(0x2C);
    func_800F824C(0x4B);
    func_800F7270(0x4A);
    func_800F8D6C(0x8D);
    return;
L106CC0:
    return;
}
