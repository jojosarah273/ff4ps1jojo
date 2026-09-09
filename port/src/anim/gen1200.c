/* FF4 source-port — interpreted module for func_80170084.
 * Ground truth: src/func_80170084.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_8016BB44(void);
extern void func_800F5E48(void);
extern int func_800F5C64(u32 v0);
void func_80170084(void) {
    ;
    do {
        func_8016BB44();
        func_800F5E48();
    } while (poll_go(0x202) != 0);
}
