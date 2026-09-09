/* FF4 source-port — interpreted module for func_80131DF8.
 * Ground truth: src/func_80131DF8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern int func_80131C50();
extern int func_80131E50();

void func_80131DF8(void)

{
  int iVar1;
  
  latch(0);
  txt_draw(0x1bbd);
  do {
    func_80131E50();
    cell_set50_from40();
    io_poll(5);
    iVar1 = io_just();
  } while (iVar1 == 0);
  func_80131C50();
  return;
}



