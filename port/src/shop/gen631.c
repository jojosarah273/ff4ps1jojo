/* FF4 source-port — interpreted module for func_8016BFE8.
 * Ground truth: src/func_8016BFE8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_8016BF64();
extern int func_80176F60();

void func_8016BFE8(void)

{
  int iVar1;
  
  txt_set(0x2100);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    func_8016BF64();
    latch(0x4c);
    cell_put(0x4f);
    latch(4);
    cell_put(0x51);
    func_80176F60();
  }
  else {
    func_8016BF64();
    latch(0x52);
    cell_put(0x4f);
    latch(0xf);
    cell_put(0x51);
    func_80176F60();
    func_8016BF64();
    open_row(0x4f);
    latch(0x10);
    cell_put(0x51);
    func_80176F60();
  }
  return;
}



