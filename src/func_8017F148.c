#include "common.h"
void func_8017F148(void)
{
    /* battle anim: wide v0 gate ladder (L17F1EC..L17F398 spins),
       L17F25C main loop; closes with 2x 80194640. */
    /* v0 gates -> L17F1E8/L17F1EC/L17F1DC */
    for (;;) {
        /* L17F2E4..L17F398 spin run */
    }
L17F4A4:
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
L17F508:
    for (;;) {
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    func_80194640();
    func_80194640();
    return;
}
