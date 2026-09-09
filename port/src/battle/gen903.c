/* FF4 source-port — interpreted module for func_8011EDA4.
 * Ground truth: src/func_8011EDA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern int func_8016EA1C();

void func_8011EDA4(void)

{
  cell_cursor_dec();
  latch(0);
  cell_pull_c8_lo(0x140);
  func_8016EA1C();
  latch(0);
  stat_sync();
  row_close2();
  return;
}



