/* FF4 source-port — interpreted module for func_80170084.
 * Ground truth: src/func_80170084.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_80170084(void) {
    ;
    do {
        shop_row_41();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
}
