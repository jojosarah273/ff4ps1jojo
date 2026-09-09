/* FF4 source-port — interpreted module for func_80121CE4.
 * Ground truth: src/func_80121CE4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern int func_80121C4C();

void func_80121CE4(void)

{
  row_page(99);
  row_sel_cell_cur();
  cell_put(0x43);
  row_page(0x66);
  func_80121C4C();
  return;
}



