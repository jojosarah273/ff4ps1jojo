/* FF4 source-port — interpreted module for func_80111F34.
 * Ground truth: src/func_80111F34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_80111FCC();

void func_80111F34(void)

{
  int iVar1;
  
  page_open(0x172c);
  iVar1 = cell_flags_pack(2);
  if (iVar1 == 0) {
    cell_set50_from54();
    cell_set50_from54();
    cell_set50_from54();
    label(0x172c);
    func_80111FCC();
  }
  battle_wndfx_run();
  return;
}



