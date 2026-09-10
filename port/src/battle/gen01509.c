/* FF4 source-port — interpreted module for fn_1x0f11c.
 * Ground truth: src/fn_1x0f11c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x0f11c(void)

{
  cell_clear_bank(0x171c);
  battle_wndfx_run();
  return;
}



