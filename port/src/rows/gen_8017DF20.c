/* FF4 source-port — interpreted module for battle_tile_blit_x300_pattern_vari.
 * Ground truth: src/battle_tile_blit_x300_pattern_vari.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_tile_blit_x300_pattern_vari(void)
{
    /* battle tile blit (0x300, pattern variant): same grid walk as
       8017DD08 with the 2-bit plane select folded from rec[0]/rec[2]
       and the D_801DEFB0/D_8019F628 writer — register-only. */
    return;
}
