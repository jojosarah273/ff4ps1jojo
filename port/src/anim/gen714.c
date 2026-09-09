/* FF4 source-port — interpreted module for func_80176BFC.
 * Ground truth: src/func_80176BFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4008();
extern int func_800F53D4();
extern int func_800F5410();
extern int func_800F5574();
extern int func_800F5CCC();
extern int func_800F6564();
extern int func_800F6630();
extern int func_80176C6C();

void func_80176BFC(void)

{
  int iVar1;
  
  row_page(0xe2);
  io_poll(0x11);
  iVar1 = io_just();
  if (iVar1 == 0) {
    txt_set(0x1bb2);
    poll_spin();
    func_80176C6C();
    txt_set(0x1bb2);
    sep_a();
    row_open_w(8);
    func_80176C6C();
  }
  return;
}



