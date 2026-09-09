/* FF4 source-port — interpreted module for func_800F71DC.
 * Ground truth: src/func_800F71DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED54;
void wnd_open(u16 v) { *D_8019ED54 = v; }
