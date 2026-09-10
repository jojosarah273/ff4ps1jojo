/* FF4 source-port — interpreted module for fn_1x6ca94.
 * Ground truth: src/fn_1x6ca94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x6ca94(void)
{
    row_prep(0x30);
    cell_cursor_ret2();
    row_open();
    row_sync();
    row_open2();
    row_open3();
    wnd_open_cur();
    row_open();
    cell_cursor_read();
    sep();
    row_prep_close();
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    row_page(0x40);
    if (gate(2) == 0)
        goto Lfac;
    key_page(0x40);
    txt_set(0x3303);
    cell_pull_c8_lo(0x2100);
    row_page(0xA0);
    cell_pull_c8_lo(0x211A);
    txt_set(0x7D28);
    cell_pull_c8_lo(0x212C);
    row_page(0x64);
    io_poll(1);
    if (io_just() != 0)
        goto Ld48;
    row_page(0x4A);
    row_read(3);
    if (sel(2) == 0)
        goto Le68;
    row_page(0x66);
    row_page(0x67);
    row_page(0x8C);
    cell_pull_c8_lo(0x211F);
    row_page(0x8D);
    cell_pull_c8_lo(0x211F);
    row_page(0x8E);
    cell_pull_c8_lo(0x2120);
    row_page(0x8F);
    cell_pull_c8_lo(0x2120);
    txt_set(0x7D1F);
    if (gate(0x202) != 0)
        goto Le68;
    row_page(0x64);
    if (gate(2) != 0)
        goto Lcd8;
    row_prep(0x20);
    row_read2(0x66);
    row_done2();
    cell_flags_cmp3(0x400);
    if (io_just() == 0)
        goto Ld10;
    sep();
    goto Ld10;
Lcd8:
    row_prep(0x20);
    row_read2(0x66);
    row_done2();
    cell_flags_cmp3(0x400);
    if (io_just() == 0)
        goto Ld10;
    row_scan_cur();
Ld10:
    cell_put_hi9(0x66);
    sep_a();
    cell_pos_fwd(0x80);
    cell_put_hi9(0x8E);
    sep();
    row_prep_close();
    goto Le68;
Ld48:
    txt_set(0x61);
    cell_pull_c8_lo(0x211B);
    txt_set(0x62);
    cell_pull_c8_lo(0x211B);
    txt_set(0x61);
    cell_pull_c8_lo(0x211E);
    txt_set(0x62);
    cell_pull_c8_lo(0x211E);
    row_page(0x5D);
    row_page(0x5E);
    row_page(0x5F);
    row_page(0x60);
    row_page(0x8C);
    cell_pull_c8_lo(0x211F);
    row_page(0x8D);
    cell_pull_c8_lo(0x211F);
    row_page(0x8E);
    cell_pull_c8_lo(0x2120);
    row_page(0x8F);
    cell_pull_c8_lo(0x2120);
Le68:
    fn_1x6bd2c();
    row_page(0x64);
    io_poll(2);
    if (io_just() == 0)
        goto Lea8;
    global_stats_screen_x7d1f_gate_x4a();
    monster_status_run();
    goto Lf24;
Lea8:
    shop_row_x4a_x57_windows_x400_x28();
    battle_anim_d8_spin_loops_l181500();
    battle_prep_x118_x_xf0_bytes_at_bu();
    shop_status_x4a_window_x2203_x22c1();
    battle_terrain_affinity_screen_x21();
    row_page(0x64);
    if (gate(2) != 0)
        goto Lf24;
    page_open(0x2004);
    poll_t(0xFF80);
    if (io_just() == 0)
        goto Lf24;
    latch(1);
    txt_draw(0x5B);
Lf24:
    txt_set(0x5B);
    if (gate(2) != 0)
        goto Lf74;
    row_page(0x4A);
    row_read(3);
    if (sel(0x202) != 0)
        goto Lf74;
    wnd_open(0xA);
    draw_pad(1);
    shop_rows_f94_b04_reads_x2000_x204();
Lf74:
    txt_set(0x7D25);
    if (gate(2) != 0)
        goto Lf94;
    shop_memory_x7d21_gate_x2121_x2123();
Lf94:
    open_row(0x40);
    open_row(0x41);
    key_page(0x4A);
Lfac:
    row_prep(0x30);
    cell_cursor_read();
    row_pad();
    row_done();
    row_close();
    cell_cursor_adv2();
    return;
}
