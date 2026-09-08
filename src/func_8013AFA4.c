#include "common.h"
void func_8013AFA4(void)
{
    /* ability rows: 0x16AE-0x16B0 texts with 54D4(3B04) gates;
       8013B04C/8012219C tails. */
    func_800F6564(0x16AE);
    if (func_800F54D4(func_800F3B04(0x16AF)) != 0)
        goto L13B034;
    if (func_800F54D4(func_800F3B04(0x16B0)) != 0)
        goto L13B034;
    func_800F6564(0x16AF);
    if (func_800F54D4(func_800F3B04(0x16B0)) != 0)
        goto L13B034;
    func_800F95A0();
    func_8013B04C();
    return;
L13B034:
    func_8012219C();
    return;
}
