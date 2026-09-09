/* FF4 source-port — interpreted module for func_801390DC.
 * Ground truth: src/func_801390DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801390DC(void)
{
    /* ability rows: 80120E2C/8011FBA4/80126528/80120E9C/8012AAC0/
       8011EF30/801264C0/801391D4 rows, 0x11/0xE2/0x99 window/cells. */
    func_80120E2C();
    draw_pad_cur();
    battle_rows_29();
    func_80126528();
    func_80120E9C();
    func_8012AAC0();
    latch(0x11);
    cell_put(0xE2);
    wnd_open_cur();
    tail(0x99);
    func_80120E2C();
    draw_pad_cur();
    battle_rows_sync();
    func_801264C0();
    func_80126528();
    func_801391D4();
    return;
}
