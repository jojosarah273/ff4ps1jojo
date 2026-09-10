/* FF4 source-port — interpreted module for fn_1x91838.
 * Ground truth: src/fn_1x91838.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019B9EC[8];
void fn_1x91838(u32 a0)
{
    u32 tmp = D_8019B9EC[0];
D_8019B9EC[0] = a0;
    return tmp;
}
