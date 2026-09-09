/* FF4 source-port — interpreted module for config_row_7800.
 * Ground truth: src/config_row_7800.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_row_7800(void)
{
    row_open();
    row_sync();
    wnd_open(30720);
    draw_pad(50688);
    func_80126368();
}
