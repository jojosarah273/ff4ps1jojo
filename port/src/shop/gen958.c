/* FF4 source-port — interpreted module for battle_loop_f098_intro_x9a_window.
 * Ground truth: src/battle_loop_f098_intro_x9a_window.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_loop_f098_intro_x9a_window(void)
{
    /* battle loop: 8018F098 intro + 0x9A window; loops L169408
       (80194640/94394) and L16942C (62BC(0x9A)/6630(0x9A) gates);
       ends on 5574(0xF)/0x3303 text reads. */
    func_8018F098();
    func_8018F098();
    open_row(0x9A);
    battle_mode_dispatch();
    cb_slot15();
    event_spin_wait();
    func_801942FC();
    cb_slot2();
    cb_slot15();
    cb_slot2();
    cb_slot15();
    battle_mode_dispatch();
    /* v1/v0 gate -> L16942C */
    cb_slot2();
L169408:
    for (;;) {
        if (cb_slot15() != 0)
            continue;
        break;
    }
L16942C:
    for (;;) {
        shop_row_41();
        key_page(0x9A);
        row_page(0x9A);
        row_read(0xF);
        if (sel(0x202) != 0)
            continue;
        page_paint2(0x3303);
        txt_set(0x3303);
        io_poll(0xF);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
