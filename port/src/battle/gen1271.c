/* FF4 source-port — interpreted module for func_8010E278.
 * Ground truth: src/func_8010E278.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8010E338();

extern int func_8016E99C();

void func_8010E278(void)

{
  wnd_fx_2100();
  cell_flags_set4();
  func_8016E99C();
  func_8010E338();
  battle_wndfx_run();
  return;
}



