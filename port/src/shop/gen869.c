/* FF4 source-port — interpreted module for func_8016BE1C.
 * Ground truth: src/func_8016BE1C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016BE1C(void)
{
    /* shop rows: 3F94(3B04) reads + 0x2000/0x2040 cells; linear. */
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state_of());
    func_800F87DC(0x2000);
    sep_a();
    cell_peek0(cell_state_of());
    func_800F87DC(0x2040);
    sep();
    row_prep_close();
    return;
}
