/* FF4 source-port — interpreted module for ability_rows_x16ae_x16b0_texts_wit.
 * Ground truth: src/ability_rows_x16ae_x16b0_texts_wit.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void ability_rows_x16ae_x16b0_texts_wit(void)
{
    /* ability rows: 0x16AE-0x16B0 texts with 54D4(3B04) gates;
       8013B04C/8012219C tails. */
    txt_set(0x16AE);
    if (io_press(cell_state(0x16AF)) != 0)
        goto L13B034;
    if (io_press(cell_state(0x16B0)) != 0)
        goto L13B034;
    txt_set(0x16AF);
    if (io_press(cell_state(0x16B0)) != 0)
        goto L13B034;
    row_close();
    func_8013B04C();
    return;
L13B034:
    fn_1x2219c();
    return;
}
