/* FF4 source-port — interpreted module for battle_rows_xf42c_xf42d_texts_d54.
 * Ground truth: src/battle_rows_xf42c_xf42d_texts_d54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void battle_rows_xf42c_xf42d_texts_d54(void)
{
    /* battle rows: 0xF42C/0xF42D texts; D54 <- D44 copy then
       80142E90. */
    latch(8);
    txt_draw(0xF42C);
    cell_clear_bank(0xF42D);
    gpu_driver_run();
    sep();
    D_8019ED54[0] = D_8019ED44[0];
    fn_1x42e90();
}
