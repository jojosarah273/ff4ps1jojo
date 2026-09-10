/* FF4 source-port — interpreted module for fn_1x26830.
 * Ground truth: src/fn_1x26830.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x26830(void)
{
    row_prep(32);
    row_sync2(255);
    wnd_open(41472);
    draw_pad(40960);
    battle_wait_just(32382);
    row_prep_close();
}
