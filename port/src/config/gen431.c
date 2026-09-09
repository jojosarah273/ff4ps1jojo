/* FF4 source-port — interpreted module for func_80158190.
 * Ground truth: src/func_80158190.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80158190(void)
{
    /* options screen: 0xD2 window + 0x38F6/0x35D8 texts, 80152CDC +
       8015310C rows; 5574(0xD) ladder picks 0x352E codes via
       4120(0x202)/53C0 gates. */
    row_page(0xD2);
    txt_draw(0x38F6);
    func_80152CDC();
    page_paint2(0x38F6);
    txt_set(0x38F6);
    io_poll(0xD);
    if (io_just() == 0)
        goto L1581E0;
    func_800F8F74(0x38F6);
L1581E0:
    row_page(0xD3);
    row_sel_cell_cur();
    sep_a();
    cell_poke0(cell_state(0xD3));
    cell_put(0xA9);
    row_page(0xA9);
    func_8015310C();
    page_open(0x3598);
    txt_cell(0x2A06);
    row_read(0x7E);
    if (sel(0x202) != 0)
        goto L158288;
    row_page(0xD2);
    io_poll(5);
    if (io_go() == 0)
        goto L158278;
    latch(1);
    goto L1582B8;
L158278:
    latch_cur();
    goto L1582B8;
L158288:
    row_read(8);
    if (sel(2) != 0)
        goto L1582B0;
    latch(2);
    goto L1582B8;
L1582B0:
    latch(3);
L1582B8:
    txt_draw(0x352E);
    open_row(0xD1);
    return;
}
