/* FF4 source-port — interpreted module for func_8011F320.
 * Ground truth: src/func_8011F320.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6630();
extern int func_800F81E8();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_80177DEC();

void func_8011F320(void)

{
  func_800F9200();
  func_80177DEC();
  row_page(0x88);
  func_800F81E8(0x2100);
  row_close2();
  return;
}



