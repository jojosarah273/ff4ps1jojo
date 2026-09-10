/* FF4 source-port — interpreted module for fn_1x5eb70.
 * Ground truth: src/fn_1x5eb70.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x5eb70(void)
{
    options_banner_x2726_x2725_x28a2_x();
    txt_set(0x38FE);
    if (gate(0x8080) == 0) {
        row_read(0x7F);
        txt_draw(0x38FE);
        func_8006508C();
    } else {
        fn_1x60b8c();
        func_80061860();
        func_800654CC();
    }
}
