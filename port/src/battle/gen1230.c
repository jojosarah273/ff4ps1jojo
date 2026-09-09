/* FF4 source-port — interpreted module for func_8014202C.
 * Ground truth: src/func_8014202C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_80140558(void);


void func_8014202C(void) {
    ;
    do {
        func_80140558();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
}
