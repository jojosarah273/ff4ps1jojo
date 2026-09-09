/* FF4 source-port — interpreted module for func_8014071C.
 * Ground truth: src/func_8014071C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_80095A4C();
extern int func_800F5D24();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_8014D528();

void func_8014071C(void)

{
  int iVar1;
  
  txt_set(0xf411);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    func_800F5D24(0xf411);
    func_80095A4C();
    latch(0x31);
    func_8014D528();
  }
  return;
}



