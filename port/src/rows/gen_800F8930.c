/* FF4 source-port — interpreted module for cell_0xf8930.
 * Ground truth: src/cell_0xf8930.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED60;
void cell_0xf8930(u32 a0)
{
    u8 *q = (u8 *)catalog_base(a0 + *D_8019ED60);
    *q = *(volatile u8 *)0x1F8003C8u;
}
