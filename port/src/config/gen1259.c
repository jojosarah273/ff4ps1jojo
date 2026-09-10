/* FF4 source-port — interpreted module for fn_1x229c4.
 * Ground truth: src/fn_1x229c4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x229c4(void)

{
  wnd_open(0x18e);
  draw_pad(0x10c0);
  equip_cells_render();
  return;
}



