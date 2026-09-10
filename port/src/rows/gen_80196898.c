/* FF4 source-port — interpreted module for fn_1x96898.
 * Ground truth: src/fn_1x96898.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019DC90[8];
extern u32 D_8019DC94[8];
void fn_1x96898(void)
{
    D_8019DC90[0] = (event_spin_wait(1) + 0xF0);
    return (D_8019DC94[0] = 0);
}
