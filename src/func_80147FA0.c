#include "common.h"
void func_80147FA0(void)
{
    /* battle: 3C3C/3B04/3B9C(0x2000) gates; 2x 800728AC rows and the
       s0/v1 regcmp loops with 9330/95A0 closes. */
    func_800F3C3C();
    func_800F3B04();
    func_800F3B9C();
    if (func_800F3B04(0x2000) == 0)
        goto L14802C;
    /* s0/v0 gate -> L14802C */
    func_800F9330();
L14802C:
    func_800728AC();
    func_800728AC();
    /* v1/v0 gates -> L1480A4 / L1480AC / L1480DC loop */
    func_800F9330();
    /* s0/v1 latch -> L148164 / L148174 */
    func_800F95A0();
    /* L1481C4 -> L148264: s0/v1 latch -> L1480DC */
    func_800F95A0();
    return;
}
