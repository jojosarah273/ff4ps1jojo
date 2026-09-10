/* FF4 source-port — interpreted module for fn_1x5a5b8.
 * Ground truth: src/fn_1x5a5b8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x5a5b8(void)
{
    u8 *s = (u8 *)cell_state(0);
    s[0xA9] = 0;
    s[0xAA] = 0;
    if (*(u8 *)cell_state(0x3558) != 0)
        s[0xA9] = 1;
    options_rows_b();
    options_cursor_cells();
}
