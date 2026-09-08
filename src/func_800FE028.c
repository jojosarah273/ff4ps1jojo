#include "common.h"
void func_800FE028(void)
{
    /* shop fills: two 885C/5958(0x100) loops. */
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F71DC();
L8fe050:
    for (;;) {
        func_800F885C();
        func_800F6364();
        func_800F5958(0x100);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_800F71DC();
L8fe0b0:
    for (;;) {
        func_800F885C();
        func_800F6364();
        func_800F5958(0x100);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}
