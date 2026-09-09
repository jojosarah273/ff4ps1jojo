/* FF4 source-port — interpreted module for func_80111F34.
 * Ground truth: src/func_80111F34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5E48();
extern int func_800F7170();
extern int func_800F7210();
extern int func_800F8D00();
extern int func_80111FCC();
extern int func_8011EA5C();

void func_80111F34(void)

{
  int iVar1;
  
  page_open(0x172c);
  iVar1 = func_800F7170(2);
  if (iVar1 == 0) {
    func_800F5E48();
    func_800F5E48();
    func_800F5E48();
    label(0x172c);
    func_80111FCC();
  }
  func_8011EA5C();
  return;
}



