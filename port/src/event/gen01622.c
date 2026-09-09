/* FF4 source-port — interpreted module for func_8018E00C.
 * Ground truth: src/func_8018E00C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018E00C(void)
{
    /* event: 8018E2C8/8018E448/8018E4B8 gate; 8018ABE8(1) tail. */
    func_8018E2C8();
    func_8018E448();
    if (func_8018E4B8() == 0)
        goto L18E060;
    func_8018ABE8(1);
L18E060:
    if (io_just() == 0)
        goto L18E0A0;
L18E0A0:
    return;
}
