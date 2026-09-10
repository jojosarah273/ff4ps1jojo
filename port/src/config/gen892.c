/* FF4 source-port — interpreted module for fn_1x3aa08.
 * Ground truth: src/fn_1x3aa08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u8 *D_8019ED40;
void fn_1x3aa08(void)
{
    tail(0x45);
    row_page(0x45);
    row_read(0x1F);
    txt_draw(0x1BA8);
    row_prep(0x20);
    cell_push9(0x16AA);
    *D_8019ED44 = (u16)(*D_8019ED44 >> 5);
    row_prep_close();
    row_read(0x1F);
    txt_draw(0x1BA9);
    row_page(0x46);
    {
        u8 *p = D_8019ED40;
        *p = (u8)(*p >> 2);
    }
    txt_draw(0x1BAA);
}
