/* FF4 source-port — interpreted module for func_8018C468.
 * Ground truth: src/func_8018C468.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018C468(void)
{
    /* event: 8018B9A8 gate; s4 latch; 8018A75C(2/1/3) + 80197678
       rows; returns at L18C5D8. */
    if (io_just() == 0)
        goto L18C4C0;
    if (func_8018B9A8() == 0)
        goto L18C4C8;
L18C4C0:
    goto L18C5D8;
L18C4C8:
    func_8018A75C(2);
    func_8018A75C();
    func_8018A75C(1);
    func_8018A75C(3);
    func_80197678();
    return;
L18C5D8:
    return;
}
