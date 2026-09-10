/* FF4 source-port — interpreted module for shop_buy_x1700_gate_picks_d4_then.
 * Ground truth: src/shop_buy_x1700_gate_picks_d4_then.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_buy_x1700_gate_picks_d4_then(void)
{
    /* shop buy: 0x1700 gate picks 80103790/801038D4; then 79/7A/7B
       windows + 0x81/0x4200 titles via 8011EA5C. */
    txt_set(0x1700);
    if (gate(2) == 0)
        goto L119E14;
    shop_rows_alt_of_d4_x1706_x1708_x5();
    goto L119E1C;
L119E14:
    shop_buy_rows_x1706_x170c_texts_x5();
L119E1C:
    open_row(0x79);
    open_row(0x7A);
    open_row(0x7B);
    latch(0x81);
    txt_draw(0x4200);
    wnd_fx_7d_b();
    latch(0xF);
    txt_draw(0x2100);
    cell_flags_clr4();
    battle_wndfx_run();
    return;
}
