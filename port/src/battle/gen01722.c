/* FF4 source-port — interpreted module for func_801048EC.
 * Ground truth: src/func_801048EC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED30;
void func_801048EC(void)
{
    if ((*(u8 *)cell_state(0) & 0x80) && *D_8019ED30 == 0)
        *D_8019ED30 = 1;
}
