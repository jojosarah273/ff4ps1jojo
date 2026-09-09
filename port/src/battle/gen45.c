/* FF4 source-port — interpreted module for func_8011D658.
 * Ground truth: src/func_8011D658.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011D658(void)
{
    row_prep(0x20);
    cell_push9(0x1707);
    cell_pos_mask(0xFF);
    sep_b();
    func_800F80D0(7);
    cell_put_hi9(0x5C);
    cell_push9(0x1706);
    cell_pos_mask(0xFF);
    sep_b();
    func_800F80D0(7);
    cell_put_hi9(0x5A);
    row_sync2_cur();
    row_prep_close();
    func_8011E9EC();
    func_80100BE0();
    latch(0x10);
    cell_put(7);
    txt_set(0x1707);
    sep_b();
    cell_pos_back(7);
    cell_put(8);
LD738:
    for (;;) {
        row_page(8);
        row_read(0x3F);
        cell_put(0x3E);
        txt_set(0x1706);
        sep_b();
        cell_pos_back(7);
        cell_put(0x3D);
        page(0x3D);
        tail(0x43);
        func_8011CC98();
        func_8011CE18();
        latch(0x80);
        txt_draw(0x2115);
        wnd_fx_tags();
        latch(1);
        txt_draw(0x4300);
        page(0x99);
        label(0x2116);
        wnd_open(0xADB);
        label(0x4302);
        page(0x95);
        label(0x4305);
        func_800FCCBC();
        page(0x9B);
        label(0x2116);
        cell_clear_bank(0x420B);
        page(0x97);
        if (cell_flags_pack(2) != 0)
            goto LD830;
        label(0x4305);
        func_800FCCBC();
    LD830:
        page(0x9D);
        label(0x2116);
        cell_clear_bank(0x420B);
        wnd_open(0xB1B);
        label(0x4302);
        page(0x95);
        label(0x4305);
        func_800FCCBC();
        page(0x9F);
        label(0x2116);
        cell_clear_bank(0x420B);
        page(0x97);
        if (cell_flags_pack(2) != 0)
            goto LD8b0;
        label(0x4305);
        func_800FCCBC();
    LD8b0:
        key_page(8);
        poll_pair(7);
        if (poll_go(2) == 0)
            continue;
        break;
    }
    return;
}
