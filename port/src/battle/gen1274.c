/* FF4 source-port — interpreted module for func_8010C368.
 * Ground truth: src/func_8010C368.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010C368(void)
{
    /* key-dialog flow for a status submenu. 9200/93DC pairs are the
       wait/read-input helpers; the v0 gates route confirm vs cancel tails;
       the L10CA28 latch loops back to L10C3AC while v1 != v0. */
    cell_state_of();
    if (cell_state(0x8FE) == 0)
        return;
L10c3ac:
    for (;;) {
        /* v0 gates -> L10C494 / L10C98C routes */
        /* L10C494 (cancel route): gates -> L10C8E8 / L10C544 */
        cell_cursor_dec();
        row_close2();
        /* both routes converge here */
    L10C8E8:
        /* v0 gates -> L10C924 / L10C930 */
    L10C98C:
        /* v0/a0 gates -> L10CA28 */
    L10CA28:
        /* v1/v0 latch -> loop L10C3AC (continue) / L10CA60 (break) */
        continue;
    }
    return;
}
