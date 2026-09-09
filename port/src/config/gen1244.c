/* FF4 source-port — interpreted module for func_801321B4.
 * Ground truth: src/func_801321B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80124EAC();

void func_801321B4(void)

{
  page(0x43);
  cell_push_c8(0x14ff9d);
  func_80124EAC();
  return;
}



