#include "common.h"
void func_8018DC58(void)
{
    /* event: v0/v1 gate; v1/v0 gate picks 8018CFF8 vs the
       8018DAB4 row. */
    if (func_800F53D4() != 0)
        goto L18DC7C;
    goto L18DCC8;
L18DC7C:
    /* v1/v0 gate -> L18DCAC / 8018CFF8 */
    if (func_800F53D4() == 0)
        goto L18DCAC;
    func_8018CFF8();
    return;
L18DCAC:
    func_8018DAB4();
    return;
L18DCC8:
    return;
}
