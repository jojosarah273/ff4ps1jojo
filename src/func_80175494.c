#include "common.h"
void func_80175494(void)
{
    /* shop rows: 0x1700 text, 0x7A window, 0xCFE cell; 5574(1) gate;
       loop L175534 on 5A90(0x10). */
    func_800F6564(0x1700);
    func_800F5574(1);
    if (func_800F53D4() == 0)
        return;
    func_800F6630(0x7A);
    func_800F4248(0x70);
    func_800F6C68();
    func_800F7500();
    func_800F9644(0x20);
L175534:
    for (;;) {
        func_800F6CF4();
        func_800F89D4(0xCFE);
        func_800F6364();
        func_800F6364();
        func_800F63BC();
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F6558();
    func_800F9660(0x20);
    return;
}
