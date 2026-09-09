/* FF4 source-port — interpreted module for func_801147C0.
 * Ground truth: src/func_801147C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"







extern int func_80114D18();
extern int func_8011EA5C();

void func_801147C0(void)

{
  int iVar1;
  
  wnd_open(0x100);
  tail(0x2c);
  wnd_open(0x70);
  tail(0x2e);
  wnd_open(0xd0);
  tail(0x89);
  do {
    func_80114D18();
    page(0x2c);
    cell_set50_from54();
    tail(0x2c);
    poll_t(0x70);
    iVar1 = io_go();
    if (iVar1 == 0) {
      wnd_open(0x70);
      tail(0x2c);
    }
    page(0x89);
    cell_set50_from54();
    tail(0x89);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  func_8011EA5C();
  return;
}



