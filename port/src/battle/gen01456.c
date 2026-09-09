/* FF4 source-port — interpreted module for battle_row_f2a0.
 * Ground truth: src/battle_row_f2a0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8014B93C();

void battle_row_f2a0(void)

{
  cell_clear_bank(0xf2a0);
  func_8014B93C();
  return;
}



