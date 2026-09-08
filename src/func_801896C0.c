#include "common.h"
void func_801896C0(void)
{
    /* event: 80191838/801928A8/80191858 rows + v0 spin. */
    func_80191838();
    func_801928A8();
    func_80191858();
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    return;
}
