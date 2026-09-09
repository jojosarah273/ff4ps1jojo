/* FF4 source-port — interpreted module for func_800FDAFC.
 * Ground truth: src/func_800FDAFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800FDD8C();
extern int func_800FE110();

void func_800FDAFC(void)

{
  int iVar1;
  
  txt_set(0x1700);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    func_800FE110();
  }
  else {
    io_poll(1);
    iVar1 = io_just();
    if (iVar1 != 0) {
      func_800FDD8C();
    }
  }
  return;
}



