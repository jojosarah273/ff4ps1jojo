/* FF4 source-port — interpreted module for func_8016BB44.
 * Ground truth: src/func_8016BB44.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F62BC();
extern int func_800F9330();
extern int func_800F95A0();
extern int func_8016BB84();
extern int func_80177DAC();

void func_8016BB44(void)

{
  row_open();
  key_page(0x41);
  func_80177DAC();
  func_8016BB84();
  row_close();
  return;
}



