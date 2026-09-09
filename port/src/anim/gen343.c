/* FF4 source-port — interpreted module for func_8017477C.
 * Ground truth: src/func_8017477C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F5A90();
extern int func_800F62BC();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8960();
extern int func_800F8FB8();

void func_8017477C(void)

{
  int iVar1;
  
  wnd_open(0);
  draw_pad(0);
  open_row(7);
  do {
    func_800F6C68(0xfc8c0);
    io_poll(0xff);
    iVar1 = io_just();
    if (iVar1 == 0) {
      func_800F8960(0x1560);
      step2();
      key_page(7);
      row_page(7);
      io_poll(0x18);
      iVar1 = io_just();
      if (iVar1 != 0) {
        open_row(7);
      }
    }
    else {
      do {
        latch(0);
        func_800F8960(0x1560);
        step2();
        key_page(7);
        row_page(7);
        io_poll(0x18);
        iVar1 = io_just();
      } while (iVar1 == 0);
      open_row(7);
    }
    cell_step();
    poll_t(0x138);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



