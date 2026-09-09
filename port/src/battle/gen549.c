/* FF4 source-port — interpreted module for func_8011EBBC.
 * Ground truth: src/func_8011EBBC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









extern int func_8011EC44();

void func_8011EBBC(void)

{
  row_open2();
  row_open3();
  sep();
  cell_pull_c8_lo(0x4200);
  latch(0x7e);
  cell_cursor_dec();
  row_pad();
  func_8011EC44();
  latch(0x80);
  cell_pull_c8_lo(0x2100);
  sep();
  stat_sync();
  cell_cursor_read();
  row_pad();
  return;
}



