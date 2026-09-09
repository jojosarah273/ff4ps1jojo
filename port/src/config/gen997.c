/* FF4 source-port — interpreted module for func_801534D8.
 * Ground truth: src/func_801534D8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_801533FC();

void func_801534D8(void)

{
  wnd_open(0xfe76);
  tail(0xab);
  latch(0x13);
  cell_put(0xad);
  func_801533FC();
  return;
}



