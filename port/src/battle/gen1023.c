/* FF4 source-port — interpreted module for func_8011FF40.
 * Ground truth: src/func_8011FF40.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_8011FF80();

void func_8011FF40(void)

{
  cell_cursor_dec();
  row_open();
  row_sync();
  row_open2();
  func_8011FF80();
  return;
}



