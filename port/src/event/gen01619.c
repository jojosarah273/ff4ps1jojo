/* FF4 source-port — interpreted module for func_8018F4B8.
 * Ground truth: src/func_8018F4B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8018F4B8(void)
{
    /* event: 801976E8 prep; t2/t1 latch loop; 80197608/801976F8
       tail. */
    func_801976E8();
    for (;;) {
        /* t2/t1 latch */
        if (io_just() == 0)
            break;
    }
    func_80197608();
    func_801976F8();
    return;
}
