/* FF4 source-port — interpreted module for func_800F7328.
 * Ground truth: src/func_800F7328.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED60;
extern u8 *D_8019ED5C;
void func_800F7328(u32 a0)
{
    *D_8019ED5C = *(u8 *)cell_state(a0 + *D_8019ED60);
}
