#include "common.h"
void func_80145EA4(void)
{
    /* battle rows: 3C3C/3B04/3B9C + 0x1000 gates with spin loops
       (L145F60); closes via 960C/95A0 on the a1/v0 latch. */
    func_800F3C3C();
    func_800F3B04();
    func_800F3B9C();
    if (func_800F3B04(0x1000) == 0)
        goto L145F90;
    func_800F9330();
    func_800F939C();
    func_800F971C();
    func_800F939C();
    if (func_800F54D4(1) != 0)
        goto L145F90;
    if (func_800F54D4(1) != 0)
        goto L145F90;
L145f60:
    for (;;) {
        if (func_800F54D4(1) != 0)
            break;
    }
L145F90:
    func_800F960C();
    /* a1/v0 latch -> L145FF4 */
    func_800F960C();
    func_800F95A0();
    return;
}
