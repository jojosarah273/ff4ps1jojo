/* FF4 source-port — interpreted module for func_8010D4EC.
 * Ground truth: src/func_8010D4EC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
void func_8010D4EC(u32 a0)
{
    return (((volatile u8 *)(D_8019ED40[0]))[0x0] = ((u8)cell_pull_c8_off()));
}
