/* FF4 source-port — interpreted module for func_8012AB18.
 * Ground truth: src/func_8012AB18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012AB18(void)
{
    /* config status row: 0x1BCC gate, 0x5D/0x5A/0x40/0xDB/0x5C windows,
       80125100 stat block + 801206DC menu row; two symmetric branches
       (L8012AB84 main / L8012ACA8 alt) merging at the 82EC(0x29) cells. */
    txt_set(0x1BCC);
    if (gate(0x202) != 0)
        goto L12AB84;
    row_prep(0x20);
    sep_a();
    func_800F4064(0x40);
    row_prep_close();
L12AB84:
    row_page(0x5D);
    row_read(1);
    if (sel(0x202) != 0)
        goto L12ACA8;
    func_800F6E30(0x5A);
    func_80125100();
    row_prep(0x20);
    sep_a();
    func_800F4064(0x52);
    row_prep_close();
    func_800F6E30(0x5A);
    io_poll(0xFE);
    if (io_just() != 0)
        return;
    latch(0xC8);
    func_800F82EC(0x29);
    step2();
    row_page(0xDB);
    func_800F82EC(0x29);
    step2();
    row_sync();
    row_page(0x5C);
    func_801206DC();
    row_done();
    step2();
    row_page(0xDB);
    func_800F82EC(0x29);
    step2();
    step2();
    func_800F82EC(0x29);
    return;
L12ACA8:
    row_prep(0x20);
    sep_a();
    func_800F4064(0x1C);
    row_prep_close();
    func_800F6E30(0x5A);
    func_80125100();
    row_prep(0x20);
    sep_a();
    func_800F4064(0x52);
    row_prep_close();
    func_800F6E30(0x5A);
    io_poll(0xFE);
    if (io_just() != 0)
        return;
    latch(0xC8);
    func_800F82EC(0x29);
    step2();
    row_page(0xDB);
    func_800F82EC(0x29);
    step2();
    row_page(0x5C);
    row_sync();
    func_801206DC();
    row_done();
    step2();
    row_page(0xDB);
    func_800F82EC(0x29);
    step2();
    step2();
    func_800F82EC(0x29);
    return;
}
