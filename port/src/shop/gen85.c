/* FF4 source-port — interpreted module for func_8016C280.
 * Ground truth: src/func_8016C280.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016C280(void)
{
    /* battle row render: 0x74/0x76/0x70/0x72 stat windows with
       3F94(3C3C) / 4064(8) value cells, 0x5B/0x5D headers; then the
       0x61/0xA1 secondary cells and the 80C0 gate read (80176F60). */
    wnd_open_cur();
    func_8016C734();
    row_prep(0x20);
    row_read2(0x74);
    sep_a();
    cell_peek0(cell_state(0x6C));
    cell_peek0(cell_state(0x7C));
    func_800F4064(8);
    func_800F8274(0x4B);
    row_read2(0x76);
    sep_a();
    cell_peek0(cell_state(0x6E));
    cell_peek0(cell_state(0x7E));
    func_800F4064(8);
    func_800F8274(0x4D);
    sep();
    row_prep_close();
    latch(4);
    cell_put(0x51);
    txt_set(0x5B);
    if (gate(2) != 0)
        goto L16C488;
    row_prep(0x20);
    row_read2(0x70);
    sep_a();
    cell_peek0(cell_state(0x88));
    sep_b();
    func_800F7FCC(cell_state(0xA1));
    func_800F8274(0x5D);
    row_read2(0x72);
    sep_a();
    cell_peek0(cell_state(0x8A));
    sep_b();
    func_800F7FCC(cell_state(0xA3));
    func_800F8274(0x5F);
    sep();
    row_prep_close();
    page_open(0x61);
    poll_t(4);
    if (io_go() == 0)
        goto L16C490;
    func_800F5E48();
    func_800F5E48();
    func_800F5E48();
    label(0x61);
    page_open(0x20C0);
    cell_step();
    cell_step();
    label(0x20C0);
    goto L16C490;
L16C488:
    func_80176F60();
L16C490:
    return;
}
