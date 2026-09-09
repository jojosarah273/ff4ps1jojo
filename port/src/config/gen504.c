/* FF4 source-port — interpreted module for func_80127408.
 * Ground truth: src/func_80127408.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80127408(void)
{
    /* status: 8012214C header + 65F0/81B0(!=) cells + 4 x 801287B8
       blocks, then the 0x34 window save row (801210AC/8011EF30/
       8011EF0C); closes with 71DC(0x4000). */
    func_8012214C();
    row_prep(0x20);
    func_800F65F0();
    func_800F81B0();
    func_800F81B0();
    func_800F65F0();
    func_800F81B0();
    func_800F81B0();
    func_800F65F0();
    func_800F81B0();
    func_800F81B0();
    func_800F65F0();
    func_800F81B0();
    func_800F81B0();
    row_prep_close();
    sep();
    func_801287B8();
    func_801287B8();
    func_801287B8();
    func_801287B8();
    wnd_open(0x4000);
    label_cur();
    row_page(0x34);
    func_800F9200();
    func_801210AC();
    latch(0x30);
    cell_put(0x34);
    draw_pad_cur();
    func_8011EF30();
    row_close2();
    cell_put(0x34);
    func_8011EF0C();
    return;
}
