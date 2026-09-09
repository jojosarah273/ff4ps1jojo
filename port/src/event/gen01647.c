/* FF4 source-port — interpreted module for func_80180BB4.
 * Ground truth: src/func_80180BB4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80180BB4(void)
{
    /* battle anim: 801824D8 spin; 80194640 row. */
    do {
        func_801824D8();
    } while (io_just() != 0);
    func_80194640();
    return;
}
