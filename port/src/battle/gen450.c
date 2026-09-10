/* FF4 source-port — interpreted module for fn_1x0f2f4.
 * Ground truth: src/fn_1x0f2f4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED50;
void fn_1x0f2f4(void)
{
    cell_clear_bank(0x1704);
    open_row(0x20);
    open_row(0x24);
    fn_1x0f484();
    do {
        wnd_fx_7d();
        cell_clear_pad();
        cell_fill_aa();
        key_page(0x20);
        row_page(0x24);
        sep_a();
        cell_poke0(cell_state(0x20));
        cell_put(0x24);
        *D_8019ED68 &= 0xFD;
        if (*D_8019ED50 == 0)
            *D_8019ED68 |= 0x2;
        if (io_go() != 0) {
            wnd_open(0);
            latch(0x60);
            cell_put(0xC);
            latch(0x50);
            cell_put(0xE);
            battle_rows_xc_xe_windows_x340_x34();
        }
        row_page(0x20);
        io_poll(0xFF);
    } while (io_just() == 0);
    fn_1x1053c();
    txt_set(0x1288);
    row_read(0xFB);
    txt_draw(0x1288);
    wnd_open(3);
    do {
        row_open();
        battle_command_row_screen_x20_x24();
        battle_spell_cast_helper_xc7_x48_x();
        battle_rows_x79_x83_x82_x81_window();
        row_close();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
    battle_wndfx_run();
}
