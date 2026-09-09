/* FF4 source-port — interpreted module for func_80148F60.
 * Ground truth: src/func_80148F60.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5140();
extern int func_800F6B68();
extern int func_800F824C();
extern int func_80148FC0();

void func_80148F60(void)

{
  txt_cell(0xf1b3);
  row_sel_cell_cur();
  cell_put(0x28);
  txt_cell(0xf133);
  func_80148FC0();
  return;
}



