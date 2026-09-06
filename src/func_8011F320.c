#include "common.h"
extern int func_800F6630();
extern int func_800F81E8();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_80177DEC();

void func_8011F320(void)

{
  func_800F9200();
  func_80177DEC();
  func_800F6630(0x88);
  func_800F81E8(0x2100);
  func_800F93DC();
  return;
}



