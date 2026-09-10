/* FF4 source-port — interpreted module for window_state_byte_variant_d50_a0_x.
 * Ground truth: src/window_state_byte_variant_d50_a0_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u32 *D_8019ED50;
extern u8 *D_8019ED68;
u8 window_state_byte_variant_d50_a0_x(u32 a0)
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
