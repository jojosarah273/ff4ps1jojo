/* FF4 source-port — interpreted module for func_80121B04.
 * Ground truth: src/func_80121B04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_801222C4();

void func_80121B04(void)

{
  int iVar1;
  
  do {
    row_page(0x1f);
    cell_draw(0);
    func_801222C4();
    poll_pair(0x1d);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  row_page(0x20);
  cell_draw(0);
  return;
}



