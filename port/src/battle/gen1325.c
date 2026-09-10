/* FF4 source-port — interpreted module for func_80140E78.
 * Ground truth: src/func_80140E78.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_80140E78(void)

{
  cell_clear_bank(0xf44c);
  cell_clear_bank(0xf41a);
  event_row_38e6();
  return;
}



