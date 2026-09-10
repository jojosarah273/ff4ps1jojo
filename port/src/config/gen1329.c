/* FF4 source-port — interpreted module for rows_x1a3c_text_ccc_spin_loop_l138.
 * Ground truth: src/rows_x1a3c_text_ccc_spin_loop_l138.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void rows_x1a3c_text_ccc_spin_loop_l138(void)
{
    /* rows: 0x1A3C text + 5CCC spin loop L13831C. */
    txt_set(0x1A3C);
    do {
        poll_spin();
    } while (io_just() != 0);
    return;
}
