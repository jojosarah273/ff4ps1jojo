/* FF4 source-port — interpreted module for status_panel_loop_renders_stat_pan.
 * Ground truth: src/status_panel_loop_renders_stat_pan.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void status_panel_loop_renders_stat_pan(void)
{
    /* status/panel loop: renders stat panels (971C/9660(0x20)/9644
       window-op triples) each iteration; a0/v1 regcmp gates pick the
       two-pass vs one-pass panel variant, and the s4/v0 latch at L57EEC
       re-iterates while the gate holds. */
    cell_state_of();
    cell_state(0x2000);
    cell_state(0x20);
    row_prep_cur();
L57b44:
    for (;;) {
        /* a0/v1 gates -> L57B88 (two-pass) / L57C98 / L57CB8 routes */
        sep();
        row_prep_close();
        row_prep_cur();
        sep();
        row_prep_close();
        row_prep_cur();
        /* L57CB8 (one-pass variant) + regcmp a0/v1 -> L57E00 */
        sep();
        row_prep_close();
        row_prep_cur();
        row_open();
        row_close();
        /* L57E00/L57E74 one-pass tail */
        sep();
        row_prep_close();
        row_prep_cur();
        /* L57EEC: s4/v0 latch -> loop; else exit */
        sep();
        row_prep_close();
        return;
    }
}
