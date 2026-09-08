#include "common.h"
void func_80182E54(void)
{
    /* battle anim: v0 + t0/v0 gates; 801971A8(1)/80197208 tail. */
    if (func_800F53D4() == 0)
        goto L182F0C;
    goto L182FA4;
L182F0C:
    /* t0/v0 latch -> L182FC4 / L182FD0 */
L182FA4:
    func_801971A8(1);
    func_80197208();
    return;
L182FC4:
    goto L182FA4;
}
