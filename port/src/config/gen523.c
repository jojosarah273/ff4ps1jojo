/* FF4 source-port — interpreted module for func_80139C0C.
 * Ground truth: src/func_80139C0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"











extern int func_8012D204();
extern int func_80134AF8();

void func_80139C0C(void)

{
  int iVar1;
  
  cell_cursor_dec();
  cell_put(0x57);
  func_8012D204();
  iVar1 = io_just();
  if (iVar1 == 0) {
    tail(0xe5);
    func_80134AF8();
    iVar1 = io_go();
    if (iVar1 != 0) {
      row_page(0x57);
      row_sel_cell_cur();
      cell_put(0x43);
      page(0x43);
      latch(8);
      cell_draw(0x1b4b);
    }
  }
  row_close2();
  return;
}



