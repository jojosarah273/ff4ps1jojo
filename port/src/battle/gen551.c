/* FF4 source-port — interpreted module for func_8011C1F8.
 * Ground truth: src/func_8011C1F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F6D70();
extern int func_800F71DC();
extern int func_800F885C();
extern int func_800F9200();
extern int func_800F9448();

void func_8011C1F8(void)

{
  int iVar1;
  
  func_800F9200();
  row_pad();
  wnd_open(0);
  do {
    func_800F6D70(0);
    func_800F885C(0x7f4800);
    step2();
    cell_step();
    poll_t(0x200);
    iVar1 = io_just();
  } while (iVar1 == 0);
  latch(0);
  func_800F9200();
  row_pad();
  return;
}



