/* FF4 source-port — interpreted module for fn_1x2821c.
 * Ground truth: src/fn_1x2821c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x2821c(void) { row_prep(0x20); row_sync2(0x1BE4); cell_pull9_hi(0x17FE); row_prep_close(); cell_clear_bank(0x17FB); fn_1x28264(); }
