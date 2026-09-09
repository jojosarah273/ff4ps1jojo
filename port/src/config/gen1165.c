/* FF4 source-port — interpreted module for func_80138CB0.
 * Ground truth: src/func_80138CB0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80138CB0(void)
{
    /* rows: 0x48C0/0x1A71 texts, 0xE0 window, 8012807C/801257BC/
       80120E2C/8011EF30/8011FB74 rows. */
    wnd_open(0x48C0);
    label(0x1A71);
    func_8012807C();
    func_801257BC();
    open_row(0xE0);
    func_80120E2C();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011FB74();
    return;
}
