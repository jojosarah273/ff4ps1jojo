#include "common.h"
void func_8018CAD8(void)
{
    /* event: v0/s0 + s1/s0 latches; 80197688 spin rows. */
    if (func_80197688() != 0)
        goto L18CB18;
    /* v0/s0 latch -> L18CB68 */
    for (;;) {
        func_80197688();
        if (func_800F53D4() == 0)
            goto L18CB38;
        break;
    }
    return;
L18CB18:
    /* s1/s0 latch -> L18CB58 */
    func_80197688();
    return;
L18CB38:
    if (func_800F53D4() != 0)
        goto L18CB60;
    func_80197688();
    return;
L18CB58:
    func_80197688();
    return;
L18CB60:
    return;
L18CB68:
    return;
}
