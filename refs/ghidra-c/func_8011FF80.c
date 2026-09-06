
void FUN_8011ff80(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_8019ed90 == 1) {
    FUN_801360ac();
  }
  while ((DAT_8019ed90 != 1 || (iVar1 = FUN_801360ec(), -1 < iVar1))) {
    FUN_8011f320();
    FUN_8011f884();
    FUN_800f6630(0);
    uVar2 = FUN_800f3c3c(1);
    FUN_800f78c4(uVar2);
    iVar1 = FUN_800f7918(2);
    if (iVar1 == 0) {
      FUN_800f9448();
      FUN_800f960c();
      FUN_800f95a0();
      FUN_800f93dc();
      if (DAT_8019ed90 == 1) {
        FUN_80136148();
      }
      return;
    }
  }
  DAT_8019ed90 = 2;
  FUN_80136148();
  FUN_800f9448();
  FUN_800f960c();
  FUN_800f95a0();
  FUN_800f93dc();
  return;
}



