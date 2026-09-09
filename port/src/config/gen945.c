/* FF4 source-port — interpreted module for func_801206DC.
 * Ground truth: src/func_801206DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801206DC(void)
{
    /* rows: 8011F360 prep, 0x29/0x1D/0x1E window cells; linear. */
    func_8011F360();
    row_prep(0x20);
    func_800F922C();
    sep_a();
    cell_peek0(cell_state(0x29));
    func_800F9410();
    row_prep_close();
    func_800F8960();
    stat_sync();
    func_800F8960(2);
    return;
}
