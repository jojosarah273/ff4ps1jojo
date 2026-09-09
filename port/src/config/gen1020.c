/* FF4 source-port — interpreted module for func_80121FDC.
 * Ground truth: src/func_80121FDC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F824C();
extern int func_80121BE4();

void func_80121FDC(void)

{
  latch(0xf8);
  cell_put(0x1e);
  latch(0xff);
  cell_put(0x1f);
  latch(0xfd);
  cell_put(0x20);
  func_80121BE4();
  return;
}



