/* FF4 source-port — interpreted module for func_8012B0D8.
 * Ground truth: src/func_8012B0D8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8012B100();

void func_8012B0D8(void)

{
  draw_pad(0x310);
  func_8012B100();
  return;
}



