#include "common.h"
void func_80188D28(void)
{
    /* battle: 80188AE8(3) gate; a0/v1 + v0/a3 + a1/a3 latch rows. */
    if (func_80188AE8(3) != 0)
        goto L188DD8;
    /* a0/v1 -> L188D6C; v0/a3 -> L188DAC; a1/a3 -> L188DD0 */
    return;
L188DD8:
    return;
}
