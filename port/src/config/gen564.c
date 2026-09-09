/* FF4 source-port — interpreted module for func_8012DC80.
 * Ground truth: src/func_8012DC80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void func_8012DC80(void)

{
  latch(0xc3);
  txt_draw(0xba10);
  txt_draw(0xba90);
  txt_draw(0xbb10);
  txt_draw(0xbb90);
  txt_draw(0xbc10);
  txt_draw(0xb9b2);
  txt_draw(0xba32);
  txt_draw(0xbab2);
  txt_draw(0xbb32);
  txt_draw(0xbbb2);
  txt_draw(0xbc32);
  latch(0xc6);
  txt_draw(0xba38);
  txt_draw(0xbb38);
  txt_draw(0xbc38);
  latch(199);
  txt_draw(0xb890);
  txt_draw(0xb910);
  return;
}



