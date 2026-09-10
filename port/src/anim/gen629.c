/* FF4 source-port — interpreted module for fn_1x702dc.
 * Ground truth: src/fn_1x702dc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"








void fn_1x702dc(void)

{
  row_open();
  cell_put(0x43);
  page(0x43);
  cell_push_c8(0x14fe79);
  cell_put(0x43);
  page(0x43);
  row_prep(0x20);
  cell_cursor_adv2();
  cell_stamp8_9(0x1a05);
  row_prep_close();
  return;
}



