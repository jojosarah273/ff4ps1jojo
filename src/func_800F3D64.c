#include "common.h"
void func_800F3D64(void)
{
    /* battle: 3B9C x2 gates; spin loop L800F3DF0. */
    func_800F3B9C();
    func_800F3B9C();
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    return;
}
