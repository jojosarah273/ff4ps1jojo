/* FF4 source-port — interpreted module for func_80168E30.
 * Ground truth: src/func_80168E30.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80168E30(void)
{
    /* shop rows: 3C3C/3B04(0x4000)/3B9C gates + 8011EB9C row;
       v1/v0 gate closes. */
    cell_state_of();
    cell_state(0x4000);
    cell_peek_cur();
    row_open3();
    wnd_open(0x37);
    row_open();
    func_800F94B8();
    func_8011EB9C();
    func_800F94B8();
    /* v1/v0 gate -> L168ED8 */
    return;
}
