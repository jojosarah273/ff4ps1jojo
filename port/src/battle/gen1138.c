/* FF4 source-port — interpreted module for fn_1x1117c.
 * Ground truth: src/fn_1x1117c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x1117c(void)

{
  wnd_open(0x100);
  tail(0x5e);
  wnd_open(0x1e0);
  tail(0x60);
  fn_1x111c4();
  battle_wndfx_run();
  return;
}



