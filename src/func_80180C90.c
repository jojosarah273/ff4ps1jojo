#include "common.h"
void func_80180C90(void)
{
    /* battle anim (twin): v0 spin (L180CE8) then 80194640. */
L180CC8:
L180CE8:
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
}
