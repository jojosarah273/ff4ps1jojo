#include "common.h"
void func_80103B98(void)
{
    /* shop list: 0x5C/0x70-0x73 window rows, 0x4200 title, 0x79 current
       row; two loops (L103BF8 menu / L103CEC detail) with 8010408C +
       80103F00 renders and the 0x6E/0x6F stat pairs. */
    func_8010408C();
    func_800F71DC();
    func_800F8D6C(0x5C);
    func_800F8FB8(0x70);
    func_800F8FB8(0x71);
    func_800F8FB8(0x72);
    func_800F8FB8(0x73);
    func_800F654C(0x81);
    func_800F8188(0x4200);
    func_800F654C();
    func_800F824C(0x79);
L103bf8:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800F6630(0x79);
        func_800F5410();
        func_800F4008(9);
        func_800F824C(0x6E);
        func_800F8FB8(0x6F);
        func_800FE6E4();
        func_800F6630(0x79);
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            goto L103CA4;
        func_800F6630(0x5C);
        func_800F5480();
        func_800F8058(1);
        func_800F824C(0x5C);
        func_800F6630(0x5D);
        func_800F8058();
        func_800F824C(0x5D);
    L103CA4:
        func_80103F00();
        func_8010408C();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x60);
        if (func_800F53D4() != 0)
            break;
    }
    func_800F654C(0x5F);
    func_800F824C(0x79);
L103cec:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800F6630(0x79);
        func_800F5410();
        func_800F4008(9);
        func_800F824C(0x6E);
        func_800F8FB8(0x6F);
        func_800FE6E4();
        func_800F6630(0x79);
        func_800F4248(7);
        if (func_800F4120(0x202) != 0)
            goto L103D98;
        func_800F6630(0x5C);
        func_800F5480();
        func_800F8058(1);
        func_800F824C(0x5C);
        func_800F6630(0x5D);
        func_800F8058();
        func_800F824C(0x5D);
    L103D98:
        func_8010408C();
        func_800F5DA0(0x79);
        func_800F6630(0x79);
        func_800F5574(0xFF);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
