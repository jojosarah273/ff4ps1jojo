#include "common.h"
void func_801808D8(void)
{
    /* battle anim: fp regcmp spin loops; 801824D8 gates route
       801805F8; 80194640 closes via L180A60. */
    /* L180958/L1809F8 fp latches, spin loops L1809D4/L180A30 */
    if (func_801824D8() != 0)
        goto L180AA4;
    func_801805F8();
L180B5C:
    func_80194640();
    return;
L180AA4:
    /* gates -> L180ACC / L180B04 */
    goto L180B04;
L180ACC:
    goto L180B04;
L180B04:
    if (func_801824D8() != 0)
        goto L180AA4;
    func_801805F8();
    goto L180B5C;
}
