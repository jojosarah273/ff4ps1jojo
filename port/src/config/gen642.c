/* FF4 source-port — interpreted module for func_80131B80.
 * Ground truth: src/func_80131B80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









extern int func_801224D0();
extern int func_801321B4();

void func_80131B80(void)

{
  int iVar1;
  
  cell_cursor_dec();
  func_801224D0();
  txt_cell(0x1b8b);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    func_801321B4();
    row_prep(0x20);
    cell_sink8_9(3);
    cell_pos_mask(0x7c80);
    cell_stamp8_9(3);
    row_prep_close();
  }
  row_close2();
  return;
}



