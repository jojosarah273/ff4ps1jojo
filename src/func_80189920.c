#include "common.h"
void func_80189920(void)
{
    /* event: v0 gate; 8018AE28 + t0/v0 latch + 8018C9B8; 8018CA48
       tail. */
    if (func_800F53D4() != 0)
        goto L1899D8;
    func_8018AE28();
    /* t0/v0 latch -> L189A24 */
    func_8018C9B8();
    return;
L1899D8:
    if (func_800F53D4() != 0)
        goto L189A10;
L189A10:
    func_8018CA48();
    return;
L189A24:
    return;
}
