#include "common.h"
void func_80142BCC(void)
{
    /* battle rows: 0x1/0x2/0x4/0x6 windows with 4008(0x20) reads;
       loop L142C14 on 5958(0x40). */
    func_800F8F74();
    func_800F971C();
    func_800F8FB8();
    func_800F654C(0x40);
    func_800F824C(2);
L142c14:
    for (;;) {
        func_800F6630();
        func_800F8768();
        func_800F5410();
        func_800F4008(0x20);
        func_800F824C();
        func_800F6630(2);
        func_800F8768();
        func_800F5410();
        func_800F4008(0x20);
        func_800F824C(2);
        func_800F6630(4);
        func_800F8768();
        func_800F6630(6);
        func_800F8768();
        func_800F6364();
        func_800F5958(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
