/* FF4 source-port — interpreted module for func_8016B650.
 * Ground truth: src/func_8016B650.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_8016B650(void) {
    u32 base = cell_state(0x2FF);
    u16 k = 0x220;
    do {
        *(u8 *)(base + k) = 0;
        k = (k - 1) & 0xFFFF;
    } while (k != 0);
}
