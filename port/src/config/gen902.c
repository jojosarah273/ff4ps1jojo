/* FF4 source-port — interpreted module for func_80120DB4.
 * Ground truth: src/func_80120DB4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80120DB4(void)
{
    func_80124158();
    func_800F9200();
    row_open();
    wnd_open(54784);
    tail(41);
    wnd_open(28672);
    tail(53);
    latch(3);
    cell_put(195);
    open_row(52);
    row_close();
    row_close2();
}
