/* FF4 source-port — interpreted module for option_mark_54.
 * Ground truth: src/option_mark_54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void option_mark_54(void)
{
    u16 v = *D_8019ED54;
    cell_tick_or(cell_peek_v(0x13FEFE, v) + v);
}
