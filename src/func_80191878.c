#include "common.h"
void func_80191878(void)
{
    /* event: 80190B44(1/2/0) rows on s3/t0 + s0/fp latch loop
       L1918D8. */
    func_80190B44(1);
    if (func_800F53D4() == 0)
        goto L191914;
    if (func_80190B44(2) != 0)
        goto L191968;
L191914:
    func_80190B44();
    if (func_800F53D4() == 0)
        goto L191984;
L191968:
    /* s0/fp latch -> L1918D8 */
    return;
L191984:
    return;
}
