/* FF4 source-port — interpreted module for cell_0xf6b38.
 * Ground truth: src/cell_0xf6b38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED5C;
void cell_0xf6b38(u32 a0)
{
    u8 v = *D_8019ED5C;
    catalog_base(a0 + v);
    *(volatile u8 *)0x1F8003C8u = *D_8019ED5C;
}
