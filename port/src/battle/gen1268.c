/* FF4 source-port — interpreted module for func_80110FA4.
 * Ground truth: src/func_80110FA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_80111C2C();
extern int func_80111DC8();
extern int func_8011416C();

void func_80110FA4(void)

{
  shop_view_run();
  cell_clear_pad();
  func_8011416C();
  func_80111C2C();
  func_80111DC8();
  return;
}



