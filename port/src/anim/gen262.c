/* FF4 source-port — interpreted module for shop_row_render_x2115_x4300_x4301.
 * Ground truth: src/shop_row_render_x2115_x4300_x4301.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_row_render_x2115_x4300_x4301(void)
{
    int i;
    /* shop row render: 0x2115/0x4300/0x4301 title, 0x421F/0x2116/
       0x4302/0x4305 desc rows, 800F9868 catalog dispatch, then the
       0x4F/0x79/0x50 item cells; L170608 repeats the header/detail row
       pack while 5804(3C3C(0x4E)) holds, then commits 80194394/80181300. */
    cell_clear_bank(0x420B);
    latch(0x80);
    txt_draw(0x2115);
    latch(8);
    txt_draw(0x4300);
    latch(0x19);
    txt_draw(0x4301);
    cell_clear_bank(0x4304);
    page(0x4C);
    label(0x2116);
    open_row(0x10);
    wnd_open(0x610);
    label(0x4302);
    page(0x4E);
    label(0x4305);
    catalog_dispatch();
    page_open(0x2116);
    cell_clear_bank(0x420B);
    for (i = 0; i < 4; i++) {
        cell_word_half(cell_state(0x4F));
        cell_flags_repack();
        cell_word_half_s(cell_state(0x4E));
    }
    latch(0x18);
    txt_draw(0x4301);
    page(0x4C);
    label(0x2116);
    page(0x4A);
    label(0x4302);
    row_page(0x49);
    txt_draw(0x4304);
    draw_pad_cur();
L170608:
    for (;;) {
        cell_clear_bank(0x420B);
        latch(0x80);
        txt_draw(0x2115);
        latch(1);
        txt_draw(0x4300);
        wnd_open(0x10);
        label(0x4305);
        catalog_dispatch();
        cell_clear_bank(0x420B);
        cell_clear_bank(0x2115);
        cell_clear_bank(0x4300);
        wnd_open(8);
        label(0x4305);
        catalog_dispatch();
        step2();
        if (cell_0xf5804(cell_state(0x4E)) == 0)
            continue;
        break;
    }
    cb_slot15();
    battle_anim_v1_v0_gates_c0_row_at();
    return;
}
