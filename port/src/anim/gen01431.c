/* FF4 source-port — interpreted module for func_80176F60.
 * Ground truth: src/func_80176F60.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_80176F88();

void func_80176F60(void)

{
  open_row(0x52);
  func_80176F88();
  return;
}



