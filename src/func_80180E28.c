#include "common.h"
void func_80180E28(void)
{
    /* battle anim (twin): v0 spin (L180E74) then 80194640. */
L180E5C:
L180E74:
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
}
