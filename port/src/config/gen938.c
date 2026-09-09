/* FF4 source-port — interpreted module for func_8012C794.
 * Ground truth: src/func_8012C794.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53C0();
extern int func_800F55C0();
extern int func_800F6558();
extern int func_800F8378();
extern int func_800F9660();
extern int func_801221EC();

void func_8012C794(void)

{
  int iVar1;
  
  func_800F55C0(9999);
  iVar1 = io_go();
  if (iVar1 != 0) {
    row_sync2(9999);
  }
  func_800F8378(0x60);
  row_prep_close();
  func_801221EC();
  return;
}



