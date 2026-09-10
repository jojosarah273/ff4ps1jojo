/* FF4 source-port — interpreted module for status_row_x1a71_text_x45_x41_wind.
 * Ground truth: src/status_row_x1a71_text_x45_x41_wind.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void status_row_x1a71_text_x45_x41_wind(void)
{
    /* status row: 0x1A71 text, 0x45/0x41 windows; loop L1256A8 on
       5DD4(0x45)/5C64(0x202). */
    page(0x41);
    row_prep(0x20);
    row_sync2(5);
    cell_put_hi9(0x45);
    cell_fmt2(0x41);
L1256a8:
    for (;;) {
        sep_a();
        cell_peek0(cell_state(0x1A71));
        cell_stamp8_9_b();
        cell_stamp8_9_b();
        cell_stamp8_9_b();
        cell_stamp8_9_b();
        step2();
        step2();
        step2();
        step2();
        cell_step();
        cell_step();
        cell_dec_cell(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    return;
}
