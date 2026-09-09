/* FF4 source-port — interpreted module for func_80106908.
 * Ground truth: src/func_80106908.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F654C(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800FE778(void);
extern void func_800F62BC(u32 v0);
extern void func_800F5DA0(u32 v0);
extern int func_800F5B8C(u32 v0);
void func_80106908(void) {
    latch(0x8);
    cell_put(0x7);
    do {
        func_800FE778();
        key_page(0xBB);
        key_page(0xBB);
        poll_pair(0x7);
    } while (poll_go(0x202) != 0);
}
