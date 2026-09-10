/* FF4 source-port — interpreted module for status_paint_a.
 * Ground truth: src/status_paint_a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void status_paint_a(void)

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



