/* FF4 source-port — interpreted module for func_8014D31C.
 * Ground truth: src/func_8014D31C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800999C8();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F8F74();
extern int func_800F971C();

void func_8014D31C(void)

{
  int iVar1;
  
  txt_set(0xf279);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    func_800F8F74(0xf283);
  }
  else {
    txt_set(0xf282);
    io_poll(1);
    iVar1 = io_just();
    if (iVar1 != 0) {
      func_800F8F74(0xf282);
      sep();
      func_800999C8();
    }
  }
  return;
}



