/* FF4 source-port — interpreted module for fn_1x6762c.
 * Ground truth: src/fn_1x6762c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_80070174(void);


void fn_1x6762c(void) {
    ;
    do {
        func_80070174();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
}
