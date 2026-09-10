/* FF4 source-port — interpreted module for fn_1x5a524.
 * Ground truth: src/fn_1x5a524.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_800F7494();


void fn_1x5a524(void)

{
  int iVar1;
  
  options_rows_b();
  cell_fmt2(0xab);
  iVar1 = func_800F7494(0x202);
  if (iVar1 == 0) {
    key_page(0xab);
  }
  options_cursor_cells();
  return;
}



