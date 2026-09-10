/* FF4 source-port — interpreted module for config_status_text_screen_x4219_x4.
 * Ground truth: src/config_status_text_screen_x4219_x4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_status_text_screen_x4219_x4(void)
{
    /* config status text screen: 0x4219/0x421B choose header, 0x38D9 the
       detail row; 80168400/80168474/8016838C draw the option rows. */
    cell_push_c8_cur(0x4219);
    cell_peek_cur();
    cell_tick_or();
    row_read(0x10);
    cell_tick_or(cell_state(0x38));
    cell_put(0x38);
    txt_set_cur();
    io_poll(0xFF);
    if (io_just() != 0)
        goto L168728;
    txt_set_cur();
    if (gate(2) != 0)
        goto L168728;
    txt_set_cur();
    if (gate(2) != 0)
        goto L168608;
    io_poll(1);
    if (io_just() != 0)
        goto L1685C8;
    page_paint2_cur();
    txt_set_cur();
    io_poll(0xF);
    if (io_just() == 0)
        goto L168738;
    cell_clear_bank();
    cell_clear_bank(0x38D9);
L168590:
    txt_set_cur();
    io_poll(0xFE);
    if (io_just() == 0)
        goto L168738;
    page_paint2_cur();
    cell_0xf6068();
    goto L168738;
L1685C8:
    cell_dec_bank();
    txt_set_cur();
    io_poll(4);
    if (io_just() == 0)
        goto L168738;
    cell_clear_bank();
    page_paint2(0x38D9);
    goto L168590;
L168608:
    txt_set(0x38D9);
    if (gate(0x202) != 0)
        goto L1686A8;
    txt_set_cur();
    if (gate(2) != 0)
        goto L168650;
    latch(0xFE);
    txt_draw_cur();
    goto L168680;
L168650:
    row_page(0x38);
    row_read(0x10);
    if (sel(2) != 0)
        goto L168728;
    fn_1x68400();
    shop_b04_x7000_x2_v1_t0_latch_loop();
L168680:
    latch(1);
    txt_draw_cur();
    latch(0xF);
    txt_draw_cur();
    goto L168738;
L1686A8:
    txt_set_cur();
    if (gate(2) != 0)
        goto L1686D8;
    latch(0xFE);
    txt_draw_cur();
    goto L1686F8;
L1686D8:
    row_page(0x38);
    row_read(0x10);
    if (sel(2) != 0)
        goto L168738;
L1686F8:
    fn_1x68474();
    shop_b04_x7000_x2_v1_t0_latch_loop();
    latch(2);
    txt_draw_cur();
    latch(4);
    txt_draw_cur();
    goto L168738;
L168728:
    sep_a();
    goto L168740;
L168738:
    sep_b();
L168740:
    return;
}
