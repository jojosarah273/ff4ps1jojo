/* FF4 source-port — interpreted module for battle_tick_text.
 * Ground truth: src/battle_tick_text.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_tick_text(void) { cell_step(); tail(0xB3); txt_cell(0x9D5); }
