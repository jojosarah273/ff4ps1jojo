/* FF4 source-port — interpreted module for func_800FE778.
 * Ground truth: src/func_800FE778.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F824C();
extern int func_80177DAC();

void func_800FE778(void)

{
  latch(1);
  cell_put(0x7d);
  func_80177DAC();
  key_page(0x7d);
  return;
}



