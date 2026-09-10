/* FF4 source-port — interpreted module for fn_1x2aa80.
 * Ground truth: src/fn_1x2aa80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x2aa80(void)

{
  wnd_open(0x1340);
  tail(0x5a);
  latch(0x7e);
  cell_put(0xe1);
  config_sub_options_x5d_x5e_windows();
  return;
}



