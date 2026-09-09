/* FF4 source-port — interpreted module for func_80114FD0.
 * Ground truth: src/func_80114FD0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_800F824C();

void func_80114FD0(void)

{
  latch(4);
  txt_draw(0x1704);
  latch(0x10);
  cell_put(0xb7);
  latch(0xf);
  txt_draw(0x6fd);
  latch(3);
  cell_put(0xac);
  latch(0x20);
  cell_put(0xad);
  return;
}



