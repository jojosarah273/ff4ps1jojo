#include "common.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F8768();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F90EC();

void func_800FA834(void)

{
  int iVar1;
  
  func_800F8F74(0x1700);
  func_800F8F74(0x1701);
  func_800F8F74(0x1703);
  func_800F8F74(0x170f);
  func_800F8F74(0x1712);
  func_800F8F74(0x1718);
  func_800F8F74(0x171c);
  func_800F8F74(0x1720);
  func_800F8F74(0x1724);
  func_800F8F74(0x1728);
  func_800F8F74(0x172b);
  func_800F8F74(0x171b);
  func_800F8F74(0x171f);
  func_800F8F74(0x1723);
  func_800F8F74(0x1727);
  func_800F71DC(0);
  func_800F8D00(0x172c);
  func_800F71DC(0);
  do {
    func_800F6C68(0x12f200);
    func_800F8768(0x12e0);
    func_800F6364();
    func_800F5958(0x40);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F71DC(0);
  do {
    func_800F6C68(0x12f240);
    func_800F8768(0x1280);
    func_800F6364();
    func_800F5958(0x20);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F71DC(0);
  do {
    func_800F90EC(0x12a0);
    func_800F6364();
    func_800F5958(0x20);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F654C(0xfe);
  func_800F8188(0x149c);
  func_800F654C(0xff);
  func_800F8188(0x149e);
  func_800F654C(1);
  func_800F8188(0x149d);
  func_800F8188(0x149f);
  return;
}



