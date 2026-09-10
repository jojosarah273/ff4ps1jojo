/* FF4 source-port — interpreted module for fn_1x97248.
 * Ground truth: src/fn_1x97248.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x97248(u32 *prim, u32 *p, u32 *p2) {
    *p2 = (*p2 & 0xFF000000) | (*prim & 0xFFFFFF);
    *prim = (*prim & 0xFF000000) | ((u32)p & 0xFFFFFF);
}
