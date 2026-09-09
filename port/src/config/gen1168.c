/* FF4 source-port — interpreted module for func_8012821C.
 * Ground truth: src/func_8012821C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012821C(void) { row_prep(0x20); row_sync2(0x1BE4); cell_pull9_hi(0x17FE); row_prep_close(); cell_clear_bank(0x17FB); func_80128264(); }
