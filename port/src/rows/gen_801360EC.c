/* FF4 source-port — interpreted module for fn_1x360ec.
 * Ground truth: src/fn_1x360ec.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern s16 *D_8019EDC2;
extern s16 *D_8019ED8E;
extern u32 D_8019EDD0[16];
extern s16 *D_8019EDC4;
void fn_1x360ec(void)
{
    if (*D_8019EDC2 == 8) {
        ability_v1_v0_gates_pick_ee4_f0e8();
        if ((s32)D_8019EDD0[*D_8019ED8E] > 0) {
            *D_8019EDC4 = 0x42;
            return -1;
        }
    }
    return 0;
}
