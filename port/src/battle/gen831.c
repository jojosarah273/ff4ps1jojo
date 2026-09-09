/* FF4 source-port — interpreted module for func_80140BA0.
 * Ground truth: src/func_80140BA0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80140BA0(void)
{
    /* battle judge: 80140CFC/80140AC0 preps, 0x48/0x2000 texts,
       80097D34/80097D54/80140D94 rows. */
    func_80140CFC();
    txt_set(0x48);
    func_800F9200();
    txt_set_cur();
    txt_draw(0x48);
    func_80097D34();
    func_80140AC0();
    sep();
    func_800F8960();
    txt_cell(0x2000);
    func_800F9200();
    row_close2();
    cell_draw_cur();
    func_80097D54();
    row_close2();
    txt_draw(0x48);
    func_80140D94();
    return;
}
