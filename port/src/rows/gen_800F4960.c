/* FF4 source-port — interpreted module for cell_0xf4960.
 * Ground truth: src/cell_0xf4960.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
extern u8 *D_8019ED40;
void cell_0xf4960(u32 a0)
{
    u16 *p = D_8019ED54;
    catalog_base(a0 + *p);
    *D_8019ED40 &= (u8)*p;
}
