/* FF4 source-port — interpreted module for fn_1x38788.
 * Ground truth: src/fn_1x38788.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x38788(void)
{
    row_prep(32);
    row_sync2(2047);
    wnd_open(62976);
    draw_pad(4096);
    battle_wait_just(32382);
    row_prep_close();
    ability_bank_select_d_8019ee56_d_8();
}
