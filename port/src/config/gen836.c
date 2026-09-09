/* FF4 source-port — interpreted module for func_80134AB0.
 * Ground truth: src/func_80134AB0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F66D8();
extern int func_800F6B68();
extern int func_800F82EC();
extern int func_800F8768();
extern int func_800F9200();
extern int func_800F93DC();

void func_80134AB0(void)

{
  func_800F66D8(0x60);
  func_800F9200();
  txt_cell(0x1440);
  func_800F82EC(0x60);
  row_close2();
  cell_draw(0x1440);
  return;
}



