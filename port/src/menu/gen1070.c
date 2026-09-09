/* FF4 source-port — interpreted module for func_800FFADC.
 * Ground truth: src/func_800FFADC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F824C();
extern int func_800FF978();
extern int func_80175CB4();
extern int func_80175F00();

void func_800FFADC(void)

{
  latch(1);
  cell_put(0xcc);
  func_80175F00();
  func_80175CB4();
  func_800FF978();
  return;
}



