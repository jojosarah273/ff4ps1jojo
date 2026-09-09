/* FF4 source-port — interpreted module for func_8014E38C.
 * Ground truth: src/func_8014E38C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F8188();
extern int func_800F8F74();
extern int func_800F971C();

void func_8014E38C(void)

{
  int iVar1;
  
  sep();
  txt_draw(0xf42e);
  txt_draw(0xefc7);
  txt_draw(0xefd7);
  txt_draw(0xefe7);
  txt_draw(0xeff7);
  txt_draw(0xf007);
  txt_draw(0xf281);
  txt_draw(0xf283);
  txt_draw(0xf451);
  txt_set(0xf44e);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    func_800F8F74(0xef87);
  }
  txt_set(0xf279);
  txt_draw(0xf466);
  return;
}



