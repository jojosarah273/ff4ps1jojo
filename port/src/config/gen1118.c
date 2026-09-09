/* FF4 source-port — interpreted module for func_8013B7C0.
 * Ground truth: src/func_8013B7C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6564();
extern int func_800F6B68();
extern int func_800F6C68();
extern int func_801224D0();

void func_8013B7C0(void)

{
  txt_set(0x1bc7);
  func_801224D0();
  func_800F6C68(0x14ff9d);
  func_801224D0();
  txt_cell(0x16b9);
  return;
}



