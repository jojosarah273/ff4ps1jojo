/* FF4 source-port — interpreted module for func_80129D2C.
 * Ground truth: src/func_80129D2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80132C0C();

void func_80129D2C(void)

{
  int iVar1;
  
  txt_set(0x1b49);
  iVar1 = gate(0x202);
  if (iVar1 != 0) {
    func_80132C0C();
  }
  return;
}



