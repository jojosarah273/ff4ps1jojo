/* FF4 source-port — interpreted module for fn_1x24f28.
 * Ground truth: src/fn_1x24f28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x24f28(void)

{
  row_sync();
  row_open();
  cell_push_c8_sel(0x60);
  equip_cell_x43_x29_x41_rows_xdb_x3();
  return;
}



