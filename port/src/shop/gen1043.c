/* FF4 source-port — interpreted module for func_8016D730.
 * Ground truth: src/func_8016D730.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void func_8016D730(void)

{
  cell_pull_c8_bank(0x3c);
  latch(0xff);
  cell_pull_c8_bank(0x39);
  step2();
  return;
}



