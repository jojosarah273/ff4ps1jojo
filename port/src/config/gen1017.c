/* FF4 source-port — interpreted module for func_80125A64.
 * Ground truth: src/func_80125A64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80125ACC();
extern int func_80125F38();

void func_80125A64(void)

{
  int iVar1;
  
  sep();
  do {
    midrow_pad88();
    func_80125ACC();
    func_80125F38();
    cell_set50_from40();
    io_poll(5);
    iVar1 = io_just();
  } while (iVar1 == 0);
  midrow_pad88();
  battle_state_dc400();
  return;
}



