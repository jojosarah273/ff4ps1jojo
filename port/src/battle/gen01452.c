/* FF4 source-port — interpreted module for battle_rows_x1813_text_x07_cells_d.
 * Ground truth: src/battle_rows_x1813_text_x07_cells_d.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void battle_rows_x1813_text_x07_cells_d(void)
{
    /* battle rows: 0x1813 text + 0x07 cells; D54 <- D44 copy then
       8014D4D4. */
    txt_set(0x1813);
    row_read(7);
    D_8019ED54[0] = D_8019ED44[0];
    fn_1x4d4d4();
}
