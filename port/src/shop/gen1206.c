/* FF4 source-port — interpreted module for func_8016762C.
 * Ground truth: src/func_8016762C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_80070174(void);


void func_8016762C(void) {
    ;
    do {
        func_80070174();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
}
