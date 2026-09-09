/* FF4 source-port — interpreted module for func_8010F11C.
 * Ground truth: src/func_8010F11C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_8010F11C(void)

{
  cell_clear_bank(0x171c);
  battle_wndfx_run();
  return;
}



