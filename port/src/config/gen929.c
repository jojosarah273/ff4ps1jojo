/* FF4 source-port — interpreted module for func_80139CA4.
 * Ground truth: src/func_80139CA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_80139CA4(void) { row_prep(0x20); cell_clear_bank2(0x1B4B); cell_clear_bank2(0x1B4D); cell_clear_bank2(0x1B4F); cell_clear_bank2(0x1B51); cell_clear_bank2(0x1B53); row_prep_close(); }
