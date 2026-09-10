/* FF4 source-port — interpreted module for fn_1x31b80.
 * Ground truth: src/fn_1x31b80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x31b80(void)

{
  int iVar1;
  
  cell_cursor_dec();
  battle_put43();
  txt_cell(0x1b8b);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    fn_1x321b4();
    row_prep(0x20);
    cell_sink8_9(3);
    cell_pos_mask(0x7c80);
    cell_stamp8_9(3);
    row_prep_close();
  }
  row_close2();
  return;
}



