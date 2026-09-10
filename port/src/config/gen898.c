/* FF4 source-port — interpreted module for config_rows_x1bc3_x1bc1_texts_eac.
 * Ground truth: src/config_rows_x1bc3_x1bc1_texts_eac.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_rows_x1bc3_x1bc1_texts_eac(void)
{
    /* config rows: 0x1BC3/0x1BC1 texts, 80124EAC/801224D0/
       8012BB68 rows; loop L12B958 on 5574(5). */
L12b958:
    for (;;) {
        txt_set(0x1BC3);
        cell_cur_save54_b();
        txt_set(0x1BC1);
        row_sel_cell_cur();
        battle_put43();
        row_prep(0x20);
        cell_push9_bank(0x20);
        row_prep_close();
        fn_1x2bb68();
        page_paint2(0x1BC1);
        page_paint2(0x1BC3);
        txt_set(0x1BC3);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
