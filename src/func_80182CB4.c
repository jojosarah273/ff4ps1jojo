#include "common.h"
void func_80182CB4(void)
{
    /* battle anim: v1/v0 + v0 gates; 80197208 rows. */
    if (func_800F53D4() != 0)
        goto L182D50;
    if (func_800F53D4() != 0)
        goto L182D50;
    /* v0/v1 latch -> L182D50 */
    func_80197208();
    goto L182DCC;
L182D50:
    if (func_800F53D4() != 0)
        goto L182DCC;
    func_80197208();
    return;
L182DCC:
    return;
}
