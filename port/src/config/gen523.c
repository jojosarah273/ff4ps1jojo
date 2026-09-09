/* FF4 source-port — interpreted module for func_80139C0C.
 * Ground truth: src/func_80139C0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5140();
extern int func_800F53C0();
extern int func_800F53D4();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F7270();
extern int func_800F824C();
extern int func_800F8768();
extern int func_800F8D6C();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_8012D204();
extern int func_80134AF8();

void func_80139C0C(void)

{
  int iVar1;
  
  func_800F9200();
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



