/* FF4 source-port — interpreted module for func_80115A34.
 * Ground truth: src/func_80115A34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80115A34(void)
{
    /* battle items: 0xAD/0x7A/0xC/0xD/0xE windows, 0x350-0x35B cells,
       801714C4 picker; 5574(0x20) gate, 7728(0x101) check; two
       detail blocks (4120(2) gates). */
    row_page(0xAD);
    io_poll(0x20);
    if (io_just() != 0)
        goto L115A7C;
    row_page(0x7A);
    cell_tick_half();
    if (cell_flags_nz50(0x101) == 0)
        goto L115BBC;
L115A7C:
    row_page(0xAD);
    sep_b();
    cell_pos_back(0x10);
    row_read(0xFC);
    row_page(0xC);
    cell_pull_c8(0x350);
    row_page(0xD);
    row_read(1);
    if (sel(2) != 0)
        goto L115AF4;
    latch(0x14);
    func_801714C4();
L115AF4:
    row_page(0xE);
    cell_pull_c8(0x351);
    cell_push_c8();
    cell_pull_c8(0x352);
    cell_push_c8();
    cell_pull_c8(0x353);
    row_page(0xC);
    sep_a();
    row_open_w(8);
    cell_pull_c8(0x354);
    row_page(0xD);
    row_open_w0();
    row_read(1);
    if (sel(2) != 0)
        goto L115B84;
    latch(0x15);
    func_801714C4();
L115B84:
    row_page(0xE);
    cell_pull_c8(0x355);
    cell_push_c8();
    cell_pull_c8(0x356);
    cell_push_c8();
    cell_pull_c8(0x357);
    return;
L115BBC:
    return;
}
