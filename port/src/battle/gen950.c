/* FF4 source-port — interpreted module for func_8010FAC4.
 * Ground truth: src/func_8010FAC4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010FAC4(void)
{
    /* battle rows: 0x79/0x92 windows, 80115684/8011581C rows; loop
       L10FAD4 on 5574(4). */
    open_row(0x79);
L10fad4:
    for (;;) {
        row_page(0x79);
        sep_a();
        row_open_w(4);
        row_sel_cell_cur();
        func_80115684();
        open_row(0x92);
        func_8011581C();
        key_page(0x79);
        row_page(0x79);
        io_poll(4);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
