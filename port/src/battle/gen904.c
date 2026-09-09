/* FF4 source-port — interpreted module for func_80119DE4.
 * Ground truth: src/func_80119DE4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80119DE4(void)
{
    /* shop buy: 0x1700 gate picks 80103790/801038D4; then 79/7A/7B
       windows + 0x81/0x4200 titles via 8011EA5C. */
    txt_set(0x1700);
    if (gate(2) == 0)
        goto L119E14;
    func_80103790();
    goto L119E1C;
L119E14:
    func_801038D4();
L119E1C:
    open_row(0x79);
    open_row(0x7A);
    open_row(0x7B);
    latch(0x81);
    txt_draw(0x4200);
    func_800FE7B0();
    latch(0xF);
    txt_draw(0x2100);
    func_800F5448();
    func_8011EA5C();
    return;
}
