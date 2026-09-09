/* FF4 source-port — interpreted module for func_8015F5A0.
 * Ground truth: src/func_8015F5A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015F5A0(void)
{
    /* options: 0x3/0x5/0x28A4 texts, 0xA9 window, 80152224 row;
       loop L15F5E8 on 7CC8(3B04(0x28A4))/5C64(0x202); 80065774/
       80065534 gates. */
    wnd_open(3);
    latch(5);
    func_80152224();
    txt_draw(0xA9);
    sep_b();
L15f5e8:
    for (;;) {
        cell_word_half_s(cell_state(0x28A4));
        func_800F7D0C();
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    txt_set(0xA9);
    io_poll(5);
    if (io_just() != 0)
        goto L15F648;
    func_80065774();
    return;
L15F648:
    func_80065534();
    return;
}
