/* FF4 source-port — interpreted module for func_8016BB84.
 * Ground truth: src/func_8016BB84.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6630();
extern int func_8016DD9C();

void func_8016BB84(void)

{
  int iVar1;
  
  row_page(100);
  io_poll(2);
  iVar1 = io_just();
  if (iVar1 != 0) {
    func_8016DD9C();
  }
  return;
}



