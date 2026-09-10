/* FF4 source-port — interpreted module for fn_1x21ce4.
 * Ground truth: src/fn_1x21ce4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x21ce4(void)

{
  row_page(99);
  row_sel_cell_cur();
  cell_put(0x43);
  row_page(0x66);
  rows_x43_x29_windows_with_f94_c3c();
  return;
}



