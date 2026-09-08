#include "common.h"
void func_801745F4(void)
{
    /* shop title: 0xFE0/0x19/0x18 windows, 0xCDB/0xCEB texts,
       73E0(0x202) gates; loops L17464C and L174650. */
    func_800F6564(0xFE0);
    func_800F824C(0x19);
    func_800F8FB8(0x18);
    func_800F76BC(func_800F3C3C(0x19));
    func_800F76E8();
    func_800F7CC8(func_800F3C3C(0x18));
    func_800F7270(0x18);
    func_800F7500(0x20);
L17464C:
    for (;;) {
    L174650:
        for (;;) {
            func_800F6C68();
            func_800F8960(0xCDB);
            func_800F6C68();
            func_800F8960(0xCEB);
            func_800F6364();
            func_800F63BC();
            func_800F4248(0xF);
            if (func_800F4120(0x202) != 0)
                goto L17464C;
            break;
        }
        func_800F5410();
        func_800F4008(0x10);
        if (func_800F73E0(0x202) != 0)
            goto L174650;
        break;
    }
    return;
}
