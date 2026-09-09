/* FF4 source-port — interpreted module for func_80119D48.
 * Ground truth: src/func_80119D48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119D48(void)
{
    /* battle rows: 0x2106 text; loop L119D58 on 5574(0x40). */
    open_row(0x79);
L119d58:
    for (;;) {
        wnd_fx_7d_b();
        row_page(0x79);
        cell_tick_half();
        cell_push_c8();
        txt_draw(0x2106);
        key_page(0x79);
        key_page(0x79);
        row_page(0x79);
        io_poll(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_wndfx_run();
    return;
}
