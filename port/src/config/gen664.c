/* FF4 source-port — interpreted module for fn_1x5cea0.
 * Ground truth: src/fn_1x5cea0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x5cea0(void)

{
  int iVar1;
  
  iVar1 = io_just();
  if (iVar1 != 0) {
    poll_pair_cur();
    sep();
    cell_pull_c8_bank(0x80);
    poll_pair_cur();
    latch(0x80);
    cell_pull_c8_bank(0x80);
  }
  txt_set(0x3939);
  cell_put(1);
  latch(6);
  gpu_driver_run_b();
  return;
}



