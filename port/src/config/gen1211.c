/* FF4 source-port — interpreted module for func_8015EB00.
 * Ground truth: src/func_8015EB00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015EB00(void)
{
    func_80160AAC();
    txt_set(0x38FE);
    if (gate(0x8080) == 0) {
        row_read(0x7F);
        txt_draw(0x38FE);
        func_8006508C();
    } else {
        func_80160B8C();
        func_80061860();
        func_8015E910();
    }
}
