/* FF4 source-port — interpreted module for fn_1x75e08.
 * Ground truth: src/fn_1x75e08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x75e08(void)

{
  int iVar1;
  
  do {
    page_paint2(0x1703);
    txt_set(0x1703);
    io_poll(5);
    iVar1 = io_just();
    if (iVar1 != 0) {
      latch(0);
      txt_draw(0x1703);
    }
    fn_1x75e88();
    txt_cell(0x1000);
    iVar1 = gate(2);
  } while (iVar1 != 0);
  latch(1);
  cell_put(0xcc);
  return;
}



