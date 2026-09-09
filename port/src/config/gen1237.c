/* FF4 source-port — interpreted module for func_8013D598.
 * Ground truth: src/func_8013D598.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_8013D4C8();

void func_8013D598(void)

{
  cell_clear_bank(0xf484);
  latch(0x82);
  func_8013D4C8();
  return;
}



