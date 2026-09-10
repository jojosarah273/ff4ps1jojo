/* FF4 source-port — interpreted module for fn_1x4e38c.
 * Ground truth: src/fn_1x4e38c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void fn_1x4e38c(void)

{
  int iVar1;
  
  sep();
  txt_draw(0xf42e);
  txt_draw(0xefc7);
  txt_draw(0xefd7);
  txt_draw(0xefe7);
  txt_draw(0xeff7);
  txt_draw(0xf007);
  txt_draw(0xf281);
  txt_draw(0xf283);
  txt_draw(0xf451);
  txt_set(0xf44e);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    cell_clear_bank(0xef87);
  }
  txt_set(0xf279);
  txt_draw(0xf466);
  return;
}



