/* FF4 source-port — interpreted module for func_80190098.
 * Ground truth: src/func_80190098.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80190098(void)
{
    /* event dispatcher: gate tree with jr-$v0 sub-dispatch at
       L1902CC; 2x 8018F0C8 poll rows; a0/a2 + v1/a2 spin latches;
       returns at L1905E8. */
    /* v0 gates -> L1900FC/L190114/L190158/L190180/L1901E8/L19024C */
    /* v1/v0 gate -> L1901E8: 2x 8018F0C8 rows */
    func_8018F0C8();
    if (io_just() != 0)
        goto L1902CC;
    func_8018F0C8();
L1902CC:
    /* jr $v0 sub-dispatch; a0=7 spins L190328/L190394/L1903DC/
       L190428/L19048C; s0 latch L19045C */
    return;
L1905E8:
    return;
}
