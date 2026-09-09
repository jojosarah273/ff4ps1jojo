/* FF4 source-port — interpreted module for func_80103F00.
 * Ground truth: src/func_80103F00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53C0();
extern int func_800F5574();
extern int func_800F6630();
extern int func_800F8188();

void func_80103F00(void)

{
  int iVar1;
  
  row_page(0x79);
  io_poll(0x10);
  iVar1 = io_go();
  if (iVar1 == 0) {
    txt_draw(0x2100);
  }
  return;
}



