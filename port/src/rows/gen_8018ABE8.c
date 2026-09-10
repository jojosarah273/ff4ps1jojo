/* FF4 source-port — interpreted module for fn_1x8abe8.
 * Ground truth: src/fn_1x8abe8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019B124;
void fn_1x8abe8(u32 a0)
{
    u32 *p = D_8019B124;
    *p &= 0xFFF8FFFF;
    return a0 ? (*p | 0x30000) : (*p | 0x50000);
}
