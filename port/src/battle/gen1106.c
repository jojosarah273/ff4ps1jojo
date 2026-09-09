/* FF4 source-port — interpreted module for func_8014B648.
 * Ground truth: src/func_8014B648.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800953F4();


extern int func_801442B4();

void func_8014B648(void)

{
  latch(5);
  txt_draw(0xf2d0);
  latch(8);
  txt_draw(0xf326);
  battle_row_f2a0();
  func_801442B4();
  func_800953F4();
  return;
}



