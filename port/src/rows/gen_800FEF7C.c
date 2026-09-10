/* FF4 source-port — interpreted module for shop_battle_v0_v1_v0_gates_pick_fe.
 * Ground truth: src/shop_battle_v0_v1_v0_gates_pick_fe.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void shop_battle_v0_v1_v0_gates_pick_fe(void)
{
    /* shop/battle: v0 + v1/v0 gates pick 800FEE34 pair, 80138F68
       pair or 80073D58 row; returns at L800FF014. */
    if (io_just() != 0)
        goto L800FF014;
    /* v1/v0 gate -> L800FEFF4 / L800FEFC8 */
    if (io_just() == 0)
        return;
    func_800FEE34();
    func_800FEE34();
    goto L800FF014;
L800FEFF4:
    config_rows_x1e0_x1e0_x19a_texts_x();
    config_rows_x1e0_x1e0_x19a_texts_x();
    goto L800FF014;
L800FF00C:
    func_80073D58();
    return;
L800FF014:
    return;
}
