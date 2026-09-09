/* FF4 source-port — interpreted module for func_80110F2C.
 * Ground truth: src/func_80110F2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_80111BBC();

void func_80110F2C(void)

{
  latch(6);
  txt_draw(0x1704);
  latch(3);
  txt_draw(0x1705);
  latch(0x58);
  cell_put(0x2c);
  latch(0x60);
  cell_put(0x2e);
  func_80111BBC();
  open_row(0x79);
  open_row(0x7a);
  open_row(0x24);
  return;
}



