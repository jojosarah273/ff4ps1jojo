/* FF4 source-port — interpreted module for func_8018CA48.
 * Ground truth: src/func_8018CA48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018CA48(void)
{
    /* event: v0 gate; 8018A9DC/8018AB08 rows. */
    if (io_just() == 0)
        goto L18CA74;
    func_8018A9DC();
    func_8018AB08();
    return;
L18CA74:
    func_8018A9DC();
    func_8018AB08();
    return;
}
