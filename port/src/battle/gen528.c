/* FF4 source-port — interpreted module for func_80119210.
 * Ground truth: src/func_80119210.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119210(void)
{
    /* battle rows: 0x18-0x1B windows, 0x16A0-0x16A2 texts,
       80174F0C row; 53C0 gate closes 0x16A0-0x16A2 fills. */
    func_80117594();
    cell_put(0x18);
    open_row(0x19);
    latch(0x64);
    cell_put(0x1A);
    open_row(0x1B);
    func_80174F0C();
    txt_set(0x16A0);
    sep_b();
    cell_tick_sub(cell_state(0x30));
    txt_draw(0x16A0);
    txt_set(0x16A1);
    cell_state(0x31);
    cell_tick_sub();
    txt_draw(0x16A1);
    txt_set(0x16A2);
    cell_state(0x32);
    cell_tick_sub();
    txt_draw(0x16A2);
    if (io_go() != 0)
        goto L1192E0;
    cell_clear_bank(0x16A0);
    cell_clear_bank(0x16A1);
    cell_clear_bank(0x16A2);
L1192E0:
    wnd_fx_7d();
    return;
}
