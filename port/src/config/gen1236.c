/* FF4 source-port — interpreted module for func_8013EE18.
 * Ground truth: src/func_8013EE18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013EE18(void)
{
    /* event: 3C3C/3B04(0x2000)x2 gates (one 0x80); s0/a1+s0/a2
       regcmp loops; 8013F2C4 spin rows; v1/s5+s0/s3 latches. */
    cell_state_of();
    cell_state(0x2000);
    cell_state_of();
    /* s0/a1 + a0/v1 latch loops L13EE68/L13EED0 */
    func_8013F2C4();
    do {
        func_8013F2C4();
    } while (io_just() == 0);
    return;
}
