/* FF4 source-port — interpreted module for func_8014D490.
 * Ground truth: src/func_8014D490.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_8014D490(void)
{
    /* battle rows: 0x1813 text + 0x07 cells; D54 <- D44 copy then
       8014D4D4. */
    txt_set(0x1813);
    row_read(7);
    D_8019ED54[0] = D_8019ED44[0];
    func_8014D4D4();
}
