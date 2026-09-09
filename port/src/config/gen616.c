/* FF4 source-port — interpreted module for func_80126BB8.
 * Ground truth: src/func_80126BB8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126BB8(void)
{
    /* ability main: 1B9A text gate + 1BE4/1A5F/1A3C rows; calls
       80126E08 (sub-dispatcher); loop L126BE4 on 6EA9C/56AC(!=0)
       with 80128480/80128B3C/801793F8/80128264/8011F864 rows. */
    row_open2();
    row_open3();
    func_80178BB4();
L126be4:
    for (;;) {
        func_8016EA9C();
        latch(0x7E);
        cell_cursor_dec();
        row_pad();
        cell_clear_bank(0x1B9A);
        wnd_open(0x1BE4);
        if (cell_flags_cmp(cell_state(0x1A5F)) != 0)
            goto L126C54;
        label(0x1A5F);
        cell_clear_bank(0x1A3C);
        func_80128264();
        func_8011F864();
    L126C54:
        func_80128480();
        func_80128B3C();
        func_801793F8();
        /* v1/v0 gate -> L126C88 */
        cell_clear_bank(0x1A3C);
        /* v1/v0 gate -> L126CA4 */
        func_800FF0AC();
        func_80128480();
        func_80128B3C();
        if (io_go() != 0)
            goto L126D00;
        func_80126E08();
        /* v1/v0 gate -> L126CF8 */
        battle_row_88();
        func_80178BB4();
        continue;
        func_80126D48();
    L126D00:
        func_80122114();
        sep();
        stat_sync();
        cell_push_c8_cur(0x17FB);
        cell_cursor_read();
        row_pad();
        return;
    }
    func_80126D48();
    return;
}
