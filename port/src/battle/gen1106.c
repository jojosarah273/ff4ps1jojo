/* FF4 source-port — interpreted module for fn_1x4b648.
 * Ground truth: src/fn_1x4b648.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800953F4();


void fn_1x4b648(void)

{
  latch(5);
  txt_draw(0xf2d0);
  latch(8);
  txt_draw(0xf326);
  battle_row_f2a0();
  fn_1x442b4();
  func_800953F4();
  return;
}



