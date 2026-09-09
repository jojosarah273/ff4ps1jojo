/* FF4 source-port — interpreted module for func_8015C54C.
 * Ground truth: src/func_8015C54C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









extern int func_80152CDC();

void func_8015C54C(void)

{
  int iVar1;
  
  row_page(0xd0);
  io_poll(0xff);
  iVar1 = io_just();
  if (iVar1 == 0) {
    func_80152CDC();
    page(0xa6);
    txt_cell(0x2003);
    row_read(0xc0);
    iVar1 = sel(0x202);
    if (iVar1 == 0) {
      txt_cell(0x2004);
      row_read(0x3c);
      iVar1 = sel(0x202);
      if (iVar1 == 0) {
        txt_cell(0x2005);
        row_read(0xc6);
        iVar1 = sel(2);
        if (iVar1 != 0) {
          return;
        }
      }
    }
  }
  latch(0xff);
  cell_put(0xd0);
  return;
}



