/* FF4 source-port — interpreted module for func_8016694C.
 * Ground truth: src/func_8016694C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED40;
extern u16 *D_8019ED44;
extern u16 *D_8019ED54;
extern u8 D_8019A12C[];
void func_8016694C(void)
{
    /* shop rows: 0x13 window + 0x03 cells; D54 <- D44 copy then
       D40 <- D_8019A12C[D54] via 8014D528. */
    row_page(0x13);
    row_read(3);
    D_8019ED54[0] = D_8019ED44[0];
    D_8019ED40[0] = D_8019A12C[D_8019ED54[0]];
    func_8014D528();
}
