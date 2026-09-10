/* FF4 source-port — interpreted module for fn_1x4a488.
 * Ground truth: src/fn_1x4a488.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void fn_1x4a488(void)
{
    io_poll(0xFF);
    if (io_just() == 0) {
        row_sel_cell_cur();
        *D_8019ED54 = *D_8019ED44;
        jr_a0_twin_of_a154_same_entry_batt();
    }
}
