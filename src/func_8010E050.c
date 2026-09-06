#include "common.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_8010E0D0();
extern int func_8011EA5C();

void func_8010E050(void)

{
  func_800F654C(0x80);
  func_800F8188(0x2100);
  func_800F654C(0);
  func_800F8188(0x4200);
  func_800F654C(0xff);
  func_800F8188(0x2140);
  func_8010E0D0();
  func_8011EA5C();
  return;
}



