/* FF4 source-port — interpreted module for func_800FE5D4.
 * Ground truth: src/func_800FE5D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8EBC();
extern int func_800FE634();

void func_800FE5D4(void)

{
  latch(0x40);
  func_800FE634();
  row_info(0x6e);
  latch(0);
  func_800FE634();
  row_info(0x70);
  latch(0x80);
  func_800FE634();
  row_info(0x72);
  return;
}



