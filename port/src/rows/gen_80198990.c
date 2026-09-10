/* FF4 source-port — interpreted module for fn_1x98990.
 * Ground truth: src/fn_1x98990.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019ECF4;
extern u32 *D_8019ECF8;
void fn_1x98990(u32 a0, u32 a1)
{
    *D_8019ECF4 = a0;
    *D_8019ECF8 = a1;
    if (a0 == 0x21)
        register_only_stub_xc_see_asm_for_1976(0xF4000002, 0x301);
    else if (a0 == 0x22)
        register_only_stub_xc_see_asm_for_1976(0xF4000002, 0x302);
    return 0;
}
