/* FF4 source-port — interpreted module for func_8011CC98.
 * Ground truth: src/func_8011CC98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011CC98(void)
{
    /* shop rows: 0x3D/0x18/0x19 windows, 5024 cells + ADB/B1B texts;
       loop L11CCAC on 5A90(0x40). */
    draw_pad_cur();
L11ccac:
    for (;;) {
        page(0x3D);
        func_800F6C68();
        cell_put(0x18);
        open_row(0x19);
        row_prep(0x20);
        func_800F5024(cell_state(0x18));
        page(0x18);
        func_800F6CF4();
        func_800F6CF4();
        func_800F6CF4();
        func_800F6CF4();
        func_800F89D4(0xADB);
        func_800F89D4(0xADD);
        func_800F89D4(0xB1B);
        func_800F89D4(0xB1D);
        row_sync2_cur();
        row_prep_close();
        key_page(0x3D);
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
