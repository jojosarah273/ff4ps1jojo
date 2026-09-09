/* FF4 source-port — interpreted module for func_80124298.
 * Ground truth: src/func_80124298.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80124298(void)
{
    /* rows: 0xE4 window, 80124EAC cursor, 0x1A67/0x1A68 texts,
       80124358 row; loop L1242A8 on 5574(5). */
    open_row(0xE4);
L1242a8:
    for (;;) {
        row_page(0xE4);
        cell_cur_save54_b();
        row_sel_cell_cur();
        cell_put(0x43);
        cell_fmt2(0x43);
        txt_cell_cur();
        row_read(0x3F);
        cell_put(0x5A);
        cell_pull_c8(0x1A67);
        row_page(0xE4);
        cell_put(0x5B);
        cell_pull_c8(0x1A68);
        txt_cell(1);
        cell_put(0x5C);
        func_80124358();
        key_page(0xE4);
        row_page(0xE4);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
