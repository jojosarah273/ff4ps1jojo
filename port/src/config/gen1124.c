/* FF4 source-port — interpreted module for func_8012D204.
 * Ground truth: src/func_8012D204.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F40E8();
extern int func_800F4248();
extern int func_800F6B68();
extern int func_80124EAC();

void func_8012D204(void)

{
  func_80124EAC();
  txt_cell(0);
  row_read(0x3f);
  func_800F40E8();
  return;
}



