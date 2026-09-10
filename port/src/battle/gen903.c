/* FF4 source-port — interpreted module for fn_1x1eda4.
 * Ground truth: src/fn_1x1eda4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x1eda4(void)

{
  cell_cursor_dec();
  latch(0);
  cell_pull_c8_lo(0x140);
  fn_1x6ea1c();
  latch(0);
  stat_sync();
  row_close2();
  return;
}



