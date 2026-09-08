#include "common.h"
void func_8014B6E8(void)
{
    /* battle item: 801442BC/8014B98C/80148CAC/800953F4 preps; loop
       L14B738 (6D70(0x29C5)/5A90(5) gates), closes 8014DA2C/8014D568. */
    func_801442BC();
    func_8014B98C();
    func_80148CAC();
    func_800953F4();
    func_800F6564(0x34C2);
    func_800F4248(0x80);
    func_800F824C();
    func_800F8FB8(1);
    func_800F7500();
L14b738:
    for (;;) {
        func_800F6D70(0x29C5);
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L14B7AC;
        func_800F6C68();
        func_800F78C4(func_800F3C3C(1));
        func_800F824C(1);
    L14B7AC:
        func_800F63BC();
        func_800F5A90(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F8FB8(2);
    func_800F654C(0x3D);
    func_8014DA2C();
    func_800F654C();
    func_8014D568();
    return;
}
