/* FF4 source-port — interpreted module for func_80141F54.
 * Ground truth: src/func_80141F54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_8014E75C();

void func_80141F54(void)

{
  latch(0x20);
  txt_draw(0xf0c2);
  func_8014E75C();
  return;
}



