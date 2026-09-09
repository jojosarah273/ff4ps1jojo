/* FF4 source-port — interpreted module for func_801030F8.
 * Ground truth: src/func_801030F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









extern int func_800FE7D8();
extern int func_800FF024();
extern int func_80115BCC();
extern int func_80115D2C();

void func_801030F8(void)

{
  int iVar1;
  
  latch(0x10);
  txt_draw(0xacf);
  latch(3);
  txt_draw(0xad0);
  latch(3);
  txt_draw(0xad1);
  wnd_open(0x7070);
  label(0xad4);
  wnd_open(0x28);
  label(0xad2);
  latch(6);
  txt_draw(0xacd);
  latch(2);
  txt_draw(0xace);
  func_80115BCC();
  do {
    func_800FE7D8();
    func_80115D2C();
    page_open(0xad2);
    poll_t(8);
    iVar1 = io_go();
    if (iVar1 == 0) {
      latch(1);
      cell_put(0xe5);
      func_800FF024();
    }
    page_open(0xad2);
    poll_t(0);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



