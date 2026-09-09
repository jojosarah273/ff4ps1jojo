/* FF4 source-port — interpreted module for func_80168750.
 * Ground truth: src/func_80168750.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80168750(void)
{
    txt_set(0xEF87);
    if (gate(0x202) == 0)
        goto L8b14;
    txt_set(0xF49B);
    if (gate(2) != 0)
        goto L8798;
    txt_set(0xF49B);
    goto L87a0;
L8798:
    latch(3);
L87a0:
    func_80168B94();
    latch(0xE0);
    func_8017EA90();
    txt_set(0xEF87);
    io_poll(1);
    if (io_just() != 0)
        goto L8978;
    io_poll(2);
    if (io_just() != 0)
        goto L88c0;
    io_poll(3);
    if (io_just() != 0)
        goto L8978;
    io_poll(4);
    if (io_just() != 0)
        goto L8890;
    io_poll(5);
    if (io_just() != 0)
        goto L8860;
    io_poll(6);
    if (io_just() != 0)
        goto L88c0;
L8860:
    txt_set(0xF435);
    if (gate(2) == 0)
        goto L8948;
    cell_clear_bank(0xF49B);
    cell_clear_bank(0xEF87);
    goto L8998;
L8890:
    txt_set(0xF435);
    if (io_press(cell_state(0xF436)) != 0)
        goto L8998;
    goto L88f8;
L88c0:
    txt_set(0xEF8A);
    if (gate(0x202) != 0)
        goto L8930;
    txt_set(0xF435);
    io_poll(0x1F);
    if (io_just() != 0)
        goto L8918;
L88f8:
    page_paint2(0xF435);
    page_paint2(0xF434);
    page_paint2(0xF433);
    goto L8998;
L8918:
    latch(1);
    txt_draw(0xEF8A);
    goto L8998;
L8930:
    txt_set(0xF435);
    if (gate(2) != 0)
        goto L8968;
L8948:
    cell_dec_bank(0xF435);
    cell_dec_bank(0xF434);
    cell_dec_bank(0xF433);
    goto L8998;
L8968:
    cell_clear_bank(0xEF8A);
    goto L8998;
L8978:
    txt_set(0xEF89);
    row_read(2);
    if (sel(0x202) != 0)
        goto L8b04;
L8998:
    txt_set(0xEF88);
    row_read(0x80);
    if (sel(2) == 0) {
        txt_set(0xF433);
        func_8017EA90();
    }
    txt_set(0xEF88);
    row_read(0x40);
    if (sel(2) == 0) {
        txt_set(0xF434);
        func_8017EA90();
    }
    txt_set(0xEF88);
    row_read(0x20);
    if (sel(2) == 0) {
        txt_set(0xF435);
        func_8017EA90();
    }
    txt_set(0xEF87);
    io_poll(3);
    if (io_just() == 0)
        goto L8b04;
    page_paint2(0xEF89);
    txt_set(0xEF89);
    row_read(2);
    if (sel(0x202) != 0)
        goto L8b84;
    cell_clear_bank(0xEF87);
    goto L8b84;
L8b04:
    page_paint2(0xEF89);
    goto L8b84;
L8b14:
    txt_set(0xED4E);
    row_read(0x80);
    if (sel(2) != 0)
        goto L8b64;
    latch(2);
    cell_pull_c8_lo(0x2130);
    cell_pull_c8_lo(0x212D);
    latch(0x41);
    func_80168B94();
    goto L8b84;
L8b64:
    sep();
    cell_pull_c8_lo(0x2130);
    cell_pull_c8_lo(0x212D);
    func_80168B94();
L8b84:
    return;
}
