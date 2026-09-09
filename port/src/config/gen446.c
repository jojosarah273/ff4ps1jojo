/* FF4 source-port — interpreted module for func_80131E50.
 * Ground truth: src/func_80131E50.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_801321B4();

void func_80131E50(void)

{
  int iVar1;
  
  cell_cursor_dec();
  battle_put43();
  txt_cell(0x1b8b);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    func_801321B4();
    txt_cell(3);
    iVar1 = gate(0x8080);
    if (iVar1 == 0) {
      latch(0);
      cell_draw(3);
      txt_cell(4);
      row_read(0x7f);
      cell_draw(4);
      row_prep(0x20);
      cell_sink8_9(9);
      cell_stamp8_9(7);
      row_prep_close();
      page_paint2(0x1bbd);
    }
  }
  row_close2();
  return;
}



