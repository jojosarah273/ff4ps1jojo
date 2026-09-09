/* FF4 source-port — interpreted module for func_801378E0.
 * Ground truth: src/func_801378E0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F71DC();
extern int func_800F8D6C();
extern int func_8011F6AC();

void func_801378E0(void)

{
  int iVar1;
  
  txt_set(0x1b7a);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    wnd_open(0x3058);
  }
  else {
    wnd_open(0x3040);
  }
  tail(0x45);
  func_8011F6AC();
  return;
}



