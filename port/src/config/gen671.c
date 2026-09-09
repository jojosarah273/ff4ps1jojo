/* FF4 source-port — interpreted module for func_8012C42C.
 * Ground truth: src/func_8012C42C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012C42C(void)
{
    /* config rows (twin of 8012C360 with 0xB const): 8012C0A8 prep,
       0x60/0x45 windows. */
    func_8012C0A8();
    /* regcmp v0/v1 -> L12C4E8 */
    draw_pad(0xB);
    row_prep(0x20);
    func_800F6764(0x60);
    sep_a();
    cell_peek0(cell_state(0x45));
    step2();
    step2();
    func_800F5520(func_800F3A70(0x60));
    cell_state_of();
    if (io_go() == 0)
        goto L12C4C8;
    func_800F6764(0x60);
L12C4C8:
    poll_pair_cur();
    poll_pair_cur();
    func_800F8378(0x60);
    row_prep_close();
    return;
}
