/* FF4 source-port — interpreted module for battle_terrain_affinity_screen_x21.
 * Ground truth: src/battle_terrain_affinity_screen_x21.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_terrain_affinity_screen_x21(void)
{
    /* battle terrain/affinity screen: 0x2101/0x2102/0x2100 title rows,
       0x2005/0x2001/0x2003 gates, 0x50/0x4A windows; 8016C280/8016C624
       row draws, 8016C0A8/8016C128 area cells, 8016AACC/8016AA84 and
       8016BE1C/8016B470 commits. */
    cell_clear_bank(0x2101);
    cell_clear_bank(0x2102);
    open_row(0x50);
    txt_set(0x2005);
    row_read(1);
    txt_draw(0x2100);
    txt_set(0x2001);
    row_read(1);
    if (sel(0x202) != 0)
        goto L16C8C0;
    battle_row_render_x74_x76_x70_x72();
    page_paint2(0x2101);
L16C8C0:
    txt_set(0x2003);
    row_read(1);
    if (sel(0x202) != 0)
        goto L16C8F0;
    fn_1x6c624();
    page_paint2(0x2102);
L16C8F0:
    fn_1x6bfe8();
    txt_set(0x2101);
    if (gate(0x202) != 0)
        goto L16C918;
    battle_row_render_x74_x76_x70_x72();
L16C918:
    txt_set(0x2102);
    if (gate(0x202) != 0)
        goto L16C938;
    fn_1x6c624();
L16C938:
    txt_set(0x2007);
    row_read(1);
    if (sel(2) != 0)
        goto L16C970;
    fn_1x6c0a8();
    fn_1x6c128();
    goto L16C980;
L16C970:
    fn_1x6c128();
    fn_1x6c0a8();
L16C980:
    txt_set(0x2100);
    if (gate(0x202) != 0)
        goto L16C9A8;
    fn_1x6aacc();
    goto L16C9B0;
L16C9A8:
    fn_1x6aa84();
L16C9B0:
    fn_1x6b470();
    wnd_open_cur();
    draw_pad_cur();
    shop_rows_f94_b04_reads_x2000_x204();
    wnd_open(2);
    draw_pad_cur();
    shop_rows_f94_b04_reads_x2000_x204();
    txt_set(0x2100);
    cell_push_c8();
    cell_put(0x28);
    row_page(0x4A);
    cell_tick_and(0x28);
    if (sel(0x202) != 0)
        return;
    wnd_open(4);
    draw_pad_cur();
    shop_rows_f94_b04_reads_x2000_x204();
    wnd_open(6);
    draw_pad_cur();
    shop_rows_f94_b04_reads_x2000_x204();
    wnd_open(8);
    draw_pad_cur();
    shop_rows_f94_b04_reads_x2000_x204();
    return;
}
