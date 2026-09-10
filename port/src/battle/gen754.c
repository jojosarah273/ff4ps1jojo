/* FF4 source-port — interpreted module for fn_1x4d31c.
 * Ground truth: src/fn_1x4d31c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800999C8();






void fn_1x4d31c(void)

{
  int iVar1;
  
  txt_set(0xf279);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    cell_clear_bank(0xf283);
  }
  else {
    txt_set(0xf282);
    io_poll(1);
    iVar1 = io_just();
    if (iVar1 != 0) {
      cell_clear_bank(0xf282);
      sep();
      func_800999C8();
    }
  }
  return;
}



