#include "common.h"
void func_80181498(void)
{
    /* battle anim: 801824D8 spin loops (L181500/L181578), 80194640
       closes. */
    do {
        func_801824D8();
    } while (func_800F53D4() != 0);
    for (;;) {
        if (func_800F53D4() != 0)
            goto L181578;
        break;
    }
    func_80194640();
    return;
L181578:
    do {
        func_801824D8();
    } while (func_800F53D4() != 0);
    func_80194640();
    return;
}
