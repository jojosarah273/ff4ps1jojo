/* FF4 source-port — interpreted module for func_8013EFD8.
 * Ground truth: src/func_8013EFD8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013EFD8(void)
{
    /* event: 3B04/3C3C rows with 3A70 loops on s1/s5/s4 latches;
       922C/9410 spins; 5410/971C tail. */
    cell_state_of();
    cell_state_of();
L13f020:
    for (;;) {
        func_800F3A70();
        cell_state_of();
    L13f03c:
        for (;;) {
            func_800F922C();
            if (io_press(1) == 0)
                continue;
            break;
        }
        func_800F9410();
        sep_a();
        sep();
        return;
    }
}
