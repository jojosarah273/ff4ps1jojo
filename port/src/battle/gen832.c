/* FF4 source-port — interpreted module for func_801408E4.
 * Ground truth: src/func_801408E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void func_801408E4(void)

{
  txt_draw(0xef88);
  latch(0x1f);
  txt_draw(0xf433);
  txt_draw(0xf435);
  txt_draw(0xf434);
  latch(1);
  txt_draw(0xef87);
  cell_clear_bank(0xef89);
  cell_clear_bank(0xef8a);
  return;
}



