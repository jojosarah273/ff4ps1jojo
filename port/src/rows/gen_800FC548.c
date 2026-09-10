/* FF4 source-port — interpreted module for cell_0xfc548.
 * Ground truth: src/cell_0xfc548.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_800F8D00();
extern int func_800F8F74();

void cell_0xfc548(void)

{
  latch(0x5c);
  txt_draw(0x200);
  txt_draw(0x204);
  wnd_open(0x92a5);
  label(0x201);
  cell_clear_bank(0x203);
  wnd_open(0x9480);
  label(0x205);
  cell_clear_bank(0x207);
  return;
}



