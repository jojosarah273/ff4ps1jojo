#include "common.h"
void func_8012CD6C(void)
{
    /* config rows: 0x1A04/0x1A03/0x1B19/0x93/0x1BA5/0x1A65 texts;
       gate 4120(2) picks 8012CC4C. */
    func_800F6564(0x1A04);
    func_800F4248(0x80);
    if (func_800F4120(2) == 0)
        goto L12CDA4;
    func_8012CC4C();
    return;
L12CDA4:
    func_800F654C(7);
    func_800F8188(0x1A03);
    func_800F8F74(0x1B19);
    func_800F7270(0x93);
    func_800F8D00(0x1BA5);
    func_800F7210(0x1A65);
    return;
}
