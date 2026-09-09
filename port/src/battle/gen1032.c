/* FF4 source-port — interpreted module for func_80110FE4.
 * Ground truth: src/func_80110FE4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern int func_8011EA5C();

void func_80110FE4(void)

{
  page_open(0x172c);
  cell_set50_from54();
  cell_set50_from54();
  cell_set50_from54();
  label(0x172c);
  func_8011EA5C();
  return;
}



