/* FF4 source-port — interpreted module for func_80153098.
 * Ground truth: src/func_80153098.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void func_80153098(void)
{
    u16 v = *D_8019ED54;
    func_800F78C4(cell_peek_v(0x13FEFE, v) + v);
}
