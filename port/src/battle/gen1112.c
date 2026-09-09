/* FF4 source-port — interpreted module for func_80141240.
 * Ground truth: src/func_80141240.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F8D6C(u32 v0);
extern void func_800F7500(u32 v0);
extern void func_80141290(void);
void func_80141240(void) {
    tail(0);
    draw_pad(0);
    func_80141290();
    draw_pad(0x40);
    func_80141290();
    draw_pad(0x80);
    func_80141290();;
}
