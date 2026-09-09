/* FF4 source-port — interpreted module for func_80142DC0.
 * Ground truth: src/func_80142DC0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_80142DC0(void)
{
    /* battle rows: 80142E34 + D54 <- D44; loop on 654C(8)/
       80143E44/6364/5958(0x10). */
    func_80142E34();
    sep();
    D_8019ED54[0] = D_8019ED44[0];
    do {
        latch(8);
        func_80143E44();
        cell_step();
        poll_t(0x10);
    } while (io_just() == 0);
}
