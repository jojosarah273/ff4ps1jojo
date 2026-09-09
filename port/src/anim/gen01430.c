/* FF4 source-port — interpreted module for func_801771AC.
 * Ground truth: src/func_801771AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_801771D4();

void func_801771AC(void)

{
  row_page(0xe8);
  func_801771D4();
  return;
}



