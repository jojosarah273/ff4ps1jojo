/* FF4 source-port — interpreted module for func_8018A9DC.
 * Ground truth: src/func_8018A9DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018A9DC(void)
{
    /* event: v0 gate picks 8018A75C(2/1/3) vs 8018A438 row. */
    if (io_just() != 0)
        goto L18AA3C;
    event_drive(2);
    event_drive();
    event_drive(1);
    event_drive(3);
    return;
L18AA3C:
    func_8018A438();
    return;
L18AA4C:
    return;
}
