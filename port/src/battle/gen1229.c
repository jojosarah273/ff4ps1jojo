/* FF4 source-port — interpreted module for func_80142E34.
 * Ground truth: src/func_80142E34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_80142E34(void)
{
    /* battle rows: 0xF42C/0xF42D texts; D54 <- D44 copy then
       80142E90. */
    latch(8);
    txt_draw(0xF42C);
    func_800F8F74(0xF42D);
    func_80140558();
    sep();
    D_8019ED54[0] = D_8019ED44[0];
    func_80142E90();
}
