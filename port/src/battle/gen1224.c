/* FF4 source-port — interpreted module for func_8014A810.
 * Ground truth: src/func_8014A810.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800996A8();


extern int func_801409E4();
extern int func_8014C57C();
extern int func_8014C714();
extern int func_8014D680();

void func_8014A810(void)

{
  func_8014D680();
  func_8014C57C();
  func_801409E4();
  wnd_open(0x20);
  func_800996A8();
  cell_clear_bank(0xef87);
  func_8014C714();
  return;
}



