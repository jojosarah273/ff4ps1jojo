/* FF4 source-port — interpreted module for cell_0xf8a48.
 * Ground truth: src/cell_0xf8a48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void cell_0xf8a48(u32 a0)
{
    ((volatile u8 *)(catalog_base(cell_bank_sel((u16)a0))))[0x0] = ((u8)(u8)((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x8]);
    return (((volatile u8 *)(catalog_base(cell_bank_sel((u16)a0))))[0x1] = ((u8)(u8)((volatile u8 *)((0x1F800000 | 0x1F8003C0)))[0x9]));
}
