/* FF4 source-port — interpreted module for fn_1x23cb4.
 * Ground truth: src/fn_1x23cb4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x23cb4(void)

{
  int iVar1;
  
  cell_cursor_dec();
  txt_set(0x16b7);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    wnd_open(0xeb);
    cell_fmt2(0x41);
    sep();
    do {
      cell_pull_c8(0x1b00);
      step2();
      cell_set50_from54();
      iVar1 = poll_go(0x202);
    } while (iVar1 != 0);
    rows_x48_window_row_loop_l126d58_x();
  }
  row_close2();
  return;
}



