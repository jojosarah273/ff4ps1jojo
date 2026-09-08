#include "common.h"
void func_80180D64(void)
{
    /* battle anim (twin): v0 spin (L180DBC) then 80194640. */
L180D9C:
L180DBC:
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
}
