/* FF4 source-port — interpreted module for func_8015ABEC.
 * Ground truth: src/func_8015ABEC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015ABEC(void)
{
    /* options: 3C3C/3B04(0x2000) + 8015236C/8015254C rows. */
    cell_state_of();
    cell_state(0x2000);
    func_8015236C();
    func_8015254C();
    return;
}
