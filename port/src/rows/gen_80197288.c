/* FF4 source-port — interpreted module for fn_1x97288.
 * Ground truth: src/fn_1x97288.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x97288(u32 *prim, u32 *p) {
    *prim = (*prim & 0xFF000000) | ((u32)p & 0xFFFFFF);
}
