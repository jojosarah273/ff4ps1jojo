/* FF4 source-port — interpreted module for func_801321B4.
 * Ground truth: src/func_801321B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6C68();
extern int func_800F7270();
extern int func_80124EAC();

void func_801321B4(void)

{
  page(0x43);
  func_800F6C68(0x14ff9d);
  func_80124EAC();
  return;
}



