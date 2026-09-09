/* FF4 source-port — interpreted module for func_8015F2B0.
 * Ground truth: src/func_8015F2B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015F2B0(void)
{
    /* options: 0x289D/0x38FE/0x2709/0x270A texts, 0xA9 window,
       80160AAC/80160B8C/8006508C/8015254C rows; 6434/53C0 gates. */
    txt_set(0x289D);
    cell_put(0xA9);
    func_80160AAC();
    txt_set(0x38FE);
    if (gate_cur() != 0)
        goto L15F308;
    row_read(0x7F);
    txt_draw(0x38FE);
    func_8006508C();
    return;
L15F308:
    func_80160B8C();
    txt_set(0x38FE);
    io_poll(2);
    if (io_go() != 0)
        goto L15F348;
    latch(0xA);
    cell_put(0xA9);
    goto L15F370;
L15F348:
    io_poll(4);
    if (io_go() == 0)
        goto L15F370;
    cell_word_half(cell_state(0xA9));
L15F370:
    row_page(0xA9);
    label(0x3947);
    txt_set(0x2709);
    txt_draw(0x3945);
    txt_set(0x270A);
    txt_draw(0x3946);
    func_8015254C();
    page_open(0x3949);
    tail(0xA4);
    return;
}
