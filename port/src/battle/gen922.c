/* FF4 source-port — interpreted module for fn_1x4e75c.
 * Ground truth: src/fn_1x4e75c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_8007259C();






void fn_1x4e75c(void)

{
  int iVar1;
  
  wnd_open(0x10);
  do {
    row_open();
    battle_item_rows_x8_x50_x22_xff_x3();
    func_8007259C();
    func_8007259C();
    row_close();
    cell_set50_from54();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  battle_rows_xf42b_text_x_xaa_bytes();
  return;
}



