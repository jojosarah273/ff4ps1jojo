/* FF4 source-port — interpreted module for fn_1x0e2f8.
 * Ground truth: src/fn_1x0e2f8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8016E9DC();

void fn_1x0e2f8(void)

{
  wnd_fx_2100();
  cell_flags_set4();
  func_8016E9DC();
  fn_1x0e338();
  battle_wndfx_run();
  return;
}



