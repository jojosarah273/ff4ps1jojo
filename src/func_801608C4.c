#include "common.h"
void func_801608C4(void)
{
    /* options: 0x3554 text, 0xCE window, 80153074 row; gate
       6434(0x202) picks the 0x3550/0x3523 variants. */
    func_800F6564(0x3554);
    if (func_800F6434(0x202) != 0)
        goto L16092C;
    func_800F6630(0xCE);
    func_800F4248(0x7F);
    func_800F6564(0x3550);
    func_80153074();
    func_800F8188(0x3550);
    return;
L16092C:
    func_800F6630(0xCE);
    func_800F4248(0x7F);
    func_800F6564(0x3523);
    func_80153074();
    func_800F8188(0x3523);
    return;
}
