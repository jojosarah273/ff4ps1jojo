/* FF4 source-port — interpreted module for func_80150400.
 * Ground truth: src/func_80150400.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80150400(void) { wnd_open(0x440); func_80150610(); draw_pad(0x1EC0); func_80150458(); wnd_open(0x460); func_80150610(); draw_pad(0x1FC0); func_80150458(); }
