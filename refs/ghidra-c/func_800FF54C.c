
void FUN_800ff54c(void)

{
  int iVar1;
  
  FUN_800ff5ec();
  FUN_800f654c(0x30);
  FUN_8011b6b4();
  FUN_800f5574(0);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f654c(0x3d);
    FUN_8011b6b4();
    FUN_800f5574(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f654c(1);
      FUN_800f824c(0xb1);
      FUN_800f654c(0xc6);
      FUN_801163e8();
      FUN_800f8fb8(0xb1);
    }
  }
  FUN_800ff704();
  return;
}



