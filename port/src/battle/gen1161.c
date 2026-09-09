/* FF4 source-port — interpreted module for func_80141FEC.
 * Ground truth: src/func_80141FEC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_8013EF78();
extern int func_80141F54();

void func_80141FEC(void)

{
  page_paint2(0xf327);
  func_8013EF78();
  func_80141F54();
  cell_clear_bank(0xf326);
  cell_clear_bank(0xf327);
  return;
}



