/* FF4 source-port — interpreted module for func_8013B840.
 * Ground truth: src/func_8013B840.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F40E8();
extern int func_800F4248();
extern int func_800F6B68();
extern int func_800F6C68();
extern int func_801224D0();
extern int func_80124EAC();

void func_8013B840(void)

{
  func_801224D0();
  func_800F6C68(0x14ff9d);
  func_80124EAC();
  txt_cell(0);
  row_read(0x3f);
  func_800F40E8();
  return;
}



