/* FF4 source-port — interpreted module for func_80122A24.
 * Ground truth: src/func_80122A24.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F824C();
extern int func_800F971C();
extern int func_80122CF0();

void func_80122A24(void)

{
  latch(0);
  cell_put(0xc1);
  sep();
  func_80122CF0();
  latch(1);
  func_80122CF0();
  latch(2);
  func_80122CF0();
  latch(3);
  func_80122CF0();
  latch(4);
  func_80122CF0();
  return;
}



