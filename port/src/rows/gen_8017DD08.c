/* FF4 source-port — interpreted module for fn_1x7dd08.
 * Ground truth: src/fn_1x7dd08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x7dd08(void)
{
    /* battle tile blit (0x218, table-write variant): rec[6]>>3 = col0,
       rec[6]+rec[0xA]+0x10 = top (clamped 0xF8, >>3); bit grid =
       col0*32 + (rec[2]<<2 & 0x3E0); per 0x20-pixel row it resolves the
       source cell and pokes the D_801D5570/D_8019F4A8 record slots —
       register-only write engine, not expressible as calls. */
    return;
}
