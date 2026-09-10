/* FF4 source-port — interpreted module for fn_1x4b5a8.
 * Ground truth: src/fn_1x4b5a8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x4b5a8(void)
{
    for (;;) {
        func_8007259C();
        battle_spell_detail_f38_b04_row_pa();
        if (io_go() != 0)
            break;
        page_open(0xF118);
        label(0xF321);
    }
}
