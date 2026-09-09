/* FF4 source-port — interpreted module for func_8011B448.
 * Ground truth: src/func_8011B448.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6364();
extern int func_800F6C68();
extern int func_800F7270();
extern int func_800F8D6C();

void func_8011B448(void)

{
  int iVar1;
  
  page(0xbc);
  do {
    cell_step();
    func_800F6C68(0x139c00);
    io_poll(0xff);
    iVar1 = io_just();
  } while (iVar1 == 0);
  cell_step();
  tail(0xbc);
  return;
}



