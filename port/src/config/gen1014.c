/* FF4 source-port — interpreted module for func_8012AA80.
 * Ground truth: src/func_8012AA80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_8012A8A8();

void func_8012AA80(void)

{
  wnd_open(0x1340);
  tail(0x5a);
  latch(0x7e);
  cell_put(0xe1);
  func_8012A8A8();
  return;
}



