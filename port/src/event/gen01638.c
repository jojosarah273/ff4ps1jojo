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
    angle_from_ratio_quadrant_correcte();
    trig_table_abs_folds();
L1830E4:
    fn_1x82ddc();
    fn_1x82e18();
    fn_1x82ddc();
    fn_1x82e18();
    fn_1x82ddc();
    fn_1x82e18();
    fn_1x82ddc();
    fn_1x82e18();
    return;
L183070:
    return;
}
