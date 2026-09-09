/* FF4 source-port — interpreted module for func_8016D600.
 * Ground truth: src/func_8016D600.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016D600(void)
{
    /* config map: 0x7D1D text, 0x39/0x3C windows, 8016D730/8016D768
       rows; 5574 ladder (1/0xA codes) with loop L16D660 on
       5B8C(0x202). */
    io_poll(1);
    if (io_just() != 0)
        goto L16D690;
    io_poll(0xA);
    if (io_just() == 0)
        goto L16D648;
    func_8016D730();
    return;
L16D648:
    func_8016D768();
    func_800F6EA8(0x36);
    cell_put_cur();
L16d660:
    for (;;) {
        latch(0xFF);
        func_8016D730();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
L16D690:
    txt_set(0x7D1D);
    row_prep(0x20);
    func_800F922C();
    row_arm_s_cur();
    sep_a();
    cell_peek0(cell_state(0x39));
    func_800F8274(0x39);
    func_800F9410();
    sep_a();
    cell_peek0(cell_state(0x39));
    func_800F8274(0x3C);
    sep();
    row_prep_close();
    return;
}
