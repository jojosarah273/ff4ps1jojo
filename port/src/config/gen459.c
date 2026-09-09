/* FF4 source-port — interpreted module for func_801577D0.
 * Ground truth: src/func_801577D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801577D0(void)
{
    /* options grid: 0x16A8 gate picks the 0x2001-0x2201 row fill
       vs reversed order; fully parallel to 8016571C's tail. */
    txt_set(0x16A8);
    if (gate(0x202) != 0)
        goto L157890;
    txt_set(0x2001);
    row_read(0x7F);
    txt_draw(0x2001);
    txt_set(0x2081);
    row_read(0x7F);
    txt_draw(0x2081);
    txt_set(0x2101);
    row_read(0x7F);
    txt_draw(0x2101);
    txt_set(0x2181);
    txt_draw(0x2181);
    txt_set(0x2201);
    txt_draw(0x2201);
    return;
L157890:
    txt_set(0x2001);
    txt_draw(0x2001);
    txt_set(0x2081);
    txt_draw(0x2081);
    txt_set(0x2101);
    txt_draw(0x2101);
    txt_set(0x2181);
    row_read(0x7F);
    txt_draw(0x2181);
    txt_set(0x2201);
    row_read(0x7F);
    txt_draw(0x2201);
    return;
}
