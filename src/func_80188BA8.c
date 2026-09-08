#include "common.h"
void func_80188BA8(void)
{
    /* battle: 80188AE8(2) gate; a0/t0 + a3/t0 latch rows. */
    if (func_80188AE8(2) != 0)
        goto L188C40;
    /* a0/t0 latch -> L188C04; a3/t0 latch -> L188C38 */
    return;
L188C40:
    return;
}
