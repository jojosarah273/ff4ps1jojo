/* FF4 source-port — interpreted module for func_80118750.
 * Ground truth: src/func_80118750.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80118750(void)
{
    cell_step();
    tail(0xB3);
    row_page(0x81);
    if (gate(0x202) == 0) {
        txt_cell(0x9D5);
        func_801187C0();
        func_8011EA5C();
    } else {
        func_80118938();
        func_8011EA5C();
    }
}
