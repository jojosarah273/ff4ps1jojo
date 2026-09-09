/* FF4 source-port — interpreted module for func_80119C24.
 * Ground truth: src/func_80119C24.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F824C();
extern int func_800FE7B0();
extern int func_8011EA5C();

void func_80119C24(void)

{
  int iVar1;
  
  latch(2);
  cell_put(0x79);
  do {
    key_page(0xc4);
    func_800FE7B0();
    poll_pair(0x79);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  func_8011EA5C();
  return;
}



