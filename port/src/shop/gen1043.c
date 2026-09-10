/* FF4 source-port — interpreted module for fn_1x6d730.
 * Ground truth: src/fn_1x6d730.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void fn_1x6d730(void)

{
  cell_pull_c8_bank(0x3c);
  latch(0xff);
  cell_pull_c8_bank(0x39);
  step2();
  return;
}



