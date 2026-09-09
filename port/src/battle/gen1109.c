/* FF4 source-port — interpreted module for func_8014AA68.
 * Ground truth: src/func_8014AA68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_8013D720();

void func_8014AA68(void)

{
  latch(10);
  txt_draw(0xf47f);
  func_8013D720();
  latch(0xff);
  txt_draw(0xf47f);
  return;
}



