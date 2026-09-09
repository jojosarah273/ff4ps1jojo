/* FF4 source-port — interpreted module for func_8010D458.
 * Ground truth: src/func_8010D458.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53C0();
extern int func_800F5574();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F6C68();
extern int func_800F7270();
extern int func_800F9330();
extern int func_800F95A0();
extern int func_8010D54C();

void func_8010D458(void)

{
  int iVar1;
  
  row_open();
  row_page(0xc);
  io_poll(0x20);
  iVar1 = io_go();
  if (iVar1 == 0) {
    row_page(0xe);
    io_poll(0x20);
    iVar1 = io_go();
    if (iVar1 == 0) {
      func_8010D54C();
      page(0x3d);
      func_800F6C68(0x7f4c00);
      goto LAB_8010d4d4;
    }
  }
  latch(0);
LAB_8010d4d4:
  row_close();
  return;
}



