/* FF4 source-port — interpreted module for func_801352F0.
 * Ground truth: src/func_801352F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6564();
extern int func_800F7210();
extern int func_800F7500();
extern int func_80120F1C();
extern int func_80124D08();

void func_801352F0(void)

{
  func_80120F1C();
  draw_pad(0x1a4);
  txt_set(0x16a2);
  page_open(0x16a0);
  func_80124D08();
  return;
}



