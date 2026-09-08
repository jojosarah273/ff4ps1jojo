#include "common.h"
void func_8010B010(void)
{
    /* battle: 3C3C/3B04/3B9C gates; wide v0 + a3/v0 gate tree
       (L10B084..L10B454) around the 8010B5DC row loop L10B2A8;
       v0/v1 latch loops close at L10B5BC. */
    func_800F3C3C();
    func_800F3B04();
    func_800F3B9C();
    /* L10B084: v0 + a3/v0 gates -> L10B0D4/L10B244/L10B454 */
    if (func_800F53D4() == 0)
        goto L10B454;
    goto L10B244;
L10B148:
    for (;;) {
        /* v0 gates -> L10B414 / L10B374 / L10B410 */
        func_8010B5DC();
        if (func_800F53D4() != 0)
            goto L10B414;
        if (func_800F53D4() != 0)
            goto L10B374;
        goto L10B410;
    }
L10B414:
    if (func_800F53D4() == 0)
        goto L10B438;
    goto L10B2A8;
L10B454:
    for (;;) {
        /* v0/v1 latch -> L10B084 */
        /* L10B538 spin */
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    return;
L10B438:
    return;
L10B374:
    goto L10B410;
L10B410:
    goto L10B414;
L10B244:
    goto L10B148;
L10B2A8:
    if (func_800F53D4() != 0)
        goto L10B148;
    goto L10B414;
L10B5BC:
    return;
}
