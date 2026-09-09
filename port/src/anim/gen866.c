/* FF4 source-port — interpreted module for func_80174348.
 * Ground truth: src/func_80174348.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80174348(void)
{
    /* shop rows: 0x128A text + 0x4C/0x4E/0x4A/0x49/0x73 windows,
       80170458 + 8017F8F8 rows; gate 4120(0x202). */
    txt_set(0x128A);
    row_read(0x40);
    if (sel(0x202) != 0)
        return;
    wnd_open(0x5A00);
    tail(0x4C);
    wnd_open(0x600);
    tail(0x4E);
    wnd_open_cur();
    tail(0x4A);
    latch(0x1C);
    cell_put(0x49);
    func_80170458();
    battle_mode_dispatch();
    return;
}
