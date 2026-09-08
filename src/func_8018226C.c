#include "common.h"
void func_8018226C(void)
{
    /* battle anim: v0 gate tree with spin loops L1822D4/L1822EC
       around the single 80194640 row (L182388); returns L1823D0. */
    /* L1822F8: v0 gates -> L1822EC / L1822D4 */
    if (func_800F53D4() != 0)
        goto L182388;
    /* v0 gate -> L1823D0 */
    goto L1823D0;
L182350:
    goto L182388;
L182364:
    goto L1823B0;
L182388:
    func_80194640();
L1823B0:
    /* v0 gates -> L182364 / L182350 */
    goto L1823B0;
L1823D0:
    return;
}
