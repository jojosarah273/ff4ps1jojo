/* FF4 source-port — interpreted module for func_801703E8.
 * Ground truth: src/func_801703E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void func_801703E8(void)

{
  latch(0);
  cell_cursor_dec();
  row_pad();
  wnd_open(0x2000);
  label(0x11d);
  wnd_open(0xe600);
  label(0x11f);
  latch(0x7e);
  txt_draw(0x121);
  wnd_open(0x1000);
  label(0x122);
  return;
}



