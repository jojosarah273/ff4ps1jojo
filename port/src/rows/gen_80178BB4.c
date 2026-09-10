/* FF4 source-port — interpreted module for fn_1x78bb4.
 * Ground truth: src/fn_1x78bb4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 D_8019EE90[4];
void fn_1x78bb4(void)
{
    D_8019EE90[0] = 0;
    D_8019EE90[1] = 0;
    D_8019EE90[2] = 0x100;
    D_8019EE90[3] = 0x1E0;
    fn_1x94518((u32)D_8019EE90, 8, 8, 8);
    cb_slot15(0);
}
