/* FF4 source-port — interpreted module for func_800FF54C.
 * Ground truth: src/func_800FF54C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F654C();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FF5EC();
extern int func_800FF704();
extern int func_801163E8();
extern int func_8011B6B4();

void func_800FF54C(void)

{
  int iVar1;
  
  func_800FF5EC();
  latch(0x30);
  func_8011B6B4();
  io_poll(0);
  iVar1 = io_just();
  if (iVar1 != 0) {
    latch(0x3d);
    func_8011B6B4();
    io_poll(0);
    iVar1 = io_just();
    if (iVar1 == 0) {
      latch(1);
      cell_put(0xb1);
      latch(0xc6);
      func_801163E8();
      open_row(0xb1);
    }
  }
  func_800FF704();
  return;
}



