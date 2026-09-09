/* FF4 source-port — interpreted module for func_80160C2C.
 * Ground truth: src/func_80160C2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80160C2C(void)
{
    /* options help: 0x2770 gate, 0x2707/0x2709/0x359A/0x359D texts,
       0x2710/0x2715 gates, 0xA9 window; 8015329C row; loop L160D3C
       (76BC(3C3C(0xA9))/7728(0x101)). */
    txt_set(0x2770);
    if (gate_cur() == 0)
        goto L160DE8;
    row_prep(0x20);
    cell_push9();
    cell_pull9_hi(0x2707);
    cell_push9();
    cell_pull9_hi(0x2709);
    sep();
    row_prep_close();
    cell_clear_bank(0x359C);
    cell_clear_bank(0x359F);
    txt_set(0x2720);
    cell_tick_and2(0x2725);
    cell_tick_and2(0x2720);
    row_read(0x3F);
    cell_put(0xA9);
    if (sel(0x202) != 0)
        goto L160CFC;
    latch(0x14);
    txt_draw(0x34CB);
    goto L160DB0;
L160CFC:
    sep();
L160d3c:
    for (;;) {
        cell_word_half(cell_state(0xA9));
        if (cell_flags_nz50(0x101) != 0)
            goto L160D90;
        sep_a();
        row_open_w(0x15);
        cell_draw(0x34CB);
        cell_step();
    L160D90:
        step2();
        poll_t(6);
        if (io_just() == 0)
            continue;
        break;
    }
L160DB0:
    config_row_5329c();
    latch(0x1E);
    txt_draw(0x34CA);
    latch(0x14);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    return;
L160DE8:
    return;
}
