/* FF4 source-port — interpreted module for func_8015330C.
 * Ground truth: src/func_8015330C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
void func_8015330C(void)
{
    /* rows: u16 D44<->D54 swap chain with 5410/971C. */
    row_prep(0x20);
    D_8019ED44[0] = D_8019ED54[0];
    sep_a();
    func_800F4064(0x80);
    D_8019ED54[0] = D_8019ED44[0];
    sep();
    row_prep_close();
}
