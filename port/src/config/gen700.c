/* FF4 source-port — interpreted module for func_8013D428.
 * Ground truth: src/func_8013D428.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013D428(void)
{
    draw_pad(0x1C);
    row_prep(0x20);
    do {
        cell_sink89(0x340);
        cell_stamp8_9_b(0x344);
        cell_sink89(0x342);
        sep_a();
        cell_pos_fwd(2);
        cell_stamp8_9_b(0x346);
        poll_pair_cur();
        poll_pair_cur();
        poll_pair_cur();
        poll_pair_cur();
        poll_t(0xFFFC);
    } while (io_just() == 0);
    sep();
    row_prep_close();
}
