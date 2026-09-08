#include "common.h"
void func_801890E4(void)
{
    /* battle: 80188AE8(4) gate; 80188D28 + a1/a0 latch. */
    if (func_80188AE8(4) != 0)
        goto L189178;
    func_80188D28();
    /* a1/a0 latch -> L189170 */
    return;
L189178:
    return;
}
