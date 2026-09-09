/* FF4 source-port — interpreted module for func_801369B8.
 * Ground truth: src/func_801369B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void func_801369B8(void)
{
    cell_cursor_dec();
    cell_put(0x57);
    func_8012D204();
    if (io_just() != 0)
        goto end;
    tail(0xE5);
    func_80134AF8();
    if (io_go() == 0)
        goto end;
    row_page(0x57);
    {
        u8 *p = D_8019ED40;
        *p = (u8)(*p << 2);
    }
    battle_put43();
    latch(8);
    cell_draw(0xFE15);
end:
    row_close2();
}
