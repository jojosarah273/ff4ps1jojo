/* FF4 source-port — interpreted module for func_80168148.
 * Ground truth: src/func_80168148.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80168148(void)
{
    txt_set(0x38E6);
    if (gate(0x202) == 0)
        func_801681C0();
    else {
        io_poll(1);
        if (io_just() != 0)
            func_801681C0();
        else {
            io_poll(2);
            func_801681C0();
        }
    }
}
