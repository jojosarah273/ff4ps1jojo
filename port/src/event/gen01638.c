/* FF4 source-port — interpreted module for battle_anim_fb8_preps_then_x_ddc_e.
 * Ground truth: src/battle_anim_fb8_preps_then_x_ddc_e.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_fb8_preps_then_x_ddc_e(void)
{
    /* battle anim: 80198058/80197FB8 preps then 4x
       80182DDC/80182E18 pairs. */
    if (io_just() != 0)
        goto L183070;
    func_80198058();
    func_80197FB8();
L1830E4:
    func_80182DDC();
    func_80182E18();
    func_80182DDC();
    func_80182E18();
    func_80182DDC();
    func_80182E18();
    func_80182DDC();
    func_80182E18();
    return;
L183070:
    return;
}
