#include "common.h"
extern int func_800F4248();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F7270();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_800FCC84();
extern int func_8011CC98();
extern int func_8011D068();
extern int func_8011D9F0();
extern int func_8011EA14();

void func_8011D8E0(void)

{
  int iVar1;
  
  func_800F654C(0x80);
  func_800F8188(0x2115);
  func_800FCC84();
  func_800F654C(1);
  func_800F8188(0x4300);
  func_8011EA14();
  func_800F654C(0x20);
  func_800F824C(7);
  func_800F654C(0);
  func_800F824C(8);
  do {
    func_800F6630(8);
    func_800F4248(0x1f);
    func_800F824C(0x3e);
    func_800F654C(0);
    func_800F824C(0x3d);
    func_800F7270(0x3d);
    func_800F8D6C(0x43);
    func_8011CC98();
    func_8011D068();
    func_8011D9F0();
    func_800F654C(0x10);
    func_800F824C(0x3d);
    func_800F7270(0x3d);
    func_800F8D6C(0x43);
    func_8011CC98();
    func_8011D068();
    func_8011D9F0();
    func_800F62BC(8);
    func_800F5DA0(7);
    iVar1 = func_800F5B8C(2);
  } while (iVar1 == 0);
  return;
}



