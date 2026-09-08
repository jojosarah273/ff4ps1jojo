#include "common.h"
void func_800FF1C0(void)
{
    func_800F654C(3);
    func_800F8188(0x1705);
    func_800F654C(0x1F);
    func_800F824C(0x79);
L1e8:
    for (;;) {
        func_800FE7D8();
        func_800F6630(0x79);
        func_800F824C(0xAD);
        func_800F6564(0x1704);
        func_800F5574(4);
        if (func_800F53D4() == 0)
            goto L238;
        func_800F5DA0(0xB7);
        func_800F6630(0xB7);
        goto L248;
    L238:
        func_800F5DA0(0xB8);
        func_800F6630(0xB8);
    L248:
        func_8017559C();
        func_800FE870();
        func_80172BA8();
        func_80173008();
        func_800F5DA0(0x79);
        func_800F6630(0x79);
        func_800F5574(0x10);
        if (func_800F53C0() != 0)
            continue;
        break;
    }
    func_800F654C(0x1F);
    func_800F824C(0x79);
L2a8:
    for (;;) {
        func_800F654C(0x1F);
        func_800F5480();
        func_800F7F48(func_800F3C3C(0x79));
        func_800F9690();
        func_800F6C68();
        func_800F8188(0x6FB);
        func_800F6630(0x79);
        func_800F824C(0xAD);
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800FE5D4();
        func_800FE6E4();
        func_80103F00();
        func_80172BA8();
        func_80173008();
        func_800F5DA0(0x79);
        func_800F6630(0x79);
        if (func_800F6434(0x8080) != 0)
            continue;
        break;
    }
    func_800F654C(0x71);
    func_800F8188(0x1706);
    func_800F654C(0x10);
    func_800F8188(0x1707);
    func_800F654C(1);
    func_800F8188(0x1700);
    func_800F8188(0x1701);
    func_800F6564(0x1704);
    func_800F5574(4);
    if (func_800F53D4() == 0)
        goto L3ec;
    func_800F654C(1);
    func_800F8188(0x171F);
    func_800F6564(0x6D0);
    if (func_800F6434(2) != 0)
        goto L3fc;
    func_800F654C(1);
    func_800F8188(0x171B);
    goto L3fc;
L3ec:
    func_800F654C(1);
    func_800F8188(0x1723);
L3fc:
    func_800FB160();
    func_800F654C(0x10);
    func_8017559C();
    func_800F654C(3);
    func_800F8188(0x1705);
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800F654C();
    func_800F8188(0x2100);
    func_800F654C(0x20);
    func_800F824C(0xAD);
    func_800F654C(0x2F);
    func_800F824C(0x79);
L464:
    for (;;) {
        func_800FE7D8();
        func_800F654C(0x2F);
        func_800F5480();
        func_800F7F48(func_800F3C3C(0x79));
        func_800F5574(0x10);
        if (func_800F53C0() == 0)
            func_800F8188(0x2100);
        func_800F6630(0x79);
        func_800F9690();
        func_800F6564(0x1704);
        func_800F5574(4);
        if (func_800F53D4() == 0)
            goto L4f4;
        func_800F6C68();
        func_800F824C(0xB7);
        goto L504;
    L4f4:
        func_800F6C68();
        func_800F824C(0xB8);
    L504:
        func_80172BA8();
        func_80173008();
        func_800F5DA0(0x79);
        func_800F6630(0x79);
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
