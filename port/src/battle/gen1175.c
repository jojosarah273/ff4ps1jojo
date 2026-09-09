/* FF4 source-port — interpreted module for func_80113DCC.
 * Ground truth: src/func_80113DCC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80113E3C();

void func_80113DCC(void)

{
  latch(0x39);
  cell_put(0x91);
  latch(0xc0);
  func_80113E3C();
  return;
}



