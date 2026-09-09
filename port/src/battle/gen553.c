/* FF4 source-port — interpreted module for func_80105D2C.
 * Ground truth: src/func_80105D2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800FCC84();
extern int func_800FCCBC();
extern int func_800FE778();

void func_80105D2C(void)

{
  func_800FE778();
  latch(0x80);
  txt_draw(0x2115);
  func_800FCC84();
  latch(9);
  txt_draw(0x4300);
  func_800F8F74(0x676);
  wnd_open(0x676);
  label(0x4302);
  wnd_open(0x2880);
  label(0x2116);
  wnd_open(0x100);
  label(0x4305);
  func_800FCCBC();
  return;
}



