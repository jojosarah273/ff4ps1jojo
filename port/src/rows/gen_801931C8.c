/* FF4 source-port — interpreted module for fn_1x931c8.
 * Ground truth: src/fn_1x931c8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019CF34[8];
extern u32 D_8019CF38[8];
void fn_1x931c8(u32 a0, u32 a1)
{
    ((volatile u8 *)(D_8019CF38[0]))[0x0] = (0 + 0x100);
    return (D_8019CF34[0] = 0);
}
