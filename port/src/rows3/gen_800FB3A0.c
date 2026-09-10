/* FF4 source-port — interpreted module for func_800FB3A0.
 * Ground truth: src/func_800FB3A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6B68();

extern int func_800F8768();

uint32_t battle_title_rows_1004(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    func_800F6B68(0x1004);
    row_read(0xbf);
    func_800F8768(0x1004);
    rows_swap44_54();
    func_800F5958(0x140);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
    return 0;
}
