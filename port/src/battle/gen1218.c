/* FF4 source-port — interpreted module for func_8014EAE4.
 * Ground truth: src/func_8014EAE4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014EAE4(void)
{
    txt_set_cur();
    if (gate(2) == 0) {
        sep_a();
        row_open_w(0x10);
    }
    /* jr $a0 : the 9-entry battle item-cast table. Each entry calls one
       effect then jumps to L14EC08 (return). Handlers in index order:
       8014ED40, 8014EC98, 8014EC68, 8014EC18, 8014ED10, 8014ECC8,
       8014EDD0, 8014ED88, 8014ED40 ... */
    return;
}
