/* FF4 source-port — interpreted module for func_80103AC8.
 * Ground truth: src/func_80103AC8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FE7B0();
extern int func_800FF024();
extern int func_80103EAC();
extern int func_80103F00();

void func_80103AC8(void)

{
  int iVar1;
  
  open_row(0x79);
  latch(4);
  cell_put(0xa1);
  do {
    func_80103EAC();
    func_800FF024();
    func_800FE7B0();
    func_80103F00();
    key_page(0x79);
    io_poll(0x28);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



