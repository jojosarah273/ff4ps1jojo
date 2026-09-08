#include "common.h"
void func_8012C6B8(void)
{
    /* config rows: 0x60 window, gates 6434()/8012C2F8; closes via
       8218? cells + 801221EC. */
    func_800F7500(3);
    func_800F66D8(0x60);
    if (func_800F6434() != 0)
        goto L12C6FC;
    func_800F7500();
    func_8012C2F8();
L12C6FC:
    func_800F654C();
    func_800F82EC(0x60);
    func_800F63BC();
    func_800F66D8(0x60);
    func_800F4248(0x7F);
    func_800F82EC(0x60);
    func_801221EC();
    return;
}
