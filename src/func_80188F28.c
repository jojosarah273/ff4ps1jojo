#include "common.h"
void func_80188F28(void)
{
    /* battle: 80188AE8(3) gate; a1/a3 + a2/a3 + a0/a3 latches. */
    if (func_80188AE8(3) != 0)
        goto L188FC0;
    /* a1/a3 -> L188F7C; a2/a3 -> L188F98; a0/a3 -> L188FB8 */
    return;
L188FC0:
    return;
}
