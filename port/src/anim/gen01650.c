/* FF4 source-port — interpreted module for func_8017EAC8.
 * Ground truth: src/func_8017EAC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8017EAC8(void)
{
    /* battle anim: wide v0 gate ladder (L17EB3C..L17EF48) then
       the 2x 80194640 + spin + 80194640 close (L17F01C). */
    /* v0 gates -> L17EB88/L17EB3C/L17EC04/L17ED50/L17EEFC */
    func_80194640();
    func_80194640();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    func_80194640();
    return;
}
