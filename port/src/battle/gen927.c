/* FF4 source-port — interpreted module for battle_loop_ef78_d12c_d4_c78_preps.
 * Ground truth: src/battle_loop_ef78_d12c_d4_c78_preps.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_loop_ef78_d12c_d4_c78_preps(void)
{
    /* battle loop: 8013EF78/8013D12C/801444D4/80144C78 preps;
       L1450E8 loop runs 80140558 + 80144C78 + 801449D0; closes with
       8013DC04 + 0x38E2 text. */
    battle_row_d548();
    battle_row_wrap();
    fn_1x444d4();
    battle_cast_flow_windows_e44_d14_r();
    wnd_open(0x40);
L1450e8:
    for (;;) {
        row_open();
        gpu_driver_run();
        page_paint2_cur();
        battle_cast_flow_windows_e44_d14_r();
        battle_magic_confirm_x1813_x1901_t();
        cell_clear_bank();
        row_close();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    page_open(0x34C4);
    label_cur();
    battle_magic_name_flow_x38e2_x4e_g();
    cell_clear_bank(0x38E2);
    return;
}
