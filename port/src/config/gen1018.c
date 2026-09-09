/* FF4 source-port — interpreted module for config_row_221ec.
 * Ground truth: src/config_row_221ec.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void config_row_221ec(void) { latch(0x58); txt_draw(0x1E01); latch(0x2); txt_draw(0x1E00); latch(0x80); txt_draw(0x1E02); latch(0xFF); txt_draw(0x1E03); battle_cb_86120(); }
