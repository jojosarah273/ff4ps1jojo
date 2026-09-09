/* FF4 source-port — interpreted module for func_8015084C.
 * Ground truth: src/func_8015084C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015084C(void)
{
    /* battle splash: 80194394/801928E8/801942FC/801506BC preps; loop
       L15089C renders 0x2100/0x420C/0x420B icons and closes via
       80150C58; redraws on return. */
    cb_slot15();
    func_801928E8();
    func_801942FC();
    func_801506BC(8);
L15089c:
    for (;;) {
        row_prep(0x30);
        row_open2();
        row_open3();
        cell_cursor_ret2();
        row_open();
        row_sync();
        row_sync2_cur();
        row_prep_close();
        row_prep(0x10);
        func_80150C58();
        latch_cur();
        cell_pull_c8_lo(0x2100);
        cell_pull_c8_lo(0x420C);
        cell_pull_c8_lo(0x420B);
        cell_pull_c8_lo(0x4200);
        row_prep(0x30);
        row_done();
        row_close();
        cell_cursor_adv2();
        cell_cursor_read();
        row_pad();
        cb_slot15();
        func_801928E8();
        func_801942FC();
        func_801506BC();
        break;
    }
    return;
}
