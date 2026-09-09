/* FF4 source-port — interpreted module for func_800FD37C.
 * Ground truth: src/func_800FD37C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4248();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F8188();
extern int func_800FD404();
extern int func_8011B6B4();

void func_800FD37C(void)

{
  int iVar1;
  
  txt_set(0x1701);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    latch(1);
  }
  txt_draw(0x1801);
  func_800FD404();
  latch(0xe1);
  func_8011B6B4();
  io_poll(0);
  iVar1 = io_just();
  if (iVar1 != 0) {
    txt_set(0x1802);
    row_read(0x7f);
    txt_draw(0x1802);
  }
  return;
}



