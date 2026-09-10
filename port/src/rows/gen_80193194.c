/* FF4 source-port — interpreted module for clear_a1_u32_cells_countdown_from.
 * Ground truth: src/clear_a1_u32_cells_countdown_from.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void clear_a1_u32_cells_countdown_from(u32 *a0, s32 a1)
{
    /* clear a1 u32 cells (countdown from a1-1 to -1). */
    s32 v0 = a1 - 1;
    if (a1 != 0) {
        do {
            *a0++ = 0;
        } while (--v0 != -1);
    }
}
