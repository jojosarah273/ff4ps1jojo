/* FF4 source-port — interpreted module for func_80131B38.
 * Ground truth: src/func_80131B38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F61E8();
extern int func_800F654C();
extern int func_80131B80();

void func_80131B38(void)

{
  int iVar1;
  
  latch(0);
  do {
    func_80131B80();
    func_800F61E8();
    io_poll(5);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



