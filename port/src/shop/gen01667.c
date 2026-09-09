/* FF4 source-port — interpreted module for func_80162CD8.
 * Ground truth: src/func_80162CD8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
void func_80162CD8(void)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)cell_draw_cur()));
}
