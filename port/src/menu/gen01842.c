/* FF4 source-port — interpreted module for func_800F6048.
 * Ground truth: src/func_800F6048.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019ED50;
void cell_dispatch(u8 *p) {
    u8 v = *p + 1;
    *p = v;
    *D_8019ED50 = v;
}
