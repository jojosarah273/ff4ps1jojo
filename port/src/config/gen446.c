/* FF4 source-port — interpreted module for func_80131E50.
 * Ground truth: src/func_80131E50.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4248();
extern int func_800F6240();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6B68();
extern int func_800F6BE0();
extern int func_800F8768();
extern int func_800F87DC();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_800F9644();
extern int func_800F9660();
extern int func_801224D0();
extern int func_801321B4();

void func_80131E50(void)

{
  int iVar1;
  
  func_800F9200();
  func_801224D0();
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
      func_800F6BE0(9);
      func_800F87DC(7);
      row_prep_close();
      page_paint2(0x1bbd);
    }
  }
  row_close2();
  return;
}



