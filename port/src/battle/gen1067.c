/* FF4 source-port — interpreted module for stat_refresh_verify_driver_loops_u.
 * Ground truth: src/stat_refresh_verify_driver_loops_u.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void stat_refresh_verify_driver_loops_u(void)
{
    /* stat-refresh/verify driver; loops until the v0==v1 latch at L10C000
       breaks. Register gates decide which stat-rows are recomputed
       (8010C1AC / 8010D9D4 / 8010D34C / 8010D2A0 / 8010D4EC). */
    cell_state_of();
    cell_state(0x8FE);
    cell_state(0xEDC);
    cell_peek_cur();
    txt_set(0x8FE);
    if (gate(0x202) == 0)
        return;
L10b7a0:
    for (;;) {
        /* v0 gates -> L10BF70 / L10BE54 / L10B8AC pathways */
        battle_rows_b9c_xedb_b04_c3c_gates();
        battle_row_linear();
        battle_row_linear();
        if (battle_row_linear() != 0)
            goto L10BA5C;
        battle_rows_b9c_xedb_b04_c3c_gates();
        battle_rows_c3c_b9c_gates_d54c_a0();
        goto L10BBC4;
    L10BA5C:
        battle_rows_b9c_xedb_b04_c3c_gates();
        battle_rows_c3c_b9c_gates_d54c_a0();
        goto L10BBC4;
    L10BAC8:
        if (battle_row_linear() != 0)
            goto L10BB5C;
        battle_rows_b9c_xedb_b04_c3c_gates();
        battle_rows_c3c_b9c_gates_d54c_a0();
        goto L10BBC4;
    L10BB5C:
        battle_rows_b9c_xedb_b04_c3c_gates();
        battle_rows_c3c_b9c_gates_d54c_a0();
    L10BBC4:
        battle_rows_b9c_xedb_b04_c3c_gates();
        battle_rows_c3c_b9c_gates_d54c_a0();
        battle_rows_b9c_xedb_b04_c3c_gates();
        battle_rows_c3c_b9c_gates_d54c_a0();
        goto L10BE54;
        goto L10BF70;
    L10BE54:
        battle_rows_c3c_b9c_d54c_a0_linear();
        fn_1x0d4ec();
    L10BF70:
        /* v0 gate -> L10C000 (loop latch) */
        /* L10C000: regcmp v0,v1 -> loop back to L10B7A0 when equal,
           else fall out to L10C188 (return) */
        if (gate(0x202) == 0)
            return;
    }
    return;
}
