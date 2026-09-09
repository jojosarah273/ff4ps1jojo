/* FF4 source-port — interpreted module for func_80123B00.
 * Ground truth: src/func_80123B00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_80123BD8();

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
  func_80123BD8();
  func_80123BD8();
  latch(0xe);
  func_80123BD8();
  func_80123BD8();
  func_80123BD8();
  row_done();
  row_close();
  row_close2();
  return;
}



