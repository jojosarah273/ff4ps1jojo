/* FF4 source-port — interpreted module for func_80126B88.
 * Ground truth: src/func_80126B88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80124EAC();

void func_80126B88(void)

{
  row_page(0xe8);
  func_80124EAC();
  txt_cell(3);
  return;
}



