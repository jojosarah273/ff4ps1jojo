#include "common.h"
void func_80188DE8(void)
{
    /* battle: 80188AE8(3) gate; a0/v1 + v0/a3 + a1/a3 latch rows. */
    if (func_80188AE8(3) != 0)
        goto L188E98;
    /* a0/v1 -> L188E2C; v0/a3 -> L188E6C; a1/a3 -> L188E90 */
    return;
L188E98:
    return;
}
