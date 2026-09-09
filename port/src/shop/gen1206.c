/* FF4 source-port — interpreted module for func_8016762C.
 * Ground truth: src/func_8016762C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_80070174(void);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_8016762C(void) {
    ;
    do {
        func_80070174();
        func_800F5E48();
    } while (poll_go(0x202) != 0);
}
