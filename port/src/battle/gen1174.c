/* FF4 source-port — interpreted module for func_80113E04.
 * Ground truth: src/func_80113E04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80113E3C();

void func_80113E04(void)

{
  latch(0x35);
  cell_put(0x91);
  latch(0xc6);
  func_80113E3C();
  return;
}



