/* FF4 source-port — interpreted module for config_row_5329c.
 * Ground truth: src/config_row_5329c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void config_row_5329c(void) { latch(0xF8); txt_draw(0x33C6); latch(0x3); txt_draw(0x33C7); }
