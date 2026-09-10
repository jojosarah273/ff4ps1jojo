/* FF4 source-port — interpreted module for fn_1x18750.
 * Ground truth: src/fn_1x18750.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x18750(void)
{
    cell_step();
    tail(0xB3);
    row_page(0x81);
    if (gate(0x202) == 0) {
        txt_cell(0x9D5);
        battle_rows_x6_x83_x82_x79_x81_win();
        battle_wndfx_run();
    } else {
        battle_rows_x79_x83_x82_x81_window();
        battle_wndfx_run();
    }
}
