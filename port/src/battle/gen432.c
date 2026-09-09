/* FF4 source-port — interpreted module for func_80144F24.
 * Ground truth: src/func_80144F24.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80144F24(void)
{
    /* battle magic-cast: 8014D528 prep, 80140558/80140310 loops
       (L144F6C wait, L145038 scroll), 8009A0A0/8014202C/8013DC04
       rows, 0x34C4 text. */
    sep();
    label_cur();
    label_cur();
    latch(3);
    func_8014D528();
L144f6c:
    for (;;) {
        gpu_driver_run();
        config_row_8468();
        row_prep(0x20);
        cell_push9();
        sep_b();
        cell_pos_back2(8);
        cell_pull9_hi();
        sep();
        row_prep_close();
        poll_t_cur();
        if (io_just() == 0)
            continue;
        break;
    }
    config_row_8468();
    latch(0x2C);
    func_8009A0A0();
    wnd_open(0x10);
    func_8014202C();
    latch(0x2A);
    func_8009A0A0();
    page_open(0x34C4);
    label_cur();
    func_8013DC04();
    cell_clear_bank(0x38E2);
L145038:
    for (;;) {
        gpu_driver_run();
        config_row_8468();
        row_prep(0x20);
        cell_push9();
        sep_a();
        cell_pos_fwd(8);
        cell_pull9_hi();
        cell_cursor_ret2();
        sep();
        row_prep_close();
        row_close();
        if (cell_flags_pack(0x202) != 0)
            continue;
        break;
    }
    config_row_8468();
    return;
}
