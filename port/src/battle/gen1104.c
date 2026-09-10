/* FF4 source-port — interpreted module for fn_1x4d748.
 * Ground truth: src/fn_1x4d748.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800760D0();



void fn_1x4d748(void)

{
  txt_set(0xf457);
  wnd_open(0xf);
  func_800760D0();
  cell_clear_bank(0xf451);
  return;
}



