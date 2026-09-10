/* FF4 source-port — interpreted module for event_e8_x2_f0c8_fd8_rows_with_gat.
 * Ground truth: src/event_e8_x2_f0c8_fd8_rows_with_gat.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void event_e8_x2_f0c8_fd8_rows_with_gat(void)
{
    /* event: 801928E8 x2; 80191620/8018F0C8/80190FD8 rows with
       gate at L1914E0. */
    event_spin_wait();
    event_spin_wait();
    func_80191620();
    anim_reg_stub();
    func_80190FD8();
    if (io_just() != 0)
        goto L191510;
    if (io_just() == 0)
        goto L191510;
    return;
L191510:
    return;
}
