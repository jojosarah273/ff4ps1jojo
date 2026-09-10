/* FF4 source-port — interpreted module for ability_rows_x1a83_text_loop_l13c0.
 * Ground truth: src/ability_rows_x1a83_text_loop_l13c0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x1a83_text_loop_l13c0(void)
{
    /* ability rows: 0x1A83 text; loop L13C024 on 6434(2)/53C0 with
       8013C2FC/8013CA70/8013BD04/8013C50C rows. */
    txt_set(0x1A83);
    cell_clear_bank(0x1A83);
    if (gate(0x202) != 0)
        goto L13C074;
L13C024:
    for (;;) {
        ability_menu_x60_window_x1a83_text();
        row_page(0x60);
        if (gate(2) != 0)
            goto L13C064;
        ability_menu_x41_window_ladder_x19();
        if (io_go() != 0)
            continue;
        return;
    L13C064:
        battle_summon_party_cast_screen_x4();
        return;
    }
L13C074:
    fn_1x3c50c();
    goto L13C024;
}
