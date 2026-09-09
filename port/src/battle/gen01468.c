/* FF4 source-port — interpreted module for func_80140EA8.
 * Ground truth: src/func_80140EA8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_80074B50();
extern int func_8009A018();

extern int func_8013F124();

void func_80140EA8(void)

{
  func_80074B50();
  func_8013F124();
  cell_clear_bank(0x38e6);
  func_8009A018();
  return;
}



