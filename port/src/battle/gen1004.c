/* FF4 source-port — interpreted module for battle_loop_ef78_d12c_a0_c78_c_pre.
 * Ground truth: src/battle_loop_ef78_d12c_a0_c78_c_pre.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_loop_ef78_d12c_a0_c78_c_pre(void)
{
    /* battle loop: 8013EF78/8013D12C/801449A0/80144C78/8014086C
       preps; L1451A0 loop runs 80140558 + 80144C78 + 801449D0 +
       8014D43C; exits via 8014D414. */
    battle_row_d548();
    battle_row_wrap();
    fn_1x449a0();
    battle_cast_flow_windows_e44_d14_r();
    fn_1x4086c();
    wnd_open(0x80);
L1451a0:
    for (;;) {
        row_open();
        gpu_driver_run();
        page_paint2_cur();
        battle_cast_flow_windows_e44_d14_r();
        battle_magic_confirm_x1813_x1901_t();
        cell_clear_bank();
        func_8014D43C();
        row_close();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    battle_row_wrap();
    cell_clear_bank();
    fn_1x4d414();
    return;
}
