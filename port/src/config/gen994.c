/* FF4 source-port — interpreted module for options_x38e6_x29b5_texts_x8a_wind.
 * Ground truth: src/options_x38e6_x29b5_texts_x8a_wind.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_x38e6_x29b5_texts_x8a_wind(void)
{
    /* options: 0x38E6/0x29B5 texts, 0x8A window, 8016046C row;
       loop L15FBA4 on 5574(0xFF). */
    page_paint2(0x38E6);
    sep();
L15fba4:
    for (;;) {
        txt_cell(0x29B5);
        io_poll(0xFF);
        if (io_just() != 0)
            goto L15FBD4;
        cell_step();
    }
L15FBD4:
    tail(0x8A);
    latch(1);
    options_ports_x8a_window_x29b5_x29();
    return;
}
