
void FUN_8012c250(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f7210(0x1b3c);
  FUN_800f6564(0x1b3b);
  FUN_800f8768(0x1440);
  uVar1 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
  FUN_800f6048(uVar1);
  FUN_800f6630(0xe8);
  FUN_800f5574(3);
  iVar2 = FUN_800f53d4();
  if (iVar2 != 0) {
    FUN_800f6564(0x1b22);
    iVar2 = FUN_800f6434(0x202);
    if (iVar2 == 0) {
      FUN_8012b168();
      FUN_8011f684();
    }
  }
  FUN_8012219c();
  FUN_8011ff40();
  return;
}



