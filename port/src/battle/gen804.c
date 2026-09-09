/* FF4 source-port — interpreted module for func_801110CC.
 * Ground truth: src/func_801110CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_801111C4();
extern int func_8011EA5C();

void func_801110CC(void)

{
  latch(0x16);
  txt_draw(0x212c);
  latch(1);
  cell_put(0xc9);
  wnd_open(0);
  tail(0x5e);
  wnd_open(0x2e0);
  tail(0x60);
  func_801111C4();
  func_8011EA5C();
  return;
}



