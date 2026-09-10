/* FF4 source-port — interpreted module for fn_1x68148.
 * Ground truth: src/fn_1x68148.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x68148(void)
{
    txt_set(0x38E6);
    if (gate(0x202) == 0)
        shop_c3c_b04_x2000_b9c_gates_c_loo();
    else {
        io_poll(1);
        if (io_just() != 0)
            shop_c3c_b04_x2000_b9c_gates_c_loo();
        else {
            io_poll(2);
            shop_c3c_b04_x2000_b9c_gates_c_loo();
        }
    }
}
