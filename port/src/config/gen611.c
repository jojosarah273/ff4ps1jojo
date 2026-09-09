/* FF4 source-port — interpreted module for func_8015CC80.
 * Ground truth: src/func_8015CC80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015CC80(void)
{
    /* options save-row: 0xAA window, 0xA9/0x2003 rows, 80153074;
       loop L15CC90 on 54D4(3C3C(0xAB)). */
    open_row(0xAA);
L15cc90:
    for (;;) {
        cell_state(0xA9);
        row_arm2_cur();
        if (func_800F4FAC(0x101) != 0)
            goto L15CD08;
        cell_push_c8_d58(0x2003);
        row_read(0xC0);
        if (sel(2) != 0)
            goto L15CD08;
        row_page(0xAA);
        row_page(0xAD);
        func_80153074();
        cell_put(0xAD);
    L15CD08:
        row_prep(0x20);
        sep_a();
        cell_pos_fwd(0x80);
        sep();
        row_prep_close();
        key_page(0xAA);
        row_page(0xAA);
        if (io_press(cell_state(0xAB)) == 0)
            continue;
        break;
    }
    return;
}
