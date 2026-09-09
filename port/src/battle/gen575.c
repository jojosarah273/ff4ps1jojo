/* FF4 source-port — interpreted module for func_8011D9F0.
 * Ground truth: src/func_8011D9F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800FCCBC();

void func_8011D9F0(void)

{
  page(0x99);
  label(0x2116);
  func_800F8F74(0x420b);
  wnd_open(0xadb);
  label(0x4302);
  wnd_open(0x40);
  label(0x4305);
  func_800FCCBC();
  page(0x9d);
  label(0x2116);
  func_800F8F74(0x420b);
  wnd_open(0xb1b);
  label(0x4302);
  wnd_open(0x40);
  label(0x4305);
  func_800FCCBC();
  return;
}



