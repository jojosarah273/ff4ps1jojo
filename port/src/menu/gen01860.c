/* FF4 source-port — interpreted module for func_800F5B2C.
 * Ground truth: src/func_800F5B2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019ED50;
void func_800F5B2C(u8 *p) {
    u8 v = *p - 1;
    *p = v;
    *D_8019ED50 = v;
}
