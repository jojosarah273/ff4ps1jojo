/* FF4 source-port — interpreted module for func_8014D568.
 * Ground truth: src/func_8014D568.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F8188();
extern int func_800F9330();
extern int func_800F939C();
extern int func_8014D5A0();

void func_8014D568(void)

{
  txt_draw(0xf47f);
  row_open();
  row_sync();
  func_8014D5A0();
  return;
}



