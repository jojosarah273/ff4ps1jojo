/* FF4 source-port — interpreted module for cell_0xf5b2c.
 * Ground truth: src/cell_0xf5b2c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019ED50;
void cell_0xf5b2c(u8 *p) {
    u8 v = *p - 1;
    *p = v;
    *D_8019ED50 = v;
}
