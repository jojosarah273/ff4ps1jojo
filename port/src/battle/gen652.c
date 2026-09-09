/* FF4 source-port — interpreted module for func_80114C98.
 * Ground truth: src/func_80114C98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






extern int func_8011581C();

void func_80114C98(void)

{
  cell_clear_pad();
  page(0x2c);
  tail(0xc);
  page(0x2e);
  tail(0xe);
  latch(0x18);
  cell_put(0x91);
  latch(0x78);
  cell_put(0x8f);
  draw_pad(0x180);
  latch(0x60);
  cell_put(0x92);
  func_8011581C();
  return;
}



