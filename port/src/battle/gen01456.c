/* FF4 source-port — interpreted module for battle_row_f2a0.
 * Ground truth: src/battle_row_f2a0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void battle_row_f2a0(void)

{
  cell_clear_bank(0xf2a0);
  fn_1x4b93c();
  return;
}



