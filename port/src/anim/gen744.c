/* FF4 source-port — interpreted module for fn_1x75d90.
 * Ground truth: src/fn_1x75d90.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x75d90(void)

{
  int iVar1;
  
  txt_set(0x1704);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    row_page(2);
    row_read(0x10);
    iVar1 = sel(2);
    if (iVar1 == 0) {
      row_page(0x53);
      iVar1 = gate(2);
      if (iVar1 != 0) {
        key_page(0x53);
        fn_1x75e08();
      }
    }
  }
  return;
}



