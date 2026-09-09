/* FF4 source-port — interpreted module for func_8014D394.
 * Ground truth: src/func_8014D394.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800999C8();




void func_8014D394(void)

{
  int iVar1;
  
  txt_set(0xf279);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    latch(1);
    txt_draw(0xf283);
  }
  else {
    txt_set(0xf282);
    iVar1 = gate(0x202);
    if (iVar1 == 0) {
      latch(1);
      txt_draw(0xf282);
      latch(1);
      func_800999C8();
    }
  }
  return;
}



