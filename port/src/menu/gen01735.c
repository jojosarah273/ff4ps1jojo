/* FF4 source-port — interpreted module for func_800F971C.
 * Ground truth: src/func_800F971C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED48;
extern u16 *D_8019ED44;
void sep(void) { *D_8019ED44 = *D_8019ED48; }
