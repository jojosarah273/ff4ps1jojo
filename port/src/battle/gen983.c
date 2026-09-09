/* FF4 source-port — interpreted module for func_80102444.
 * Ground truth: src/func_80102444.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern void func_80102E78(void);
void func_80102444(void) {
    do {
        func_80102E78();
        key_page(0xB5);
        key_page(0x79);
        row_page(0x79);
        io_poll(0x10);
    } while (!io_just());
}
