/* FF4 source-port — interpreted module for func_80131534.
 * Ground truth: src/func_80131534.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80131534(void)
{
    /* ability wrapper: 80132428/80177178 preps + 80120070 config
       dispatcher + the 80126B88/8012F9D0/80130C74 sub-screens; ends
       with 80126528/80122904 rows. */
    func_80132428();
    row_prep(0x20);
    cell_stamp8_9(0xB);
    row_prep_close();
    txt_set(0x1B89);
    sep_b();
    cell_pos_back(0xE);
    cell_cursor_dec();
    func_80177178();
    row_close2();
    wnd_open_cur();
    func_80120070();
    func_80126B88();
    txt_draw(0x1A86);
    func_80120F94();
    draw_pad_cur();
    func_8011EF30();
    func_80130884();
    func_8012F9D0();
    func_80130C74();
    func_8012B168();
    func_80126458();
    func_8017F8F8();
    func_8011F6A4();
    func_8011FF40();
    func_80120E2C();
    func_80122904();
    func_80126528();
    return;
}
