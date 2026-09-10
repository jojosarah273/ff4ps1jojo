/* FF4 source-port — interpreted module for func_801450B8.
 * Ground truth: src/func_801450B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801450B8(void)
{
    /* battle loop: 8013EF78/8013D12C/801444D4/80144C78 preps;
       L1450E8 loop runs 80140558 + 80144C78 + 801449D0; closes with
       8013DC04 + 0x38E2 text. */
    battle_row_d548();
    battle_row_wrap();
    func_801444D4();
    func_80144C78();
    wnd_open(0x40);
L1450e8:
    for (;;) {
        row_open();
        gpu_driver_run();
        page_paint2_cur();
        func_80144C78();
        func_801449D0();
        cell_clear_bank();
        row_close();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    page_open(0x34C4);
    label_cur();
    func_8013DC04();
    cell_clear_bank(0x38E2);
    return;
}
