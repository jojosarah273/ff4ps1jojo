/* FF4 source-port — interpreted module for func_800F4F28.
 * Ground truth: src/func_800F4F28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *volatile D_8019ED50;
void row_arm2(u8 *p) {
    *D_8019ED50 = (u32)*p << 1;
    *p = *(u8 *)D_8019ED50;
}
