/* FF4 source-port — interpreted module for func_80124F28.
 * Ground truth: src/func_80124F28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern int func_80124F60();

void func_80124F28(void)

{
  row_sync();
  row_open();
  cell_push_c8_sel(0x60);
  func_80124F60();
  return;
}



