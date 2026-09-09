/* FF4 source-port — interpreted module for func_80174F64.
 * Ground truth: src/func_80174F64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_80174F64(void)
{
    txt_set(0x1704);
    io_poll(6);
    if (io_just() == 0)
        return;
    row_page(0x7A);
    {
        u8 *p = D_8019ED40;
        *p = (u8)(*p >> 2);
    }
    row_read(0xE);
    *D_8019ED54 = *D_8019ED44;
    func_800F6C68(0x15C3DA);
    txt_draw(0xEC7);
    func_800F6C68(0x15C3DB);
    txt_draw(0xEC8);
}
