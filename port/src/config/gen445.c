/* FF4 source-port — interpreted module for func_80138A6C.
 * Ground truth: src/func_80138A6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80138A6C(void)
{
    /* ability/status wrapper: 80123D3C render + 0x1A73 title + 0x204/
       0x206 stat cells, then the L138BDC loop calling 80138D24 (the
       sub-dispatcher) and re-rendering 0x1B49. */
    func_80123D3C();
    func_80124298();
    latch(1);
    txt_draw(0x1A73);
    row_prep(0x20);
    cell_sink89_c(0x204);
    cell_cursor_ret2();
    cell_sink89_c(0x206);
    cell_cursor_ret2();
    row_prep_close();
    cell_flags_set4();
    latch(0x2C);
    cell_pull_c8_lo(0x205);
    latch(0xCE);
    cell_pull_c8_lo(0x206);
    latch(1);
    cell_pull_c8_lo(0x207);
    latch(0x21);
    cell_pull_c8_lo(0x4200);
    cell_push_c8_cur(0x4211);
    cell_flags_clr4();
    page_paint2(0x1B49);
    func_80123FB4();
    func_801241B8();
    func_80126330();
    func_80138CB0();
    func_80139AA4();
    func_8011F6A4();
    func_8011EF0C();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
L138bdc:
    for (;;) {
        func_80194700();
        func_80194394();
        func_80126590();
        func_80138D24();
        cell_clear_bank(0x1B49);
        func_80126610();
        cell_flags_set4();
        row_prep(0x20);
        cell_cursor_adv2();
        func_800F8210(0x206);
        cell_cursor_adv2();
        func_800F8210(0x204);
        row_prep_close();
        return;
    }
}
