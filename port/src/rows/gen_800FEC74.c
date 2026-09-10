/* FF4 source-port — interpreted module for cell_0xfec74.
 * Ground truth: src/cell_0xfec74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();


extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F6630();


extern int func_800F8FB8();

void cell_0xfec74(void)

{
  int iVar1;
  
  latch(1);
  cell_put(0xd9);
  latch(7);
  txt_draw(0x212c);
  latch(1);
  txt_draw(0x212d);
  open_row(0x7a);
  open_row(0x79);
  latch(0x81);
  txt_draw(0x4200);
  cell_flags_clr4();
  do {
    wnd_fx_7d();
    do {
      row_page(0x7f);
      io_poll(2);
      iVar1 = io_just();
    } while (iVar1 == 0);
    key_page(0x79);
    key_page(0x79);
    row_page(0x79);
    io_poll(0x20);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



