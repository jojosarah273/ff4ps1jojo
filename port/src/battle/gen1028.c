/* FF4 source-port — interpreted module for battle_rows_300.
 * Ground truth: src/battle_rows_300.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_300(void)
{
    /* battle rows: 0x300/0x7A cells, 801714C4 picker; loop L1158A4
       on 4248(0xF)/4120(0x202). */
    cell_peek_cur();
    cell_state_of();
    cell_state(0x7A);
    row_page_cur();
L1158a4:
    for (;;) {
        if (sel(2) != 0)
            goto L115910;
        latch_cur();
        shop_picker_7();
    L115910:
        row_read(0xF);
        if (sel(0x202) != 0)
            continue;
        break;
    }
    return;
}
