/* FF4 source-port — interpreted module for config_banner_96.
 * Ground truth: src/config_banner_96.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_banner_96(void)
{
    /* config banner: 0x96/0x97 windows, 0x3947-0x394B texts, 8015254C
       rows; gates 58BC(0xFF)/54D4(3C3C(0x96)); loop on 5574(0xFF). */
    row_prep_close();
    func_800F8D40(0x96);
    func_800F58BC(0xFF);
    if (io_just() != 0)
        goto L152354;
    io_poll_cur();
    if (io_just() != 0)
        goto L152354;
    if (io_press(cell_state(0x96)) != 0)
        goto L152354;
    func_800F7248(0x97);
    sep_b();
    cell_tick_sub(cell_state(0x96));
    io_poll(0xFF);
    if (io_just() == 0)
        goto L1522D4;
    func_800F6B38(0x1900);
    goto L152354;
L1522D4:
    cell_set50_from40();
    txt_draw(0x3947);
    cell_clear_bank(0x3948);
    func_800F6B38(0x1900);
    func_800F8CD4(0x3945);
    row_prep(0x10);
    func_8015254C();
    row_prep_close();
    sep_a();
    txt_set(0x394B);
    cell_poke0(cell_state(0x96));
    key_page(0x97);
    return;
L152354:
    row_prep(0x10);
    return;
}
