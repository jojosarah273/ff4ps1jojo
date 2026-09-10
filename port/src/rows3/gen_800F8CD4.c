/* FF4 source-port — interpreted module for func_800F8CD4.
 * Ground truth: src/func_800F8CD4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED5C;
uint32_t cell_push5c(u32 a0)
{
    return (((volatile u8 *)(catalog_base()))[0x0] = ((u8)(u8)((volatile u8 *)(D_8019ED5C))[0x0]));
    return 0;
}
