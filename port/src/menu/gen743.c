/* FF4 source-port — interpreted module for func_800FC548.
 * Ground truth: src/func_800FC548.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8F74();

void func_800FC548(void)

{
  latch(0x5c);
  txt_draw(0x200);
  txt_draw(0x204);
  wnd_open(0x92a5);
  label(0x201);
  func_800F8F74(0x203);
  wnd_open(0x9480);
  label(0x205);
  func_800F8F74(0x207);
  return;
}



