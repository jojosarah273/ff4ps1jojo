/* FF4 source-port — interpreted module for func_800F7430.
 * Ground truth: src/func_800F7430.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED60;
void func_800F7430(u8 *p)
{
    D_8019ED60[0] = p[0];
    D_8019ED60[1] = p[1];
}
