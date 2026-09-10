/* FF4 source-port — interpreted module for fn_1x34a50.
 * Ground truth: src/fn_1x34a50.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




void fn_1x34a50(void)

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



