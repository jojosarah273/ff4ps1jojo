/* FF4 source-port — interpreted module for func_800F53C0.
 * Ground truth: src/func_800F53C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
int io_go(void) { return *D_8019ED68 & 0x1; }
