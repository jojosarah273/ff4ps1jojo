/* FF4 source-port — interpreted module for fn_1x11f34.
 * Ground truth: src/fn_1x11f34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x11f34(void)

{
  int iVar1;
  
  page_open(0x172c);
  iVar1 = cell_flags_pack(2);
  if (iVar1 == 0) {
    cell_set50_from54();
    cell_set50_from54();
    cell_set50_from54();
    label(0x172c);
    shop_detail_xca_window_x172c_x172e();
  }
  battle_wndfx_run();
  return;
}



