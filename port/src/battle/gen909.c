/* FF4 source-port — interpreted module for func_80116398.
 * Ground truth: src/func_80116398.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F8D6C(u32 v0);
extern void func_800FE778(void);
extern void func_800F7270(u32 v0);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_80116398(void) {
    tail(0x89);
    do {
        func_800FE778();
        page(0x89);
        func_800F5E48();
        tail(0x89);
    } while (poll_go(0x202) != 0);
}
