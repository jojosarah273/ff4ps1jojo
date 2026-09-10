/* FF4 source-port — interpreted module for fn_1x048ec.
 * Ground truth: src/fn_1x048ec.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED30;
void fn_1x048ec(void)
{
    if ((*(u8 *)cell_state(0) & 0x80) && *D_8019ED30 == 0)
        *D_8019ED30 = 1;
}
