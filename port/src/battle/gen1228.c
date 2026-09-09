/* FF4 source-port — interpreted module for func_801449A0.
 * Ground truth: src/func_801449A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_801444FC();

void func_801449A0(void)

{
  latch(1);
  txt_draw(0xf446);
  func_801444FC();
  return;
}



