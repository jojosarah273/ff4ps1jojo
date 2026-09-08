#include "common.h"
void func_801919B4(void)
{
    /* event (twin): 80190B44(1/2/0) rows on s2/fp + s0/s7 latch. */
    func_80190B44(1);
    if (func_800F53D4() == 0)
        goto L191A48;
    if (func_80190B44(2) != 0)
        goto L191A9C;
L191A48:
    func_80190B44();
    if (func_800F53D4() == 0)
        goto L191AB8;
L191A9C:
    /* s0/s7 latch -> L191A14 */
    return;
L191AB8:
    return;
}
