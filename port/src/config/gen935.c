/* FF4 source-port — interpreted module for fn_1x31bf8.
 * Ground truth: src/fn_1x31bf8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x31bf8(void)

{
  int iVar1;
  
  latch(0);
  txt_draw(0x1bbd);
  do {
    ability_tab_x1bc6_x1b8b_x16_texts();
    cell_set50_from40();
    io_poll(5);
    iVar1 = io_just();
  } while (iVar1 == 0);
  ability_rows_x1bc9_x1b93_texts_xe8();
  return;
}



