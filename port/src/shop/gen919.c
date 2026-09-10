/* FF4 source-port — interpreted module for options_c_rows_gate_x80_picks_the.
 * Ground truth: src/options_c_rows_gate_x80_picks_the.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_c_rows_gate_x80_picks_the(void)
{
    /* options: 80153218/8015329C rows; gate 5574(0x80) picks the
       0x34CA/0x26D2 variants. */
    func_80153218();
    io_poll(0x80);
    if (io_go() == 0)
        goto L162670;
    config_row_5329c();
    latch(0x10);
    txt_draw(0x34CA);
    return;
L162670:
    latch(0xE);
    txt_draw(0x26D2);
    func_80062B08();
    latch(0xB);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    return;
}
