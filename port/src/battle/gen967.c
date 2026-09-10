/* FF4 source-port — interpreted module for battle_rows_row_loop_l140aec_on_a9.
 * Ground truth: src/battle_rows_row_loop_l140aec_on_a9.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_row_loop_l140aec_on_a9(void)
{
    /* battle rows: 80147414 row; loop L140AEC on 5A90(5) with
       0x2001/0xF cells; closes via 0x971C. */
    sep();
L140aec:
    for (;;) {
        func_80147414();
        txt_cell(0x2001);
        row_read(0xF);
        io_poll(0xB);
        if (io_just() != 0)
            goto L140B90;
        step2();
        poll_t(5);
        if (io_just() == 0)
            continue;
        sep();
        return;
    }
L140B90:
    return;
}
