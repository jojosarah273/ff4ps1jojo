/* FF4 source-port — interpreted module for rows_x2050_text_d54_d44_copy_c_xa6.
 * Ground truth: src/rows_x2050_text_d54_d44_copy_c_xa6.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void rows_x2050_text_d54_d44_copy_c_xa6(void)
{
    /* rows: 0x2050 text; D54 <- D44 copy + 971C; 80153098/
       7270(0xA6)/8768(0x2054)/71DC(1)/8D6C(0xD4). */
    latch(0x80);
    cell_draw(0x2050);
    page_paint_cur();
    D_8019ED54[0] = D_8019ED44[0];
    sep();
    option_mark_54();
    page(0xA6);
    cell_draw(0x2054);
    wnd_open(1);
    tail(0xD4);
}
