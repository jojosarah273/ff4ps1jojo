/* FF4 source-port — interpreted module for func_80123B00.
 * Ground truth: src/func_80123B00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_80123B00(void)

{
  cell_cursor_dec();
  row_open();
  row_sync();
  cell_push_c8_d58(3);
  row_read(0x80);
  sep_a();
  cell_tick_dbl();
  cell_flags_repack2();
  cell_tick_dbl();
  cell_flags_repack2();
  cell_tick_dbl();
  cell_flags_repack2();
  cell_tick_dbl();
  cell_put(0x45);
  latch(7);
  shop_rows_37();
  shop_rows_37();
  latch(0xe);
  shop_rows_37();
  shop_rows_37();
  shop_rows_37();
  row_done();
  row_close();
  row_close2();
  return;
}



