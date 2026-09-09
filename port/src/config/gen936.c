/* FF4 source-port — interpreted module for func_8012E700.
 * Ground truth: src/func_8012E700.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5C64();
extern int func_800F5DA0();
extern int func_800F5E48();
extern int func_800F62BC();
extern int func_800F71DC();
extern int func_8011F684();
extern int func_8012E7CC();

void func_8012E700(void)

{
  int iVar1;
  
  wnd_open(0x18);
  do {
    poll_pair(0xd7);
    key_page(0xd5);
    func_8012E7CC();
    func_8011F684();
    func_800F5E48();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



