/* FF4 source-port — interpreted module for func_801320E8.
 * Ground truth: src/func_801320E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D64();





void func_801320E8(void)

{
  row_prep(0x20);
  row_sync2(599);
  wnd_open(0x300);
  draw_pad(0xa200);
  func_800F3D64(0x7e7e);
  row_prep_close();
  return;
}



