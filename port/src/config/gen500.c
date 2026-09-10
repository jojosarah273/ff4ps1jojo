/* FF4 source-port — interpreted module for fn_1x5c54c.
 * Ground truth: src/fn_1x5c54c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x5c54c(void)

{
  int iVar1;
  
  row_page(0xd0);
  io_poll(0xff);
  iVar1 = io_just();
  if (iVar1 == 0) {
    options_rows_run();
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



