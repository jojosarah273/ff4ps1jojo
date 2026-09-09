/* FF4 source-port — interpreted module for func_80111B14.
 * Ground truth: src/func_80111B14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80111B14(void)
{
    wnd_open(37032);
    label(5894);
    latch(16);
    cell_put(44);
    latch(88);
    cell_put(46);
    func_80176060();
    func_800F8F74(5888);
    latch(7);
    txt_draw(5892);
    latch(1);
    txt_draw(5928);
    func_800FB09C();
    latch(16);
    cell_put(173);
    func_80111BBC();
    func_800FE870();
    func_80111C2C();
}
