/* FF4 source-port — interpreted module for func_80121B5C.
 * Ground truth: src/func_80121B5C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53C0(void);
extern void func_80121FDC(void);
extern void func_800F62BC(u32 v);
extern void func_8012202C(void);
extern void func_800F5DA0(u32 v);
extern void func_800F654C(u32 v);
extern void func_800F824C(u32 v);
extern void func_80121BE4(void);
void func_80121B5C(void) {
    if (io_go() == 0) {
        func_8012202C();
        poll_pair(0x65);
    } else {
        func_80121FDC();
        key_page(0x65);
    }
    latch(0xF9);
    cell_put(0x1E);
    latch(0xFB);
    cell_put(0x1F);
    latch(0xFE);
    cell_put(0x20);
    func_80121BE4();
}
