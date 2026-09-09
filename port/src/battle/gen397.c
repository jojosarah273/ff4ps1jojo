/* FF4 source-port — interpreted module for func_8011356C.
 * Ground truth: src/func_8011356C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F7170();
extern int func_800F71DC();
extern int func_800F7210();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800FD804();
extern int func_800FE7D8();
extern int func_800FE8B4();
extern int func_80115BCC();
extern int func_80115D2C();
extern int func_80119AC8();

void func_8011356C(void)

{
  int iVar1;
  
  latch(0x20);
  txt_draw(0xacf);
  latch(2);
  txt_draw(0xad0);
  txt_draw(0xad1);
  wnd_open(0x30);
  label(0xad2);
  latch(6);
  txt_draw(0xacd);
  func_800F8F74(0xace);
  func_80115BCC();
  do {
    func_800FE7D8();
    func_80119AC8();
    func_80115D2C();
    row_page(0x7a);
    row_read(0x3f);
    iVar1 = sel(0x202);
    if (iVar1 == 0) {
      latch(0x23);
      func_800FD804();
    }
    page_open(0xad2);
    iVar1 = func_800F7170(0x202);
  } while (iVar1 != 0);
  func_800FE8B4();
  return;
}



