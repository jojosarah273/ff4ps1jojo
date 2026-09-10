/* FF4 source-port — interpreted module for battle_anim_a8_x3_x2_rows_e8_spin.
 * Ground truth: src/battle_anim_a8_x3_x2_rows_e8_spin.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_a8_x3_x2_rows_e8_spin(void)
{
    /* battle anim: 801970A8 x3 / 80197168 x2 rows; 801971E8 spin
       loop on 0xE0/1/0x200. */
    battle_anim_f2c_v0_gates_l19711c_l();
    battle_anim_f2c_v0_gates_l19711c_l();
    anim_struct_init_u16s_u8s_zero_run();
    anim_struct_init_u16s_u8s_zero_run();
    battle_anim_f2c_v0_gates_l19711c_l();
    anim_struct_init_u16s_u8s_zero_run(0xE0);
    battle_anim_f2c_v0_gates_l19711c_l(1);
    do {
        fn_1x971e8(0x200);
    } while (io_just() != 0);
    return;
}
