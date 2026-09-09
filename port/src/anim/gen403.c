/* FF4 source-port — interpreted module for func_8017091C.
 * Ground truth: src/func_8017091C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5A90();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F9868();

void func_8017091C(void)

{
  int iVar1;
  
  latch(0x18);
  txt_draw(0x4301);
  wnd_open(0);
  label(0x2116);
  draw_pad(0);
  do {
    latch(0x80);
    txt_draw(0x2115);
    latch(1);
    txt_draw(0x4300);
    wnd_open(0x10);
    label(0x4305);
    func_800F9868(0);
    func_800F8F74(0x420b);
    func_800F8F74(0x2115);
    func_800F8F74(0x4300);
    wnd_open(8);
    label(0x4305);
    func_800F9868(0);
    step2();
    poll_t(0x180);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



