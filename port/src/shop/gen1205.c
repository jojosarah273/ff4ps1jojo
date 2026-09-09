/* FF4 source-port — interpreted module for func_8016AA54.
 * Ground truth: src/func_8016AA54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5140();
extern int func_800F824C();
extern int func_80176F88();

void func_8016AA54(void)

{
  row_sel_cell_cur();
  cell_put(0x52);
  func_80176F88();
  return;
}



