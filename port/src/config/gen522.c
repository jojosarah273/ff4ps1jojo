/* FF4 source-port — interpreted module for fn_1x3d690.
 * Ground truth: src/fn_1x3d690.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x3d690(void)

{
  int iVar1;
  
  draw_pad(0x40);
  row_prep(0x20);
  do {
    cell_sink89(0x340);
    cell_stamp8_9_b(0x344);
    cell_sink89(0x342);
    cell_stamp8_9_b(0x346);
    poll_pair_cur();
    poll_pair_cur();
    poll_pair_cur();
    poll_pair_cur();
    poll_t(0xfffc);
    iVar1 = io_just();
  } while (iVar1 == 0);
  sep();
  row_prep_close();
  return;
}



