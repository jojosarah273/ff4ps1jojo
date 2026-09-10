/* FF4 source-port — interpreted module for fn_1x0e2b8.
 * Ground truth: src/fn_1x0e2b8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8016E9BC();

void fn_1x0e2b8(void)

{
  wnd_fx_2100();
  cell_flags_set4();
  func_8016E9BC();
  fn_1x0e338();
  battle_wndfx_run();
  return;
}



