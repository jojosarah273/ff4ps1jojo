/* FF4 source-port — interpreted module for midrow_pad88.
 * Ground truth: src/midrow_pad88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void midrow_pad88(void)

{
  cell_cursor_dec();
  battle_anim_chain_e8_c_c14_ef0c_fe();
  row_page(0x88);
  cell_pull_c8_lo(0x2100);
  row_close2();
  return;
}



