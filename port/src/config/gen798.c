/* FF4 source-port — interpreted module for func_80132CA4.
 * Ground truth: src/func_80132CA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D64();





extern int func_801330F8();

void func_80132CA4(void)

{
  row_prep(0x20);
  row_sync2(0xf);
  wnd_open(0x8130);
  draw_pad(0xa120);
  func_800F3D64(0xd7e);
  row_prep_close();
  draw_pad(0xf380);
  func_801330F8();
  return;
}



