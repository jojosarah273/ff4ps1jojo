#include "common.h"
void func_8013F124(void)
{
    /* event: 3C3C/3B04/3A70 rows with a2/s0 + a2/a0 spin latches;
       closes 8013EFD8. */
    func_800F3C3C();
    func_800F3B04();
    func_800F5410();
L13f1bc:
    for (;;) {
        func_800F3A70();
        func_800F3B04();
        func_800F3A70();
        func_800F3B04();
        /* a2/s0 + a2/v0 + a2/a0 latch loops */
    }
    func_8013EFD8();
    return;
}
