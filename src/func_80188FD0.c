#include "common.h"
void func_80188FD0(void)
{
    /* battle: 80188AE8(3) gate; v1/a3 + s0/v0 + a1/a3 + a0/v0
       latch rows. */
    if (func_80188AE8(3) != 0)
        goto L1890D4;
    /* v1/a3 -> L189014; s0/v0 -> L189074; a1/a3 -> L189060;
       a0/v0 -> L1890CC */
    return;
L1890D4:
    return;
}
