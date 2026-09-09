/* FF4 source-port — interpreted module for func_80189F9C.
 * Ground truth: src/func_80189F9C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80189F9C(void)
{
    /* event: 801975E8 prep + 801774B4 loop L189FAC. */
    do {
        func_801975E8();
        func_801774B4();
    } while (io_just() != 0);
    return;
}
