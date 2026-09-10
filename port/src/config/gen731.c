/* FF4 source-port — interpreted module for battle_row_45b.
 * Ground truth: src/battle_row_45b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void battle_row_45b(void)

{
  latch(0x19);
  cell_put(0x45);
  page(0x35);
  tail(0x1d);
  page(0x29);
  tail(0x1f);
  latch(0x7e);
  cell_put(0x21);
  wnd_open(0x80);
  tail(0x22);
  battle_rows_f320_ee34_b764_b7b8_ro();
  return;
}



