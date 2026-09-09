/* FF4 source-port — interpreted module for func_80109378.
 * Ground truth: src/func_80109378.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void func_80109378(void)
{
    /* battle: key 0x42; on 53C0()==0 latch 0x42 into D40. */
    io_poll(0x42);
    if (io_go() == 0)
        D_8019ED40[0] = 0x42;
}
