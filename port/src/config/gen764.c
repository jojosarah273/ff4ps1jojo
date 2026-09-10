/* FF4 source-port — interpreted module for ability_rows_ca4_preps_x1baf_text.
 * Ground truth: src/ability_rows_ca4_preps_x1baf_text.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_ca4_preps_x1baf_text(void)
{
    /* ability rows: 80139CA4/80139694 preps, 0x1BAF text, 0x1340/
       0x1440 gates, 80139C0C row; loop L139BD4 on 5574(5). */
    fn_1x39ca4();
    fn_1x39694();
    txt_set(0x1BAF);
    if (gate(2) != 0)
        goto L139B8C;
    txt_cell(0x1340);
    cell_flags_scr();
    goto L139B9C;
L139B8C:
    txt_cell(0x1440);
    cell_flags_scr();
L139B9C:
    if (io_just() != 0)
        return;
    io_poll(0xCE);
    if (io_go() != 0)
        return;
    txt_draw(0x1B39);
    sep();
L139bd4:
    for (;;) {
        fn_1x39c0c();
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
