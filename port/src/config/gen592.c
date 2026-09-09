/* FF4 source-port — interpreted module for func_8012C82C.
 * Ground truth: src/func_8012C82C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4064();
extern int func_800F53C0();
extern int func_800F5410();
extern int func_800F55C0();
extern int func_800F6558();
extern int func_800F6764();
extern int func_800F7500();
extern int func_800F8378();
extern int func_800F9644();
extern int func_800F9660();
extern int func_801221EC();

void func_8012C82C(void)

{
  int iVar1;
  
  row_prep(0x20);
  draw_pad(0xd);
  func_800F6764(0x60);
  sep_a();
  func_800F4064(10);
  func_800F55C0(999);
  iVar1 = io_go();
  if (iVar1 != 0) {
    row_sync2(999);
  }
  func_800F8378(0x60);
  row_prep_close();
  func_801221EC();
  return;
}



