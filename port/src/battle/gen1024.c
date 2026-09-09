/* FF4 source-port — interpreted module for func_8011F320.
 * Ground truth: src/func_8011F320.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_80177DEC();

void func_8011F320(void)

{
  cell_cursor_dec();
  func_80177DEC();
  row_page(0x88);
  cell_pull_c8_lo(0x2100);
  row_close2();
  return;
}



