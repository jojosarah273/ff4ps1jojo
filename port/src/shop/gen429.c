/* FF4 source-port — interpreted module for options_banner_x2683_gate_ladder_x.
 * Ground truth: src/options_banner_x2683_gate_ladder_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_banner_x2683_gate_ladder_x(void)
{
    /* options banner: 0x2683 gate; 5574 ladder (0xC0/0x80/0x40 codes)
       with 80153218 one-shot, ending 0x26D2/0x34C8/0x34C7 + 0x34CA
       via 80062B08/801532D4. */
    txt_set(0x2683);
    row_read(0x20);
    if (sel(2) != 0)
        goto L162960;
    latch(0xB);
    txt_draw(0x34CA);
    latch(0x19);
    goto L162A28;
L162960:
    fn_1x53218();
    io_poll(0xC0);
    if (io_go() == 0)
        goto L1629A0;
    latch_cur();
    txt_draw(0x34CA);
    latch_cur();
    goto L162A28;
L1629A0:
    io_poll(0x80);
    if (io_go() == 0)
        goto L1629D8;
    latch(0xE);
    txt_draw(0x34CA);
    latch(2);
    goto L162A28;
L1629D8:
    io_poll(0x40);
    if (io_go() == 0)
        goto L162A10;
    latch(0xD);
    txt_draw(0x34CA);
    latch(3);
    goto L162A28;
L162A10:
    latch(0xC);
    txt_draw(0x34CA);
    latch(0x29);
L162A28:
    txt_draw(0x26D2);
    func_80062B08();
    latch(8);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    fn_1x532d4();
    return;
}
