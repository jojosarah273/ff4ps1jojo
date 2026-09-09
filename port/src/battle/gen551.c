/* FF4 source-port — interpreted module for func_8011C1F8.
 * Ground truth: src/func_8011C1F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"










void func_8011C1F8(void)

{
  int iVar1;
  
  cell_cursor_dec();
  row_pad();
  wnd_open(0);
  do {
    cell_push_c8_d58(0);
    cell_pull_c8_off(0x7f4800);
    step2();
    cell_step();
    poll_t(0x200);
    iVar1 = io_just();
  } while (iVar1 == 0);
  latch(0);
  cell_cursor_dec();
  row_pad();
  return;
}



