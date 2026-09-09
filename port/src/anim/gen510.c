/* FF4 source-port — interpreted module for func_801766B0.
 * Ground truth: src/func_801766B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






extern int func_800F9868();

void func_801766B0(void)

{
  latch(0x80);
  txt_draw(0x2115);
  cell_clear_bank(0x420b);
  latch(1);
  txt_draw(0x4300);
  latch(0x18);
  txt_draw(0x4301);
  row_page(0x3c);
  txt_draw(0x4304);
  page(0x47);
  label(0x2116);
  page(0x3d);
  label(0x4302);
  page(0x45);
  label(0x4305);
  func_800F9868(0);
  return;
}



