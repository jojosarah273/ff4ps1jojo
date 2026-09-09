/* FF4 source-port — interpreted module for func_8013CA70.
 * Ground truth: src/func_8013CA70.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013CA70(void)
{
    /* ability menu: 0x41 window; 5574 ladder (0x19/0xC8/0xEE codes)
       routes to the 801210AC/8011FB74/801263F0/8012219C/8011FF40/
       801240A8/8011EF30 row block; loop L13CA84 on 5958(0x10). */
    page(0x41);
L13ca84:
    for (;;) {
        txt_cell_cur();
        io_poll(0x19);
        if (io_just() != 0)
            goto L13CB0C;
        io_poll(0xC8);
        if (io_just() != 0)
            goto L13CB0C;
        io_poll(0xEE);
        if (io_go() != 0)
            goto L13CB0C;
        cell_step();
        cell_step();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
    sep_a();
    return;
L13CB0C:
    func_801210AC();
    draw_pad_cur();
    func_8011FB74();
    func_801263F0();
    func_8012219C();
    func_8011FF40();
    func_801240A8();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    func_8011FB74();
    func_801263F0();
    sep_b();
    return;
}
