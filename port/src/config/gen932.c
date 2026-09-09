/* FF4 source-port — interpreted module for func_80134A50.
 * Ground truth: src/func_80134A50.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




void func_80134A50(void)

{
  int iVar1;
  
  io_poll(0x54);
  iVar1 = io_go();
  if (iVar1 != 0) {
    io_poll(0x60);
    iVar1 = io_go();
    if (iVar1 == 0) {
      sep_b();
      return;
    }
  }
  sep_a();
  return;
}



