/* FF4 source-port — interpreted module for func_800FD914.
 * Ground truth: src/func_800FD914.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4120();
extern int func_800F4370();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6630();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FE7B0();

void func_800FD914(void)

{
  int iVar1;
  
  cell_put(0x82);
  open_row(0x79);
  row_page(0xca);
  io_poll(2);
  iVar1 = io_just();
  if (iVar1 == 0) {
    latch(0xf);
    cell_put(0x80);
    do {
      do {
        func_800FE7B0();
        row_page(0x80);
        txt_draw(0x2100);
        txt_set(0x1700);
        io_poll(3);
        iVar1 = io_just();
        if (iVar1 == 0) {
          latch(0x30);
          txt_draw(0x420c);
        }
        key_page(0x79);
        row_page(0x79);
        func_800F4370(0x82);
        iVar1 = sel(0x202);
      } while (iVar1 != 0);
      poll_pair(0x80);
      iVar1 = poll_go(0x8080);
    } while (iVar1 != 0);
    open_row(0x80);
  }
  return;
}



