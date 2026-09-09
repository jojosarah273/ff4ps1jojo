/* FF4 source-port — interpreted module for func_8014ADD4.
 * Ground truth: src/func_8014ADD4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_801428FC();
extern int func_8014AD44();
extern int func_8014D680();

void func_8014ADD4(void)

{
  latch(0);
  func_8014AD44();
  func_8014D680();
  func_801428FC();
  latch(0xff);
  txt_draw(0xf47f);
  return;
}



