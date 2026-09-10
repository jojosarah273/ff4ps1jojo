/* FF4 source-port — interpreted module for fn_1x378e0.
 * Ground truth: src/fn_1x378e0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x378e0(void)

{
  int iVar1;
  
  txt_set(0x1b7a);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    wnd_open(0x3058);
  }
  else {
    wnd_open(0x3040);
  }
  tail(0x45);
  fn_1x1f6ac();
  return;
}



