#include "common.h"
void func_80185380(void)
{
    /* battle anim: 80197248 gates (v0 spin L1853AC); v1/a0 latch
       rows; returns at L18548C. */
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_80197248();
    /* v1/a0 latch -> L18547C; v1/v0 gate -> L185480 */
    func_80197248();
    return;
L18547C:
    func_80197248();
    return;
L185480:
    func_80197248();
    return;
}
