/* FF4 source-port — interpreted module for func_80113C54.
 * Ground truth: src/func_80113C54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53C0();
extern int func_800F5958();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F7270();
extern int func_800F8960();

void func_80113C54(void)

{
  int iVar1;
  
  page(0x22);
  poll_t(0x3ff0);
  iVar1 = io_go();
  if (iVar1 == 0) {
    poll_t(0xf0);
    iVar1 = io_go();
    if (iVar1 != 0) {
      latch(0xf0);
      func_800F8960(0x301);
      return;
    }
  }
  row_page(0x22);
  func_800F8960(0x301);
  return;
}



