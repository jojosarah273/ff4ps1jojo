/* FF4 source-port — interpreted module for func_801107A0.
 * Ground truth: src/func_801107A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






extern int func_80110F2C();
extern int func_80110FA4();

void func_801107A0(void)

{
  int iVar1;
  
  func_80110F2C();
  do {
    do {
      func_80110FA4();
      row_page(0x7a);
      row_read(7);
      iVar1 = sel(0x202);
    } while (iVar1 != 0);
    key_page(0x24);
    row_page(0x24);
    io_poll(0x30);
    iVar1 = io_just();
  } while (iVar1 == 0);
  battle_wndfx_run();
  return;
}



