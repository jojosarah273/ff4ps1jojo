/* FF4 source-port — interpreted module for func_80182AF0.
 * Ground truth: src/func_80182AF0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80182AF0(void)
{
    /* battle anim: v0 + v1/v0 gate tree; 801825B8/801826C8 rows
       via L182C74. */
    if (io_just() != 0)
        goto L182B60;
    if (io_just() != 0)
        goto L182B60;
L182B60:
    /* v1/v0 gates -> L182BE0 / L182B88 / L182B9C / L182C74 */
    func_801825B8();
    func_801826C8();
    return;
L182C74:
    return;
}
