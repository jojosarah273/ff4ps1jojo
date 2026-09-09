/* FF4 source-port — interpreted module for func_80120B6C.
 * Ground truth: src/func_80120B6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_80120BDC();

void func_80120B6C(void)

{
  latch(0x19);
  cell_put(0x45);
  page(0x35);
  tail(0x1d);
  page(0x29);
  tail(0x1f);
  latch(0x7e);
  cell_put(0x21);
  wnd_open(0x80);
  tail(0x22);
  func_80120BDC();
  return;
}



