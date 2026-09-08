#include "common.h"
void func_8018E00C(void)
{
    /* event: 8018E2C8/8018E448/8018E4B8 gate; 8018ABE8(1) tail. */
    func_8018E2C8();
    func_8018E448();
    if (func_8018E4B8() == 0)
        goto L18E060;
    func_8018ABE8(1);
L18E060:
    if (func_800F53D4() == 0)
        goto L18E0A0;
L18E0A0:
    return;
}
