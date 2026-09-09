/* FF4 source-port — interpreted module for func_801431E8.
 * Ground truth: src/func_801431E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_801431E8(void)
{
    /* battle rows: 0xF42C/0xF42D texts; D54 <- D44 copy then
       80142E90. */
    txt_draw(0xF42C);
    cell_clear_bank(0xF42D);
    func_80140558();
    sep();
    D_8019ED54[0] = D_8019ED44[0];
    func_80142E90();
}
