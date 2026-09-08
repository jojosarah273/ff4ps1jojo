#include "common.h"
void func_80103DD8(void)
{
    /* shop rows: 0x5C/0xDF/0x79 windows, 0x420C/0x6E/0x6F texts,
       80103F00/8010408C rows; loop L103E0C on 5574(0xFF). */
    func_800F71DC();
    func_800F8D6C(0x5C);
    func_800F654C(0xDF);
    func_800F824C(0x79);
L103e0c:
    for (;;) {
        func_800FE7B0();
        func_800F8F74(0x420C);
        func_800F6630(0x79);
        func_800F824C(0x6E);
        func_800F8FB8(0x6F);
        func_800F4F28(func_800F3C3C(0x6E));
        func_800F4F4C();
        func_800F7A40(func_800F3C3C(0x6F));
        func_800FE6E4();
        func_80103F00();
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
