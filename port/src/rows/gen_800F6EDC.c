/* FF4 source-port — interpreted module for cell_0xf6edc.
 * Ground truth: src/cell_0xf6edc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void cell_0xf6edc(void)
{
    u8 *p = (u8 *)cell_add16;
    ((volatile u8 *)0x1F8003C0u)[0] = p[0];
    ((volatile u8 *)0x1F8003C0u)[1] = p[1];
}
