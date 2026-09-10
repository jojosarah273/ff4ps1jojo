/* FF4 source-port — interpreted module for config_weapon_sub_menu_x1eb_x1b37.
 * Ground truth: src/config_weapon_sub_menu_x1eb_x1b37.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_weapon_sub_menu_x1eb_x1b37(void)
{
    /* config weapon sub-menu: 0x1EB/0x1B37/0x1B39 texts; 8013463C/
       80134AF8/801224D0/801345B4 rows; 53C0/53D4 ladders route the
       4C40/5F4D/6C61 option texts. */
    cell_clear_bank(0x1EB);
    io_poll(0xB0);
    if (io_go() != 0)
        goto L13445C;
    config_weapon_switch_screen_b37_b3();
    if (io_go() != 0)
        goto L13446C;
L13445C:
    sep_a();
    return;
L13446C:
    weapon_sub_menu_x1b39_text_x45_x48();
    if (io_go() == 0)
        return;
    txt_set(0x1B37);
    io_poll(2);
    if (io_go() != 0)
        return;
    cell_push_c8_lo(0xE5);
    row_read(0xC0);
    io_poll(0xC0);
    if (io_just() != 0)
        goto L13454C;
    sep_a();
    cell_tick_dbl();
    cell_flags_repack2();
    cell_tick_dbl();
    cell_flags_repack2();
    cell_tick_dbl();
    battle_put43();
    if (io_press(cell_state(0x1B37)) == 0)
        goto L13455C;
L13454C:
    txt_set(0x1B39);
    goto L134584;
L13455C:
    txt_set(0x1B39);
    wnd_open(0x5F4D);
    ability_rows_45();
    if (io_go() != 0)
        goto L13459C;
L134584:
    wnd_open(0x4C40);
    ability_rows_45();
    return;
L13459C:
    sep_b();
    return;
}
