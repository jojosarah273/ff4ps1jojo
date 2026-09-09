/* FF4 source-port — interpreted module for func_800FB3F8.
 * Ground truth: src/func_800FB3F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();

void func_800FB3F8(void)

{
  latch(0x80);
  txt_draw(0x2100);
  latch(0);
  txt_draw(0x4200);
  return;
}



