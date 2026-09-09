/* FF4 source-port — interpreted module for func_8014BB0C.
 * Ground truth: src/func_8014BB0C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_8014B914();

void func_8014BB0C(void)

{
  latch(2);
  txt_draw(0xf2d0);
  func_8014B914();
  return;
}



