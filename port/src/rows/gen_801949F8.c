/* FF4 source-port — interpreted module for fn_1x949f8.
 * Ground truth: src/fn_1x949f8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 D_800F39B4;
extern u8 *D_8019DB56;
extern u32 *D_8019DB50;
void fn_1x949f8(u32 a0)
{
    if (*D_8019DB56 >= 2)
        ((void (*)(u8 *, u8 *))D_8019DB50[0])((u8 *)D_800F39B4, (u8 *)a0);
}
