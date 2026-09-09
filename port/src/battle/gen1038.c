/* FF4 source-port — interpreted module for func_80102F38.
 * Ground truth: src/func_80102F38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800FD718();

void func_80102F38(void)

{
  latch(1);
  txt_draw(0x1704);
  cell_put(0xac);
  func_800FD718();
  return;
}



