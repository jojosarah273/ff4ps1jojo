/* FF4 source-port — interpreted module for func_8014202C.
 * Ground truth: src/func_8014202C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_8014202C(void) {
    ;
    do {
        gpu_driver_run();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
}
