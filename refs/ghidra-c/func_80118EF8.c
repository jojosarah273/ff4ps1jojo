
void FUN_80118ef8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_80117594();
  FUN_800f824c(6);
  FUN_800f7500(0);
  do {
    FUN_800f6d70(0x1440);
    uVar1 = FUN_800f3c3c(6);
    FUN_800f54d4(uVar1);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) {
      FUN_800f654c(0);
      FUN_800f8960(0x1440);
      FUN_800f8960(0x1441);
      FUN_8011ea5c();
      return;
    }
    *DAT_8019ed58 = *DAT_8019ed58 + 2;
    FUN_800f5a90(0x60);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_800f71dc(0);
  do {
    FUN_800f6b68(0x1033);
    uVar1 = FUN_800f3c3c(6);
    FUN_800f54d4(uVar1);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) {
      FUN_800f90ec(0x1033);
      FUN_800f90ec(0x1034);
      FUN_8011ea5c();
      return;
    }
    FUN_80117df8();
    FUN_800f5958(0x140);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_8011ea5c();
  return;
}



