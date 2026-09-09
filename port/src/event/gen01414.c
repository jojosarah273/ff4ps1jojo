/* FF4 source-port — interpreted module for func_8018B4C8.
 * Ground truth: src/func_8018B4C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018B4C8(void)
{
    /* event: v0 + v1/a0 latch loop; 8018B1C8 tail. */
    for (;;) {
        if (io_just() != 0)
            goto L18B52C;
        /* v1/a0 latch -> L18B520 */
        if (io_just() != 0)
            continue;
        break;
    }
L18B52C:
    func_8018B1C8();
    return;
}
