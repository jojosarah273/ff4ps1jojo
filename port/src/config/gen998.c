/* FF4 source-port — interpreted module for func_801533BC.
 * Ground truth: src/func_801533BC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_801533FC();

void func_801533BC(void)

{
  wnd_open(0xfe67);
  tail(0xab);
  latch(0x13);
  cell_put(0xad);
  func_801533FC();
  return;
}



