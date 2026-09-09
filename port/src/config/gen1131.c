/* FF4 source-port — interpreted module for func_80122334.
 * Ground truth: src/func_80122334.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED58;
void func_80122334(void)
{
    /* rows: u16 D44<->D58 swap with 922C prep + 9410 close. */
    row_prep(0x20);
    cell_cursor_ret2();
    D_8019ED44[0] = D_8019ED58[0];
    sep_a();
    cell_pos_fwd(0x40);
    D_8019ED58[0] = D_8019ED44[0];
    cell_cursor_adv2();
    row_prep_close();
}
