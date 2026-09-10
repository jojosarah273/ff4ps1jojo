/* FF4 source-port — interpreted module for fn_1x4202c.
 * Ground truth: src/fn_1x4202c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x4202c(void) {
    ;
    do {
        gpu_driver_run();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
}
