/* FF4 source-port — interpreted module for func_80178730.
 * Ground truth: src/func_80178730.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80178730(void)
{
    /* battle anim: 801970A8 x3 / 80197168 x2 rows; 801971E8 spin
       loop on 0xE0/1/0x200. */
    func_801970A8();
    func_801970A8();
    func_80197168();
    func_80197168();
    func_801970A8();
    func_80197168(0xE0);
    func_801970A8(1);
    do {
        func_801971E8(0x200);
    } while (io_just() != 0);
    return;
}
