/* FF4 source-port — interpreted module for fn_1x41fec.
 * Ground truth: src/fn_1x41fec.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x41fec(void)

{
  page_paint2(0xf327);
  battle_row_d548();
  fn_1x41f54();
  cell_clear_bank(0xf326);
  cell_clear_bank(0xf327);
  return;
}



