/* FF4 source-port — interpreted module for cell_0xf9140.
 * Ground truth: src/cell_0xf9140.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void cell_0xf9140(u32 a0)
{
    u8 *q = (u8 *)catalog_base(a0 + *D_8019ED54);
    q[0] = 0;
    q[1] = 0;
}
