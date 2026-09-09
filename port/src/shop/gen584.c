/* FF4 source-port — interpreted module for func_80160AAC.
 * Ground truth: src/func_80160AAC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80160AAC(void)
{
    /* options banner: 0x2726/0x2725/0x28A2/0x38FE texts; 4120 gates
       pick the 0xFE values. */
    txt_set(0x2726);
    func_800F4280(0x28A2);
    if (sel(2) != 0)
        goto L160B1C;
    sep();
    txt_draw(0x38FE);
    txt_set(0x2726);
    row_read(0x40);
    if (sel(2) != 0)
        goto L160B7C;
    latch(0x84);
    txt_draw(0x38FE);
    return;
L160B1C:
    txt_set(0x2725);
    func_800F4280(0x28A2);
    if (sel(2) != 0)
        return;
    latch(1);
    txt_draw(0x38FE);
    txt_set(0x2725);
    row_read(0x40);
    if (sel(2) != 0)
        return;
    latch(0x82);
    txt_draw(0x38FE);
    return;
L160B7C:
    return;
}
