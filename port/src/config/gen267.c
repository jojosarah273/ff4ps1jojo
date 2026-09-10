/* FF4 source-port — interpreted module for ability_select_screen_x1b91_text_x.
 * Ground truth: src/ability_select_screen_x1b91_text_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_select_screen_x1b91_text_x(void)
{
    /* ability/select screen: 0x1B91 text, 0xE8/0x54/0x55/0x57/0x41
       windows, 80124EAC cursor; loops L1318D0 (5DD4/5C64 scroll),
       L13193C (6B38(0x1B8B)/58BC wait), L1319F4 (80131A2C pick). */
    latch_cur();
    stat_sync();
    txt_set(0x1B91);
    row_prep(0x20);
    cell_pull9_hi(0x1B91);
    row_prep_close();
    row_page(0xE8);
    cell_cur_save54_b();
    txt_cell(0x18);
    cell_set50_from40();
    cell_put(0x54);
    open_row(0x55);
    latch_cur();
    stat_sync();
    txt_cell(0x18);
    cell_tick_half();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x1B91));
    cell_put_hi9(0x57);
L1318d0:
    for (;;) {
        sep_a();
        cell_peek0(cell_state(0x57));
        cell_dec_cell(0x54);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    cell_put_hi9(0x57);
    row_prep_close();
    row_prep_close();
    cell_0xf7248(0x41);
L13193c:
    for (;;) {
        cell_0xf6b38(0x1B8B);
        if (gate(2) != 0)
            goto L13195C;
        cell_0xf6390();
    L13195C:
        cell_0xf6338();
        cell_0xf58bc(5);
        if (io_just() == 0)
            continue;
        break;
    }
    row_prep(0x10);
    txt_set(0x1BBB);
    if (gate(2) != 0)
        goto L1319CC;
    row_prep(0x20);
    row_read2(0x57);
    goto L1319DC;
L1319CC:
    row_prep(0x20);
    row_read2(0x57);
L1319DC:
    cell_put_hi9(0x45);
    row_prep_close();
    latch_cur();
L1319f4:
    for (;;) {
        ability_pick_x1bc6_x1b8b_texts_x43();
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
