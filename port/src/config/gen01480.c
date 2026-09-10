/* FF4 source-port — interpreted module for animation_row_300b.
 * Ground truth: src/animation_row_300b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8012B100();

void animation_row_300b(void)

{
  draw_pad(0x300);
  func_8012B100();
  return;
}



