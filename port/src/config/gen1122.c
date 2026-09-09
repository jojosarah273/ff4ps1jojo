/* FF4 source-port — interpreted module for func_801352F0.
 * Ground truth: src/func_801352F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_80124D08();

void func_801352F0(void)

{
  config_row_d600b();
  draw_pad(0x1a4);
  txt_set(0x16a2);
  page_open(0x16a0);
  func_80124D08();
  return;
}



