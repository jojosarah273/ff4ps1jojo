/* FF4 source-port — interpreted module for func_80106860.
 * Ground truth: src/func_80106860.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_80106830(void);
extern void func_800F654C(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800FE778(void);
extern void func_800F5DA0(u32 v0);
extern int func_800F5B8C(u32 v0);
void func_80106860(void) {
    func_80106830();
    latch(0x7);
    cell_put(0x89);
    do {
        func_800FE778();
        poll_pair(0x89);
    } while (poll_go(0x202) != 0);
}
