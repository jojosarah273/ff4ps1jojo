/* FF4 source-port — interpreted module for battle_magic_list_x34c4_intro_x65.
 * Ground truth: src/battle_magic_list_x34c4_intro_x65.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_magic_list_x34c4_intro_x65(void)
{
    /* battle magic list: 0x34C4 intro, 0x65/0x2 windows, 8014D528 +
       801409BC sub-renders, then the L13D2CC loop pulling 80140558/
       8013D428/80149374 and the 8013D4C8/8013D3B0 draw pair; exits via
       8014D728 on 53C0 hold. */
    txt_set(0x34C4);
    txt_draw_cur();
    latch(0x65);
    battle_row_d568();
    fn_1x409bc();
    latch(2);
    txt_draw_cur();
    battle_row_wrap();
    sep();
    txt_draw_cur();
    latch(0x80);
    txt_draw_cur();
    latch(0x28);
    txt_draw_cur();
    txt_draw_cur();
    txt_set(0x48);
    row_sel_cell_cur();
    latch(0x48);
    txt_draw_cur();
    txt_set(0x34C2);
    if (gate(0x80) != 0)
        goto L13D264;
    cell_clear_bank();
    txt_cell_cur();
    txt_draw_cur();
    txt_cell_cur();
    sep_b();
    cell_pos_back(8);
    txt_draw_cur();
    cell_clear_bank();
    goto L13D2B4;
L13D264:
    latch(0x40);
    txt_draw_cur();
    txt_cell_cur();
    txt_draw_cur();
    txt_cell_cur();
    sep_b();
    cell_pos_back(0xC);
    txt_draw_cur();
    latch(0xF8);
    txt_draw_cur();
L13D2B4:
    latch(8);
    txt_draw_cur();
    func_801490AC();
L13d2cc:
    for (;;) {
        gpu_driver_run();
        fn_1x3d428();
        func_80149374();
        if (io_go() != 0)
            goto L13D390;
        txt_set_cur();
        cell_put_cur();
        txt_set_cur();
        cell_put(2);
        sep();
        row_sync();
        latch(0x84);
        battle_rows_twin_of_d040_x342_x341();
        draw_pad(0xC);
        row_close();
        latch(0x84);
        fn_1x3d3b0();
        draw_pad(0x18);
        wnd_open(1);
        latch(0x84);
        fn_1x3d3b0();
    }
L13D390:
    func_8014D728();
    cell_clear_bank();
    return;
}
