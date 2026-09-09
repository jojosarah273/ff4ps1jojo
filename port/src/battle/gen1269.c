/* FF4 source-port — interpreted module for func_8010E2F8.
 * Ground truth: src/func_8010E2F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8010E338();

extern int func_8016E9DC();

void func_8010E2F8(void)

{
  wnd_fx_2100();
  cell_flags_set4();
  func_8016E9DC();
  func_8010E338();
  battle_wndfx_run();
  return;
}



