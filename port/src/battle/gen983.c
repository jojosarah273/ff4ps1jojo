/* FF4 source-port — interpreted module for func_80102444.
 * Ground truth: src/func_80102444.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4(void);
extern void func_800F5574(u32 v);
extern void func_800F62BC(u32 v);
extern void func_800F6630(u32 v);
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
