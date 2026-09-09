/* FF4 source-port — interpreted module for func_80107F3C.
 * Ground truth: src/func_80107F3C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F5DA0();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FE778();

void func_80107F3C(void)

{
  int iVar1;
  
  do {
    func_800FE778();
    do {
      row_page(0x7f);
      io_poll(2);
      iVar1 = io_just();
    } while (iVar1 == 0);
    poll_pair(0xdf);
    row_page(0xdf);
    io_poll(0);
    iVar1 = io_just();
  } while (iVar1 == 0);
  latch(1);
  cell_put(0xec);
  func_800FE778();
  open_row(0xdf);
  return;
}



