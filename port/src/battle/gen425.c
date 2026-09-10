/* FF4 source-port — interpreted module for battle_rows_x20_x21_x31_x24_x26_x8.
 * Ground truth: src/battle_rows_x20_x21_x31_x24_x26_x8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x20_x21_x31_x24_x26_x8(void)
{
    /* battle rows: 0x20/0x21/0x31/0x24/0x26/0x8F/0x91 windows, 0x6FB/
       0x302/0x303/0x90 cells, 8011416C/80174F0C/801140A4/80113C04/
       80113C54; loop L113F5C on 54D4(3C3C(0x90)). */
    cell_fill_aa();
    open_row(0x20);
    open_row(0x21);
L113f5c:
    for (;;) {
        row_prep(0x20);
        row_read2(0x20);
        sep_a();
        cell_pos_fwd(0x100);
        cell_put_hi9(0x18);
        cell_push9(0x6FB);
        cell_put_hi9(0x1A);
        row_sync2_cur();
        row_prep_close();
        fn_1x74f0c();
        row_page(0x31);
        battle_rows_fe634_prep_x70_x22_x21();
        fn_1x13c04();
        row_page(0x31);
        sep_a();
        row_open_w(0x40);
        battle_rows_fe634_prep_x70_x22_x21();
        fn_1x13c54();
        row_page(0x8F);
        io_poll(0xC0);
        if (io_just() == 0)
            goto L11404C;
        row_page(0x7A);
        row_read(2);
        sep_a();
        cell_poke0(cell_state(0x8F));
    L11404C:
        cell_pull_c8(0x302);
        row_page(0x91);
        cell_pull_c8(0x303);
        key_page(0x20);
        row_page(0x20);
        if (io_press(cell_state(0x90)) == 0)
            continue;
        break;
    }
    return;
}
