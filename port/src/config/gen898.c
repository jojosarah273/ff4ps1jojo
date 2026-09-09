/* FF4 source-port — interpreted module for func_8012B950.
 * Ground truth: src/func_8012B950.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012B950(void)
{
    /* config rows: 0x1BC3/0x1BC1 texts, 80124EAC/801224D0/
       8012BB68 rows; loop L12B958 on 5574(5). */
L12b958:
    for (;;) {
        txt_set(0x1BC3);
        func_80124EAC();
        txt_set(0x1BC1);
        row_sel_cell_cur();
        func_801224D0();
        row_prep(0x20);
        cell_push9_bank(0x20);
        row_prep_close();
        func_8012BB68();
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
