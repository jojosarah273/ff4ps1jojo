/* FF4 source-port — interpreted module for func_800FE978.
 * Ground truth: src/func_800FE978.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5A90();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F6B68();
extern int func_800F7500();
extern int func_800F8960();
extern int func_800F9200();
extern int func_800F9448();

void func_800FE978(void)

{
  int iVar1;
  
  func_800F9200();
  row_pad();
  draw_pad(0);
  do {
    txt_cell(0);
    func_800F8960(0xcdb);
    cell_step();
    step2();
    poll_t(0x100);
    iVar1 = io_just();
  } while (iVar1 == 0);
  latch(0);
  func_800F9200();
  row_pad();
  return;
}



