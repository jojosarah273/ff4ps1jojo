#include "common.h"
void func_80179FBC(void)
{
    /* battle anim: v0/v1 gate tree; 80197208 row at L17A17C. */
    if (func_800F53D4() != 0)
        goto L17A0A0;
    goto L17A1D8;
L17A0A0:
    if (func_800F53D4() == 0)
        goto L17A1D8;
    /* v0/v1 latch -> L17A198; v0 gates -> L17A148/L17A17C */
L17A148:
    if (func_800F53D4() == 0)
        goto L17A174;
    func_80197208();
    return;
L17A174:
    func_80197208();
L17A198:
    /* v0/v1 latch loop -> L17A0D4 */
    return;
L17A1D8:
    return;
}
