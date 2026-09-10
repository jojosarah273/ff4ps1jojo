/* FF4 source-port — interpreted module for battle_anim_chain_s2_s1_v0_registe.
 * Ground truth: src/battle_anim_chain_s2_s1_v0_registe.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_anim_chain_s2_s1_v0_registe(void)
{
    /* battle anim chain: s2/s1/v0 register gates select the sprite
       slots; 3x 801971A8(2), 801951E0/801973B8 reads, 5x 80197248
       row commits; returns at L185000. */
    /* s2/s1 gates -> L184B5C / L185000 */
    anim_pack_word(2);
    anim_pack_word(2);
    anim_pack_word(2);
    /* s2/v0 + s1/v0 gates -> L184BC8 / L184C3C / L184C84 */
    func_801951E0();
    /* v1/v0 gate -> L184CC8 */
    func_801951E0();
    /* L184D50/L184D64: gate loop with 801973B8 polls */
    anim_cmd_header();
    /* L184DE4: v0 gates */
    anim_cmd_header();
    anim_cmd_header();
    anim_cmd_header();
    func_801951E0();
    fn_1x97248();
    fn_1x97248();
    fn_1x97248();
    fn_1x97248();
    fn_1x97248();
    return;
}
