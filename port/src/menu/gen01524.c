/* FF4 source-port — interpreted module for func_800F8FB8.
 * Ground truth: src/func_800F8FB8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void open_row(u32 a0)
{
    return (((volatile u8 *)(cell_state((u16)a0)))[0x0] = ((u8)0));
}
