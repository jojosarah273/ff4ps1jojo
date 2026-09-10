/* FF4 source-port — interpreted module for fn_1x13dcc.
 * Ground truth: src/fn_1x13dcc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x13dcc(void)

{
  latch(0x39);
  cell_put(0x91);
  latch(0xc0);
  battle_rows_twin_of_ccc_x8f_x5f_xa();
  return;
}



