/* FF4 source-port — interpreted module for func_8014A488.
 * Ground truth: src/func_8014A488.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_8014A488(void)
{
    io_poll(0xFF);
    if (io_just() == 0) {
        row_sel_cell_cur();
        *D_8019ED54 = *D_8019ED44;
        func_8014A4DC();
    }
}
