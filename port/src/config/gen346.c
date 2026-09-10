/* FF4 source-port — interpreted module for ability_party_screen_x1a88_x1bb4_x.
 * Ground truth: src/ability_party_screen_x1a88_x1bb4_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_party_screen_x1a88_x1bb4_x(void)
{
    /* ability/party screen: 0x1A88/0x1BB4/0x1BB0-0x1BB5 texts,
       sub-dispatchers 8012E844/80120070 and stat rows 80126070/
       80126528/8012B168/8012B0D8; loops at L138D38. */
    fn_1x39afc();
L138d38:
    for (;;) {
        midrow_paint_b();
        txt_set(0x1A88);
        if (gate(2) != 0)
            goto L138D9C;
        txt_set(0x1A02);
        if (gate(0x202) != 0)
            goto L138D9C;
        draw_pad_cur();
        goto L138DA8;
    L138D9C:
        draw_pad_cur();
    L138DA8:
        battle_rows_29();
        cell_clear_bank(0x1A88);
        config_row_26528();
        latch(0x17);
        cell_pull_c8_lo(0x212C);
        cell_flags_clr4();
        txt_set(0x1BAF);
        if (gate(2) != 0)
            goto L138E00;
        wnd_open(0x4040);
        goto L138E08;
    L138E00:
        wnd_open(0x4010);
    L138E08:
        draw_pad(0x310);
        row_latch_7e();
        fn_1x39ca4();
        wnd_open(0x3188);
        fn_1x26070();
        midrow_pad88_run();
        midrow_degen();
        row_page(1);
        row_read(3);
        if (sel(2) != 0)
            goto L138E80;
        txt_set(0x1BAF);
        cell_set50_from40();
        row_read(1);
        txt_draw(0x1BAF);
    L138E80:
        row_page(1);
        row_read(0x80);
        if (sel(2) == 0)
            return;
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            continue;
        cell_clear_bank(0x1BB2);
        cell_clear_bank(0x1BB0);
        cell_clear_bank(0x1BB1);
        wnd_open(0x1340);
        party_form_formation_screen_x1d_x1();
        wnd_open_cur();
        label(0x1B1D);
        wnd_open_cur();
        txt_set(0x1BAF);
        open_depth_guard_in_the_menu_regio();
        fn_1x24130();
        fn_1x24158();
        rows_x48c0_x1a71_texts_xe0_window();
        animation_row_300b();
        animation_row_310();
        config_row_264e8();
        config_row_26528();
        anim_noop();
        continue;
    }
    return;
}
