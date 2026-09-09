/* FF4 source-port — interpreted module for func_800F52BC.
 * Ground truth: src/func_800F52BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
u8 func_800F52BC(u32 a0)
{
    /* window state (byte variant): D50 <- a0&0xFF; same flags. */
    D_8019ED50[0] = a0 & 0xFF;
    D_8019ED68[0] &= 0x3D;
    D_8019ED68[0] |= (D_8019ED50[0] & 0xC0);
    D_8019ED50[0] &= D_8019ED40[0];
    if (D_8019ED50[0] == 0)
        D_8019ED68[0] |= 2;
    return D_8019ED68[0];
}
