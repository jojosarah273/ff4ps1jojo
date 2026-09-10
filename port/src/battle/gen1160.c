/* FF4 source-port — interpreted module for fn_1x42064.
 * Ground truth: src/fn_1x42064.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x42064(void)
{
    page_paint2(62247);
    wnd_open(32);
    fn_1x4202c();
    cell_clear_bank(62246);
    cell_clear_bank(62247);
    wnd_open(8);
    fn_1x4202c();
}
