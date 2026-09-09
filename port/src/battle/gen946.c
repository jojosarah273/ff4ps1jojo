/* FF4 source-port — interpreted module for func_8011C27C.
 * Ground truth: src/func_8011C27C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F71DC();
extern int func_800F885C();

void func_8011C27C(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    func_800F885C(0x7f5c71);
    cell_step();
    poll_t(0x4000);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



