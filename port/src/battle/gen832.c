/* FF4 source-port — interpreted module for func_801408E4.
 * Ground truth: src/func_801408E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_800F8F74();

void func_801408E4(void)

{
  txt_draw(0xef88);
  latch(0x1f);
  txt_draw(0xf433);
  txt_draw(0xf435);
  txt_draw(0xf434);
  latch(1);
  txt_draw(0xef87);
  func_800F8F74(0xef89);
  func_800F8F74(0xef8a);
  return;
}



