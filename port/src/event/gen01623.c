/* FF4 source-port — interpreted module for func_8018DAB4.
 * Ground truth: src/func_8018DAB4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018DAB4(void)
{
    /* event: v1/v0 gates; 8018C608(1)/8018E0C8(1) rows then
       L18DB6C: 8018E4B8/8018ABE8 and L18DBDC: 8018E448/8018D1AC/
       8018E2C8/8018A75C(3). */
    /* v1/v0 gates -> L18DB00 / L18DB20 / L18DC40 */
    func_8018C608(1);
    if (io_just() == 0)
        goto L18DB94;
    func_8018E0C8(1);
L18DB94:
    func_8018E4B8();
    func_8018ABE8();
L18DBDC:
    func_8018E448();
    func_8018D1AC();
    func_8018E2C8();
    func_8018A75C(3);
    return;
}
