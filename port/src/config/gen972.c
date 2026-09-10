/* FF4 source-port — interpreted module for fn_1x369b8.
 * Ground truth: src/fn_1x369b8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void fn_1x369b8(void)
{
    cell_cursor_dec();
    cell_put(0x57);
    midrow_prep_a();
    if (io_just() != 0)
        goto end;
    tail(0xE5);
    weapon_sub_menu_x1b39_text_x45_x48();
    if (io_go() == 0)
        goto end;
    row_page(0x57);
    {
        u8 *p = D_8019ED40;
        *p = (u8)(*p << 2);
    }
    battle_put43();
    latch(8);
    cell_draw(0xFE15);
end:
    row_close2();
}
