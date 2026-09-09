/* FF4 source-port — interpreted module for func_80131B38.
 * Ground truth: src/func_80131B38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_80131B80();

void func_80131B38(void)

{
  int iVar1;
  
  latch(0);
  do {
    func_80131B80();
    cell_set50_from40();
    io_poll(5);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



