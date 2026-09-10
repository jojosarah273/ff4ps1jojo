/* FF4 source-port — interpreted module for fn_1x17e9c.
 * Ground truth: src/fn_1x17e9c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED30;
void fn_1x17e9c(void)
{
    if (*D_8019ED30 != 0) {
        *D_8019ED30 = 0;
        open_row(0xAC);
    }
    row_page(0xAC);
    if (gate(0x202) == 0) {
        key_page(0xAC);
        battle_wndfx_run();
    } else {
        open_row(0xAC);
        battle_wndfx_run();
    }
}
